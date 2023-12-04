// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cam_interface:msg/CamTopic.idl
// generated code does not contain a copyright notice

#ifndef CAM_INTERFACE__MSG__DETAIL__CAM_TOPIC__TRAITS_HPP_
#define CAM_INTERFACE__MSG__DETAIL__CAM_TOPIC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cam_interface/msg/detail/cam_topic__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'image_data'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace cam_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const CamTopic & msg,
  std::ostream & out)
{
  out << "{";
  // member: image_data
  {
    out << "image_data: ";
    to_flow_style_yaml(msg.image_data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CamTopic & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: image_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_data:\n";
    to_block_style_yaml(msg.image_data, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CamTopic & msg, bool use_flow_style = false)
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

}  // namespace cam_interface

namespace rosidl_generator_traits
{

[[deprecated("use cam_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cam_interface::msg::CamTopic & msg,
  std::ostream & out, size_t indentation = 0)
{
  cam_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cam_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const cam_interface::msg::CamTopic & msg)
{
  return cam_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<cam_interface::msg::CamTopic>()
{
  return "cam_interface::msg::CamTopic";
}

template<>
inline const char * name<cam_interface::msg::CamTopic>()
{
  return "cam_interface/msg/CamTopic";
}

template<>
struct has_fixed_size<cam_interface::msg::CamTopic>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<cam_interface::msg::CamTopic>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<cam_interface::msg::CamTopic>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAM_INTERFACE__MSG__DETAIL__CAM_TOPIC__TRAITS_HPP_
