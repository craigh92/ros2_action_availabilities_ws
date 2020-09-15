from rclpy.action import ActionServer, GoalResponse
from rclpy.action.server import *
from conditions.condition_publisher import ConditionPublisher, ConditionEnum
from enum import Enum
from typing import Any, List, Dict, Optional, Callable
from rclpy.node import Node
from action_availabilities_msgs.msg import ActionAvailability
from conditions.minimal_latching_publisher import latching_qos
from condition_msgs.msg import Condition
from conditions.message_equality_tester_node import TopicAndValuesPair

class ConditionalAction(ActionServer):

    """
    Extends the action server class to add methods to drive its availabiliy based on Conditions.
    It also advertises this availability on an ActionAvailabity topic name <action_name>_availability.
    Availability means if the `goal_callback` of the action server will return GoalResponse.ACCEPT or GoalResponse.REJECT
    """

    def __init__(
        self,
        node: Node,
        action_type,
        action_name,
        execute_callback_inner: Callable[[ServerGoalHandle],Any],
        conditions: List[str],
        *,
        callback_group=None,
        handle_accepted_callback=default_handle_accepted_callback,
        cancel_callback=lambda cancel_request : (
                print('(debug) canceling...'),
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
            #Use a decorated version of the execute_callback_inner given in the ctor
            execute_callback = lambda goal_handle : (
                self.__set_in_progress(True),
                result := execute_callback_inner(goal_handle),
                self.__set_in_progress(False),
                result)[-1],
            callback_group=callback_group,
            #goal_callback in where it is decided if this action will be accepted or rejected
            goal_callback=self.__goal_callback,
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
        self.__inprogpress = False

        #Create a publisher to advertise the action availability
        self.__avlpub = self.__node.create_publisher(ActionAvailability, self.__action_name + "_availability",
            qos_profile=latching_qos)

        self.__required_conditions : List[str] = []

        for cond in conditions:
            self.__add_precondition(cond)
        #Assume they are all unmet until a Condition message arrives
        self.__unmet_conditions : List[str] = conditions.copy()
        self.__required_conditions.append("not_allready_running")

        self.__publish_availability_msg()
            
    def __set_in_progress(self, value):
        self.__inprogpress = value
        if value == True:
            self.__update_and_publish_availabilitys(new_met_conditions=None, new_unmet_conditions=["not_allready_running"]),
        else:
            self.__update_and_publish_availabilitys(new_met_conditions=["not_allready_running"], new_unmet_conditions=None),

    def __publish_availability_msg(self):
        msg = ActionAvailability()
        msg.action_name = self.__action_name
        msg.required_conditions = self.__required_conditions
        msg.unmet_conditions = self.__unmet_conditions
        if len(self.__unmet_conditions) == 0:
            msg.available = True
        else:
            msg.available = False
            print(msg.unmet_conditions)

        self.__node.get_logger().info("Publishing availability message : {}".format(msg.available))
        self.__avlpub.publish(msg)

    def __update_and_publish_availabilitys(self, *, new_met_conditions : Optional[List[str]] = None, new_unmet_conditions : Optional[List[str]] = None):
        
        if new_met_conditions is not None:
            assert(isinstance(new_met_conditions, list))
            self.__node.get_logger().info("new condtions met")
            for cond in new_met_conditions:
                self.__remove_from_unmet_conditions(cond)
        if new_unmet_conditions is not None:
            assert(isinstance(new_unmet_conditions, list))
            self.__node.get_logger("new condtions unmet")
            for cond in new_unmet_conditions:
                self.__add_to_unmet_conditions(cond)         
        
        if len(self.__unmet_conditions) == 0: self.available = True
        else: self.available = False

        self.__publish_availability_msg()

    def __goal_callback(self, goal_request):
        #Allways Reject if allready running
        if self.__inprogpress == True:
            self.__node.get_logger().info("Rejected {} as action allready in progress".format(goal_request))
            return GoalResponse.REJECT
        
        #Reject if any of the conditions are unmet
        if len(self.__unmet_conditions) != 0:
            self.__node.get_logger().info("Rejected {} because of unmet conditions {}".format(goal_request, self.__unmet_conditions))
            return GoalResponse.REJECT

        #Otherwise Accept
        return GoalResponse.ACCEPT


    def __add_precondition(self, condition_name : str):
        
        #Add to the list of required conditions
        self.__required_conditions.append(condition_name)

        #Add a subscription that triggers a callback whenever a new message on this topic arrives
        self.__node.get_logger().info("Subscribing to {}".format(condition_name))
        self.__node.create_subscription(Condition, condition_name,
            callback = lambda msg : (
                msg := add_type_annotation(msg),
                self.__node.get_logger().info("New condition message received : {}".format(str(ConditionEnum(msg.condition)))),

                #If the condition is inactive or unknown, add it to the list of unmet conditions
                self.__update_and_publish_availabilitys(new_unmet_conditions = [condition_name]) if (
                    (msg.condition == Condition.INACTIVE) or (msg.condition == Condition.UNKNOWN)) else (),

                #If it is active or shelved, remove it from the list of unmet conditions
                self.__update_and_publish_availabilitys(new_met_conditions = [condition_name]) if (
                    (msg.condition == Condition.ACTIVE) or (msg.condition == Condition.SHELVED)) else ()
            ),
            qos_profile = latching_qos)

    def __add_to_unmet_conditions(self, condition_name : str):
        self.__unmet_conditions.append(condition_name)

    def __remove_from_unmet_conditions(self, condition_name : str):
        if condition_name in self.__unmet_conditions:
            self.__unmet_conditions.remove(condition_name)
        else:
            self.__node.get_logger().error("No condition named {}".format(condition_name))

def add_type_annotation(msg: Condition) -> Condition:
    return msg
