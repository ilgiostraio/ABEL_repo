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
get_factory_geometry_msgs__msg__PoseWithCovarianceStamped(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "geometry_msgs/PoseWithCovarianceStamped" ||
     ros1_type_name == "") &&
    ros2_type_name == "geometry_msgs/msg/PoseWithCovarianceStamped")
  {
    return std::make_shared<
      Factory<
        geometry_msgs::PoseWithCovarianceStamped,
        geometry_msgs::msg::PoseWithCovarianceStamped
      >
    >("geometry_msgs/PoseWithCovarianceStamped", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_geometry_msgs__msg__PoseWithCovarianceStamped(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  geometry_msgs::PoseWithCovarianceStamped,
  geometry_msgs::msg::PoseWithCovarianceStamped
>::convert_1_to_2(
  const geometry_msgs::PoseWithCovarianceStamped & ros1_msg,
  geometry_msgs::msg::PoseWithCovarianceStamped & ros2_msg)
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
    geometry_msgs::PoseWithCovariance,
    geometry_msgs::msg::PoseWithCovariance
  >::convert_1_to_2(
    ros1_msg.pose, ros2_msg.pose);
}

template<>
void
Factory<
  geometry_msgs::PoseWithCovarianceStamped,
  geometry_msgs::msg::PoseWithCovarianceStamped
>::convert_2_to_1(
  const geometry_msgs::msg::PoseWithCovarianceStamped & ros2_msg,
  geometry_msgs::PoseWithCovarianceStamped & ros1_msg)
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
    geometry_msgs::PoseWithCovariance,
    geometry_msgs::msg::PoseWithCovariance
  >::convert_2_to_1(
    ros2_msg.pose, ros1_msg.pose);
}
}  // namespace ros1_bridge
