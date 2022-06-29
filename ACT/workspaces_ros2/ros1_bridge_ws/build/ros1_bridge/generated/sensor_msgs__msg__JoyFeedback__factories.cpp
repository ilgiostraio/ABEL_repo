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
get_factory_sensor_msgs__msg__JoyFeedback(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "sensor_msgs/JoyFeedback" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/msg/JoyFeedback")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::JoyFeedback,
        sensor_msgs::msg::JoyFeedback
      >
    >("sensor_msgs/JoyFeedback", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_sensor_msgs__msg__JoyFeedback(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  sensor_msgs::JoyFeedback,
  sensor_msgs::msg::JoyFeedback
>::convert_1_to_2(
  const sensor_msgs::JoyFeedback & ros1_msg,
  sensor_msgs::msg::JoyFeedback & ros2_msg)
{

  // convert non-array field
  // convert primitive field
  ros2_msg.type = ros1_msg.type;

  // convert non-array field
  // convert primitive field
  ros2_msg.id = ros1_msg.id;

  // convert non-array field
  // convert primitive field
  ros2_msg.intensity = ros1_msg.intensity;
}

template<>
void
Factory<
  sensor_msgs::JoyFeedback,
  sensor_msgs::msg::JoyFeedback
>::convert_2_to_1(
  const sensor_msgs::msg::JoyFeedback & ros2_msg,
  sensor_msgs::JoyFeedback & ros1_msg)
{

  // convert non-array field
  // convert primitive field
  ros1_msg.type = ros2_msg.type;

  // convert non-array field
  // convert primitive field
  ros1_msg.id = ros2_msg.id;

  // convert non-array field
  // convert primitive field
  ros1_msg.intensity = ros2_msg.intensity;
}
}  // namespace ros1_bridge
