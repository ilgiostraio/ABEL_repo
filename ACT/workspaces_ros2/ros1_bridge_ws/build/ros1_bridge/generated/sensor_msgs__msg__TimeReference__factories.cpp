// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "sensor_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_sensor_msgs__msg__TimeReference(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "sensor_msgs/TimeReference" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/msg/TimeReference")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::TimeReference,
        sensor_msgs::msg::TimeReference
      >
    >("sensor_msgs/TimeReference", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_sensor_msgs__msg__TimeReference(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  sensor_msgs::TimeReference,
  sensor_msgs::msg::TimeReference
>::convert_1_to_2(
  const sensor_msgs::TimeReference & ros1_msg,
  sensor_msgs::msg::TimeReference & ros2_msg)
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
  ros1_bridge::convert_1_to_2(ros1_msg.time_ref, ros2_msg.time_ref);

  // convert non-array field
  // convert primitive field
  ros2_msg.source = ros1_msg.source;
}

template<>
void
Factory<
  sensor_msgs::TimeReference,
  sensor_msgs::msg::TimeReference
>::convert_2_to_1(
  const sensor_msgs::msg::TimeReference & ros2_msg,
  sensor_msgs::TimeReference & ros1_msg)
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
  ros1_bridge::convert_2_to_1(ros2_msg.time_ref, ros1_msg.time_ref);

  // convert non-array field
  // convert primitive field
  ros1_msg.source = ros2_msg.source;
}
}  // namespace ros1_bridge
