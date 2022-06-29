// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "nav_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_nav_msgs__msg__Odometry(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "nav_msgs/Odometry" ||
     ros1_type_name == "") &&
    ros2_type_name == "nav_msgs/msg/Odometry")
  {
    return std::make_shared<
      Factory<
        nav_msgs::Odometry,
        nav_msgs::msg::Odometry
      >
    >("nav_msgs/Odometry", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_nav_msgs__msg__Odometry(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  nav_msgs::Odometry,
  nav_msgs::msg::Odometry
>::convert_1_to_2(
  const nav_msgs::Odometry & ros1_msg,
  nav_msgs::msg::Odometry & ros2_msg)
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
  ros2_msg.child_frame_id = ros1_msg.child_frame_id;

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::PoseWithCovariance,
    geometry_msgs::msg::PoseWithCovariance
  >::convert_1_to_2(
    ros1_msg.pose, ros2_msg.pose);

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::TwistWithCovariance,
    geometry_msgs::msg::TwistWithCovariance
  >::convert_1_to_2(
    ros1_msg.twist, ros2_msg.twist);
}

template<>
void
Factory<
  nav_msgs::Odometry,
  nav_msgs::msg::Odometry
>::convert_2_to_1(
  const nav_msgs::msg::Odometry & ros2_msg,
  nav_msgs::Odometry & ros1_msg)
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
  ros1_msg.child_frame_id = ros2_msg.child_frame_id;

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::PoseWithCovariance,
    geometry_msgs::msg::PoseWithCovariance
  >::convert_2_to_1(
    ros2_msg.pose, ros1_msg.pose);

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::TwistWithCovariance,
    geometry_msgs::msg::TwistWithCovariance
  >::convert_2_to_1(
    ros2_msg.twist, ros1_msg.twist);
}
}  // namespace ros1_bridge
