// Generated by gencpp from file kortex_driver/GetAllConnectedControllersResponse.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_GETALLCONNECTEDCONTROLLERSRESPONSE_H
#define KORTEX_DRIVER_MESSAGE_GETALLCONNECTEDCONTROLLERSRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/ControllerList.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct GetAllConnectedControllersResponse_
{
  typedef GetAllConnectedControllersResponse_<ContainerAllocator> Type;

  GetAllConnectedControllersResponse_()
    : output()  {
    }
  GetAllConnectedControllersResponse_(const ContainerAllocator& _alloc)
    : output(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::ControllerList_<ContainerAllocator>  _output_type;
  _output_type output;





  typedef boost::shared_ptr< ::kortex_driver::GetAllConnectedControllersResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::GetAllConnectedControllersResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetAllConnectedControllersResponse_

typedef ::kortex_driver::GetAllConnectedControllersResponse_<std::allocator<void> > GetAllConnectedControllersResponse;

typedef boost::shared_ptr< ::kortex_driver::GetAllConnectedControllersResponse > GetAllConnectedControllersResponsePtr;
typedef boost::shared_ptr< ::kortex_driver::GetAllConnectedControllersResponse const> GetAllConnectedControllersResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::GetAllConnectedControllersResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::GetAllConnectedControllersResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::GetAllConnectedControllersResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::GetAllConnectedControllersResponse_<ContainerAllocator2> & rhs)
{
  return lhs.output == rhs.output;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::GetAllConnectedControllersResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::GetAllConnectedControllersResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetAllConnectedControllersResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetAllConnectedControllersResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetAllConnectedControllersResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetAllConnectedControllersResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetAllConnectedControllersResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetAllConnectedControllersResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::GetAllConnectedControllersResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7ab7c9809056627e6425a8be21f8b0f3";
  }

  static const char* value(const ::kortex_driver::GetAllConnectedControllersResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7ab7c9809056627eULL;
  static const uint64_t static_value2 = 0x6425a8be21f8b0f3ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::GetAllConnectedControllersResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/GetAllConnectedControllersResponse";
  }

  static const char* value(const ::kortex_driver::GetAllConnectedControllersResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::GetAllConnectedControllersResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ControllerList output\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/ControllerList\n"
"\n"
"ControllerHandle[] handles\n"
"================================================================================\n"
"MSG: kortex_driver/ControllerHandle\n"
"\n"
"uint32 type\n"
"uint32 controller_identifier\n"
;
  }

  static const char* value(const ::kortex_driver::GetAllConnectedControllersResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::GetAllConnectedControllersResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.output);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetAllConnectedControllersResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::GetAllConnectedControllersResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::GetAllConnectedControllersResponse_<ContainerAllocator>& v)
  {
    s << indent << "output: ";
    s << std::endl;
    Printer< ::kortex_driver::ControllerList_<ContainerAllocator> >::stream(s, indent + "  ", v.output);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_GETALLCONNECTEDCONTROLLERSRESPONSE_H
