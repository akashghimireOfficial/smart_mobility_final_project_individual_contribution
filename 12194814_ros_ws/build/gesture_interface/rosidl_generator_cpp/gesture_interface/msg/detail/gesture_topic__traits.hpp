// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gesture_interface:msg/GestureTopic.idl
// generated code does not contain a copyright notice

#ifndef GESTURE_INTERFACE__MSG__DETAIL__GESTURE_TOPIC__TRAITS_HPP_
#define GESTURE_INTERFACE__MSG__DETAIL__GESTURE_TOPIC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gesture_interface/msg/detail/gesture_topic__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gesture_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const GestureTopic & msg,
  std::ostream & out)
{
  out << "{";
  // member: linear_motion
  {
    out << "linear_motion: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_motion, out);
    out << ", ";
  }

  // member: angular_motion
  {
    out << "angular_motion: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_motion, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GestureTopic & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: linear_motion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_motion: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_motion, out);
    out << "\n";
  }

  // member: angular_motion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_motion: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_motion, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GestureTopic & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace gesture_interface

namespace rosidl_generator_traits
{

[[deprecated("use gesture_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gesture_interface::msg::GestureTopic & msg,
  std::ostream & out, size_t indentation = 0)
{
  gesture_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gesture_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const gesture_interface::msg::GestureTopic & msg)
{
  return gesture_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gesture_interface::msg::GestureTopic>()
{
  return "gesture_interface::msg::GestureTopic";
}

template<>
inline const char * name<gesture_interface::msg::GestureTopic>()
{
  return "gesture_interface/msg/GestureTopic";
}

template<>
struct has_fixed_size<gesture_interface::msg::GestureTopic>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gesture_interface::msg::GestureTopic>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gesture_interface::msg::GestureTopic>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GESTURE_INTERFACE__MSG__DETAIL__GESTURE_TOPIC__TRAITS_HPP_
