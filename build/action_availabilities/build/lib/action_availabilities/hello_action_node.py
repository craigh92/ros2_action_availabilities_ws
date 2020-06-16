import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer, GoalResponse
from action_availabilities_msgs.action import Trigger
import argparse
import sys
import os
import time

def parse_args(args=None):
    
    parser = argparse.ArgumentParser(description=
        'CLI Tool to make an action server')

    parser.add_argument('--name', required=True,
        help='The name of the action')

    # parser.add_argument('--conditions',
    #     help='The availabilty conditions that must be active in order for the action to be available')

    if len(sys.argv)==1:
        parser.print_help(sys.stdout)
        sys.exit(0)

    return parser.parse_args()


class HelloActionServer:
    """
    Adds an action server with name <action_name> to the node <node>
    The action prints the word "hello world", one letter at a time.
    """

    def __init__(self, node : Node, action_name : str):

        self.__actsrvr = ActionServer(node, Trigger, action_name,
        execute_callback=self.__execute_callback,
        goal_callback=self.__goal_received_callback)

    def __execute_callback(self, goal_handle):
    
        feedback_msg = Trigger.Feedback()
        feedback_msg.percent_complete = 0.0

        hw = "Hello World"
        for letter in hw:
            print(letter, end='', flush=True)
            feedback_msg.percent_complete += (100/11)
            goal_handle.publish_feedback(feedback_msg)
            time.sleep(0.2)
        print('!')

        goal_handle.succeed()
        
        result = Trigger.Result()
        result.success = True
        result.message = "Success"
        return result

    def __goal_received_callback(self, goal_request):
        return GoalResponse.ACCEPT


class HelloActionServerNode(Node):
    """
    Wraps a HelloActionServer as a ros node
    """
    def __init__(self, action_name : str):
        super().__init__("hello_action_node" + str(os.getpid()))
        self.actnsrv = HelloActionServer(self, action_name)

def main():

    args = parse_args()
    rclpy.init()
    node = HelloActionServerNode(args.name)
    print('Node Started!')
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()