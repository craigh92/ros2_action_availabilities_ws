import rclpy
from rclpy.node import Node
from action_availabilities.avl_action import ConditionalAction, ServerGoalHandle
from rclpy.executors import MultiThreadedExecutor
from action_availabilities_msgs.action import Trigger
from typing import Callable
from action_msgs.msg._goal_status import Metaclass_GoalStatus
import time

def until(expression: Callable[[None], bool],
    function: Callable[[None],None],
    exception: Callable[[None], bool],
    exception_callback: Callable[[None],None]):

    while ((expression() != True) and (exception() != True)):
        function()
    if exception() == True:
        exception_callback()

def add_type_annotation(val: ServerGoalHandle) -> ServerGoalHandle:
    return val

STATUS_CANCELING : int = Metaclass_GoalStatus("GoalStatus",(),{}).STATUS_CANCELING

class TestActionManager(Node):
    def __init__(self):
        super().__init__("test_action_manager")

        ConditionalAction(self,
            action_type = Trigger,
            action_name = 'start_procedure_a',
            execute_callback_inner = lambda goal_handle : (
                gh := add_type_annotation(goal_handle),
                timeout_start := time.time(),
                until(
                    expression = lambda : time.time() > timeout_start + 10,
                    function = lambda :(
                        pc := ((time.time() - timeout_start)/ 10) * 100,
                        self.get_logger().info("Publishing percent complete: {}%".format(pc)),
                        gh.publish_feedback(Trigger.Feedback(percent_complete = pc)),
                        time.sleep(0.5)
                    ),
                    exception = lambda : gh.status == STATUS_CANCELING,
                    exception_callback = lambda : (
                        self.get_logger().info("Cancelled!")
                    )
                ),
                gh.succeed(),
                Trigger.Result(success=True, message='')
            )[-1],
            conditions = ['has_been_greeted']
        )

if __name__ == "__main__":
    rclpy.init()
    node = TestActionManager()
    exe = MultiThreadedExecutor()
    exe.add_node(node)
    exe.spin()