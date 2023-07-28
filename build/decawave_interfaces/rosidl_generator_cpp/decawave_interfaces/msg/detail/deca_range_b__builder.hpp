// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from decawave_interfaces:msg/DecaRangeB.idl
// generated code does not contain a copyright notice

#ifndef DECAWAVE_INTERFACES__MSG__DETAIL__DECA_RANGE_B__BUILDER_HPP_
#define DECAWAVE_INTERFACES__MSG__DETAIL__DECA_RANGE_B__BUILDER_HPP_

#include "decawave_interfaces/msg/detail/deca_range_b__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace decawave_interfaces
{

namespace msg
{

namespace builder
{

class Init_DecaRangeB_range
{
public:
  explicit Init_DecaRangeB_range(::decawave_interfaces::msg::DecaRangeB & msg)
  : msg_(msg)
  {}
  ::decawave_interfaces::msg::DecaRangeB range(::decawave_interfaces::msg::DecaRangeB::_range_type arg)
  {
    msg_.range = std::move(arg);
    return std::move(msg_);
  }

private:
  ::decawave_interfaces::msg::DecaRangeB msg_;
};

class Init_DecaRangeB_to_id
{
public:
  explicit Init_DecaRangeB_to_id(::decawave_interfaces::msg::DecaRangeB & msg)
  : msg_(msg)
  {}
  Init_DecaRangeB_range to_id(::decawave_interfaces::msg::DecaRangeB::_to_id_type arg)
  {
    msg_.to_id = std::move(arg);
    return Init_DecaRangeB_range(msg_);
  }

private:
  ::decawave_interfaces::msg::DecaRangeB msg_;
};

class Init_DecaRangeB_from_id
{
public:
  explicit Init_DecaRangeB_from_id(::decawave_interfaces::msg::DecaRangeB & msg)
  : msg_(msg)
  {}
  Init_DecaRangeB_to_id from_id(::decawave_interfaces::msg::DecaRangeB::_from_id_type arg)
  {
    msg_.from_id = std::move(arg);
    return Init_DecaRangeB_to_id(msg_);
  }

private:
  ::decawave_interfaces::msg::DecaRangeB msg_;
};

class Init_DecaRangeB_header
{
public:
  Init_DecaRangeB_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DecaRangeB_from_id header(::decawave_interfaces::msg::DecaRangeB::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DecaRangeB_from_id(msg_);
  }

private:
  ::decawave_interfaces::msg::DecaRangeB msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::decawave_interfaces::msg::DecaRangeB>()
{
  return decawave_interfaces::msg::builder::Init_DecaRangeB_header();
}

}  // namespace decawave_interfaces

#endif  // DECAWAVE_INTERFACES__MSG__DETAIL__DECA_RANGE_B__BUILDER_HPP_
