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
get_factory_sensor_msgs__msg__NavSatStatus(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "sensor_msgs/NavSatStatus" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/msg/NavSatStatus")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::NavSatStatus,
        sensor_msgs::msg::NavSatStatus
      >
    >("sensor_msgs/NavSatStatus", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_sensor_msgs__msg__NavSatStatus(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  sensor_msgs::NavSatStatus,
  sensor_msgs::msg::NavSatStatus
>::convert_1_to_2(
  const sensor_msgs::NavSatStatus & ros1_msg,
  sensor_msgs::msg::NavSatStatus & ros2_msg)
{

  // convert non-array field
  // convert primitive field
  ros2_msg.status = ros1_msg.status;

  // convert non-array field
  // convert primitive field
  ros2_msg.service = ros1_msg.service;
}

template<>
void
Factory<
  sensor_msgs::NavSatStatus,
  sensor_msgs::msg::NavSatStatus
>::convert_2_to_1(
  const sensor_msgs::msg::NavSatStatus & ros2_msg,
  sensor_msgs::NavSatStatus & ros1_msg)
{

  // convert non-array field
  // convert primitive field
  ros1_msg.status = ros2_msg.status;

  // convert non-array field
  // convert primitive field
  ros1_msg.service = ros2_msg.service;
}
}  // namespace ros1_bridge
