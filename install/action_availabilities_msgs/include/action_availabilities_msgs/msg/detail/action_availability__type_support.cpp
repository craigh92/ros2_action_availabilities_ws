// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from action_availabilities_msgs:msg/ActionAvailability.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "action_availabilities_msgs/msg/detail/action_availability__struct.hpp"
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

void ActionAvailability_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) action_availabilities_msgs::msg::ActionAvailability(_init);
}

void ActionAvailability_fini_function(void * message_memory)
{
  auto typed_message = static_cast<action_availabilities_msgs::msg::ActionAvailability *>(message_memory);
  typed_message->~ActionAvailability();
}

size_t size_function__ActionAvailability__required_conditions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActionAvailability__required_conditions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ActionAvailability__required_conditions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__ActionAvailability__required_conditions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ActionAvailability__unmet_conditions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActionAvailability__unmet_conditions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ActionAvailability__unmet_conditions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__ActionAvailability__unmet_conditions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ActionAvailability_message_member_array[4] = {
  {
    "action_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_availabilities_msgs::msg::ActionAvailability, action_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "available",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_availabilities_msgs::msg::ActionAvailability, available),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "required_conditions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_availabilities_msgs::msg::ActionAvailability, required_conditions),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActionAvailability__required_conditions,  // size() function pointer
    get_const_function__ActionAvailability__required_conditions,  // get_const(index) function pointer
    get_function__ActionAvailability__required_conditions,  // get(index) function pointer
    resize_function__ActionAvailability__required_conditions  // resize(index) function pointer
  },
  {
    "unmet_conditions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_availabilities_msgs::msg::ActionAvailability, unmet_conditions),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActionAvailability__unmet_conditions,  // size() function pointer
    get_const_function__ActionAvailability__unmet_conditions,  // get_const(index) function pointer
    get_function__ActionAvailability__unmet_conditions,  // get(index) function pointer
    resize_function__ActionAvailability__unmet_conditions  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ActionAvailability_message_members = {
  "action_availabilities_msgs::msg",  // message namespace
  "ActionAvailability",  // message name
  4,  // number of fields
  sizeof(action_availabilities_msgs::msg::ActionAvailability),
  ActionAvailability_message_member_array,  // message members
  ActionAvailability_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionAvailability_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ActionAvailability_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ActionAvailability_message_members,
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
get_message_type_support_handle<action_availabilities_msgs::msg::ActionAvailability>()
{
  return &::action_availabilities_msgs::msg::rosidl_typesupport_introspection_cpp::ActionAvailability_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, action_availabilities_msgs, msg, ActionAvailability)() {
  return &::action_availabilities_msgs::msg::rosidl_typesupport_introspection_cpp::ActionAvailability_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
