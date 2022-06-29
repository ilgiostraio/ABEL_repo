// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "octomap_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <octomap_msgs/BoundingBoxQuery.h>

// include ROS 2 services
#include <octomap_msgs/srv/bounding_box_query.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_octomap_msgs__srv__BoundingBoxQuery(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_octomap_msgs__srv__BoundingBoxQuery(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "octomap_msgs" &&
      service_name == "BoundingBoxQuery"
    ) || (
      ros_id == "ros2" &&
      package_name == "octomap_msgs" &&
      service_name == "srv/BoundingBoxQuery"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      octomap_msgs::BoundingBoxQuery,
      octomap_msgs::srv::BoundingBoxQuery
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  octomap_msgs::BoundingBoxQuery,
  octomap_msgs::srv::BoundingBoxQuery
>::translate_1_to_2(
  const octomap_msgs::BoundingBoxQuery::Request& req1,
  octomap_msgs::srv::BoundingBoxQuery::Request& req2
) {
  auto & min1 = req1.min;
  auto & min2 = req2.min;
  Factory<geometry_msgs::Point,geometry_msgs::msg::Point>::convert_1_to_2(min1, min2);
  auto & max1 = req1.max;
  auto & max2 = req2.max;
  Factory<geometry_msgs::Point,geometry_msgs::msg::Point>::convert_1_to_2(max1, max2);
}

template <>
void ServiceFactory<
  octomap_msgs::BoundingBoxQuery,
  octomap_msgs::srv::BoundingBoxQuery
>::translate_1_to_2(
  const octomap_msgs::BoundingBoxQuery::Response& req1,
  octomap_msgs::srv::BoundingBoxQuery::Response& req2
) {
}

template <>
void ServiceFactory<
  octomap_msgs::BoundingBoxQuery,
  octomap_msgs::srv::BoundingBoxQuery
>::translate_2_to_1(
  const octomap_msgs::srv::BoundingBoxQuery::Request& req2,
  octomap_msgs::BoundingBoxQuery::Request& req1
) {
  auto & min1 = req1.min;
  auto & min2 = req2.min;
  Factory<geometry_msgs::Point,geometry_msgs::msg::Point>::convert_2_to_1(min2, min1);
  auto & max1 = req1.max;
  auto & max2 = req2.max;
  Factory<geometry_msgs::Point,geometry_msgs::msg::Point>::convert_2_to_1(max2, max1);
}

template <>
void ServiceFactory<
  octomap_msgs::BoundingBoxQuery,
  octomap_msgs::srv::BoundingBoxQuery
>::translate_2_to_1(
  const octomap_msgs::srv::BoundingBoxQuery::Response& req2,
  octomap_msgs::BoundingBoxQuery::Response& req1
) {
}

}  // namespace ros1_bridge
