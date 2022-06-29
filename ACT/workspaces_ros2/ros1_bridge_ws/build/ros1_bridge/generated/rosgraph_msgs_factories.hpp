// generated from ros1_bridge/resource/pkg_factories.hpp.em

#include <memory>
#include <string>

#include <ros1_bridge/factory.hpp>

// include ROS 1 messages
#include <rosgraph_msgs/Clock.h>

// include ROS 2 messages
#include <rosgraph_msgs/msg/clock.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_rosgraph_msgs(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_rosgraph_msgs__msg__Clock(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_rosgraph_msgs(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

// conversion functions for available interfaces

template<>
void
Factory<
  rosgraph_msgs::Clock,
  rosgraph_msgs::msg::Clock
>::convert_1_to_2(
  const rosgraph_msgs::Clock & ros1_msg,
  rosgraph_msgs::msg::Clock & ros2_msg);

template<>
void
Factory<
  rosgraph_msgs::Clock,
  rosgraph_msgs::msg::Clock
>::convert_2_to_1(
  const rosgraph_msgs::msg::Clock & ros2_msg,
  rosgraph_msgs::Clock & ros1_msg);

}  // namespace ros1_bridge
