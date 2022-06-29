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
get_factory_sensor_msgs__msg__PointField(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "sensor_msgs/PointField" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/msg/PointField")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::PointField,
        sensor_msgs::msg::PointField
      >
    >("sensor_msgs/PointField", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_sensor_msgs__msg__PointField(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  sensor_msgs::PointField,
  sensor_msgs::msg::PointField
>::convert_1_to_2(
  const sensor_msgs::PointField & ros1_msg,
  sensor_msgs::msg::PointField & ros2_msg)
{

  // convert non-array field
  // convert primitive field
  ros2_msg.name = ros1_msg.name;

  // convert non-array field
  // convert primitive field
  ros2_msg.offset = ros1_msg.offset;

  // convert non-array field
  // convert primitive field
  ros2_msg.datatype = ros1_msg.datatype;

  // convert non-array field
  // convert primitive field
  ros2_msg.count = ros1_msg.count;
}

template<>
void
Factory<
  sensor_msgs::PointField,
  sensor_msgs::msg::PointField
>::convert_2_to_1(
  const sensor_msgs::msg::PointField & ros2_msg,
  sensor_msgs::PointField & ros1_msg)
{

  // convert non-array field
  // convert primitive field
  ros1_msg.name = ros2_msg.name;

  // convert non-array field
  // convert primitive field
  ros1_msg.offset = ros2_msg.offset;

  // convert non-array field
  // convert primitive field
  ros1_msg.datatype = ros2_msg.datatype;

  // convert non-array field
  // convert primitive field
  ros1_msg.count = ros2_msg.count;
}
}  // namespace ros1_bridge
