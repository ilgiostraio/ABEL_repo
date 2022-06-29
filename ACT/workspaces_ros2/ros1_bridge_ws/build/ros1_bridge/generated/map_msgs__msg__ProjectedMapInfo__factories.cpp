// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "map_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_map_msgs__msg__ProjectedMapInfo(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "map_msgs/ProjectedMapInfo" ||
     ros1_type_name == "") &&
    ros2_type_name == "map_msgs/msg/ProjectedMapInfo")
  {
    return std::make_shared<
      Factory<
        map_msgs::ProjectedMapInfo,
        map_msgs::msg::ProjectedMapInfo
      >
    >("map_msgs/ProjectedMapInfo", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_map_msgs__msg__ProjectedMapInfo(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  map_msgs::ProjectedMapInfo,
  map_msgs::msg::ProjectedMapInfo
>::convert_1_to_2(
  const map_msgs::ProjectedMapInfo & ros1_msg,
  map_msgs::msg::ProjectedMapInfo & ros2_msg)
{

  // convert non-array field
  // convert primitive field
  ros2_msg.frame_id = ros1_msg.frame_id;

  // convert non-array field
  // convert primitive field
  ros2_msg.x = ros1_msg.x;

  // convert non-array field
  // convert primitive field
  ros2_msg.y = ros1_msg.y;

  // convert non-array field
  // convert primitive field
  ros2_msg.width = ros1_msg.width;

  // convert non-array field
  // convert primitive field
  ros2_msg.height = ros1_msg.height;

  // convert non-array field
  // convert primitive field
  ros2_msg.min_z = ros1_msg.min_z;

  // convert non-array field
  // convert primitive field
  ros2_msg.max_z = ros1_msg.max_z;
}

template<>
void
Factory<
  map_msgs::ProjectedMapInfo,
  map_msgs::msg::ProjectedMapInfo
>::convert_2_to_1(
  const map_msgs::msg::ProjectedMapInfo & ros2_msg,
  map_msgs::ProjectedMapInfo & ros1_msg)
{

  // convert non-array field
  // convert primitive field
  ros1_msg.frame_id = ros2_msg.frame_id;

  // convert non-array field
  // convert primitive field
  ros1_msg.x = ros2_msg.x;

  // convert non-array field
  // convert primitive field
  ros1_msg.y = ros2_msg.y;

  // convert non-array field
  // convert primitive field
  ros1_msg.width = ros2_msg.width;

  // convert non-array field
  // convert primitive field
  ros1_msg.height = ros2_msg.height;

  // convert non-array field
  // convert primitive field
  ros1_msg.min_z = ros2_msg.min_z;

  // convert non-array field
  // convert primitive field
  ros1_msg.max_z = ros2_msg.max_z;
}
}  // namespace ros1_bridge
