// Generated by gencpp from file kortex_driver/ExecuteCalibration.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_EXECUTECALIBRATION_H
#define KORTEX_DRIVER_MESSAGE_EXECUTECALIBRATION_H

#include <ros/service_traits.h>


#include <kortex_driver/ExecuteCalibrationRequest.h>
#include <kortex_driver/ExecuteCalibrationResponse.h>


namespace kortex_driver
{

struct ExecuteCalibration
{

typedef ExecuteCalibrationRequest Request;
typedef ExecuteCalibrationResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ExecuteCalibration
} // namespace kortex_driver


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::kortex_driver::ExecuteCalibration > {
  static const char* value()
  {
    return "8aabe5c823e6d1cd3d6eddd247265dae";
  }

  static const char* value(const ::kortex_driver::ExecuteCalibration&) { return value(); }
};

template<>
struct DataType< ::kortex_driver::ExecuteCalibration > {
  static const char* value()
  {
    return "kortex_driver/ExecuteCalibration";
  }

  static const char* value(const ::kortex_driver::ExecuteCalibration&) { return value(); }
};


// service_traits::MD5Sum< ::kortex_driver::ExecuteCalibrationRequest> should match
// service_traits::MD5Sum< ::kortex_driver::ExecuteCalibration >
template<>
struct MD5Sum< ::kortex_driver::ExecuteCalibrationRequest>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::ExecuteCalibration >::value();
  }
  static const char* value(const ::kortex_driver::ExecuteCalibrationRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::ExecuteCalibrationRequest> should match
// service_traits::DataType< ::kortex_driver::ExecuteCalibration >
template<>
struct DataType< ::kortex_driver::ExecuteCalibrationRequest>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::ExecuteCalibration >::value();
  }
  static const char* value(const ::kortex_driver::ExecuteCalibrationRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::kortex_driver::ExecuteCalibrationResponse> should match
// service_traits::MD5Sum< ::kortex_driver::ExecuteCalibration >
template<>
struct MD5Sum< ::kortex_driver::ExecuteCalibrationResponse>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::ExecuteCalibration >::value();
  }
  static const char* value(const ::kortex_driver::ExecuteCalibrationResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::ExecuteCalibrationResponse> should match
// service_traits::DataType< ::kortex_driver::ExecuteCalibration >
template<>
struct DataType< ::kortex_driver::ExecuteCalibrationResponse>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::ExecuteCalibration >::value();
  }
  static const char* value(const ::kortex_driver::ExecuteCalibrationResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_EXECUTECALIBRATION_H
