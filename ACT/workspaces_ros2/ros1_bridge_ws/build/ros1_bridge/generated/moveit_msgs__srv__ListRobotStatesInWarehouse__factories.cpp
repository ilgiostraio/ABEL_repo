// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "moveit_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <moveit_msgs/ListRobotStatesInWarehouse.h>

// include ROS 2 services
#include <moveit_msgs/srv/list_robot_states_in_warehouse.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__srv__ListRobotStatesInWarehouse(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__ListRobotStatesInWarehouse(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "moveit_msgs" &&
      service_name == "ListRobotStatesInWarehouse"
    ) || (
      ros_id == "ros2" &&
      package_name == "moveit_msgs" &&
      service_name == "srv/ListRobotStatesInWarehouse"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      moveit_msgs::ListRobotStatesInWarehouse,
      moveit_msgs::srv::ListRobotStatesInWarehouse
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  moveit_msgs::ListRobotStatesInWarehouse,
  moveit_msgs::srv::ListRobotStatesInWarehouse
>::translate_1_to_2(
  const moveit_msgs::ListRobotStatesInWarehouse::Request& req1,
  moveit_msgs::srv::ListRobotStatesInWarehouse::Request& req2
) {
  auto & regex1 = req1.regex;
  auto & regex2 = req2.regex;
  regex2 = regex1;
  auto & robot1 = req1.robot;
  auto & robot2 = req2.robot;
  robot2 = robot1;
}

template <>
void ServiceFactory<
  moveit_msgs::ListRobotStatesInWarehouse,
  moveit_msgs::srv::ListRobotStatesInWarehouse
>::translate_1_to_2(
  const moveit_msgs::ListRobotStatesInWarehouse::Response& req1,
  moveit_msgs::srv::ListRobotStatesInWarehouse::Response& req2
) {
  req2.states.resize(req1.states.size());
  auto states1_it = req1.states.begin();
  auto states2_it = req2.states.begin();
  while (
    states1_it != req1.states.end() &&
    states2_it != req2.states.end()
  ) {
    auto & states1 = *(states1_it++);
    auto & states2 = *(states2_it++);
  states2 = states1;
  }
}

template <>
void ServiceFactory<
  moveit_msgs::ListRobotStatesInWarehouse,
  moveit_msgs::srv::ListRobotStatesInWarehouse
>::translate_2_to_1(
  const moveit_msgs::srv::ListRobotStatesInWarehouse::Request& req2,
  moveit_msgs::ListRobotStatesInWarehouse::Request& req1
) {
  auto & regex1 = req1.regex;
  auto & regex2 = req2.regex;
  regex1 = regex2;
  auto & robot1 = req1.robot;
  auto & robot2 = req2.robot;
  robot1 = robot2;
}

template <>
void ServiceFactory<
  moveit_msgs::ListRobotStatesInWarehouse,
  moveit_msgs::srv::ListRobotStatesInWarehouse
>::translate_2_to_1(
  const moveit_msgs::srv::ListRobotStatesInWarehouse::Response& req2,
  moveit_msgs::ListRobotStatesInWarehouse::Response& req1
) {
  req1.states.resize(req2.states.size());
  auto states1_it = req1.states.begin();
  auto states2_it = req2.states.begin();
  while (
    states1_it != req1.states.end() &&
    states2_it != req2.states.end()
  ) {
    auto & states1 = *(states1_it++);
    auto & states2 = *(states2_it++);
  states1 = states2;
  }
}

}  // namespace ros1_bridge
