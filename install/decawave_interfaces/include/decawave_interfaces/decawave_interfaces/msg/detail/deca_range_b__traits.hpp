// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from decawave_interfaces:msg/DecaRangeB.idl
// generated code does not contain a copyright notice

#ifndef DECAWAVE_INTERFACES__MSG__DETAIL__DECA_RANGE_B__TRAITS_HPP_
#define DECAWAVE_INTERFACES__MSG__DETAIL__DECA_RANGE_B__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "decawave_interfaces/msg/detail/deca_range_b__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace decawave_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const DecaRangeB & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: from_id
  {
    out << "from_id: ";
    rosidl_generator_traits::value_to_yaml(msg.from_id, out);
    out << ", ";
  }

  // member: to_id
  {
    out << "to_id: ";
    rosidl_generator_traits::value_to_yaml(msg.to_id, out);
    out << ", ";
  }

  // member: range
  {
    out << "range: ";
    rosidl_generator_traits::value_to_yaml(msg.range, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DecaRangeB & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: from_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "from_id: ";
    rosidl_generator_traits::value_to_yaml(msg.from_id, out);
    out << "\n";
  }

  // member: to_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "to_id: ";
    rosidl_generator_traits::value_to_yaml(msg.to_id, out);
    out << "\n";
  }

  // member: range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range: ";
    rosidl_generator_traits::value_to_yaml(msg.range, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DecaRangeB & msg, bool use_flow_style = false)
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

}  // namespace decawave_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use decawave_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const decawave_interfaces::msg::DecaRangeB & msg,
  std::ostream & out, size_t indentation = 0)
{
  decawave_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use decawave_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const decawave_interfaces::msg::DecaRangeB & msg)
{
  return decawave_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<decawave_interfaces::msg::DecaRangeB>()
{
  return "decawave_interfaces::msg::DecaRangeB";
}

template<>
inline const char * name<decawave_interfaces::msg::DecaRangeB>()
{
  return "decawave_interfaces/msg/DecaRangeB";
}

template<>
struct has_fixed_size<decawave_interfaces::msg::DecaRangeB>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<decawave_interfaces::msg::DecaRangeB>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<decawave_interfaces::msg::DecaRangeB>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DECAWAVE_INTERFACES__MSG__DETAIL__DECA_RANGE_B__TRAITS_HPP_
