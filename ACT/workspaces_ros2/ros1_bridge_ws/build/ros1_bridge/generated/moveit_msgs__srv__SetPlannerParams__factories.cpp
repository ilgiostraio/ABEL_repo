// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "moveit_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <moveit_msgs/SetPlannerParams.h>

// include ROS 2 services
#include <moveit_msgs/srv/set_planner_params.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__srv__SetPlannerParams(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__SetPlannerParams(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "moveit_msgs" &&
      service_name == "SetPlannerParams"
    ) || (
      ros_id == "ros2" &&
      package_name == "moveit_msgs" &&
      service_name == "srv/SetPlannerParams"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      moveit_msgs::SetPlannerParams,
      moveit_msgs::srv::SetPlannerParams
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  moveit_msgs::SetPlannerParams,
  moveit_msgs::srv::SetPlannerParams
>::translate_1_to_2(
  const moveit_msgs::SetPlannerParams::Request& req1,
  moveit_msgs::srv::SetPlannerParams::Request& req2
) {
  auto & planner_config1 = req1.planner_config;
  auto & planner_config2 = req2.planner_config;
  planner_config2 = planner_config1;
  auto & group1 = req1.group;
  auto & group2 = req2.group;
  group2 = group1;
  auto & params1 = req1.params;
  auto & params2 = req2.params;
  Factory<moveit_msgs::PlannerParams,moveit_msgs::msg::PlannerParams>::convert_1_to_2(params1, params2);
  auto & replace1 = req1.replace;
  auto & replace2 = req2.replace;
  replace2 = replace1;
}

template <>
void ServiceFactory<
  moveit_msgs::SetPlannerParams,
  moveit_msgs::srv::SetPlannerParams
>::translate_1_to_2(
  const moveit_msgs::SetPlannerParams::Response& req1,
  moveit_msgs::srv::SetPlannerParams::Response& req2
) {
}

template <>
void ServiceFactory<
  moveit_msgs::SetPlannerParams,
  moveit_msgs::srv::SetPlannerParams
>::translate_2_to_1(
  const moveit_msgs::srv::SetPlannerParams::Request& req2,
  moveit_msgs::SetPlannerParams::Request& req1
) {
  auto & planner_config1 = req1.planner_config;
  auto & planner_config2 = req2.planner_config;
  planner_config1 = planner_config2;
  auto & group1 = req1.group;
  auto & group2 = req2.group;
  group1 = group2;
  auto & params1 = req1.params;
  auto & params2 = req2.params;
  Factory<moveit_msgs::PlannerParams,moveit_msgs::msg::PlannerParams>::convert_2_to_1(params2, params1);
  auto & replace1 = req1.replace;
  auto & replace2 = req2.replace;
  replace1 = replace2;
}

template <>
void ServiceFactory<
  moveit_msgs::SetPlannerParams,
  moveit_msgs::srv::SetPlannerParams
>::translate_2_to_1(
  const moveit_msgs::srv::SetPlannerParams::Response& req2,
  moveit_msgs::SetPlannerParams::Response& req1
) {
}

}  // namespace ros1_bridge
