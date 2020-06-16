// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from action_availabilities_msgs:action/Trigger.idl
// generated code does not contain a copyright notice

#ifndef ACTION_AVAILABILITIES_MSGS__ACTION__DETAIL__TRIGGER__BUILDER_HPP_
#define ACTION_AVAILABILITIES_MSGS__ACTION__DETAIL__TRIGGER__BUILDER_HPP_

#include "action_availabilities_msgs/action/detail/trigger__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace action_availabilities_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_availabilities_msgs::action::Trigger_Goal>()
{
  return ::action_availabilities_msgs::action::Trigger_Goal(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace action_availabilities_msgs


namespace action_availabilities_msgs
{

namespace action
{

namespace builder
{

class Init_Trigger_Result_message
{
public:
  explicit Init_Trigger_Result_message(::action_availabilities_msgs::action::Trigger_Result & msg)
  : msg_(msg)
  {}
  ::action_availabilities_msgs::action::Trigger_Result message(::action_availabilities_msgs::action::Trigger_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_availabilities_msgs::action::Trigger_Result msg_;
};

class Init_Trigger_Result_success
{
public:
  Init_Trigger_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trigger_Result_message success(::action_availabilities_msgs::action::Trigger_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Trigger_Result_message(msg_);
  }

private:
  ::action_availabilities_msgs::action::Trigger_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_availabilities_msgs::action::Trigger_Result>()
{
  return action_availabilities_msgs::action::builder::Init_Trigger_Result_success();
}

}  // namespace action_availabilities_msgs


namespace action_availabilities_msgs
{

namespace action
{

namespace builder
{

class Init_Trigger_Feedback_percent_complete
{
public:
  Init_Trigger_Feedback_percent_complete()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_availabilities_msgs::action::Trigger_Feedback percent_complete(::action_availabilities_msgs::action::Trigger_Feedback::_percent_complete_type arg)
  {
    msg_.percent_complete = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_availabilities_msgs::action::Trigger_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_availabilities_msgs::action::Trigger_Feedback>()
{
  return action_availabilities_msgs::action::builder::Init_Trigger_Feedback_percent_complete();
}

}  // namespace action_availabilities_msgs


namespace action_availabilities_msgs
{

namespace action
{

namespace builder
{

class Init_Trigger_SendGoal_Request_goal
{
public:
  explicit Init_Trigger_SendGoal_Request_goal(::action_availabilities_msgs::action::Trigger_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::action_availabilities_msgs::action::Trigger_SendGoal_Request goal(::action_availabilities_msgs::action::Trigger_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_availabilities_msgs::action::Trigger_SendGoal_Request msg_;
};

class Init_Trigger_SendGoal_Request_goal_id
{
public:
  Init_Trigger_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trigger_SendGoal_Request_goal goal_id(::action_availabilities_msgs::action::Trigger_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Trigger_SendGoal_Request_goal(msg_);
  }

private:
  ::action_availabilities_msgs::action::Trigger_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_availabilities_msgs::action::Trigger_SendGoal_Request>()
{
  return action_availabilities_msgs::action::builder::Init_Trigger_SendGoal_Request_goal_id();
}

}  // namespace action_availabilities_msgs


namespace action_availabilities_msgs
{

namespace action
{

namespace builder
{

class Init_Trigger_SendGoal_Response_stamp
{
public:
  explicit Init_Trigger_SendGoal_Response_stamp(::action_availabilities_msgs::action::Trigger_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::action_availabilities_msgs::action::Trigger_SendGoal_Response stamp(::action_availabilities_msgs::action::Trigger_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_availabilities_msgs::action::Trigger_SendGoal_Response msg_;
};

class Init_Trigger_SendGoal_Response_accepted
{
public:
  Init_Trigger_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trigger_SendGoal_Response_stamp accepted(::action_availabilities_msgs::action::Trigger_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Trigger_SendGoal_Response_stamp(msg_);
  }

private:
  ::action_availabilities_msgs::action::Trigger_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_availabilities_msgs::action::Trigger_SendGoal_Response>()
{
  return action_availabilities_msgs::action::builder::Init_Trigger_SendGoal_Response_accepted();
}

}  // namespace action_availabilities_msgs


namespace action_availabilities_msgs
{

namespace action
{

namespace builder
{

class Init_Trigger_GetResult_Request_goal_id
{
public:
  Init_Trigger_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_availabilities_msgs::action::Trigger_GetResult_Request goal_id(::action_availabilities_msgs::action::Trigger_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_availabilities_msgs::action::Trigger_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_availabilities_msgs::action::Trigger_GetResult_Request>()
{
  return action_availabilities_msgs::action::builder::Init_Trigger_GetResult_Request_goal_id();
}

}  // namespace action_availabilities_msgs


namespace action_availabilities_msgs
{

namespace action
{

namespace builder
{

class Init_Trigger_GetResult_Response_result
{
public:
  explicit Init_Trigger_GetResult_Response_result(::action_availabilities_msgs::action::Trigger_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::action_availabilities_msgs::action::Trigger_GetResult_Response result(::action_availabilities_msgs::action::Trigger_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_availabilities_msgs::action::Trigger_GetResult_Response msg_;
};

class Init_Trigger_GetResult_Response_status
{
public:
  Init_Trigger_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trigger_GetResult_Response_result status(::action_availabilities_msgs::action::Trigger_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Trigger_GetResult_Response_result(msg_);
  }

private:
  ::action_availabilities_msgs::action::Trigger_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_availabilities_msgs::action::Trigger_GetResult_Response>()
{
  return action_availabilities_msgs::action::builder::Init_Trigger_GetResult_Response_status();
}

}  // namespace action_availabilities_msgs


namespace action_availabilities_msgs
{

namespace action
{

namespace builder
{

class Init_Trigger_FeedbackMessage_feedback
{
public:
  explicit Init_Trigger_FeedbackMessage_feedback(::action_availabilities_msgs::action::Trigger_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::action_availabilities_msgs::action::Trigger_FeedbackMessage feedback(::action_availabilities_msgs::action::Trigger_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_availabilities_msgs::action::Trigger_FeedbackMessage msg_;
};

class Init_Trigger_FeedbackMessage_goal_id
{
public:
  Init_Trigger_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trigger_FeedbackMessage_feedback goal_id(::action_availabilities_msgs::action::Trigger_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Trigger_FeedbackMessage_feedback(msg_);
  }

private:
  ::action_availabilities_msgs::action::Trigger_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_availabilities_msgs::action::Trigger_FeedbackMessage>()
{
  return action_availabilities_msgs::action::builder::Init_Trigger_FeedbackMessage_goal_id();
}

}  // namespace action_availabilities_msgs

#endif  // ACTION_AVAILABILITIES_MSGS__ACTION__DETAIL__TRIGGER__BUILDER_HPP_
