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
get_factory_sensor_msgs__msg__MultiEchoLaserScan(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "sensor_msgs/MultiEchoLaserScan" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/msg/MultiEchoLaserScan")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::MultiEchoLaserScan,
        sensor_msgs::msg::MultiEchoLaserScan
      >
    >("sensor_msgs/MultiEchoLaserScan", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_sensor_msgs__msg__MultiEchoLaserScan(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  sensor_msgs::MultiEchoLaserScan,
  sensor_msgs::msg::MultiEchoLaserScan
>::convert_1_to_2(
  const sensor_msgs::MultiEchoLaserScan & ros1_msg,
  sensor_msgs::msg::MultiEchoLaserScan & ros2_msg)
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
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.ranges.cbegin();
    auto ros2_it = ros2_msg.ranges.begin();
    for (
      ;
      ros1_it != ros1_msg.ranges.cend() &&
      ros2_it != ros2_msg.ranges.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        sensor_msgs::LaserEcho,
        sensor_msgs::msg::LaserEcho
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.intensities.resize(ros1_msg.intensities.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.intensities.cbegin();
    auto ros2_it = ros2_msg.intensities.begin();
    for (
      ;
      ros1_it != ros1_msg.intensities.cend() &&
      ros2_it != ros2_msg.intensities.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        sensor_msgs::LaserEcho,
        sensor_msgs::msg::LaserEcho
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }
}

template<>
void
Factory<
  sensor_msgs::MultiEchoLaserScan,
  sensor_msgs::msg::MultiEchoLaserScan
>::convert_2_to_1(
  const sensor_msgs::msg::MultiEchoLaserScan & ros2_msg,
  sensor_msgs::MultiEchoLaserScan & ros1_msg)
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
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.ranges.cbegin();
    auto ros1_it = ros1_msg.ranges.begin();
    for (
      ;
      ros2_it != ros2_msg.ranges.cend() &&
      ros1_it != ros1_msg.ranges.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        sensor_msgs::LaserEcho,
        sensor_msgs::msg::LaserEcho
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.intensities.resize(ros2_msg.intensities.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.intensities.cbegin();
    auto ros1_it = ros1_msg.intensities.begin();
    for (
      ;
      ros2_it != ros2_msg.intensities.cend() &&
      ros1_it != ros1_msg.intensities.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        sensor_msgs::LaserEcho,
        sensor_msgs::msg::LaserEcho
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }
}
}  // namespace ros1_bridge
