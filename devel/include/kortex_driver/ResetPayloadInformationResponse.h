// Generated by gencpp from file kortex_driver/ResetPayloadInformationResponse.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_RESETPAYLOADINFORMATIONRESPONSE_H
#define KORTEX_DRIVER_MESSAGE_RESETPAYLOADINFORMATIONRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/PayloadInformation.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct ResetPayloadInformationResponse_
{
  typedef ResetPayloadInformationResponse_<ContainerAllocator> Type;

  ResetPayloadInformationResponse_()
    : output()  {
    }
  ResetPayloadInformationResponse_(const ContainerAllocator& _alloc)
    : output(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::PayloadInformation_<ContainerAllocator>  _output_type;
  _output_type output;





  typedef boost::shared_ptr< ::kortex_driver::ResetPayloadInformationResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::ResetPayloadInformationResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ResetPayloadInformationResponse_

typedef ::kortex_driver::ResetPayloadInformationResponse_<std::allocator<void> > ResetPayloadInformationResponse;

typedef boost::shared_ptr< ::kortex_driver::ResetPayloadInformationResponse > ResetPayloadInformationResponsePtr;
typedef boost::shared_ptr< ::kortex_driver::ResetPayloadInformationResponse const> ResetPayloadInformationResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::ResetPayloadInformationResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::ResetPayloadInformationResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::ResetPayloadInformationResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::ResetPayloadInformationResponse_<ContainerAllocator2> & rhs)
{
  return lhs.output == rhs.output;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::ResetPayloadInformationResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::ResetPayloadInformationResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ResetPayloadInformationResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ResetPayloadInformationResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ResetPayloadInformationResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ResetPayloadInformationResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ResetPayloadInformationResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ResetPayloadInformationResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::ResetPayloadInformationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ee7b6d48bea0278cf84502742813a923";
  }

  static const char* value(const ::kortex_driver::ResetPayloadInformationResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xee7b6d48bea0278cULL;
  static const uint64_t static_value2 = 0xf84502742813a923ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::ResetPayloadInformationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/ResetPayloadInformationResponse";
  }

  static const char* value(const ::kortex_driver::ResetPayloadInformationResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::ResetPayloadInformationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "PayloadInformation output\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/PayloadInformation\n"
"\n"
"float32 payload_mass\n"
"ControlConfig_Position payload_mass_center\n"
"================================================================================\n"
"MSG: kortex_driver/ControlConfig_Position\n"
"\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
;
  }

  static const char* value(const ::kortex_driver::ResetPayloadInformationResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::ResetPayloadInformationResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.output);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ResetPayloadInformationResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::ResetPayloadInformationResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::ResetPayloadInformationResponse_<ContainerAllocator>& v)
  {
    s << indent << "output: ";
    s << std::endl;
    Printer< ::kortex_driver::PayloadInformation_<ContainerAllocator> >::stream(s, indent + "  ", v.output);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_RESETPAYLOADINFORMATIONRESPONSE_H
