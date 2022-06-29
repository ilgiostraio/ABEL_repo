// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "trajectory_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_trajectory_msgs__msg__JointTrajectoryPoint(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "trajectory_msgs/JointTrajectoryPoint" ||
     ros1_type_name == "") &&
    ros2_type_name == "trajectory_msgs/msg/JointTrajectoryPoint")
  {
    return std::make_shared<
      Factory<
        trajectory_msgs::JointTrajectoryPoint,
        trajectory_msgs::msg::JointTrajectoryPoint
      >
    >("trajectory_msgs/JointTrajectoryPoint", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_trajectory_msgs__msg__JointTrajectoryPoint(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  trajectory_msgs::JointTrajectoryPoint,
  trajectory_msgs::msg::JointTrajectoryPoint
>::convert_1_to_2(
  const trajectory_msgs::JointTrajectoryPoint & ros1_msg,
  trajectory_msgs::msg::JointTrajectoryPoint & ros2_msg)
{

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.positions.resize(ros1_msg.positions.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.positions.begin(),
    ros1_msg.positions.end(),
    ros2_msg.positions.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.velocities.resize(ros1_msg.velocities.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.velocities.begin(),
    ros1_msg.velocities.end(),
    ros2_msg.velocities.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.accelerations.resize(ros1_msg.accelerations.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.accelerations.begin(),
    ros1_msg.accelerations.end(),
    ros2_msg.accelerations.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.effort.resize(ros1_msg.effort.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.effort.begin(),
    ros1_msg.effort.end(),
    ros2_msg.effort.begin());

  // convert non-array field
  // convert builtin field
  ros1_bridge::convert_1_to_2(ros1_msg.time_from_start, ros2_msg.time_from_start);
}

template<>
void
Factory<
  trajectory_msgs::JointTrajectoryPoint,
  trajectory_msgs::msg::JointTrajectoryPoint
>::convert_2_to_1(
  const trajectory_msgs::msg::JointTrajectoryPoint & ros2_msg,
  trajectory_msgs::JointTrajectoryPoint & ros1_msg)
{

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.positions.resize(ros2_msg.positions.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.positions.begin(),
    ros2_msg.positions.end(),
    ros1_msg.positions.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.velocities.resize(ros2_msg.velocities.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.velocities.begin(),
    ros2_msg.velocities.end(),
    ros1_msg.velocities.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.accelerations.resize(ros2_msg.accelerations.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.accelerations.begin(),
    ros2_msg.accelerations.end(),
    ros1_msg.accelerations.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.effort.resize(ros2_msg.effort.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.effort.begin(),
    ros2_msg.effort.end(),
    ros1_msg.effort.begin());

  // convert non-array field
  // convert builtin field
  ros1_bridge::convert_2_to_1(ros2_msg.time_from_start, ros1_msg.time_from_start);
}
}  // namespace ros1_bridge
