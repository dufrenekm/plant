// Generated by gencpp from file kortex_driver/SetGPIOStateRequest.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_SETGPIOSTATEREQUEST_H
#define KORTEX_DRIVER_MESSAGE_SETGPIOSTATEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/GPIOState.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct SetGPIOStateRequest_
{
  typedef SetGPIOStateRequest_<ContainerAllocator> Type;

  SetGPIOStateRequest_()
    : input()  {
    }
  SetGPIOStateRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::GPIOState_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::kortex_driver::SetGPIOStateRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::SetGPIOStateRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetGPIOStateRequest_

typedef ::kortex_driver::SetGPIOStateRequest_<std::allocator<void> > SetGPIOStateRequest;

typedef boost::shared_ptr< ::kortex_driver::SetGPIOStateRequest > SetGPIOStateRequestPtr;
typedef boost::shared_ptr< ::kortex_driver::SetGPIOStateRequest const> SetGPIOStateRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::SetGPIOStateRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::SetGPIOStateRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::SetGPIOStateRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::SetGPIOStateRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::SetGPIOStateRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::SetGPIOStateRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SetGPIOStateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SetGPIOStateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SetGPIOStateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SetGPIOStateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SetGPIOStateRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SetGPIOStateRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::SetGPIOStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2ddab4d65dc8761a3ac287187cca148d";
  }

  static const char* value(const ::kortex_driver::SetGPIOStateRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2ddab4d65dc8761aULL;
  static const uint64_t static_value2 = 0x3ac287187cca148dULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::SetGPIOStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/SetGPIOStateRequest";
  }

  static const char* value(const ::kortex_driver::SetGPIOStateRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::SetGPIOStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "GPIOState input\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/GPIOState\n"
"\n"
"uint32 identifier\n"
"uint32 value\n"
;
  }

  static const char* value(const ::kortex_driver::SetGPIOStateRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::SetGPIOStateRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetGPIOStateRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::SetGPIOStateRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::SetGPIOStateRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::kortex_driver::GPIOState_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_SETGPIOSTATEREQUEST_H
