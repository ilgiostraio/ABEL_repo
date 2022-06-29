// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "moveit_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <moveit_msgs/GetMotionPlan.h>

// include ROS 2 services
#include <moveit_msgs/srv/get_motion_plan.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__srv__GetMotionPlan(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__GetMotionPlan(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "moveit_msgs" &&
      service_name == "GetMotionPlan"
    ) || (
      ros_id == "ros2" &&
      package_name == "moveit_msgs" &&
      service_name == "srv/GetMotionPlan"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      moveit_msgs::GetMotionPlan,
      moveit_msgs::srv::GetMotionPlan
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  moveit_msgs::GetMotionPlan,
  moveit_msgs::srv::GetMotionPlan
>::translate_1_to_2(
  const moveit_msgs::GetMotionPlan::Request& req1,
  moveit_msgs::srv::GetMotionPlan::Request& req2
) {
  auto & motion_plan_request1 = req1.motion_plan_request;
  auto & motion_plan_request2 = req2.motion_plan_request;
  Factory<moveit_msgs::MotionPlanRequest,moveit_msgs::msg::MotionPlanRequest>::convert_1_to_2(motion_plan_request1, motion_plan_request2);
}

template <>
void ServiceFactory<
  moveit_msgs::GetMotionPlan,
  moveit_msgs::srv::GetMotionPlan
>::translate_1_to_2(
  const moveit_msgs::GetMotionPlan::Response& req1,
  moveit_msgs::srv::GetMotionPlan::Response& req2
) {
  auto & motion_plan_response1 = req1.motion_plan_response;
  auto & motion_plan_response2 = req2.motion_plan_response;
  Factory<moveit_msgs::MotionPlanResponse,moveit_msgs::msg::MotionPlanResponse>::convert_1_to_2(motion_plan_response1, motion_plan_response2);
}

template <>
void ServiceFactory<
  moveit_msgs::GetMotionPlan,
  moveit_msgs::srv::GetMotionPlan
>::translate_2_to_1(
  const moveit_msgs::srv::GetMotionPlan::Request& req2,
  moveit_msgs::GetMotionPlan::Request& req1
) {
  auto & motion_plan_request1 = req1.motion_plan_request;
  auto & motion_plan_request2 = req2.motion_plan_request;
  Factory<moveit_msgs::MotionPlanRequest,moveit_msgs::msg::MotionPlanRequest>::convert_2_to_1(motion_plan_request2, motion_plan_request1);
}

template <>
void ServiceFactory<
  moveit_msgs::GetMotionPlan,
  moveit_msgs::srv::GetMotionPlan
>::translate_2_to_1(
  const moveit_msgs::srv::GetMotionPlan::Response& req2,
  moveit_msgs::GetMotionPlan::Response& req1
) {
  auto & motion_plan_response1 = req1.motion_plan_response;
  auto & motion_plan_response2 = req2.motion_plan_response;
  Factory<moveit_msgs::MotionPlanResponse,moveit_msgs::msg::MotionPlanResponse>::convert_2_to_1(motion_plan_response2, motion_plan_response1);
}

}  // namespace ros1_bridge
