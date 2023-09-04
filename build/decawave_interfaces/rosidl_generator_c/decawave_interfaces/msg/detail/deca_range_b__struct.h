// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from decawave_interfaces:msg/DecaRangeB.idl
// generated code does not contain a copyright notice

#ifndef DECAWAVE_INTERFACES__MSG__DETAIL__DECA_RANGE_B__STRUCT_H_
#define DECAWAVE_INTERFACES__MSG__DETAIL__DECA_RANGE_B__STRUCT_H_

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
// Member 'tag_id'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/DecaRangeB in the package decawave_interfaces.
typedef struct decawave_interfaces__msg__DecaRangeB
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String tag_id;
  float x1;
  float y1;
  float z1;
} decawave_interfaces__msg__DecaRangeB;

// Struct for a sequence of decawave_interfaces__msg__DecaRangeB.
typedef struct decawave_interfaces__msg__DecaRangeB__Sequence
{
  decawave_interfaces__msg__DecaRangeB * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} decawave_interfaces__msg__DecaRangeB__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DECAWAVE_INTERFACES__MSG__DETAIL__DECA_RANGE_B__STRUCT_H_
