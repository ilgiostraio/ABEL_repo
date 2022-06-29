// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "cartographer_ros_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <cartographer_ros_msgs/SubmapQuery.h>

// include ROS 2 services
#include <cartographer_ros_msgs/srv/submap_query.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_cartographer_ros_msgs__srv__SubmapQuery(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_cartographer_ros_msgs__srv__SubmapQuery(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "cartographer_ros_msgs" &&
      service_name == "SubmapQuery"
    ) || (
      ros_id == "ros2" &&
      package_name == "cartographer_ros_msgs" &&
      service_name == "srv/SubmapQuery"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      cartographer_ros_msgs::SubmapQuery,
      cartographer_ros_msgs::srv::SubmapQuery
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  cartographer_ros_msgs::SubmapQuery,
  cartographer_ros_msgs::srv::SubmapQuery
>::translate_1_to_2(
  const cartographer_ros_msgs::SubmapQuery::Request& req1,
  cartographer_ros_msgs::srv::SubmapQuery::Request& req2
) {
  auto & trajectory_id1 = req1.trajectory_id;
  auto & trajectory_id2 = req2.trajectory_id;
  trajectory_id2 = trajectory_id1;
  auto & submap_index1 = req1.submap_index;
  auto & submap_index2 = req2.submap_index;
  submap_index2 = submap_index1;
}

template <>
void ServiceFactory<
  cartographer_ros_msgs::SubmapQuery,
  cartographer_ros_msgs::srv::SubmapQuery
>::translate_1_to_2(
  const cartographer_ros_msgs::SubmapQuery::Response& req1,
  cartographer_ros_msgs::srv::SubmapQuery::Response& req2
) {
  auto & status1 = req1.status;
  auto & status2 = req2.status;
  Factory<cartographer_ros_msgs::StatusResponse,cartographer_ros_msgs::msg::StatusResponse>::convert_1_to_2(status1, status2);
  auto & submap_version1 = req1.submap_version;
  auto & submap_version2 = req2.submap_version;
  submap_version2 = submap_version1;
  req2.textures.resize(req1.textures.size());
  auto textures1_it = req1.textures.begin();
  auto textures2_it = req2.textures.begin();
  while (
    textures1_it != req1.textures.end() &&
    textures2_it != req2.textures.end()
  ) {
    auto & textures1 = *(textures1_it++);
    auto & textures2 = *(textures2_it++);
  Factory<cartographer_ros_msgs::SubmapTexture,cartographer_ros_msgs::msg::SubmapTexture>::convert_1_to_2(textures1, textures2);
  }
}

template <>
void ServiceFactory<
  cartographer_ros_msgs::SubmapQuery,
  cartographer_ros_msgs::srv::SubmapQuery
>::translate_2_to_1(
  const cartographer_ros_msgs::srv::SubmapQuery::Request& req2,
  cartographer_ros_msgs::SubmapQuery::Request& req1
) {
  auto & trajectory_id1 = req1.trajectory_id;
  auto & trajectory_id2 = req2.trajectory_id;
  trajectory_id1 = trajectory_id2;
  auto & submap_index1 = req1.submap_index;
  auto & submap_index2 = req2.submap_index;
  submap_index1 = submap_index2;
}

template <>
void ServiceFactory<
  cartographer_ros_msgs::SubmapQuery,
  cartographer_ros_msgs::srv::SubmapQuery
>::translate_2_to_1(
  const cartographer_ros_msgs::srv::SubmapQuery::Response& req2,
  cartographer_ros_msgs::SubmapQuery::Response& req1
) {
  auto & status1 = req1.status;
  auto & status2 = req2.status;
  Factory<cartographer_ros_msgs::StatusResponse,cartographer_ros_msgs::msg::StatusResponse>::convert_2_to_1(status2, status1);
  auto & submap_version1 = req1.submap_version;
  auto & submap_version2 = req2.submap_version;
  submap_version1 = submap_version2;
  req1.textures.resize(req2.textures.size());
  auto textures1_it = req1.textures.begin();
  auto textures2_it = req2.textures.begin();
  while (
    textures1_it != req1.textures.end() &&
    textures2_it != req2.textures.end()
  ) {
    auto & textures1 = *(textures1_it++);
    auto & textures2 = *(textures2_it++);
  Factory<cartographer_ros_msgs::SubmapTexture,cartographer_ros_msgs::msg::SubmapTexture>::convert_2_to_1(textures2, textures1);
  }
}

}  // namespace ros1_bridge
