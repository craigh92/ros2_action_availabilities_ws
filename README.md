# ros2_action_availabilities_ws

Client and server side tools for working with Action Availabilities.
CLI tools, and a python API to create your own nodes which use Action Availabilities

An Action Availabilty is a message type to be published on a topic that advertsises if the `goal_callback` of an `ActionServer` will return `GoalResponse.ACCEPT` or `GoalResponse.REJECT` (i.e is the action available).

Action Availabilities are dependent on Conditions (e.g 4 Conditions must be active for the Action to be available). Conditions are another message type that describe a particular state of your system.

## CLI Interface:
#### Condition Publisher Minimal Example:
 
Open a terminal and run
```
ros2 run action_availabilities condition_publisher --name last_message_was_hello --single_topic_equality_predicate "{topic : chatter, type: std_msgs/msg/String, expected_value: {data: hello}}"
``` 

This creates a topic `last_message_was_hello` that publishes messages whenever a message on the `chatter` topic is published. The value of the Condition message will be ACTIVE if the value of the String message is equal to the expected value, as described in `--single_topic_equality_predicate`.
 
In another terminal all echo messages on the `last_message_was_hello` topic:
```
ros2 topic echo last_message_was_hello action_availabilities_msgs/msg/Condition --qos-durability transient_local
```

Notice how the last message appears, even though it was publsihed before the topic echo node started. This is because messages have transient local durability. The Condition will have value UNKNOWN, because a `chatter` message hasn't been published yet, so it cannot test for equality.

In another terminal type:
```
ros2 topic pub chatter std_msgs/msg/String "{data: foo}"
```

Notice how a new message has appeard in the echo node. The `last_message_was_hello` topic publishes the Condition INACTIVE, because the last message was not hello.

Close this terminal and type:
```
ros2 topic pub chatter std_msgs/msg/String "{data: hello}"
```
The `last_message_was_hello` topic now publishes the Condition ACTIVE, because the last message was hello.

## Python API:
TODO
