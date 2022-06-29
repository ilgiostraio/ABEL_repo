// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "moveit_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <moveit_msgs/ExecuteKnownTrajectory.h>

// include ROS 2 services
#include <moveit_msgs/srv/execute_known_trajectory.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__srv__ExecuteKnownTrajectory(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__ExecuteKnownTrajectory(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "moveit_msgs" &&
      service_name == "ExecuteKnownTrajectory"
    ) || (
      ros_id == "ros2" &&
      package_name == "moveit_msgs" &&
      service_name == "srv/ExecuteKnownTrajectory"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      moveit_msgs::ExecuteKnownTrajectory,
      moveit_msgs::srv::ExecuteKnownTrajectory
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  moveit_msgs::ExecuteKnownTrajectory,
  moveit_msgs::srv::ExecuteKnownTrajectory
>::translate_1_to_2(
  const moveit_msgs::ExecuteKnownTrajectory::Request& req1,
  moveit_msgs::srv::ExecuteKnownTrajectory::Request& req2
) {
  auto & trajectory1 = req1.trajectory;
  auto & trajectory2 = req2.trajectory;
  Factory<moveit_msgs::RobotTrajectory,moveit_msgs::msg::RobotTrajectory>::convert_1_to_2(trajectory1, trajectory2);
  auto & wait_for_execution1 = req1.wait_for_execution;
  auto & wait_for_execution2 = req2.wait_for_execution;
  wait_for_execution2 = wait_for_execution1;
}

template <>
void ServiceFactory<
  moveit_msgs::ExecuteKnownTrajectory,
  moveit_msgs::srv::ExecuteKnownTrajectory
>::translate_1_to_2(
  const moveit_msgs::ExecuteKnownTrajectory::Response& req1,
  moveit_msgs::srv::ExecuteKnownTrajectory::Response& req2
) {
  auto & error_code1 = req1.error_code;
  auto & error_code2 = req2.error_code;
  Factory<moveit_msgs::MoveItErrorCodes,moveit_msgs::msg::MoveItErrorCodes>::convert_1_to_2(error_code1, error_code2);
}

template <>
void ServiceFactory<
  moveit_msgs::ExecuteKnownTrajectory,
  moveit_msgs::srv::ExecuteKnownTrajectory
>::translate_2_to_1(
  const moveit_msgs::srv::ExecuteKnownTrajectory::Request& req2,
  moveit_msgs::ExecuteKnownTrajectory::Request& req1
) {
  auto & trajectory1 = req1.trajectory;
  auto & trajectory2 = req2.trajectory;
  Factory<moveit_msgs::RobotTrajectory,moveit_msgs::msg::RobotTrajectory>::convert_2_to_1(trajectory2, trajectory1);
  auto & wait_for_execution1 = req1.wait_for_execution;
  auto & wait_for_execution2 = req2.wait_for_execution;
  wait_for_execution1 = wait_for_execution2;
}

template <>
void ServiceFactory<
  moveit_msgs::ExecuteKnownTrajectory,
  moveit_msgs::srv::ExecuteKnownTrajectory
>::translate_2_to_1(
  const moveit_msgs::srv::ExecuteKnownTrajectory::Response& req2,
  moveit_msgs::ExecuteKnownTrajectory::Response& req1
) {
  auto & error_code1 = req1.error_code;
  auto & error_code2 = req2.error_code;
  Factory<moveit_msgs::MoveItErrorCodes,moveit_msgs::msg::MoveItErrorCodes>::convert_2_to_1(error_code2, error_code1);
}

}  // namespace ros1_bridge
