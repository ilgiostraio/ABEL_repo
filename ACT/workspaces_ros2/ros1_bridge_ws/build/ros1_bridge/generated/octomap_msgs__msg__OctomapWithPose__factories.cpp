// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "octomap_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_octomap_msgs__msg__OctomapWithPose(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "octomap_msgs/OctomapWithPose" ||
     ros1_type_name == "") &&
    ros2_type_name == "octomap_msgs/msg/OctomapWithPose")
  {
    return std::make_shared<
      Factory<
        octomap_msgs::OctomapWithPose,
        octomap_msgs::msg::OctomapWithPose
      >
    >("octomap_msgs/OctomapWithPose", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_octomap_msgs__msg__OctomapWithPose(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  octomap_msgs::OctomapWithPose,
  octomap_msgs::msg::OctomapWithPose
>::convert_1_to_2(
  const octomap_msgs::OctomapWithPose & ros1_msg,
  octomap_msgs::msg::OctomapWithPose & ros2_msg)
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
    geometry_msgs::Pose,
    geometry_msgs::msg::Pose
  >::convert_1_to_2(
    ros1_msg.origin, ros2_msg.origin);

  // convert non-array field
  // convert sub message field
  Factory<
    octomap_msgs::Octomap,
    octomap_msgs::msg::Octomap
  >::convert_1_to_2(
    ros1_msg.octomap, ros2_msg.octomap);
}

template<>
void
Factory<
  octomap_msgs::OctomapWithPose,
  octomap_msgs::msg::OctomapWithPose
>::convert_2_to_1(
  const octomap_msgs::msg::OctomapWithPose & ros2_msg,
  octomap_msgs::OctomapWithPose & ros1_msg)
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
    geometry_msgs::Pose,
    geometry_msgs::msg::Pose
  >::convert_2_to_1(
    ros2_msg.origin, ros1_msg.origin);

  // convert non-array field
  // convert sub message field
  Factory<
    octomap_msgs::Octomap,
    octomap_msgs::msg::Octomap
  >::convert_2_to_1(
    ros2_msg.octomap, ros1_msg.octomap);
}
}  // namespace ros1_bridge
