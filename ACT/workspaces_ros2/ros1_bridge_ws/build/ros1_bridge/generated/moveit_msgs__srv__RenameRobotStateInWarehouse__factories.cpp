// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "moveit_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <moveit_msgs/RenameRobotStateInWarehouse.h>

// include ROS 2 services
#include <moveit_msgs/srv/rename_robot_state_in_warehouse.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__srv__RenameRobotStateInWarehouse(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__RenameRobotStateInWarehouse(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "moveit_msgs" &&
      service_name == "RenameRobotStateInWarehouse"
    ) || (
      ros_id == "ros2" &&
      package_name == "moveit_msgs" &&
      service_name == "srv/RenameRobotStateInWarehouse"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      moveit_msgs::RenameRobotStateInWarehouse,
      moveit_msgs::srv::RenameRobotStateInWarehouse
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  moveit_msgs::RenameRobotStateInWarehouse,
  moveit_msgs::srv::RenameRobotStateInWarehouse
>::translate_1_to_2(
  const moveit_msgs::RenameRobotStateInWarehouse::Request& req1,
  moveit_msgs::srv::RenameRobotStateInWarehouse::Request& req2
) {
  auto & old_name1 = req1.old_name;
  auto & old_name2 = req2.old_name;
  old_name2 = old_name1;
  auto & new_name1 = req1.new_name;
  auto & new_name2 = req2.new_name;
  new_name2 = new_name1;
  auto & robot1 = req1.robot;
  auto & robot2 = req2.robot;
  robot2 = robot1;
}

template <>
void ServiceFactory<
  moveit_msgs::RenameRobotStateInWarehouse,
  moveit_msgs::srv::RenameRobotStateInWarehouse
>::translate_1_to_2(
  const moveit_msgs::RenameRobotStateInWarehouse::Response& req1,
  moveit_msgs::srv::RenameRobotStateInWarehouse::Response& req2
) {
}

template <>
void ServiceFactory<
  moveit_msgs::RenameRobotStateInWarehouse,
  moveit_msgs::srv::RenameRobotStateInWarehouse
>::translate_2_to_1(
  const moveit_msgs::srv::RenameRobotStateInWarehouse::Request& req2,
  moveit_msgs::RenameRobotStateInWarehouse::Request& req1
) {
  auto & old_name1 = req1.old_name;
  auto & old_name2 = req2.old_name;
  old_name1 = old_name2;
  auto & new_name1 = req1.new_name;
  auto & new_name2 = req2.new_name;
  new_name1 = new_name2;
  auto & robot1 = req1.robot;
  auto & robot2 = req2.robot;
  robot1 = robot2;
}

template <>
void ServiceFactory<
  moveit_msgs::RenameRobotStateInWarehouse,
  moveit_msgs::srv::RenameRobotStateInWarehouse
>::translate_2_to_1(
  const moveit_msgs::srv::RenameRobotStateInWarehouse::Response& req2,
  moveit_msgs::RenameRobotStateInWarehouse::Response& req1
) {
}

}  // namespace ros1_bridge
