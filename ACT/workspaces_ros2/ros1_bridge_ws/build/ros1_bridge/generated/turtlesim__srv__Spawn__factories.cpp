// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "turtlesim_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <turtlesim/Spawn.h>

// include ROS 2 services
#include <turtlesim/srv/spawn.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_turtlesim__srv__Spawn(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_turtlesim__srv__Spawn(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "turtlesim" &&
      service_name == "Spawn"
    ) || (
      ros_id == "ros2" &&
      package_name == "turtlesim" &&
      service_name == "srv/Spawn"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      turtlesim::Spawn,
      turtlesim::srv::Spawn
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  turtlesim::Spawn,
  turtlesim::srv::Spawn
>::translate_1_to_2(
  const turtlesim::Spawn::Request& req1,
  turtlesim::srv::Spawn::Request& req2
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
  auto & name1 = req1.name;
  auto & name2 = req2.name;
  name2 = name1;
}

template <>
void ServiceFactory<
  turtlesim::Spawn,
  turtlesim::srv::Spawn
>::translate_1_to_2(
  const turtlesim::Spawn::Response& req1,
  turtlesim::srv::Spawn::Response& req2
) {
  auto & name1 = req1.name;
  auto & name2 = req2.name;
  name2 = name1;
}

template <>
void ServiceFactory<
  turtlesim::Spawn,
  turtlesim::srv::Spawn
>::translate_2_to_1(
  const turtlesim::srv::Spawn::Request& req2,
  turtlesim::Spawn::Request& req1
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
  auto & name1 = req1.name;
  auto & name2 = req2.name;
  name1 = name2;
}

template <>
void ServiceFactory<
  turtlesim::Spawn,
  turtlesim::srv::Spawn
>::translate_2_to_1(
  const turtlesim::srv::Spawn::Response& req2,
  turtlesim::Spawn::Response& req1
) {
  auto & name1 = req1.name;
  auto & name2 = req2.name;
  name1 = name2;
}

}  // namespace ros1_bridge
