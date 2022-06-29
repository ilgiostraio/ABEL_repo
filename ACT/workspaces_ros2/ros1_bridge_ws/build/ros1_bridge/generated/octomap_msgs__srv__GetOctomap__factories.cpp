// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "octomap_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <octomap_msgs/GetOctomap.h>

// include ROS 2 services
#include <octomap_msgs/srv/get_octomap.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_octomap_msgs__srv__GetOctomap(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_octomap_msgs__srv__GetOctomap(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "octomap_msgs" &&
      service_name == "GetOctomap"
    ) || (
      ros_id == "ros2" &&
      package_name == "octomap_msgs" &&
      service_name == "srv/GetOctomap"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      octomap_msgs::GetOctomap,
      octomap_msgs::srv::GetOctomap
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  octomap_msgs::GetOctomap,
  octomap_msgs::srv::GetOctomap
>::translate_1_to_2(
  const octomap_msgs::GetOctomap::Request& req1,
  octomap_msgs::srv::GetOctomap::Request& req2
) {
}

template <>
void ServiceFactory<
  octomap_msgs::GetOctomap,
  octomap_msgs::srv::GetOctomap
>::translate_1_to_2(
  const octomap_msgs::GetOctomap::Response& req1,
  octomap_msgs::srv::GetOctomap::Response& req2
) {
  auto & map1 = req1.map;
  auto & map2 = req2.map;
  Factory<octomap_msgs::Octomap,octomap_msgs::msg::Octomap>::convert_1_to_2(map1, map2);
}

template <>
void ServiceFactory<
  octomap_msgs::GetOctomap,
  octomap_msgs::srv::GetOctomap
>::translate_2_to_1(
  const octomap_msgs::srv::GetOctomap::Request& req2,
  octomap_msgs::GetOctomap::Request& req1
) {
}

template <>
void ServiceFactory<
  octomap_msgs::GetOctomap,
  octomap_msgs::srv::GetOctomap
>::translate_2_to_1(
  const octomap_msgs::srv::GetOctomap::Response& req2,
  octomap_msgs::GetOctomap::Response& req1
) {
  auto & map1 = req1.map;
  auto & map2 = req2.map;
  Factory<octomap_msgs::Octomap,octomap_msgs::msg::Octomap>::convert_2_to_1(map2, map1);
}

}  // namespace ros1_bridge
