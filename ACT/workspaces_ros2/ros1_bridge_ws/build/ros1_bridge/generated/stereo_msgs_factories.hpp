// generated from ros1_bridge/resource/pkg_factories.hpp.em

#include <memory>
#include <string>

#include <ros1_bridge/factory.hpp>

// include ROS 1 messages
#include <stereo_msgs/DisparityImage.h>

// include ROS 2 messages
#include <stereo_msgs/msg/disparity_image.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_stereo_msgs(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_stereo_msgs__msg__DisparityImage(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_stereo_msgs(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

// conversion functions for available interfaces

template<>
void
Factory<
  stereo_msgs::DisparityImage,
  stereo_msgs::msg::DisparityImage
>::convert_1_to_2(
  const stereo_msgs::DisparityImage & ros1_msg,
  stereo_msgs::msg::DisparityImage & ros2_msg);

template<>
void
Factory<
  stereo_msgs::DisparityImage,
  stereo_msgs::msg::DisparityImage
>::convert_2_to_1(
  const stereo_msgs::msg::DisparityImage & ros2_msg,
  stereo_msgs::DisparityImage & ros1_msg);

}  // namespace ros1_bridge
