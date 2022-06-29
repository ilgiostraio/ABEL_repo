// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "actionlib_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_actionlib_msgs__msg__GoalStatus(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "actionlib_msgs/GoalStatus" ||
     ros1_type_name == "") &&
    ros2_type_name == "actionlib_msgs/msg/GoalStatus")
  {
    return std::make_shared<
      Factory<
        actionlib_msgs::GoalStatus,
        actionlib_msgs::msg::GoalStatus
      >
    >("actionlib_msgs/GoalStatus", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_actionlib_msgs__msg__GoalStatus(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  actionlib_msgs::GoalStatus,
  actionlib_msgs::msg::GoalStatus
>::convert_1_to_2(
  const actionlib_msgs::GoalStatus & ros1_msg,
  actionlib_msgs::msg::GoalStatus & ros2_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    actionlib_msgs::GoalID,
    actionlib_msgs::msg::GoalID
  >::convert_1_to_2(
    ros1_msg.goal_id, ros2_msg.goal_id);

  // convert non-array field
  // convert primitive field
  ros2_msg.status = ros1_msg.status;

  // convert non-array field
  // convert primitive field
  ros2_msg.text = ros1_msg.text;
}

template<>
void
Factory<
  actionlib_msgs::GoalStatus,
  actionlib_msgs::msg::GoalStatus
>::convert_2_to_1(
  const actionlib_msgs::msg::GoalStatus & ros2_msg,
  actionlib_msgs::GoalStatus & ros1_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    actionlib_msgs::GoalID,
    actionlib_msgs::msg::GoalID
  >::convert_2_to_1(
    ros2_msg.goal_id, ros1_msg.goal_id);

  // convert non-array field
  // convert primitive field
  ros1_msg.status = ros2_msg.status;

  // convert non-array field
  // convert primitive field
  ros1_msg.text = ros2_msg.text;
}
}  // namespace ros1_bridge
