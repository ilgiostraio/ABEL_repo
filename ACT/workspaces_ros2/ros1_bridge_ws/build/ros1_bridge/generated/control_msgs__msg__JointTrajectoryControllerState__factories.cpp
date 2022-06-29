// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "control_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_control_msgs__msg__JointTrajectoryControllerState(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "control_msgs/JointTrajectoryControllerState" ||
     ros1_type_name == "") &&
    ros2_type_name == "control_msgs/msg/JointTrajectoryControllerState")
  {
    return std::make_shared<
      Factory<
        control_msgs::JointTrajectoryControllerState,
        control_msgs::msg::JointTrajectoryControllerState
      >
    >("control_msgs/JointTrajectoryControllerState", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_control_msgs__msg__JointTrajectoryControllerState(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  (void)ros_id;
  (void)package_name;
  (void)service_name;
  return nullptr;
}
// conversion functions for available interfaces

template<>
void
Factory<
  control_msgs::JointTrajectoryControllerState,
  control_msgs::msg::JointTrajectoryControllerState
>::convert_1_to_2(
  const control_msgs::JointTrajectoryControllerState & ros1_msg,
  control_msgs::msg::JointTrajectoryControllerState & ros2_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.joint_names.resize(ros1_msg.joint_names.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.joint_names.begin(),
    ros1_msg.joint_names.end(),
    ros2_msg.joint_names.begin());

  // convert non-array field
  // convert sub message field
  Factory<
    trajectory_msgs::JointTrajectoryPoint,
    trajectory_msgs::msg::JointTrajectoryPoint
  >::convert_1_to_2(
    ros1_msg.desired, ros2_msg.desired);

  // convert non-array field
  // convert sub message field
  Factory<
    trajectory_msgs::JointTrajectoryPoint,
    trajectory_msgs::msg::JointTrajectoryPoint
  >::convert_1_to_2(
    ros1_msg.actual, ros2_msg.actual);

  // convert non-array field
  // convert sub message field
  Factory<
    trajectory_msgs::JointTrajectoryPoint,
    trajectory_msgs::msg::JointTrajectoryPoint
  >::convert_1_to_2(
    ros1_msg.error, ros2_msg.error);
}

template<>
void
Factory<
  control_msgs::JointTrajectoryControllerState,
  control_msgs::msg::JointTrajectoryControllerState
>::convert_2_to_1(
  const control_msgs::msg::JointTrajectoryControllerState & ros2_msg,
  control_msgs::JointTrajectoryControllerState & ros1_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.joint_names.resize(ros2_msg.joint_names.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.joint_names.begin(),
    ros2_msg.joint_names.end(),
    ros1_msg.joint_names.begin());

  // convert non-array field
  // convert sub message field
  Factory<
    trajectory_msgs::JointTrajectoryPoint,
    trajectory_msgs::msg::JointTrajectoryPoint
  >::convert_2_to_1(
    ros2_msg.desired, ros1_msg.desired);

  // convert non-array field
  // convert sub message field
  Factory<
    trajectory_msgs::JointTrajectoryPoint,
    trajectory_msgs::msg::JointTrajectoryPoint
  >::convert_2_to_1(
    ros2_msg.actual, ros1_msg.actual);

  // convert non-array field
  // convert sub message field
  Factory<
    trajectory_msgs::JointTrajectoryPoint,
    trajectory_msgs::msg::JointTrajectoryPoint
  >::convert_2_to_1(
    ros2_msg.error, ros1_msg.error);
}
}  // namespace ros1_bridge
