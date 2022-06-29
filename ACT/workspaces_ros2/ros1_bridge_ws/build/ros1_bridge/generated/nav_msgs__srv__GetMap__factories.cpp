// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "nav_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <nav_msgs/GetMap.h>

// include ROS 2 services
#include <nav_msgs/srv/get_map.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_nav_msgs__srv__GetMap(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_nav_msgs__srv__GetMap(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "nav_msgs" &&
      service_name == "GetMap"
    ) || (
      ros_id == "ros2" &&
      package_name == "nav_msgs" &&
      service_name == "srv/GetMap"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      nav_msgs::GetMap,
      nav_msgs::srv::GetMap
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  nav_msgs::GetMap,
  nav_msgs::srv::GetMap
>::translate_1_to_2(
  const nav_msgs::GetMap::Request& req1,
  nav_msgs::srv::GetMap::Request& req2
) {
}

template <>
void ServiceFactory<
  nav_msgs::GetMap,
  nav_msgs::srv::GetMap
>::translate_1_to_2(
  const nav_msgs::GetMap::Response& req1,
  nav_msgs::srv::GetMap::Response& req2
) {
  auto & map1 = req1.map;
  auto & map2 = req2.map;
  Factory<nav_msgs::OccupancyGrid,nav_msgs::msg::OccupancyGrid>::convert_1_to_2(map1, map2);
}

template <>
void ServiceFactory<
  nav_msgs::GetMap,
  nav_msgs::srv::GetMap
>::translate_2_to_1(
  const nav_msgs::srv::GetMap::Request& req2,
  nav_msgs::GetMap::Request& req1
) {
}

template <>
void ServiceFactory<
  nav_msgs::GetMap,
  nav_msgs::srv::GetMap
>::translate_2_to_1(
  const nav_msgs::srv::GetMap::Response& req2,
  nav_msgs::GetMap::Response& req1
) {
  auto & map1 = req1.map;
  auto & map2 = req2.map;
  Factory<nav_msgs::OccupancyGrid,nav_msgs::msg::OccupancyGrid>::convert_2_to_1(map2, map1);
}

}  // namespace ros1_bridge
