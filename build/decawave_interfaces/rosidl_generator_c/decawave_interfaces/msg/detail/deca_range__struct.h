// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from decawave_interfaces:msg/DecaRange.idl
// generated code does not contain a copyright notice

#ifndef DECAWAVE_INTERFACES__MSG__DETAIL__DECA_RANGE__STRUCT_H_
#define DECAWAVE_INTERFACES__MSG__DETAIL__DECA_RANGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/DecaRange in the package decawave_interfaces.
typedef struct decawave_interfaces__msg__DecaRange
{
  std_msgs__msg__Header header;
  float range;
  uint64_t from_id;
  uint64_t to_id;
  float covariance;
  uint64_t tx1;
  uint64_t rx1;
  uint64_t tx2;
  uint64_t rx2;
  uint64_t tx3;
  uint64_t rx3;
  float fpp1;
  float fpp2;
  float skew1;
  float skew2;
} decawave_interfaces__msg__DecaRange;

// Struct for a sequence of decawave_interfaces__msg__DecaRange.
typedef struct decawave_interfaces__msg__DecaRange__Sequence
{
  decawave_interfaces__msg__DecaRange * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} decawave_interfaces__msg__DecaRange__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DECAWAVE_INTERFACES__MSG__DETAIL__DECA_RANGE__STRUCT_H_
