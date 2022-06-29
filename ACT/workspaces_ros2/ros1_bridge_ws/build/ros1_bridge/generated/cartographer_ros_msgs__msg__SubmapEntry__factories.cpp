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
get_factory_cartographer_ros_msgs__msg__SubmapEntry(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "cartographer_ros_msgs/SubmapEntry" ||
     ros1_type_name == "") &&
    ros2_type_name == "cartographer_ros_msgs/msg/SubmapEntry")
  {
    return std::make_shared<
      Factory<
        cartographer_ros_msgs::SubmapEntry,
        cartographer_ros_msgs::msg::SubmapEntry
      >
    >("cartographer_ros_msgs/SubmapEntry", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_cartographer_ros_msgs__msg__SubmapEntry(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  cartographer_ros_msgs::SubmapEntry,
  cartographer_ros_msgs::msg::SubmapEntry
>::convert_1_to_2(
  const cartographer_ros_msgs::SubmapEntry & ros1_msg,
  cartographer_ros_msgs::msg::SubmapEntry & ros2_msg)
{

  // convert non-array field
  // convert primitive field
  ros2_msg.trajectory_id = ros1_msg.trajectory_id;

  // convert non-array field
  // convert primitive field
  ros2_msg.submap_index = ros1_msg.submap_index;

  // convert non-array field
  // convert primitive field
  ros2_msg.submap_version = ros1_msg.submap_version;

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Pose,
    geometry_msgs::msg::Pose
  >::convert_1_to_2(
    ros1_msg.pose, ros2_msg.pose);
}

template<>
void
Factory<
  cartographer_ros_msgs::SubmapEntry,
  cartographer_ros_msgs::msg::SubmapEntry
>::convert_2_to_1(
  const cartographer_ros_msgs::msg::SubmapEntry & ros2_msg,
  cartographer_ros_msgs::SubmapEntry & ros1_msg)
{

  // convert non-array field
  // convert primitive field
  ros1_msg.trajectory_id = ros2_msg.trajectory_id;

  // convert non-array field
  // convert primitive field
  ros1_msg.submap_index = ros2_msg.submap_index;

  // convert non-array field
  // convert primitive field
  ros1_msg.submap_version = ros2_msg.submap_version;

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Pose,
    geometry_msgs::msg::Pose
  >::convert_2_to_1(
    ros2_msg.pose, ros1_msg.pose);
}
}  // namespace ros1_bridge
