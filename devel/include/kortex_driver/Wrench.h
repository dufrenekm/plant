// Generated by gencpp from file kortex_driver/Wrench.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_WRENCH_H
#define KORTEX_DRIVER_MESSAGE_WRENCH_H


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
struct Wrench_
{
  typedef Wrench_<ContainerAllocator> Type;

  Wrench_()
    : force_x(0.0)
    , force_y(0.0)
    , force_z(0.0)
    , torque_x(0.0)
    , torque_y(0.0)
    , torque_z(0.0)  {
    }
  Wrench_(const ContainerAllocator& _alloc)
    : force_x(0.0)
    , force_y(0.0)
    , force_z(0.0)
    , torque_x(0.0)
    , torque_y(0.0)
    , torque_z(0.0)  {
  (void)_alloc;
    }



   typedef float _force_x_type;
  _force_x_type force_x;

   typedef float _force_y_type;
  _force_y_type force_y;

   typedef float _force_z_type;
  _force_z_type force_z;

   typedef float _torque_x_type;
  _torque_x_type torque_x;

   typedef float _torque_y_type;
  _torque_y_type torque_y;

   typedef float _torque_z_type;
  _torque_z_type torque_z;





  typedef boost::shared_ptr< ::kortex_driver::Wrench_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::Wrench_<ContainerAllocator> const> ConstPtr;

}; // struct Wrench_

typedef ::kortex_driver::Wrench_<std::allocator<void> > Wrench;

typedef boost::shared_ptr< ::kortex_driver::Wrench > WrenchPtr;
typedef boost::shared_ptr< ::kortex_driver::Wrench const> WrenchConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::Wrench_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::Wrench_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::Wrench_<ContainerAllocator1> & lhs, const ::kortex_driver::Wrench_<ContainerAllocator2> & rhs)
{
  return lhs.force_x == rhs.force_x &&
    lhs.force_y == rhs.force_y &&
    lhs.force_z == rhs.force_z &&
    lhs.torque_x == rhs.torque_x &&
    lhs.torque_y == rhs.torque_y &&
    lhs.torque_z == rhs.torque_z;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::Wrench_<ContainerAllocator1> & lhs, const ::kortex_driver::Wrench_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::Wrench_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::Wrench_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::Wrench_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::Wrench_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::Wrench_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::Wrench_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::Wrench_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b01974557c40b776cdb7003057779989";
  }

  static const char* value(const ::kortex_driver::Wrench_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb01974557c40b776ULL;
  static const uint64_t static_value2 = 0xcdb7003057779989ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::Wrench_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/Wrench";
  }

  static const char* value(const ::kortex_driver::Wrench_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::Wrench_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"float32 force_x\n"
"float32 force_y\n"
"float32 force_z\n"
"float32 torque_x\n"
"float32 torque_y\n"
"float32 torque_z\n"
;
  }

  static const char* value(const ::kortex_driver::Wrench_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::Wrench_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.force_x);
      stream.next(m.force_y);
      stream.next(m.force_z);
      stream.next(m.torque_x);
      stream.next(m.torque_y);
      stream.next(m.torque_z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Wrench_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::Wrench_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::Wrench_<ContainerAllocator>& v)
  {
    s << indent << "force_x: ";
    Printer<float>::stream(s, indent + "  ", v.force_x);
    s << indent << "force_y: ";
    Printer<float>::stream(s, indent + "  ", v.force_y);
    s << indent << "force_z: ";
    Printer<float>::stream(s, indent + "  ", v.force_z);
    s << indent << "torque_x: ";
    Printer<float>::stream(s, indent + "  ", v.torque_x);
    s << indent << "torque_y: ";
    Printer<float>::stream(s, indent + "  ", v.torque_y);
    s << indent << "torque_z: ";
    Printer<float>::stream(s, indent + "  ", v.torque_z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_WRENCH_H
