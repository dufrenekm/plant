// Generated by gencpp from file kortex_driver/DeviceType.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_DEVICETYPE_H
#define KORTEX_DRIVER_MESSAGE_DEVICETYPE_H


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
struct DeviceType_
{
  typedef DeviceType_<ContainerAllocator> Type;

  DeviceType_()
    : device_type(0)  {
    }
  DeviceType_(const ContainerAllocator& _alloc)
    : device_type(0)  {
  (void)_alloc;
    }



   typedef uint32_t _device_type_type;
  _device_type_type device_type;





  typedef boost::shared_ptr< ::kortex_driver::DeviceType_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::DeviceType_<ContainerAllocator> const> ConstPtr;

}; // struct DeviceType_

typedef ::kortex_driver::DeviceType_<std::allocator<void> > DeviceType;

typedef boost::shared_ptr< ::kortex_driver::DeviceType > DeviceTypePtr;
typedef boost::shared_ptr< ::kortex_driver::DeviceType const> DeviceTypeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::DeviceType_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::DeviceType_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::DeviceType_<ContainerAllocator1> & lhs, const ::kortex_driver::DeviceType_<ContainerAllocator2> & rhs)
{
  return lhs.device_type == rhs.device_type;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::DeviceType_<ContainerAllocator1> & lhs, const ::kortex_driver::DeviceType_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::DeviceType_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::DeviceType_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::DeviceType_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::DeviceType_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::DeviceType_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::DeviceType_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::DeviceType_<ContainerAllocator> >
{
  static const char* value()
  {
    return "03c69ac8f4cbd0c35678776a27f8d84a";
  }

  static const char* value(const ::kortex_driver::DeviceType_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x03c69ac8f4cbd0c3ULL;
  static const uint64_t static_value2 = 0x5678776a27f8d84aULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::DeviceType_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/DeviceType";
  }

  static const char* value(const ::kortex_driver::DeviceType_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::DeviceType_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 device_type\n"
;
  }

  static const char* value(const ::kortex_driver::DeviceType_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::DeviceType_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.device_type);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DeviceType_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::DeviceType_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::DeviceType_<ContainerAllocator>& v)
  {
    s << indent << "device_type: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.device_type);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_DEVICETYPE_H
