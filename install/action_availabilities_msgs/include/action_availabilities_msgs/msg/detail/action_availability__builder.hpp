// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from action_availabilities_msgs:msg/ActionAvailability.idl
// generated code does not contain a copyright notice

#ifndef ACTION_AVAILABILITIES_MSGS__MSG__DETAIL__ACTION_AVAILABILITY__BUILDER_HPP_
#define ACTION_AVAILABILITIES_MSGS__MSG__DETAIL__ACTION_AVAILABILITY__BUILDER_HPP_

#include "action_availabilities_msgs/msg/detail/action_availability__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace action_availabilities_msgs
{

namespace msg
{

namespace builder
{

class Init_ActionAvailability_unmet_conditions
{
public:
  explicit Init_ActionAvailability_unmet_conditions(::action_availabilities_msgs::msg::ActionAvailability & msg)
  : msg_(msg)
  {}
  ::action_availabilities_msgs::msg::ActionAvailability unmet_conditions(::action_availabilities_msgs::msg::ActionAvailability::_unmet_conditions_type arg)
  {
    msg_.unmet_conditions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_availabilities_msgs::msg::ActionAvailability msg_;
};

class Init_ActionAvailability_required_conditions
{
public:
  explicit Init_ActionAvailability_required_conditions(::action_availabilities_msgs::msg::ActionAvailability & msg)
  : msg_(msg)
  {}
  Init_ActionAvailability_unmet_conditions required_conditions(::action_availabilities_msgs::msg::ActionAvailability::_required_conditions_type arg)
  {
    msg_.required_conditions = std::move(arg);
    return Init_ActionAvailability_unmet_conditions(msg_);
  }

private:
  ::action_availabilities_msgs::msg::ActionAvailability msg_;
};

class Init_ActionAvailability_available
{
public:
  explicit Init_ActionAvailability_available(::action_availabilities_msgs::msg::ActionAvailability & msg)
  : msg_(msg)
  {}
  Init_ActionAvailability_required_conditions available(::action_availabilities_msgs::msg::ActionAvailability::_available_type arg)
  {
    msg_.available = std::move(arg);
    return Init_ActionAvailability_required_conditions(msg_);
  }

private:
  ::action_availabilities_msgs::msg::ActionAvailability msg_;
};

class Init_ActionAvailability_action_name
{
public:
  Init_ActionAvailability_action_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionAvailability_available action_name(::action_availabilities_msgs::msg::ActionAvailability::_action_name_type arg)
  {
    msg_.action_name = std::move(arg);
    return Init_ActionAvailability_available(msg_);
  }

private:
  ::action_availabilities_msgs::msg::ActionAvailability msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_availabilities_msgs::msg::ActionAvailability>()
{
  return action_availabilities_msgs::msg::builder::Init_ActionAvailability_action_name();
}

}  // namespace action_availabilities_msgs

#endif  // ACTION_AVAILABILITIES_MSGS__MSG__DETAIL__ACTION_AVAILABILITY__BUILDER_HPP_
