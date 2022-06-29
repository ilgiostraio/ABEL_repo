// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "map_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <map_msgs/GetPointMapROI.h>

// include ROS 2 services
#include <map_msgs/srv/get_point_map_roi.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_map_msgs__srv__GetPointMapROI(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_map_msgs__srv__GetPointMapROI(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "map_msgs" &&
      service_name == "GetPointMapROI"
    ) || (
      ros_id == "ros2" &&
      package_name == "map_msgs" &&
      service_name == "srv/GetPointMapROI"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      map_msgs::GetPointMapROI,
      map_msgs::srv::GetPointMapROI
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  map_msgs::GetPointMapROI,
  map_msgs::srv::GetPointMapROI
>::translate_1_to_2(
  const map_msgs::GetPointMapROI::Request& req1,
  map_msgs::srv::GetPointMapROI::Request& req2
) {
  auto & x1 = req1.x;
  auto & x2 = req2.x;
  x2 = x1;
  auto & y1 = req1.y;
  auto & y2 = req2.y;
  y2 = y1;
  auto & z1 = req1.z;
  auto & z2 = req2.z;
  z2 = z1;
  auto & r1 = req1.r;
  auto & r2 = req2.r;
  r2 = r1;
  auto & l_x1 = req1.l_x;
  auto & l_x2 = req2.l_x;
  l_x2 = l_x1;
  auto & l_y1 = req1.l_y;
  auto & l_y2 = req2.l_y;
  l_y2 = l_y1;
  auto & l_z1 = req1.l_z;
  auto & l_z2 = req2.l_z;
  l_z2 = l_z1;
}

template <>
void ServiceFactory<
  map_msgs::GetPointMapROI,
  map_msgs::srv::GetPointMapROI
>::translate_1_to_2(
  const map_msgs::GetPointMapROI::Response& req1,
  map_msgs::srv::GetPointMapROI::Response& req2
) {
  auto & sub_map1 = req1.sub_map;
  auto & sub_map2 = req2.sub_map;
  Factory<sensor_msgs::PointCloud2,sensor_msgs::msg::PointCloud2>::convert_1_to_2(sub_map1, sub_map2);
}

template <>
void ServiceFactory<
  map_msgs::GetPointMapROI,
  map_msgs::srv::GetPointMapROI
>::translate_2_to_1(
  const map_msgs::srv::GetPointMapROI::Request& req2,
  map_msgs::GetPointMapROI::Request& req1
) {
  auto & x1 = req1.x;
  auto & x2 = req2.x;
  x1 = x2;
  auto & y1 = req1.y;
  auto & y2 = req2.y;
  y1 = y2;
  auto & z1 = req1.z;
  auto & z2 = req2.z;
  z1 = z2;
  auto & r1 = req1.r;
  auto & r2 = req2.r;
  r1 = r2;
  auto & l_x1 = req1.l_x;
  auto & l_x2 = req2.l_x;
  l_x1 = l_x2;
  auto & l_y1 = req1.l_y;
  auto & l_y2 = req2.l_y;
  l_y1 = l_y2;
  auto & l_z1 = req1.l_z;
  auto & l_z2 = req2.l_z;
  l_z1 = l_z2;
}

template <>
void ServiceFactory<
  map_msgs::GetPointMapROI,
  map_msgs::srv::GetPointMapROI
>::translate_2_to_1(
  const map_msgs::srv::GetPointMapROI::Response& req2,
  map_msgs::GetPointMapROI::Response& req1
) {
  auto & sub_map1 = req1.sub_map;
  auto & sub_map2 = req2.sub_map;
  Factory<sensor_msgs::PointCloud2,sensor_msgs::msg::PointCloud2>::convert_2_to_1(sub_map2, sub_map1);
}

}  // namespace ros1_bridge
