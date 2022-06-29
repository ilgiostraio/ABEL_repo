// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "pcl_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_pcl_msgs__msg__ModelCoefficients(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "pcl_msgs/ModelCoefficients" ||
     ros1_type_name == "") &&
    ros2_type_name == "pcl_msgs/msg/ModelCoefficients")
  {
    return std::make_shared<
      Factory<
        pcl_msgs::ModelCoefficients,
        pcl_msgs::msg::ModelCoefficients
      >
    >("pcl_msgs/ModelCoefficients", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_pcl_msgs__msg__ModelCoefficients(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  pcl_msgs::ModelCoefficients,
  pcl_msgs::msg::ModelCoefficients
>::convert_1_to_2(
  const pcl_msgs::ModelCoefficients & ros1_msg,
  pcl_msgs::msg::ModelCoefficients & ros2_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.values.resize(ros1_msg.values.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.values.begin(),
    ros1_msg.values.end(),
    ros2_msg.values.begin());
}

template<>
void
Factory<
  pcl_msgs::ModelCoefficients,
  pcl_msgs::msg::ModelCoefficients
>::convert_2_to_1(
  const pcl_msgs::msg::ModelCoefficients & ros2_msg,
  pcl_msgs::ModelCoefficients & ros1_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.values.resize(ros2_msg.values.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.values.begin(),
    ros2_msg.values.end(),
    ros1_msg.values.begin());
}
}  // namespace ros1_bridge
