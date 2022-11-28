# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from kortex_driver/BaseFeedback.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class BaseFeedback(genpy.Message):
  _md5sum = "10860d64294ad841b25c45c5195aa64d"
  _type = "kortex_driver/BaseFeedback"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """
uint32 active_state_connection_identifier
uint32 active_state
float32 arm_voltage
float32 arm_current
float32 temperature_cpu
float32 temperature_ambient
float32 imu_acceleration_x
float32 imu_acceleration_y
float32 imu_acceleration_z
float32 imu_angular_velocity_x
float32 imu_angular_velocity_y
float32 imu_angular_velocity_z
float32 tool_pose_x
float32 tool_pose_y
float32 tool_pose_z
float32 tool_pose_theta_x
float32 tool_pose_theta_y
float32 tool_pose_theta_z
float32 tool_twist_linear_x
float32 tool_twist_linear_y
float32 tool_twist_linear_z
float32 tool_twist_angular_x
float32 tool_twist_angular_y
float32 tool_twist_angular_z
float32 tool_external_wrench_force_x
float32 tool_external_wrench_force_y
float32 tool_external_wrench_force_z
float32 tool_external_wrench_torque_x
float32 tool_external_wrench_torque_y
float32 tool_external_wrench_torque_z
uint32 fault_bank_a
uint32 fault_bank_b
uint32 warning_bank_a
uint32 warning_bank_b
float32 commanded_tool_pose_x
float32 commanded_tool_pose_y
float32 commanded_tool_pose_z
float32 commanded_tool_pose_theta_x
float32 commanded_tool_pose_theta_y
float32 commanded_tool_pose_theta_z"""
  __slots__ = ['active_state_connection_identifier','active_state','arm_voltage','arm_current','temperature_cpu','temperature_ambient','imu_acceleration_x','imu_acceleration_y','imu_acceleration_z','imu_angular_velocity_x','imu_angular_velocity_y','imu_angular_velocity_z','tool_pose_x','tool_pose_y','tool_pose_z','tool_pose_theta_x','tool_pose_theta_y','tool_pose_theta_z','tool_twist_linear_x','tool_twist_linear_y','tool_twist_linear_z','tool_twist_angular_x','tool_twist_angular_y','tool_twist_angular_z','tool_external_wrench_force_x','tool_external_wrench_force_y','tool_external_wrench_force_z','tool_external_wrench_torque_x','tool_external_wrench_torque_y','tool_external_wrench_torque_z','fault_bank_a','fault_bank_b','warning_bank_a','warning_bank_b','commanded_tool_pose_x','commanded_tool_pose_y','commanded_tool_pose_z','commanded_tool_pose_theta_x','commanded_tool_pose_theta_y','commanded_tool_pose_theta_z']
  _slot_types = ['uint32','uint32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','uint32','uint32','uint32','uint32','float32','float32','float32','float32','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       active_state_connection_identifier,active_state,arm_voltage,arm_current,temperature_cpu,temperature_ambient,imu_acceleration_x,imu_acceleration_y,imu_acceleration_z,imu_angular_velocity_x,imu_angular_velocity_y,imu_angular_velocity_z,tool_pose_x,tool_pose_y,tool_pose_z,tool_pose_theta_x,tool_pose_theta_y,tool_pose_theta_z,tool_twist_linear_x,tool_twist_linear_y,tool_twist_linear_z,tool_twist_angular_x,tool_twist_angular_y,tool_twist_angular_z,tool_external_wrench_force_x,tool_external_wrench_force_y,tool_external_wrench_force_z,tool_external_wrench_torque_x,tool_external_wrench_torque_y,tool_external_wrench_torque_z,fault_bank_a,fault_bank_b,warning_bank_a,warning_bank_b,commanded_tool_pose_x,commanded_tool_pose_y,commanded_tool_pose_z,commanded_tool_pose_theta_x,commanded_tool_pose_theta_y,commanded_tool_pose_theta_z

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(BaseFeedback, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.active_state_connection_identifier is None:
        self.active_state_connection_identifier = 0
      if self.active_state is None:
        self.active_state = 0
      if self.arm_voltage is None:
        self.arm_voltage = 0.
      if self.arm_current is None:
        self.arm_current = 0.
      if self.temperature_cpu is None:
        self.temperature_cpu = 0.
      if self.temperature_ambient is None:
        self.temperature_ambient = 0.
      if self.imu_acceleration_x is None:
        self.imu_acceleration_x = 0.
      if self.imu_acceleration_y is None:
        self.imu_acceleration_y = 0.
      if self.imu_acceleration_z is None:
        self.imu_acceleration_z = 0.
      if self.imu_angular_velocity_x is None:
        self.imu_angular_velocity_x = 0.
      if self.imu_angular_velocity_y is None:
        self.imu_angular_velocity_y = 0.
      if self.imu_angular_velocity_z is None:
        self.imu_angular_velocity_z = 0.
      if self.tool_pose_x is None:
        self.tool_pose_x = 0.
      if self.tool_pose_y is None:
        self.tool_pose_y = 0.
      if self.tool_pose_z is None:
        self.tool_pose_z = 0.
      if self.tool_pose_theta_x is None:
        self.tool_pose_theta_x = 0.
      if self.tool_pose_theta_y is None:
        self.tool_pose_theta_y = 0.
      if self.tool_pose_theta_z is None:
        self.tool_pose_theta_z = 0.
      if self.tool_twist_linear_x is None:
        self.tool_twist_linear_x = 0.
      if self.tool_twist_linear_y is None:
        self.tool_twist_linear_y = 0.
      if self.tool_twist_linear_z is None:
        self.tool_twist_linear_z = 0.
      if self.tool_twist_angular_x is None:
        self.tool_twist_angular_x = 0.
      if self.tool_twist_angular_y is None:
        self.tool_twist_angular_y = 0.
      if self.tool_twist_angular_z is None:
        self.tool_twist_angular_z = 0.
      if self.tool_external_wrench_force_x is None:
        self.tool_external_wrench_force_x = 0.
      if self.tool_external_wrench_force_y is None:
        self.tool_external_wrench_force_y = 0.
      if self.tool_external_wrench_force_z is None:
        self.tool_external_wrench_force_z = 0.
      if self.tool_external_wrench_torque_x is None:
        self.tool_external_wrench_torque_x = 0.
      if self.tool_external_wrench_torque_y is None:
        self.tool_external_wrench_torque_y = 0.
      if self.tool_external_wrench_torque_z is None:
        self.tool_external_wrench_torque_z = 0.
      if self.fault_bank_a is None:
        self.fault_bank_a = 0
      if self.fault_bank_b is None:
        self.fault_bank_b = 0
      if self.warning_bank_a is None:
        self.warning_bank_a = 0
      if self.warning_bank_b is None:
        self.warning_bank_b = 0
      if self.commanded_tool_pose_x is None:
        self.commanded_tool_pose_x = 0.
      if self.commanded_tool_pose_y is None:
        self.commanded_tool_pose_y = 0.
      if self.commanded_tool_pose_z is None:
        self.commanded_tool_pose_z = 0.
      if self.commanded_tool_pose_theta_x is None:
        self.commanded_tool_pose_theta_x = 0.
      if self.commanded_tool_pose_theta_y is None:
        self.commanded_tool_pose_theta_y = 0.
      if self.commanded_tool_pose_theta_z is None:
        self.commanded_tool_pose_theta_z = 0.
    else:
      self.active_state_connection_identifier = 0
      self.active_state = 0
      self.arm_voltage = 0.
      self.arm_current = 0.
      self.temperature_cpu = 0.
      self.temperature_ambient = 0.
      self.imu_acceleration_x = 0.
      self.imu_acceleration_y = 0.
      self.imu_acceleration_z = 0.
      self.imu_angular_velocity_x = 0.
      self.imu_angular_velocity_y = 0.
      self.imu_angular_velocity_z = 0.
      self.tool_pose_x = 0.
      self.tool_pose_y = 0.
      self.tool_pose_z = 0.
      self.tool_pose_theta_x = 0.
      self.tool_pose_theta_y = 0.
      self.tool_pose_theta_z = 0.
      self.tool_twist_linear_x = 0.
      self.tool_twist_linear_y = 0.
      self.tool_twist_linear_z = 0.
      self.tool_twist_angular_x = 0.
      self.tool_twist_angular_y = 0.
      self.tool_twist_angular_z = 0.
      self.tool_external_wrench_force_x = 0.
      self.tool_external_wrench_force_y = 0.
      self.tool_external_wrench_force_z = 0.
      self.tool_external_wrench_torque_x = 0.
      self.tool_external_wrench_torque_y = 0.
      self.tool_external_wrench_torque_z = 0.
      self.fault_bank_a = 0
      self.fault_bank_b = 0
      self.warning_bank_a = 0
      self.warning_bank_b = 0
      self.commanded_tool_pose_x = 0.
      self.commanded_tool_pose_y = 0.
      self.commanded_tool_pose_z = 0.
      self.commanded_tool_pose_theta_x = 0.
      self.commanded_tool_pose_theta_y = 0.
      self.commanded_tool_pose_theta_z = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_2I28f4I6f().pack(_x.active_state_connection_identifier, _x.active_state, _x.arm_voltage, _x.arm_current, _x.temperature_cpu, _x.temperature_ambient, _x.imu_acceleration_x, _x.imu_acceleration_y, _x.imu_acceleration_z, _x.imu_angular_velocity_x, _x.imu_angular_velocity_y, _x.imu_angular_velocity_z, _x.tool_pose_x, _x.tool_pose_y, _x.tool_pose_z, _x.tool_pose_theta_x, _x.tool_pose_theta_y, _x.tool_pose_theta_z, _x.tool_twist_linear_x, _x.tool_twist_linear_y, _x.tool_twist_linear_z, _x.tool_twist_angular_x, _x.tool_twist_angular_y, _x.tool_twist_angular_z, _x.tool_external_wrench_force_x, _x.tool_external_wrench_force_y, _x.tool_external_wrench_force_z, _x.tool_external_wrench_torque_x, _x.tool_external_wrench_torque_y, _x.tool_external_wrench_torque_z, _x.fault_bank_a, _x.fault_bank_b, _x.warning_bank_a, _x.warning_bank_b, _x.commanded_tool_pose_x, _x.commanded_tool_pose_y, _x.commanded_tool_pose_z, _x.commanded_tool_pose_theta_x, _x.commanded_tool_pose_theta_y, _x.commanded_tool_pose_theta_z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 160
      (_x.active_state_connection_identifier, _x.active_state, _x.arm_voltage, _x.arm_current, _x.temperature_cpu, _x.temperature_ambient, _x.imu_acceleration_x, _x.imu_acceleration_y, _x.imu_acceleration_z, _x.imu_angular_velocity_x, _x.imu_angular_velocity_y, _x.imu_angular_velocity_z, _x.tool_pose_x, _x.tool_pose_y, _x.tool_pose_z, _x.tool_pose_theta_x, _x.tool_pose_theta_y, _x.tool_pose_theta_z, _x.tool_twist_linear_x, _x.tool_twist_linear_y, _x.tool_twist_linear_z, _x.tool_twist_angular_x, _x.tool_twist_angular_y, _x.tool_twist_angular_z, _x.tool_external_wrench_force_x, _x.tool_external_wrench_force_y, _x.tool_external_wrench_force_z, _x.tool_external_wrench_torque_x, _x.tool_external_wrench_torque_y, _x.tool_external_wrench_torque_z, _x.fault_bank_a, _x.fault_bank_b, _x.warning_bank_a, _x.warning_bank_b, _x.commanded_tool_pose_x, _x.commanded_tool_pose_y, _x.commanded_tool_pose_z, _x.commanded_tool_pose_theta_x, _x.commanded_tool_pose_theta_y, _x.commanded_tool_pose_theta_z,) = _get_struct_2I28f4I6f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_2I28f4I6f().pack(_x.active_state_connection_identifier, _x.active_state, _x.arm_voltage, _x.arm_current, _x.temperature_cpu, _x.temperature_ambient, _x.imu_acceleration_x, _x.imu_acceleration_y, _x.imu_acceleration_z, _x.imu_angular_velocity_x, _x.imu_angular_velocity_y, _x.imu_angular_velocity_z, _x.tool_pose_x, _x.tool_pose_y, _x.tool_pose_z, _x.tool_pose_theta_x, _x.tool_pose_theta_y, _x.tool_pose_theta_z, _x.tool_twist_linear_x, _x.tool_twist_linear_y, _x.tool_twist_linear_z, _x.tool_twist_angular_x, _x.tool_twist_angular_y, _x.tool_twist_angular_z, _x.tool_external_wrench_force_x, _x.tool_external_wrench_force_y, _x.tool_external_wrench_force_z, _x.tool_external_wrench_torque_x, _x.tool_external_wrench_torque_y, _x.tool_external_wrench_torque_z, _x.fault_bank_a, _x.fault_bank_b, _x.warning_bank_a, _x.warning_bank_b, _x.commanded_tool_pose_x, _x.commanded_tool_pose_y, _x.commanded_tool_pose_z, _x.commanded_tool_pose_theta_x, _x.commanded_tool_pose_theta_y, _x.commanded_tool_pose_theta_z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 160
      (_x.active_state_connection_identifier, _x.active_state, _x.arm_voltage, _x.arm_current, _x.temperature_cpu, _x.temperature_ambient, _x.imu_acceleration_x, _x.imu_acceleration_y, _x.imu_acceleration_z, _x.imu_angular_velocity_x, _x.imu_angular_velocity_y, _x.imu_angular_velocity_z, _x.tool_pose_x, _x.tool_pose_y, _x.tool_pose_z, _x.tool_pose_theta_x, _x.tool_pose_theta_y, _x.tool_pose_theta_z, _x.tool_twist_linear_x, _x.tool_twist_linear_y, _x.tool_twist_linear_z, _x.tool_twist_angular_x, _x.tool_twist_angular_y, _x.tool_twist_angular_z, _x.tool_external_wrench_force_x, _x.tool_external_wrench_force_y, _x.tool_external_wrench_force_z, _x.tool_external_wrench_torque_x, _x.tool_external_wrench_torque_y, _x.tool_external_wrench_torque_z, _x.fault_bank_a, _x.fault_bank_b, _x.warning_bank_a, _x.warning_bank_b, _x.commanded_tool_pose_x, _x.commanded_tool_pose_y, _x.commanded_tool_pose_z, _x.commanded_tool_pose_theta_x, _x.commanded_tool_pose_theta_y, _x.commanded_tool_pose_theta_z,) = _get_struct_2I28f4I6f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2I28f4I6f = None
def _get_struct_2I28f4I6f():
    global _struct_2I28f4I6f
    if _struct_2I28f4I6f is None:
        _struct_2I28f4I6f = struct.Struct("<2I28f4I6f")
    return _struct_2I28f4I6f
