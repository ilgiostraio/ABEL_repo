// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "std_srvs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <std_srvs/SetBool.h>

// include ROS 2 services
#include <std_srvs/srv/set_bool.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_std_srvs__srv__SetBool(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_std_srvs__srv__SetBool(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "std_srvs" &&
      service_name == "SetBool"
    ) || (
      ros_id == "ros2" &&
      package_name == "std_srvs" &&
      service_name == "srv/SetBool"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      std_srvs::SetBool,
      std_srvs::srv::SetBool
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  std_srvs::SetBool,
  std_srvs::srv::SetBool
>::translate_1_to_2(
  const std_srvs::SetBool::Request& req1,
  std_srvs::srv::SetBool::Request& req2
) {
  auto & data1 = req1.data;
  auto & data2 = req2.data;
  data2 = data1;
}

template <>
void ServiceFactory<
  std_srvs::SetBool,
  std_srvs::srv::SetBool
>::translate_1_to_2(
  const std_srvs::SetBool::Response& req1,
  std_srvs::srv::SetBool::Response& req2
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
  std_srvs::SetBool,
  std_srvs::srv::SetBool
>::translate_2_to_1(
  const std_srvs::srv::SetBool::Request& req2,
  std_srvs::SetBool::Request& req1
) {
  auto & data1 = req1.data;
  auto & data2 = req2.data;
  data1 = data2;
}

template <>
void ServiceFactory<
  std_srvs::SetBool,
  std_srvs::srv::SetBool
>::translate_2_to_1(
  const std_srvs::srv::SetBool::Response& req2,
  std_srvs::SetBool::Response& req1
) {
  auto & success1 = req1.success;
  auto & success2 = req2.success;
  success1 = success2;
  auto & message1 = req1.message;
  auto & message2 = req2.message;
  message1 = message2;
}

}  // namespace ros1_bridge
