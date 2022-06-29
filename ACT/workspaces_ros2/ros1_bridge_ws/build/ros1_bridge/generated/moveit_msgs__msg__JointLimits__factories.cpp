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
get_factory_moveit_msgs__msg__JointLimits(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "moveit_msgs/JointLimits" ||
     ros1_type_name == "") &&
    ros2_type_name == "moveit_msgs/msg/JointLimits")
  {
    return std::make_shared<
      Factory<
        moveit_msgs::JointLimits,
        moveit_msgs::msg::JointLimits
      >
    >("moveit_msgs/JointLimits", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__msg__JointLimits(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  moveit_msgs::JointLimits,
  moveit_msgs::msg::JointLimits
>::convert_1_to_2(
  const moveit_msgs::JointLimits & ros1_msg,
  moveit_msgs::msg::JointLimits & ros2_msg)
{

  // convert non-array field
  // convert primitive field
  ros2_msg.joint_name = ros1_msg.joint_name;

  // convert non-array field
  // convert primitive field
  ros2_msg.has_position_limits = ros1_msg.has_position_limits;

  // convert non-array field
  // convert primitive field
  ros2_msg.min_position = ros1_msg.min_position;

  // convert non-array field
  // convert primitive field
  ros2_msg.max_position = ros1_msg.max_position;

  // convert non-array field
  // convert primitive field
  ros2_msg.has_velocity_limits = ros1_msg.has_velocity_limits;

  // convert non-array field
  // convert primitive field
  ros2_msg.max_velocity = ros1_msg.max_velocity;

  // convert non-array field
  // convert primitive field
  ros2_msg.has_acceleration_limits = ros1_msg.has_acceleration_limits;

  // convert non-array field
  // convert primitive field
  ros2_msg.max_acceleration = ros1_msg.max_acceleration;
}

template<>
void
Factory<
  moveit_msgs::JointLimits,
  moveit_msgs::msg::JointLimits
>::convert_2_to_1(
  const moveit_msgs::msg::JointLimits & ros2_msg,
  moveit_msgs::JointLimits & ros1_msg)
{

  // convert non-array field
  // convert primitive field
  ros1_msg.joint_name = ros2_msg.joint_name;

  // convert non-array field
  // convert primitive field
  ros1_msg.has_position_limits = ros2_msg.has_position_limits;

  // convert non-array field
  // convert primitive field
  ros1_msg.min_position = ros2_msg.min_position;

  // convert non-array field
  // convert primitive field
  ros1_msg.max_position = ros2_msg.max_position;

  // convert non-array field
  // convert primitive field
  ros1_msg.has_velocity_limits = ros2_msg.has_velocity_limits;

  // convert non-array field
  // convert primitive field
  ros1_msg.max_velocity = ros2_msg.max_velocity;

  // convert non-array field
  // convert primitive field
  ros1_msg.has_acceleration_limits = ros2_msg.has_acceleration_limits;

  // convert non-array field
  // convert primitive field
  ros1_msg.max_acceleration = ros2_msg.max_acceleration;
}
}  // namespace ros1_bridge
