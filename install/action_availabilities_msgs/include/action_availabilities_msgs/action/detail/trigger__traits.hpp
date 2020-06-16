// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from action_availabilities_msgs:action/Trigger.idl
// generated code does not contain a copyright notice

#ifndef ACTION_AVAILABILITIES_MSGS__ACTION__DETAIL__TRIGGER__TRAITS_HPP_
#define ACTION_AVAILABILITIES_MSGS__ACTION__DETAIL__TRIGGER__TRAITS_HPP_

#include "action_availabilities_msgs/action/detail/trigger__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_availabilities_msgs::action::Trigger_Goal>()
{
  return "action_availabilities_msgs::action::Trigger_Goal";
}

template<>
struct has_fixed_size<action_availabilities_msgs::action::Trigger_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<action_availabilities_msgs::action::Trigger_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<action_availabilities_msgs::action::Trigger_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_availabilities_msgs::action::Trigger_Result>()
{
  return "action_availabilities_msgs::action::Trigger_Result";
}

template<>
struct has_fixed_size<action_availabilities_msgs::action::Trigger_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<action_availabilities_msgs::action::Trigger_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<action_availabilities_msgs::action::Trigger_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_availabilities_msgs::action::Trigger_Feedback>()
{
  return "action_availabilities_msgs::action::Trigger_Feedback";
}

template<>
struct has_fixed_size<action_availabilities_msgs::action::Trigger_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<action_availabilities_msgs::action::Trigger_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<action_availabilities_msgs::action::Trigger_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "action_availabilities_msgs/action/detail/trigger__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_availabilities_msgs::action::Trigger_SendGoal_Request>()
{
  return "action_availabilities_msgs::action::Trigger_SendGoal_Request";
}

template<>
struct has_fixed_size<action_availabilities_msgs::action::Trigger_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<action_availabilities_msgs::action::Trigger_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<action_availabilities_msgs::action::Trigger_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<action_availabilities_msgs::action::Trigger_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<action_availabilities_msgs::action::Trigger_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_availabilities_msgs::action::Trigger_SendGoal_Response>()
{
  return "action_availabilities_msgs::action::Trigger_SendGoal_Response";
}

template<>
struct has_fixed_size<action_availabilities_msgs::action::Trigger_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<action_availabilities_msgs::action::Trigger_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<action_availabilities_msgs::action::Trigger_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_availabilities_msgs::action::Trigger_SendGoal>()
{
  return "action_availabilities_msgs::action::Trigger_SendGoal";
}

template<>
struct has_fixed_size<action_availabilities_msgs::action::Trigger_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<action_availabilities_msgs::action::Trigger_SendGoal_Request>::value &&
    has_fixed_size<action_availabilities_msgs::action::Trigger_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<action_availabilities_msgs::action::Trigger_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<action_availabilities_msgs::action::Trigger_SendGoal_Request>::value &&
    has_bounded_size<action_availabilities_msgs::action::Trigger_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<action_availabilities_msgs::action::Trigger_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<action_availabilities_msgs::action::Trigger_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<action_availabilities_msgs::action::Trigger_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_availabilities_msgs::action::Trigger_GetResult_Request>()
{
  return "action_availabilities_msgs::action::Trigger_GetResult_Request";
}

template<>
struct has_fixed_size<action_availabilities_msgs::action::Trigger_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<action_availabilities_msgs::action::Trigger_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<action_availabilities_msgs::action::Trigger_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "action_availabilities_msgs/action/detail/trigger__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_availabilities_msgs::action::Trigger_GetResult_Response>()
{
  return "action_availabilities_msgs::action::Trigger_GetResult_Response";
}

template<>
struct has_fixed_size<action_availabilities_msgs::action::Trigger_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<action_availabilities_msgs::action::Trigger_Result>::value> {};

template<>
struct has_bounded_size<action_availabilities_msgs::action::Trigger_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<action_availabilities_msgs::action::Trigger_Result>::value> {};

template<>
struct is_message<action_availabilities_msgs::action::Trigger_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_availabilities_msgs::action::Trigger_GetResult>()
{
  return "action_availabilities_msgs::action::Trigger_GetResult";
}

template<>
struct has_fixed_size<action_availabilities_msgs::action::Trigger_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<action_availabilities_msgs::action::Trigger_GetResult_Request>::value &&
    has_fixed_size<action_availabilities_msgs::action::Trigger_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<action_availabilities_msgs::action::Trigger_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<action_availabilities_msgs::action::Trigger_GetResult_Request>::value &&
    has_bounded_size<action_availabilities_msgs::action::Trigger_GetResult_Response>::value
  >
{
};

template<>
struct is_service<action_availabilities_msgs::action::Trigger_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<action_availabilities_msgs::action::Trigger_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<action_availabilities_msgs::action::Trigger_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "action_availabilities_msgs/action/detail/trigger__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_availabilities_msgs::action::Trigger_FeedbackMessage>()
{
  return "action_availabilities_msgs::action::Trigger_FeedbackMessage";
}

template<>
struct has_fixed_size<action_availabilities_msgs::action::Trigger_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<action_availabilities_msgs::action::Trigger_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<action_availabilities_msgs::action::Trigger_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<action_availabilities_msgs::action::Trigger_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<action_availabilities_msgs::action::Trigger_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<action_availabilities_msgs::action::Trigger>
  : std::true_type
{
};

template<>
struct is_action_goal<action_availabilities_msgs::action::Trigger_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<action_availabilities_msgs::action::Trigger_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<action_availabilities_msgs::action::Trigger_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ACTION_AVAILABILITIES_MSGS__ACTION__DETAIL__TRIGGER__TRAITS_HPP_
