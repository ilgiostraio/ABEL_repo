// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "moveit_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <moveit_msgs/CheckIfRobotStateExistsInWarehouse.h>

// include ROS 2 services
#include <moveit_msgs/srv/check_if_robot_state_exists_in_warehouse.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "moveit_msgs" &&
      service_name == "CheckIfRobotStateExistsInWarehouse"
    ) || (
      ros_id == "ros2" &&
      package_name == "moveit_msgs" &&
      service_name == "srv/CheckIfRobotStateExistsInWarehouse"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      moveit_msgs::CheckIfRobotStateExistsInWarehouse,
      moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  moveit_msgs::CheckIfRobotStateExistsInWarehouse,
  moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse
>::translate_1_to_2(
  const moveit_msgs::CheckIfRobotStateExistsInWarehouse::Request& req1,
  moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse::Request& req2
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
  moveit_msgs::CheckIfRobotStateExistsInWarehouse,
  moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse
>::translate_1_to_2(
  const moveit_msgs::CheckIfRobotStateExistsInWarehouse::Response& req1,
  moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse::Response& req2
) {
  auto & exists1 = req1.exists;
  auto & exists2 = req2.exists;
  exists2 = exists1;
}

template <>
void ServiceFactory<
  moveit_msgs::CheckIfRobotStateExistsInWarehouse,
  moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse
>::translate_2_to_1(
  const moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse::Request& req2,
  moveit_msgs::CheckIfRobotStateExistsInWarehouse::Request& req1
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
  moveit_msgs::CheckIfRobotStateExistsInWarehouse,
  moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse
>::translate_2_to_1(
  const moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse::Response& req2,
  moveit_msgs::CheckIfRobotStateExistsInWarehouse::Response& req1
) {
  auto & exists1 = req1.exists;
  auto & exists2 = req2.exists;
  exists1 = exists2;
}

}  // namespace ros1_bridge
