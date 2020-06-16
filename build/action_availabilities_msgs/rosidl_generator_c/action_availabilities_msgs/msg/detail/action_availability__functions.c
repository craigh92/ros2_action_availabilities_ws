// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from action_availabilities_msgs:msg/ActionAvailability.idl
// generated code does not contain a copyright notice
#include "action_availabilities_msgs/msg/detail/action_availability__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `action_name`
// Member `required_conditions`
// Member `unmet_conditions`
#include "rosidl_runtime_c/string_functions.h"

bool
action_availabilities_msgs__msg__ActionAvailability__init(action_availabilities_msgs__msg__ActionAvailability * msg)
{
  if (!msg) {
    return false;
  }
  // action_name
  if (!rosidl_runtime_c__String__init(&msg->action_name)) {
    action_availabilities_msgs__msg__ActionAvailability__fini(msg);
    return false;
  }
  // available
  // required_conditions
  if (!rosidl_runtime_c__String__Sequence__init(&msg->required_conditions, 0)) {
    action_availabilities_msgs__msg__ActionAvailability__fini(msg);
    return false;
  }
  // unmet_conditions
  if (!rosidl_runtime_c__String__Sequence__init(&msg->unmet_conditions, 0)) {
    action_availabilities_msgs__msg__ActionAvailability__fini(msg);
    return false;
  }
  return true;
}

void
action_availabilities_msgs__msg__ActionAvailability__fini(action_availabilities_msgs__msg__ActionAvailability * msg)
{
  if (!msg) {
    return;
  }
  // action_name
  rosidl_runtime_c__String__fini(&msg->action_name);
  // available
  // required_conditions
  rosidl_runtime_c__String__Sequence__fini(&msg->required_conditions);
  // unmet_conditions
  rosidl_runtime_c__String__Sequence__fini(&msg->unmet_conditions);
}

action_availabilities_msgs__msg__ActionAvailability *
action_availabilities_msgs__msg__ActionAvailability__create()
{
  action_availabilities_msgs__msg__ActionAvailability * msg = (action_availabilities_msgs__msg__ActionAvailability *)malloc(sizeof(action_availabilities_msgs__msg__ActionAvailability));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(action_availabilities_msgs__msg__ActionAvailability));
  bool success = action_availabilities_msgs__msg__ActionAvailability__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
action_availabilities_msgs__msg__ActionAvailability__destroy(action_availabilities_msgs__msg__ActionAvailability * msg)
{
  if (msg) {
    action_availabilities_msgs__msg__ActionAvailability__fini(msg);
  }
  free(msg);
}


bool
action_availabilities_msgs__msg__ActionAvailability__Sequence__init(action_availabilities_msgs__msg__ActionAvailability__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  action_availabilities_msgs__msg__ActionAvailability * data = NULL;
  if (size) {
    data = (action_availabilities_msgs__msg__ActionAvailability *)calloc(size, sizeof(action_availabilities_msgs__msg__ActionAvailability));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = action_availabilities_msgs__msg__ActionAvailability__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        action_availabilities_msgs__msg__ActionAvailability__fini(&data[i - 1]);
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
action_availabilities_msgs__msg__ActionAvailability__Sequence__fini(action_availabilities_msgs__msg__ActionAvailability__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      action_availabilities_msgs__msg__ActionAvailability__fini(&array->data[i]);
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

action_availabilities_msgs__msg__ActionAvailability__Sequence *
action_availabilities_msgs__msg__ActionAvailability__Sequence__create(size_t size)
{
  action_availabilities_msgs__msg__ActionAvailability__Sequence * array = (action_availabilities_msgs__msg__ActionAvailability__Sequence *)malloc(sizeof(action_availabilities_msgs__msg__ActionAvailability__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = action_availabilities_msgs__msg__ActionAvailability__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
action_availabilities_msgs__msg__ActionAvailability__Sequence__destroy(action_availabilities_msgs__msg__ActionAvailability__Sequence * array)
{
  if (array) {
    action_availabilities_msgs__msg__ActionAvailability__Sequence__fini(array);
  }
  free(array);
}
