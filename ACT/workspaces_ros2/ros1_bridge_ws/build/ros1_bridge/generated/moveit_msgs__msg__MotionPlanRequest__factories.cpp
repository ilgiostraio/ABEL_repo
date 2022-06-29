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
get_factory_moveit_msgs__msg__MotionPlanRequest(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "moveit_msgs/MotionPlanRequest" ||
     ros1_type_name == "") &&
    ros2_type_name == "moveit_msgs/msg/MotionPlanRequest")
  {
    return std::make_shared<
      Factory<
        moveit_msgs::MotionPlanRequest,
        moveit_msgs::msg::MotionPlanRequest
      >
    >("moveit_msgs/MotionPlanRequest", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__msg__MotionPlanRequest(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  moveit_msgs::MotionPlanRequest,
  moveit_msgs::msg::MotionPlanRequest
>::convert_1_to_2(
  const moveit_msgs::MotionPlanRequest & ros1_msg,
  moveit_msgs::msg::MotionPlanRequest & ros2_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::WorkspaceParameters,
    moveit_msgs::msg::WorkspaceParameters
  >::convert_1_to_2(
    ros1_msg.workspace_parameters, ros2_msg.workspace_parameters);

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::RobotState,
    moveit_msgs::msg::RobotState
  >::convert_1_to_2(
    ros1_msg.start_state, ros2_msg.start_state);

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.goal_constraints.resize(ros1_msg.goal_constraints.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.goal_constraints.cbegin();
    auto ros2_it = ros2_msg.goal_constraints.begin();
    for (
      ;
      ros1_it != ros1_msg.goal_constraints.cend() &&
      ros2_it != ros2_msg.goal_constraints.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        moveit_msgs::Constraints,
        moveit_msgs::msg::Constraints
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::Constraints,
    moveit_msgs::msg::Constraints
  >::convert_1_to_2(
    ros1_msg.path_constraints, ros2_msg.path_constraints);

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::TrajectoryConstraints,
    moveit_msgs::msg::TrajectoryConstraints
  >::convert_1_to_2(
    ros1_msg.trajectory_constraints, ros2_msg.trajectory_constraints);

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.reference_trajectories.resize(ros1_msg.reference_trajectories.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.reference_trajectories.cbegin();
    auto ros2_it = ros2_msg.reference_trajectories.begin();
    for (
      ;
      ros1_it != ros1_msg.reference_trajectories.cend() &&
      ros2_it != ros2_msg.reference_trajectories.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        moveit_msgs::GenericTrajectory,
        moveit_msgs::msg::GenericTrajectory
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }

  // convert non-array field
  // convert primitive field
  ros2_msg.planner_id = ros1_msg.planner_id;

  // convert non-array field
  // convert primitive field
  ros2_msg.group_name = ros1_msg.group_name;

  // convert non-array field
  // convert primitive field
  ros2_msg.num_planning_attempts = ros1_msg.num_planning_attempts;

  // convert non-array field
  // convert primitive field
  ros2_msg.allowed_planning_time = ros1_msg.allowed_planning_time;

  // convert non-array field
  // convert primitive field
  ros2_msg.max_velocity_scaling_factor = ros1_msg.max_velocity_scaling_factor;

  // convert non-array field
  // convert primitive field
  ros2_msg.max_acceleration_scaling_factor = ros1_msg.max_acceleration_scaling_factor;

  // convert non-array field
  // convert primitive field
  ros2_msg.cartesian_speed_end_effector_link = ros1_msg.cartesian_speed_end_effector_link;

  // convert non-array field
  // convert primitive field
  ros2_msg.max_cartesian_speed = ros1_msg.max_cartesian_speed;
}

template<>
void
Factory<
  moveit_msgs::MotionPlanRequest,
  moveit_msgs::msg::MotionPlanRequest
>::convert_2_to_1(
  const moveit_msgs::msg::MotionPlanRequest & ros2_msg,
  moveit_msgs::MotionPlanRequest & ros1_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::WorkspaceParameters,
    moveit_msgs::msg::WorkspaceParameters
  >::convert_2_to_1(
    ros2_msg.workspace_parameters, ros1_msg.workspace_parameters);

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::RobotState,
    moveit_msgs::msg::RobotState
  >::convert_2_to_1(
    ros2_msg.start_state, ros1_msg.start_state);

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.goal_constraints.resize(ros2_msg.goal_constraints.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.goal_constraints.cbegin();
    auto ros1_it = ros1_msg.goal_constraints.begin();
    for (
      ;
      ros2_it != ros2_msg.goal_constraints.cend() &&
      ros1_it != ros1_msg.goal_constraints.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        moveit_msgs::Constraints,
        moveit_msgs::msg::Constraints
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::Constraints,
    moveit_msgs::msg::Constraints
  >::convert_2_to_1(
    ros2_msg.path_constraints, ros1_msg.path_constraints);

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::TrajectoryConstraints,
    moveit_msgs::msg::TrajectoryConstraints
  >::convert_2_to_1(
    ros2_msg.trajectory_constraints, ros1_msg.trajectory_constraints);

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.reference_trajectories.resize(ros2_msg.reference_trajectories.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.reference_trajectories.cbegin();
    auto ros1_it = ros1_msg.reference_trajectories.begin();
    for (
      ;
      ros2_it != ros2_msg.reference_trajectories.cend() &&
      ros1_it != ros1_msg.reference_trajectories.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        moveit_msgs::GenericTrajectory,
        moveit_msgs::msg::GenericTrajectory
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }

  // convert non-array field
  // convert primitive field
  ros1_msg.planner_id = ros2_msg.planner_id;

  // convert non-array field
  // convert primitive field
  ros1_msg.group_name = ros2_msg.group_name;

  // convert non-array field
  // convert primitive field
  ros1_msg.num_planning_attempts = ros2_msg.num_planning_attempts;

  // convert non-array field
  // convert primitive field
  ros1_msg.allowed_planning_time = ros2_msg.allowed_planning_time;

  // convert non-array field
  // convert primitive field
  ros1_msg.max_velocity_scaling_factor = ros2_msg.max_velocity_scaling_factor;

  // convert non-array field
  // convert primitive field
  ros1_msg.max_acceleration_scaling_factor = ros2_msg.max_acceleration_scaling_factor;

  // convert non-array field
  // convert primitive field
  ros1_msg.cartesian_speed_end_effector_link = ros2_msg.cartesian_speed_end_effector_link;

  // convert non-array field
  // convert primitive field
  ros1_msg.max_cartesian_speed = ros2_msg.max_cartesian_speed;
}
}  // namespace ros1_bridge
