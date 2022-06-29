// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "map_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <map_msgs/SetMapProjections.h>

// include ROS 2 services
#include <map_msgs/srv/set_map_projections.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_map_msgs__srv__SetMapProjections(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_map_msgs__srv__SetMapProjections(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "map_msgs" &&
      service_name == "SetMapProjections"
    ) || (
      ros_id == "ros2" &&
      package_name == "map_msgs" &&
      service_name == "srv/SetMapProjections"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      map_msgs::SetMapProjections,
      map_msgs::srv::SetMapProjections
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  map_msgs::SetMapProjections,
  map_msgs::srv::SetMapProjections
>::translate_1_to_2(
  const map_msgs::SetMapProjections::Request& req1,
  map_msgs::srv::SetMapProjections::Request& req2
) {
}

template <>
void ServiceFactory<
  map_msgs::SetMapProjections,
  map_msgs::srv::SetMapProjections
>::translate_1_to_2(
  const map_msgs::SetMapProjections::Response& req1,
  map_msgs::srv::SetMapProjections::Response& req2
) {
  req2.projected_maps_info.resize(req1.projected_maps_info.size());
  auto projected_maps_info1_it = req1.projected_maps_info.begin();
  auto projected_maps_info2_it = req2.projected_maps_info.begin();
  while (
    projected_maps_info1_it != req1.projected_maps_info.end() &&
    projected_maps_info2_it != req2.projected_maps_info.end()
  ) {
    auto & projected_maps_info1 = *(projected_maps_info1_it++);
    auto & projected_maps_info2 = *(projected_maps_info2_it++);
  Factory<map_msgs::ProjectedMapInfo,map_msgs::msg::ProjectedMapInfo>::convert_1_to_2(projected_maps_info1, projected_maps_info2);
  }
}

template <>
void ServiceFactory<
  map_msgs::SetMapProjections,
  map_msgs::srv::SetMapProjections
>::translate_2_to_1(
  const map_msgs::srv::SetMapProjections::Request& req2,
  map_msgs::SetMapProjections::Request& req1
) {
}

template <>
void ServiceFactory<
  map_msgs::SetMapProjections,
  map_msgs::srv::SetMapProjections
>::translate_2_to_1(
  const map_msgs::srv::SetMapProjections::Response& req2,
  map_msgs::SetMapProjections::Response& req1
) {
  req1.projected_maps_info.resize(req2.projected_maps_info.size());
  auto projected_maps_info1_it = req1.projected_maps_info.begin();
  auto projected_maps_info2_it = req2.projected_maps_info.begin();
  while (
    projected_maps_info1_it != req1.projected_maps_info.end() &&
    projected_maps_info2_it != req2.projected_maps_info.end()
  ) {
    auto & projected_maps_info1 = *(projected_maps_info1_it++);
    auto & projected_maps_info2 = *(projected_maps_info2_it++);
  Factory<map_msgs::ProjectedMapInfo,map_msgs::msg::ProjectedMapInfo>::convert_2_to_1(projected_maps_info2, projected_maps_info1);
  }
}

}  // namespace ros1_bridge
