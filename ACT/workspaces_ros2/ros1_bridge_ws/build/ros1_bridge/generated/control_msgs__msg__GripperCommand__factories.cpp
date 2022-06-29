// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "control_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_control_msgs__msg__GripperCommand(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "control_msgs/GripperCommand" ||
     ros1_type_name == "") &&
    ros2_type_name == "control_msgs/msg/GripperCommand")
  {
    return std::make_shared<
      Factory<
        control_msgs::GripperCommand,
        control_msgs::msg::GripperCommand
      >
    >("control_msgs/GripperCommand", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_control_msgs__msg__GripperCommand(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  control_msgs::GripperCommand,
  control_msgs::msg::GripperCommand
>::convert_1_to_2(
  const control_msgs::GripperCommand & ros1_msg,
  control_msgs::msg::GripperCommand & ros2_msg)
{

  // convert non-array field
  // convert primitive field
  ros2_msg.position = ros1_msg.position;

  // convert non-array field
  // convert primitive field
  ros2_msg.max_effort = ros1_msg.max_effort;
}

template<>
void
Factory<
  control_msgs::GripperCommand,
  control_msgs::msg::GripperCommand
>::convert_2_to_1(
  const control_msgs::msg::GripperCommand & ros2_msg,
  control_msgs::GripperCommand & ros1_msg)
{

  // convert non-array field
  // convert primitive field
  ros1_msg.position = ros2_msg.position;

  // convert non-array field
  // convert primitive field
  ros1_msg.max_effort = ros2_msg.max_effort;
}
}  // namespace ros1_bridge
