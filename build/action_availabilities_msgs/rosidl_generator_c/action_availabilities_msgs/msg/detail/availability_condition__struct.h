// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from action_availabilities_msgs:msg/AvailabilityCondition.idl
// generated code does not contain a copyright notice

#ifndef ACTION_AVAILABILITIES_MSGS__MSG__DETAIL__AVAILABILITY_CONDITION__STRUCT_H_
#define ACTION_AVAILABILITIES_MSGS__MSG__DETAIL__AVAILABILITY_CONDITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ACTIVE'.
enum
{
  action_availabilities_msgs__msg__AvailabilityCondition__ACTIVE = 0
};

/// Constant 'INACTIVE'.
enum
{
  action_availabilities_msgs__msg__AvailabilityCondition__INACTIVE = 1
};

/// Constant 'SHELVED'.
enum
{
  action_availabilities_msgs__msg__AvailabilityCondition__SHELVED = 2
};

/// Constant 'SUPPRESSED'.
enum
{
  action_availabilities_msgs__msg__AvailabilityCondition__SUPPRESSED = 3
};

/// Constant 'UNKNOWN'.
enum
{
  action_availabilities_msgs__msg__AvailabilityCondition__UNKNOWN = 4
};

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/AvailabilityCondition in the package action_availabilities_msgs.
typedef struct action_availabilities_msgs__msg__AvailabilityCondition
{
  int8_t condition;
  rosidl_runtime_c__String message;
} action_availabilities_msgs__msg__AvailabilityCondition;

// Struct for a sequence of action_availabilities_msgs__msg__AvailabilityCondition.
typedef struct action_availabilities_msgs__msg__AvailabilityCondition__Sequence
{
  action_availabilities_msgs__msg__AvailabilityCondition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_availabilities_msgs__msg__AvailabilityCondition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACTION_AVAILABILITIES_MSGS__MSG__DETAIL__AVAILABILITY_CONDITION__STRUCT_H_
