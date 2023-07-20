# generated from rosidl_generator_py/resource/_idl.py.em
# with input from decawave_interfaces:msg/DecaRangeB.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DecaRangeB(type):
    """Metaclass of message 'DecaRangeB'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('decawave_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'decawave_interfaces.msg.DecaRangeB')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__deca_range_b
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__deca_range_b
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__deca_range_b
            cls._TYPE_SUPPORT = module.type_support_msg__msg__deca_range_b
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__deca_range_b

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DecaRangeB(metaclass=Metaclass_DecaRangeB):
    """Message class 'DecaRangeB'."""

    __slots__ = [
        '_header',
        '_from_id',
        '_to_id',
        '_range',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'from_id': 'string',
        'to_id': 'string',
        'range': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.from_id = kwargs.get('from_id', str())
        self.to_id = kwargs.get('to_id', str())
        self.range = kwargs.get('range', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.from_id != other.from_id:
            return False
        if self.to_id != other.to_id:
            return False
        if self.range != other.range:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def from_id(self):
        """Message field 'from_id'."""
        return self._from_id

    @from_id.setter
    def from_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'from_id' field must be of type 'str'"
        self._from_id = value

    @builtins.property
    def to_id(self):
        """Message field 'to_id'."""
        return self._to_id

    @to_id.setter
    def to_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'to_id' field must be of type 'str'"
        self._to_id = value

    @builtins.property  # noqa: A003
    def range(self):  # noqa: A003
        """Message field 'range'."""
        return self._range

    @range.setter  # noqa: A003
    def range(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'range' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'range' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._range = value