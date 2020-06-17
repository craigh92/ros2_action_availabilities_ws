import rclpy
from rclpy.node import Node
from typing import Callable, Any, Dict
from rclpy.qos import QoSProfile, QoSDurabilityPolicy
from rosidl_runtime_py.utilities import get_message
from rosidl_runtime_py import set_message_fields
from rclpy.task import Future
import sys
import os
import argparse
import yaml

#TODO open a new PR in ros2/roscli and add this as a new Verb: ros2 topic expect <args>

def default_callback(val : bool, actual_msg : Dict, expected_values : Dict):
    print("Equality Tested: " + str(val))
    if val is False:
        print("Expected:")
        print(str(expected_values))
        print("Got:")
        print(str(actual_msg))

class MessageEqualityTester:

    def __init__(self, node : Node, topic_name: str, message_type : str,
        expected_values : Dict, callback : Callable[[bool, Any, Dict],None] = default_callback):
        
        self.callback = callback
        self.__expected_values = expected_values
        self.__message_type = message_type

        latching_qos = QoSProfile(depth=1,
            durability=QoSDurabilityPolicy.RMW_QOS_POLICY_DURABILITY_TRANSIENT_LOCAL)
        
        self.__sub = node.create_subscription(get_message(message_type), topic_name, self.__sub_callback,
            qos_profile=latching_qos)

    def __sub_callback(self, actual_msg):
        expected_msg = get_message(self.__message_type)()

        equal = True
        try:
            set_message_fields(expected_msg, self.__expected_values)
        except Exception as e:
            print('Failed to populate field: {0}'.format(e))
            raise e

        for field in expected_msg.get_fields_and_field_types():
            expected = str(getattr(expected_msg, field))
            actual = str(getattr(actual_msg, field))
            if expected != actual:
                equal = False

        self.callback(equal, actual_msg, expected_msg)

class MessageEqualityTesterNode(Node):

    def __init__(self, topic_name: str, message_type : str,
        expected_values : Dict, future_result : Future):
        
        super().__init__('message_equality_tester' + str(os.getpid()))
        
        self.__tester = MessageEqualityTester(self, topic_name, message_type, expected_values,
            self.__callback)

        self.__future_result = future_result

    def __callback(self, val : bool, actual_msg : Any, expected_values : Dict):
        default_callback(val, actual_msg, expected_values)
        self.__future_result.set_result(val)

def nonnegative_int(inval):
    ret = int(inval)
    if ret < 0:
        # The error message here gets completely swallowed by argparse
        raise ValueError('Value must be positive or zero')
    return ret

def main():
   
    parser = argparse.ArgumentParser(description=
        'CLI tool for checking message equality')
    parser.add_argument('--name', required=True,
        help='The name of the message to listen for')
    parser.add_argument('--type', required=True,
        help='The type of the message')
    parser.add_argument('--expected', required=True,
        help='The expected values (YAML format)')
    parser.add_argument('--timeout', default=None, type=nonnegative_int,
        help='The amount of time to wait for a message')

    args = parser.parse_args()

    if len(sys.argv)==1:
        parser.print_help(sys.stdout)
        sys.exit(0)
    
    values_dictionary = yaml.safe_load(args.expected)
    if not isinstance(values_dictionary, dict):
        return 'The passed value needs to be a dictionary in YAML format'

    rclpy.init()

    future = Future()

    node = MessageEqualityTesterNode(args.name, args.type, values_dictionary, future)

    rclpy.spin_until_future_complete(node, future, timeout_sec=args.timeout)
    if not future.done():
        node.get_logger().error(
            "Timeout after " + str(args.timeout) + 
            " seccond: No message on \"" + args.name + "\" topic" )

    node.destroy_node()

    rclpy.shutdown()