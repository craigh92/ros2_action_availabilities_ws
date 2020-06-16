// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from action_availabilities_msgs:msg/ActionAvailability.idl
// generated code does not contain a copyright notice

#ifndef ACTION_AVAILABILITIES_MSGS__MSG__DETAIL__ACTION_AVAILABILITY__TRAITS_HPP_
#define ACTION_AVAILABILITIES_MSGS__MSG__DETAIL__ACTION_AVAILABILITY__TRAITS_HPP_

#include "action_availabilities_msgs/msg/detail/action_availability__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_availabilities_msgs::msg::ActionAvailability>()
{
  return "action_availabilities_msgs::msg::ActionAvailability";
}

template<>
struct has_fixed_size<action_availabilities_msgs::msg::ActionAvailability>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<action_availabilities_msgs::msg::ActionAvailability>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<action_availabilities_msgs::msg::ActionAvailability>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ACTION_AVAILABILITIES_MSGS__MSG__DETAIL__ACTION_AVAILABILITY__TRAITS_HPP_
