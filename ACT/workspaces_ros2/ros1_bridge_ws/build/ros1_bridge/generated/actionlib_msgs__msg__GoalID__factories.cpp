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
get_factory_actionlib_msgs__msg__GoalID(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "actionlib_msgs/GoalID" ||
     ros1_type_name == "") &&
    ros2_type_name == "actionlib_msgs/msg/GoalID")
  {
    return std::make_shared<
      Factory<
        actionlib_msgs::GoalID,
        actionlib_msgs::msg::GoalID
      >
    >("actionlib_msgs/GoalID", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_actionlib_msgs__msg__GoalID(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  actionlib_msgs::GoalID,
  actionlib_msgs::msg::GoalID
>::convert_1_to_2(
  const actionlib_msgs::GoalID & ros1_msg,
  actionlib_msgs::msg::GoalID & ros2_msg)
{

  // convert non-array field
  // convert builtin field
  ros1_bridge::convert_1_to_2(ros1_msg.stamp, ros2_msg.stamp);

  // convert non-array field
  // convert primitive field
  ros2_msg.id = ros1_msg.id;
}

template<>
void
Factory<
  actionlib_msgs::GoalID,
  actionlib_msgs::msg::GoalID
>::convert_2_to_1(
  const actionlib_msgs::msg::GoalID & ros2_msg,
  actionlib_msgs::GoalID & ros1_msg)
{

  // convert non-array field
  // convert builtin field
  ros1_bridge::convert_2_to_1(ros2_msg.stamp, ros1_msg.stamp);

  // convert non-array field
  // convert primitive field
  ros1_msg.id = ros2_msg.id;
}
}  // namespace ros1_bridge
