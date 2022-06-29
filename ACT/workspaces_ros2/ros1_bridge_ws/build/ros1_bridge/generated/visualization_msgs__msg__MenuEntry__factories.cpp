// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "visualization_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_visualization_msgs__msg__MenuEntry(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "visualization_msgs/MenuEntry" ||
     ros1_type_name == "") &&
    ros2_type_name == "visualization_msgs/msg/MenuEntry")
  {
    return std::make_shared<
      Factory<
        visualization_msgs::MenuEntry,
        visualization_msgs::msg::MenuEntry
      >
    >("visualization_msgs/MenuEntry", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_visualization_msgs__msg__MenuEntry(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  visualization_msgs::MenuEntry,
  visualization_msgs::msg::MenuEntry
>::convert_1_to_2(
  const visualization_msgs::MenuEntry & ros1_msg,
  visualization_msgs::msg::MenuEntry & ros2_msg)
{

  // convert non-array field
  // convert primitive field
  ros2_msg.id = ros1_msg.id;

  // convert non-array field
  // convert primitive field
  ros2_msg.parent_id = ros1_msg.parent_id;

  // convert non-array field
  // convert primitive field
  ros2_msg.title = ros1_msg.title;

  // convert non-array field
  // convert primitive field
  ros2_msg.command = ros1_msg.command;

  // convert non-array field
  // convert primitive field
  ros2_msg.command_type = ros1_msg.command_type;
}

template<>
void
Factory<
  visualization_msgs::MenuEntry,
  visualization_msgs::msg::MenuEntry
>::convert_2_to_1(
  const visualization_msgs::msg::MenuEntry & ros2_msg,
  visualization_msgs::MenuEntry & ros1_msg)
{

  // convert non-array field
  // convert primitive field
  ros1_msg.id = ros2_msg.id;

  // convert non-array field
  // convert primitive field
  ros1_msg.parent_id = ros2_msg.parent_id;

  // convert non-array field
  // convert primitive field
  ros1_msg.title = ros2_msg.title;

  // convert non-array field
  // convert primitive field
  ros1_msg.command = ros2_msg.command;

  // convert non-array field
  // convert primitive field
  ros1_msg.command_type = ros2_msg.command_type;
}
}  // namespace ros1_bridge
