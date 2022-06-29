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
get_factory_geometry_msgs__msg__Pose2D(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "geometry_msgs/Pose2D" ||
     ros1_type_name == "") &&
    ros2_type_name == "geometry_msgs/msg/Pose2D")
  {
    return std::make_shared<
      Factory<
        geometry_msgs::Pose2D,
        geometry_msgs::msg::Pose2D
      >
    >("geometry_msgs/Pose2D", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_geometry_msgs__msg__Pose2D(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  geometry_msgs::Pose2D,
  geometry_msgs::msg::Pose2D
>::convert_1_to_2(
  const geometry_msgs::Pose2D & ros1_msg,
  geometry_msgs::msg::Pose2D & ros2_msg)
{

  // convert non-array field
  // convert primitive field
  ros2_msg.x = ros1_msg.x;

  // convert non-array field
  // convert primitive field
  ros2_msg.y = ros1_msg.y;

  // convert non-array field
  // convert primitive field
  ros2_msg.theta = ros1_msg.theta;
}

template<>
void
Factory<
  geometry_msgs::Pose2D,
  geometry_msgs::msg::Pose2D
>::convert_2_to_1(
  const geometry_msgs::msg::Pose2D & ros2_msg,
  geometry_msgs::Pose2D & ros1_msg)
{

  // convert non-array field
  // convert primitive field
  ros1_msg.x = ros2_msg.x;

  // convert non-array field
  // convert primitive field
  ros1_msg.y = ros2_msg.y;

  // convert non-array field
  // convert primitive field
  ros1_msg.theta = ros2_msg.theta;
}
}  // namespace ros1_bridge
