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
get_factory_sensor_msgs__msg__JoyFeedbackArray(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "sensor_msgs/JoyFeedbackArray" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/msg/JoyFeedbackArray")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::JoyFeedbackArray,
        sensor_msgs::msg::JoyFeedbackArray
      >
    >("sensor_msgs/JoyFeedbackArray", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_sensor_msgs__msg__JoyFeedbackArray(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  sensor_msgs::JoyFeedbackArray,
  sensor_msgs::msg::JoyFeedbackArray
>::convert_1_to_2(
  const sensor_msgs::JoyFeedbackArray & ros1_msg,
  sensor_msgs::msg::JoyFeedbackArray & ros2_msg)
{

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.array.resize(ros1_msg.array.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.array.cbegin();
    auto ros2_it = ros2_msg.array.begin();
    for (
      ;
      ros1_it != ros1_msg.array.cend() &&
      ros2_it != ros2_msg.array.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        sensor_msgs::JoyFeedback,
        sensor_msgs::msg::JoyFeedback
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }
}

template<>
void
Factory<
  sensor_msgs::JoyFeedbackArray,
  sensor_msgs::msg::JoyFeedbackArray
>::convert_2_to_1(
  const sensor_msgs::msg::JoyFeedbackArray & ros2_msg,
  sensor_msgs::JoyFeedbackArray & ros1_msg)
{

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.array.resize(ros2_msg.array.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.array.cbegin();
    auto ros1_it = ros1_msg.array.begin();
    for (
      ;
      ros2_it != ros2_msg.array.cend() &&
      ros1_it != ros1_msg.array.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        sensor_msgs::JoyFeedback,
        sensor_msgs::msg::JoyFeedback
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }
}
}  // namespace ros1_bridge
