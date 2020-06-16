// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from action_availabilities_msgs:msg/AvailabilityCondition.idl
// generated code does not contain a copyright notice

#ifndef ACTION_AVAILABILITIES_MSGS__MSG__DETAIL__AVAILABILITY_CONDITION__FUNCTIONS_H_
#define ACTION_AVAILABILITIES_MSGS__MSG__DETAIL__AVAILABILITY_CONDITION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "action_availabilities_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "action_availabilities_msgs/msg/detail/availability_condition__struct.h"

/// Initialize msg/AvailabilityCondition message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * action_availabilities_msgs__msg__AvailabilityCondition
 * )) before or use
 * action_availabilities_msgs__msg__AvailabilityCondition__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_action_availabilities_msgs
bool
action_availabilities_msgs__msg__AvailabilityCondition__init(action_availabilities_msgs__msg__AvailabilityCondition * msg);

/// Finalize msg/AvailabilityCondition message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_availabilities_msgs
void
action_availabilities_msgs__msg__AvailabilityCondition__fini(action_availabilities_msgs__msg__AvailabilityCondition * msg);

/// Create msg/AvailabilityCondition message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * action_availabilities_msgs__msg__AvailabilityCondition__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_action_availabilities_msgs
action_availabilities_msgs__msg__AvailabilityCondition *
action_availabilities_msgs__msg__AvailabilityCondition__create();

/// Destroy msg/AvailabilityCondition message.
/**
 * It calls
 * action_availabilities_msgs__msg__AvailabilityCondition__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_availabilities_msgs
void
action_availabilities_msgs__msg__AvailabilityCondition__destroy(action_availabilities_msgs__msg__AvailabilityCondition * msg);


/// Initialize array of msg/AvailabilityCondition messages.
/**
 * It allocates the memory for the number of elements and calls
 * action_availabilities_msgs__msg__AvailabilityCondition__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_availabilities_msgs
bool
action_availabilities_msgs__msg__AvailabilityCondition__Sequence__init(action_availabilities_msgs__msg__AvailabilityCondition__Sequence * array, size_t size);

/// Finalize array of msg/AvailabilityCondition messages.
/**
 * It calls
 * action_availabilities_msgs__msg__AvailabilityCondition__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_availabilities_msgs
void
action_availabilities_msgs__msg__AvailabilityCondition__Sequence__fini(action_availabilities_msgs__msg__AvailabilityCondition__Sequence * array);

/// Create array of msg/AvailabilityCondition messages.
/**
 * It allocates the memory for the array and calls
 * action_availabilities_msgs__msg__AvailabilityCondition__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_action_availabilities_msgs
action_availabilities_msgs__msg__AvailabilityCondition__Sequence *
action_availabilities_msgs__msg__AvailabilityCondition__Sequence__create(size_t size);

/// Destroy array of msg/AvailabilityCondition messages.
/**
 * It calls
 * action_availabilities_msgs__msg__AvailabilityCondition__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_availabilities_msgs
void
action_availabilities_msgs__msg__AvailabilityCondition__Sequence__destroy(action_availabilities_msgs__msg__AvailabilityCondition__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ACTION_AVAILABILITIES_MSGS__MSG__DETAIL__AVAILABILITY_CONDITION__FUNCTIONS_H_
