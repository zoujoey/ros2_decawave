// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from decawave_msg:msg/DecaRange.idl
// generated code does not contain a copyright notice

#ifndef DECAWAVE_MSG__MSG__DETAIL__DECA_RANGE__STRUCT_H_
#define DECAWAVE_MSG__MSG__DETAIL__DECA_RANGE__STRUCT_H_

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
// Member 'from_id'
// Member 'to_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DecaRange in the package decawave_msg.
typedef struct decawave_msg__msg__DecaRange
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String from_id;
  rosidl_runtime_c__String to_id;
  float range;
} decawave_msg__msg__DecaRange;

// Struct for a sequence of decawave_msg__msg__DecaRange.
typedef struct decawave_msg__msg__DecaRange__Sequence
{
  decawave_msg__msg__DecaRange * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} decawave_msg__msg__DecaRange__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DECAWAVE_MSG__MSG__DETAIL__DECA_RANGE__STRUCT_H_
