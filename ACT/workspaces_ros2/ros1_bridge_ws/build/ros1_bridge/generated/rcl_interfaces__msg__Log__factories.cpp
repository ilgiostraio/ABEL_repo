// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "rcl_interfaces_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_rcl_interfaces__msg__Log(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "rosgraph_msgs/Log" ||
     ros1_type_name == "") &&
    ros2_type_name == "rcl_interfaces/msg/Log")
  {
    return std::make_shared<
      Factory<
        rosgraph_msgs::Log,
        rcl_interfaces::msg::Log
      >
    >("rosgraph_msgs/Log", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_rcl_interfaces__msg__Log(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  rosgraph_msgs::Log,
  rcl_interfaces::msg::Log
>::convert_1_to_2(
  const rosgraph_msgs::Log & ros1_msg,
  rcl_interfaces::msg::Log & ros2_msg)
{

  // convert non-array field
  // convert builtin field
  ros1_bridge::convert_1_to_2(ros1_msg.header.stamp, ros2_msg.stamp);

  // convert non-array field
  // convert primitive field
  ros2_msg.level = ros1_msg.level;

  // convert non-array field
  // convert primitive field
  ros2_msg.name = ros1_msg.name;

  // convert non-array field
  // convert primitive field
  ros2_msg.msg = ros1_msg.msg;

  // convert non-array field
  // convert primitive field
  ros2_msg.file = ros1_msg.file;

  // convert non-array field
  // convert primitive field
  ros2_msg.function = ros1_msg.function;

  // convert non-array field
  // convert primitive field
  ros2_msg.line = ros1_msg.line;
}

template<>
void
Factory<
  rosgraph_msgs::Log,
  rcl_interfaces::msg::Log
>::convert_2_to_1(
  const rcl_interfaces::msg::Log & ros2_msg,
  rosgraph_msgs::Log & ros1_msg)
{

  // convert non-array field
  // convert builtin field
  ros1_bridge::convert_2_to_1(ros2_msg.stamp, ros1_msg.header.stamp);

  // convert non-array field
  // convert primitive field
  ros1_msg.level = ros2_msg.level;

  // convert non-array field
  // convert primitive field
  ros1_msg.name = ros2_msg.name;

  // convert non-array field
  // convert primitive field
  ros1_msg.msg = ros2_msg.msg;

  // convert non-array field
  // convert primitive field
  ros1_msg.file = ros2_msg.file;

  // convert non-array field
  // convert primitive field
  ros1_msg.function = ros2_msg.function;

  // convert non-array field
  // convert primitive field
  ros1_msg.line = ros2_msg.line;
}
}  // namespace ros1_bridge
