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
get_factory_sensor_msgs__msg__LaserEcho(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "sensor_msgs/LaserEcho" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/msg/LaserEcho")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::LaserEcho,
        sensor_msgs::msg::LaserEcho
      >
    >("sensor_msgs/LaserEcho", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_sensor_msgs__msg__LaserEcho(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  sensor_msgs::LaserEcho,
  sensor_msgs::msg::LaserEcho
>::convert_1_to_2(
  const sensor_msgs::LaserEcho & ros1_msg,
  sensor_msgs::msg::LaserEcho & ros2_msg)
{

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.echoes.resize(ros1_msg.echoes.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.echoes.begin(),
    ros1_msg.echoes.end(),
    ros2_msg.echoes.begin());
}

template<>
void
Factory<
  sensor_msgs::LaserEcho,
  sensor_msgs::msg::LaserEcho
>::convert_2_to_1(
  const sensor_msgs::msg::LaserEcho & ros2_msg,
  sensor_msgs::LaserEcho & ros1_msg)
{

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.echoes.resize(ros2_msg.echoes.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.echoes.begin(),
    ros2_msg.echoes.end(),
    ros1_msg.echoes.begin());
}
}  // namespace ros1_bridge
