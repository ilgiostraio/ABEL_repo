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
get_factory_sensor_msgs__msg__NavSatFix(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "sensor_msgs/NavSatFix" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/msg/NavSatFix")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::NavSatFix,
        sensor_msgs::msg::NavSatFix
      >
    >("sensor_msgs/NavSatFix", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_sensor_msgs__msg__NavSatFix(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  sensor_msgs::NavSatFix,
  sensor_msgs::msg::NavSatFix
>::convert_1_to_2(
  const sensor_msgs::NavSatFix & ros1_msg,
  sensor_msgs::msg::NavSatFix & ros2_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);

  // convert non-array field
  // convert sub message field
  Factory<
    sensor_msgs::NavSatStatus,
    sensor_msgs::msg::NavSatStatus
  >::convert_1_to_2(
    ros1_msg.status, ros2_msg.status);

  // convert non-array field
  // convert primitive field
  ros2_msg.latitude = ros1_msg.latitude;

  // convert non-array field
  // convert primitive field
  ros2_msg.longitude = ros1_msg.longitude;

  // convert non-array field
  // convert primitive field
  ros2_msg.altitude = ros1_msg.altitude;

  // convert array or sequence field
  // statically sized array
  static_assert(
    (ros2_msg.position_covariance.size()) >= (ros1_msg.position_covariance.size()),
    "destination array not large enough for source array"
  );
  // convert primitive array elements
  std::copy(
    ros1_msg.position_covariance.begin(),
    ros1_msg.position_covariance.end(),
    ros2_msg.position_covariance.begin());

  // convert non-array field
  // convert primitive field
  ros2_msg.position_covariance_type = ros1_msg.position_covariance_type;
}

template<>
void
Factory<
  sensor_msgs::NavSatFix,
  sensor_msgs::msg::NavSatFix
>::convert_2_to_1(
  const sensor_msgs::msg::NavSatFix & ros2_msg,
  sensor_msgs::NavSatFix & ros1_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);

  // convert non-array field
  // convert sub message field
  Factory<
    sensor_msgs::NavSatStatus,
    sensor_msgs::msg::NavSatStatus
  >::convert_2_to_1(
    ros2_msg.status, ros1_msg.status);

  // convert non-array field
  // convert primitive field
  ros1_msg.latitude = ros2_msg.latitude;

  // convert non-array field
  // convert primitive field
  ros1_msg.longitude = ros2_msg.longitude;

  // convert non-array field
  // convert primitive field
  ros1_msg.altitude = ros2_msg.altitude;

  // convert array or sequence field
  // statically sized array
  static_assert(
    (ros1_msg.position_covariance.size()) >= (ros2_msg.position_covariance.size()),
    "destination array not large enough for source array"
  );
  // convert primitive array elements
  std::copy(
    ros2_msg.position_covariance.begin(),
    ros2_msg.position_covariance.end(),
    ros1_msg.position_covariance.begin());

  // convert non-array field
  // convert primitive field
  ros1_msg.position_covariance_type = ros2_msg.position_covariance_type;
}
}  // namespace ros1_bridge
