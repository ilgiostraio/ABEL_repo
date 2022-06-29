// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "gazebo_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <gazebo_msgs/BodyRequest.h>

// include ROS 2 services
#include <gazebo_msgs/srv/body_request.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_gazebo_msgs__srv__BodyRequest(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__BodyRequest(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "gazebo_msgs" &&
      service_name == "BodyRequest"
    ) || (
      ros_id == "ros2" &&
      package_name == "gazebo_msgs" &&
      service_name == "srv/BodyRequest"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      gazebo_msgs::BodyRequest,
      gazebo_msgs::srv::BodyRequest
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  gazebo_msgs::BodyRequest,
  gazebo_msgs::srv::BodyRequest
>::translate_1_to_2(
  const gazebo_msgs::BodyRequest::Request& req1,
  gazebo_msgs::srv::BodyRequest::Request& req2
) {
  auto & body_name1 = req1.body_name;
  auto & body_name2 = req2.body_name;
  body_name2 = body_name1;
}

template <>
void ServiceFactory<
  gazebo_msgs::BodyRequest,
  gazebo_msgs::srv::BodyRequest
>::translate_1_to_2(
  const gazebo_msgs::BodyRequest::Response& req1,
  gazebo_msgs::srv::BodyRequest::Response& req2
) {
}

template <>
void ServiceFactory<
  gazebo_msgs::BodyRequest,
  gazebo_msgs::srv::BodyRequest
>::translate_2_to_1(
  const gazebo_msgs::srv::BodyRequest::Request& req2,
  gazebo_msgs::BodyRequest::Request& req1
) {
  auto & body_name1 = req1.body_name;
  auto & body_name2 = req2.body_name;
  body_name1 = body_name2;
}

template <>
void ServiceFactory<
  gazebo_msgs::BodyRequest,
  gazebo_msgs::srv::BodyRequest
>::translate_2_to_1(
  const gazebo_msgs::srv::BodyRequest::Response& req2,
  gazebo_msgs::BodyRequest::Response& req1
) {
}

}  // namespace ros1_bridge
