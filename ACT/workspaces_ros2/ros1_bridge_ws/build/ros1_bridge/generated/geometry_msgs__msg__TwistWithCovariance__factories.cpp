// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "geometry_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_geometry_msgs__msg__TwistWithCovariance(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "geometry_msgs/TwistWithCovariance" ||
     ros1_type_name == "") &&
    ros2_type_name == "geometry_msgs/msg/TwistWithCovariance")
  {
    return std::make_shared<
      Factory<
        geometry_msgs::TwistWithCovariance,
        geometry_msgs::msg::TwistWithCovariance
      >
    >("geometry_msgs/TwistWithCovariance", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_geometry_msgs__msg__TwistWithCovariance(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  geometry_msgs::TwistWithCovariance,
  geometry_msgs::msg::TwistWithCovariance
>::convert_1_to_2(
  const geometry_msgs::TwistWithCovariance & ros1_msg,
  geometry_msgs::msg::TwistWithCovariance & ros2_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Twist,
    geometry_msgs::msg::Twist
  >::convert_1_to_2(
    ros1_msg.twist, ros2_msg.twist);

  // convert array or sequence field
  // statically sized array
  static_assert(
    (ros2_msg.covariance.size()) >= (ros1_msg.covariance.size()),
    "destination array not large enough for source array"
  );
  // convert primitive array elements
  std::copy(
    ros1_msg.covariance.begin(),
    ros1_msg.covariance.end(),
    ros2_msg.covariance.begin());
}

template<>
void
Factory<
  geometry_msgs::TwistWithCovariance,
  geometry_msgs::msg::TwistWithCovariance
>::convert_2_to_1(
  const geometry_msgs::msg::TwistWithCovariance & ros2_msg,
  geometry_msgs::TwistWithCovariance & ros1_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Twist,
    geometry_msgs::msg::Twist
  >::convert_2_to_1(
    ros2_msg.twist, ros1_msg.twist);

  // convert array or sequence field
  // statically sized array
  static_assert(
    (ros1_msg.covariance.size()) >= (ros2_msg.covariance.size()),
    "destination array not large enough for source array"
  );
  // convert primitive array elements
  std::copy(
    ros2_msg.covariance.begin(),
    ros2_msg.covariance.end(),
    ros1_msg.covariance.begin());
}
}  // namespace ros1_bridge
