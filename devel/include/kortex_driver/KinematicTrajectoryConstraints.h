// Generated by gencpp from file kortex_driver/KinematicTrajectoryConstraints.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_KINEMATICTRAJECTORYCONSTRAINTS_H
#define KORTEX_DRIVER_MESSAGE_KINEMATICTRAJECTORYCONSTRAINTS_H


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
struct KinematicTrajectoryConstraints_
{
  typedef KinematicTrajectoryConstraints_<ContainerAllocator> Type;

  KinematicTrajectoryConstraints_()
    : angular_velocities()
    , linear_velocity(0.0)
    , angular_velocity(0.0)  {
    }
  KinematicTrajectoryConstraints_(const ContainerAllocator& _alloc)
    : angular_velocities(_alloc)
    , linear_velocity(0.0)
    , angular_velocity(0.0)  {
  (void)_alloc;
    }



   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _angular_velocities_type;
  _angular_velocities_type angular_velocities;

   typedef float _linear_velocity_type;
  _linear_velocity_type linear_velocity;

   typedef float _angular_velocity_type;
  _angular_velocity_type angular_velocity;





  typedef boost::shared_ptr< ::kortex_driver::KinematicTrajectoryConstraints_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::KinematicTrajectoryConstraints_<ContainerAllocator> const> ConstPtr;

}; // struct KinematicTrajectoryConstraints_

typedef ::kortex_driver::KinematicTrajectoryConstraints_<std::allocator<void> > KinematicTrajectoryConstraints;

typedef boost::shared_ptr< ::kortex_driver::KinematicTrajectoryConstraints > KinematicTrajectoryConstraintsPtr;
typedef boost::shared_ptr< ::kortex_driver::KinematicTrajectoryConstraints const> KinematicTrajectoryConstraintsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::KinematicTrajectoryConstraints_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::KinematicTrajectoryConstraints_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::KinematicTrajectoryConstraints_<ContainerAllocator1> & lhs, const ::kortex_driver::KinematicTrajectoryConstraints_<ContainerAllocator2> & rhs)
{
  return lhs.angular_velocities == rhs.angular_velocities &&
    lhs.linear_velocity == rhs.linear_velocity &&
    lhs.angular_velocity == rhs.angular_velocity;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::KinematicTrajectoryConstraints_<ContainerAllocator1> & lhs, const ::kortex_driver::KinematicTrajectoryConstraints_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::KinematicTrajectoryConstraints_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::KinematicTrajectoryConstraints_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::KinematicTrajectoryConstraints_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::KinematicTrajectoryConstraints_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::KinematicTrajectoryConstraints_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::KinematicTrajectoryConstraints_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::KinematicTrajectoryConstraints_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4f0c906b29207ad54df6adc023e55732";
  }

  static const char* value(const ::kortex_driver::KinematicTrajectoryConstraints_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4f0c906b29207ad5ULL;
  static const uint64_t static_value2 = 0x4df6adc023e55732ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::KinematicTrajectoryConstraints_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/KinematicTrajectoryConstraints";
  }

  static const char* value(const ::kortex_driver::KinematicTrajectoryConstraints_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::KinematicTrajectoryConstraints_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"float32[] angular_velocities\n"
"float32 linear_velocity\n"
"float32 angular_velocity\n"
;
  }

  static const char* value(const ::kortex_driver::KinematicTrajectoryConstraints_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::KinematicTrajectoryConstraints_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.angular_velocities);
      stream.next(m.linear_velocity);
      stream.next(m.angular_velocity);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct KinematicTrajectoryConstraints_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::KinematicTrajectoryConstraints_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::KinematicTrajectoryConstraints_<ContainerAllocator>& v)
  {
    s << indent << "angular_velocities[]" << std::endl;
    for (size_t i = 0; i < v.angular_velocities.size(); ++i)
    {
      s << indent << "  angular_velocities[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.angular_velocities[i]);
    }
    s << indent << "linear_velocity: ";
    Printer<float>::stream(s, indent + "  ", v.linear_velocity);
    s << indent << "angular_velocity: ";
    Printer<float>::stream(s, indent + "  ", v.angular_velocity);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_KINEMATICTRAJECTORYCONSTRAINTS_H
