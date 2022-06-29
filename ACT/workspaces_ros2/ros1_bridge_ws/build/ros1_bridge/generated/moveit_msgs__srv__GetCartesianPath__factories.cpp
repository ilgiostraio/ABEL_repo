// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "moveit_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <moveit_msgs/GetCartesianPath.h>

// include ROS 2 services
#include <moveit_msgs/srv/get_cartesian_path.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__srv__GetCartesianPath(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__GetCartesianPath(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "moveit_msgs" &&
      service_name == "GetCartesianPath"
    ) || (
      ros_id == "ros2" &&
      package_name == "moveit_msgs" &&
      service_name == "srv/GetCartesianPath"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      moveit_msgs::GetCartesianPath,
      moveit_msgs::srv::GetCartesianPath
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  moveit_msgs::GetCartesianPath,
  moveit_msgs::srv::GetCartesianPath
>::translate_1_to_2(
  const moveit_msgs::GetCartesianPath::Request& req1,
  moveit_msgs::srv::GetCartesianPath::Request& req2
) {
  auto & header1 = req1.header;
  auto & header2 = req2.header;
  Factory<std_msgs::Header,std_msgs::msg::Header>::convert_1_to_2(header1, header2);
  auto & start_state1 = req1.start_state;
  auto & start_state2 = req2.start_state;
  Factory<moveit_msgs::RobotState,moveit_msgs::msg::RobotState>::convert_1_to_2(start_state1, start_state2);
  auto & group_name1 = req1.group_name;
  auto & group_name2 = req2.group_name;
  group_name2 = group_name1;
  auto & link_name1 = req1.link_name;
  auto & link_name2 = req2.link_name;
  link_name2 = link_name1;
  req2.waypoints.resize(req1.waypoints.size());
  auto waypoints1_it = req1.waypoints.begin();
  auto waypoints2_it = req2.waypoints.begin();
  while (
    waypoints1_it != req1.waypoints.end() &&
    waypoints2_it != req2.waypoints.end()
  ) {
    auto & waypoints1 = *(waypoints1_it++);
    auto & waypoints2 = *(waypoints2_it++);
  Factory<geometry_msgs::Pose,geometry_msgs::msg::Pose>::convert_1_to_2(waypoints1, waypoints2);
  }
  auto & max_step1 = req1.max_step;
  auto & max_step2 = req2.max_step;
  max_step2 = max_step1;
  auto & jump_threshold1 = req1.jump_threshold;
  auto & jump_threshold2 = req2.jump_threshold;
  jump_threshold2 = jump_threshold1;
  auto & prismatic_jump_threshold1 = req1.prismatic_jump_threshold;
  auto & prismatic_jump_threshold2 = req2.prismatic_jump_threshold;
  prismatic_jump_threshold2 = prismatic_jump_threshold1;
  auto & revolute_jump_threshold1 = req1.revolute_jump_threshold;
  auto & revolute_jump_threshold2 = req2.revolute_jump_threshold;
  revolute_jump_threshold2 = revolute_jump_threshold1;
  auto & avoid_collisions1 = req1.avoid_collisions;
  auto & avoid_collisions2 = req2.avoid_collisions;
  avoid_collisions2 = avoid_collisions1;
  auto & path_constraints1 = req1.path_constraints;
  auto & path_constraints2 = req2.path_constraints;
  Factory<moveit_msgs::Constraints,moveit_msgs::msg::Constraints>::convert_1_to_2(path_constraints1, path_constraints2);
}

template <>
void ServiceFactory<
  moveit_msgs::GetCartesianPath,
  moveit_msgs::srv::GetCartesianPath
>::translate_1_to_2(
  const moveit_msgs::GetCartesianPath::Response& req1,
  moveit_msgs::srv::GetCartesianPath::Response& req2
) {
  auto & start_state1 = req1.start_state;
  auto & start_state2 = req2.start_state;
  Factory<moveit_msgs::RobotState,moveit_msgs::msg::RobotState>::convert_1_to_2(start_state1, start_state2);
  auto & solution1 = req1.solution;
  auto & solution2 = req2.solution;
  Factory<moveit_msgs::RobotTrajectory,moveit_msgs::msg::RobotTrajectory>::convert_1_to_2(solution1, solution2);
  auto & fraction1 = req1.fraction;
  auto & fraction2 = req2.fraction;
  fraction2 = fraction1;
  auto & error_code1 = req1.error_code;
  auto & error_code2 = req2.error_code;
  Factory<moveit_msgs::MoveItErrorCodes,moveit_msgs::msg::MoveItErrorCodes>::convert_1_to_2(error_code1, error_code2);
}

template <>
void ServiceFactory<
  moveit_msgs::GetCartesianPath,
  moveit_msgs::srv::GetCartesianPath
>::translate_2_to_1(
  const moveit_msgs::srv::GetCartesianPath::Request& req2,
  moveit_msgs::GetCartesianPath::Request& req1
) {
  auto & header1 = req1.header;
  auto & header2 = req2.header;
  Factory<std_msgs::Header,std_msgs::msg::Header>::convert_2_to_1(header2, header1);
  auto & start_state1 = req1.start_state;
  auto & start_state2 = req2.start_state;
  Factory<moveit_msgs::RobotState,moveit_msgs::msg::RobotState>::convert_2_to_1(start_state2, start_state1);
  auto & group_name1 = req1.group_name;
  auto & group_name2 = req2.group_name;
  group_name1 = group_name2;
  auto & link_name1 = req1.link_name;
  auto & link_name2 = req2.link_name;
  link_name1 = link_name2;
  req1.waypoints.resize(req2.waypoints.size());
  auto waypoints1_it = req1.waypoints.begin();
  auto waypoints2_it = req2.waypoints.begin();
  while (
    waypoints1_it != req1.waypoints.end() &&
    waypoints2_it != req2.waypoints.end()
  ) {
    auto & waypoints1 = *(waypoints1_it++);
    auto & waypoints2 = *(waypoints2_it++);
  Factory<geometry_msgs::Pose,geometry_msgs::msg::Pose>::convert_2_to_1(waypoints2, waypoints1);
  }
  auto & max_step1 = req1.max_step;
  auto & max_step2 = req2.max_step;
  max_step1 = max_step2;
  auto & jump_threshold1 = req1.jump_threshold;
  auto & jump_threshold2 = req2.jump_threshold;
  jump_threshold1 = jump_threshold2;
  auto & prismatic_jump_threshold1 = req1.prismatic_jump_threshold;
  auto & prismatic_jump_threshold2 = req2.prismatic_jump_threshold;
  prismatic_jump_threshold1 = prismatic_jump_threshold2;
  auto & revolute_jump_threshold1 = req1.revolute_jump_threshold;
  auto & revolute_jump_threshold2 = req2.revolute_jump_threshold;
  revolute_jump_threshold1 = revolute_jump_threshold2;
  auto & avoid_collisions1 = req1.avoid_collisions;
  auto & avoid_collisions2 = req2.avoid_collisions;
  avoid_collisions1 = avoid_collisions2;
  auto & path_constraints1 = req1.path_constraints;
  auto & path_constraints2 = req2.path_constraints;
  Factory<moveit_msgs::Constraints,moveit_msgs::msg::Constraints>::convert_2_to_1(path_constraints2, path_constraints1);
}

template <>
void ServiceFactory<
  moveit_msgs::GetCartesianPath,
  moveit_msgs::srv::GetCartesianPath
>::translate_2_to_1(
  const moveit_msgs::srv::GetCartesianPath::Response& req2,
  moveit_msgs::GetCartesianPath::Response& req1
) {
  auto & start_state1 = req1.start_state;
  auto & start_state2 = req2.start_state;
  Factory<moveit_msgs::RobotState,moveit_msgs::msg::RobotState>::convert_2_to_1(start_state2, start_state1);
  auto & solution1 = req1.solution;
  auto & solution2 = req2.solution;
  Factory<moveit_msgs::RobotTrajectory,moveit_msgs::msg::RobotTrajectory>::convert_2_to_1(solution2, solution1);
  auto & fraction1 = req1.fraction;
  auto & fraction2 = req2.fraction;
  fraction1 = fraction2;
  auto & error_code1 = req1.error_code;
  auto & error_code2 = req2.error_code;
  Factory<moveit_msgs::MoveItErrorCodes,moveit_msgs::msg::MoveItErrorCodes>::convert_2_to_1(error_code2, error_code1);
}

}  // namespace ros1_bridge
