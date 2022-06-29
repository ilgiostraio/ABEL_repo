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
get_factory_cartographer_ros_msgs__msg__SubmapTexture(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "cartographer_ros_msgs/SubmapTexture" ||
     ros1_type_name == "") &&
    ros2_type_name == "cartographer_ros_msgs/msg/SubmapTexture")
  {
    return std::make_shared<
      Factory<
        cartographer_ros_msgs::SubmapTexture,
        cartographer_ros_msgs::msg::SubmapTexture
      >
    >("cartographer_ros_msgs/SubmapTexture", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_cartographer_ros_msgs__msg__SubmapTexture(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  cartographer_ros_msgs::SubmapTexture,
  cartographer_ros_msgs::msg::SubmapTexture
>::convert_1_to_2(
  const cartographer_ros_msgs::SubmapTexture & ros1_msg,
  cartographer_ros_msgs::msg::SubmapTexture & ros2_msg)
{

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.cells.resize(ros1_msg.cells.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.cells.begin(),
    ros1_msg.cells.end(),
    ros2_msg.cells.begin());

  // convert non-array field
  // convert primitive field
  ros2_msg.width = ros1_msg.width;

  // convert non-array field
  // convert primitive field
  ros2_msg.height = ros1_msg.height;

  // convert non-array field
  // convert primitive field
  ros2_msg.resolution = ros1_msg.resolution;

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Pose,
    geometry_msgs::msg::Pose
  >::convert_1_to_2(
    ros1_msg.slice_pose, ros2_msg.slice_pose);
}

template<>
void
Factory<
  cartographer_ros_msgs::SubmapTexture,
  cartographer_ros_msgs::msg::SubmapTexture
>::convert_2_to_1(
  const cartographer_ros_msgs::msg::SubmapTexture & ros2_msg,
  cartographer_ros_msgs::SubmapTexture & ros1_msg)
{

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.cells.resize(ros2_msg.cells.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.cells.begin(),
    ros2_msg.cells.end(),
    ros1_msg.cells.begin());

  // convert non-array field
  // convert primitive field
  ros1_msg.width = ros2_msg.width;

  // convert non-array field
  // convert primitive field
  ros1_msg.height = ros2_msg.height;

  // convert non-array field
  // convert primitive field
  ros1_msg.resolution = ros2_msg.resolution;

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Pose,
    geometry_msgs::msg::Pose
  >::convert_2_to_1(
    ros2_msg.slice_pose, ros1_msg.slice_pose);
}
}  // namespace ros1_bridge
