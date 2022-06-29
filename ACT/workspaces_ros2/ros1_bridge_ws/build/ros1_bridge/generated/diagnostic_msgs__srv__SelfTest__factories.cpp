// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "diagnostic_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <diagnostic_msgs/SelfTest.h>

// include ROS 2 services
#include <diagnostic_msgs/srv/self_test.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_diagnostic_msgs__srv__SelfTest(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_diagnostic_msgs__srv__SelfTest(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "diagnostic_msgs" &&
      service_name == "SelfTest"
    ) || (
      ros_id == "ros2" &&
      package_name == "diagnostic_msgs" &&
      service_name == "srv/SelfTest"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      diagnostic_msgs::SelfTest,
      diagnostic_msgs::srv::SelfTest
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  diagnostic_msgs::SelfTest,
  diagnostic_msgs::srv::SelfTest
>::translate_1_to_2(
  const diagnostic_msgs::SelfTest::Request& req1,
  diagnostic_msgs::srv::SelfTest::Request& req2
) {
}

template <>
void ServiceFactory<
  diagnostic_msgs::SelfTest,
  diagnostic_msgs::srv::SelfTest
>::translate_1_to_2(
  const diagnostic_msgs::SelfTest::Response& req1,
  diagnostic_msgs::srv::SelfTest::Response& req2
) {
  auto & id1 = req1.id;
  auto & id2 = req2.id;
  id2 = id1;
  auto & passed1 = req1.passed;
  auto & passed2 = req2.passed;
  passed2 = passed1;
  req2.status.resize(req1.status.size());
  auto status1_it = req1.status.begin();
  auto status2_it = req2.status.begin();
  while (
    status1_it != req1.status.end() &&
    status2_it != req2.status.end()
  ) {
    auto & status1 = *(status1_it++);
    auto & status2 = *(status2_it++);
  Factory<diagnostic_msgs::DiagnosticStatus,diagnostic_msgs::msg::DiagnosticStatus>::convert_1_to_2(status1, status2);
  }
}

template <>
void ServiceFactory<
  diagnostic_msgs::SelfTest,
  diagnostic_msgs::srv::SelfTest
>::translate_2_to_1(
  const diagnostic_msgs::srv::SelfTest::Request& req2,
  diagnostic_msgs::SelfTest::Request& req1
) {
}

template <>
void ServiceFactory<
  diagnostic_msgs::SelfTest,
  diagnostic_msgs::srv::SelfTest
>::translate_2_to_1(
  const diagnostic_msgs::srv::SelfTest::Response& req2,
  diagnostic_msgs::SelfTest::Response& req1
) {
  auto & id1 = req1.id;
  auto & id2 = req2.id;
  id1 = id2;
  auto & passed1 = req1.passed;
  auto & passed2 = req2.passed;
  passed1 = passed2;
  req1.status.resize(req2.status.size());
  auto status1_it = req1.status.begin();
  auto status2_it = req2.status.begin();
  while (
    status1_it != req1.status.end() &&
    status2_it != req2.status.end()
  ) {
    auto & status1 = *(status1_it++);
    auto & status2 = *(status2_it++);
  Factory<diagnostic_msgs::DiagnosticStatus,diagnostic_msgs::msg::DiagnosticStatus>::convert_2_to_1(status2, status1);
  }
}

}  // namespace ros1_bridge
