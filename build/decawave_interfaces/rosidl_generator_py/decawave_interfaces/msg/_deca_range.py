# generated from rosidl_generator_py/resource/_idl.py.em
# with input from decawave_interfaces:msg/DecaRange.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DecaRange(type):
    """Metaclass of message 'DecaRange'."""

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
                'decawave_interfaces.msg.DecaRange')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__deca_range
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__deca_range
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__deca_range
            cls._TYPE_SUPPORT = module.type_support_msg__msg__deca_range
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__deca_range

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


class DecaRange(metaclass=Metaclass_DecaRange):
    """Message class 'DecaRange'."""

    __slots__ = [
        '_header',
        '_range',
        '_from_id',
        '_to_id',
        '_covariance',
        '_tx1',
        '_rx1',
        '_tx2',
        '_rx2',
        '_tx3',
        '_rx3',
        '_fpp1',
        '_fpp2',
        '_skew1',
        '_skew2',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'range': 'float',
        'from_id': 'uint64',
        'to_id': 'uint64',
        'covariance': 'float',
        'tx1': 'uint64',
        'rx1': 'uint64',
        'tx2': 'uint64',
        'rx2': 'uint64',
        'tx3': 'uint64',
        'rx3': 'uint64',
        'fpp1': 'float',
        'fpp2': 'float',
        'skew1': 'float',
        'skew2': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.range = kwargs.get('range', float())
        self.from_id = kwargs.get('from_id', int())
        self.to_id = kwargs.get('to_id', int())
        self.covariance = kwargs.get('covariance', float())
        self.tx1 = kwargs.get('tx1', int())
        self.rx1 = kwargs.get('rx1', int())
        self.tx2 = kwargs.get('tx2', int())
        self.rx2 = kwargs.get('rx2', int())
        self.tx3 = kwargs.get('tx3', int())
        self.rx3 = kwargs.get('rx3', int())
        self.fpp1 = kwargs.get('fpp1', float())
        self.fpp2 = kwargs.get('fpp2', float())
        self.skew1 = kwargs.get('skew1', float())
        self.skew2 = kwargs.get('skew2', float())

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
        if self.range != other.range:
            return False
        if self.from_id != other.from_id:
            return False
        if self.to_id != other.to_id:
            return False
        if self.covariance != other.covariance:
            return False
        if self.tx1 != other.tx1:
            return False
        if self.rx1 != other.rx1:
            return False
        if self.tx2 != other.tx2:
            return False
        if self.rx2 != other.rx2:
            return False
        if self.tx3 != other.tx3:
            return False
        if self.rx3 != other.rx3:
            return False
        if self.fpp1 != other.fpp1:
            return False
        if self.fpp2 != other.fpp2:
            return False
        if self.skew1 != other.skew1:
            return False
        if self.skew2 != other.skew2:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
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

    @property  # noqa: A003
    def range(self):  # noqa: A003
        """Message field 'range'."""
        return self._range

    @range.setter  # noqa: A003
    def range(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'range' field must be of type 'float'"
        self._range = value

    @property
    def from_id(self):
        """Message field 'from_id'."""
        return self._from_id

    @from_id.setter
    def from_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'from_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'from_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._from_id = value

    @property
    def to_id(self):
        """Message field 'to_id'."""
        return self._to_id

    @to_id.setter
    def to_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'to_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'to_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._to_id = value

    @property
    def covariance(self):
        """Message field 'covariance'."""
        return self._covariance

    @covariance.setter
    def covariance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'covariance' field must be of type 'float'"
        self._covariance = value

    @property
    def tx1(self):
        """Message field 'tx1'."""
        return self._tx1

    @tx1.setter
    def tx1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tx1' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'tx1' field must be an unsigned integer in [0, 18446744073709551615]"
        self._tx1 = value

    @property
    def rx1(self):
        """Message field 'rx1'."""
        return self._rx1

    @rx1.setter
    def rx1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rx1' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'rx1' field must be an unsigned integer in [0, 18446744073709551615]"
        self._rx1 = value

    @property
    def tx2(self):
        """Message field 'tx2'."""
        return self._tx2

    @tx2.setter
    def tx2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tx2' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'tx2' field must be an unsigned integer in [0, 18446744073709551615]"
        self._tx2 = value

    @property
    def rx2(self):
        """Message field 'rx2'."""
        return self._rx2

    @rx2.setter
    def rx2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rx2' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'rx2' field must be an unsigned integer in [0, 18446744073709551615]"
        self._rx2 = value

    @property
    def tx3(self):
        """Message field 'tx3'."""
        return self._tx3

    @tx3.setter
    def tx3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tx3' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'tx3' field must be an unsigned integer in [0, 18446744073709551615]"
        self._tx3 = value

    @property
    def rx3(self):
        """Message field 'rx3'."""
        return self._rx3

    @rx3.setter
    def rx3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rx3' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'rx3' field must be an unsigned integer in [0, 18446744073709551615]"
        self._rx3 = value

    @property
    def fpp1(self):
        """Message field 'fpp1'."""
        return self._fpp1

    @fpp1.setter
    def fpp1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fpp1' field must be of type 'float'"
        self._fpp1 = value

    @property
    def fpp2(self):
        """Message field 'fpp2'."""
        return self._fpp2

    @fpp2.setter
    def fpp2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fpp2' field must be of type 'float'"
        self._fpp2 = value

    @property
    def skew1(self):
        """Message field 'skew1'."""
        return self._skew1

    @skew1.setter
    def skew1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'skew1' field must be of type 'float'"
        self._skew1 = value

    @property
    def skew2(self):
        """Message field 'skew2'."""
        return self._skew2

    @skew2.setter
    def skew2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'skew2' field must be of type 'float'"
        self._skew2 = value
