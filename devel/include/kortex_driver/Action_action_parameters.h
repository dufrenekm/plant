// Generated by gencpp from file kortex_driver/Action_action_parameters.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_ACTION_ACTION_PARAMETERS_H
#define KORTEX_DRIVER_MESSAGE_ACTION_ACTION_PARAMETERS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/TwistCommand.h>
#include <kortex_driver/WrenchCommand.h>
#include <kortex_driver/Base_JointSpeeds.h>
#include <kortex_driver/ConstrainedPose.h>
#include <kortex_driver/ConstrainedJointAngles.h>
#include <kortex_driver/Snapshot.h>
#include <kortex_driver/SwitchControlMapping.h>
#include <kortex_driver/ChangeTwist.h>
#include <kortex_driver/ChangeJointSpeeds.h>
#include <kortex_driver/ChangeWrench.h>
#include <kortex_driver/EmergencyStop.h>
#include <kortex_driver/Faults.h>
#include <kortex_driver/Delay.h>
#include <kortex_driver/ActionHandle.h>
#include <kortex_driver/GripperCommand.h>
#include <kortex_driver/GpioCommand.h>
#include <kortex_driver/Base_Stop.h>
#include <kortex_driver/PreComputedJointTrajectory.h>
#include <kortex_driver/SequenceHandle.h>
#include <kortex_driver/WaypointList.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct Action_action_parameters_
{
  typedef Action_action_parameters_<ContainerAllocator> Type;

  Action_action_parameters_()
    : send_twist_command()
    , send_wrench_command()
    , send_joint_speeds()
    , reach_pose()
    , reach_joint_angles()
    , toggle_admittance_mode()
    , snapshot()
    , switch_control_mapping()
    , navigate_joints()
    , navigate_mappings()
    , change_twist()
    , change_joint_speeds()
    , change_wrench()
    , apply_emergency_stop()
    , clear_faults()
    , delay()
    , execute_action()
    , send_gripper_command()
    , send_gpio_command()
    , stop_action()
    , play_pre_computed_trajectory()
    , execute_sequence()
    , execute_waypoint_list()  {
    }
  Action_action_parameters_(const ContainerAllocator& _alloc)
    : send_twist_command(_alloc)
    , send_wrench_command(_alloc)
    , send_joint_speeds(_alloc)
    , reach_pose(_alloc)
    , reach_joint_angles(_alloc)
    , toggle_admittance_mode(_alloc)
    , snapshot(_alloc)
    , switch_control_mapping(_alloc)
    , navigate_joints(_alloc)
    , navigate_mappings(_alloc)
    , change_twist(_alloc)
    , change_joint_speeds(_alloc)
    , change_wrench(_alloc)
    , apply_emergency_stop(_alloc)
    , clear_faults(_alloc)
    , delay(_alloc)
    , execute_action(_alloc)
    , send_gripper_command(_alloc)
    , send_gpio_command(_alloc)
    , stop_action(_alloc)
    , play_pre_computed_trajectory(_alloc)
    , execute_sequence(_alloc)
    , execute_waypoint_list(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::kortex_driver::TwistCommand_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::kortex_driver::TwistCommand_<ContainerAllocator> >::other >  _send_twist_command_type;
  _send_twist_command_type send_twist_command;

   typedef std::vector< ::kortex_driver::WrenchCommand_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::kortex_driver::WrenchCommand_<ContainerAllocator> >::other >  _send_wrench_command_type;
  _send_wrench_command_type send_wrench_command;

   typedef std::vector< ::kortex_driver::Base_JointSpeeds_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::kortex_driver::Base_JointSpeeds_<ContainerAllocator> >::other >  _send_joint_speeds_type;
  _send_joint_speeds_type send_joint_speeds;

   typedef std::vector< ::kortex_driver::ConstrainedPose_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::kortex_driver::ConstrainedPose_<ContainerAllocator> >::other >  _reach_pose_type;
  _reach_pose_type reach_pose;

   typedef std::vector< ::kortex_driver::ConstrainedJointAngles_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::kortex_driver::ConstrainedJointAngles_<ContainerAllocator> >::other >  _reach_joint_angles_type;
  _reach_joint_angles_type reach_joint_angles;

   typedef std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other >  _toggle_admittance_mode_type;
  _toggle_admittance_mode_type toggle_admittance_mode;

   typedef std::vector< ::kortex_driver::Snapshot_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::kortex_driver::Snapshot_<ContainerAllocator> >::other >  _snapshot_type;
  _snapshot_type snapshot;

   typedef std::vector< ::kortex_driver::SwitchControlMapping_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::kortex_driver::SwitchControlMapping_<ContainerAllocator> >::other >  _switch_control_mapping_type;
  _switch_control_mapping_type switch_control_mapping;

   typedef std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other >  _navigate_joints_type;
  _navigate_joints_type navigate_joints;

   typedef std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other >  _navigate_mappings_type;
  _navigate_mappings_type navigate_mappings;

   typedef std::vector< ::kortex_driver::ChangeTwist_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::kortex_driver::ChangeTwist_<ContainerAllocator> >::other >  _change_twist_type;
  _change_twist_type change_twist;

   typedef std::vector< ::kortex_driver::ChangeJointSpeeds_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::kortex_driver::ChangeJointSpeeds_<ContainerAllocator> >::other >  _change_joint_speeds_type;
  _change_joint_speeds_type change_joint_speeds;

   typedef std::vector< ::kortex_driver::ChangeWrench_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::kortex_driver::ChangeWrench_<ContainerAllocator> >::other >  _change_wrench_type;
  _change_wrench_type change_wrench;

   typedef std::vector< ::kortex_driver::EmergencyStop_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::kortex_driver::EmergencyStop_<ContainerAllocator> >::other >  _apply_emergency_stop_type;
  _apply_emergency_stop_type apply_emergency_stop;

   typedef std::vector< ::kortex_driver::Faults_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::kortex_driver::Faults_<ContainerAllocator> >::other >  _clear_faults_type;
  _clear_faults_type clear_faults;

   typedef std::vector< ::kortex_driver::Delay_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::kortex_driver::Delay_<ContainerAllocator> >::other >  _delay_type;
  _delay_type delay;

   typedef std::vector< ::kortex_driver::ActionHandle_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::kortex_driver::ActionHandle_<ContainerAllocator> >::other >  _execute_action_type;
  _execute_action_type execute_action;

   typedef std::vector< ::kortex_driver::GripperCommand_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::kortex_driver::GripperCommand_<ContainerAllocator> >::other >  _send_gripper_command_type;
  _send_gripper_command_type send_gripper_command;

   typedef std::vector< ::kortex_driver::GpioCommand_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::kortex_driver::GpioCommand_<ContainerAllocator> >::other >  _send_gpio_command_type;
  _send_gpio_command_type send_gpio_command;

   typedef std::vector< ::kortex_driver::Base_Stop_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::kortex_driver::Base_Stop_<ContainerAllocator> >::other >  _stop_action_type;
  _stop_action_type stop_action;

   typedef std::vector< ::kortex_driver::PreComputedJointTrajectory_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::kortex_driver::PreComputedJointTrajectory_<ContainerAllocator> >::other >  _play_pre_computed_trajectory_type;
  _play_pre_computed_trajectory_type play_pre_computed_trajectory;

   typedef std::vector< ::kortex_driver::SequenceHandle_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::kortex_driver::SequenceHandle_<ContainerAllocator> >::other >  _execute_sequence_type;
  _execute_sequence_type execute_sequence;

   typedef std::vector< ::kortex_driver::WaypointList_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::kortex_driver::WaypointList_<ContainerAllocator> >::other >  _execute_waypoint_list_type;
  _execute_waypoint_list_type execute_waypoint_list;





  typedef boost::shared_ptr< ::kortex_driver::Action_action_parameters_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::Action_action_parameters_<ContainerAllocator> const> ConstPtr;

}; // struct Action_action_parameters_

typedef ::kortex_driver::Action_action_parameters_<std::allocator<void> > Action_action_parameters;

typedef boost::shared_ptr< ::kortex_driver::Action_action_parameters > Action_action_parametersPtr;
typedef boost::shared_ptr< ::kortex_driver::Action_action_parameters const> Action_action_parametersConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::Action_action_parameters_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::Action_action_parameters_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::Action_action_parameters_<ContainerAllocator1> & lhs, const ::kortex_driver::Action_action_parameters_<ContainerAllocator2> & rhs)
{
  return lhs.send_twist_command == rhs.send_twist_command &&
    lhs.send_wrench_command == rhs.send_wrench_command &&
    lhs.send_joint_speeds == rhs.send_joint_speeds &&
    lhs.reach_pose == rhs.reach_pose &&
    lhs.reach_joint_angles == rhs.reach_joint_angles &&
    lhs.toggle_admittance_mode == rhs.toggle_admittance_mode &&
    lhs.snapshot == rhs.snapshot &&
    lhs.switch_control_mapping == rhs.switch_control_mapping &&
    lhs.navigate_joints == rhs.navigate_joints &&
    lhs.navigate_mappings == rhs.navigate_mappings &&
    lhs.change_twist == rhs.change_twist &&
    lhs.change_joint_speeds == rhs.change_joint_speeds &&
    lhs.change_wrench == rhs.change_wrench &&
    lhs.apply_emergency_stop == rhs.apply_emergency_stop &&
    lhs.clear_faults == rhs.clear_faults &&
    lhs.delay == rhs.delay &&
    lhs.execute_action == rhs.execute_action &&
    lhs.send_gripper_command == rhs.send_gripper_command &&
    lhs.send_gpio_command == rhs.send_gpio_command &&
    lhs.stop_action == rhs.stop_action &&
    lhs.play_pre_computed_trajectory == rhs.play_pre_computed_trajectory &&
    lhs.execute_sequence == rhs.execute_sequence &&
    lhs.execute_waypoint_list == rhs.execute_waypoint_list;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::Action_action_parameters_<ContainerAllocator1> & lhs, const ::kortex_driver::Action_action_parameters_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::Action_action_parameters_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::Action_action_parameters_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::Action_action_parameters_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::Action_action_parameters_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::Action_action_parameters_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::Action_action_parameters_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::Action_action_parameters_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3d6115bf166bbc775637a0580d1e6e6c";
  }

  static const char* value(const ::kortex_driver::Action_action_parameters_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3d6115bf166bbc77ULL;
  static const uint64_t static_value2 = 0x5637a0580d1e6e6cULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::Action_action_parameters_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/Action_action_parameters";
  }

  static const char* value(const ::kortex_driver::Action_action_parameters_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::Action_action_parameters_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"TwistCommand[] send_twist_command\n"
"WrenchCommand[] send_wrench_command\n"
"Base_JointSpeeds[] send_joint_speeds\n"
"ConstrainedPose[] reach_pose\n"
"ConstrainedJointAngles[] reach_joint_angles\n"
"uint32[] toggle_admittance_mode\n"
"Snapshot[] snapshot\n"
"SwitchControlMapping[] switch_control_mapping\n"
"uint32[] navigate_joints\n"
"uint32[] navigate_mappings\n"
"ChangeTwist[] change_twist\n"
"ChangeJointSpeeds[] change_joint_speeds\n"
"ChangeWrench[] change_wrench\n"
"EmergencyStop[] apply_emergency_stop\n"
"Faults[] clear_faults\n"
"Delay[] delay\n"
"ActionHandle[] execute_action\n"
"GripperCommand[] send_gripper_command\n"
"GpioCommand[] send_gpio_command\n"
"Base_Stop[] stop_action\n"
"PreComputedJointTrajectory[] play_pre_computed_trajectory\n"
"SequenceHandle[] execute_sequence\n"
"WaypointList[] execute_waypoint_list\n"
"================================================================================\n"
"MSG: kortex_driver/TwistCommand\n"
"\n"
"uint32 reference_frame\n"
"Twist twist\n"
"uint32 duration\n"
"================================================================================\n"
"MSG: kortex_driver/Twist\n"
"\n"
"float32 linear_x\n"
"float32 linear_y\n"
"float32 linear_z\n"
"float32 angular_x\n"
"float32 angular_y\n"
"float32 angular_z\n"
"================================================================================\n"
"MSG: kortex_driver/WrenchCommand\n"
"\n"
"uint32 reference_frame\n"
"uint32 mode\n"
"Wrench wrench\n"
"uint32 duration\n"
"================================================================================\n"
"MSG: kortex_driver/Wrench\n"
"\n"
"float32 force_x\n"
"float32 force_y\n"
"float32 force_z\n"
"float32 torque_x\n"
"float32 torque_y\n"
"float32 torque_z\n"
"================================================================================\n"
"MSG: kortex_driver/Base_JointSpeeds\n"
"\n"
"JointSpeed[] joint_speeds\n"
"uint32 duration\n"
"================================================================================\n"
"MSG: kortex_driver/JointSpeed\n"
"\n"
"uint32 joint_identifier\n"
"float32 value\n"
"uint32 duration\n"
"================================================================================\n"
"MSG: kortex_driver/ConstrainedPose\n"
"\n"
"Pose target_pose\n"
"CartesianTrajectoryConstraint constraint\n"
"================================================================================\n"
"MSG: kortex_driver/Pose\n"
"\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
"float32 theta_x\n"
"float32 theta_y\n"
"float32 theta_z\n"
"================================================================================\n"
"MSG: kortex_driver/CartesianTrajectoryConstraint\n"
"\n"
"CartesianTrajectoryConstraint_type oneof_type\n"
"================================================================================\n"
"MSG: kortex_driver/CartesianTrajectoryConstraint_type\n"
"\n"
"CartesianSpeed[] speed\n"
"uint32[] duration\n"
"================================================================================\n"
"MSG: kortex_driver/CartesianSpeed\n"
"\n"
"float32 translation\n"
"float32 orientation\n"
"================================================================================\n"
"MSG: kortex_driver/ConstrainedJointAngles\n"
"\n"
"JointAngles joint_angles\n"
"JointTrajectoryConstraint constraint\n"
"================================================================================\n"
"MSG: kortex_driver/JointAngles\n"
"\n"
"JointAngle[] joint_angles\n"
"================================================================================\n"
"MSG: kortex_driver/JointAngle\n"
"\n"
"uint32 joint_identifier\n"
"float32 value\n"
"================================================================================\n"
"MSG: kortex_driver/JointTrajectoryConstraint\n"
"\n"
"uint32 type\n"
"float32 value\n"
"================================================================================\n"
"MSG: kortex_driver/Snapshot\n"
"\n"
"uint32 snapshot_type\n"
"================================================================================\n"
"MSG: kortex_driver/SwitchControlMapping\n"
"\n"
"uint32 controller_identifier\n"
"MapGroupHandle map_group_handle\n"
"MapHandle map_handle\n"
"================================================================================\n"
"MSG: kortex_driver/MapGroupHandle\n"
"\n"
"uint32 identifier\n"
"uint32 permission\n"
"================================================================================\n"
"MSG: kortex_driver/MapHandle\n"
"\n"
"uint32 identifier\n"
"uint32 permission\n"
"================================================================================\n"
"MSG: kortex_driver/ChangeTwist\n"
"\n"
"float32 linear\n"
"float32 angular\n"
"================================================================================\n"
"MSG: kortex_driver/ChangeJointSpeeds\n"
"\n"
"Base_JointSpeeds joint_speeds\n"
"================================================================================\n"
"MSG: kortex_driver/ChangeWrench\n"
"\n"
"float32 force\n"
"float32 torque\n"
"================================================================================\n"
"MSG: kortex_driver/EmergencyStop\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/Faults\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/Delay\n"
"\n"
"uint32 duration\n"
"================================================================================\n"
"MSG: kortex_driver/ActionHandle\n"
"\n"
"uint32 identifier\n"
"uint32 action_type\n"
"uint32 permission\n"
"================================================================================\n"
"MSG: kortex_driver/GripperCommand\n"
"\n"
"uint32 mode\n"
"Gripper gripper\n"
"uint32 duration\n"
"================================================================================\n"
"MSG: kortex_driver/Gripper\n"
"\n"
"Finger[] finger\n"
"================================================================================\n"
"MSG: kortex_driver/Finger\n"
"\n"
"uint32 finger_identifier\n"
"float32 value\n"
"================================================================================\n"
"MSG: kortex_driver/GpioCommand\n"
"\n"
"uint32 port_identifier\n"
"uint32 pin_identifier\n"
"uint32 action\n"
"uint32 period\n"
"================================================================================\n"
"MSG: kortex_driver/Base_Stop\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/PreComputedJointTrajectory\n"
"\n"
"uint32 mode\n"
"PreComputedJointTrajectoryElement[] trajectory_elements\n"
"================================================================================\n"
"MSG: kortex_driver/PreComputedJointTrajectoryElement\n"
"\n"
"float32[] joint_angles\n"
"float32[] joint_speeds\n"
"float32[] joint_accelerations\n"
"float32 time_from_start\n"
"================================================================================\n"
"MSG: kortex_driver/SequenceHandle\n"
"\n"
"uint32 identifier\n"
"uint32 permission\n"
"================================================================================\n"
"MSG: kortex_driver/WaypointList\n"
"\n"
"Waypoint[] waypoints\n"
"float32 duration\n"
"bool use_optimal_blending\n"
"================================================================================\n"
"MSG: kortex_driver/Waypoint\n"
"\n"
"string name\n"
"Waypoint_type_of_waypoint oneof_type_of_waypoint\n"
"================================================================================\n"
"MSG: kortex_driver/Waypoint_type_of_waypoint\n"
"\n"
"AngularWaypoint[] angular_waypoint\n"
"CartesianWaypoint[] cartesian_waypoint\n"
"================================================================================\n"
"MSG: kortex_driver/AngularWaypoint\n"
"\n"
"float32[] angles\n"
"float32[] maximum_velocities\n"
"float32 duration\n"
"================================================================================\n"
"MSG: kortex_driver/CartesianWaypoint\n"
"\n"
"Pose pose\n"
"uint32 reference_frame\n"
"float32 maximum_linear_velocity\n"
"float32 maximum_angular_velocity\n"
"float32 blending_radius\n"
;
  }

  static const char* value(const ::kortex_driver::Action_action_parameters_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::Action_action_parameters_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.send_twist_command);
      stream.next(m.send_wrench_command);
      stream.next(m.send_joint_speeds);
      stream.next(m.reach_pose);
      stream.next(m.reach_joint_angles);
      stream.next(m.toggle_admittance_mode);
      stream.next(m.snapshot);
      stream.next(m.switch_control_mapping);
      stream.next(m.navigate_joints);
      stream.next(m.navigate_mappings);
      stream.next(m.change_twist);
      stream.next(m.change_joint_speeds);
      stream.next(m.change_wrench);
      stream.next(m.apply_emergency_stop);
      stream.next(m.clear_faults);
      stream.next(m.delay);
      stream.next(m.execute_action);
      stream.next(m.send_gripper_command);
      stream.next(m.send_gpio_command);
      stream.next(m.stop_action);
      stream.next(m.play_pre_computed_trajectory);
      stream.next(m.execute_sequence);
      stream.next(m.execute_waypoint_list);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Action_action_parameters_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::Action_action_parameters_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::Action_action_parameters_<ContainerAllocator>& v)
  {
    s << indent << "send_twist_command[]" << std::endl;
    for (size_t i = 0; i < v.send_twist_command.size(); ++i)
    {
      s << indent << "  send_twist_command[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kortex_driver::TwistCommand_<ContainerAllocator> >::stream(s, indent + "    ", v.send_twist_command[i]);
    }
    s << indent << "send_wrench_command[]" << std::endl;
    for (size_t i = 0; i < v.send_wrench_command.size(); ++i)
    {
      s << indent << "  send_wrench_command[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kortex_driver::WrenchCommand_<ContainerAllocator> >::stream(s, indent + "    ", v.send_wrench_command[i]);
    }
    s << indent << "send_joint_speeds[]" << std::endl;
    for (size_t i = 0; i < v.send_joint_speeds.size(); ++i)
    {
      s << indent << "  send_joint_speeds[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kortex_driver::Base_JointSpeeds_<ContainerAllocator> >::stream(s, indent + "    ", v.send_joint_speeds[i]);
    }
    s << indent << "reach_pose[]" << std::endl;
    for (size_t i = 0; i < v.reach_pose.size(); ++i)
    {
      s << indent << "  reach_pose[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kortex_driver::ConstrainedPose_<ContainerAllocator> >::stream(s, indent + "    ", v.reach_pose[i]);
    }
    s << indent << "reach_joint_angles[]" << std::endl;
    for (size_t i = 0; i < v.reach_joint_angles.size(); ++i)
    {
      s << indent << "  reach_joint_angles[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kortex_driver::ConstrainedJointAngles_<ContainerAllocator> >::stream(s, indent + "    ", v.reach_joint_angles[i]);
    }
    s << indent << "toggle_admittance_mode[]" << std::endl;
    for (size_t i = 0; i < v.toggle_admittance_mode.size(); ++i)
    {
      s << indent << "  toggle_admittance_mode[" << i << "]: ";
      Printer<uint32_t>::stream(s, indent + "  ", v.toggle_admittance_mode[i]);
    }
    s << indent << "snapshot[]" << std::endl;
    for (size_t i = 0; i < v.snapshot.size(); ++i)
    {
      s << indent << "  snapshot[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kortex_driver::Snapshot_<ContainerAllocator> >::stream(s, indent + "    ", v.snapshot[i]);
    }
    s << indent << "switch_control_mapping[]" << std::endl;
    for (size_t i = 0; i < v.switch_control_mapping.size(); ++i)
    {
      s << indent << "  switch_control_mapping[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kortex_driver::SwitchControlMapping_<ContainerAllocator> >::stream(s, indent + "    ", v.switch_control_mapping[i]);
    }
    s << indent << "navigate_joints[]" << std::endl;
    for (size_t i = 0; i < v.navigate_joints.size(); ++i)
    {
      s << indent << "  navigate_joints[" << i << "]: ";
      Printer<uint32_t>::stream(s, indent + "  ", v.navigate_joints[i]);
    }
    s << indent << "navigate_mappings[]" << std::endl;
    for (size_t i = 0; i < v.navigate_mappings.size(); ++i)
    {
      s << indent << "  navigate_mappings[" << i << "]: ";
      Printer<uint32_t>::stream(s, indent + "  ", v.navigate_mappings[i]);
    }
    s << indent << "change_twist[]" << std::endl;
    for (size_t i = 0; i < v.change_twist.size(); ++i)
    {
      s << indent << "  change_twist[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kortex_driver::ChangeTwist_<ContainerAllocator> >::stream(s, indent + "    ", v.change_twist[i]);
    }
    s << indent << "change_joint_speeds[]" << std::endl;
    for (size_t i = 0; i < v.change_joint_speeds.size(); ++i)
    {
      s << indent << "  change_joint_speeds[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kortex_driver::ChangeJointSpeeds_<ContainerAllocator> >::stream(s, indent + "    ", v.change_joint_speeds[i]);
    }
    s << indent << "change_wrench[]" << std::endl;
    for (size_t i = 0; i < v.change_wrench.size(); ++i)
    {
      s << indent << "  change_wrench[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kortex_driver::ChangeWrench_<ContainerAllocator> >::stream(s, indent + "    ", v.change_wrench[i]);
    }
    s << indent << "apply_emergency_stop[]" << std::endl;
    for (size_t i = 0; i < v.apply_emergency_stop.size(); ++i)
    {
      s << indent << "  apply_emergency_stop[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kortex_driver::EmergencyStop_<ContainerAllocator> >::stream(s, indent + "    ", v.apply_emergency_stop[i]);
    }
    s << indent << "clear_faults[]" << std::endl;
    for (size_t i = 0; i < v.clear_faults.size(); ++i)
    {
      s << indent << "  clear_faults[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kortex_driver::Faults_<ContainerAllocator> >::stream(s, indent + "    ", v.clear_faults[i]);
    }
    s << indent << "delay[]" << std::endl;
    for (size_t i = 0; i < v.delay.size(); ++i)
    {
      s << indent << "  delay[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kortex_driver::Delay_<ContainerAllocator> >::stream(s, indent + "    ", v.delay[i]);
    }
    s << indent << "execute_action[]" << std::endl;
    for (size_t i = 0; i < v.execute_action.size(); ++i)
    {
      s << indent << "  execute_action[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kortex_driver::ActionHandle_<ContainerAllocator> >::stream(s, indent + "    ", v.execute_action[i]);
    }
    s << indent << "send_gripper_command[]" << std::endl;
    for (size_t i = 0; i < v.send_gripper_command.size(); ++i)
    {
      s << indent << "  send_gripper_command[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kortex_driver::GripperCommand_<ContainerAllocator> >::stream(s, indent + "    ", v.send_gripper_command[i]);
    }
    s << indent << "send_gpio_command[]" << std::endl;
    for (size_t i = 0; i < v.send_gpio_command.size(); ++i)
    {
      s << indent << "  send_gpio_command[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kortex_driver::GpioCommand_<ContainerAllocator> >::stream(s, indent + "    ", v.send_gpio_command[i]);
    }
    s << indent << "stop_action[]" << std::endl;
    for (size_t i = 0; i < v.stop_action.size(); ++i)
    {
      s << indent << "  stop_action[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kortex_driver::Base_Stop_<ContainerAllocator> >::stream(s, indent + "    ", v.stop_action[i]);
    }
    s << indent << "play_pre_computed_trajectory[]" << std::endl;
    for (size_t i = 0; i < v.play_pre_computed_trajectory.size(); ++i)
    {
      s << indent << "  play_pre_computed_trajectory[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kortex_driver::PreComputedJointTrajectory_<ContainerAllocator> >::stream(s, indent + "    ", v.play_pre_computed_trajectory[i]);
    }
    s << indent << "execute_sequence[]" << std::endl;
    for (size_t i = 0; i < v.execute_sequence.size(); ++i)
    {
      s << indent << "  execute_sequence[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kortex_driver::SequenceHandle_<ContainerAllocator> >::stream(s, indent + "    ", v.execute_sequence[i]);
    }
    s << indent << "execute_waypoint_list[]" << std::endl;
    for (size_t i = 0; i < v.execute_waypoint_list.size(); ++i)
    {
      s << indent << "  execute_waypoint_list[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kortex_driver::WaypointList_<ContainerAllocator> >::stream(s, indent + "    ", v.execute_waypoint_list[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_ACTION_ACTION_PARAMETERS_H
