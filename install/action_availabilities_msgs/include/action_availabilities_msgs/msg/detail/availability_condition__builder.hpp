// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from action_availabilities_msgs:msg/AvailabilityCondition.idl
// generated code does not contain a copyright notice

#ifndef ACTION_AVAILABILITIES_MSGS__MSG__DETAIL__AVAILABILITY_CONDITION__BUILDER_HPP_
#define ACTION_AVAILABILITIES_MSGS__MSG__DETAIL__AVAILABILITY_CONDITION__BUILDER_HPP_

#include "action_availabilities_msgs/msg/detail/availability_condition__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace action_availabilities_msgs
{

namespace msg
{

namespace builder
{

class Init_AvailabilityCondition_message
{
public:
  explicit Init_AvailabilityCondition_message(::action_availabilities_msgs::msg::AvailabilityCondition & msg)
  : msg_(msg)
  {}
  ::action_availabilities_msgs::msg::AvailabilityCondition message(::action_availabilities_msgs::msg::AvailabilityCondition::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_availabilities_msgs::msg::AvailabilityCondition msg_;
};

class Init_AvailabilityCondition_condition
{
public:
  Init_AvailabilityCondition_condition()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AvailabilityCondition_message condition(::action_availabilities_msgs::msg::AvailabilityCondition::_condition_type arg)
  {
    msg_.condition = std::move(arg);
    return Init_AvailabilityCondition_message(msg_);
  }

private:
  ::action_availabilities_msgs::msg::AvailabilityCondition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_availabilities_msgs::msg::AvailabilityCondition>()
{
  return action_availabilities_msgs::msg::builder::Init_AvailabilityCondition_condition();
}

}  // namespace action_availabilities_msgs

#endif  // ACTION_AVAILABILITIES_MSGS__MSG__DETAIL__AVAILABILITY_CONDITION__BUILDER_HPP_
