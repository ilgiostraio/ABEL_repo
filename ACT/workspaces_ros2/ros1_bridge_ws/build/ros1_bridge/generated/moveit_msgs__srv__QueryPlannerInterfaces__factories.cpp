// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "moveit_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <moveit_msgs/QueryPlannerInterfaces.h>

// include ROS 2 services
#include <moveit_msgs/srv/query_planner_interfaces.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__srv__QueryPlannerInterfaces(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__QueryPlannerInterfaces(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "moveit_msgs" &&
      service_name == "QueryPlannerInterfaces"
    ) || (
      ros_id == "ros2" &&
      package_name == "moveit_msgs" &&
      service_name == "srv/QueryPlannerInterfaces"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      moveit_msgs::QueryPlannerInterfaces,
      moveit_msgs::srv::QueryPlannerInterfaces
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  moveit_msgs::QueryPlannerInterfaces,
  moveit_msgs::srv::QueryPlannerInterfaces
>::translate_1_to_2(
  const moveit_msgs::QueryPlannerInterfaces::Request& req1,
  moveit_msgs::srv::QueryPlannerInterfaces::Request& req2
) {
}

template <>
void ServiceFactory<
  moveit_msgs::QueryPlannerInterfaces,
  moveit_msgs::srv::QueryPlannerInterfaces
>::translate_1_to_2(
  const moveit_msgs::QueryPlannerInterfaces::Response& req1,
  moveit_msgs::srv::QueryPlannerInterfaces::Response& req2
) {
  req2.planner_interfaces.resize(req1.planner_interfaces.size());
  auto planner_interfaces1_it = req1.planner_interfaces.begin();
  auto planner_interfaces2_it = req2.planner_interfaces.begin();
  while (
    planner_interfaces1_it != req1.planner_interfaces.end() &&
    planner_interfaces2_it != req2.planner_interfaces.end()
  ) {
    auto & planner_interfaces1 = *(planner_interfaces1_it++);
    auto & planner_interfaces2 = *(planner_interfaces2_it++);
  Factory<moveit_msgs::PlannerInterfaceDescription,moveit_msgs::msg::PlannerInterfaceDescription>::convert_1_to_2(planner_interfaces1, planner_interfaces2);
  }
}

template <>
void ServiceFactory<
  moveit_msgs::QueryPlannerInterfaces,
  moveit_msgs::srv::QueryPlannerInterfaces
>::translate_2_to_1(
  const moveit_msgs::srv::QueryPlannerInterfaces::Request& req2,
  moveit_msgs::QueryPlannerInterfaces::Request& req1
) {
}

template <>
void ServiceFactory<
  moveit_msgs::QueryPlannerInterfaces,
  moveit_msgs::srv::QueryPlannerInterfaces
>::translate_2_to_1(
  const moveit_msgs::srv::QueryPlannerInterfaces::Response& req2,
  moveit_msgs::QueryPlannerInterfaces::Response& req1
) {
  req1.planner_interfaces.resize(req2.planner_interfaces.size());
  auto planner_interfaces1_it = req1.planner_interfaces.begin();
  auto planner_interfaces2_it = req2.planner_interfaces.begin();
  while (
    planner_interfaces1_it != req1.planner_interfaces.end() &&
    planner_interfaces2_it != req2.planner_interfaces.end()
  ) {
    auto & planner_interfaces1 = *(planner_interfaces1_it++);
    auto & planner_interfaces2 = *(planner_interfaces2_it++);
  Factory<moveit_msgs::PlannerInterfaceDescription,moveit_msgs::msg::PlannerInterfaceDescription>::convert_2_to_1(planner_interfaces2, planner_interfaces1);
  }
}

}  // namespace ros1_bridge
