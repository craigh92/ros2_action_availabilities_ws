// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from action_availabilities_msgs:msg/ActionAvailability.idl
// generated code does not contain a copyright notice
#include "action_availabilities_msgs/msg/detail/action_availability__rosidl_typesupport_fastrtps_cpp.hpp"
#include "action_availabilities_msgs/msg/detail/action_availability__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace action_availabilities_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_action_availabilities_msgs
cdr_serialize(
  const action_availabilities_msgs::msg::ActionAvailability & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: action_name
  cdr << ros_message.action_name;
  // Member: available
  cdr << (ros_message.available ? true : false);
  // Member: required_conditions
  {
    cdr << ros_message.required_conditions;
  }
  // Member: unmet_conditions
  {
    cdr << ros_message.unmet_conditions;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_action_availabilities_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  action_availabilities_msgs::msg::ActionAvailability & ros_message)
{
  // Member: action_name
  cdr >> ros_message.action_name;

  // Member: available
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.available = tmp ? true : false;
  }

  // Member: required_conditions
  {
    cdr >> ros_message.required_conditions;
  }

  // Member: unmet_conditions
  {
    cdr >> ros_message.unmet_conditions;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_action_availabilities_msgs
get_serialized_size(
  const action_availabilities_msgs::msg::ActionAvailability & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: action_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.action_name.size() + 1);
  // Member: available
  {
    size_t item_size = sizeof(ros_message.available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: required_conditions
  {
    size_t array_size = ros_message.required_conditions.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.required_conditions[index].size() + 1);
    }
  }
  // Member: unmet_conditions
  {
    size_t array_size = ros_message.unmet_conditions.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.unmet_conditions[index].size() + 1);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_action_availabilities_msgs
max_serialized_size_ActionAvailability(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: action_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: available
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: required_conditions
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: unmet_conditions
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _ActionAvailability__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const action_availabilities_msgs::msg::ActionAvailability *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ActionAvailability__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<action_availabilities_msgs::msg::ActionAvailability *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ActionAvailability__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const action_availabilities_msgs::msg::ActionAvailability *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ActionAvailability__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ActionAvailability(full_bounded, 0);
}

static message_type_support_callbacks_t _ActionAvailability__callbacks = {
  "action_availabilities_msgs::msg",
  "ActionAvailability",
  _ActionAvailability__cdr_serialize,
  _ActionAvailability__cdr_deserialize,
  _ActionAvailability__get_serialized_size,
  _ActionAvailability__max_serialized_size
};

static rosidl_message_type_support_t _ActionAvailability__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ActionAvailability__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace action_availabilities_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_action_availabilities_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<action_availabilities_msgs::msg::ActionAvailability>()
{
  return &action_availabilities_msgs::msg::typesupport_fastrtps_cpp::_ActionAvailability__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, action_availabilities_msgs, msg, ActionAvailability)() {
  return &action_availabilities_msgs::msg::typesupport_fastrtps_cpp::_ActionAvailability__handle;
}

#ifdef __cplusplus
}
#endif
