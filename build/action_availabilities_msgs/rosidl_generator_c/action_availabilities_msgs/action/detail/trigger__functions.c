// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from action_availabilities_msgs:action/Trigger.idl
// generated code does not contain a copyright notice
#include "action_availabilities_msgs/action/detail/trigger__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
action_availabilities_msgs__action__Trigger_Goal__init(action_availabilities_msgs__action__Trigger_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
action_availabilities_msgs__action__Trigger_Goal__fini(action_availabilities_msgs__action__Trigger_Goal * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

action_availabilities_msgs__action__Trigger_Goal *
action_availabilities_msgs__action__Trigger_Goal__create()
{
  action_availabilities_msgs__action__Trigger_Goal * msg = (action_availabilities_msgs__action__Trigger_Goal *)malloc(sizeof(action_availabilities_msgs__action__Trigger_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(action_availabilities_msgs__action__Trigger_Goal));
  bool success = action_availabilities_msgs__action__Trigger_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
action_availabilities_msgs__action__Trigger_Goal__destroy(action_availabilities_msgs__action__Trigger_Goal * msg)
{
  if (msg) {
    action_availabilities_msgs__action__Trigger_Goal__fini(msg);
  }
  free(msg);
}


bool
action_availabilities_msgs__action__Trigger_Goal__Sequence__init(action_availabilities_msgs__action__Trigger_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  action_availabilities_msgs__action__Trigger_Goal * data = NULL;
  if (size) {
    data = (action_availabilities_msgs__action__Trigger_Goal *)calloc(size, sizeof(action_availabilities_msgs__action__Trigger_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = action_availabilities_msgs__action__Trigger_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        action_availabilities_msgs__action__Trigger_Goal__fini(&data[i - 1]);
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
action_availabilities_msgs__action__Trigger_Goal__Sequence__fini(action_availabilities_msgs__action__Trigger_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      action_availabilities_msgs__action__Trigger_Goal__fini(&array->data[i]);
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

action_availabilities_msgs__action__Trigger_Goal__Sequence *
action_availabilities_msgs__action__Trigger_Goal__Sequence__create(size_t size)
{
  action_availabilities_msgs__action__Trigger_Goal__Sequence * array = (action_availabilities_msgs__action__Trigger_Goal__Sequence *)malloc(sizeof(action_availabilities_msgs__action__Trigger_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = action_availabilities_msgs__action__Trigger_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
action_availabilities_msgs__action__Trigger_Goal__Sequence__destroy(action_availabilities_msgs__action__Trigger_Goal__Sequence * array)
{
  if (array) {
    action_availabilities_msgs__action__Trigger_Goal__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
action_availabilities_msgs__action__Trigger_Result__init(action_availabilities_msgs__action__Trigger_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    action_availabilities_msgs__action__Trigger_Result__fini(msg);
    return false;
  }
  return true;
}

void
action_availabilities_msgs__action__Trigger_Result__fini(action_availabilities_msgs__action__Trigger_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

action_availabilities_msgs__action__Trigger_Result *
action_availabilities_msgs__action__Trigger_Result__create()
{
  action_availabilities_msgs__action__Trigger_Result * msg = (action_availabilities_msgs__action__Trigger_Result *)malloc(sizeof(action_availabilities_msgs__action__Trigger_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(action_availabilities_msgs__action__Trigger_Result));
  bool success = action_availabilities_msgs__action__Trigger_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
action_availabilities_msgs__action__Trigger_Result__destroy(action_availabilities_msgs__action__Trigger_Result * msg)
{
  if (msg) {
    action_availabilities_msgs__action__Trigger_Result__fini(msg);
  }
  free(msg);
}


bool
action_availabilities_msgs__action__Trigger_Result__Sequence__init(action_availabilities_msgs__action__Trigger_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  action_availabilities_msgs__action__Trigger_Result * data = NULL;
  if (size) {
    data = (action_availabilities_msgs__action__Trigger_Result *)calloc(size, sizeof(action_availabilities_msgs__action__Trigger_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = action_availabilities_msgs__action__Trigger_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        action_availabilities_msgs__action__Trigger_Result__fini(&data[i - 1]);
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
action_availabilities_msgs__action__Trigger_Result__Sequence__fini(action_availabilities_msgs__action__Trigger_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      action_availabilities_msgs__action__Trigger_Result__fini(&array->data[i]);
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

action_availabilities_msgs__action__Trigger_Result__Sequence *
action_availabilities_msgs__action__Trigger_Result__Sequence__create(size_t size)
{
  action_availabilities_msgs__action__Trigger_Result__Sequence * array = (action_availabilities_msgs__action__Trigger_Result__Sequence *)malloc(sizeof(action_availabilities_msgs__action__Trigger_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = action_availabilities_msgs__action__Trigger_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
action_availabilities_msgs__action__Trigger_Result__Sequence__destroy(action_availabilities_msgs__action__Trigger_Result__Sequence * array)
{
  if (array) {
    action_availabilities_msgs__action__Trigger_Result__Sequence__fini(array);
  }
  free(array);
}


bool
action_availabilities_msgs__action__Trigger_Feedback__init(action_availabilities_msgs__action__Trigger_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // percent_complete
  return true;
}

void
action_availabilities_msgs__action__Trigger_Feedback__fini(action_availabilities_msgs__action__Trigger_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // percent_complete
}

action_availabilities_msgs__action__Trigger_Feedback *
action_availabilities_msgs__action__Trigger_Feedback__create()
{
  action_availabilities_msgs__action__Trigger_Feedback * msg = (action_availabilities_msgs__action__Trigger_Feedback *)malloc(sizeof(action_availabilities_msgs__action__Trigger_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(action_availabilities_msgs__action__Trigger_Feedback));
  bool success = action_availabilities_msgs__action__Trigger_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
action_availabilities_msgs__action__Trigger_Feedback__destroy(action_availabilities_msgs__action__Trigger_Feedback * msg)
{
  if (msg) {
    action_availabilities_msgs__action__Trigger_Feedback__fini(msg);
  }
  free(msg);
}


bool
action_availabilities_msgs__action__Trigger_Feedback__Sequence__init(action_availabilities_msgs__action__Trigger_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  action_availabilities_msgs__action__Trigger_Feedback * data = NULL;
  if (size) {
    data = (action_availabilities_msgs__action__Trigger_Feedback *)calloc(size, sizeof(action_availabilities_msgs__action__Trigger_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = action_availabilities_msgs__action__Trigger_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        action_availabilities_msgs__action__Trigger_Feedback__fini(&data[i - 1]);
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
action_availabilities_msgs__action__Trigger_Feedback__Sequence__fini(action_availabilities_msgs__action__Trigger_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      action_availabilities_msgs__action__Trigger_Feedback__fini(&array->data[i]);
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

action_availabilities_msgs__action__Trigger_Feedback__Sequence *
action_availabilities_msgs__action__Trigger_Feedback__Sequence__create(size_t size)
{
  action_availabilities_msgs__action__Trigger_Feedback__Sequence * array = (action_availabilities_msgs__action__Trigger_Feedback__Sequence *)malloc(sizeof(action_availabilities_msgs__action__Trigger_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = action_availabilities_msgs__action__Trigger_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
action_availabilities_msgs__action__Trigger_Feedback__Sequence__destroy(action_availabilities_msgs__action__Trigger_Feedback__Sequence * array)
{
  if (array) {
    action_availabilities_msgs__action__Trigger_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "action_availabilities_msgs/action/detail/trigger__functions.h"

bool
action_availabilities_msgs__action__Trigger_SendGoal_Request__init(action_availabilities_msgs__action__Trigger_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    action_availabilities_msgs__action__Trigger_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!action_availabilities_msgs__action__Trigger_Goal__init(&msg->goal)) {
    action_availabilities_msgs__action__Trigger_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
action_availabilities_msgs__action__Trigger_SendGoal_Request__fini(action_availabilities_msgs__action__Trigger_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  action_availabilities_msgs__action__Trigger_Goal__fini(&msg->goal);
}

action_availabilities_msgs__action__Trigger_SendGoal_Request *
action_availabilities_msgs__action__Trigger_SendGoal_Request__create()
{
  action_availabilities_msgs__action__Trigger_SendGoal_Request * msg = (action_availabilities_msgs__action__Trigger_SendGoal_Request *)malloc(sizeof(action_availabilities_msgs__action__Trigger_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(action_availabilities_msgs__action__Trigger_SendGoal_Request));
  bool success = action_availabilities_msgs__action__Trigger_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
action_availabilities_msgs__action__Trigger_SendGoal_Request__destroy(action_availabilities_msgs__action__Trigger_SendGoal_Request * msg)
{
  if (msg) {
    action_availabilities_msgs__action__Trigger_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
action_availabilities_msgs__action__Trigger_SendGoal_Request__Sequence__init(action_availabilities_msgs__action__Trigger_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  action_availabilities_msgs__action__Trigger_SendGoal_Request * data = NULL;
  if (size) {
    data = (action_availabilities_msgs__action__Trigger_SendGoal_Request *)calloc(size, sizeof(action_availabilities_msgs__action__Trigger_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = action_availabilities_msgs__action__Trigger_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        action_availabilities_msgs__action__Trigger_SendGoal_Request__fini(&data[i - 1]);
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
action_availabilities_msgs__action__Trigger_SendGoal_Request__Sequence__fini(action_availabilities_msgs__action__Trigger_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      action_availabilities_msgs__action__Trigger_SendGoal_Request__fini(&array->data[i]);
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

action_availabilities_msgs__action__Trigger_SendGoal_Request__Sequence *
action_availabilities_msgs__action__Trigger_SendGoal_Request__Sequence__create(size_t size)
{
  action_availabilities_msgs__action__Trigger_SendGoal_Request__Sequence * array = (action_availabilities_msgs__action__Trigger_SendGoal_Request__Sequence *)malloc(sizeof(action_availabilities_msgs__action__Trigger_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = action_availabilities_msgs__action__Trigger_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
action_availabilities_msgs__action__Trigger_SendGoal_Request__Sequence__destroy(action_availabilities_msgs__action__Trigger_SendGoal_Request__Sequence * array)
{
  if (array) {
    action_availabilities_msgs__action__Trigger_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
action_availabilities_msgs__action__Trigger_SendGoal_Response__init(action_availabilities_msgs__action__Trigger_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    action_availabilities_msgs__action__Trigger_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
action_availabilities_msgs__action__Trigger_SendGoal_Response__fini(action_availabilities_msgs__action__Trigger_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

action_availabilities_msgs__action__Trigger_SendGoal_Response *
action_availabilities_msgs__action__Trigger_SendGoal_Response__create()
{
  action_availabilities_msgs__action__Trigger_SendGoal_Response * msg = (action_availabilities_msgs__action__Trigger_SendGoal_Response *)malloc(sizeof(action_availabilities_msgs__action__Trigger_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(action_availabilities_msgs__action__Trigger_SendGoal_Response));
  bool success = action_availabilities_msgs__action__Trigger_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
action_availabilities_msgs__action__Trigger_SendGoal_Response__destroy(action_availabilities_msgs__action__Trigger_SendGoal_Response * msg)
{
  if (msg) {
    action_availabilities_msgs__action__Trigger_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
action_availabilities_msgs__action__Trigger_SendGoal_Response__Sequence__init(action_availabilities_msgs__action__Trigger_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  action_availabilities_msgs__action__Trigger_SendGoal_Response * data = NULL;
  if (size) {
    data = (action_availabilities_msgs__action__Trigger_SendGoal_Response *)calloc(size, sizeof(action_availabilities_msgs__action__Trigger_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = action_availabilities_msgs__action__Trigger_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        action_availabilities_msgs__action__Trigger_SendGoal_Response__fini(&data[i - 1]);
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
action_availabilities_msgs__action__Trigger_SendGoal_Response__Sequence__fini(action_availabilities_msgs__action__Trigger_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      action_availabilities_msgs__action__Trigger_SendGoal_Response__fini(&array->data[i]);
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

action_availabilities_msgs__action__Trigger_SendGoal_Response__Sequence *
action_availabilities_msgs__action__Trigger_SendGoal_Response__Sequence__create(size_t size)
{
  action_availabilities_msgs__action__Trigger_SendGoal_Response__Sequence * array = (action_availabilities_msgs__action__Trigger_SendGoal_Response__Sequence *)malloc(sizeof(action_availabilities_msgs__action__Trigger_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = action_availabilities_msgs__action__Trigger_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
action_availabilities_msgs__action__Trigger_SendGoal_Response__Sequence__destroy(action_availabilities_msgs__action__Trigger_SendGoal_Response__Sequence * array)
{
  if (array) {
    action_availabilities_msgs__action__Trigger_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
action_availabilities_msgs__action__Trigger_GetResult_Request__init(action_availabilities_msgs__action__Trigger_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    action_availabilities_msgs__action__Trigger_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
action_availabilities_msgs__action__Trigger_GetResult_Request__fini(action_availabilities_msgs__action__Trigger_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

action_availabilities_msgs__action__Trigger_GetResult_Request *
action_availabilities_msgs__action__Trigger_GetResult_Request__create()
{
  action_availabilities_msgs__action__Trigger_GetResult_Request * msg = (action_availabilities_msgs__action__Trigger_GetResult_Request *)malloc(sizeof(action_availabilities_msgs__action__Trigger_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(action_availabilities_msgs__action__Trigger_GetResult_Request));
  bool success = action_availabilities_msgs__action__Trigger_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
action_availabilities_msgs__action__Trigger_GetResult_Request__destroy(action_availabilities_msgs__action__Trigger_GetResult_Request * msg)
{
  if (msg) {
    action_availabilities_msgs__action__Trigger_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
action_availabilities_msgs__action__Trigger_GetResult_Request__Sequence__init(action_availabilities_msgs__action__Trigger_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  action_availabilities_msgs__action__Trigger_GetResult_Request * data = NULL;
  if (size) {
    data = (action_availabilities_msgs__action__Trigger_GetResult_Request *)calloc(size, sizeof(action_availabilities_msgs__action__Trigger_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = action_availabilities_msgs__action__Trigger_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        action_availabilities_msgs__action__Trigger_GetResult_Request__fini(&data[i - 1]);
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
action_availabilities_msgs__action__Trigger_GetResult_Request__Sequence__fini(action_availabilities_msgs__action__Trigger_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      action_availabilities_msgs__action__Trigger_GetResult_Request__fini(&array->data[i]);
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

action_availabilities_msgs__action__Trigger_GetResult_Request__Sequence *
action_availabilities_msgs__action__Trigger_GetResult_Request__Sequence__create(size_t size)
{
  action_availabilities_msgs__action__Trigger_GetResult_Request__Sequence * array = (action_availabilities_msgs__action__Trigger_GetResult_Request__Sequence *)malloc(sizeof(action_availabilities_msgs__action__Trigger_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = action_availabilities_msgs__action__Trigger_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
action_availabilities_msgs__action__Trigger_GetResult_Request__Sequence__destroy(action_availabilities_msgs__action__Trigger_GetResult_Request__Sequence * array)
{
  if (array) {
    action_availabilities_msgs__action__Trigger_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "action_availabilities_msgs/action/detail/trigger__functions.h"

bool
action_availabilities_msgs__action__Trigger_GetResult_Response__init(action_availabilities_msgs__action__Trigger_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!action_availabilities_msgs__action__Trigger_Result__init(&msg->result)) {
    action_availabilities_msgs__action__Trigger_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
action_availabilities_msgs__action__Trigger_GetResult_Response__fini(action_availabilities_msgs__action__Trigger_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  action_availabilities_msgs__action__Trigger_Result__fini(&msg->result);
}

action_availabilities_msgs__action__Trigger_GetResult_Response *
action_availabilities_msgs__action__Trigger_GetResult_Response__create()
{
  action_availabilities_msgs__action__Trigger_GetResult_Response * msg = (action_availabilities_msgs__action__Trigger_GetResult_Response *)malloc(sizeof(action_availabilities_msgs__action__Trigger_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(action_availabilities_msgs__action__Trigger_GetResult_Response));
  bool success = action_availabilities_msgs__action__Trigger_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
action_availabilities_msgs__action__Trigger_GetResult_Response__destroy(action_availabilities_msgs__action__Trigger_GetResult_Response * msg)
{
  if (msg) {
    action_availabilities_msgs__action__Trigger_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
action_availabilities_msgs__action__Trigger_GetResult_Response__Sequence__init(action_availabilities_msgs__action__Trigger_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  action_availabilities_msgs__action__Trigger_GetResult_Response * data = NULL;
  if (size) {
    data = (action_availabilities_msgs__action__Trigger_GetResult_Response *)calloc(size, sizeof(action_availabilities_msgs__action__Trigger_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = action_availabilities_msgs__action__Trigger_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        action_availabilities_msgs__action__Trigger_GetResult_Response__fini(&data[i - 1]);
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
action_availabilities_msgs__action__Trigger_GetResult_Response__Sequence__fini(action_availabilities_msgs__action__Trigger_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      action_availabilities_msgs__action__Trigger_GetResult_Response__fini(&array->data[i]);
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

action_availabilities_msgs__action__Trigger_GetResult_Response__Sequence *
action_availabilities_msgs__action__Trigger_GetResult_Response__Sequence__create(size_t size)
{
  action_availabilities_msgs__action__Trigger_GetResult_Response__Sequence * array = (action_availabilities_msgs__action__Trigger_GetResult_Response__Sequence *)malloc(sizeof(action_availabilities_msgs__action__Trigger_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = action_availabilities_msgs__action__Trigger_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
action_availabilities_msgs__action__Trigger_GetResult_Response__Sequence__destroy(action_availabilities_msgs__action__Trigger_GetResult_Response__Sequence * array)
{
  if (array) {
    action_availabilities_msgs__action__Trigger_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "action_availabilities_msgs/action/detail/trigger__functions.h"

bool
action_availabilities_msgs__action__Trigger_FeedbackMessage__init(action_availabilities_msgs__action__Trigger_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    action_availabilities_msgs__action__Trigger_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!action_availabilities_msgs__action__Trigger_Feedback__init(&msg->feedback)) {
    action_availabilities_msgs__action__Trigger_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
action_availabilities_msgs__action__Trigger_FeedbackMessage__fini(action_availabilities_msgs__action__Trigger_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  action_availabilities_msgs__action__Trigger_Feedback__fini(&msg->feedback);
}

action_availabilities_msgs__action__Trigger_FeedbackMessage *
action_availabilities_msgs__action__Trigger_FeedbackMessage__create()
{
  action_availabilities_msgs__action__Trigger_FeedbackMessage * msg = (action_availabilities_msgs__action__Trigger_FeedbackMessage *)malloc(sizeof(action_availabilities_msgs__action__Trigger_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(action_availabilities_msgs__action__Trigger_FeedbackMessage));
  bool success = action_availabilities_msgs__action__Trigger_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
action_availabilities_msgs__action__Trigger_FeedbackMessage__destroy(action_availabilities_msgs__action__Trigger_FeedbackMessage * msg)
{
  if (msg) {
    action_availabilities_msgs__action__Trigger_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
action_availabilities_msgs__action__Trigger_FeedbackMessage__Sequence__init(action_availabilities_msgs__action__Trigger_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  action_availabilities_msgs__action__Trigger_FeedbackMessage * data = NULL;
  if (size) {
    data = (action_availabilities_msgs__action__Trigger_FeedbackMessage *)calloc(size, sizeof(action_availabilities_msgs__action__Trigger_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = action_availabilities_msgs__action__Trigger_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        action_availabilities_msgs__action__Trigger_FeedbackMessage__fini(&data[i - 1]);
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
action_availabilities_msgs__action__Trigger_FeedbackMessage__Sequence__fini(action_availabilities_msgs__action__Trigger_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      action_availabilities_msgs__action__Trigger_FeedbackMessage__fini(&array->data[i]);
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

action_availabilities_msgs__action__Trigger_FeedbackMessage__Sequence *
action_availabilities_msgs__action__Trigger_FeedbackMessage__Sequence__create(size_t size)
{
  action_availabilities_msgs__action__Trigger_FeedbackMessage__Sequence * array = (action_availabilities_msgs__action__Trigger_FeedbackMessage__Sequence *)malloc(sizeof(action_availabilities_msgs__action__Trigger_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = action_availabilities_msgs__action__Trigger_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
action_availabilities_msgs__action__Trigger_FeedbackMessage__Sequence__destroy(action_availabilities_msgs__action__Trigger_FeedbackMessage__Sequence * array)
{
  if (array) {
    action_availabilities_msgs__action__Trigger_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
