// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from decawave_interfaces:msg/DecaRange.idl
// generated code does not contain a copyright notice

#ifndef DECAWAVE_INTERFACES__MSG__DETAIL__DECA_RANGE__TRAITS_HPP_
#define DECAWAVE_INTERFACES__MSG__DETAIL__DECA_RANGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "decawave_interfaces/msg/detail/deca_range__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace decawave_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const DecaRange & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: range
  {
    out << "range: ";
    rosidl_generator_traits::value_to_yaml(msg.range, out);
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

  // member: covariance
  {
    out << "covariance: ";
    rosidl_generator_traits::value_to_yaml(msg.covariance, out);
    out << ", ";
  }

  // member: tx1
  {
    out << "tx1: ";
    rosidl_generator_traits::value_to_yaml(msg.tx1, out);
    out << ", ";
  }

  // member: rx1
  {
    out << "rx1: ";
    rosidl_generator_traits::value_to_yaml(msg.rx1, out);
    out << ", ";
  }

  // member: tx2
  {
    out << "tx2: ";
    rosidl_generator_traits::value_to_yaml(msg.tx2, out);
    out << ", ";
  }

  // member: rx2
  {
    out << "rx2: ";
    rosidl_generator_traits::value_to_yaml(msg.rx2, out);
    out << ", ";
  }

  // member: tx3
  {
    out << "tx3: ";
    rosidl_generator_traits::value_to_yaml(msg.tx3, out);
    out << ", ";
  }

  // member: rx3
  {
    out << "rx3: ";
    rosidl_generator_traits::value_to_yaml(msg.rx3, out);
    out << ", ";
  }

  // member: fpp1
  {
    out << "fpp1: ";
    rosidl_generator_traits::value_to_yaml(msg.fpp1, out);
    out << ", ";
  }

  // member: fpp2
  {
    out << "fpp2: ";
    rosidl_generator_traits::value_to_yaml(msg.fpp2, out);
    out << ", ";
  }

  // member: skew1
  {
    out << "skew1: ";
    rosidl_generator_traits::value_to_yaml(msg.skew1, out);
    out << ", ";
  }

  // member: skew2
  {
    out << "skew2: ";
    rosidl_generator_traits::value_to_yaml(msg.skew2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DecaRange & msg,
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

  // member: range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range: ";
    rosidl_generator_traits::value_to_yaml(msg.range, out);
    out << "\n";
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

  // member: covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "covariance: ";
    rosidl_generator_traits::value_to_yaml(msg.covariance, out);
    out << "\n";
  }

  // member: tx1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx1: ";
    rosidl_generator_traits::value_to_yaml(msg.tx1, out);
    out << "\n";
  }

  // member: rx1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx1: ";
    rosidl_generator_traits::value_to_yaml(msg.rx1, out);
    out << "\n";
  }

  // member: tx2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx2: ";
    rosidl_generator_traits::value_to_yaml(msg.tx2, out);
    out << "\n";
  }

  // member: rx2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx2: ";
    rosidl_generator_traits::value_to_yaml(msg.rx2, out);
    out << "\n";
  }

  // member: tx3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx3: ";
    rosidl_generator_traits::value_to_yaml(msg.tx3, out);
    out << "\n";
  }

  // member: rx3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx3: ";
    rosidl_generator_traits::value_to_yaml(msg.rx3, out);
    out << "\n";
  }

  // member: fpp1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fpp1: ";
    rosidl_generator_traits::value_to_yaml(msg.fpp1, out);
    out << "\n";
  }

  // member: fpp2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fpp2: ";
    rosidl_generator_traits::value_to_yaml(msg.fpp2, out);
    out << "\n";
  }

  // member: skew1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "skew1: ";
    rosidl_generator_traits::value_to_yaml(msg.skew1, out);
    out << "\n";
  }

  // member: skew2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "skew2: ";
    rosidl_generator_traits::value_to_yaml(msg.skew2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DecaRange & msg, bool use_flow_style = false)
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
  const decawave_interfaces::msg::DecaRange & msg,
  std::ostream & out, size_t indentation = 0)
{
  decawave_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use decawave_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const decawave_interfaces::msg::DecaRange & msg)
{
  return decawave_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<decawave_interfaces::msg::DecaRange>()
{
  return "decawave_interfaces::msg::DecaRange";
}

template<>
inline const char * name<decawave_interfaces::msg::DecaRange>()
{
  return "decawave_interfaces/msg/DecaRange";
}

template<>
struct has_fixed_size<decawave_interfaces::msg::DecaRange>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<decawave_interfaces::msg::DecaRange>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<decawave_interfaces::msg::DecaRange>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DECAWAVE_INTERFACES__MSG__DETAIL__DECA_RANGE__TRAITS_HPP_
