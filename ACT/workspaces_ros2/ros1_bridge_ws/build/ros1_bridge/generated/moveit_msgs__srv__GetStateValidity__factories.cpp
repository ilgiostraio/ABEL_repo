// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "moveit_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <moveit_msgs/GetStateValidity.h>

// include ROS 2 services
#include <moveit_msgs/srv/get_state_validity.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__srv__GetStateValidity(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__GetStateValidity(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "moveit_msgs" &&
      service_name == "GetStateValidity"
    ) || (
      ros_id == "ros2" &&
      package_name == "moveit_msgs" &&
      service_name == "srv/GetStateValidity"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      moveit_msgs::GetStateValidity,
      moveit_msgs::srv::GetStateValidity
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  moveit_msgs::GetStateValidity,
  moveit_msgs::srv::GetStateValidity
>::translate_1_to_2(
  const moveit_msgs::GetStateValidity::Request& req1,
  moveit_msgs::srv::GetStateValidity::Request& req2
) {
  auto & robot_state1 = req1.robot_state;
  auto & robot_state2 = req2.robot_state;
  Factory<moveit_msgs::RobotState,moveit_msgs::msg::RobotState>::convert_1_to_2(robot_state1, robot_state2);
  auto & group_name1 = req1.group_name;
  auto & group_name2 = req2.group_name;
  group_name2 = group_name1;
  auto & constraints1 = req1.constraints;
  auto & constraints2 = req2.constraints;
  Factory<moveit_msgs::Constraints,moveit_msgs::msg::Constraints>::convert_1_to_2(constraints1, constraints2);
}

template <>
void ServiceFactory<
  moveit_msgs::GetStateValidity,
  moveit_msgs::srv::GetStateValidity
>::translate_1_to_2(
  const moveit_msgs::GetStateValidity::Response& req1,
  moveit_msgs::srv::GetStateValidity::Response& req2
) {
  auto & valid1 = req1.valid;
  auto & valid2 = req2.valid;
  valid2 = valid1;
  req2.contacts.resize(req1.contacts.size());
  auto contacts1_it = req1.contacts.begin();
  auto contacts2_it = req2.contacts.begin();
  while (
    contacts1_it != req1.contacts.end() &&
    contacts2_it != req2.contacts.end()
  ) {
    auto & contacts1 = *(contacts1_it++);
    auto & contacts2 = *(contacts2_it++);
  Factory<moveit_msgs::ContactInformation,moveit_msgs::msg::ContactInformation>::convert_1_to_2(contacts1, contacts2);
  }
  req2.cost_sources.resize(req1.cost_sources.size());
  auto cost_sources1_it = req1.cost_sources.begin();
  auto cost_sources2_it = req2.cost_sources.begin();
  while (
    cost_sources1_it != req1.cost_sources.end() &&
    cost_sources2_it != req2.cost_sources.end()
  ) {
    auto & cost_sources1 = *(cost_sources1_it++);
    auto & cost_sources2 = *(cost_sources2_it++);
  Factory<moveit_msgs::CostSource,moveit_msgs::msg::CostSource>::convert_1_to_2(cost_sources1, cost_sources2);
  }
  req2.constraint_result.resize(req1.constraint_result.size());
  auto constraint_result1_it = req1.constraint_result.begin();
  auto constraint_result2_it = req2.constraint_result.begin();
  while (
    constraint_result1_it != req1.constraint_result.end() &&
    constraint_result2_it != req2.constraint_result.end()
  ) {
    auto & constraint_result1 = *(constraint_result1_it++);
    auto & constraint_result2 = *(constraint_result2_it++);
  Factory<moveit_msgs::ConstraintEvalResult,moveit_msgs::msg::ConstraintEvalResult>::convert_1_to_2(constraint_result1, constraint_result2);
  }
}

template <>
void ServiceFactory<
  moveit_msgs::GetStateValidity,
  moveit_msgs::srv::GetStateValidity
>::translate_2_to_1(
  const moveit_msgs::srv::GetStateValidity::Request& req2,
  moveit_msgs::GetStateValidity::Request& req1
) {
  auto & robot_state1 = req1.robot_state;
  auto & robot_state2 = req2.robot_state;
  Factory<moveit_msgs::RobotState,moveit_msgs::msg::RobotState>::convert_2_to_1(robot_state2, robot_state1);
  auto & group_name1 = req1.group_name;
  auto & group_name2 = req2.group_name;
  group_name1 = group_name2;
  auto & constraints1 = req1.constraints;
  auto & constraints2 = req2.constraints;
  Factory<moveit_msgs::Constraints,moveit_msgs::msg::Constraints>::convert_2_to_1(constraints2, constraints1);
}

template <>
void ServiceFactory<
  moveit_msgs::GetStateValidity,
  moveit_msgs::srv::GetStateValidity
>::translate_2_to_1(
  const moveit_msgs::srv::GetStateValidity::Response& req2,
  moveit_msgs::GetStateValidity::Response& req1
) {
  auto & valid1 = req1.valid;
  auto & valid2 = req2.valid;
  valid1 = valid2;
  req1.contacts.resize(req2.contacts.size());
  auto contacts1_it = req1.contacts.begin();
  auto contacts2_it = req2.contacts.begin();
  while (
    contacts1_it != req1.contacts.end() &&
    contacts2_it != req2.contacts.end()
  ) {
    auto & contacts1 = *(contacts1_it++);
    auto & contacts2 = *(contacts2_it++);
  Factory<moveit_msgs::ContactInformation,moveit_msgs::msg::ContactInformation>::convert_2_to_1(contacts2, contacts1);
  }
  req1.cost_sources.resize(req2.cost_sources.size());
  auto cost_sources1_it = req1.cost_sources.begin();
  auto cost_sources2_it = req2.cost_sources.begin();
  while (
    cost_sources1_it != req1.cost_sources.end() &&
    cost_sources2_it != req2.cost_sources.end()
  ) {
    auto & cost_sources1 = *(cost_sources1_it++);
    auto & cost_sources2 = *(cost_sources2_it++);
  Factory<moveit_msgs::CostSource,moveit_msgs::msg::CostSource>::convert_2_to_1(cost_sources2, cost_sources1);
  }
  req1.constraint_result.resize(req2.constraint_result.size());
  auto constraint_result1_it = req1.constraint_result.begin();
  auto constraint_result2_it = req2.constraint_result.begin();
  while (
    constraint_result1_it != req1.constraint_result.end() &&
    constraint_result2_it != req2.constraint_result.end()
  ) {
    auto & constraint_result1 = *(constraint_result1_it++);
    auto & constraint_result2 = *(constraint_result2_it++);
  Factory<moveit_msgs::ConstraintEvalResult,moveit_msgs::msg::ConstraintEvalResult>::convert_2_to_1(constraint_result2, constraint_result1);
  }
}

}  // namespace ros1_bridge
