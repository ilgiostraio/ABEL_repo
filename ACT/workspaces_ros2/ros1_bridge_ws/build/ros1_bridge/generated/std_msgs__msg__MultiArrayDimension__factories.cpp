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
get_factory_std_msgs__msg__MultiArrayDimension(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "std_msgs/MultiArrayDimension" ||
     ros1_type_name == "") &&
    ros2_type_name == "std_msgs/msg/MultiArrayDimension")
  {
    return std::make_shared<
      Factory<
        std_msgs::MultiArrayDimension,
        std_msgs::msg::MultiArrayDimension
      >
    >("std_msgs/MultiArrayDimension", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_std_msgs__msg__MultiArrayDimension(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  std_msgs::MultiArrayDimension,
  std_msgs::msg::MultiArrayDimension
>::convert_1_to_2(
  const std_msgs::MultiArrayDimension & ros1_msg,
  std_msgs::msg::MultiArrayDimension & ros2_msg)
{

  // convert non-array field
  // convert primitive field
  ros2_msg.label = ros1_msg.label;

  // convert non-array field
  // convert primitive field
  ros2_msg.size = ros1_msg.size;

  // convert non-array field
  // convert primitive field
  ros2_msg.stride = ros1_msg.stride;
}

template<>
void
Factory<
  std_msgs::MultiArrayDimension,
  std_msgs::msg::MultiArrayDimension
>::convert_2_to_1(
  const std_msgs::msg::MultiArrayDimension & ros2_msg,
  std_msgs::MultiArrayDimension & ros1_msg)
{

  // convert non-array field
  // convert primitive field
  ros1_msg.label = ros2_msg.label;

  // convert non-array field
  // convert primitive field
  ros1_msg.size = ros2_msg.size;

  // convert non-array field
  // convert primitive field
  ros1_msg.stride = ros2_msg.stride;
}
}  // namespace ros1_bridge
