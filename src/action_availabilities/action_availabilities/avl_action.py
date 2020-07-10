from rclpy.action import ActionServer, GoalResponse
from rclpy.action.server import *
from conditions.condition_publisher import ConditionPublisher, ConditionEnum
from enum import Enum
from typing import Any, List, Dict, Optional
from rclpy.node import Node
from action_availabilities_msgs.msg import ActionAvailability
from conditions.minimal_latching_publisher import latching_qos
from condition_msgs.msg import Condition
from conditions.message_equality_tester_node import TopicAndValuesPair

#TODO get the unmet conditions array working

class AvlActionServer(ActionServer):

    """
    Extends the action server class to add methods to drive its availabiliy based on Conditions.
    It also advertises this availability on an ActionAvailabity topic name <action_name>_availability.
    Availability means if the `goal_callback` of the action server will return GoalResponse.ACCEPT or GoalResponse.REJECT
    """

    def __init__(
        self,
        node : Node,
        action_type,
        action_name,
        execute_callback,
        *,
        callback_group=None,
        handle_accepted_callback=default_handle_accepted_callback,
        cancel_callback=lambda cancel_request : (
                print(''),
                node.get_logger().info("Canceling goal..."),
                CancelResponse.ACCEPT)[-1],
        goal_service_qos_profile=qos_profile_services_default,
        result_service_qos_profile=qos_profile_services_default,
        cancel_service_qos_profile=qos_profile_services_default,
        feedback_pub_qos_profile=QoSProfile(depth=10),
        status_pub_qos_profile=qos_profile_action_status_default,
        result_timeout=900):

        super().__init__(
            node,
            action_type,
            action_name,
            self.__decortated_execute_callback, 
            callback_group=callback_group,
            goal_callback=self.default_goal_callback,
            handle_accepted_callback=handle_accepted_callback,
            cancel_callback=cancel_callback,
            goal_service_qos_profile=goal_service_qos_profile,
            result_service_qos_profile=result_service_qos_profile,
            cancel_service_qos_profile=cancel_service_qos_profile,
            feedback_pub_qos_profile=feedback_pub_qos_profile,
            status_pub_qos_profile=status_pub_qos_profile,
            result_timeout=result_timeout)

        self.__node = node
        self.__action_name = action_name
        self.__execute_callback = execute_callback
        self.available = True

        #Create a publisher to advertise the action availability
        self.__avlpub = self.__node.create_publisher(ActionAvailability, self.__action_name + "_availability",
            qos_profile=latching_qos)

        self.__required_conditions : List[str] = ["not_allready_running"]
        self.__unmet_conditions : List[str] = []

        self.__publish_availability_msg()

    __inprogpress = False
    def __decortated_execute_callback(self, goal_handle : ServerGoalHandle):
        self.__inprogpress = True
        self.__update_and_publish_availabilitys(new_met_conditions=None, new_unmet_conditions=["not_allready_running"])
        result = self.__execute_callback(goal_handle)
        self.__update_and_publish_availabilitys(new_met_conditions=["not_allready_running"], new_unmet_conditions=None)
        self.__inprogpress = False
        return result

    def make_available_if_last_message_equals(self, condition_name : str, topic_name : str, topic_type : Any,
        expected_values : Dict[str,str]):
        
        self.__required_conditions.append(condition_name)

        #Publish a condition message (describing if <topic_name> message equals expected value) on receit of message on <topic_name>
        self.__condpub = ConditionPublisher(self.__node, condition_name)
        self.__condpub.add_single_equality_check(topic_name, topic_type, expected_values)
        
        #Subscribe to that condition message, and publish an ActionAvaliablity message driven by that condition
        #Also set the goal_callback to reject the request if the action is unavailable
        self.__create_condition_subscription(condition_name)


    def make_available_if_all_last_messages_equals(self, condition_name : str, topics_and_expected_values : List[TopicAndValuesPair]):
        
        self.__required_conditions.append(condition_name)

        #Publish a condition message (describing if <topic_name> message equals expected value) on receit of message on <topic_name>
        self.__condpub = ConditionPublisher(self.__node, condition_name)
        self.__condpub.add_allof_equality_check(topics_and_expected_values)

        #Subscribe to that condition message, and publish an ActionAvaliablity message driven by that condition
        #Also set the goal_callback to reject the request if the action is unavailable
        self.__create_condition_subscription(condition_name)

    def __publish_availability_msg(self):
        self.__node.get_logger().info("Publishing availability message : {}".format(self.available))
        msg = ActionAvailability()
        msg.available = self.available
        msg.action_name = self.__action_name
        msg.required_conditions = self.__required_conditions
        msg.unmet_conditions = self.__unmet_conditions
        self.__avlpub.publish(msg)

    def __update_and_publish_availabilitys(self, new_met_conditions : Optional[List[str]], new_unmet_conditions : Optional[List[str]]):
        if new_met_conditions is not None:
            for cond in new_met_conditions:
                self.__remove_from_unmet_conditions(cond)
        if new_unmet_conditions is not None:
            for cond in new_unmet_conditions:
                self.__add_to_unmet_conditions(cond)         
        
        if len(self.__unmet_conditions) == 0: self.available = True
        else: self.available = False

        self.__publish_availability_msg()

    def default_goal_callback(self, goal_request):
        #Allways Reject if allready running
        if self.__inprogpress:
            self.__node.get_logger().info("Rejected {} as action allready in progress".format(goal_request))
            return GoalResponse.REJECT
        #Otherwise Accept
        return GoalResponse.ACCEPT

    def __set_goal_callback_responce(self, responce : GoalResponse):
        
        def cb(goal_request, responce=responce):

            #Allways Reject if allready running
            if self.__inprogpress:
                self.__node.get_logger().info("Rejected {} as action allready in progress".format(goal_request))
                return GoalResponse.REJECT

            #Accept or reject based on input
            self.__node.get_logger().info("{} {} request".format(
                "Accepted " if responce is GoalResponse.ACCEPT else "Rejected ", self.__action_name))
            return responce
        
        self._goal_callback = cb

    def __create_condition_subscription(self, condition_name : str):
        
        self.__node.create_subscription(Condition, condition_name,
            callback = lambda msg : (
                
                self.__node.get_logger().info("New condition message received : {}".format(msg.condition)),

                condition := ConditionEnum(msg.condition),
                switch := {
                    ConditionEnum.ACTIVE : lambda : self.__update_and_publish_availabilitys(new_met_conditions=[condition_name], new_unmet_conditions=None),
                    ConditionEnum.INACTIVE : lambda : self.__update_and_publish_availabilitys(new_met_conditions=None, new_unmet_conditions=[condition_name]),
                    ConditionEnum.UNKNOWN : lambda : self.__update_and_publish_availabilitys(new_met_conditions=None, new_unmet_conditions=[condition_name])

                },
                switch[condition](),

                #Set the action goal callback to accept or reject based on status of condition
                self.__set_goal_callback_responce(
                    GoalResponse.ACCEPT if condition is ConditionEnum.ACTIVE else GoalResponse.REJECT)
            ),
            qos_profile = latching_qos)

    def __add_to_unmet_conditions(self, condition_name : str):
        self.__unmet_conditions.append(condition_name)

    def __remove_from_unmet_conditions(self, condition_name : str):
        if condition_name in self.__unmet_conditions: self.__unmet_conditions.remove(condition_name)