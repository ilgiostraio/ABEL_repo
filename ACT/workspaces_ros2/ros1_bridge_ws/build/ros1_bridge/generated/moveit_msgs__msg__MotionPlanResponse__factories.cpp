// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "moveit_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__MotionPlanResponse(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "moveit_msgs/MotionPlanResponse" ||
     ros1_type_name == "") &&
    ros2_type_name == "moveit_msgs/msg/MotionPlanResponse")
  {
    return std::make_shared<
      Factory<
        moveit_msgs::MotionPlanResponse,
        moveit_msgs::msg::MotionPlanResponse
      >
    >("moveit_msgs/MotionPlanResponse", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__msg__MotionPlanResponse(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  (void)ros_id;
  (void)package_name;
  (void)service_name;
  return nullptr;
}
// conversion functions for available interfaces

template<>
void
Factory<
  moveit_msgs::MotionPlanResponse,
  moveit_msgs::msg::MotionPlanResponse
>::convert_1_to_2(
  const moveit_msgs::MotionPlanResponse & ros1_msg,
  moveit_msgs::msg::MotionPlanResponse & ros2_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::RobotState,
    moveit_msgs::msg::RobotState
  >::convert_1_to_2(
    ros1_msg.trajectory_start, ros2_msg.trajectory_start);

  // convert non-array field
  // convert primitive field
  ros2_msg.group_name = ros1_msg.group_name;

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::RobotTrajectory,
    moveit_msgs::msg::RobotTrajectory
  >::convert_1_to_2(
    ros1_msg.trajectory, ros2_msg.trajectory);

  // convert non-array field
  // convert primitive field
  ros2_msg.planning_time = ros1_msg.planning_time;

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::MoveItErrorCodes,
    moveit_msgs::msg::MoveItErrorCodes
  >::convert_1_to_2(
    ros1_msg.error_code, ros2_msg.error_code);
}

template<>
void
Factory<
  moveit_msgs::MotionPlanResponse,
  moveit_msgs::msg::MotionPlanResponse
>::convert_2_to_1(
  const moveit_msgs::msg::MotionPlanResponse & ros2_msg,
  moveit_msgs::MotionPlanResponse & ros1_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::RobotState,
    moveit_msgs::msg::RobotState
  >::convert_2_to_1(
    ros2_msg.trajectory_start, ros1_msg.trajectory_start);

  // convert non-array field
  // convert primitive field
  ros1_msg.group_name = ros2_msg.group_name;

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::RobotTrajectory,
    moveit_msgs::msg::RobotTrajectory
  >::convert_2_to_1(
    ros2_msg.trajectory, ros1_msg.trajectory);

  // convert non-array field
  // convert primitive field
  ros1_msg.planning_time = ros2_msg.planning_time;

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::MoveItErrorCodes,
    moveit_msgs::msg::MoveItErrorCodes
  >::convert_2_to_1(
    ros2_msg.error_code, ros1_msg.error_code);
}
}  // namespace ros1_bridge
