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
get_factory_sensor_msgs__msg__Illuminance(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "sensor_msgs/Illuminance" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/msg/Illuminance")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::Illuminance,
        sensor_msgs::msg::Illuminance
      >
    >("sensor_msgs/Illuminance", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_sensor_msgs__msg__Illuminance(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  sensor_msgs::Illuminance,
  sensor_msgs::msg::Illuminance
>::convert_1_to_2(
  const sensor_msgs::Illuminance & ros1_msg,
  sensor_msgs::msg::Illuminance & ros2_msg)
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
  ros2_msg.illuminance = ros1_msg.illuminance;

  // convert non-array field
  // convert primitive field
  ros2_msg.variance = ros1_msg.variance;
}

template<>
void
Factory<
  sensor_msgs::Illuminance,
  sensor_msgs::msg::Illuminance
>::convert_2_to_1(
  const sensor_msgs::msg::Illuminance & ros2_msg,
  sensor_msgs::Illuminance & ros1_msg)
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
  ros1_msg.illuminance = ros2_msg.illuminance;

  // convert non-array field
  // convert primitive field
  ros1_msg.variance = ros2_msg.variance;
}
}  // namespace ros1_bridge
