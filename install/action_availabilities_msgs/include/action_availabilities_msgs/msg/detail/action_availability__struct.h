// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from action_availabilities_msgs:msg/ActionAvailability.idl
// generated code does not contain a copyright notice

#ifndef ACTION_AVAILABILITIES_MSGS__MSG__DETAIL__ACTION_AVAILABILITY__STRUCT_H_
#define ACTION_AVAILABILITIES_MSGS__MSG__DETAIL__ACTION_AVAILABILITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'action_name'
// Member 'required_conditions'
// Member 'unmet_conditions'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/ActionAvailability in the package action_availabilities_msgs.
typedef struct action_availabilities_msgs__msg__ActionAvailability
{
  rosidl_runtime_c__String action_name;
  bool available;
  rosidl_runtime_c__String__Sequence required_conditions;
  rosidl_runtime_c__String__Sequence unmet_conditions;
} action_availabilities_msgs__msg__ActionAvailability;

// Struct for a sequence of action_availabilities_msgs__msg__ActionAvailability.
typedef struct action_availabilities_msgs__msg__ActionAvailability__Sequence
{
  action_availabilities_msgs__msg__ActionAvailability * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_availabilities_msgs__msg__ActionAvailability__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACTION_AVAILABILITIES_MSGS__MSG__DETAIL__ACTION_AVAILABILITY__STRUCT_H_
