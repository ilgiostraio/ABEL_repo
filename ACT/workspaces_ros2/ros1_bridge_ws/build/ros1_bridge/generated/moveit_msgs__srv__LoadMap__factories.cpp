// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "moveit_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <moveit_msgs/LoadMap.h>

// include ROS 2 services
#include <moveit_msgs/srv/load_map.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__srv__LoadMap(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__LoadMap(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "moveit_msgs" &&
      service_name == "LoadMap"
    ) || (
      ros_id == "ros2" &&
      package_name == "moveit_msgs" &&
      service_name == "srv/LoadMap"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      moveit_msgs::LoadMap,
      moveit_msgs::srv::LoadMap
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  moveit_msgs::LoadMap,
  moveit_msgs::srv::LoadMap
>::translate_1_to_2(
  const moveit_msgs::LoadMap::Request& req1,
  moveit_msgs::srv::LoadMap::Request& req2
) {
  auto & filename1 = req1.filename;
  auto & filename2 = req2.filename;
  filename2 = filename1;
}

template <>
void ServiceFactory<
  moveit_msgs::LoadMap,
  moveit_msgs::srv::LoadMap
>::translate_1_to_2(
  const moveit_msgs::LoadMap::Response& req1,
  moveit_msgs::srv::LoadMap::Response& req2
) {
  auto & success1 = req1.success;
  auto & success2 = req2.success;
  success2 = success1;
}

template <>
void ServiceFactory<
  moveit_msgs::LoadMap,
  moveit_msgs::srv::LoadMap
>::translate_2_to_1(
  const moveit_msgs::srv::LoadMap::Request& req2,
  moveit_msgs::LoadMap::Request& req1
) {
  auto & filename1 = req1.filename;
  auto & filename2 = req2.filename;
  filename1 = filename2;
}

template <>
void ServiceFactory<
  moveit_msgs::LoadMap,
  moveit_msgs::srv::LoadMap
>::translate_2_to_1(
  const moveit_msgs::srv::LoadMap::Response& req2,
  moveit_msgs::LoadMap::Response& req1
) {
  auto & success1 = req1.success;
  auto & success2 = req2.success;
  success1 = success2;
}

}  // namespace ros1_bridge
