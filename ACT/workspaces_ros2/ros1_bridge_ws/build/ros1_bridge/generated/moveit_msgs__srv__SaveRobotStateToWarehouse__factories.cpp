// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "moveit_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <moveit_msgs/SaveRobotStateToWarehouse.h>

// include ROS 2 services
#include <moveit_msgs/srv/save_robot_state_to_warehouse.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__srv__SaveRobotStateToWarehouse(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__SaveRobotStateToWarehouse(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "moveit_msgs" &&
      service_name == "SaveRobotStateToWarehouse"
    ) || (
      ros_id == "ros2" &&
      package_name == "moveit_msgs" &&
      service_name == "srv/SaveRobotStateToWarehouse"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      moveit_msgs::SaveRobotStateToWarehouse,
      moveit_msgs::srv::SaveRobotStateToWarehouse
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  moveit_msgs::SaveRobotStateToWarehouse,
  moveit_msgs::srv::SaveRobotStateToWarehouse
>::translate_1_to_2(
  const moveit_msgs::SaveRobotStateToWarehouse::Request& req1,
  moveit_msgs::srv::SaveRobotStateToWarehouse::Request& req2
) {
  auto & name1 = req1.name;
  auto & name2 = req2.name;
  name2 = name1;
  auto & robot1 = req1.robot;
  auto & robot2 = req2.robot;
  robot2 = robot1;
  auto & state1 = req1.state;
  auto & state2 = req2.state;
  Factory<moveit_msgs::RobotState,moveit_msgs::msg::RobotState>::convert_1_to_2(state1, state2);
}

template <>
void ServiceFactory<
  moveit_msgs::SaveRobotStateToWarehouse,
  moveit_msgs::srv::SaveRobotStateToWarehouse
>::translate_1_to_2(
  const moveit_msgs::SaveRobotStateToWarehouse::Response& req1,
  moveit_msgs::srv::SaveRobotStateToWarehouse::Response& req2
) {
  auto & success1 = req1.success;
  auto & success2 = req2.success;
  success2 = success1;
}

template <>
void ServiceFactory<
  moveit_msgs::SaveRobotStateToWarehouse,
  moveit_msgs::srv::SaveRobotStateToWarehouse
>::translate_2_to_1(
  const moveit_msgs::srv::SaveRobotStateToWarehouse::Request& req2,
  moveit_msgs::SaveRobotStateToWarehouse::Request& req1
) {
  auto & name1 = req1.name;
  auto & name2 = req2.name;
  name1 = name2;
  auto & robot1 = req1.robot;
  auto & robot2 = req2.robot;
  robot1 = robot2;
  auto & state1 = req1.state;
  auto & state2 = req2.state;
  Factory<moveit_msgs::RobotState,moveit_msgs::msg::RobotState>::convert_2_to_1(state2, state1);
}

template <>
void ServiceFactory<
  moveit_msgs::SaveRobotStateToWarehouse,
  moveit_msgs::srv::SaveRobotStateToWarehouse
>::translate_2_to_1(
  const moveit_msgs::srv::SaveRobotStateToWarehouse::Response& req2,
  moveit_msgs::SaveRobotStateToWarehouse::Response& req1
) {
  auto & success1 = req1.success;
  auto & success2 = req2.success;
  success1 = success2;
}

}  // namespace ros1_bridge
