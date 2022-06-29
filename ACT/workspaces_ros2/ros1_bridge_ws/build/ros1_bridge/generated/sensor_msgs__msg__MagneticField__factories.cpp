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
get_factory_sensor_msgs__msg__MagneticField(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "sensor_msgs/MagneticField" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/msg/MagneticField")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::MagneticField,
        sensor_msgs::msg::MagneticField
      >
    >("sensor_msgs/MagneticField", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_sensor_msgs__msg__MagneticField(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  sensor_msgs::MagneticField,
  sensor_msgs::msg::MagneticField
>::convert_1_to_2(
  const sensor_msgs::MagneticField & ros1_msg,
  sensor_msgs::msg::MagneticField & ros2_msg)
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
    geometry_msgs::Vector3,
    geometry_msgs::msg::Vector3
  >::convert_1_to_2(
    ros1_msg.magnetic_field, ros2_msg.magnetic_field);

  // convert array or sequence field
  // statically sized array
  static_assert(
    (ros2_msg.magnetic_field_covariance.size()) >= (ros1_msg.magnetic_field_covariance.size()),
    "destination array not large enough for source array"
  );
  // convert primitive array elements
  std::copy(
    ros1_msg.magnetic_field_covariance.begin(),
    ros1_msg.magnetic_field_covariance.end(),
    ros2_msg.magnetic_field_covariance.begin());
}

template<>
void
Factory<
  sensor_msgs::MagneticField,
  sensor_msgs::msg::MagneticField
>::convert_2_to_1(
  const sensor_msgs::msg::MagneticField & ros2_msg,
  sensor_msgs::MagneticField & ros1_msg)
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
    geometry_msgs::Vector3,
    geometry_msgs::msg::Vector3
  >::convert_2_to_1(
    ros2_msg.magnetic_field, ros1_msg.magnetic_field);

  // convert array or sequence field
  // statically sized array
  static_assert(
    (ros1_msg.magnetic_field_covariance.size()) >= (ros2_msg.magnetic_field_covariance.size()),
    "destination array not large enough for source array"
  );
  // convert primitive array elements
  std::copy(
    ros2_msg.magnetic_field_covariance.begin(),
    ros2_msg.magnetic_field_covariance.end(),
    ros1_msg.magnetic_field_covariance.begin());
}
}  // namespace ros1_bridge
