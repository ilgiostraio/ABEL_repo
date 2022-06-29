// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "std_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_std_msgs__msg__Int8MultiArray(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "std_msgs/Int8MultiArray" ||
     ros1_type_name == "") &&
    ros2_type_name == "std_msgs/msg/Int8MultiArray")
  {
    return std::make_shared<
      Factory<
        std_msgs::Int8MultiArray,
        std_msgs::msg::Int8MultiArray
      >
    >("std_msgs/Int8MultiArray", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_std_msgs__msg__Int8MultiArray(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  std_msgs::Int8MultiArray,
  std_msgs::msg::Int8MultiArray
>::convert_1_to_2(
  const std_msgs::Int8MultiArray & ros1_msg,
  std_msgs::msg::Int8MultiArray & ros2_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    std_msgs::MultiArrayLayout,
    std_msgs::msg::MultiArrayLayout
  >::convert_1_to_2(
    ros1_msg.layout, ros2_msg.layout);

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.data.resize(ros1_msg.data.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.data.begin(),
    ros1_msg.data.end(),
    ros2_msg.data.begin());
}

template<>
void
Factory<
  std_msgs::Int8MultiArray,
  std_msgs::msg::Int8MultiArray
>::convert_2_to_1(
  const std_msgs::msg::Int8MultiArray & ros2_msg,
  std_msgs::Int8MultiArray & ros1_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    std_msgs::MultiArrayLayout,
    std_msgs::msg::MultiArrayLayout
  >::convert_2_to_1(
    ros2_msg.layout, ros1_msg.layout);

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.data.resize(ros2_msg.data.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.data.begin(),
    ros2_msg.data.end(),
    ros1_msg.data.begin());
}
}  // namespace ros1_bridge
