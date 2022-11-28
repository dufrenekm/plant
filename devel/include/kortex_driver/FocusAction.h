// Generated by gencpp from file kortex_driver/FocusAction.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_FOCUSACTION_H
#define KORTEX_DRIVER_MESSAGE_FOCUSACTION_H


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
struct FocusAction_
{
  typedef FocusAction_<ContainerAllocator> Type;

  FocusAction_()
    {
    }
  FocusAction_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }





// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(FOCUSACTION_UNSPECIFIED)
  #undef FOCUSACTION_UNSPECIFIED
#endif
#if defined(_WIN32) && defined(FOCUSACTION_START_CONTINUOUS_FOCUS)
  #undef FOCUSACTION_START_CONTINUOUS_FOCUS
#endif
#if defined(_WIN32) && defined(FOCUSACTION_PAUSE_CONTINUOUS_FOCUS)
  #undef FOCUSACTION_PAUSE_CONTINUOUS_FOCUS
#endif
#if defined(_WIN32) && defined(FOCUSACTION_FOCUS_NOW)
  #undef FOCUSACTION_FOCUS_NOW
#endif
#if defined(_WIN32) && defined(FOCUSACTION_DISABLE_FOCUS)
  #undef FOCUSACTION_DISABLE_FOCUS
#endif
#if defined(_WIN32) && defined(FOCUSACTION_SET_FOCUS_POINT)
  #undef FOCUSACTION_SET_FOCUS_POINT
#endif
#if defined(_WIN32) && defined(FOCUSACTION_SET_MANUAL_FOCUS)
  #undef FOCUSACTION_SET_MANUAL_FOCUS
#endif

  enum {
    FOCUSACTION_UNSPECIFIED = 0u,
    FOCUSACTION_START_CONTINUOUS_FOCUS = 1u,
    FOCUSACTION_PAUSE_CONTINUOUS_FOCUS = 2u,
    FOCUSACTION_FOCUS_NOW = 3u,
    FOCUSACTION_DISABLE_FOCUS = 4u,
    FOCUSACTION_SET_FOCUS_POINT = 5u,
    FOCUSACTION_SET_MANUAL_FOCUS = 6u,
  };


  typedef boost::shared_ptr< ::kortex_driver::FocusAction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::FocusAction_<ContainerAllocator> const> ConstPtr;

}; // struct FocusAction_

typedef ::kortex_driver::FocusAction_<std::allocator<void> > FocusAction;

typedef boost::shared_ptr< ::kortex_driver::FocusAction > FocusActionPtr;
typedef boost::shared_ptr< ::kortex_driver::FocusAction const> FocusActionConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::FocusAction_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::FocusAction_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::FocusAction_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::FocusAction_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::FocusAction_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::FocusAction_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::FocusAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::FocusAction_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::FocusAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "16232e452a5de2238b9046f807acd748";
  }

  static const char* value(const ::kortex_driver::FocusAction_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x16232e452a5de223ULL;
  static const uint64_t static_value2 = 0x8b9046f807acd748ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::FocusAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/FocusAction";
  }

  static const char* value(const ::kortex_driver::FocusAction_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::FocusAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 FOCUSACTION_UNSPECIFIED = 0\n"
"\n"
"uint32 FOCUSACTION_START_CONTINUOUS_FOCUS = 1\n"
"\n"
"uint32 FOCUSACTION_PAUSE_CONTINUOUS_FOCUS = 2\n"
"\n"
"uint32 FOCUSACTION_FOCUS_NOW = 3\n"
"\n"
"uint32 FOCUSACTION_DISABLE_FOCUS = 4\n"
"\n"
"uint32 FOCUSACTION_SET_FOCUS_POINT = 5\n"
"\n"
"uint32 FOCUSACTION_SET_MANUAL_FOCUS = 6\n"
;
  }

  static const char* value(const ::kortex_driver::FocusAction_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::FocusAction_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FocusAction_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::FocusAction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::kortex_driver::FocusAction_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_FOCUSACTION_H
