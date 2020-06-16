# generated from rosidl_generator_py/resource/_idl.py.em
# with input from action_availabilities_msgs:msg/ActionAvailability.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ActionAvailability(type):
    """Metaclass of message 'ActionAvailability'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('action_availabilities_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'action_availabilities_msgs.msg.ActionAvailability')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__action_availability
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__action_availability
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__action_availability
            cls._TYPE_SUPPORT = module.type_support_msg__msg__action_availability
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__action_availability

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ActionAvailability(metaclass=Metaclass_ActionAvailability):
    """Message class 'ActionAvailability'."""

    __slots__ = [
        '_action_name',
        '_available',
        '_required_conditions',
        '_unmet_conditions',
    ]

    _fields_and_field_types = {
        'action_name': 'string',
        'available': 'boolean',
        'required_conditions': 'sequence<string>',
        'unmet_conditions': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.action_name = kwargs.get('action_name', str())
        self.available = kwargs.get('available', bool())
        self.required_conditions = kwargs.get('required_conditions', [])
        self.unmet_conditions = kwargs.get('unmet_conditions', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.action_name != other.action_name:
            return False
        if self.available != other.available:
            return False
        if self.required_conditions != other.required_conditions:
            return False
        if self.unmet_conditions != other.unmet_conditions:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def action_name(self):
        """Message field 'action_name'."""
        return self._action_name

    @action_name.setter
    def action_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'action_name' field must be of type 'str'"
        self._action_name = value

    @property
    def available(self):
        """Message field 'available'."""
        return self._available

    @available.setter
    def available(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'available' field must be of type 'bool'"
        self._available = value

    @property
    def required_conditions(self):
        """Message field 'required_conditions'."""
        return self._required_conditions

    @required_conditions.setter
    def required_conditions(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'required_conditions' field must be a set or sequence and each value of type 'str'"
        self._required_conditions = value

    @property
    def unmet_conditions(self):
        """Message field 'unmet_conditions'."""
        return self._unmet_conditions

    @unmet_conditions.setter
    def unmet_conditions(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'unmet_conditions' field must be a set or sequence and each value of type 'str'"
        self._unmet_conditions = value
