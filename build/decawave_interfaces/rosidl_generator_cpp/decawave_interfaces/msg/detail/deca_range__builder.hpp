// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from decawave_interfaces:msg/DecaRange.idl
// generated code does not contain a copyright notice

#ifndef DECAWAVE_INTERFACES__MSG__DETAIL__DECA_RANGE__BUILDER_HPP_
#define DECAWAVE_INTERFACES__MSG__DETAIL__DECA_RANGE__BUILDER_HPP_

#include "decawave_interfaces/msg/detail/deca_range__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace decawave_interfaces
{

namespace msg
{

namespace builder
{

class Init_DecaRange_skew2
{
public:
  explicit Init_DecaRange_skew2(::decawave_interfaces::msg::DecaRange & msg)
  : msg_(msg)
  {}
  ::decawave_interfaces::msg::DecaRange skew2(::decawave_interfaces::msg::DecaRange::_skew2_type arg)
  {
    msg_.skew2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::decawave_interfaces::msg::DecaRange msg_;
};

class Init_DecaRange_skew1
{
public:
  explicit Init_DecaRange_skew1(::decawave_interfaces::msg::DecaRange & msg)
  : msg_(msg)
  {}
  Init_DecaRange_skew2 skew1(::decawave_interfaces::msg::DecaRange::_skew1_type arg)
  {
    msg_.skew1 = std::move(arg);
    return Init_DecaRange_skew2(msg_);
  }

private:
  ::decawave_interfaces::msg::DecaRange msg_;
};

class Init_DecaRange_fpp2
{
public:
  explicit Init_DecaRange_fpp2(::decawave_interfaces::msg::DecaRange & msg)
  : msg_(msg)
  {}
  Init_DecaRange_skew1 fpp2(::decawave_interfaces::msg::DecaRange::_fpp2_type arg)
  {
    msg_.fpp2 = std::move(arg);
    return Init_DecaRange_skew1(msg_);
  }

private:
  ::decawave_interfaces::msg::DecaRange msg_;
};

class Init_DecaRange_fpp1
{
public:
  explicit Init_DecaRange_fpp1(::decawave_interfaces::msg::DecaRange & msg)
  : msg_(msg)
  {}
  Init_DecaRange_fpp2 fpp1(::decawave_interfaces::msg::DecaRange::_fpp1_type arg)
  {
    msg_.fpp1 = std::move(arg);
    return Init_DecaRange_fpp2(msg_);
  }

private:
  ::decawave_interfaces::msg::DecaRange msg_;
};

class Init_DecaRange_rx3
{
public:
  explicit Init_DecaRange_rx3(::decawave_interfaces::msg::DecaRange & msg)
  : msg_(msg)
  {}
  Init_DecaRange_fpp1 rx3(::decawave_interfaces::msg::DecaRange::_rx3_type arg)
  {
    msg_.rx3 = std::move(arg);
    return Init_DecaRange_fpp1(msg_);
  }

private:
  ::decawave_interfaces::msg::DecaRange msg_;
};

class Init_DecaRange_tx3
{
public:
  explicit Init_DecaRange_tx3(::decawave_interfaces::msg::DecaRange & msg)
  : msg_(msg)
  {}
  Init_DecaRange_rx3 tx3(::decawave_interfaces::msg::DecaRange::_tx3_type arg)
  {
    msg_.tx3 = std::move(arg);
    return Init_DecaRange_rx3(msg_);
  }

private:
  ::decawave_interfaces::msg::DecaRange msg_;
};

class Init_DecaRange_rx2
{
public:
  explicit Init_DecaRange_rx2(::decawave_interfaces::msg::DecaRange & msg)
  : msg_(msg)
  {}
  Init_DecaRange_tx3 rx2(::decawave_interfaces::msg::DecaRange::_rx2_type arg)
  {
    msg_.rx2 = std::move(arg);
    return Init_DecaRange_tx3(msg_);
  }

private:
  ::decawave_interfaces::msg::DecaRange msg_;
};

class Init_DecaRange_tx2
{
public:
  explicit Init_DecaRange_tx2(::decawave_interfaces::msg::DecaRange & msg)
  : msg_(msg)
  {}
  Init_DecaRange_rx2 tx2(::decawave_interfaces::msg::DecaRange::_tx2_type arg)
  {
    msg_.tx2 = std::move(arg);
    return Init_DecaRange_rx2(msg_);
  }

private:
  ::decawave_interfaces::msg::DecaRange msg_;
};

class Init_DecaRange_rx1
{
public:
  explicit Init_DecaRange_rx1(::decawave_interfaces::msg::DecaRange & msg)
  : msg_(msg)
  {}
  Init_DecaRange_tx2 rx1(::decawave_interfaces::msg::DecaRange::_rx1_type arg)
  {
    msg_.rx1 = std::move(arg);
    return Init_DecaRange_tx2(msg_);
  }

private:
  ::decawave_interfaces::msg::DecaRange msg_;
};

class Init_DecaRange_tx1
{
public:
  explicit Init_DecaRange_tx1(::decawave_interfaces::msg::DecaRange & msg)
  : msg_(msg)
  {}
  Init_DecaRange_rx1 tx1(::decawave_interfaces::msg::DecaRange::_tx1_type arg)
  {
    msg_.tx1 = std::move(arg);
    return Init_DecaRange_rx1(msg_);
  }

private:
  ::decawave_interfaces::msg::DecaRange msg_;
};

class Init_DecaRange_covariance
{
public:
  explicit Init_DecaRange_covariance(::decawave_interfaces::msg::DecaRange & msg)
  : msg_(msg)
  {}
  Init_DecaRange_tx1 covariance(::decawave_interfaces::msg::DecaRange::_covariance_type arg)
  {
    msg_.covariance = std::move(arg);
    return Init_DecaRange_tx1(msg_);
  }

private:
  ::decawave_interfaces::msg::DecaRange msg_;
};

class Init_DecaRange_to_id
{
public:
  explicit Init_DecaRange_to_id(::decawave_interfaces::msg::DecaRange & msg)
  : msg_(msg)
  {}
  Init_DecaRange_covariance to_id(::decawave_interfaces::msg::DecaRange::_to_id_type arg)
  {
    msg_.to_id = std::move(arg);
    return Init_DecaRange_covariance(msg_);
  }

private:
  ::decawave_interfaces::msg::DecaRange msg_;
};

class Init_DecaRange_from_id
{
public:
  explicit Init_DecaRange_from_id(::decawave_interfaces::msg::DecaRange & msg)
  : msg_(msg)
  {}
  Init_DecaRange_to_id from_id(::decawave_interfaces::msg::DecaRange::_from_id_type arg)
  {
    msg_.from_id = std::move(arg);
    return Init_DecaRange_to_id(msg_);
  }

private:
  ::decawave_interfaces::msg::DecaRange msg_;
};

class Init_DecaRange_range
{
public:
  explicit Init_DecaRange_range(::decawave_interfaces::msg::DecaRange & msg)
  : msg_(msg)
  {}
  Init_DecaRange_from_id range(::decawave_interfaces::msg::DecaRange::_range_type arg)
  {
    msg_.range = std::move(arg);
    return Init_DecaRange_from_id(msg_);
  }

private:
  ::decawave_interfaces::msg::DecaRange msg_;
};

class Init_DecaRange_header
{
public:
  Init_DecaRange_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DecaRange_range header(::decawave_interfaces::msg::DecaRange::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DecaRange_range(msg_);
  }

private:
  ::decawave_interfaces::msg::DecaRange msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::decawave_interfaces::msg::DecaRange>()
{
  return decawave_interfaces::msg::builder::Init_DecaRange_header();
}

}  // namespace decawave_interfaces

#endif  // DECAWAVE_INTERFACES__MSG__DETAIL__DECA_RANGE__BUILDER_HPP_
