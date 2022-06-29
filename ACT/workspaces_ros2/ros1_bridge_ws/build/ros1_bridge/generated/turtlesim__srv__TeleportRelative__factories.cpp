// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "turtlesim_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <turtlesim/TeleportRelative.h>

// include ROS 2 services
#include <turtlesim/srv/teleport_relative.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_turtlesim__srv__TeleportRelative(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_turtlesim__srv__TeleportRelative(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "turtlesim" &&
      service_name == "TeleportRelative"
    ) || (
      ros_id == "ros2" &&
      package_name == "turtlesim" &&
      service_name == "srv/TeleportRelative"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      turtlesim::TeleportRelative,
      turtlesim::srv::TeleportRelative
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  turtlesim::TeleportRelative,
  turtlesim::srv::TeleportRelative
>::translate_1_to_2(
  const turtlesim::TeleportRelative::Request& req1,
  turtlesim::srv::TeleportRelative::Request& req2
) {
  auto & linear1 = req1.linear;
  auto & linear2 = req2.linear;
  linear2 = linear1;
  auto & angular1 = req1.angular;
  auto & angular2 = req2.angular;
  angular2 = angular1;
}

template <>
void ServiceFactory<
  turtlesim::TeleportRelative,
  turtlesim::srv::TeleportRelative
>::translate_1_to_2(
  const turtlesim::TeleportRelative::Response& req1,
  turtlesim::srv::TeleportRelative::Response& req2
) {
}

template <>
void ServiceFactory<
  turtlesim::TeleportRelative,
  turtlesim::srv::TeleportRelative
>::translate_2_to_1(
  const turtlesim::srv::TeleportRelative::Request& req2,
  turtlesim::TeleportRelative::Request& req1
) {
  auto & linear1 = req1.linear;
  auto & linear2 = req2.linear;
  linear1 = linear2;
  auto & angular1 = req1.angular;
  auto & angular2 = req2.angular;
  angular1 = angular2;
}

template <>
void ServiceFactory<
  turtlesim::TeleportRelative,
  turtlesim::srv::TeleportRelative
>::translate_2_to_1(
  const turtlesim::srv::TeleportRelative::Response& req2,
  turtlesim::TeleportRelative::Response& req1
) {
}

}  // namespace ros1_bridge
