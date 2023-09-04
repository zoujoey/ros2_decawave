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

class Init_DecaRangeB_z1
{
public:
  explicit Init_DecaRangeB_z1(::decawave_interfaces::msg::DecaRangeB & msg)
  : msg_(msg)
  {}
  ::decawave_interfaces::msg::DecaRangeB z1(::decawave_interfaces::msg::DecaRangeB::_z1_type arg)
  {
    msg_.z1 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::decawave_interfaces::msg::DecaRangeB msg_;
};

class Init_DecaRangeB_y1
{
public:
  explicit Init_DecaRangeB_y1(::decawave_interfaces::msg::DecaRangeB & msg)
  : msg_(msg)
  {}
  Init_DecaRangeB_z1 y1(::decawave_interfaces::msg::DecaRangeB::_y1_type arg)
  {
    msg_.y1 = std::move(arg);
    return Init_DecaRangeB_z1(msg_);
  }

private:
  ::decawave_interfaces::msg::DecaRangeB msg_;
};

class Init_DecaRangeB_x1
{
public:
  explicit Init_DecaRangeB_x1(::decawave_interfaces::msg::DecaRangeB & msg)
  : msg_(msg)
  {}
  Init_DecaRangeB_y1 x1(::decawave_interfaces::msg::DecaRangeB::_x1_type arg)
  {
    msg_.x1 = std::move(arg);
    return Init_DecaRangeB_y1(msg_);
  }

private:
  ::decawave_interfaces::msg::DecaRangeB msg_;
};

class Init_DecaRangeB_tag_id
{
public:
  explicit Init_DecaRangeB_tag_id(::decawave_interfaces::msg::DecaRangeB & msg)
  : msg_(msg)
  {}
  Init_DecaRangeB_x1 tag_id(::decawave_interfaces::msg::DecaRangeB::_tag_id_type arg)
  {
    msg_.tag_id = std::move(arg);
    return Init_DecaRangeB_x1(msg_);
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
  Init_DecaRangeB_tag_id header(::decawave_interfaces::msg::DecaRangeB::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DecaRangeB_tag_id(msg_);
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
