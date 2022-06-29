// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "turtlesim_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <turtlesim/Kill.h>

// include ROS 2 services
#include <turtlesim/srv/kill.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_turtlesim__srv__Kill(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_turtlesim__srv__Kill(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "turtlesim" &&
      service_name == "Kill"
    ) || (
      ros_id == "ros2" &&
      package_name == "turtlesim" &&
      service_name == "srv/Kill"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      turtlesim::Kill,
      turtlesim::srv::Kill
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  turtlesim::Kill,
  turtlesim::srv::Kill
>::translate_1_to_2(
  const turtlesim::Kill::Request& req1,
  turtlesim::srv::Kill::Request& req2
) {
  auto & name1 = req1.name;
  auto & name2 = req2.name;
  name2 = name1;
}

template <>
void ServiceFactory<
  turtlesim::Kill,
  turtlesim::srv::Kill
>::translate_1_to_2(
  const turtlesim::Kill::Response& req1,
  turtlesim::srv::Kill::Response& req2
) {
}

template <>
void ServiceFactory<
  turtlesim::Kill,
  turtlesim::srv::Kill
>::translate_2_to_1(
  const turtlesim::srv::Kill::Request& req2,
  turtlesim::Kill::Request& req1
) {
  auto & name1 = req1.name;
  auto & name2 = req2.name;
  name1 = name2;
}

template <>
void ServiceFactory<
  turtlesim::Kill,
  turtlesim::srv::Kill
>::translate_2_to_1(
  const turtlesim::srv::Kill::Response& req2,
  turtlesim::Kill::Response& req1
) {
}

}  // namespace ros1_bridge
