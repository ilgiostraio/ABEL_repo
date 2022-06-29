// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "diagnostic_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <diagnostic_msgs/AddDiagnostics.h>

// include ROS 2 services
#include <diagnostic_msgs/srv/add_diagnostics.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_diagnostic_msgs__srv__AddDiagnostics(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_diagnostic_msgs__srv__AddDiagnostics(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "diagnostic_msgs" &&
      service_name == "AddDiagnostics"
    ) || (
      ros_id == "ros2" &&
      package_name == "diagnostic_msgs" &&
      service_name == "srv/AddDiagnostics"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      diagnostic_msgs::AddDiagnostics,
      diagnostic_msgs::srv::AddDiagnostics
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  diagnostic_msgs::AddDiagnostics,
  diagnostic_msgs::srv::AddDiagnostics
>::translate_1_to_2(
  const diagnostic_msgs::AddDiagnostics::Request& req1,
  diagnostic_msgs::srv::AddDiagnostics::Request& req2
) {
  auto & load_namespace1 = req1.load_namespace;
  auto & load_namespace2 = req2.load_namespace;
  load_namespace2 = load_namespace1;
}

template <>
void ServiceFactory<
  diagnostic_msgs::AddDiagnostics,
  diagnostic_msgs::srv::AddDiagnostics
>::translate_1_to_2(
  const diagnostic_msgs::AddDiagnostics::Response& req1,
  diagnostic_msgs::srv::AddDiagnostics::Response& req2
) {
  auto & success1 = req1.success;
  auto & success2 = req2.success;
  success2 = success1;
  auto & message1 = req1.message;
  auto & message2 = req2.message;
  message2 = message1;
}

template <>
void ServiceFactory<
  diagnostic_msgs::AddDiagnostics,
  diagnostic_msgs::srv::AddDiagnostics
>::translate_2_to_1(
  const diagnostic_msgs::srv::AddDiagnostics::Request& req2,
  diagnostic_msgs::AddDiagnostics::Request& req1
) {
  auto & load_namespace1 = req1.load_namespace;
  auto & load_namespace2 = req2.load_namespace;
  load_namespace1 = load_namespace2;
}

template <>
void ServiceFactory<
  diagnostic_msgs::AddDiagnostics,
  diagnostic_msgs::srv::AddDiagnostics
>::translate_2_to_1(
  const diagnostic_msgs::srv::AddDiagnostics::Response& req2,
  diagnostic_msgs::AddDiagnostics::Response& req1
) {
  auto & success1 = req1.success;
  auto & success2 = req2.success;
  success1 = success2;
  auto & message1 = req1.message;
  auto & message2 = req2.message;
  message1 = message2;
}

}  // namespace ros1_bridge
