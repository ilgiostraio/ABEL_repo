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
get_factory_control_msgs__msg__JointControllerState(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "control_msgs/JointControllerState" ||
     ros1_type_name == "") &&
    ros2_type_name == "control_msgs/msg/JointControllerState")
  {
    return std::make_shared<
      Factory<
        control_msgs::JointControllerState,
        control_msgs::msg::JointControllerState
      >
    >("control_msgs/JointControllerState", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_control_msgs__msg__JointControllerState(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  control_msgs::JointControllerState,
  control_msgs::msg::JointControllerState
>::convert_1_to_2(
  const control_msgs::JointControllerState & ros1_msg,
  control_msgs::msg::JointControllerState & ros2_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);

  // convert non-array field
  // convert primitive field
  ros2_msg.set_point = ros1_msg.set_point;

  // convert non-array field
  // convert primitive field
  ros2_msg.process_value = ros1_msg.process_value;

  // convert non-array field
  // convert primitive field
  ros2_msg.process_value_dot = ros1_msg.process_value_dot;

  // convert non-array field
  // convert primitive field
  ros2_msg.error = ros1_msg.error;

  // convert non-array field
  // convert primitive field
  ros2_msg.time_step = ros1_msg.time_step;

  // convert non-array field
  // convert primitive field
  ros2_msg.command = ros1_msg.command;

  // convert non-array field
  // convert primitive field
  ros2_msg.p = ros1_msg.p;

  // convert non-array field
  // convert primitive field
  ros2_msg.i = ros1_msg.i;

  // convert non-array field
  // convert primitive field
  ros2_msg.d = ros1_msg.d;

  // convert non-array field
  // convert primitive field
  ros2_msg.i_clamp = ros1_msg.i_clamp;

  // convert non-array field
  // convert primitive field
  ros2_msg.antiwindup = ros1_msg.antiwindup;
}

template<>
void
Factory<
  control_msgs::JointControllerState,
  control_msgs::msg::JointControllerState
>::convert_2_to_1(
  const control_msgs::msg::JointControllerState & ros2_msg,
  control_msgs::JointControllerState & ros1_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);

  // convert non-array field
  // convert primitive field
  ros1_msg.set_point = ros2_msg.set_point;

  // convert non-array field
  // convert primitive field
  ros1_msg.process_value = ros2_msg.process_value;

  // convert non-array field
  // convert primitive field
  ros1_msg.process_value_dot = ros2_msg.process_value_dot;

  // convert non-array field
  // convert primitive field
  ros1_msg.error = ros2_msg.error;

  // convert non-array field
  // convert primitive field
  ros1_msg.time_step = ros2_msg.time_step;

  // convert non-array field
  // convert primitive field
  ros1_msg.command = ros2_msg.command;

  // convert non-array field
  // convert primitive field
  ros1_msg.p = ros2_msg.p;

  // convert non-array field
  // convert primitive field
  ros1_msg.i = ros2_msg.i;

  // convert non-array field
  // convert primitive field
  ros1_msg.d = ros2_msg.d;

  // convert non-array field
  // convert primitive field
  ros1_msg.i_clamp = ros2_msg.i_clamp;

  // convert non-array field
  // convert primitive field
  ros1_msg.antiwindup = ros2_msg.antiwindup;
}
}  // namespace ros1_bridge
