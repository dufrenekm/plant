// Generated by gencpp from file kortex_driver/CustomDataIndex.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_CUSTOMDATAINDEX_H
#define KORTEX_DRIVER_MESSAGE_CUSTOMDATAINDEX_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace kortex_driver
{
template <class ContainerAllocator>
struct CustomDataIndex_
{
  typedef CustomDataIndex_<ContainerAllocator> Type;

  CustomDataIndex_()
    {
    }
  CustomDataIndex_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }





// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(NO_CUSTOM_DATA_SELECTED)
  #undef NO_CUSTOM_DATA_SELECTED
#endif
#if defined(_WIN32) && defined(UINT32_TEST_RAMP)
  #undef UINT32_TEST_RAMP
#endif
#if defined(_WIN32) && defined(UINT32_MOTOR_ENCODER_RAW)
  #undef UINT32_MOTOR_ENCODER_RAW
#endif
#if defined(_WIN32) && defined(UINT32_JOINT_ENCODER_RAW)
  #undef UINT32_JOINT_ENCODER_RAW
#endif
#if defined(_WIN32) && defined(FLOAT_TEMPERATURE_PHASE_0)
  #undef FLOAT_TEMPERATURE_PHASE_0
#endif
#if defined(_WIN32) && defined(FLOAT_TEMPERATURE_PHASE_1)
  #undef FLOAT_TEMPERATURE_PHASE_1
#endif
#if defined(_WIN32) && defined(FLOAT_TEMPERATURE_PHASE_2)
  #undef FLOAT_TEMPERATURE_PHASE_2
#endif
#if defined(_WIN32) && defined(INT32_TORQUE_SENSOR_RAW_0)
  #undef INT32_TORQUE_SENSOR_RAW_0
#endif
#if defined(_WIN32) && defined(INT32_TORQUE_SENSOR_RAW_1)
  #undef INT32_TORQUE_SENSOR_RAW_1
#endif
#if defined(_WIN32) && defined(INT32_TORQUE_SENSOR_RAW_2)
  #undef INT32_TORQUE_SENSOR_RAW_2
#endif
#if defined(_WIN32) && defined(INT32_TORQUE_SENSOR_RAW_3)
  #undef INT32_TORQUE_SENSOR_RAW_3
#endif
#if defined(_WIN32) && defined(FLOAT_TORQUE_SENSOR_0)
  #undef FLOAT_TORQUE_SENSOR_0
#endif
#if defined(_WIN32) && defined(FLOAT_TORQUE_SENSOR_1)
  #undef FLOAT_TORQUE_SENSOR_1
#endif
#if defined(_WIN32) && defined(FLOAT_TORQUE_SENSOR_2)
  #undef FLOAT_TORQUE_SENSOR_2
#endif
#if defined(_WIN32) && defined(FLOAT_TORQUE_SENSOR_3)
  #undef FLOAT_TORQUE_SENSOR_3
#endif
#if defined(_WIN32) && defined(UINT32_MOTOR_ENCODER_RAW_LATCH_ON_INDEX_RISING)
  #undef UINT32_MOTOR_ENCODER_RAW_LATCH_ON_INDEX_RISING
#endif
#if defined(_WIN32) && defined(UINT32_JOINT_ENCODER_RAW_LATCH_ON_INDEX_RISING)
  #undef UINT32_JOINT_ENCODER_RAW_LATCH_ON_INDEX_RISING
#endif
#if defined(_WIN32) && defined(UINT32_ABSOLUTE_POSITION_SENSOR_RAW)
  #undef UINT32_ABSOLUTE_POSITION_SENSOR_RAW
#endif
#if defined(_WIN32) && defined(FLOAT_ABSOLUTE_POSITION_SENSOR)
  #undef FLOAT_ABSOLUTE_POSITION_SENSOR
#endif
#if defined(_WIN32) && defined(FLOAT_CONTROL_POSITION_JOINT_REQUESTED)
  #undef FLOAT_CONTROL_POSITION_JOINT_REQUESTED
#endif
#if defined(_WIN32) && defined(UINT32_JIG_FLAGS)
  #undef UINT32_JIG_FLAGS
#endif
#if defined(_WIN32) && defined(UINT32_TICK_MOTOR_CONTROL)
  #undef UINT32_TICK_MOTOR_CONTROL
#endif
#if defined(_WIN32) && defined(UINT32_TICK_JOINT_CONTROL)
  #undef UINT32_TICK_JOINT_CONTROL
#endif
#if defined(_WIN32) && defined(UINT32_INDEX_TICK_MOTOR_CONTROL)
  #undef UINT32_INDEX_TICK_MOTOR_CONTROL
#endif
#if defined(_WIN32) && defined(UINT32_INDEX_TICK_JOINT_CONTROL)
  #undef UINT32_INDEX_TICK_JOINT_CONTROL
#endif
#if defined(_WIN32) && defined(FLOAT_ACCELERATION_X)
  #undef FLOAT_ACCELERATION_X
#endif
#if defined(_WIN32) && defined(FLOAT_ACCELERATION_Y)
  #undef FLOAT_ACCELERATION_Y
#endif
#if defined(_WIN32) && defined(FLOAT_ACCELERATION_Z)
  #undef FLOAT_ACCELERATION_Z
#endif
#if defined(_WIN32) && defined(FLOAT_ANGULAR_RATE_X)
  #undef FLOAT_ANGULAR_RATE_X
#endif
#if defined(_WIN32) && defined(FLOAT_ANGULAR_RATE_Y)
  #undef FLOAT_ANGULAR_RATE_Y
#endif
#if defined(_WIN32) && defined(FLOAT_ANGULAR_RATE_Z)
  #undef FLOAT_ANGULAR_RATE_Z
#endif
#if defined(_WIN32) && defined(FLOAT_POSITION_MOTOR_CMD)
  #undef FLOAT_POSITION_MOTOR_CMD
#endif
#if defined(_WIN32) && defined(FLOAT_VELOCITY_MOTOR_CMD)
  #undef FLOAT_VELOCITY_MOTOR_CMD
#endif
#if defined(_WIN32) && defined(FLOAT_POSITION_MOTOR)
  #undef FLOAT_POSITION_MOTOR
#endif
#if defined(_WIN32) && defined(FLOAT_VELOCITY_MOTOR)
  #undef FLOAT_VELOCITY_MOTOR
#endif
#if defined(_WIN32) && defined(UINT32_COMMUNICATIONS_JITTER)
  #undef UINT32_COMMUNICATIONS_JITTER
#endif
#if defined(_WIN32) && defined(FLOAT_TORQUE_AVERAGE)
  #undef FLOAT_TORQUE_AVERAGE
#endif
#if defined(_WIN32) && defined(FLOAT_CURRENT_MOTOR)
  #undef FLOAT_CURRENT_MOTOR
#endif
#if defined(_WIN32) && defined(FLOAT_VOLTAGE_DIGITAL)
  #undef FLOAT_VOLTAGE_DIGITAL
#endif
#if defined(_WIN32) && defined(FLOAT_TEMPERATURE_MOTOR_CELSIUS)
  #undef FLOAT_TEMPERATURE_MOTOR_CELSIUS
#endif
#if defined(_WIN32) && defined(FLOAT_TEMPERATURE_CORE_CELSIUS)
  #undef FLOAT_TEMPERATURE_CORE_CELSIUS
#endif
#if defined(_WIN32) && defined(UINT32_FAULT_A)
  #undef UINT32_FAULT_A
#endif
#if defined(_WIN32) && defined(UINT32_FAULT_B)
  #undef UINT32_FAULT_B
#endif
#if defined(_WIN32) && defined(UINT32_WARNING_A)
  #undef UINT32_WARNING_A
#endif
#if defined(_WIN32) && defined(UINT32_WARNING_B)
  #undef UINT32_WARNING_B
#endif
#if defined(_WIN32) && defined(FLOAT_POSITION_FROM_HALLS)
  #undef FLOAT_POSITION_FROM_HALLS
#endif
#if defined(_WIN32) && defined(FLOAT_PHASE_CURRENT_0)
  #undef FLOAT_PHASE_CURRENT_0
#endif
#if defined(_WIN32) && defined(FLOAT_PHASE_CURRENT_1)
  #undef FLOAT_PHASE_CURRENT_1
#endif
#if defined(_WIN32) && defined(FLOAT_PHASE_CURRENT_2)
  #undef FLOAT_PHASE_CURRENT_2
#endif
#if defined(_WIN32) && defined(FLOAT_PHASE_PWM_0)
  #undef FLOAT_PHASE_PWM_0
#endif
#if defined(_WIN32) && defined(FLOAT_PHASE_PWM_1)
  #undef FLOAT_PHASE_PWM_1
#endif
#if defined(_WIN32) && defined(FLOAT_PHASE_PWM_2)
  #undef FLOAT_PHASE_PWM_2
#endif
#if defined(_WIN32) && defined(FLOAT_MOTOR_ELECTRICAL_ANGLE)
  #undef FLOAT_MOTOR_ELECTRICAL_ANGLE
#endif
#if defined(_WIN32) && defined(FLOAT_CURRENT_MOTOR_CMD)
  #undef FLOAT_CURRENT_MOTOR_CMD
#endif
#if defined(_WIN32) && defined(FLOAT_TORQUE_JOINT_CMD)
  #undef FLOAT_TORQUE_JOINT_CMD
#endif
#if defined(_WIN32) && defined(FLOAT_POSITION_UNWRAPPED)
  #undef FLOAT_POSITION_UNWRAPPED
#endif
#if defined(_WIN32) && defined(UINT32_HALL_SENSOR_0)
  #undef UINT32_HALL_SENSOR_0
#endif
#if defined(_WIN32) && defined(UINT32_HALL_SENSOR_1)
  #undef UINT32_HALL_SENSOR_1
#endif
#if defined(_WIN32) && defined(UINT32_HALL_SENSOR_2)
  #undef UINT32_HALL_SENSOR_2
#endif
#if defined(_WIN32) && defined(INT32_HALL_SENSOR_SCALED_0)
  #undef INT32_HALL_SENSOR_SCALED_0
#endif
#if defined(_WIN32) && defined(INT32_HALL_SENSOR_SCALED_1)
  #undef INT32_HALL_SENSOR_SCALED_1
#endif
#if defined(_WIN32) && defined(INT32_HALL_SENSOR_SCALED_2)
  #undef INT32_HALL_SENSOR_SCALED_2
#endif
#if defined(_WIN32) && defined(FLOAT_COGGING_COEFFICIENT_A_0)
  #undef FLOAT_COGGING_COEFFICIENT_A_0
#endif
#if defined(_WIN32) && defined(FLOAT_COGGING_COEFFICIENT_A_1)
  #undef FLOAT_COGGING_COEFFICIENT_A_1
#endif
#if defined(_WIN32) && defined(FLOAT_COGGING_COEFFICIENT_A_2)
  #undef FLOAT_COGGING_COEFFICIENT_A_2
#endif
#if defined(_WIN32) && defined(FLOAT_COGGING_COEFFICIENT_A_3)
  #undef FLOAT_COGGING_COEFFICIENT_A_3
#endif
#if defined(_WIN32) && defined(FLOAT_COGGING_COEFFICIENT_A_4)
  #undef FLOAT_COGGING_COEFFICIENT_A_4
#endif
#if defined(_WIN32) && defined(FLOAT_COGGING_COEFFICIENT_A_5)
  #undef FLOAT_COGGING_COEFFICIENT_A_5
#endif
#if defined(_WIN32) && defined(FLOAT_COGGING_COEFFICIENT_A_6)
  #undef FLOAT_COGGING_COEFFICIENT_A_6
#endif
#if defined(_WIN32) && defined(FLOAT_COGGING_COEFFICIENT_A_7)
  #undef FLOAT_COGGING_COEFFICIENT_A_7
#endif
#if defined(_WIN32) && defined(FLOAT_COGGING_COEFFICIENT_A_8)
  #undef FLOAT_COGGING_COEFFICIENT_A_8
#endif
#if defined(_WIN32) && defined(FLOAT_COGGING_COEFFICIENT_A_9)
  #undef FLOAT_COGGING_COEFFICIENT_A_9
#endif
#if defined(_WIN32) && defined(FLOAT_COGGING_COEFFICIENT_A_10)
  #undef FLOAT_COGGING_COEFFICIENT_A_10
#endif
#if defined(_WIN32) && defined(FLOAT_COGGING_COEFFICIENT_A_11)
  #undef FLOAT_COGGING_COEFFICIENT_A_11
#endif
#if defined(_WIN32) && defined(FLOAT_COGGING_COEFFICIENT_A_12)
  #undef FLOAT_COGGING_COEFFICIENT_A_12
#endif
#if defined(_WIN32) && defined(FLOAT_COGGING_COEFFICIENT_A_13)
  #undef FLOAT_COGGING_COEFFICIENT_A_13
#endif
#if defined(_WIN32) && defined(FLOAT_COGGING_COEFFICIENT_A_14)
  #undef FLOAT_COGGING_COEFFICIENT_A_14
#endif
#if defined(_WIN32) && defined(FLOAT_COGGING_COEFFICIENT_A_15)
  #undef FLOAT_COGGING_COEFFICIENT_A_15
#endif
#if defined(_WIN32) && defined(FLOAT_COGGING_COEFFICIENT_B_0)
  #undef FLOAT_COGGING_COEFFICIENT_B_0
#endif
#if defined(_WIN32) && defined(FLOAT_COGGING_COEFFICIENT_B_1)
  #undef FLOAT_COGGING_COEFFICIENT_B_1
#endif
#if defined(_WIN32) && defined(FLOAT_COGGING_COEFFICIENT_B_2)
  #undef FLOAT_COGGING_COEFFICIENT_B_2
#endif
#if defined(_WIN32) && defined(FLOAT_COGGING_COEFFICIENT_B_3)
  #undef FLOAT_COGGING_COEFFICIENT_B_3
#endif
#if defined(_WIN32) && defined(FLOAT_COGGING_COEFFICIENT_B_4)
  #undef FLOAT_COGGING_COEFFICIENT_B_4
#endif
#if defined(_WIN32) && defined(FLOAT_COGGING_COEFFICIENT_B_5)
  #undef FLOAT_COGGING_COEFFICIENT_B_5
#endif
#if defined(_WIN32) && defined(FLOAT_COGGING_COEFFICIENT_B_6)
  #undef FLOAT_COGGING_COEFFICIENT_B_6
#endif
#if defined(_WIN32) && defined(FLOAT_COGGING_COEFFICIENT_B_7)
  #undef FLOAT_COGGING_COEFFICIENT_B_7
#endif
#if defined(_WIN32) && defined(FLOAT_COGGING_COEFFICIENT_B_8)
  #undef FLOAT_COGGING_COEFFICIENT_B_8
#endif
#if defined(_WIN32) && defined(FLOAT_COGGING_COEFFICIENT_B_9)
  #undef FLOAT_COGGING_COEFFICIENT_B_9
#endif
#if defined(_WIN32) && defined(FLOAT_COGGING_COEFFICIENT_B_10)
  #undef FLOAT_COGGING_COEFFICIENT_B_10
#endif
#if defined(_WIN32) && defined(FLOAT_COGGING_COEFFICIENT_B_11)
  #undef FLOAT_COGGING_COEFFICIENT_B_11
#endif
#if defined(_WIN32) && defined(FLOAT_COGGING_COEFFICIENT_B_12)
  #undef FLOAT_COGGING_COEFFICIENT_B_12
#endif
#if defined(_WIN32) && defined(FLOAT_COGGING_COEFFICIENT_B_13)
  #undef FLOAT_COGGING_COEFFICIENT_B_13
#endif
#if defined(_WIN32) && defined(FLOAT_COGGING_COEFFICIENT_B_14)
  #undef FLOAT_COGGING_COEFFICIENT_B_14
#endif
#if defined(_WIN32) && defined(FLOAT_COGGING_COEFFICIENT_B_15)
  #undef FLOAT_COGGING_COEFFICIENT_B_15
#endif
#if defined(_WIN32) && defined(FLOAT_CURRENT_COGGING_FEEDFORWARD)
  #undef FLOAT_CURRENT_COGGING_FEEDFORWARD
#endif

  enum {
    NO_CUSTOM_DATA_SELECTED = 0u,
    UINT32_TEST_RAMP = 1u,
    UINT32_MOTOR_ENCODER_RAW = 2u,
    UINT32_JOINT_ENCODER_RAW = 3u,
    FLOAT_TEMPERATURE_PHASE_0 = 4u,
    FLOAT_TEMPERATURE_PHASE_1 = 5u,
    FLOAT_TEMPERATURE_PHASE_2 = 6u,
    INT32_TORQUE_SENSOR_RAW_0 = 7u,
    INT32_TORQUE_SENSOR_RAW_1 = 8u,
    INT32_TORQUE_SENSOR_RAW_2 = 9u,
    INT32_TORQUE_SENSOR_RAW_3 = 10u,
    FLOAT_TORQUE_SENSOR_0 = 11u,
    FLOAT_TORQUE_SENSOR_1 = 12u,
    FLOAT_TORQUE_SENSOR_2 = 13u,
    FLOAT_TORQUE_SENSOR_3 = 14u,
    UINT32_MOTOR_ENCODER_RAW_LATCH_ON_INDEX_RISING = 15u,
    UINT32_JOINT_ENCODER_RAW_LATCH_ON_INDEX_RISING = 16u,
    UINT32_ABSOLUTE_POSITION_SENSOR_RAW = 17u,
    FLOAT_ABSOLUTE_POSITION_SENSOR = 18u,
    FLOAT_CONTROL_POSITION_JOINT_REQUESTED = 19u,
    UINT32_JIG_FLAGS = 20u,
    UINT32_TICK_MOTOR_CONTROL = 21u,
    UINT32_TICK_JOINT_CONTROL = 22u,
    UINT32_INDEX_TICK_MOTOR_CONTROL = 23u,
    UINT32_INDEX_TICK_JOINT_CONTROL = 24u,
    FLOAT_ACCELERATION_X = 25u,
    FLOAT_ACCELERATION_Y = 26u,
    FLOAT_ACCELERATION_Z = 27u,
    FLOAT_ANGULAR_RATE_X = 28u,
    FLOAT_ANGULAR_RATE_Y = 29u,
    FLOAT_ANGULAR_RATE_Z = 30u,
    FLOAT_POSITION_MOTOR_CMD = 31u,
    FLOAT_VELOCITY_MOTOR_CMD = 32u,
    FLOAT_POSITION_MOTOR = 33u,
    FLOAT_VELOCITY_MOTOR = 34u,
    UINT32_COMMUNICATIONS_JITTER = 35u,
    FLOAT_TORQUE_AVERAGE = 36u,
    FLOAT_CURRENT_MOTOR = 37u,
    FLOAT_VOLTAGE_DIGITAL = 38u,
    FLOAT_TEMPERATURE_MOTOR_CELSIUS = 39u,
    FLOAT_TEMPERATURE_CORE_CELSIUS = 40u,
    UINT32_FAULT_A = 41u,
    UINT32_FAULT_B = 42u,
    UINT32_WARNING_A = 43u,
    UINT32_WARNING_B = 44u,
    FLOAT_POSITION_FROM_HALLS = 45u,
    FLOAT_PHASE_CURRENT_0 = 46u,
    FLOAT_PHASE_CURRENT_1 = 47u,
    FLOAT_PHASE_CURRENT_2 = 48u,
    FLOAT_PHASE_PWM_0 = 49u,
    FLOAT_PHASE_PWM_1 = 50u,
    FLOAT_PHASE_PWM_2 = 51u,
    FLOAT_MOTOR_ELECTRICAL_ANGLE = 52u,
    FLOAT_CURRENT_MOTOR_CMD = 53u,
    FLOAT_TORQUE_JOINT_CMD = 54u,
    FLOAT_POSITION_UNWRAPPED = 55u,
    UINT32_HALL_SENSOR_0 = 56u,
    UINT32_HALL_SENSOR_1 = 57u,
    UINT32_HALL_SENSOR_2 = 58u,
    INT32_HALL_SENSOR_SCALED_0 = 59u,
    INT32_HALL_SENSOR_SCALED_1 = 60u,
    INT32_HALL_SENSOR_SCALED_2 = 61u,
    FLOAT_COGGING_COEFFICIENT_A_0 = 62u,
    FLOAT_COGGING_COEFFICIENT_A_1 = 63u,
    FLOAT_COGGING_COEFFICIENT_A_2 = 64u,
    FLOAT_COGGING_COEFFICIENT_A_3 = 65u,
    FLOAT_COGGING_COEFFICIENT_A_4 = 66u,
    FLOAT_COGGING_COEFFICIENT_A_5 = 67u,
    FLOAT_COGGING_COEFFICIENT_A_6 = 68u,
    FLOAT_COGGING_COEFFICIENT_A_7 = 69u,
    FLOAT_COGGING_COEFFICIENT_A_8 = 70u,
    FLOAT_COGGING_COEFFICIENT_A_9 = 71u,
    FLOAT_COGGING_COEFFICIENT_A_10 = 72u,
    FLOAT_COGGING_COEFFICIENT_A_11 = 73u,
    FLOAT_COGGING_COEFFICIENT_A_12 = 74u,
    FLOAT_COGGING_COEFFICIENT_A_13 = 75u,
    FLOAT_COGGING_COEFFICIENT_A_14 = 76u,
    FLOAT_COGGING_COEFFICIENT_A_15 = 77u,
    FLOAT_COGGING_COEFFICIENT_B_0 = 78u,
    FLOAT_COGGING_COEFFICIENT_B_1 = 79u,
    FLOAT_COGGING_COEFFICIENT_B_2 = 80u,
    FLOAT_COGGING_COEFFICIENT_B_3 = 81u,
    FLOAT_COGGING_COEFFICIENT_B_4 = 82u,
    FLOAT_COGGING_COEFFICIENT_B_5 = 83u,
    FLOAT_COGGING_COEFFICIENT_B_6 = 84u,
    FLOAT_COGGING_COEFFICIENT_B_7 = 85u,
    FLOAT_COGGING_COEFFICIENT_B_8 = 86u,
    FLOAT_COGGING_COEFFICIENT_B_9 = 87u,
    FLOAT_COGGING_COEFFICIENT_B_10 = 88u,
    FLOAT_COGGING_COEFFICIENT_B_11 = 89u,
    FLOAT_COGGING_COEFFICIENT_B_12 = 90u,
    FLOAT_COGGING_COEFFICIENT_B_13 = 91u,
    FLOAT_COGGING_COEFFICIENT_B_14 = 92u,
    FLOAT_COGGING_COEFFICIENT_B_15 = 93u,
    FLOAT_CURRENT_COGGING_FEEDFORWARD = 94u,
  };


  typedef boost::shared_ptr< ::kortex_driver::CustomDataIndex_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::CustomDataIndex_<ContainerAllocator> const> ConstPtr;

}; // struct CustomDataIndex_

