// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "rosgraph_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_rosgraph_msgs__msg__Clock(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "rosgraph_msgs/Clock" ||
     ros1_type_name == "") &&
    ros2_type_name == "rosgraph_msgs/msg/Clock")
  {
    return std::make_shared<
      Factory<
        rosgraph_msgs::Clock,
        rosgraph_msgs::msg::Clock
      >
    >("rosgraph_msgs/Clock", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_rosgraph_msgs__msg__Clock(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  rosgraph_msgs::Clock,
  rosgraph_msgs::msg::Clock
>::convert_1_to_2(
  const rosgraph_msgs::Clock & ros1_msg,
  rosgraph_msgs::msg::Clock & ros2_msg)
{

  // convert non-array field
  // convert builtin field
  ros1_bridge::convert_1_to_2(ros1_msg.clock, ros2_msg.clock);
}

template<>
void
Factory<
  rosgraph_msgs::Clock,
  rosgraph_msgs::msg::Clock
>::convert_2_to_1(
  const rosgraph_msgs::msg::Clock & ros2_msg,
  rosgraph_msgs::Clock & ros1_msg)
{

  // convert non-array field
  // convert builtin field
  ros1_bridge::convert_2_to_1(ros2_msg.clock, ros1_msg.clock);
}
}  // namespace ros1_bridge
