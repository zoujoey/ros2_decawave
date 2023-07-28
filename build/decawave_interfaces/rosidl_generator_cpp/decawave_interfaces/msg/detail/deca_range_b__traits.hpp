// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from decawave_interfaces:msg/DecaRangeB.idl
// generated code does not contain a copyright notice

#ifndef DECAWAVE_INTERFACES__MSG__DETAIL__DECA_RANGE_B__TRAITS_HPP_
#define DECAWAVE_INTERFACES__MSG__DETAIL__DECA_RANGE_B__TRAITS_HPP_

#include "decawave_interfaces/msg/detail/deca_range_b__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

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
