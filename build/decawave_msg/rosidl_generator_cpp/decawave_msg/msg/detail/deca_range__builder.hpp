// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from decawave_msg:msg/DecaRange.idl
// generated code does not contain a copyright notice

#ifndef DECAWAVE_MSG__MSG__DETAIL__DECA_RANGE__BUILDER_HPP_
#define DECAWAVE_MSG__MSG__DETAIL__DECA_RANGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "decawave_msg/msg/detail/deca_range__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace decawave_msg
{

namespace msg
{

namespace builder
{

class Init_DecaRange_range
{
public:
  explicit Init_DecaRange_range(::decawave_msg::msg::DecaRange & msg)
  : msg_(msg)
  {}
  ::decawave_msg::msg::DecaRange range(::decawave_msg::msg::DecaRange::_range_type arg)
  {
    msg_.range = std::move(arg);
    return std::move(msg_);
  }

private:
  ::decawave_msg::msg::DecaRange msg_;
};

class Init_DecaRange_to_id
{
public:
  explicit Init_DecaRange_to_id(::decawave_msg::msg::DecaRange & msg)
  : msg_(msg)
  {}
  Init_DecaRange_range to_id(::decawave_msg::msg::DecaRange::_to_id_type arg)
  {
    msg_.to_id = std::move(arg);
    return Init_DecaRange_range(msg_);
  }

private:
  ::decawave_msg::msg::DecaRange msg_;
};

class Init_DecaRange_from_id
{
public:
  explicit Init_DecaRange_from_id(::decawave_msg::msg::DecaRange & msg)
  : msg_(msg)
  {}
  Init_DecaRange_to_id from_id(::decawave_msg::msg::DecaRange::_from_id_type arg)
  {
    msg_.from_id = std::move(arg);
    return Init_DecaRange_to_id(msg_);
  }

private:
  ::decawave_msg::msg::DecaRange msg_;
};

class Init_DecaRange_header
{
public:
  Init_DecaRange_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DecaRange_from_id header(::decawave_msg::msg::DecaRange::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DecaRange_from_id(msg_);
  }

private:
  ::decawave_msg::msg::DecaRange msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::decawave_msg::msg::DecaRange>()
{
  return decawave_msg::msg::builder::Init_DecaRange_header();
}

}  // namespace decawave_msg

#endif  // DECAWAVE_MSG__MSG__DETAIL__DECA_RANGE__BUILDER_HPP_
