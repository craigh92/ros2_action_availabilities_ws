// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from action_availabilities_msgs:msg/AvailabilityCondition.idl
// generated code does not contain a copyright notice

#ifndef ACTION_AVAILABILITIES_MSGS__MSG__DETAIL__AVAILABILITY_CONDITION__STRUCT_HPP_
#define ACTION_AVAILABILITIES_MSGS__MSG__DETAIL__AVAILABILITY_CONDITION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__action_availabilities_msgs__msg__AvailabilityCondition __attribute__((deprecated))
#else
# define DEPRECATED__action_availabilities_msgs__msg__AvailabilityCondition __declspec(deprecated)
#endif

namespace action_availabilities_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AvailabilityCondition_
{
  using Type = AvailabilityCondition_<ContainerAllocator>;

  explicit AvailabilityCondition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->condition = 0;
      this->message = "";
    }
  }

  explicit AvailabilityCondition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->condition = 0;
      this->message = "";
    }
  }

  // field types and members
  using _condition_type =
    int8_t;
  _condition_type condition;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__condition(
    const int8_t & _arg)
  {
    this->condition = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t ACTIVE =
    0;
  static constexpr int8_t INACTIVE =
    1;
  static constexpr int8_t SHELVED =
    2;
  static constexpr int8_t SUPPRESSED =
    3;
  static constexpr int8_t UNKNOWN =
    4;

  // pointer types
  using RawPtr =
    action_availabilities_msgs::msg::AvailabilityCondition_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_availabilities_msgs::msg::AvailabilityCondition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_availabilities_msgs::msg::AvailabilityCondition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_availabilities_msgs::msg::AvailabilityCondition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_availabilities_msgs::msg::AvailabilityCondition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_availabilities_msgs::msg::AvailabilityCondition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_availabilities_msgs::msg::AvailabilityCondition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_availabilities_msgs::msg::AvailabilityCondition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_availabilities_msgs::msg::AvailabilityCondition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_availabilities_msgs::msg::AvailabilityCondition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_availabilities_msgs__msg__AvailabilityCondition
    std::shared_ptr<action_availabilities_msgs::msg::AvailabilityCondition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_availabilities_msgs__msg__AvailabilityCondition
    std::shared_ptr<action_availabilities_msgs::msg::AvailabilityCondition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AvailabilityCondition_ & other) const
  {
    if (this->condition != other.condition) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const AvailabilityCondition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AvailabilityCondition_

// alias to use template instance with default allocator
using AvailabilityCondition =
  action_availabilities_msgs::msg::AvailabilityCondition_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int8_t AvailabilityCondition_<ContainerAllocator>::ACTIVE;
template<typename ContainerAllocator>
constexpr int8_t AvailabilityCondition_<ContainerAllocator>::INACTIVE;
template<typename ContainerAllocator>
constexpr int8_t AvailabilityCondition_<ContainerAllocator>::SHELVED;
template<typename ContainerAllocator>
constexpr int8_t AvailabilityCondition_<ContainerAllocator>::SUPPRESSED;
template<typename ContainerAllocator>
constexpr int8_t AvailabilityCondition_<ContainerAllocator>::UNKNOWN;

}  // namespace msg

}  // namespace action_availabilities_msgs

#endif  // ACTION_AVAILABILITIES_MSGS__MSG__DETAIL__AVAILABILITY_CONDITION__STRUCT_HPP_
