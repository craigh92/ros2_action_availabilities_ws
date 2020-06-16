// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from action_availabilities_msgs:msg/AvailabilityCondition.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "action_availabilities_msgs/msg/detail/availability_condition__rosidl_typesupport_introspection_c.h"
#include "action_availabilities_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "action_availabilities_msgs/msg/detail/availability_condition__functions.h"
#include "action_availabilities_msgs/msg/detail/availability_condition__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AvailabilityCondition__rosidl_typesupport_introspection_c__AvailabilityCondition_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_availabilities_msgs__msg__AvailabilityCondition__init(message_memory);
}

void AvailabilityCondition__rosidl_typesupport_introspection_c__AvailabilityCondition_fini_function(void * message_memory)
{
  action_availabilities_msgs__msg__AvailabilityCondition__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AvailabilityCondition__rosidl_typesupport_introspection_c__AvailabilityCondition_message_member_array[2] = {
  {
    "condition",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_availabilities_msgs__msg__AvailabilityCondition, condition),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_availabilities_msgs__msg__AvailabilityCondition, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AvailabilityCondition__rosidl_typesupport_introspection_c__AvailabilityCondition_message_members = {
  "action_availabilities_msgs__msg",  // message namespace
  "AvailabilityCondition",  // message name
  2,  // number of fields
  sizeof(action_availabilities_msgs__msg__AvailabilityCondition),
  AvailabilityCondition__rosidl_typesupport_introspection_c__AvailabilityCondition_message_member_array,  // message members
  AvailabilityCondition__rosidl_typesupport_introspection_c__AvailabilityCondition_init_function,  // function to initialize message memory (memory has to be allocated)
  AvailabilityCondition__rosidl_typesupport_introspection_c__AvailabilityCondition_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AvailabilityCondition__rosidl_typesupport_introspection_c__AvailabilityCondition_message_type_support_handle = {
  0,
  &AvailabilityCondition__rosidl_typesupport_introspection_c__AvailabilityCondition_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_availabilities_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_availabilities_msgs, msg, AvailabilityCondition)() {
  if (!AvailabilityCondition__rosidl_typesupport_introspection_c__AvailabilityCondition_message_type_support_handle.typesupport_identifier) {
    AvailabilityCondition__rosidl_typesupport_introspection_c__AvailabilityCondition_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AvailabilityCondition__rosidl_typesupport_introspection_c__AvailabilityCondition_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
