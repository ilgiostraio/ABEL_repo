// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "map_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <map_msgs/SaveMap.h>

// include ROS 2 services
#include <map_msgs/srv/save_map.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_map_msgs__srv__SaveMap(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_map_msgs__srv__SaveMap(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "map_msgs" &&
      service_name == "SaveMap"
    ) || (
      ros_id == "ros2" &&
      package_name == "map_msgs" &&
      service_name == "srv/SaveMap"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      map_msgs::SaveMap,
      map_msgs::srv::SaveMap
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  map_msgs::SaveMap,
  map_msgs::srv::SaveMap
>::translate_1_to_2(
  const map_msgs::SaveMap::Request& req1,
  map_msgs::srv::SaveMap::Request& req2
) {
  auto & filename1 = req1.filename;
  auto & filename2 = req2.filename;
  Factory<std_msgs::String,std_msgs::msg::String>::convert_1_to_2(filename1, filename2);
}

template <>
void ServiceFactory<
  map_msgs::SaveMap,
  map_msgs::srv::SaveMap
>::translate_1_to_2(
  const map_msgs::SaveMap::Response& req1,
  map_msgs::srv::SaveMap::Response& req2
) {
}

template <>
void ServiceFactory<
  map_msgs::SaveMap,
  map_msgs::srv::SaveMap
>::translate_2_to_1(
  const map_msgs::srv::SaveMap::Request& req2,
  map_msgs::SaveMap::Request& req1
) {
  auto & filename1 = req1.filename;
  auto & filename2 = req2.filename;
  Factory<std_msgs::String,std_msgs::msg::String>::convert_2_to_1(filename2, filename1);
}

template <>
void ServiceFactory<
  map_msgs::SaveMap,
  map_msgs::srv::SaveMap
>::translate_2_to_1(
  const map_msgs::srv::SaveMap::Response& req2,
  map_msgs::SaveMap::Response& req1
) {
}

}  // namespace ros1_bridge
