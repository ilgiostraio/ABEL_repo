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
get_factory_moveit_msgs__msg__PositionConstraint(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "moveit_msgs/PositionConstraint" ||
     ros1_type_name == "") &&
    ros2_type_name == "moveit_msgs/msg/PositionConstraint")
  {
    return std::make_shared<
      Factory<
        moveit_msgs::PositionConstraint,
        moveit_msgs::msg::PositionConstraint
      >
    >("moveit_msgs/PositionConstraint", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__msg__PositionConstraint(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  moveit_msgs::PositionConstraint,
  moveit_msgs::msg::PositionConstraint
>::convert_1_to_2(
  const moveit_msgs::PositionConstraint & ros1_msg,
  moveit_msgs::msg::PositionConstraint & ros2_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);

  // convert non-array field
  // convert primitive field
  ros2_msg.link_name = ros1_msg.link_name;

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Vector3,
    geometry_msgs::msg::Vector3
  >::convert_1_to_2(
    ros1_msg.target_point_offset, ros2_msg.target_point_offset);

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::BoundingVolume,
    moveit_msgs::msg::BoundingVolume
  >::convert_1_to_2(
    ros1_msg.constraint_region, ros2_msg.constraint_region);

  // convert non-array field
  // convert primitive field
  ros2_msg.weight = ros1_msg.weight;
}

template<>
void
Factory<
  moveit_msgs::PositionConstraint,
  moveit_msgs::msg::PositionConstraint
>::convert_2_to_1(
  const moveit_msgs::msg::PositionConstraint & ros2_msg,
  moveit_msgs::PositionConstraint & ros1_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);

  // convert non-array field
  // convert primitive field
  ros1_msg.link_name = ros2_msg.link_name;

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Vector3,
    geometry_msgs::msg::Vector3
  >::convert_2_to_1(
    ros2_msg.target_point_offset, ros1_msg.target_point_offset);

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::BoundingVolume,
    moveit_msgs::msg::BoundingVolume
  >::convert_2_to_1(
    ros2_msg.constraint_region, ros1_msg.constraint_region);

  // convert non-array field
  // convert primitive field
  ros1_msg.weight = ros2_msg.weight;
}
}  // namespace ros1_bridge
