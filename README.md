# ros2_action_availabilities_ws

Client and server side tools for working with Action Availabilities.
CLI tools, and a python API to create your own nodes which use Action Availabilities

An Action Availabilty is a message type to be published on a topic that advertsises if the `goal_callback` of an `ActionServer` will return `GoalResponse.ACCEPT` or `GoalResponse.REJECT` (i.e is the action available).

Action Availabilities are dependent on Conditions (e.g 4 Conditions must be active for the Action to be available). Conditions are another message type that describe a particular state of your system.

## CLI Interface:
TODO

## Python API:
TODO
