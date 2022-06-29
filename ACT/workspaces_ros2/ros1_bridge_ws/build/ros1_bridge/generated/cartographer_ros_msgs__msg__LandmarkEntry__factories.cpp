// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "cartographer_ros_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_cartographer_ros_msgs__msg__LandmarkEntry(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "cartographer_ros_msgs/LandmarkEntry" ||
     ros1_type_name == "") &&
    ros2_type_name == "cartographer_ros_msgs/msg/LandmarkEntry")
  {
    return std::make_shared<
      Factory<
        cartographer_ros_msgs::LandmarkEntry,
        cartographer_ros_msgs::msg::LandmarkEntry
      >
    >("cartographer_ros_msgs/LandmarkEntry", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_cartographer_ros_msgs__msg__LandmarkEntry(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  cartographer_ros_msgs::LandmarkEntry,
  cartographer_ros_msgs::msg::LandmarkEntry
>::convert_1_to_2(
  const cartographer_ros_msgs::LandmarkEntry & ros1_msg,
  cartographer_ros_msgs::msg::LandmarkEntry & ros2_msg)
{

  // convert non-array field
  // convert primitive field
  ros2_msg.id = ros1_msg.id;

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Pose,
    geometry_msgs::msg::Pose
  >::convert_1_to_2(
    ros1_msg.tracking_from_landmark_transform, ros2_msg.tracking_from_landmark_transform);

  // convert non-array field
  // convert primitive field
  ros2_msg.translation_weight = ros1_msg.translation_weight;

  // convert non-array field
  // convert primitive field
  ros2_msg.rotation_weight = ros1_msg.rotation_weight;
}

template<>
void
Factory<
  cartographer_ros_msgs::LandmarkEntry,
  cartographer_ros_msgs::msg::LandmarkEntry
>::convert_2_to_1(
  const cartographer_ros_msgs::msg::LandmarkEntry & ros2_msg,
  cartographer_ros_msgs::LandmarkEntry & ros1_msg)
{

  // convert non-array field
  // convert primitive field
  ros1_msg.id = ros2_msg.id;

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Pose,
    geometry_msgs::msg::Pose
  >::convert_2_to_1(
    ros2_msg.tracking_from_landmark_transform, ros1_msg.tracking_from_landmark_transform);

  // convert non-array field
  // convert primitive field
  ros1_msg.translation_weight = ros2_msg.translation_weight;

  // convert non-array field
  // convert primitive field
  ros1_msg.rotation_weight = ros2_msg.rotation_weight;
}
}  // namespace ros1_bridge
