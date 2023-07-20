// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from decawave_interfaces:msg/DecaRange.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "decawave_interfaces/msg/detail/deca_range__struct.h"
#include "decawave_interfaces/msg/detail/deca_range__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool decawave_interfaces__msg__deca_range__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("decawave_interfaces.msg._deca_range.DecaRange", full_classname_dest, 45) == 0);
  }
  decawave_interfaces__msg__DecaRange * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // range
    PyObject * field = PyObject_GetAttrString(_pymsg, "range");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->range = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // from_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "from_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->from_id = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // to_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "to_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->to_id = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // covariance
    PyObject * field = PyObject_GetAttrString(_pymsg, "covariance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->covariance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tx1
    PyObject * field = PyObject_GetAttrString(_pymsg, "tx1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tx1 = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // rx1
    PyObject * field = PyObject_GetAttrString(_pymsg, "rx1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rx1 = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // tx2
    PyObject * field = PyObject_GetAttrString(_pymsg, "tx2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tx2 = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // rx2
    PyObject * field = PyObject_GetAttrString(_pymsg, "rx2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rx2 = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // tx3
    PyObject * field = PyObject_GetAttrString(_pymsg, "tx3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tx3 = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // rx3
    PyObject * field = PyObject_GetAttrString(_pymsg, "rx3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rx3 = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // fpp1
    PyObject * field = PyObject_GetAttrString(_pymsg, "fpp1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fpp1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fpp2
    PyObject * field = PyObject_GetAttrString(_pymsg, "fpp2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fpp2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // skew1
    PyObject * field = PyObject_GetAttrString(_pymsg, "skew1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->skew1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // skew2
    PyObject * field = PyObject_GetAttrString(_pymsg, "skew2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->skew2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * decawave_interfaces__msg__deca_range__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DecaRange */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("decawave_interfaces.msg._deca_range");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DecaRange");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  decawave_interfaces__msg__DecaRange * ros_message = (decawave_interfaces__msg__DecaRange *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // range
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->range);
    {
      int rc = PyObject_SetAttrString(_pymessage, "range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // from_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->from_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "from_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // to_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->to_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "to_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // covariance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->covariance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "covariance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tx1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->tx1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tx1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rx1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->rx1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rx1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tx2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->tx2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tx2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rx2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->rx2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rx2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tx3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->tx3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tx3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rx3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->rx3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rx3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fpp1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fpp1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fpp1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fpp2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fpp2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fpp2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // skew1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->skew1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "skew1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // skew2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->skew2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "skew2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
