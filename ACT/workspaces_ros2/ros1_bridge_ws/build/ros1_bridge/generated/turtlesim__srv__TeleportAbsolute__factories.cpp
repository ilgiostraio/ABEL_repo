// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "turtlesim_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <turtlesim/TeleportAbsolute.h>

// include ROS 2 services
#include <turtlesim/srv/teleport_absolute.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_turtlesim__srv__TeleportAbsolute(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_turtlesim__srv__TeleportAbsolute(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "turtlesim" &&
      service_name == "TeleportAbsolute"
    ) || (
      ros_id == "ros2" &&
      package_name == "turtlesim" &&
      service_name == "srv/TeleportAbsolute"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      turtlesim::TeleportAbsolute,
      turtlesim::srv::TeleportAbsolute
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  turtlesim::TeleportAbsolute,
  turtlesim::srv::TeleportAbsolute
>::translate_1_to_2(
  const turtlesim::TeleportAbsolute::Request& req1,
  turtlesim::srv::TeleportAbsolute::Request& req2
) {
  auto & x1 = req1.x;
  auto & x2 = req2.x;
  x2 = x1;
  auto & y1 = req1.y;
  auto & y2 = req2.y;
  y2 = y1;
  auto & theta1 = req1.theta;
  auto & theta2 = req2.theta;
  theta2 = theta1;
}

template <>
void ServiceFactory<
  turtlesim::TeleportAbsolute,
  turtlesim::srv::TeleportAbsolute
>::translate_1_to_2(
  const turtlesim::TeleportAbsolute::Response& req1,
  turtlesim::srv::TeleportAbsolute::Response& req2
) {
}

template <>
void ServiceFactory<
  turtlesim::TeleportAbsolute,
  turtlesim::srv::TeleportAbsolute
>::translate_2_to_1(
  const turtlesim::srv::TeleportAbsolute::Request& req2,
  turtlesim::TeleportAbsolute::Request& req1
) {
  auto & x1 = req1.x;
  auto & x2 = req2.x;
  x1 = x2;
  auto & y1 = req1.y;
  auto & y2 = req2.y;
  y1 = y2;
  auto & theta1 = req1.theta;
  auto & theta2 = req2.theta;
  theta1 = theta2;
}

template <>
void ServiceFactory<
  turtlesim::TeleportAbsolute,
  turtlesim::srv::TeleportAbsolute
>::translate_2_to_1(
  const turtlesim::srv::TeleportAbsolute::Response& req2,
  turtlesim::TeleportAbsolute::Response& req1
) {
}

}  // namespace ros1_bridge
