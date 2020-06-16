// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from action_availabilities_msgs:msg/ActionAvailability.idl
// generated code does not contain a copyright notice
#include "action_availabilities_msgs/msg/detail/action_availability__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "action_availabilities_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "action_availabilities_msgs/msg/detail/action_availability__struct.h"
#include "action_availabilities_msgs/msg/detail/action_availability__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // action_name, required_conditions, unmet_conditions
#include "rosidl_runtime_c/string_functions.h"  // action_name, required_conditions, unmet_conditions

// forward declare type support functions


using _ActionAvailability__ros_msg_type = action_availabilities_msgs__msg__ActionAvailability;

static bool _ActionAvailability__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ActionAvailability__ros_msg_type * ros_message = static_cast<const _ActionAvailability__ros_msg_type *>(untyped_ros_message);
  // Field name: action_name
  {
    const rosidl_runtime_c__String * str = &ros_message->action_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: available
  {
    cdr << (ros_message->available ? true : false);
  }

  // Field name: required_conditions
  {
    size_t size = ros_message->required_conditions.size;
    auto array_ptr = ros_message->required_conditions.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: unmet_conditions
  {
    size_t size = ros_message->unmet_conditions.size;
    auto array_ptr = ros_message->unmet_conditions.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  return true;
}

static bool _ActionAvailability__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ActionAvailability__ros_msg_type * ros_message = static_cast<_ActionAvailability__ros_msg_type *>(untyped_ros_message);
  // Field name: action_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->action_name.data) {
      rosidl_runtime_c__String__init(&ros_message->action_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->action_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'action_name'\n");
      return false;
    }
  }

  // Field name: available
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->available = tmp ? true : false;
  }

  // Field name: required_conditions
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->required_conditions.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->required_conditions);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->required_conditions, size)) {
      return "failed to create array for field 'required_conditions'";
    }
    auto array_ptr = ros_message->required_conditions.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'required_conditions'\n");
        return false;
      }
    }
  }

  // Field name: unmet_conditions
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->unmet_conditions.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->unmet_conditions);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->unmet_conditions, size)) {
      return "failed to create array for field 'unmet_conditions'";
    }
    auto array_ptr = ros_message->unmet_conditions.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'unmet_conditions'\n");
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_action_availabilities_msgs
size_t get_serialized_size_action_availabilities_msgs__msg__ActionAvailability(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ActionAvailability__ros_msg_type * ros_message = static_cast<const _ActionAvailability__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name action_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->action_name.size + 1);
  // field.name available
  {
    size_t item_size = sizeof(ros_message->available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name required_conditions
  {
    size_t array_size = ros_message->required_conditions.size;
    auto array_ptr = ros_message->required_conditions.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name unmet_conditions
  {
    size_t array_size = ros_message->unmet_conditions.size;
    auto array_ptr = ros_message->unmet_conditions.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ActionAvailability__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_action_availabilities_msgs__msg__ActionAvailability(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_action_availabilities_msgs
size_t max_serialized_size_action_availabilities_msgs__msg__ActionAvailability(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: action_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: available
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: required_conditions
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
  // member: unmet_conditions
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

static size_t _ActionAvailability__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_action_availabilities_msgs__msg__ActionAvailability(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ActionAvailability = {
  "action_availabilities_msgs::msg",
  "ActionAvailability",
  _ActionAvailability__cdr_serialize,
  _ActionAvailability__cdr_deserialize,
  _ActionAvailability__get_serialized_size,
  _ActionAvailability__max_serialized_size
};

static rosidl_message_type_support_t _ActionAvailability__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ActionAvailability,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, action_availabilities_msgs, msg, ActionAvailability)() {
  return &_ActionAvailability__type_support;
}

#if defined(__cplusplus)
}
#endif
