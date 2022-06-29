// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "nav_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <nav_msgs/GetPlan.h>

// include ROS 2 services
#include <nav_msgs/srv/get_plan.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_nav_msgs__srv__GetPlan(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_nav_msgs__srv__GetPlan(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "nav_msgs" &&
      service_name == "GetPlan"
    ) || (
      ros_id == "ros2" &&
      package_name == "nav_msgs" &&
      service_name == "srv/GetPlan"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      nav_msgs::GetPlan,
      nav_msgs::srv::GetPlan
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  nav_msgs::GetPlan,
  nav_msgs::srv::GetPlan
>::translate_1_to_2(
  const nav_msgs::GetPlan::Request& req1,
  nav_msgs::srv::GetPlan::Request& req2
) {
  auto & start1 = req1.start;
  auto & start2 = req2.start;
  Factory<geometry_msgs::PoseStamped,geometry_msgs::msg::PoseStamped>::convert_1_to_2(start1, start2);
  auto & goal1 = req1.goal;
  auto & goal2 = req2.goal;
  Factory<geometry_msgs::PoseStamped,geometry_msgs::msg::PoseStamped>::convert_1_to_2(goal1, goal2);
  auto & tolerance1 = req1.tolerance;
  auto & tolerance2 = req2.tolerance;
  tolerance2 = tolerance1;
}

template <>
void ServiceFactory<
  nav_msgs::GetPlan,
  nav_msgs::srv::GetPlan
>::translate_1_to_2(
  const nav_msgs::GetPlan::Response& req1,
  nav_msgs::srv::GetPlan::Response& req2
) {
  auto & plan1 = req1.plan;
  auto & plan2 = req2.plan;
  Factory<nav_msgs::Path,nav_msgs::msg::Path>::convert_1_to_2(plan1, plan2);
}

template <>
void ServiceFactory<
  nav_msgs::GetPlan,
  nav_msgs::srv::GetPlan
>::translate_2_to_1(
  const nav_msgs::srv::GetPlan::Request& req2,
  nav_msgs::GetPlan::Request& req1
) {
  auto & start1 = req1.start;
  auto & start2 = req2.start;
  Factory<geometry_msgs::PoseStamped,geometry_msgs::msg::PoseStamped>::convert_2_to_1(start2, start1);
  auto & goal1 = req1.goal;
  auto & goal2 = req2.goal;
  Factory<geometry_msgs::PoseStamped,geometry_msgs::msg::PoseStamped>::convert_2_to_1(goal2, goal1);
  auto & tolerance1 = req1.tolerance;
  auto & tolerance2 = req2.tolerance;
  tolerance1 = tolerance2;
}

template <>
void ServiceFactory<
  nav_msgs::GetPlan,
  nav_msgs::srv::GetPlan
>::translate_2_to_1(
  const nav_msgs::srv::GetPlan::Response& req2,
  nav_msgs::GetPlan::Response& req1
) {
  auto & plan1 = req1.plan;
  auto & plan2 = req2.plan;
  Factory<nav_msgs::Path,nav_msgs::msg::Path>::convert_2_to_1(plan2, plan1);
}

}  // namespace ros1_bridge
