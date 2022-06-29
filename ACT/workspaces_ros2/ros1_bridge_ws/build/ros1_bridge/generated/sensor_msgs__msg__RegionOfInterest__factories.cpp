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
get_factory_sensor_msgs__msg__RegionOfInterest(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "sensor_msgs/RegionOfInterest" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/msg/RegionOfInterest")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::RegionOfInterest,
        sensor_msgs::msg::RegionOfInterest
      >
    >("sensor_msgs/RegionOfInterest", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_sensor_msgs__msg__RegionOfInterest(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  sensor_msgs::RegionOfInterest,
  sensor_msgs::msg::RegionOfInterest
>::convert_1_to_2(
  const sensor_msgs::RegionOfInterest & ros1_msg,
  sensor_msgs::msg::RegionOfInterest & ros2_msg)
{

  // convert non-array field
  // convert primitive field
  ros2_msg.x_offset = ros1_msg.x_offset;

  // convert non-array field
  // convert primitive field
  ros2_msg.y_offset = ros1_msg.y_offset;

  // convert non-array field
  // convert primitive field
  ros2_msg.height = ros1_msg.height;

  // convert non-array field
  // convert primitive field
  ros2_msg.width = ros1_msg.width;

  // convert non-array field
  // convert primitive field
  ros2_msg.do_rectify = ros1_msg.do_rectify;
}

template<>
void
Factory<
  sensor_msgs::RegionOfInterest,
  sensor_msgs::msg::RegionOfInterest
>::convert_2_to_1(
  const sensor_msgs::msg::RegionOfInterest & ros2_msg,
  sensor_msgs::RegionOfInterest & ros1_msg)
{

  // convert non-array field
  // convert primitive field
  ros1_msg.x_offset = ros2_msg.x_offset;

  // convert non-array field
  // convert primitive field
  ros1_msg.y_offset = ros2_msg.y_offset;

  // convert non-array field
  // convert primitive field
  ros1_msg.height = ros2_msg.height;

  // convert non-array field
  // convert primitive field
  ros1_msg.width = ros2_msg.width;

  // convert non-array field
  // convert primitive field
  ros1_msg.do_rectify = ros2_msg.do_rectify;
}
}  // namespace ros1_bridge
