// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from decawave_interfaces:msg/DecaRange.idl
// generated code does not contain a copyright notice
#include "decawave_interfaces/msg/detail/deca_range__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
decawave_interfaces__msg__DecaRange__init(decawave_interfaces__msg__DecaRange * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    decawave_interfaces__msg__DecaRange__fini(msg);
    return false;
  }
  // range
  // from_id
  // to_id
  // covariance
  // tx1
  // rx1
  // tx2
  // rx2
  // tx3
  // rx3
  // fpp1
  // fpp2
  // skew1
  // skew2
  return true;
}

void
decawave_interfaces__msg__DecaRange__fini(decawave_interfaces__msg__DecaRange * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // range
  // from_id
  // to_id
  // covariance
  // tx1
  // rx1
  // tx2
  // rx2
  // tx3
  // rx3
  // fpp1
  // fpp2
  // skew1
  // skew2
}

bool
decawave_interfaces__msg__DecaRange__are_equal(const decawave_interfaces__msg__DecaRange * lhs, const decawave_interfaces__msg__DecaRange * rhs)
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
  // range
  if (lhs->range != rhs->range) {
    return false;
  }
  // from_id
  if (lhs->from_id != rhs->from_id) {
    return false;
  }
  // to_id
  if (lhs->to_id != rhs->to_id) {
    return false;
  }
  // covariance
  if (lhs->covariance != rhs->covariance) {
    return false;
  }
  // tx1
  if (lhs->tx1 != rhs->tx1) {
    return false;
  }
  // rx1
  if (lhs->rx1 != rhs->rx1) {
    return false;
  }
  // tx2
  if (lhs->tx2 != rhs->tx2) {
    return false;
  }
  // rx2
  if (lhs->rx2 != rhs->rx2) {
    return false;
  }
  // tx3
  if (lhs->tx3 != rhs->tx3) {
    return false;
  }
  // rx3
  if (lhs->rx3 != rhs->rx3) {
    return false;
  }
  // fpp1
  if (lhs->fpp1 != rhs->fpp1) {
    return false;
  }
  // fpp2
  if (lhs->fpp2 != rhs->fpp2) {
    return false;
  }
  // skew1
  if (lhs->skew1 != rhs->skew1) {
    return false;
  }
  // skew2
  if (lhs->skew2 != rhs->skew2) {
    return false;
  }
  return true;
}

bool
decawave_interfaces__msg__DecaRange__copy(
  const decawave_interfaces__msg__DecaRange * input,
  decawave_interfaces__msg__DecaRange * output)
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
  // range
  output->range = input->range;
  // from_id
  output->from_id = input->from_id;
  // to_id
  output->to_id = input->to_id;
  // covariance
  output->covariance = input->covariance;
  // tx1
  output->tx1 = input->tx1;
  // rx1
  output->rx1 = input->rx1;
  // tx2
  output->tx2 = input->tx2;
  // rx2
  output->rx2 = input->rx2;
  // tx3
  output->tx3 = input->tx3;
  // rx3
  output->rx3 = input->rx3;
  // fpp1
  output->fpp1 = input->fpp1;
  // fpp2
  output->fpp2 = input->fpp2;
  // skew1
  output->skew1 = input->skew1;
  // skew2
  output->skew2 = input->skew2;
  return true;
}

decawave_interfaces__msg__DecaRange *
decawave_interfaces__msg__DecaRange__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  decawave_interfaces__msg__DecaRange * msg = (decawave_interfaces__msg__DecaRange *)allocator.allocate(sizeof(decawave_interfaces__msg__DecaRange), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(decawave_interfaces__msg__DecaRange));
  bool success = decawave_interfaces__msg__DecaRange__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
decawave_interfaces__msg__DecaRange__destroy(decawave_interfaces__msg__DecaRange * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    decawave_interfaces__msg__DecaRange__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
decawave_interfaces__msg__DecaRange__Sequence__init(decawave_interfaces__msg__DecaRange__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  decawave_interfaces__msg__DecaRange * data = NULL;

  if (size) {
    data = (decawave_interfaces__msg__DecaRange *)allocator.zero_allocate(size, sizeof(decawave_interfaces__msg__DecaRange), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = decawave_interfaces__msg__DecaRange__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        decawave_interfaces__msg__DecaRange__fini(&data[i - 1]);
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
decawave_interfaces__msg__DecaRange__Sequence__fini(decawave_interfaces__msg__DecaRange__Sequence * array)
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
      decawave_interfaces__msg__DecaRange__fini(&array->data[i]);
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

decawave_interfaces__msg__DecaRange__Sequence *
decawave_interfaces__msg__DecaRange__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  decawave_interfaces__msg__DecaRange__Sequence * array = (decawave_interfaces__msg__DecaRange__Sequence *)allocator.allocate(sizeof(decawave_interfaces__msg__DecaRange__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = decawave_interfaces__msg__DecaRange__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
decawave_interfaces__msg__DecaRange__Sequence__destroy(decawave_interfaces__msg__DecaRange__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    decawave_interfaces__msg__DecaRange__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
decawave_interfaces__msg__DecaRange__Sequence__are_equal(const decawave_interfaces__msg__DecaRange__Sequence * lhs, const decawave_interfaces__msg__DecaRange__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!decawave_interfaces__msg__DecaRange__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
decawave_interfaces__msg__DecaRange__Sequence__copy(
  const decawave_interfaces__msg__DecaRange__Sequence * input,
  decawave_interfaces__msg__DecaRange__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(decawave_interfaces__msg__DecaRange);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    decawave_interfaces__msg__DecaRange * data =
      (decawave_interfaces__msg__DecaRange *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!decawave_interfaces__msg__DecaRange__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          decawave_interfaces__msg__DecaRange__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!decawave_interfaces__msg__DecaRange__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
