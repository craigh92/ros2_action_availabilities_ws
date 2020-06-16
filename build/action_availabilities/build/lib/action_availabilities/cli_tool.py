import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
import argparse
import sys

def main(args=None):

    parser = argparse.ArgumentParser(description=
        'CLI Interface for interacting with Action Availabilities')
    sp = parser.add_subparsers()

    #List commands

    list_all_actions = sp.add_parser('list_all_actions',
        help='Lists all actions on the network')
    list_all_actions.add_argument('-t', help='display action type')

    list_actions_with_availabilty = sp.add_parser('list_actions_with_availabilty',
        help='Lists actions that have an associated availability topic')
    list_actions_with_availabilty.add_argument('-t', help='display action type')

    list_availabilty_topics = sp.add_parser('list_availabilty_topics',
        help='Lists all topics that publish action availability messages')

    list_condition_topics = sp.add_parser('list_condition_topics',
        help='Lists topics that publish availability condition messages')
    list_condition_topics.add_argument('-a', help='Print all')
    list_condition_topics.add_argument('--action', help='Print the conditions for a particular action')

    #Echo commands

    echo_availabilty_messages = sp.add_parser('echo_availabilty_messages',
        help='Print all availabilty messages on the network')
    echo_availabilty_messages.add_argument('-d',
        help='Also print messages published in the past (published messaged must have transient local durability) (depth=1)')

    get_action_availability = sp.add_parser('get_action_availability',
        help='Print the last availability message published for an action')
    get_action_availability.add_argument('--action',
        help='The name of the action', required=True)

    echo_condition_messages = sp.add_parser('echo_condition_messages',
        help='Print all condition messages on the network')
    echo_condition_messages.add_argument('-d',
        help='Also print messages published in the past (published messaged must have transient local durability) (depth=1)')

    get_action_condition = sp.add_parser('get_action_condition',
        help='Print the last condition message published for an action')
    get_action_condition.add_argument('--action',
        help='The name of the action', required=True)

    #Publish Commands

    create_action_availability = sp.add_parser('create_action_availability',
        help='Create a publisher that publishes action availability messages')
    create_action_availability.add_argument('--action',
        help='the name of the assocaited action', required=True)
    create_action_availability.add_argument('--conditions',
        help='The conditions that determine this action availability', required=True)

    publish_condition = sp.add_parser('publish_condition',
        help='Publish a single condition message (transient local durability (depth 1))')
    publish_condition.add_argument('--name',
        help='The name of the condition', required=True)
    publish_condition.add_argument('--value',
        help='Is the condition true?', required=True)
    publish_condition.add_argument('--message',
        help='An optional message to go with the condition message')

    parser.parse_args()

    if len(sys.argv)==1:
        parser.print_help(sys.stdout)
        sys.exit(0)

if __name__ == '__main__':
    main()