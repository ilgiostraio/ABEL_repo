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
get_factory_control_msgs__msg__JointTolerance(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "control_msgs/JointTolerance" ||
     ros1_type_name == "") &&
    ros2_type_name == "control_msgs/msg/JointTolerance")
  {
    return std::make_shared<
      Factory<
        control_msgs::JointTolerance,
        control_msgs::msg::JointTolerance
      >
    >("control_msgs/JointTolerance", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_control_msgs__msg__JointTolerance(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  control_msgs::JointTolerance,
  control_msgs::msg::JointTolerance
>::convert_1_to_2(
  const control_msgs::JointTolerance & ros1_msg,
  control_msgs::msg::JointTolerance & ros2_msg)
{

  // convert non-array field
  // convert primitive field
  ros2_msg.name = ros1_msg.name;

  // convert non-array field
  // convert primitive field
  ros2_msg.position = ros1_msg.position;

  // convert non-array field
  // convert primitive field
  ros2_msg.velocity = ros1_msg.velocity;

  // convert non-array field
  // convert primitive field
  ros2_msg.acceleration = ros1_msg.acceleration;
}

template<>
void
Factory<
  control_msgs::JointTolerance,
  control_msgs::msg::JointTolerance
>::convert_2_to_1(
  const control_msgs::msg::JointTolerance & ros2_msg,
  control_msgs::JointTolerance & ros1_msg)
{

  // convert non-array field
  // convert primitive field
  ros1_msg.name = ros2_msg.name;

  // convert non-array field
  // convert primitive field
  ros1_msg.position = ros2_msg.position;

  // convert non-array field
  // convert primitive field
  ros1_msg.velocity = ros2_msg.velocity;

  // convert non-array field
  // convert primitive field
  ros1_msg.acceleration = ros2_msg.acceleration;
}
}  // namespace ros1_bridge
