// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "stereo_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_stereo_msgs__msg__DisparityImage(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "stereo_msgs/DisparityImage" ||
     ros1_type_name == "") &&
    ros2_type_name == "stereo_msgs/msg/DisparityImage")
  {
    return std::make_shared<
      Factory<
        stereo_msgs::DisparityImage,
        stereo_msgs::msg::DisparityImage
      >
    >("stereo_msgs/DisparityImage", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_stereo_msgs__msg__DisparityImage(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  stereo_msgs::DisparityImage,
  stereo_msgs::msg::DisparityImage
>::convert_1_to_2(
  const stereo_msgs::DisparityImage & ros1_msg,
  stereo_msgs::msg::DisparityImage & ros2_msg)
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
    sensor_msgs::Image,
    sensor_msgs::msg::Image
  >::convert_1_to_2(
    ros1_msg.image, ros2_msg.image);

  // convert non-array field
  // convert primitive field
  ros2_msg.f = ros1_msg.f;

  // convert non-array field
  // convert primitive field
  ros2_msg.t = ros1_msg.T;

  // convert non-array field
  // convert sub message field
  Factory<
    sensor_msgs::RegionOfInterest,
    sensor_msgs::msg::RegionOfInterest
  >::convert_1_to_2(
    ros1_msg.valid_window, ros2_msg.valid_window);

  // convert non-array field
  // convert primitive field
  ros2_msg.min_disparity = ros1_msg.min_disparity;

  // convert non-array field
  // convert primitive field
  ros2_msg.max_disparity = ros1_msg.max_disparity;

  // convert non-array field
  // convert primitive field
  ros2_msg.delta_d = ros1_msg.delta_d;
}

template<>
void
Factory<
  stereo_msgs::DisparityImage,
  stereo_msgs::msg::DisparityImage
>::convert_2_to_1(
  const stereo_msgs::msg::DisparityImage & ros2_msg,
  stereo_msgs::DisparityImage & ros1_msg)
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
    sensor_msgs::Image,
    sensor_msgs::msg::Image
  >::convert_2_to_1(
    ros2_msg.image, ros1_msg.image);

  // convert non-array field
  // convert primitive field
  ros1_msg.f = ros2_msg.f;

  // convert non-array field
  // convert primitive field
  ros1_msg.T = ros2_msg.t;

  // convert non-array field
  // convert sub message field
  Factory<
    sensor_msgs::RegionOfInterest,
    sensor_msgs::msg::RegionOfInterest
  >::convert_2_to_1(
    ros2_msg.valid_window, ros1_msg.valid_window);

  // convert non-array field
  // convert primitive field
  ros1_msg.min_disparity = ros2_msg.min_disparity;

  // convert non-array field
  // convert primitive field
  ros1_msg.max_disparity = ros2_msg.max_disparity;

  // convert non-array field
  // convert primitive field
  ros1_msg.delta_d = ros2_msg.delta_d;
}
}  // namespace ros1_bridge
