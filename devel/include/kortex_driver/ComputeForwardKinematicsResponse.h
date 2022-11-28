// Generated by gencpp from file kortex_driver/ComputeForwardKinematicsResponse.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_COMPUTEFORWARDKINEMATICSRESPONSE_H
#define KORTEX_DRIVER_MESSAGE_COMPUTEFORWARDKINEMATICSRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/Pose.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct ComputeForwardKinematicsResponse_
{
  typedef ComputeForwardKinematicsResponse_<ContainerAllocator> Type;

  ComputeForwardKinematicsResponse_()
    : output()  {
    }
  ComputeForwardKinematicsResponse_(const ContainerAllocator& _alloc)
    : output(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::Pose_<ContainerAllocator>  _output_type;
  _output_type output;





  typedef boost::shared_ptr< ::kortex_driver::ComputeForwardKinematicsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::ComputeForwardKinematicsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ComputeForwardKinematicsResponse_

typedef ::kortex_driver::ComputeForwardKinematicsResponse_<std::allocator<void> > ComputeForwardKinematicsResponse;

typedef boost::shared_ptr< ::kortex_driver::ComputeForwardKinematicsResponse > ComputeForwardKinematicsResponsePtr;
typedef boost::shared_ptr< ::kortex_driver::ComputeForwardKinematicsResponse const> ComputeForwardKinematicsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::ComputeForwardKinematicsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::ComputeForwardKinematicsResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::ComputeForwardKinematicsResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::ComputeForwardKinematicsResponse_<ContainerAllocator2> & rhs)
{
  return lhs.output == rhs.output;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::ComputeForwardKinematicsResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::ComputeForwardKinematicsResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ComputeForwardKinematicsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ComputeForwardKinematicsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ComputeForwardKinematicsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ComputeForwardKinematicsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ComputeForwardKinematicsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ComputeForwardKinematicsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::ComputeForwardKinematicsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "688d02aea2316337d5932f2510ac9325";
  }

  static const char* value(const ::kortex_driver::ComputeForwardKinematicsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x688d02aea2316337ULL;
  static const uint64_t static_value2 = 0xd5932f2510ac9325ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::ComputeForwardKinematicsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/ComputeForwardKinematicsResponse";
  }

  static const char* value(const ::kortex_driver::ComputeForwardKinematicsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::ComputeForwardKinematicsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Pose output\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/Pose\n"
"\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
"float32 theta_x\n"
"float32 theta_y\n"
"float32 theta_z\n"
;
  }

  static const char* value(const ::kortex_driver::ComputeForwardKinematicsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::ComputeForwardKinematicsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.output);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ComputeForwardKinematicsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::ComputeForwardKinematicsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::ComputeForwardKinematicsResponse_<ContainerAllocator>& v)
  {
    s << indent << "output: ";
    s << std::endl;
    Printer< ::kortex_driver::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.output);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_COMPUTEFORWARDKINEMATICSRESPONSE_H
