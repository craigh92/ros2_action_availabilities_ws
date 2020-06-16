// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from action_availabilities_msgs:action/Trigger.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "action_availabilities_msgs/action/detail/trigger__rosidl_typesupport_introspection_c.h"
#include "action_availabilities_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "action_availabilities_msgs/action/detail/trigger__functions.h"
#include "action_availabilities_msgs/action/detail/trigger__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Trigger_Goal__rosidl_typesupport_introspection_c__Trigger_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_availabilities_msgs__action__Trigger_Goal__init(message_memory);
}

void Trigger_Goal__rosidl_typesupport_introspection_c__Trigger_Goal_fini_function(void * message_memory)
{
  action_availabilities_msgs__action__Trigger_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Trigger_Goal__rosidl_typesupport_introspection_c__Trigger_Goal_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_availabilities_msgs__action__Trigger_Goal, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Trigger_Goal__rosidl_typesupport_introspection_c__Trigger_Goal_message_members = {
  "action_availabilities_msgs__action",  // message namespace
  "Trigger_Goal",  // message name
  1,  // number of fields
  sizeof(action_availabilities_msgs__action__Trigger_Goal),
  Trigger_Goal__rosidl_typesupport_introspection_c__Trigger_Goal_message_member_array,  // message members
  Trigger_Goal__rosidl_typesupport_introspection_c__Trigger_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  Trigger_Goal__rosidl_typesupport_introspection_c__Trigger_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Trigger_Goal__rosidl_typesupport_introspection_c__Trigger_Goal_message_type_support_handle = {
  0,
  &Trigger_Goal__rosidl_typesupport_introspection_c__Trigger_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_availabilities_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_availabilities_msgs, action, Trigger_Goal)() {
  if (!Trigger_Goal__rosidl_typesupport_introspection_c__Trigger_Goal_message_type_support_handle.typesupport_identifier) {
    Trigger_Goal__rosidl_typesupport_introspection_c__Trigger_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Trigger_Goal__rosidl_typesupport_introspection_c__Trigger_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "action_availabilities_msgs/action/detail/trigger__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_availabilities_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_availabilities_msgs/action/detail/trigger__functions.h"
// already included above
// #include "action_availabilities_msgs/action/detail/trigger__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Trigger_Result__rosidl_typesupport_introspection_c__Trigger_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_availabilities_msgs__action__Trigger_Result__init(message_memory);
}

void Trigger_Result__rosidl_typesupport_introspection_c__Trigger_Result_fini_function(void * message_memory)
{
  action_availabilities_msgs__action__Trigger_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Trigger_Result__rosidl_typesupport_introspection_c__Trigger_Result_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_availabilities_msgs__action__Trigger_Result, success),  // bytes offset in struct
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
    offsetof(action_availabilities_msgs__action__Trigger_Result, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Trigger_Result__rosidl_typesupport_introspection_c__Trigger_Result_message_members = {
  "action_availabilities_msgs__action",  // message namespace
  "Trigger_Result",  // message name
  2,  // number of fields
  sizeof(action_availabilities_msgs__action__Trigger_Result),
  Trigger_Result__rosidl_typesupport_introspection_c__Trigger_Result_message_member_array,  // message members
  Trigger_Result__rosidl_typesupport_introspection_c__Trigger_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  Trigger_Result__rosidl_typesupport_introspection_c__Trigger_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Trigger_Result__rosidl_typesupport_introspection_c__Trigger_Result_message_type_support_handle = {
  0,
  &Trigger_Result__rosidl_typesupport_introspection_c__Trigger_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_availabilities_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_availabilities_msgs, action, Trigger_Result)() {
  if (!Trigger_Result__rosidl_typesupport_introspection_c__Trigger_Result_message_type_support_handle.typesupport_identifier) {
    Trigger_Result__rosidl_typesupport_introspection_c__Trigger_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Trigger_Result__rosidl_typesupport_introspection_c__Trigger_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "action_availabilities_msgs/action/detail/trigger__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_availabilities_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_availabilities_msgs/action/detail/trigger__functions.h"
// already included above
// #include "action_availabilities_msgs/action/detail/trigger__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Trigger_Feedback__rosidl_typesupport_introspection_c__Trigger_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_availabilities_msgs__action__Trigger_Feedback__init(message_memory);
}

void Trigger_Feedback__rosidl_typesupport_introspection_c__Trigger_Feedback_fini_function(void * message_memory)
{
  action_availabilities_msgs__action__Trigger_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Trigger_Feedback__rosidl_typesupport_introspection_c__Trigger_Feedback_message_member_array[1] = {
  {
    "percent_complete",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_availabilities_msgs__action__Trigger_Feedback, percent_complete),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Trigger_Feedback__rosidl_typesupport_introspection_c__Trigger_Feedback_message_members = {
  "action_availabilities_msgs__action",  // message namespace
  "Trigger_Feedback",  // message name
  1,  // number of fields
  sizeof(action_availabilities_msgs__action__Trigger_Feedback),
  Trigger_Feedback__rosidl_typesupport_introspection_c__Trigger_Feedback_message_member_array,  // message members
  Trigger_Feedback__rosidl_typesupport_introspection_c__Trigger_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  Trigger_Feedback__rosidl_typesupport_introspection_c__Trigger_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Trigger_Feedback__rosidl_typesupport_introspection_c__Trigger_Feedback_message_type_support_handle = {
  0,
  &Trigger_Feedback__rosidl_typesupport_introspection_c__Trigger_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_availabilities_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_availabilities_msgs, action, Trigger_Feedback)() {
  if (!Trigger_Feedback__rosidl_typesupport_introspection_c__Trigger_Feedback_message_type_support_handle.typesupport_identifier) {
    Trigger_Feedback__rosidl_typesupport_introspection_c__Trigger_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Trigger_Feedback__rosidl_typesupport_introspection_c__Trigger_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "action_availabilities_msgs/action/detail/trigger__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_availabilities_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_availabilities_msgs/action/detail/trigger__functions.h"
// already included above
// #include "action_availabilities_msgs/action/detail/trigger__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "action_availabilities_msgs/action/trigger.h"
// Member `goal`
// already included above
// #include "action_availabilities_msgs/action/detail/trigger__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Trigger_SendGoal_Request__rosidl_typesupport_introspection_c__Trigger_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_availabilities_msgs__action__Trigger_SendGoal_Request__init(message_memory);
}

void Trigger_SendGoal_Request__rosidl_typesupport_introspection_c__Trigger_SendGoal_Request_fini_function(void * message_memory)
{
  action_availabilities_msgs__action__Trigger_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Trigger_SendGoal_Request__rosidl_typesupport_introspection_c__Trigger_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_availabilities_msgs__action__Trigger_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_availabilities_msgs__action__Trigger_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Trigger_SendGoal_Request__rosidl_typesupport_introspection_c__Trigger_SendGoal_Request_message_members = {
  "action_availabilities_msgs__action",  // message namespace
  "Trigger_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(action_availabilities_msgs__action__Trigger_SendGoal_Request),
  Trigger_SendGoal_Request__rosidl_typesupport_introspection_c__Trigger_SendGoal_Request_message_member_array,  // message members
  Trigger_SendGoal_Request__rosidl_typesupport_introspection_c__Trigger_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Trigger_SendGoal_Request__rosidl_typesupport_introspection_c__Trigger_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Trigger_SendGoal_Request__rosidl_typesupport_introspection_c__Trigger_SendGoal_Request_message_type_support_handle = {
  0,
  &Trigger_SendGoal_Request__rosidl_typesupport_introspection_c__Trigger_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_availabilities_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_availabilities_msgs, action, Trigger_SendGoal_Request)() {
  Trigger_SendGoal_Request__rosidl_typesupport_introspection_c__Trigger_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Trigger_SendGoal_Request__rosidl_typesupport_introspection_c__Trigger_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_availabilities_msgs, action, Trigger_Goal)();
  if (!Trigger_SendGoal_Request__rosidl_typesupport_introspection_c__Trigger_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    Trigger_SendGoal_Request__rosidl_typesupport_introspection_c__Trigger_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Trigger_SendGoal_Request__rosidl_typesupport_introspection_c__Trigger_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "action_availabilities_msgs/action/detail/trigger__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_availabilities_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_availabilities_msgs/action/detail/trigger__functions.h"
// already included above
// #include "action_availabilities_msgs/action/detail/trigger__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Trigger_SendGoal_Response__rosidl_typesupport_introspection_c__Trigger_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_availabilities_msgs__action__Trigger_SendGoal_Response__init(message_memory);
}

void Trigger_SendGoal_Response__rosidl_typesupport_introspection_c__Trigger_SendGoal_Response_fini_function(void * message_memory)
{
  action_availabilities_msgs__action__Trigger_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Trigger_SendGoal_Response__rosidl_typesupport_introspection_c__Trigger_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_availabilities_msgs__action__Trigger_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_availabilities_msgs__action__Trigger_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Trigger_SendGoal_Response__rosidl_typesupport_introspection_c__Trigger_SendGoal_Response_message_members = {
  "action_availabilities_msgs__action",  // message namespace
  "Trigger_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(action_availabilities_msgs__action__Trigger_SendGoal_Response),
  Trigger_SendGoal_Response__rosidl_typesupport_introspection_c__Trigger_SendGoal_Response_message_member_array,  // message members
  Trigger_SendGoal_Response__rosidl_typesupport_introspection_c__Trigger_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Trigger_SendGoal_Response__rosidl_typesupport_introspection_c__Trigger_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Trigger_SendGoal_Response__rosidl_typesupport_introspection_c__Trigger_SendGoal_Response_message_type_support_handle = {
  0,
  &Trigger_SendGoal_Response__rosidl_typesupport_introspection_c__Trigger_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_availabilities_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_availabilities_msgs, action, Trigger_SendGoal_Response)() {
  Trigger_SendGoal_Response__rosidl_typesupport_introspection_c__Trigger_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!Trigger_SendGoal_Response__rosidl_typesupport_introspection_c__Trigger_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    Trigger_SendGoal_Response__rosidl_typesupport_introspection_c__Trigger_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Trigger_SendGoal_Response__rosidl_typesupport_introspection_c__Trigger_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "action_availabilities_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "action_availabilities_msgs/action/detail/trigger__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers action_availabilities_msgs__action__detail__trigger__rosidl_typesupport_introspection_c__Trigger_SendGoal_service_members = {
  "action_availabilities_msgs__action",  // service namespace
  "Trigger_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // action_availabilities_msgs__action__detail__trigger__rosidl_typesupport_introspection_c__Trigger_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // action_availabilities_msgs__action__detail__trigger__rosidl_typesupport_introspection_c__Trigger_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t action_availabilities_msgs__action__detail__trigger__rosidl_typesupport_introspection_c__Trigger_SendGoal_service_type_support_handle = {
  0,
  &action_availabilities_msgs__action__detail__trigger__rosidl_typesupport_introspection_c__Trigger_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_availabilities_msgs, action, Trigger_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_availabilities_msgs, action, Trigger_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_availabilities_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_availabilities_msgs, action, Trigger_SendGoal)() {
  if (!action_availabilities_msgs__action__detail__trigger__rosidl_typesupport_introspection_c__Trigger_SendGoal_service_type_support_handle.typesupport_identifier) {
    action_availabilities_msgs__action__detail__trigger__rosidl_typesupport_introspection_c__Trigger_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)action_availabilities_msgs__action__detail__trigger__rosidl_typesupport_introspection_c__Trigger_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_availabilities_msgs, action, Trigger_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_availabilities_msgs, action, Trigger_SendGoal_Response)()->data;
  }

  return &action_availabilities_msgs__action__detail__trigger__rosidl_typesupport_introspection_c__Trigger_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "action_availabilities_msgs/action/detail/trigger__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_availabilities_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_availabilities_msgs/action/detail/trigger__functions.h"
// already included above
// #include "action_availabilities_msgs/action/detail/trigger__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Trigger_GetResult_Request__rosidl_typesupport_introspection_c__Trigger_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_availabilities_msgs__action__Trigger_GetResult_Request__init(message_memory);
}

void Trigger_GetResult_Request__rosidl_typesupport_introspection_c__Trigger_GetResult_Request_fini_function(void * message_memory)
{
  action_availabilities_msgs__action__Trigger_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Trigger_GetResult_Request__rosidl_typesupport_introspection_c__Trigger_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_availabilities_msgs__action__Trigger_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Trigger_GetResult_Request__rosidl_typesupport_introspection_c__Trigger_GetResult_Request_message_members = {
  "action_availabilities_msgs__action",  // message namespace
  "Trigger_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(action_availabilities_msgs__action__Trigger_GetResult_Request),
  Trigger_GetResult_Request__rosidl_typesupport_introspection_c__Trigger_GetResult_Request_message_member_array,  // message members
  Trigger_GetResult_Request__rosidl_typesupport_introspection_c__Trigger_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Trigger_GetResult_Request__rosidl_typesupport_introspection_c__Trigger_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Trigger_GetResult_Request__rosidl_typesupport_introspection_c__Trigger_GetResult_Request_message_type_support_handle = {
  0,
  &Trigger_GetResult_Request__rosidl_typesupport_introspection_c__Trigger_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_availabilities_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_availabilities_msgs, action, Trigger_GetResult_Request)() {
  Trigger_GetResult_Request__rosidl_typesupport_introspection_c__Trigger_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!Trigger_GetResult_Request__rosidl_typesupport_introspection_c__Trigger_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    Trigger_GetResult_Request__rosidl_typesupport_introspection_c__Trigger_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Trigger_GetResult_Request__rosidl_typesupport_introspection_c__Trigger_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "action_availabilities_msgs/action/detail/trigger__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_availabilities_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_availabilities_msgs/action/detail/trigger__functions.h"
// already included above
// #include "action_availabilities_msgs/action/detail/trigger__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "action_availabilities_msgs/action/trigger.h"
// Member `result`
// already included above
// #include "action_availabilities_msgs/action/detail/trigger__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Trigger_GetResult_Response__rosidl_typesupport_introspection_c__Trigger_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_availabilities_msgs__action__Trigger_GetResult_Response__init(message_memory);
}

void Trigger_GetResult_Response__rosidl_typesupport_introspection_c__Trigger_GetResult_Response_fini_function(void * message_memory)
{
  action_availabilities_msgs__action__Trigger_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Trigger_GetResult_Response__rosidl_typesupport_introspection_c__Trigger_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_availabilities_msgs__action__Trigger_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_availabilities_msgs__action__Trigger_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Trigger_GetResult_Response__rosidl_typesupport_introspection_c__Trigger_GetResult_Response_message_members = {
  "action_availabilities_msgs__action",  // message namespace
  "Trigger_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(action_availabilities_msgs__action__Trigger_GetResult_Response),
  Trigger_GetResult_Response__rosidl_typesupport_introspection_c__Trigger_GetResult_Response_message_member_array,  // message members
  Trigger_GetResult_Response__rosidl_typesupport_introspection_c__Trigger_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Trigger_GetResult_Response__rosidl_typesupport_introspection_c__Trigger_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Trigger_GetResult_Response__rosidl_typesupport_introspection_c__Trigger_GetResult_Response_message_type_support_handle = {
  0,
  &Trigger_GetResult_Response__rosidl_typesupport_introspection_c__Trigger_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_availabilities_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_availabilities_msgs, action, Trigger_GetResult_Response)() {
  Trigger_GetResult_Response__rosidl_typesupport_introspection_c__Trigger_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_availabilities_msgs, action, Trigger_Result)();
  if (!Trigger_GetResult_Response__rosidl_typesupport_introspection_c__Trigger_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    Trigger_GetResult_Response__rosidl_typesupport_introspection_c__Trigger_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Trigger_GetResult_Response__rosidl_typesupport_introspection_c__Trigger_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "action_availabilities_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "action_availabilities_msgs/action/detail/trigger__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers action_availabilities_msgs__action__detail__trigger__rosidl_typesupport_introspection_c__Trigger_GetResult_service_members = {
  "action_availabilities_msgs__action",  // service namespace
  "Trigger_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // action_availabilities_msgs__action__detail__trigger__rosidl_typesupport_introspection_c__Trigger_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // action_availabilities_msgs__action__detail__trigger__rosidl_typesupport_introspection_c__Trigger_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t action_availabilities_msgs__action__detail__trigger__rosidl_typesupport_introspection_c__Trigger_GetResult_service_type_support_handle = {
  0,
  &action_availabilities_msgs__action__detail__trigger__rosidl_typesupport_introspection_c__Trigger_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_availabilities_msgs, action, Trigger_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_availabilities_msgs, action, Trigger_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_availabilities_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_availabilities_msgs, action, Trigger_GetResult)() {
  if (!action_availabilities_msgs__action__detail__trigger__rosidl_typesupport_introspection_c__Trigger_GetResult_service_type_support_handle.typesupport_identifier) {
    action_availabilities_msgs__action__detail__trigger__rosidl_typesupport_introspection_c__Trigger_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)action_availabilities_msgs__action__detail__trigger__rosidl_typesupport_introspection_c__Trigger_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_availabilities_msgs, action, Trigger_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_availabilities_msgs, action, Trigger_GetResult_Response)()->data;
  }

  return &action_availabilities_msgs__action__detail__trigger__rosidl_typesupport_introspection_c__Trigger_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "action_availabilities_msgs/action/detail/trigger__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_availabilities_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_availabilities_msgs/action/detail/trigger__functions.h"
// already included above
// #include "action_availabilities_msgs/action/detail/trigger__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "action_availabilities_msgs/action/trigger.h"
// Member `feedback`
// already included above
// #include "action_availabilities_msgs/action/detail/trigger__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Trigger_FeedbackMessage__rosidl_typesupport_introspection_c__Trigger_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_availabilities_msgs__action__Trigger_FeedbackMessage__init(message_memory);
}

void Trigger_FeedbackMessage__rosidl_typesupport_introspection_c__Trigger_FeedbackMessage_fini_function(void * message_memory)
{
  action_availabilities_msgs__action__Trigger_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Trigger_FeedbackMessage__rosidl_typesupport_introspection_c__Trigger_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_availabilities_msgs__action__Trigger_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_availabilities_msgs__action__Trigger_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Trigger_FeedbackMessage__rosidl_typesupport_introspection_c__Trigger_FeedbackMessage_message_members = {
  "action_availabilities_msgs__action",  // message namespace
  "Trigger_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(action_availabilities_msgs__action__Trigger_FeedbackMessage),
  Trigger_FeedbackMessage__rosidl_typesupport_introspection_c__Trigger_FeedbackMessage_message_member_array,  // message members
  Trigger_FeedbackMessage__rosidl_typesupport_introspection_c__Trigger_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  Trigger_FeedbackMessage__rosidl_typesupport_introspection_c__Trigger_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Trigger_FeedbackMessage__rosidl_typesupport_introspection_c__Trigger_FeedbackMessage_message_type_support_handle = {
  0,
  &Trigger_FeedbackMessage__rosidl_typesupport_introspection_c__Trigger_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_availabilities_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_availabilities_msgs, action, Trigger_FeedbackMessage)() {
  Trigger_FeedbackMessage__rosidl_typesupport_introspection_c__Trigger_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Trigger_FeedbackMessage__rosidl_typesupport_introspection_c__Trigger_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_availabilities_msgs, action, Trigger_Feedback)();
  if (!Trigger_FeedbackMessage__rosidl_typesupport_introspection_c__Trigger_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    Trigger_FeedbackMessage__rosidl_typesupport_introspection_c__Trigger_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Trigger_FeedbackMessage__rosidl_typesupport_introspection_c__Trigger_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
