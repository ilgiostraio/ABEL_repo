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
get_factory_control_msgs__msg__PidState(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "control_msgs/PidState" ||
     ros1_type_name == "") &&
    ros2_type_name == "control_msgs/msg/PidState")
  {
    return std::make_shared<
      Factory<
        control_msgs::PidState,
        control_msgs::msg::PidState
      >
    >("control_msgs/PidState", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_control_msgs__msg__PidState(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  control_msgs::PidState,
  control_msgs::msg::PidState
>::convert_1_to_2(
  const control_msgs::PidState & ros1_msg,
  control_msgs::msg::PidState & ros2_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);

  // convert non-array field
  // convert builtin field
  ros1_bridge::convert_1_to_2(ros1_msg.timestep, ros2_msg.timestep);

  // convert non-array field
  // convert primitive field
  ros2_msg.error = ros1_msg.error;

  // convert non-array field
  // convert primitive field
  ros2_msg.error_dot = ros1_msg.error_dot;

  // convert non-array field
  // convert primitive field
  ros2_msg.p_error = ros1_msg.p_error;

  // convert non-array field
  // convert primitive field
  ros2_msg.i_error = ros1_msg.i_error;

  // convert non-array field
  // convert primitive field
  ros2_msg.d_error = ros1_msg.d_error;

  // convert non-array field
  // convert primitive field
  ros2_msg.p_term = ros1_msg.p_term;

  // convert non-array field
  // convert primitive field
  ros2_msg.i_term = ros1_msg.i_term;

  // convert non-array field
  // convert primitive field
  ros2_msg.d_term = ros1_msg.d_term;

  // convert non-array field
  // convert primitive field
  ros2_msg.i_max = ros1_msg.i_max;

  // convert non-array field
  // convert primitive field
  ros2_msg.i_min = ros1_msg.i_min;

  // convert non-array field
  // convert primitive field
  ros2_msg.output = ros1_msg.output;
}

template<>
void
Factory<
  control_msgs::PidState,
  control_msgs::msg::PidState
>::convert_2_to_1(
  const control_msgs::msg::PidState & ros2_msg,
  control_msgs::PidState & ros1_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);

  // convert non-array field
  // convert builtin field
  ros1_bridge::convert_2_to_1(ros2_msg.timestep, ros1_msg.timestep);

  // convert non-array field
  // convert primitive field
  ros1_msg.error = ros2_msg.error;

  // convert non-array field
  // convert primitive field
  ros1_msg.error_dot = ros2_msg.error_dot;

  // convert non-array field
  // convert primitive field
  ros1_msg.p_error = ros2_msg.p_error;

  // convert non-array field
  // convert primitive field
  ros1_msg.i_error = ros2_msg.i_error;

  // convert non-array field
  // convert primitive field
  ros1_msg.d_error = ros2_msg.d_error;

  // convert non-array field
  // convert primitive field
  ros1_msg.p_term = ros2_msg.p_term;

  // convert non-array field
  // convert primitive field
  ros1_msg.i_term = ros2_msg.i_term;

  // convert non-array field
  // convert primitive field
  ros1_msg.d_term = ros2_msg.d_term;

  // convert non-array field
  // convert primitive field
  ros1_msg.i_max = ros2_msg.i_max;

  // convert non-array field
  // convert primitive field
  ros1_msg.i_min = ros2_msg.i_min;

  // convert non-array field
  // convert primitive field
  ros1_msg.output = ros2_msg.output;
}
}  // namespace ros1_bridge
