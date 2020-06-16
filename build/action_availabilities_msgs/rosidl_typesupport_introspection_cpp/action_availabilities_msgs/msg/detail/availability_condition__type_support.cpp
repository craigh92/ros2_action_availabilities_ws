// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from action_availabilities_msgs:msg/AvailabilityCondition.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "action_availabilities_msgs/msg/detail/availability_condition__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace action_availabilities_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void AvailabilityCondition_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) action_availabilities_msgs::msg::AvailabilityCondition(_init);
}

void AvailabilityCondition_fini_function(void * message_memory)
{
  auto typed_message = static_cast<action_availabilities_msgs::msg::AvailabilityCondition *>(message_memory);
  typed_message->~AvailabilityCondition();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AvailabilityCondition_message_member_array[2] = {
  {
    "condition",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_availabilities_msgs::msg::AvailabilityCondition, condition),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_availabilities_msgs::msg::AvailabilityCondition, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AvailabilityCondition_message_members = {
  "action_availabilities_msgs::msg",  // message namespace
  "AvailabilityCondition",  // message name
  2,  // number of fields
  sizeof(action_availabilities_msgs::msg::AvailabilityCondition),
  AvailabilityCondition_message_member_array,  // message members
  AvailabilityCondition_init_function,  // function to initialize message memory (memory has to be allocated)
  AvailabilityCondition_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AvailabilityCondition_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AvailabilityCondition_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace action_availabilities_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<action_availabilities_msgs::msg::AvailabilityCondition>()
{
  return &::action_availabilities_msgs::msg::rosidl_typesupport_introspection_cpp::AvailabilityCondition_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, action_availabilities_msgs, msg, AvailabilityCondition)() {
  return &::action_availabilities_msgs::msg::rosidl_typesupport_introspection_cpp::AvailabilityCondition_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
