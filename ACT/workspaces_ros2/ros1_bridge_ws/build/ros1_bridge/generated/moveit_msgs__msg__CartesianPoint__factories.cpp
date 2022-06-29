// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "moveit_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__CartesianPoint(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "moveit_msgs/CartesianPoint" ||
     ros1_type_name == "") &&
    ros2_type_name == "moveit_msgs/msg/CartesianPoint")
  {
    return std::make_shared<
      Factory<
        moveit_msgs::CartesianPoint,
        moveit_msgs::msg::CartesianPoint
      >
    >("moveit_msgs/CartesianPoint", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__msg__CartesianPoint(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  moveit_msgs::CartesianPoint,
  moveit_msgs::msg::CartesianPoint
>::convert_1_to_2(
  const moveit_msgs::CartesianPoint & ros1_msg,
  moveit_msgs::msg::CartesianPoint & ros2_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Pose,
    geometry_msgs::msg::Pose
  >::convert_1_to_2(
    ros1_msg.pose, ros2_msg.pose);

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Twist,
    geometry_msgs::msg::Twist
  >::convert_1_to_2(
    ros1_msg.velocity, ros2_msg.velocity);

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Accel,
    geometry_msgs::msg::Accel
  >::convert_1_to_2(
    ros1_msg.acceleration, ros2_msg.acceleration);
}

template<>
void
Factory<
  moveit_msgs::CartesianPoint,
  moveit_msgs::msg::CartesianPoint
>::convert_2_to_1(
  const moveit_msgs::msg::CartesianPoint & ros2_msg,
  moveit_msgs::CartesianPoint & ros1_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Pose,
    geometry_msgs::msg::Pose
  >::convert_2_to_1(
    ros2_msg.pose, ros1_msg.pose);

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Twist,
    geometry_msgs::msg::Twist
  >::convert_2_to_1(
    ros2_msg.velocity, ros1_msg.velocity);

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Accel,
    geometry_msgs::msg::Accel
  >::convert_2_to_1(
    ros2_msg.acceleration, ros1_msg.acceleration);
}
}  // namespace ros1_bridge
