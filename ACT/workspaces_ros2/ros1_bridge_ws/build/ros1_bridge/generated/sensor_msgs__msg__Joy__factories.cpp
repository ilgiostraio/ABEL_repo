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
get_factory_sensor_msgs__msg__Joy(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "sensor_msgs/Joy" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/msg/Joy")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::Joy,
        sensor_msgs::msg::Joy
      >
    >("sensor_msgs/Joy", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_sensor_msgs__msg__Joy(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  sensor_msgs::Joy,
  sensor_msgs::msg::Joy
>::convert_1_to_2(
  const sensor_msgs::Joy & ros1_msg,
  sensor_msgs::msg::Joy & ros2_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.axes.resize(ros1_msg.axes.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.axes.begin(),
    ros1_msg.axes.end(),
    ros2_msg.axes.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.buttons.resize(ros1_msg.buttons.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.buttons.begin(),
    ros1_msg.buttons.end(),
    ros2_msg.buttons.begin());
}

template<>
void
Factory<
  sensor_msgs::Joy,
  sensor_msgs::msg::Joy
>::convert_2_to_1(
  const sensor_msgs::msg::Joy & ros2_msg,
  sensor_msgs::Joy & ros1_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.axes.resize(ros2_msg.axes.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.axes.begin(),
    ros2_msg.axes.end(),
    ros1_msg.axes.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.buttons.resize(ros2_msg.buttons.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.buttons.begin(),
    ros2_msg.buttons.end(),
    ros1_msg.buttons.begin());
}
}  // namespace ros1_bridge
