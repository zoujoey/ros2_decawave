// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from decawave_msg:msg/DecaRange.idl
// generated code does not contain a copyright notice

#ifndef DECAWAVE_MSG__MSG__DETAIL__DECA_RANGE__STRUCT_HPP_
#define DECAWAVE_MSG__MSG__DETAIL__DECA_RANGE__STRUCT_HPP_

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
# define DEPRECATED__decawave_msg__msg__DecaRange __attribute__((deprecated))
#else
# define DEPRECATED__decawave_msg__msg__DecaRange __declspec(deprecated)
#endif

namespace decawave_msg
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
      this->from_id = "";
      this->to_id = "";
      this->range = 0.0f;
    }
  }

  explicit DecaRange_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    from_id(_alloc),
    to_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->from_id = "";
      this->to_id = "";
      this->range = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _from_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _from_id_type from_id;
  using _to_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _to_id_type to_id;
  using _range_type =
    float;
  _range_type range;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__from_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->from_id = _arg;
    return *this;
  }
  Type & set__to_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->to_id = _arg;
    return *this;
  }
  Type & set__range(
    const float & _arg)
  {
    this->range = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    decawave_msg::msg::DecaRange_<ContainerAllocator> *;
  using ConstRawPtr =
    const decawave_msg::msg::DecaRange_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<decawave_msg::msg::DecaRange_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<decawave_msg::msg::DecaRange_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      decawave_msg::msg::DecaRange_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<decawave_msg::msg::DecaRange_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      decawave_msg::msg::DecaRange_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<decawave_msg::msg::DecaRange_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<decawave_msg::msg::DecaRange_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<decawave_msg::msg::DecaRange_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__decawave_msg__msg__DecaRange
    std::shared_ptr<decawave_msg::msg::DecaRange_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__decawave_msg__msg__DecaRange
    std::shared_ptr<decawave_msg::msg::DecaRange_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DecaRange_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->from_id != other.from_id) {
      return false;
    }
    if (this->to_id != other.to_id) {
      return false;
    }
    if (this->range != other.range) {
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
  decawave_msg::msg::DecaRange_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace decawave_msg

#endif  // DECAWAVE_MSG__MSG__DETAIL__DECA_RANGE__STRUCT_HPP_
