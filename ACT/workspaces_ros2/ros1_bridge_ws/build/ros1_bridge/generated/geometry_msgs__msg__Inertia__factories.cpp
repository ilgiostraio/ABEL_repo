// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "geometry_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_geometry_msgs__msg__Inertia(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "geometry_msgs/Inertia" ||
     ros1_type_name == "") &&
    ros2_type_name == "geometry_msgs/msg/Inertia")
  {
    return std::make_shared<
      Factory<
        geometry_msgs::Inertia,
        geometry_msgs::msg::Inertia
      >
    >("geometry_msgs/Inertia", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_geometry_msgs__msg__Inertia(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  geometry_msgs::Inertia,
  geometry_msgs::msg::Inertia
>::convert_1_to_2(
  const geometry_msgs::Inertia & ros1_msg,
  geometry_msgs::msg::Inertia & ros2_msg)
{

  // convert non-array field
  // convert primitive field
  ros2_msg.m = ros1_msg.m;

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Vector3,
    geometry_msgs::msg::Vector3
  >::convert_1_to_2(
    ros1_msg.com, ros2_msg.com);

  // convert non-array field
  // convert primitive field
  ros2_msg.ixx = ros1_msg.ixx;

  // convert non-array field
  // convert primitive field
  ros2_msg.ixy = ros1_msg.ixy;

  // convert non-array field
  // convert primitive field
  ros2_msg.ixz = ros1_msg.ixz;

  // convert non-array field
  // convert primitive field
  ros2_msg.iyy = ros1_msg.iyy;

  // convert non-array field
  // convert primitive field
  ros2_msg.iyz = ros1_msg.iyz;

  // convert non-array field
  // convert primitive field
  ros2_msg.izz = ros1_msg.izz;
}

template<>
void
Factory<
  geometry_msgs::Inertia,
  geometry_msgs::msg::Inertia
>::convert_2_to_1(
  const geometry_msgs::msg::Inertia & ros2_msg,
  geometry_msgs::Inertia & ros1_msg)
{

  // convert non-array field
  // convert primitive field
  ros1_msg.m = ros2_msg.m;

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Vector3,
    geometry_msgs::msg::Vector3
  >::convert_2_to_1(
    ros2_msg.com, ros1_msg.com);

  // convert non-array field
  // convert primitive field
  ros1_msg.ixx = ros2_msg.ixx;

  // convert non-array field
  // convert primitive field
  ros1_msg.ixy = ros2_msg.ixy;

  // convert non-array field
  // convert primitive field
  ros1_msg.ixz = ros2_msg.ixz;

  // convert non-array field
  // convert primitive field
  ros1_msg.iyy = ros2_msg.iyy;

  // convert non-array field
  // convert primitive field
  ros1_msg.iyz = ros2_msg.iyz;

  // convert non-array field
  // convert primitive field
  ros1_msg.izz = ros2_msg.izz;
}
}  // namespace ros1_bridge
