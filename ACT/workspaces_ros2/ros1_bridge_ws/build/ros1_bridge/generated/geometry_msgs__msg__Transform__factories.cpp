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
get_factory_geometry_msgs__msg__Transform(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "geometry_msgs/Transform" ||
     ros1_type_name == "") &&
    ros2_type_name == "geometry_msgs/msg/Transform")
  {
    return std::make_shared<
      Factory<
        geometry_msgs::Transform,
        geometry_msgs::msg::Transform
      >
    >("geometry_msgs/Transform", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_geometry_msgs__msg__Transform(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  geometry_msgs::Transform,
  geometry_msgs::msg::Transform
>::convert_1_to_2(
  const geometry_msgs::Transform & ros1_msg,
  geometry_msgs::msg::Transform & ros2_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Vector3,
    geometry_msgs::msg::Vector3
  >::convert_1_to_2(
    ros1_msg.translation, ros2_msg.translation);

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Quaternion,
    geometry_msgs::msg::Quaternion
  >::convert_1_to_2(
    ros1_msg.rotation, ros2_msg.rotation);
}

template<>
void
Factory<
  geometry_msgs::Transform,
  geometry_msgs::msg::Transform
>::convert_2_to_1(
  const geometry_msgs::msg::Transform & ros2_msg,
  geometry_msgs::Transform & ros1_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Vector3,
    geometry_msgs::msg::Vector3
  >::convert_2_to_1(
    ros2_msg.translation, ros1_msg.translation);

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Quaternion,
    geometry_msgs::msg::Quaternion
  >::convert_2_to_1(
    ros2_msg.rotation, ros1_msg.rotation);
}
}  // namespace ros1_bridge
