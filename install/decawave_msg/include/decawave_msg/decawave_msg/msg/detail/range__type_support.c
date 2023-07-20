// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from decawave_msg:msg/Range.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "decawave_msg/msg/detail/range__rosidl_typesupport_introspection_c.h"
#include "decawave_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "decawave_msg/msg/detail/range__functions.h"
#include "decawave_msg/msg/detail/range__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `from_id`
// Member `to_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void decawave_msg__msg__Range__rosidl_typesupport_introspection_c__Range_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  decawave_msg__msg__Range__init(message_memory);
}

void decawave_msg__msg__Range__rosidl_typesupport_introspection_c__Range_fini_function(void * message_memory)
{
  decawave_msg__msg__Range__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember decawave_msg__msg__Range__rosidl_typesupport_introspection_c__Range_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(decawave_msg__msg__Range, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "from_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(decawave_msg__msg__Range, from_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "to_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(decawave_msg__msg__Range, to_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "range",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(decawave_msg__msg__Range, range),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers decawave_msg__msg__Range__rosidl_typesupport_introspection_c__Range_message_members = {
  "decawave_msg__msg",  // message namespace
  "Range",  // message name
  4,  // number of fields
  sizeof(decawave_msg__msg__Range),
  decawave_msg__msg__Range__rosidl_typesupport_introspection_c__Range_message_member_array,  // message members
  decawave_msg__msg__Range__rosidl_typesupport_introspection_c__Range_init_function,  // function to initialize message memory (memory has to be allocated)
  decawave_msg__msg__Range__rosidl_typesupport_introspection_c__Range_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t decawave_msg__msg__Range__rosidl_typesupport_introspection_c__Range_message_type_support_handle = {
  0,
  &decawave_msg__msg__Range__rosidl_typesupport_introspection_c__Range_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_decawave_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, decawave_msg, msg, Range)() {
  decawave_msg__msg__Range__rosidl_typesupport_introspection_c__Range_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!decawave_msg__msg__Range__rosidl_typesupport_introspection_c__Range_message_type_support_handle.typesupport_identifier) {
    decawave_msg__msg__Range__rosidl_typesupport_introspection_c__Range_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &decawave_msg__msg__Range__rosidl_typesupport_introspection_c__Range_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
