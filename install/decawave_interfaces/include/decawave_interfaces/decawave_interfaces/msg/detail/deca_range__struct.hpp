// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from decawave_interfaces:msg/DecaRange.idl
// generated code does not contain a copyright notice

#ifndef DECAWAVE_INTERFACES__MSG__DETAIL__DECA_RANGE__STRUCT_HPP_
#define DECAWAVE_INTERFACES__MSG__DETAIL__DECA_RANGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__decawave_interfaces__msg__DecaRange __attribute__((deprecated))
#else
# define DEPRECATED__decawave_interfaces__msg__DecaRange __declspec(deprecated)
#endif

namespace decawave_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DecaRange_
{
  using Type = DecaRange_<ContainerAllocator>;

  explicit DecaRange_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->range = 0.0f;
      this->from_id = 0ull;
      this->to_id = 0ull;
      this->covariance = 0.0f;
      this->tx1 = 0ull;
      this->rx1 = 0ull;
      this->tx2 = 0ull;
      this->rx2 = 0ull;
      this->tx3 = 0ull;
      this->rx3 = 0ull;
      this->fpp1 = 0.0f;
      this->fpp2 = 0.0f;
      this->skew1 = 0.0f;
      this->skew2 = 0.0f;
    }
  }

  explicit DecaRange_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->range = 0.0f;
      this->from_id = 0ull;
      this->to_id = 0ull;
      this->covariance = 0.0f;
      this->tx1 = 0ull;
      this->rx1 = 0ull;
      this->tx2 = 0ull;
      this->rx2 = 0ull;
      this->tx3 = 0ull;
      this->rx3 = 0ull;
      this->fpp1 = 0.0f;
      this->fpp2 = 0.0f;
      this->skew1 = 0.0f;
      this->skew2 = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _range_type =
    float;
  _range_type range;
  using _from_id_type =
    uint64_t;
  _from_id_type from_id;
  using _to_id_type =
    uint64_t;
  _to_id_type to_id;
  using _covariance_type =
    float;
  _covariance_type covariance;
  using _tx1_type =
    uint64_t;
  _tx1_type tx1;
  using _rx1_type =
    uint64_t;
  _rx1_type rx1;
  using _tx2_type =
    uint64_t;
  _tx2_type tx2;
  using _rx2_type =
    uint64_t;
  _rx2_type rx2;
  using _tx3_type =
    uint64_t;
  _tx3_type tx3;
  using _rx3_type =
    uint64_t;
  _rx3_type rx3;
  using _fpp1_type =
    float;
  _fpp1_type fpp1;
  using _fpp2_type =
    float;
  _fpp2_type fpp2;
  using _skew1_type =
    float;
  _skew1_type skew1;
  using _skew2_type =
    float;
  _skew2_type skew2;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__range(
    const float & _arg)
  {
    this->range = _arg;
    return *this;
  }
  Type & set__from_id(
    const uint64_t & _arg)
  {
    this->from_id = _arg;
    return *this;
  }
  Type & set__to_id(
    const uint64_t & _arg)
  {
    this->to_id = _arg;
    return *this;
  }
  Type & set__covariance(
    const float & _arg)
  {
    this->covariance = _arg;
    return *this;
  }
  Type & set__tx1(
    const uint64_t & _arg)
  {
    this->tx1 = _arg;
    return *this;
  }
  Type & set__rx1(
    const uint64_t & _arg)
  {
    this->rx1 = _arg;
    return *this;
  }
  Type & set__tx2(
    const uint64_t & _arg)
  {
    this->tx2 = _arg;
    return *this;
  }
  Type & set__rx2(
    const uint64_t & _arg)
  {
    this->rx2 = _arg;
    return *this;
  }
  Type & set__tx3(
    const uint64_t & _arg)
  {
    this->tx3 = _arg;
    return *this;
  }
  Type & set__rx3(
    const uint64_t & _arg)
  {
    this->rx3 = _arg;
    return *this;
  }
  Type & set__fpp1(
    const float & _arg)
  {
    this->fpp1 = _arg;
    return *this;
  }
  Type & set__fpp2(
    const float & _arg)
  {
    this->fpp2 = _arg;
    return *this;
  }
  Type & set__skew1(
    const float & _arg)
  {
    this->skew1 = _arg;
    return *this;
  }
  Type & set__skew2(
    const float & _arg)
  {
    this->skew2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    decawave_interfaces::msg::DecaRange_<ContainerAllocator> *;
  using ConstRawPtr =
    const decawave_interfaces::msg::DecaRange_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<decawave_interfaces::msg::DecaRange_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<decawave_interfaces::msg::DecaRange_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      decawave_interfaces::msg::DecaRange_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<decawave_interfaces::msg::DecaRange_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      decawave_interfaces::msg::DecaRange_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<decawave_interfaces::msg::DecaRange_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<decawave_interfaces::msg::DecaRange_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<decawave_interfaces::msg::DecaRange_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__decawave_interfaces__msg__DecaRange
    std::shared_ptr<decawave_interfaces::msg::DecaRange_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__decawave_interfaces__msg__DecaRange
    std::shared_ptr<decawave_interfaces::msg::DecaRange_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DecaRange_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->range != other.range) {
      return false;
    }
    if (this->from_id != other.from_id) {
      return false;
    }
    if (this->to_id != other.to_id) {
      return false;
    }
    if (this->covariance != other.covariance) {
      return false;
    }
    if (this->tx1 != other.tx1) {
      return false;
    }
    if (this->rx1 != other.rx1) {
      return false;
    }
    if (this->tx2 != other.tx2) {
      return false;
    }
    if (this->rx2 != other.rx2) {
      return false;
    }
    if (this->tx3 != other.tx3) {
      return false;
    }
    if (this->rx3 != other.rx3) {
      return false;
    }
    if (this->fpp1 != other.fpp1) {
      return false;
    }
    if (this->fpp2 != other.fpp2) {
      return false;
    }
    if (this->skew1 != other.skew1) {
      return false;
    }
    if (this->skew2 != other.skew2) {
      return false;
    }
    return true;
  }
  bool operator!=(const DecaRange_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DecaRange_

// alias to use template instance with default allocator
using DecaRange =
  decawave_interfaces::msg::DecaRange_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace decawave_interfaces

#endif  // DECAWAVE_INTERFACES__MSG__DETAIL__DECA_RANGE__STRUCT_HPP_
