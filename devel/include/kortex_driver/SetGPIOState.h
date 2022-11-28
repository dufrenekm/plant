// Generated by gencpp from file kortex_driver/SetGPIOState.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_SETGPIOSTATE_H
#define KORTEX_DRIVER_MESSAGE_SETGPIOSTATE_H

#include <ros/service_traits.h>


#include <kortex_driver/SetGPIOStateRequest.h>
#include <kortex_driver/SetGPIOStateResponse.h>


namespace kortex_driver
{

struct SetGPIOState
{

typedef SetGPIOStateRequest Request;
typedef SetGPIOStateResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetGPIOState
} // namespace kortex_driver


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::kortex_driver::SetGPIOState > {
  static const char* value()
  {
    return "22e0e537e24f27ee3c77b3e42187e849";
  }

  static const char* value(const ::kortex_driver::SetGPIOState&) { return value(); }
};

template<>
struct DataType< ::kortex_driver::SetGPIOState > {
  static const char* value()
  {
    return "kortex_driver/SetGPIOState";
  }

  static const char* value(const ::kortex_driver::SetGPIOState&) { return value(); }
};


// service_traits::MD5Sum< ::kortex_driver::SetGPIOStateRequest> should match
// service_traits::MD5Sum< ::kortex_driver::SetGPIOState >
template<>
struct MD5Sum< ::kortex_driver::SetGPIOStateRequest>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::SetGPIOState >::value();
  }
  static const char* value(const ::kortex_driver::SetGPIOStateRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::SetGPIOStateRequest> should match
// service_traits::DataType< ::kortex_driver::SetGPIOState >
template<>
struct DataType< ::kortex_driver::SetGPIOStateRequest>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::SetGPIOState >::value();
  }
  static const char* value(const ::kortex_driver::SetGPIOStateRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::kortex_driver::SetGPIOStateResponse> should match
// service_traits::MD5Sum< ::kortex_driver::SetGPIOState >
template<>
struct MD5Sum< ::kortex_driver::SetGPIOStateResponse>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::SetGPIOState >::value();
  }
  static const char* value(const ::kortex_driver::SetGPIOStateResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::SetGPIOStateResponse> should match
// service_traits::DataType< ::kortex_driver::SetGPIOState >
template<>
struct DataType< ::kortex_driver::SetGPIOStateResponse>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::SetGPIOState >::value();
  }
  static const char* value(const ::kortex_driver::SetGPIOStateResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_SETGPIOSTATE_H
