// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "nav_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <nav_msgs/SetMap.h>

// include ROS 2 services
#include <nav_msgs/srv/set_map.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_nav_msgs__srv__SetMap(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_nav_msgs__srv__SetMap(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "nav_msgs" &&
      service_name == "SetMap"
    ) || (
      ros_id == "ros2" &&
      package_name == "nav_msgs" &&
      service_name == "srv/SetMap"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      nav_msgs::SetMap,
      nav_msgs::srv::SetMap
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  nav_msgs::SetMap,
  nav_msgs::srv::SetMap
>::translate_1_to_2(
  const nav_msgs::SetMap::Request& req1,
  nav_msgs::srv::SetMap::Request& req2
) {
  auto & map1 = req1.map;
  auto & map2 = req2.map;
  Factory<nav_msgs::OccupancyGrid,nav_msgs::msg::OccupancyGrid>::convert_1_to_2(map1, map2);
  auto & initial_pose1 = req1.initial_pose;
  auto & initial_pose2 = req2.initial_pose;
  Factory<geometry_msgs::PoseWithCovarianceStamped,geometry_msgs::msg::PoseWithCovarianceStamped>::convert_1_to_2(initial_pose1, initial_pose2);
}

template <>
void ServiceFactory<
  nav_msgs::SetMap,
  nav_msgs::srv::SetMap
>::translate_1_to_2(
  const nav_msgs::SetMap::Response& req1,
  nav_msgs::srv::SetMap::Response& req2
) {
  auto & success1 = req1.success;
  auto & success2 = req2.success;
  success2 = success1;
}

template <>
void ServiceFactory<
  nav_msgs::SetMap,
  nav_msgs::srv::SetMap
>::translate_2_to_1(
  const nav_msgs::srv::SetMap::Request& req2,
  nav_msgs::SetMap::Request& req1
) {
  auto & map1 = req1.map;
  auto & map2 = req2.map;
  Factory<nav_msgs::OccupancyGrid,nav_msgs::msg::OccupancyGrid>::convert_2_to_1(map2, map1);
  auto & initial_pose1 = req1.initial_pose;
  auto & initial_pose2 = req2.initial_pose;
  Factory<geometry_msgs::PoseWithCovarianceStamped,geometry_msgs::msg::PoseWithCovarianceStamped>::convert_2_to_1(initial_pose2, initial_pose1);
}

template <>
void ServiceFactory<
  nav_msgs::SetMap,
  nav_msgs::srv::SetMap
>::translate_2_to_1(
  const nav_msgs::srv::SetMap::Response& req2,
  nav_msgs::SetMap::Response& req1
) {
  auto & success1 = req1.success;
  auto & success2 = req2.success;
  success1 = success2;
}

}  // namespace ros1_bridge
