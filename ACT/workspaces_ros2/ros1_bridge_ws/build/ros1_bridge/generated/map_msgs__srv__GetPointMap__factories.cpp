// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "map_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <map_msgs/GetPointMap.h>

// include ROS 2 services
#include <map_msgs/srv/get_point_map.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_map_msgs__srv__GetPointMap(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_map_msgs__srv__GetPointMap(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "map_msgs" &&
      service_name == "GetPointMap"
    ) || (
      ros_id == "ros2" &&
      package_name == "map_msgs" &&
      service_name == "srv/GetPointMap"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      map_msgs::GetPointMap,
      map_msgs::srv::GetPointMap
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  map_msgs::GetPointMap,
  map_msgs::srv::GetPointMap
>::translate_1_to_2(
  const map_msgs::GetPointMap::Request& req1,
  map_msgs::srv::GetPointMap::Request& req2
) {
}

template <>
void ServiceFactory<
  map_msgs::GetPointMap,
  map_msgs::srv::GetPointMap
>::translate_1_to_2(
  const map_msgs::GetPointMap::Response& req1,
  map_msgs::srv::GetPointMap::Response& req2
) {
  auto & map1 = req1.map;
  auto & map2 = req2.map;
  Factory<sensor_msgs::PointCloud2,sensor_msgs::msg::PointCloud2>::convert_1_to_2(map1, map2);
}

template <>
void ServiceFactory<
  map_msgs::GetPointMap,
  map_msgs::srv::GetPointMap
>::translate_2_to_1(
  const map_msgs::srv::GetPointMap::Request& req2,
  map_msgs::GetPointMap::Request& req1
) {
}

template <>
void ServiceFactory<
  map_msgs::GetPointMap,
  map_msgs::srv::GetPointMap
>::translate_2_to_1(
  const map_msgs::srv::GetPointMap::Response& req2,
  map_msgs::GetPointMap::Response& req1
) {
  auto & map1 = req1.map;
  auto & map2 = req2.map;
  Factory<sensor_msgs::PointCloud2,sensor_msgs::msg::PointCloud2>::convert_2_to_1(map2, map1);
}

}  // namespace ros1_bridge
