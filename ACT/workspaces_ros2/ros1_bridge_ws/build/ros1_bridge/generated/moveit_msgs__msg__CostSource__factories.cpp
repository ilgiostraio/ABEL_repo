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
get_factory_moveit_msgs__msg__CostSource(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "moveit_msgs/CostSource" ||
     ros1_type_name == "") &&
    ros2_type_name == "moveit_msgs/msg/CostSource")
  {
    return std::make_shared<
      Factory<
        moveit_msgs::CostSource,
        moveit_msgs::msg::CostSource
      >
    >("moveit_msgs/CostSource", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__msg__CostSource(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  moveit_msgs::CostSource,
  moveit_msgs::msg::CostSource
>::convert_1_to_2(
  const moveit_msgs::CostSource & ros1_msg,
  moveit_msgs::msg::CostSource & ros2_msg)
{

  // convert non-array field
  // convert primitive field
  ros2_msg.cost_density = ros1_msg.cost_density;

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Vector3,
    geometry_msgs::msg::Vector3
  >::convert_1_to_2(
    ros1_msg.aabb_min, ros2_msg.aabb_min);

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Vector3,
    geometry_msgs::msg::Vector3
  >::convert_1_to_2(
    ros1_msg.aabb_max, ros2_msg.aabb_max);
}

template<>
void
Factory<
  moveit_msgs::CostSource,
  moveit_msgs::msg::CostSource
>::convert_2_to_1(
  const moveit_msgs::msg::CostSource & ros2_msg,
  moveit_msgs::CostSource & ros1_msg)
{

  // convert non-array field
  // convert primitive field
  ros1_msg.cost_density = ros2_msg.cost_density;

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Vector3,
    geometry_msgs::msg::Vector3
  >::convert_2_to_1(
    ros2_msg.aabb_min, ros1_msg.aabb_min);

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Vector3,
    geometry_msgs::msg::Vector3
  >::convert_2_to_1(
    ros2_msg.aabb_max, ros1_msg.aabb_max);
}
}  // namespace ros1_bridge
