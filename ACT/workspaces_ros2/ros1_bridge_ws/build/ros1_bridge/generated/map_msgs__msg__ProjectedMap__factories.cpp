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
get_factory_map_msgs__msg__ProjectedMap(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "map_msgs/ProjectedMap" ||
     ros1_type_name == "") &&
    ros2_type_name == "map_msgs/msg/ProjectedMap")
  {
    return std::make_shared<
      Factory<
        map_msgs::ProjectedMap,
        map_msgs::msg::ProjectedMap
      >
    >("map_msgs/ProjectedMap", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_map_msgs__msg__ProjectedMap(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  map_msgs::ProjectedMap,
  map_msgs::msg::ProjectedMap
>::convert_1_to_2(
  const map_msgs::ProjectedMap & ros1_msg,
  map_msgs::msg::ProjectedMap & ros2_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    nav_msgs::OccupancyGrid,
    nav_msgs::msg::OccupancyGrid
  >::convert_1_to_2(
    ros1_msg.map, ros2_msg.map);

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
  map_msgs::ProjectedMap,
  map_msgs::msg::ProjectedMap
>::convert_2_to_1(
  const map_msgs::msg::ProjectedMap & ros2_msg,
  map_msgs::ProjectedMap & ros1_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    nav_msgs::OccupancyGrid,
    nav_msgs::msg::OccupancyGrid
  >::convert_2_to_1(
    ros2_msg.map, ros1_msg.map);

  // convert non-array field
  // convert primitive field
  ros1_msg.min_z = ros2_msg.min_z;

  // convert non-array field
  // convert primitive field
  ros1_msg.max_z = ros2_msg.max_z;
}
}  // namespace ros1_bridge
