// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from action_availabilities_msgs:msg/ActionAvailability.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "action_availabilities_msgs/msg/detail/action_availability__rosidl_typesupport_introspection_c.h"
#include "action_availabilities_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "action_availabilities_msgs/msg/detail/action_availability__functions.h"
#include "action_availabilities_msgs/msg/detail/action_availability__struct.h"


// Include directives for member types
// Member `action_name`
// Member `required_conditions`
// Member `unmet_conditions`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ActionAvailability__rosidl_typesupport_introspection_c__ActionAvailability_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_availabilities_msgs__msg__ActionAvailability__init(message_memory);
}

void ActionAvailability__rosidl_typesupport_introspection_c__ActionAvailability_fini_function(void * message_memory)
{
  action_availabilities_msgs__msg__ActionAvailability__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ActionAvailability__rosidl_typesupport_introspection_c__ActionAvailability_message_member_array[4] = {
  {
    "action_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_availabilities_msgs__msg__ActionAvailability, action_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "available",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_availabilities_msgs__msg__ActionAvailability, available),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "required_conditions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_availabilities_msgs__msg__ActionAvailability, required_conditions),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "unmet_conditions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_availabilities_msgs__msg__ActionAvailability, unmet_conditions),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ActionAvailability__rosidl_typesupport_introspection_c__ActionAvailability_message_members = {
  "action_availabilities_msgs__msg",  // message namespace
  "ActionAvailability",  // message name
  4,  // number of fields
  sizeof(action_availabilities_msgs__msg__ActionAvailability),
  ActionAvailability__rosidl_typesupport_introspection_c__ActionAvailability_message_member_array,  // message members
  ActionAvailability__rosidl_typesupport_introspection_c__ActionAvailability_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionAvailability__rosidl_typesupport_introspection_c__ActionAvailability_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ActionAvailability__rosidl_typesupport_introspection_c__ActionAvailability_message_type_support_handle = {
  0,
  &ActionAvailability__rosidl_typesupport_introspection_c__ActionAvailability_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_availabilities_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_availabilities_msgs, msg, ActionAvailability)() {
  if (!ActionAvailability__rosidl_typesupport_introspection_c__ActionAvailability_message_type_support_handle.typesupport_identifier) {
    ActionAvailability__rosidl_typesupport_introspection_c__ActionAvailability_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ActionAvailability__rosidl_typesupport_introspection_c__ActionAvailability_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
