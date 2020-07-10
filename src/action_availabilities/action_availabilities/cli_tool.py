import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
import argparse
import sys

def main(args=None):

    parser = argparse.ArgumentParser(description=
        'CLI Interface for interacting with Action Availabilities')

    parser.parse_args()

    if len(sys.argv)==1:
        parser.print_help(sys.stdout)
        sys.exit(0)


if __name__ == '__main__':
    main()