import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer, GoalResponse
from rclpy.action.server import ServerGoalHandle, CancelResponse
from action_availabilities_msgs.action import Trigger
import argparse
import sys
import os
import time
from action_availabilities.avl_action import AvlActionServer
from typing import Any, List, Dict, Optional, Callable
from conditions.message_equality_tester_node import TopicAndValuesPair
from rclpy.task import Future
from rclpy.executors import Executor, MultiThreadedExecutor
from rclpy.handle import InvalidHandle
from action_msgs.msg import GoalInfo, GoalStatus
from action_msgs.msg._goal_status import Metaclass_GoalStatus
import yaml
from typing import List, Dict, Union
from action_availabilities.make_available_when_args import make_available_when_args, MakeAvailableWhenArgs, example_arg
from argparse import RawTextHelpFormatter

def parse_args(args=None):
    
    parser = argparse.ArgumentParser(formatter_class=RawTextHelpFormatter, description=
        'CLI Tool to make an action server')

    parser.add_argument('--name', required=True,
        help='The name of the action')

    parser.add_argument('--delay', required=True, type=float,
        help='The time delay between printing each letter')

    parser.add_argument('--make_available_when', type=make_available_when_args,
        help='The conditions required for this action to be available. YAML format. e.g \"{}\"'.format(example_arg))

    return parser.parse_args()


class HelloAvlActionServer:
    """
    Adds an action server with name <action_name> to the node <node>.
    The action prints the word "hello world!", one letter at a time.
    """

    def __init__(self, node : Node, action_name : str, delay : float, future : Optional[Future] = None):

        self.__actsrvr = AvlActionServer(
            node,
            Trigger,
            action_name,
            execute_callback=self.__execute_callback
            )

        self.__node = node
        self.__future = future
        self.__delay = delay
        self.__action_name = action_name

    def abort(self):
        if self.__goal_handle is not None:
            self.__goal_handle.abort()

    def make_available_when(self, args : MakeAvailableWhenArgs):
        for cond in args.conditions:
            if cond.scheme == "allof":

                topics_and_values : List[TopicAndValuesPair] = []
                for topic_and_value in cond.required_states:
                    topics_and_values.append(TopicAndValuesPair(topic_and_value.topic_name,
                        topic_and_value.topic_type, topic_and_value.required_values))

                self.__actsrvr.make_available_if_all_last_messages_equals(cond.name, topics_and_values)

    __goal_handle = None
    def __execute_callback(self, goal_handle : ServerGoalHandle):

        self.__goal_handle = goal_handle

        self.__node.get_logger().info("Goal accepted")

        feedback_msg = Trigger.Feedback()
        feedback_msg.percent_complete = 0.0

        for letter in "Hello World":

            ret = self.__handle_if_canceled(goal_handle)
            if ret is not None: return ret

            ret = self.__handle_if_aborted(goal_handle)
            if ret is not None: return ret
            print(letter, end='', flush=True)
            feedback_msg.percent_complete += (100/11)
            goal_handle.publish_feedback(feedback_msg)
            time.sleep(self.__delay)

        print('!')

        goal_handle.succeed()
        
        result = Trigger.Result()
        result.success = True
        result.message = "Success"
        
        if self.__future is not None:
            self.__future.set_result(True)
        self.__node.get_logger().info("Goal completed")

        self.__goal_handle = None

        return result
    
    def __handle_if_canceled(self, goal_handle : ServerGoalHandle):
        STATUS_CANCELING : int = Metaclass_GoalStatus("GoalStatus",(),{}).STATUS_CANCELING
        if goal_handle.status == STATUS_CANCELING:
            goal_handle.canceled()
            self.__node.get_logger().info("Goal cancelled")
            result = Trigger.Result()
            result.success = False
            result.message = "Cancelled"
            if self.__future is not None:
                self.__future.set_result(False)
            return result
        return None

    def __handle_if_aborted(self, goal_handle : ServerGoalHandle):
        STATUS_ABORTED : int = Metaclass_GoalStatus("GoalStatus",(),{}).STATUS_ABORTED
        if goal_handle.status == STATUS_ABORTED:
            self.__node.get_logger().info("Goal aborted")
            result = Trigger.Result()
            result.success = False
            result.message = "Aborted"
            if self.__future is not None:
                self.__future.set_result(False)
            return result
        return None

class HelloAvlActionServerNode(Node):
    """
    Wraps a HelloActionServer as a ros node
    """
    def __init__(self, action_name : str, delay : float, future : Optional[Future] = None):
        super().__init__("hello_action_node" + str(os.getpid()))
        self.actnsrv = HelloAvlActionServer(self, action_name, delay, future)

    def abort(self):
        self.actnsrv.abort()

    def make_available_when(self, args : MakeAvailableWhenArgs):
        self.actnsrv.make_available_when(args)

def main():

    args = parse_args()
    rclpy.init()
    exe = MultiThreadedExecutor()
    node = HelloAvlActionServerNode(args.name, args.delay)

    if args.make_available_when is not None:
        node.make_available_when(args.make_available_when)

    node.get_logger().info("Node started")
    exe.add_node(node)

    exe.spin()

    node.abort()

    node.get_logger().info("Node finished")
    
    # node.destroy_node()
    # rclpy.shutdown()

if __name__ == '__main__':

    try:
        main()
    except KeyboardInterrupt:
        sys.exit(0)

    import sys
    try:
        sys.exit(0)
    except InvalidHandle:
        print("dtor error")
        sys.exit(1)
    except Exception as e:
        print(str(e))
        sys.exit(0)