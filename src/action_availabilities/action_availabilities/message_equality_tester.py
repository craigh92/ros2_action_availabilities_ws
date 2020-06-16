import rclpy
from rclpy.node import Node
from typing import Callable, Any, Map
from rclpy.qos import QoSProfile, QoSDurabilityPolicy
from rosidl_runtime_py.utilities import get_message
from rclpy.task import Future
import sys
import os

def default_callback(val : bool, actual_msg : Any, expected_values : Map):
    print("Equality Tested: " + str(val))
    if val is False:
        print("Expected:")
        print(str(expected_values))
        print("Got:")
        print(str(actual_msg))

class MessageEqualityTester:

    def __init__(self, node : Node, topic_name: str, message_type : str, expected_values : Map, callback : Callable[[bool, Any, Map],None] = default_callback):
        
        self.callback = callback
        self.__expected_values = expected_values

        latching_qos = QoSProfile(depth=1,
            durability=QoSDurabilityPolicy.RMW_QOS_POLICY_DURABILITY_TRANSIENT_LOCAL)
        
        self.__sub = node.create_subscription(get_message(message_type), topic_name, self.__sub_callback,
            qos_profile=latching_qos)

    def __sub_callback(self, actual_msg):
        equal = True
        for key in self.__expected_values:
            expected_value = self.__expected_values[key]
            actual_value = getattr(actual_msg, key)
            if actual_value is None:
                print("message type \"" + str(type(actual_msg)), "\" does not have an attribute \"" + key +"\"", file=sys.stderr)
                equal = False
            if actual_value is not expected_value:
                equal = False

        self.callback(equal, actual_msg, self.__expected_values)

class MessageEqualityTesterNode(Node):

    def __init__(self, topic_name: str, message_type : str, expected_values : Map, future_result : Future):
        
        super().__init__('message_equality_tester' + str(os.getpid()))
        
        self.__tester = MessageEqualityTester(self, topic_name, message_type, expected_values,
            self.__callback)

        self.__future_result = future_result

    def __callback(self, val : bool, actual_msg : Any, expected_values : Map):
        default_callback(val, actual_msg, expected_values)
        self.__future_result.set_result(val)