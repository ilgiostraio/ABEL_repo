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
get_factory_moveit_msgs__msg__VisibilityConstraint(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "moveit_msgs/VisibilityConstraint" ||
     ros1_type_name == "") &&
    ros2_type_name == "moveit_msgs/msg/VisibilityConstraint")
  {
    return std::make_shared<
      Factory<
        moveit_msgs::VisibilityConstraint,
        moveit_msgs::msg::VisibilityConstraint
      >
    >("moveit_msgs/VisibilityConstraint", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__msg__VisibilityConstraint(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  moveit_msgs::VisibilityConstraint,
  moveit_msgs::msg::VisibilityConstraint
>::convert_1_to_2(
  const moveit_msgs::VisibilityConstraint & ros1_msg,
  moveit_msgs::msg::VisibilityConstraint & ros2_msg)
{

  // convert non-array field
  // convert primitive field
  ros2_msg.target_radius = ros1_msg.target_radius;

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::PoseStamped,
    geometry_msgs::msg::PoseStamped
  >::convert_1_to_2(
    ros1_msg.target_pose, ros2_msg.target_pose);

  // convert non-array field
  // convert primitive field
  ros2_msg.cone_sides = ros1_msg.cone_sides;

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::PoseStamped,
    geometry_msgs::msg::PoseStamped
  >::convert_1_to_2(
    ros1_msg.sensor_pose, ros2_msg.sensor_pose);

  // convert non-array field
  // convert primitive field
  ros2_msg.max_view_angle = ros1_msg.max_view_angle;

  // convert non-array field
  // convert primitive field
  ros2_msg.max_range_angle = ros1_msg.max_range_angle;

  // convert non-array field
  // convert primitive field
  ros2_msg.sensor_view_direction = ros1_msg.sensor_view_direction;

  // convert non-array field
  // convert primitive field
  ros2_msg.weight = ros1_msg.weight;
}

template<>
void
Factory<
  moveit_msgs::VisibilityConstraint,
  moveit_msgs::msg::VisibilityConstraint
>::convert_2_to_1(
  const moveit_msgs::msg::VisibilityConstraint & ros2_msg,
  moveit_msgs::VisibilityConstraint & ros1_msg)
{

  // convert non-array field
  // convert primitive field
  ros1_msg.target_radius = ros2_msg.target_radius;

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::PoseStamped,
    geometry_msgs::msg::PoseStamped
  >::convert_2_to_1(
    ros2_msg.target_pose, ros1_msg.target_pose);

  // convert non-array field
  // convert primitive field
  ros1_msg.cone_sides = ros2_msg.cone_sides;

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::PoseStamped,
    geometry_msgs::msg::PoseStamped
  >::convert_2_to_1(
    ros2_msg.sensor_pose, ros1_msg.sensor_pose);

  // convert non-array field
  // convert primitive field
  ros1_msg.max_view_angle = ros2_msg.max_view_angle;

  // convert non-array field
  // convert primitive field
  ros1_msg.max_range_angle = ros2_msg.max_range_angle;

  // convert non-array field
  // convert primitive field
  ros1_msg.sensor_view_direction = ros2_msg.sensor_view_direction;

  // convert non-array field
  // convert primitive field
  ros1_msg.weight = ros2_msg.weight;
}
}  // namespace ros1_bridge