typedef ::kortex_driver::CustomDataIndex_<std::allocator<void> > CustomDataIndex;

typedef boost::shared_ptr< ::kortex_driver::CustomDataIndex > CustomDataIndexPtr;
typedef boost::shared_ptr< ::kortex_driver::CustomDataIndex const> CustomDataIndexConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::CustomDataIndex_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::CustomDataIndex_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::CustomDataIndex_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::CustomDataIndex_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::CustomDataIndex_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::CustomDataIndex_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::CustomDataIndex_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::CustomDataIndex_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::CustomDataIndex_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eae9521583b3c1abefd19a18bb497f62";
  }

  static const char* value(const ::kortex_driver::CustomDataIndex_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xeae9521583b3c1abULL;
  static const uint64_t static_value2 = 0xefd19a18bb497f62ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::CustomDataIndex_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/CustomDataIndex";
  }

  static const char* value(const ::kortex_driver::CustomDataIndex_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::CustomDataIndex_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 NO_CUSTOM_DATA_SELECTED = 0\n"
"\n"
"uint32 UINT32_TEST_RAMP = 1\n"
"\n"
"uint32 UINT32_MOTOR_ENCODER_RAW = 2\n"
"\n"
"uint32 UINT32_JOINT_ENCODER_RAW = 3\n"
"\n"
"uint32 FLOAT_TEMPERATURE_PHASE_0 = 4\n"
"\n"
"uint32 FLOAT_TEMPERATURE_PHASE_1 = 5\n"
"\n"
"uint32 FLOAT_TEMPERATURE_PHASE_2 = 6\n"
"\n"
"uint32 INT32_TORQUE_SENSOR_RAW_0 = 7\n"
"\n"
"uint32 INT32_TORQUE_SENSOR_RAW_1 = 8\n"
"\n"
"uint32 INT32_TORQUE_SENSOR_RAW_2 = 9\n"
"\n"
"uint32 INT32_TORQUE_SENSOR_RAW_3 = 10\n"
"\n"
"uint32 FLOAT_TORQUE_SENSOR_0 = 11\n"
"\n"
"uint32 FLOAT_TORQUE_SENSOR_1 = 12\n"
"\n"
"uint32 FLOAT_TORQUE_SENSOR_2 = 13\n"
"\n"
"uint32 FLOAT_TORQUE_SENSOR_3 = 14\n"
"\n"
"uint32 UINT32_MOTOR_ENCODER_RAW_LATCH_ON_INDEX_RISING = 15\n"
"\n"
"uint32 UINT32_JOINT_ENCODER_RAW_LATCH_ON_INDEX_RISING = 16\n"
"\n"
"uint32 UINT32_ABSOLUTE_POSITION_SENSOR_RAW = 17\n"
"\n"
"uint32 FLOAT_ABSOLUTE_POSITION_SENSOR = 18\n"
"\n"
"uint32 FLOAT_CONTROL_POSITION_JOINT_REQUESTED = 19\n"
"\n"
"uint32 UINT32_JIG_FLAGS = 20\n"
"\n"
"uint32 UINT32_TICK_MOTOR_CONTROL = 21\n"
"\n"
"uint32 UINT32_TICK_JOINT_CONTROL = 22\n"
"\n"
"uint32 UINT32_INDEX_TICK_MOTOR_CONTROL = 23\n"
"\n"
"uint32 UINT32_INDEX_TICK_JOINT_CONTROL = 24\n"
"\n"
"uint32 FLOAT_ACCELERATION_X = 25\n"
"\n"
"uint32 FLOAT_ACCELERATION_Y = 26\n"
"\n"
"uint32 FLOAT_ACCELERATION_Z = 27\n"
"\n"
"uint32 FLOAT_ANGULAR_RATE_X = 28\n"
"\n"
"uint32 FLOAT_ANGULAR_RATE_Y = 29\n"
"\n"
"uint32 FLOAT_ANGULAR_RATE_Z = 30\n"
"\n"
"uint32 FLOAT_POSITION_MOTOR_CMD = 31\n"
"\n"
"uint32 FLOAT_VELOCITY_MOTOR_CMD = 32\n"
"\n"
"uint32 FLOAT_POSITION_MOTOR = 33\n"
"\n"
"uint32 FLOAT_VELOCITY_MOTOR = 34\n"
"\n"
"uint32 UINT32_COMMUNICATIONS_JITTER = 35\n"
"\n"
"uint32 FLOAT_TORQUE_AVERAGE = 36\n"
"\n"
"uint32 FLOAT_CURRENT_MOTOR = 37\n"
"\n"
"uint32 FLOAT_VOLTAGE_DIGITAL = 38\n"
"\n"
"uint32 FLOAT_TEMPERATURE_MOTOR_CELSIUS = 39\n"
"\n"
"uint32 FLOAT_TEMPERATURE_CORE_CELSIUS = 40\n"
"\n"
"uint32 UINT32_FAULT_A = 41\n"
"\n"
"uint32 UINT32_FAULT_B = 42\n"
"\n"
"uint32 UINT32_WARNING_A = 43\n"
"\n"
"uint32 UINT32_WARNING_B = 44\n"
"\n"
"uint32 FLOAT_POSITION_FROM_HALLS = 45\n"
"\n"
"uint32 FLOAT_PHASE_CURRENT_0 = 46\n"
"\n"
"uint32 FLOAT_PHASE_CURRENT_1 = 47\n"
"\n"
"uint32 FLOAT_PHASE_CURRENT_2 = 48\n"
"\n"
"uint32 FLOAT_PHASE_PWM_0 = 49\n"
"\n"
"uint32 FLOAT_PHASE_PWM_1 = 50\n"
"\n"
"uint32 FLOAT_PHASE_PWM_2 = 51\n"
"\n"
"uint32 FLOAT_MOTOR_ELECTRICAL_ANGLE = 52\n"
"\n"
"uint32 FLOAT_CURRENT_MOTOR_CMD = 53\n"
"\n"
"uint32 FLOAT_TORQUE_JOINT_CMD = 54\n"
"\n"
"uint32 FLOAT_POSITION_UNWRAPPED = 55\n"
"\n"
"uint32 UINT32_HALL_SENSOR_0 = 56\n"
"\n"
"uint32 UINT32_HALL_SENSOR_1 = 57\n"
"\n"
"uint32 UINT32_HALL_SENSOR_2 = 58\n"
"\n"
"uint32 INT32_HALL_SENSOR_SCALED_0 = 59\n"
"\n"
"uint32 INT32_HALL_SENSOR_SCALED_1 = 60\n"
"\n"
"uint32 INT32_HALL_SENSOR_SCALED_2 = 61\n"
"\n"
"uint32 FLOAT_COGGING_COEFFICIENT_A_0 = 62\n"
"\n"
"uint32 FLOAT_COGGING_COEFFICIENT_A_1 = 63\n"
"\n"
"uint32 FLOAT_COGGING_COEFFICIENT_A_2 = 64\n"
"\n"
"uint32 FLOAT_COGGING_COEFFICIENT_A_3 = 65\n"
"\n"
"uint32 FLOAT_COGGING_COEFFICIENT_A_4 = 66\n"
"\n"
"uint32 FLOAT_COGGING_COEFFICIENT_A_5 = 67\n"
"\n"
"uint32 FLOAT_COGGING_COEFFICIENT_A_6 = 68\n"
"\n"
"uint32 FLOAT_COGGING_COEFFICIENT_A_7 = 69\n"
"\n"
"uint32 FLOAT_COGGING_COEFFICIENT_A_8 = 70\n"
"\n"
"uint32 FLOAT_COGGING_COEFFICIENT_A_9 = 71\n"
"\n"
"uint32 FLOAT_COGGING_COEFFICIENT_A_10 = 72\n"
"\n"
"uint32 FLOAT_COGGING_COEFFICIENT_A_11 = 73\n"
"\n"
"uint32 FLOAT_COGGING_COEFFICIENT_A_12 = 74\n"
"\n"
"uint32 FLOAT_COGGING_COEFFICIENT_A_13 = 75\n"
"\n"
"uint32 FLOAT_COGGING_COEFFICIENT_A_14 = 76\n"
"\n"
"uint32 FLOAT_COGGING_COEFFICIENT_A_15 = 77\n"
"\n"
"uint32 FLOAT_COGGING_COEFFICIENT_B_0 = 78\n"
"\n"
"uint32 FLOAT_COGGING_COEFFICIENT_B_1 = 79\n"
"\n"
"uint32 FLOAT_COGGING_COEFFICIENT_B_2 = 80\n"
"\n"
"uint32 FLOAT_COGGING_COEFFICIENT_B_3 = 81\n"
"\n"
"uint32 FLOAT_COGGING_COEFFICIENT_B_4 = 82\n"
"\n"
"uint32 FLOAT_COGGING_COEFFICIENT_B_5 = 83\n"
"\n"
"uint32 FLOAT_COGGING_COEFFICIENT_B_6 = 84\n"
"\n"
"uint32 FLOAT_COGGING_COEFFICIENT_B_7 = 85\n"
"\n"
"uint32 FLOAT_COGGING_COEFFICIENT_B_8 = 86\n"
"\n"
"uint32 FLOAT_COGGING_COEFFICIENT_B_9 = 87\n"
"\n"
"uint32 FLOAT_COGGING_COEFFICIENT_B_10 = 88\n"
"\n"
"uint32 FLOAT_COGGING_COEFFICIENT_B_11 = 89\n"
"\n"
"uint32 FLOAT_COGGING_COEFFICIENT_B_12 = 90\n"
"\n"
"uint32 FLOAT_COGGING_COEFFICIENT_B_13 = 91\n"
"\n"
"uint32 FLOAT_COGGING_COEFFICIENT_B_14 = 92\n"
"\n"
"uint32 FLOAT_COGGING_COEFFICIENT_B_15 = 93\n"
"\n"
"uint32 FLOAT_CURRENT_COGGING_FEEDFORWARD = 94\n"
;
  }

  static const char* value(const ::kortex_driver::CustomDataIndex_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::CustomDataIndex_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CustomDataIndex_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::CustomDataIndex_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::kortex_driver::CustomDataIndex_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_CUSTOMDATAINDEX_H
