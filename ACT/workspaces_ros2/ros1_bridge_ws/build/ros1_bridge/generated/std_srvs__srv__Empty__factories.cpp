// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "std_srvs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <std_srvs/Empty.h>

// include ROS 2 services
#include <std_srvs/srv/empty.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_std_srvs__srv__Empty(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_std_srvs__srv__Empty(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "std_srvs" &&
      service_name == "Empty"
    ) || (
      ros_id == "ros2" &&
      package_name == "std_srvs" &&
      service_name == "srv/Empty"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      std_srvs::Empty,
      std_srvs::srv::Empty
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  std_srvs::Empty,
  std_srvs::srv::Empty
>::translate_1_to_2(
  const std_srvs::Empty::Request& req1,
  std_srvs::srv::Empty::Request& req2
) {
}

template <>
void ServiceFactory<
  std_srvs::Empty,
  std_srvs::srv::Empty
>::translate_1_to_2(
  const std_srvs::Empty::Response& req1,
  std_srvs::srv::Empty::Response& req2
) {
}

template <>
void ServiceFactory<
  std_srvs::Empty,
  std_srvs::srv::Empty
>::translate_2_to_1(
  const std_srvs::srv::Empty::Request& req2,
  std_srvs::Empty::Request& req1
) {
}

template <>
void ServiceFactory<
  std_srvs::Empty,
  std_srvs::srv::Empty
>::translate_2_to_1(
  const std_srvs::srv::Empty::Response& req2,
  std_srvs::Empty::Response& req1
) {
}

}  // namespace ros1_bridge
