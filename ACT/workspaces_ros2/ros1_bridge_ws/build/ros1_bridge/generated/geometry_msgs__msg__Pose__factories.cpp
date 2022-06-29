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
get_factory_geometry_msgs__msg__Pose(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "geometry_msgs/Pose" ||
     ros1_type_name == "") &&
    ros2_type_name == "geometry_msgs/msg/Pose")
  {
    return std::make_shared<
      Factory<
        geometry_msgs::Pose,
        geometry_msgs::msg::Pose
      >
    >("geometry_msgs/Pose", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_geometry_msgs__msg__Pose(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  geometry_msgs::Pose,
  geometry_msgs::msg::Pose
>::convert_1_to_2(
  const geometry_msgs::Pose & ros1_msg,
  geometry_msgs::msg::Pose & ros2_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Point,
    geometry_msgs::msg::Point
  >::convert_1_to_2(
    ros1_msg.position, ros2_msg.position);

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Quaternion,
    geometry_msgs::msg::Quaternion
  >::convert_1_to_2(
    ros1_msg.orientation, ros2_msg.orientation);
}

template<>
void
Factory<
  geometry_msgs::Pose,
  geometry_msgs::msg::Pose
>::convert_2_to_1(
  const geometry_msgs::msg::Pose & ros2_msg,
  geometry_msgs::Pose & ros1_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Point,
    geometry_msgs::msg::Point
  >::convert_2_to_1(
    ros2_msg.position, ros1_msg.position);

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Quaternion,
    geometry_msgs::msg::Quaternion
  >::convert_2_to_1(
    ros2_msg.orientation, ros1_msg.orientation);
}
}  // namespace ros1_bridge
