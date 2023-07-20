// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from decawave_interfaces:msg/DecaRangeB.idl
// generated code does not contain a copyright notice

#ifndef DECAWAVE_INTERFACES__MSG__DETAIL__DECA_RANGE_B__FUNCTIONS_H_
#define DECAWAVE_INTERFACES__MSG__DETAIL__DECA_RANGE_B__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "decawave_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "decawave_interfaces/msg/detail/deca_range_b__struct.h"

/// Initialize msg/DecaRangeB message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * decawave_interfaces__msg__DecaRangeB
 * )) before or use
 * decawave_interfaces__msg__DecaRangeB__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_decawave_interfaces
bool
decawave_interfaces__msg__DecaRangeB__init(decawave_interfaces__msg__DecaRangeB * msg);

/// Finalize msg/DecaRangeB message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_decawave_interfaces
void
decawave_interfaces__msg__DecaRangeB__fini(decawave_interfaces__msg__DecaRangeB * msg);

/// Create msg/DecaRangeB message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * decawave_interfaces__msg__DecaRangeB__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_decawave_interfaces
decawave_interfaces__msg__DecaRangeB *
decawave_interfaces__msg__DecaRangeB__create();

/// Destroy msg/DecaRangeB message.
/**
 * It calls
 * decawave_interfaces__msg__DecaRangeB__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_decawave_interfaces
void
decawave_interfaces__msg__DecaRangeB__destroy(decawave_interfaces__msg__DecaRangeB * msg);

/// Check for msg/DecaRangeB message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_decawave_interfaces
bool
decawave_interfaces__msg__DecaRangeB__are_equal(const decawave_interfaces__msg__DecaRangeB * lhs, const decawave_interfaces__msg__DecaRangeB * rhs);

/// Copy a msg/DecaRangeB message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_decawave_interfaces
bool
decawave_interfaces__msg__DecaRangeB__copy(
  const decawave_interfaces__msg__DecaRangeB * input,
  decawave_interfaces__msg__DecaRangeB * output);

/// Initialize array of msg/DecaRangeB messages.
/**
 * It allocates the memory for the number of elements and calls
 * decawave_interfaces__msg__DecaRangeB__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_decawave_interfaces
bool
decawave_interfaces__msg__DecaRangeB__Sequence__init(decawave_interfaces__msg__DecaRangeB__Sequence * array, size_t size);

/// Finalize array of msg/DecaRangeB messages.
/**
 * It calls
 * decawave_interfaces__msg__DecaRangeB__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_decawave_interfaces
void
decawave_interfaces__msg__DecaRangeB__Sequence__fini(decawave_interfaces__msg__DecaRangeB__Sequence * array);

/// Create array of msg/DecaRangeB messages.
/**
 * It allocates the memory for the array and calls
 * decawave_interfaces__msg__DecaRangeB__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_decawave_interfaces
decawave_interfaces__msg__DecaRangeB__Sequence *
decawave_interfaces__msg__DecaRangeB__Sequence__create(size_t size);

/// Destroy array of msg/DecaRangeB messages.
/**
 * It calls
 * decawave_interfaces__msg__DecaRangeB__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_decawave_interfaces
void
decawave_interfaces__msg__DecaRangeB__Sequence__destroy(decawave_interfaces__msg__DecaRangeB__Sequence * array);

/// Check for msg/DecaRangeB message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_decawave_interfaces
bool
decawave_interfaces__msg__DecaRangeB__Sequence__are_equal(const decawave_interfaces__msg__DecaRangeB__Sequence * lhs, const decawave_interfaces__msg__DecaRangeB__Sequence * rhs);

/// Copy an array of msg/DecaRangeB messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_decawave_interfaces
bool
decawave_interfaces__msg__DecaRangeB__Sequence__copy(
  const decawave_interfaces__msg__DecaRangeB__Sequence * input,
  decawave_interfaces__msg__DecaRangeB__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DECAWAVE_INTERFACES__MSG__DETAIL__DECA_RANGE_B__FUNCTIONS_H_
