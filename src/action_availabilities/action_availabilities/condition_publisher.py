from rclpy.node import Node
import os
import typing
from typing import List, Optional
from action_availabilities_msgs.msg import AvailabilityCondition
from rclpy.qos import QoSProfile, QoSDurabilityPolicy
from enum import IntEnum

class AvailabilityConditionEnum(IntEnum):
    ACTIVE=0
    INACTIVE=1
    SHELVED=2
    SUPPRESSED=3
    UNKNOWN=4

class ConditionPublisher:
    def __init__(self, node : Node, condition_name : str):
        latching_qos = QoSProfile(depth=1,
            durability=QoSDurabilityPolicy.RMW_QOS_POLICY_DURABILITY_TRANSIENT_LOCAL)
        self.__pub = node.create_publisher(AvailabilityCondition, condition_name, latching_qos)

    def publish(self, condition : AvailabilityConditionEnum, message : str=""):
        msg = AvailabilityCondition()
        msg.condition = int(condition)
        msg.message = message
        self.__pub.publish(msg)

class ConditionPublishers:
    self.__pubs = {}
    def __init__(self, node : Node, condition_names : List[str]):
        for condition_name in condition_names:
            self.__pubs[condition_name] = ConditionPublisher(self, condition_name)

    def publish(self, condition_name : str, condition : AvailabilityConditionEnum, message : str=""):
        self.__pubs[condition_name].publish(condition, message)


class ConditionPublisherNode(Node):
    def __init__(self, name : str):
        super().__init__('condition_publisher_' + str(os.getpid()))
        self.__condpub = ConditionPublisher(self, name)

    def publish(self, condition : AvailabilityConditionEnum, message : str=""):
        self.__condpub.publish(condition, message)