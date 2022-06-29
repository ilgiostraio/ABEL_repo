// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "moveit_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <moveit_msgs/DeleteRobotStateFromWarehouse.h>

// include ROS 2 services
#include <moveit_msgs/srv/delete_robot_state_from_warehouse.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__srv__DeleteRobotStateFromWarehouse(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__DeleteRobotStateFromWarehouse(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "moveit_msgs" &&
      service_name == "DeleteRobotStateFromWarehouse"
    ) || (
      ros_id == "ros2" &&
      package_name == "moveit_msgs" &&
      service_name == "srv/DeleteRobotStateFromWarehouse"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      moveit_msgs::DeleteRobotStateFromWarehouse,
      moveit_msgs::srv::DeleteRobotStateFromWarehouse
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  moveit_msgs::DeleteRobotStateFromWarehouse,
  moveit_msgs::srv::DeleteRobotStateFromWarehouse
>::translate_1_to_2(
  const moveit_msgs::DeleteRobotStateFromWarehouse::Request& req1,
  moveit_msgs::srv::DeleteRobotStateFromWarehouse::Request& req2
) {
  auto & name1 = req1.name;
  auto & name2 = req2.name;
  name2 = name1;
  auto & robot1 = req1.robot;
  auto & robot2 = req2.robot;
  robot2 = robot1;
}

template <>
void ServiceFactory<
  moveit_msgs::DeleteRobotStateFromWarehouse,
  moveit_msgs::srv::DeleteRobotStateFromWarehouse
>::translate_1_to_2(
  const moveit_msgs::DeleteRobotStateFromWarehouse::Response& req1,
  moveit_msgs::srv::DeleteRobotStateFromWarehouse::Response& req2
) {
}

template <>
void ServiceFactory<
  moveit_msgs::DeleteRobotStateFromWarehouse,
  moveit_msgs::srv::DeleteRobotStateFromWarehouse
>::translate_2_to_1(
  const moveit_msgs::srv::DeleteRobotStateFromWarehouse::Request& req2,
  moveit_msgs::DeleteRobotStateFromWarehouse::Request& req1
) {
  auto & name1 = req1.name;
  auto & name2 = req2.name;
  name1 = name2;
  auto & robot1 = req1.robot;
  auto & robot2 = req2.robot;
  robot1 = robot2;
}

template <>
void ServiceFactory<
  moveit_msgs::DeleteRobotStateFromWarehouse,
  moveit_msgs::srv::DeleteRobotStateFromWarehouse
>::translate_2_to_1(
  const moveit_msgs::srv::DeleteRobotStateFromWarehouse::Response& req2,
  moveit_msgs::DeleteRobotStateFromWarehouse::Response& req1
) {
}

}  // namespace ros1_bridge
