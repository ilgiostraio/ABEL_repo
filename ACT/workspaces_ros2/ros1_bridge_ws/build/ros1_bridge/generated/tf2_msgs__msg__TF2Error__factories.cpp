// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "tf2_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_tf2_msgs__msg__TF2Error(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "tf2_msgs/TF2Error" ||
     ros1_type_name == "") &&
    ros2_type_name == "tf2_msgs/msg/TF2Error")
  {
    return std::make_shared<
      Factory<
        tf2_msgs::TF2Error,
        tf2_msgs::msg::TF2Error
      >
    >("tf2_msgs/TF2Error", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_tf2_msgs__msg__TF2Error(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  tf2_msgs::TF2Error,
  tf2_msgs::msg::TF2Error
>::convert_1_to_2(
  const tf2_msgs::TF2Error & ros1_msg,
  tf2_msgs::msg::TF2Error & ros2_msg)
{

  // convert non-array field
  // convert primitive field
  ros2_msg.error = ros1_msg.error;

  // convert non-array field
  // convert primitive field
  ros2_msg.error_string = ros1_msg.error_string;
}

template<>
void
Factory<
  tf2_msgs::TF2Error,
  tf2_msgs::msg::TF2Error
>::convert_2_to_1(
  const tf2_msgs::msg::TF2Error & ros2_msg,
  tf2_msgs::TF2Error & ros1_msg)
{

  // convert non-array field
  // convert primitive field
  ros1_msg.error = ros2_msg.error;

  // convert non-array field
  // convert primitive field
  ros1_msg.error_string = ros2_msg.error_string;
}
}  // namespace ros1_bridge
