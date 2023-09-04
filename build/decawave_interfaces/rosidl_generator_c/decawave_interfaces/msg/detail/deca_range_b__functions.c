// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from decawave_interfaces:msg/DecaRangeB.idl
// generated code does not contain a copyright notice
#include "decawave_interfaces/msg/detail/deca_range_b__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `tag_id`
#include "rosidl_runtime_c/string_functions.h"

bool
decawave_interfaces__msg__DecaRangeB__init(decawave_interfaces__msg__DecaRangeB * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    decawave_interfaces__msg__DecaRangeB__fini(msg);
    return false;
  }
  // tag_id
  if (!rosidl_runtime_c__String__init(&msg->tag_id)) {
    decawave_interfaces__msg__DecaRangeB__fini(msg);
    return false;
  }
  // x1
  // y1
  // z1
  return true;
}

void
decawave_interfaces__msg__DecaRangeB__fini(decawave_interfaces__msg__DecaRangeB * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // tag_id
  rosidl_runtime_c__String__fini(&msg->tag_id);
  // x1
  // y1
  // z1
}

bool
decawave_interfaces__msg__DecaRangeB__are_equal(const decawave_interfaces__msg__DecaRangeB * lhs, const decawave_interfaces__msg__DecaRangeB * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // tag_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->tag_id), &(rhs->tag_id)))
  {
    return false;
  }
  // x1
  if (lhs->x1 != rhs->x1) {
    return false;
  }
  // y1
  if (lhs->y1 != rhs->y1) {
    return false;
  }
  // z1
  if (lhs->z1 != rhs->z1) {
    return false;
  }
  return true;
}

bool
decawave_interfaces__msg__DecaRangeB__copy(
  const decawave_interfaces__msg__DecaRangeB * input,
  decawave_interfaces__msg__DecaRangeB * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // tag_id
  if (!rosidl_runtime_c__String__copy(
      &(input->tag_id), &(output->tag_id)))
  {
    return false;
  }
  // x1
  output->x1 = input->x1;
  // y1
  output->y1 = input->y1;
  // z1
  output->z1 = input->z1;
  return true;
}

decawave_interfaces__msg__DecaRangeB *
decawave_interfaces__msg__DecaRangeB__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  decawave_interfaces__msg__DecaRangeB * msg = (decawave_interfaces__msg__DecaRangeB *)allocator.allocate(sizeof(decawave_interfaces__msg__DecaRangeB), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(decawave_interfaces__msg__DecaRangeB));
  bool success = decawave_interfaces__msg__DecaRangeB__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
decawave_interfaces__msg__DecaRangeB__destroy(decawave_interfaces__msg__DecaRangeB * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    decawave_interfaces__msg__DecaRangeB__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
decawave_interfaces__msg__DecaRangeB__Sequence__init(decawave_interfaces__msg__DecaRangeB__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  decawave_interfaces__msg__DecaRangeB * data = NULL;

  if (size) {
    data = (decawave_interfaces__msg__DecaRangeB *)allocator.zero_allocate(size, sizeof(decawave_interfaces__msg__DecaRangeB), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = decawave_interfaces__msg__DecaRangeB__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        decawave_interfaces__msg__DecaRangeB__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
decawave_interfaces__msg__DecaRangeB__Sequence__fini(decawave_interfaces__msg__DecaRangeB__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      decawave_interfaces__msg__DecaRangeB__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

decawave_interfaces__msg__DecaRangeB__Sequence *
decawave_interfaces__msg__DecaRangeB__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  decawave_interfaces__msg__DecaRangeB__Sequence * array = (decawave_interfaces__msg__DecaRangeB__Sequence *)allocator.allocate(sizeof(decawave_interfaces__msg__DecaRangeB__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = decawave_interfaces__msg__DecaRangeB__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
decawave_interfaces__msg__DecaRangeB__Sequence__destroy(decawave_interfaces__msg__DecaRangeB__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    decawave_interfaces__msg__DecaRangeB__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
decawave_interfaces__msg__DecaRangeB__Sequence__are_equal(const decawave_interfaces__msg__DecaRangeB__Sequence * lhs, const decawave_interfaces__msg__DecaRangeB__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!decawave_interfaces__msg__DecaRangeB__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
decawave_interfaces__msg__DecaRangeB__Sequence__copy(
  const decawave_interfaces__msg__DecaRangeB__Sequence * input,
  decawave_interfaces__msg__DecaRangeB__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(decawave_interfaces__msg__DecaRangeB);
    decawave_interfaces__msg__DecaRangeB * data =
      (decawave_interfaces__msg__DecaRangeB *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!decawave_interfaces__msg__DecaRangeB__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          decawave_interfaces__msg__DecaRangeB__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!decawave_interfaces__msg__DecaRangeB__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
