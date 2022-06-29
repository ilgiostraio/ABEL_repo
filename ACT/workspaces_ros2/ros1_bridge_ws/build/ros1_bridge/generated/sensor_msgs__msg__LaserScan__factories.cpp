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
get_factory_sensor_msgs__msg__LaserScan(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "sensor_msgs/LaserScan" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/msg/LaserScan")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::LaserScan,
        sensor_msgs::msg::LaserScan
      >
    >("sensor_msgs/LaserScan", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_sensor_msgs__msg__LaserScan(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  sensor_msgs::LaserScan,
  sensor_msgs::msg::LaserScan
>::convert_1_to_2(
  const sensor_msgs::LaserScan & ros1_msg,
  sensor_msgs::msg::LaserScan & ros2_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);

  // convert non-array field
  // convert primitive field
  ros2_msg.angle_min = ros1_msg.angle_min;

  // convert non-array field
  // convert primitive field
  ros2_msg.angle_max = ros1_msg.angle_max;

  // convert non-array field
  // convert primitive field
  ros2_msg.angle_increment = ros1_msg.angle_increment;

  // convert non-array field
  // convert primitive field
  ros2_msg.time_increment = ros1_msg.time_increment;

  // convert non-array field
  // convert primitive field
  ros2_msg.scan_time = ros1_msg.scan_time;

  // convert non-array field
  // convert primitive field
  ros2_msg.range_min = ros1_msg.range_min;

  // convert non-array field
  // convert primitive field
  ros2_msg.range_max = ros1_msg.range_max;

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.ranges.resize(ros1_msg.ranges.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.ranges.begin(),
    ros1_msg.ranges.end(),
    ros2_msg.ranges.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.intensities.resize(ros1_msg.intensities.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.intensities.begin(),
    ros1_msg.intensities.end(),
    ros2_msg.intensities.begin());
}

template<>
void
Factory<
  sensor_msgs::LaserScan,
  sensor_msgs::msg::LaserScan
>::convert_2_to_1(
  const sensor_msgs::msg::LaserScan & ros2_msg,
  sensor_msgs::LaserScan & ros1_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);

  // convert non-array field
  // convert primitive field
  ros1_msg.angle_min = ros2_msg.angle_min;

  // convert non-array field
  // convert primitive field
  ros1_msg.angle_max = ros2_msg.angle_max;

  // convert non-array field
  // convert primitive field
  ros1_msg.angle_increment = ros2_msg.angle_increment;

  // convert non-array field
  // convert primitive field
  ros1_msg.time_increment = ros2_msg.time_increment;

  // convert non-array field
  // convert primitive field
  ros1_msg.scan_time = ros2_msg.scan_time;

  // convert non-array field
  // convert primitive field
  ros1_msg.range_min = ros2_msg.range_min;

  // convert non-array field
  // convert primitive field
  ros1_msg.range_max = ros2_msg.range_max;

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.ranges.resize(ros2_msg.ranges.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.ranges.begin(),
    ros2_msg.ranges.end(),
    ros1_msg.ranges.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.intensities.resize(ros2_msg.intensities.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.intensities.begin(),
    ros2_msg.intensities.end(),
    ros1_msg.intensities.begin());
}
}  // namespace ros1_bridge
