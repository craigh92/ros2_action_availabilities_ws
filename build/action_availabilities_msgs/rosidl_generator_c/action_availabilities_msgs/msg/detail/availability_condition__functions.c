// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from action_availabilities_msgs:msg/AvailabilityCondition.idl
// generated code does not contain a copyright notice
#include "action_availabilities_msgs/msg/detail/availability_condition__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
action_availabilities_msgs__msg__AvailabilityCondition__init(action_availabilities_msgs__msg__AvailabilityCondition * msg)
{
  if (!msg) {
    return false;
  }
  // condition
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    action_availabilities_msgs__msg__AvailabilityCondition__fini(msg);
    return false;
  }
  return true;
}

void
action_availabilities_msgs__msg__AvailabilityCondition__fini(action_availabilities_msgs__msg__AvailabilityCondition * msg)
{
  if (!msg) {
    return;
  }
  // condition
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

action_availabilities_msgs__msg__AvailabilityCondition *
action_availabilities_msgs__msg__AvailabilityCondition__create()
{
  action_availabilities_msgs__msg__AvailabilityCondition * msg = (action_availabilities_msgs__msg__AvailabilityCondition *)malloc(sizeof(action_availabilities_msgs__msg__AvailabilityCondition));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(action_availabilities_msgs__msg__AvailabilityCondition));
  bool success = action_availabilities_msgs__msg__AvailabilityCondition__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
action_availabilities_msgs__msg__AvailabilityCondition__destroy(action_availabilities_msgs__msg__AvailabilityCondition * msg)
{
  if (msg) {
    action_availabilities_msgs__msg__AvailabilityCondition__fini(msg);
  }
  free(msg);
}


bool
action_availabilities_msgs__msg__AvailabilityCondition__Sequence__init(action_availabilities_msgs__msg__AvailabilityCondition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  action_availabilities_msgs__msg__AvailabilityCondition * data = NULL;
  if (size) {
    data = (action_availabilities_msgs__msg__AvailabilityCondition *)calloc(size, sizeof(action_availabilities_msgs__msg__AvailabilityCondition));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = action_availabilities_msgs__msg__AvailabilityCondition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        action_availabilities_msgs__msg__AvailabilityCondition__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
action_availabilities_msgs__msg__AvailabilityCondition__Sequence__fini(action_availabilities_msgs__msg__AvailabilityCondition__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      action_availabilities_msgs__msg__AvailabilityCondition__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

action_availabilities_msgs__msg__AvailabilityCondition__Sequence *
action_availabilities_msgs__msg__AvailabilityCondition__Sequence__create(size_t size)
{
  action_availabilities_msgs__msg__AvailabilityCondition__Sequence * array = (action_availabilities_msgs__msg__AvailabilityCondition__Sequence *)malloc(sizeof(action_availabilities_msgs__msg__AvailabilityCondition__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = action_availabilities_msgs__msg__AvailabilityCondition__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
action_availabilities_msgs__msg__AvailabilityCondition__Sequence__destroy(action_availabilities_msgs__msg__AvailabilityCondition__Sequence * array)
{
  if (array) {
    action_availabilities_msgs__msg__AvailabilityCondition__Sequence__fini(array);
  }
  free(array);
}
