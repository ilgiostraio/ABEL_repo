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
get_factory_geometry_msgs__msg__Quaternion(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "geometry_msgs/Quaternion" ||
     ros1_type_name == "") &&
    ros2_type_name == "geometry_msgs/msg/Quaternion")
  {
    return std::make_shared<
      Factory<
        geometry_msgs::Quaternion,
        geometry_msgs::msg::Quaternion
      >
    >("geometry_msgs/Quaternion", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_geometry_msgs__msg__Quaternion(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  geometry_msgs::Quaternion,
  geometry_msgs::msg::Quaternion
>::convert_1_to_2(
  const geometry_msgs::Quaternion & ros1_msg,
  geometry_msgs::msg::Quaternion & ros2_msg)
{

  // convert non-array field
  // convert primitive field
  ros2_msg.x = ros1_msg.x;

  // convert non-array field
  // convert primitive field
  ros2_msg.y = ros1_msg.y;

  // convert non-array field
  // convert primitive field
  ros2_msg.z = ros1_msg.z;

  // convert non-array field
  // convert primitive field
  ros2_msg.w = ros1_msg.w;
}

template<>
void
Factory<
  geometry_msgs::Quaternion,
  geometry_msgs::msg::Quaternion
>::convert_2_to_1(
  const geometry_msgs::msg::Quaternion & ros2_msg,
  geometry_msgs::Quaternion & ros1_msg)
{

  // convert non-array field
  // convert primitive field
  ros1_msg.x = ros2_msg.x;

  // convert non-array field
  // convert primitive field
  ros1_msg.y = ros2_msg.y;

  // convert non-array field
  // convert primitive field
  ros1_msg.z = ros2_msg.z;

  // convert non-array field
  // convert primitive field
  ros1_msg.w = ros2_msg.w;
}
}  // namespace ros1_bridge
