// Generated by gencpp from file kortex_driver/InterconnectCyclic_Feedback_tool_feedback.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_INTERCONNECTCYCLIC_FEEDBACK_TOOL_FEEDBACK_H
#define KORTEX_DRIVER_MESSAGE_INTERCONNECTCYCLIC_FEEDBACK_TOOL_FEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/GripperCyclic_Feedback.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct InterconnectCyclic_Feedback_tool_feedback_
{
  typedef InterconnectCyclic_Feedback_tool_feedback_<ContainerAllocator> Type;

  InterconnectCyclic_Feedback_tool_feedback_()
    : gripper_feedback()  {
    }
  InterconnectCyclic_Feedback_tool_feedback_(const ContainerAllocator& _alloc)
    : gripper_feedback(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::kortex_driver::GripperCyclic_Feedback_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::kortex_driver::GripperCyclic_Feedback_<ContainerAllocator> >::other >  _gripper_feedback_type;
  _gripper_feedback_type gripper_feedback;





  typedef boost::shared_ptr< ::kortex_driver::InterconnectCyclic_Feedback_tool_feedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::InterconnectCyclic_Feedback_tool_feedback_<ContainerAllocator> const> ConstPtr;

}; // struct InterconnectCyclic_Feedback_tool_feedback_

typedef ::kortex_driver::InterconnectCyclic_Feedback_tool_feedback_<std::allocator<void> > InterconnectCyclic_Feedback_tool_feedback;

typedef boost::shared_ptr< ::kortex_driver::InterconnectCyclic_Feedback_tool_feedback > InterconnectCyclic_Feedback_tool_feedbackPtr;
typedef boost::shared_ptr< ::kortex_driver::InterconnectCyclic_Feedback_tool_feedback const> InterconnectCyclic_Feedback_tool_feedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::InterconnectCyclic_Feedback_tool_feedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::InterconnectCyclic_Feedback_tool_feedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::InterconnectCyclic_Feedback_tool_feedback_<ContainerAllocator1> & lhs, const ::kortex_driver::InterconnectCyclic_Feedback_tool_feedback_<ContainerAllocator2> & rhs)
{
  return lhs.gripper_feedback == rhs.gripper_feedback;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::InterconnectCyclic_Feedback_tool_feedback_<ContainerAllocator1> & lhs, const ::kortex_driver::InterconnectCyclic_Feedback_tool_feedback_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::InterconnectCyclic_Feedback_tool_feedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::InterconnectCyclic_Feedback_tool_feedback_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::InterconnectCyclic_Feedback_tool_feedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::InterconnectCyclic_Feedback_tool_feedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::InterconnectCyclic_Feedback_tool_feedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::InterconnectCyclic_Feedback_tool_feedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::InterconnectCyclic_Feedback_tool_feedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "39e2425dcc897a387ad5c442c6119c99";
  }

  static const char* value(const ::kortex_driver::InterconnectCyclic_Feedback_tool_feedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x39e2425dcc897a38ULL;
  static const uint64_t static_value2 = 0x7ad5c442c6119c99ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::InterconnectCyclic_Feedback_tool_feedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/InterconnectCyclic_Feedback_tool_feedback";
  }

  static const char* value(const ::kortex_driver::InterconnectCyclic_Feedback_tool_feedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::InterconnectCyclic_Feedback_tool_feedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"GripperCyclic_Feedback[] gripper_feedback\n"
"================================================================================\n"
"MSG: kortex_driver/GripperCyclic_Feedback\n"
"\n"
"GripperCyclic_MessageId feedback_id\n"
"uint32 status_flags\n"
"uint32 fault_bank_a\n"
"uint32 fault_bank_b\n"
"uint32 warning_bank_a\n"
"uint32 warning_bank_b\n"
"MotorFeedback[] motor\n"
"================================================================================\n"
"MSG: kortex_driver/GripperCyclic_MessageId\n"
"\n"
"uint32 identifier\n"
"================================================================================\n"
"MSG: kortex_driver/MotorFeedback\n"
"\n"
"uint32 motor_id\n"
"float32 position\n"
"float32 velocity\n"
"float32 current_motor\n"
"float32 voltage\n"
"float32 temperature_motor\n"
;
  }

  static const char* value(const ::kortex_driver::InterconnectCyclic_Feedback_tool_feedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::InterconnectCyclic_Feedback_tool_feedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.gripper_feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct InterconnectCyclic_Feedback_tool_feedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::InterconnectCyclic_Feedback_tool_feedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::InterconnectCyclic_Feedback_tool_feedback_<ContainerAllocator>& v)
  {
    s << indent << "gripper_feedback[]" << std::endl;
    for (size_t i = 0; i < v.gripper_feedback.size(); ++i)
    {
      s << indent << "  gripper_feedback[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kortex_driver::GripperCyclic_Feedback_<ContainerAllocator> >::stream(s, indent + "    ", v.gripper_feedback[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_INTERCONNECTCYCLIC_FEEDBACK_TOOL_FEEDBACK_H
