// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "turtlesim_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <turtlesim/SetPen.h>

// include ROS 2 services
#include <turtlesim/srv/set_pen.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_turtlesim__srv__SetPen(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_turtlesim__srv__SetPen(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "turtlesim" &&
      service_name == "SetPen"
    ) || (
      ros_id == "ros2" &&
      package_name == "turtlesim" &&
      service_name == "srv/SetPen"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      turtlesim::SetPen,
      turtlesim::srv::SetPen
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  turtlesim::SetPen,
  turtlesim::srv::SetPen
>::translate_1_to_2(
  const turtlesim::SetPen::Request& req1,
  turtlesim::srv::SetPen::Request& req2
) {
  auto & r1 = req1.r;
  auto & r2 = req2.r;
  r2 = r1;
  auto & g1 = req1.g;
  auto & g2 = req2.g;
  g2 = g1;
  auto & b1 = req1.b;
  auto & b2 = req2.b;
  b2 = b1;
  auto & width1 = req1.width;
  auto & width2 = req2.width;
  width2 = width1;
  auto & off1 = req1.off;
  auto & off2 = req2.off;
  off2 = off1;
}

template <>
void ServiceFactory<
  turtlesim::SetPen,
  turtlesim::srv::SetPen
>::translate_1_to_2(
  const turtlesim::SetPen::Response& req1,
  turtlesim::srv::SetPen::Response& req2
) {
}

template <>
void ServiceFactory<
  turtlesim::SetPen,
  turtlesim::srv::SetPen
>::translate_2_to_1(
  const turtlesim::srv::SetPen::Request& req2,
  turtlesim::SetPen::Request& req1
) {
  auto & r1 = req1.r;
  auto & r2 = req2.r;
  r1 = r2;
  auto & g1 = req1.g;
  auto & g2 = req2.g;
  g1 = g2;
  auto & b1 = req1.b;
  auto & b2 = req2.b;
  b1 = b2;
  auto & width1 = req1.width;
  auto & width2 = req2.width;
  width1 = width2;
  auto & off1 = req1.off;
  auto & off2 = req2.off;
  off1 = off2;
}

template <>
void ServiceFactory<
  turtlesim::SetPen,
  turtlesim::srv::SetPen
>::translate_2_to_1(
  const turtlesim::srv::SetPen::Response& req2,
  turtlesim::SetPen::Response& req1
) {
}

}  // namespace ros1_bridge
