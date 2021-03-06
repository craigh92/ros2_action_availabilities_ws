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

def parse_args(args=None):
    
    parser = argparse.ArgumentParser(description=
        'CLI Tool to make an action server')

    parser.add_argument('--name', required=True,
        help='The name of the action')

    parser.add_argument('--delay', required=True, type=float,
        help='The time delay between printing each letter')

    return parser.parse_args()


class HelloActionServer:
    """
    Adds an action server with name <action_name> to the node <node>.
    The action prints the word "hello world!", one letter at a time.
    """

    def __init__(self, node : Node, action_name : str, delay : float, future : Optional[Future] = None):

        self.__actsrvr = ActionServer(
            node,
            Trigger,
            action_name,
            execute_callback=self.__execute_callback,

            cancel_callback=lambda cancel_request : (
                print(''),
                node.get_logger().info("Canceling goal..."),
                CancelResponse.ACCEPT)[-1],
            
            goal_callback=lambda goal_request : (
                inprog := self.__goal_handle is not None,
                self.__node.get_logger().info("Rejecting as action allready in progress") if inprog else None,
                GoalResponse.REJECT if inprog else GoalResponse.ACCEPT
                )[-1]
            )

        self.__node = node
        self.__future = future
        self.__delay = delay
        self.__action_name = action_name

    def abort(self):
        if self.__goal_handle is not None:
            self.__goal_handle.abort()

    __goal_handle : Optional[ServerGoalHandle] = None

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

    def __count_status_subscribers(self) -> int:
        #Could use to find out if client that called is still alive
        topic_name = self.__action_name + "/_action/status"
        return self.__node.count_subscribers(topic_name)

class HelloActionServerNode(Node):
    """
    Wraps a HelloActionServer as a ros node
    """
    def __init__(self, action_name : str, delay : float, future : Optional[Future] = None):
        super().__init__("hello_action_node" + str(os.getpid()))
        self.actnsrv = HelloActionServer(self, action_name, delay, future)

    def abort(self):
        self.actnsrv.abort()

def main():

    args = parse_args()
    rclpy.init()
    exe = MultiThreadedExecutor()
    future = Future()
    node = HelloActionServerNode(args.name, args.delay, future)
    node.get_logger().info("Node started")
    exe.add_node(node)

    try:        
        exe.spin_until_future_complete(future, timeout_sec=200)
        exe.spin_once()
    except KeyboardInterrupt:
        node.get_logger().info("KeyboardInterrupt: Aborting all goals")
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