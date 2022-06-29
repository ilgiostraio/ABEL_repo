// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "diagnostic_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_diagnostic_msgs__msg__KeyValue(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "diagnostic_msgs/KeyValue" ||
     ros1_type_name == "") &&
    ros2_type_name == "diagnostic_msgs/msg/KeyValue")
  {
    return std::make_shared<
      Factory<
        diagnostic_msgs::KeyValue,
        diagnostic_msgs::msg::KeyValue
      >
    >("diagnostic_msgs/KeyValue", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_diagnostic_msgs__msg__KeyValue(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  diagnostic_msgs::KeyValue,
  diagnostic_msgs::msg::KeyValue
>::convert_1_to_2(
  const diagnostic_msgs::KeyValue & ros1_msg,
  diagnostic_msgs::msg::KeyValue & ros2_msg)
{

  // convert non-array field
  // convert primitive field
  ros2_msg.key = ros1_msg.key;

  // convert non-array field
  // convert primitive field
  ros2_msg.value = ros1_msg.value;
}

template<>
void
Factory<
  diagnostic_msgs::KeyValue,
  diagnostic_msgs::msg::KeyValue
>::convert_2_to_1(
  const diagnostic_msgs::msg::KeyValue & ros2_msg,
  diagnostic_msgs::KeyValue & ros1_msg)
{

  // convert non-array field
  // convert primitive field
  ros1_msg.key = ros2_msg.key;

  // convert non-array field
  // convert primitive field
  ros1_msg.value = ros2_msg.value;
}
}  // namespace ros1_bridge
