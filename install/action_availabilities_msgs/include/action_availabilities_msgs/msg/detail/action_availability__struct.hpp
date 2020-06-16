// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from action_availabilities_msgs:msg/ActionAvailability.idl
// generated code does not contain a copyright notice

#ifndef ACTION_AVAILABILITIES_MSGS__MSG__DETAIL__ACTION_AVAILABILITY__STRUCT_HPP_
#define ACTION_AVAILABILITIES_MSGS__MSG__DETAIL__ACTION_AVAILABILITY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__action_availabilities_msgs__msg__ActionAvailability __attribute__((deprecated))
#else
# define DEPRECATED__action_availabilities_msgs__msg__ActionAvailability __declspec(deprecated)
#endif

namespace action_availabilities_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActionAvailability_
{
  using Type = ActionAvailability_<ContainerAllocator>;

  explicit ActionAvailability_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action_name = "";
      this->available = false;
    }
  }

  explicit ActionAvailability_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : action_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action_name = "";
      this->available = false;
    }
  }

  // field types and members
  using _action_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _action_name_type action_name;
  using _available_type =
    bool;
  _available_type available;
  using _required_conditions_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _required_conditions_type required_conditions;
  using _unmet_conditions_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _unmet_conditions_type unmet_conditions;

  // setters for named parameter idiom
  Type & set__action_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->action_name = _arg;
    return *this;
  }
  Type & set__available(
    const bool & _arg)
  {
    this->available = _arg;
    return *this;
  }
  Type & set__required_conditions(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->required_conditions = _arg;
    return *this;
  }
  Type & set__unmet_conditions(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->unmet_conditions = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_availabilities_msgs::msg::ActionAvailability_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_availabilities_msgs::msg::ActionAvailability_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_availabilities_msgs::msg::ActionAvailability_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_availabilities_msgs::msg::ActionAvailability_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_availabilities_msgs::msg::ActionAvailability_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_availabilities_msgs::msg::ActionAvailability_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_availabilities_msgs::msg::ActionAvailability_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_availabilities_msgs::msg::ActionAvailability_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_availabilities_msgs::msg::ActionAvailability_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_availabilities_msgs::msg::ActionAvailability_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_availabilities_msgs__msg__ActionAvailability
    std::shared_ptr<action_availabilities_msgs::msg::ActionAvailability_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_availabilities_msgs__msg__ActionAvailability
    std::shared_ptr<action_availabilities_msgs::msg::ActionAvailability_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionAvailability_ & other) const
  {
    if (this->action_name != other.action_name) {
      return false;
    }
    if (this->available != other.available) {
      return false;
    }
    if (this->required_conditions != other.required_conditions) {
      return false;
    }
    if (this->unmet_conditions != other.unmet_conditions) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionAvailability_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionAvailability_

// alias to use template instance with default allocator
using ActionAvailability =
  action_availabilities_msgs::msg::ActionAvailability_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace action_availabilities_msgs

#endif  // ACTION_AVAILABILITIES_MSGS__MSG__DETAIL__ACTION_AVAILABILITY__STRUCT_HPP_
