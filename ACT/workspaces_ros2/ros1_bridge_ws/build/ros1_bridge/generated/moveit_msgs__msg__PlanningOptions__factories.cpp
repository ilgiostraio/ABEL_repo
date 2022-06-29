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
get_factory_moveit_msgs__msg__PlanningOptions(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "moveit_msgs/PlanningOptions" ||
     ros1_type_name == "") &&
    ros2_type_name == "moveit_msgs/msg/PlanningOptions")
  {
    return std::make_shared<
      Factory<
        moveit_msgs::PlanningOptions,
        moveit_msgs::msg::PlanningOptions
      >
    >("moveit_msgs/PlanningOptions", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__msg__PlanningOptions(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  moveit_msgs::PlanningOptions,
  moveit_msgs::msg::PlanningOptions
>::convert_1_to_2(
  const moveit_msgs::PlanningOptions & ros1_msg,
  moveit_msgs::msg::PlanningOptions & ros2_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::PlanningScene,
    moveit_msgs::msg::PlanningScene
  >::convert_1_to_2(
    ros1_msg.planning_scene_diff, ros2_msg.planning_scene_diff);

  // convert non-array field
  // convert primitive field
  ros2_msg.plan_only = ros1_msg.plan_only;

  // convert non-array field
  // convert primitive field
  ros2_msg.look_around = ros1_msg.look_around;

  // convert non-array field
  // convert primitive field
  ros2_msg.look_around_attempts = ros1_msg.look_around_attempts;

  // convert non-array field
  // convert primitive field
  ros2_msg.max_safe_execution_cost = ros1_msg.max_safe_execution_cost;

  // convert non-array field
  // convert primitive field
  ros2_msg.replan = ros1_msg.replan;

  // convert non-array field
  // convert primitive field
  ros2_msg.replan_attempts = ros1_msg.replan_attempts;

  // convert non-array field
  // convert primitive field
  ros2_msg.replan_delay = ros1_msg.replan_delay;
}

template<>
void
Factory<
  moveit_msgs::PlanningOptions,
  moveit_msgs::msg::PlanningOptions
>::convert_2_to_1(
  const moveit_msgs::msg::PlanningOptions & ros2_msg,
  moveit_msgs::PlanningOptions & ros1_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::PlanningScene,
    moveit_msgs::msg::PlanningScene
  >::convert_2_to_1(
    ros2_msg.planning_scene_diff, ros1_msg.planning_scene_diff);

  // convert non-array field
  // convert primitive field
  ros1_msg.plan_only = ros2_msg.plan_only;

  // convert non-array field
  // convert primitive field
  ros1_msg.look_around = ros2_msg.look_around;

  // convert non-array field
  // convert primitive field
  ros1_msg.look_around_attempts = ros2_msg.look_around_attempts;

  // convert non-array field
  // convert primitive field
  ros1_msg.max_safe_execution_cost = ros2_msg.max_safe_execution_cost;

  // convert non-array field
  // convert primitive field
  ros1_msg.replan = ros2_msg.replan;

  // convert non-array field
  // convert primitive field
  ros1_msg.replan_attempts = ros2_msg.replan_attempts;

  // convert non-array field
  // convert primitive field
  ros1_msg.replan_delay = ros2_msg.replan_delay;
}
}  // namespace ros1_bridge
