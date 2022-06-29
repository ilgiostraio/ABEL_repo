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
get_factory_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "trajectory_msgs/MultiDOFJointTrajectoryPoint" ||
     ros1_type_name == "") &&
    ros2_type_name == "trajectory_msgs/msg/MultiDOFJointTrajectoryPoint")
  {
    return std::make_shared<
      Factory<
        trajectory_msgs::MultiDOFJointTrajectoryPoint,
        trajectory_msgs::msg::MultiDOFJointTrajectoryPoint
      >
    >("trajectory_msgs/MultiDOFJointTrajectoryPoint", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  trajectory_msgs::MultiDOFJointTrajectoryPoint,
  trajectory_msgs::msg::MultiDOFJointTrajectoryPoint
>::convert_1_to_2(
  const trajectory_msgs::MultiDOFJointTrajectoryPoint & ros1_msg,
  trajectory_msgs::msg::MultiDOFJointTrajectoryPoint & ros2_msg)
{

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.transforms.resize(ros1_msg.transforms.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.transforms.cbegin();
    auto ros2_it = ros2_msg.transforms.begin();
    for (
      ;
      ros1_it != ros1_msg.transforms.cend() &&
      ros2_it != ros2_msg.transforms.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        geometry_msgs::Transform,
        geometry_msgs::msg::Transform
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.velocities.resize(ros1_msg.velocities.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.velocities.cbegin();
    auto ros2_it = ros2_msg.velocities.begin();
    for (
      ;
      ros1_it != ros1_msg.velocities.cend() &&
      ros2_it != ros2_msg.velocities.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        geometry_msgs::Twist,
        geometry_msgs::msg::Twist
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.accelerations.resize(ros1_msg.accelerations.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.accelerations.cbegin();
    auto ros2_it = ros2_msg.accelerations.begin();
    for (
      ;
      ros1_it != ros1_msg.accelerations.cend() &&
      ros2_it != ros2_msg.accelerations.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        geometry_msgs::Twist,
        geometry_msgs::msg::Twist
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }

  // convert non-array field
  // convert builtin field
  ros1_bridge::convert_1_to_2(ros1_msg.time_from_start, ros2_msg.time_from_start);
}

template<>
void
Factory<
  trajectory_msgs::MultiDOFJointTrajectoryPoint,
  trajectory_msgs::msg::MultiDOFJointTrajectoryPoint
>::convert_2_to_1(
  const trajectory_msgs::msg::MultiDOFJointTrajectoryPoint & ros2_msg,
  trajectory_msgs::MultiDOFJointTrajectoryPoint & ros1_msg)
{

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.transforms.resize(ros2_msg.transforms.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.transforms.cbegin();
    auto ros1_it = ros1_msg.transforms.begin();
    for (
      ;
      ros2_it != ros2_msg.transforms.cend() &&
      ros1_it != ros1_msg.transforms.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        geometry_msgs::Transform,
        geometry_msgs::msg::Transform
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.velocities.resize(ros2_msg.velocities.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.velocities.cbegin();
    auto ros1_it = ros1_msg.velocities.begin();
    for (
      ;
      ros2_it != ros2_msg.velocities.cend() &&
      ros1_it != ros1_msg.velocities.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        geometry_msgs::Twist,
        geometry_msgs::msg::Twist
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.accelerations.resize(ros2_msg.accelerations.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.accelerations.cbegin();
    auto ros1_it = ros1_msg.accelerations.begin();
    for (
      ;
      ros2_it != ros2_msg.accelerations.cend() &&
      ros1_it != ros1_msg.accelerations.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        geometry_msgs::Twist,
        geometry_msgs::msg::Twist
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }

  // convert non-array field
  // convert builtin field
  ros1_bridge::convert_2_to_1(ros2_msg.time_from_start, ros1_msg.time_from_start);
}
}  // namespace ros1_bridge
