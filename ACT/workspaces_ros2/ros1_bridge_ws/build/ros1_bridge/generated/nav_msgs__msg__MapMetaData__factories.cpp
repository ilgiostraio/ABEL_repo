// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "nav_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_nav_msgs__msg__MapMetaData(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "nav_msgs/MapMetaData" ||
     ros1_type_name == "") &&
    ros2_type_name == "nav_msgs/msg/MapMetaData")
  {
    return std::make_shared<
      Factory<
        nav_msgs::MapMetaData,
        nav_msgs::msg::MapMetaData
      >
    >("nav_msgs/MapMetaData", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_nav_msgs__msg__MapMetaData(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  nav_msgs::MapMetaData,
  nav_msgs::msg::MapMetaData
>::convert_1_to_2(
  const nav_msgs::MapMetaData & ros1_msg,
  nav_msgs::msg::MapMetaData & ros2_msg)
{

  // convert non-array field
  // convert builtin field
  ros1_bridge::convert_1_to_2(ros1_msg.map_load_time, ros2_msg.map_load_time);

  // convert non-array field
  // convert primitive field
  ros2_msg.resolution = ros1_msg.resolution;

  // convert non-array field
  // convert primitive field
  ros2_msg.width = ros1_msg.width;

  // convert non-array field
  // convert primitive field
  ros2_msg.height = ros1_msg.height;

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Pose,
    geometry_msgs::msg::Pose
  >::convert_1_to_2(
    ros1_msg.origin, ros2_msg.origin);
}

template<>
void
Factory<
  nav_msgs::MapMetaData,
  nav_msgs::msg::MapMetaData
>::convert_2_to_1(
  const nav_msgs::msg::MapMetaData & ros2_msg,
  nav_msgs::MapMetaData & ros1_msg)
{

  // convert non-array field
  // convert builtin field
  ros1_bridge::convert_2_to_1(ros2_msg.map_load_time, ros1_msg.map_load_time);

  // convert non-array field
  // convert primitive field
  ros1_msg.resolution = ros2_msg.resolution;

  // convert non-array field
  // convert primitive field
  ros1_msg.width = ros2_msg.width;

  // convert non-array field
  // convert primitive field
  ros1_msg.height = ros2_msg.height;

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Pose,
    geometry_msgs::msg::Pose
  >::convert_2_to_1(
    ros2_msg.origin, ros1_msg.origin);
}
}  // namespace ros1_bridge
