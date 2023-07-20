// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from decawave_msg:msg/Range.idl
// generated code does not contain a copyright notice

#ifndef DECAWAVE_MSG__MSG__DETAIL__RANGE__BUILDER_HPP_
#define DECAWAVE_MSG__MSG__DETAIL__RANGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "decawave_msg/msg/detail/range__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace decawave_msg
{

namespace msg
{

namespace builder
{

class Init_Range_range
{
public:
  explicit Init_Range_range(::decawave_msg::msg::Range & msg)
  : msg_(msg)
  {}
  ::decawave_msg::msg::Range range(::decawave_msg::msg::Range::_range_type arg)
  {
    msg_.range = std::move(arg);
    return std::move(msg_);
  }

private:
  ::decawave_msg::msg::Range msg_;
};

class Init_Range_to_id
{
public:
  explicit Init_Range_to_id(::decawave_msg::msg::Range & msg)
  : msg_(msg)
  {}
  Init_Range_range to_id(::decawave_msg::msg::Range::_to_id_type arg)
  {
    msg_.to_id = std::move(arg);
    return Init_Range_range(msg_);
  }

private:
  ::decawave_msg::msg::Range msg_;
};

class Init_Range_from_id
{
public:
  explicit Init_Range_from_id(::decawave_msg::msg::Range & msg)
  : msg_(msg)
  {}
  Init_Range_to_id from_id(::decawave_msg::msg::Range::_from_id_type arg)
  {
    msg_.from_id = std::move(arg);
    return Init_Range_to_id(msg_);
  }

private:
  ::decawave_msg::msg::Range msg_;
};

class Init_Range_header
{
public:
  Init_Range_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Range_from_id header(::decawave_msg::msg::Range::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Range_from_id(msg_);
  }

private:
  ::decawave_msg::msg::Range msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::decawave_msg::msg::Range>()
{
  return decawave_msg::msg::builder::Init_Range_header();
}

}  // namespace decawave_msg

#endif  // DECAWAVE_MSG__MSG__DETAIL__RANGE__BUILDER_HPP_
