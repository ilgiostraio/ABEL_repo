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
get_factory_moveit_msgs__msg__DisplayTrajectory(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "moveit_msgs/DisplayTrajectory" ||
     ros1_type_name == "") &&
    ros2_type_name == "moveit_msgs/msg/DisplayTrajectory")
  {
    return std::make_shared<
      Factory<
        moveit_msgs::DisplayTrajectory,
        moveit_msgs::msg::DisplayTrajectory
      >
    >("moveit_msgs/DisplayTrajectory", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__msg__DisplayTrajectory(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  moveit_msgs::DisplayTrajectory,
  moveit_msgs::msg::DisplayTrajectory
>::convert_1_to_2(
  const moveit_msgs::DisplayTrajectory & ros1_msg,
  moveit_msgs::msg::DisplayTrajectory & ros2_msg)
{

  // convert non-array field
  // convert primitive field
  ros2_msg.model_id = ros1_msg.model_id;

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.trajectory.resize(ros1_msg.trajectory.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.trajectory.cbegin();
    auto ros2_it = ros2_msg.trajectory.begin();
    for (
      ;
      ros1_it != ros1_msg.trajectory.cend() &&
      ros2_it != ros2_msg.trajectory.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        moveit_msgs::RobotTrajectory,
        moveit_msgs::msg::RobotTrajectory
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::RobotState,
    moveit_msgs::msg::RobotState
  >::convert_1_to_2(
    ros1_msg.trajectory_start, ros2_msg.trajectory_start);
}

template<>
void
Factory<
  moveit_msgs::DisplayTrajectory,
  moveit_msgs::msg::DisplayTrajectory
>::convert_2_to_1(
  const moveit_msgs::msg::DisplayTrajectory & ros2_msg,
  moveit_msgs::DisplayTrajectory & ros1_msg)
{

  // convert non-array field
  // convert primitive field
  ros1_msg.model_id = ros2_msg.model_id;

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.trajectory.resize(ros2_msg.trajectory.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.trajectory.cbegin();
    auto ros1_it = ros1_msg.trajectory.begin();
    for (
      ;
      ros2_it != ros2_msg.trajectory.cend() &&
      ros1_it != ros1_msg.trajectory.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        moveit_msgs::RobotTrajectory,
        moveit_msgs::msg::RobotTrajectory
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::RobotState,
    moveit_msgs::msg::RobotState
  >::convert_2_to_1(
    ros2_msg.trajectory_start, ros1_msg.trajectory_start);
}
}  // namespace ros1_bridge
