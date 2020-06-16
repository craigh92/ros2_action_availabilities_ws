from rclpy.node import Node
import os

class ConditionPublisher:
    def __init__(self, node : Node):
        self.__node = node

class ConditionPublisherNode(Node):
    def __init__(self):
        super().__init__('condition_publisher_' + str(os.getpid()))
        self.__condpub = ConditionPublisher(self)