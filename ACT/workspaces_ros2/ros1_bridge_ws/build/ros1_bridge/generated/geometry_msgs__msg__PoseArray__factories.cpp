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
get_factory_geometry_msgs__msg__PoseArray(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "geometry_msgs/PoseArray" ||
     ros1_type_name == "") &&
    ros2_type_name == "geometry_msgs/msg/PoseArray")
  {
    return std::make_shared<
      Factory<
        geometry_msgs::PoseArray,
        geometry_msgs::msg::PoseArray
      >
    >("geometry_msgs/PoseArray", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_geometry_msgs__msg__PoseArray(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  geometry_msgs::PoseArray,
  geometry_msgs::msg::PoseArray
>::convert_1_to_2(
  const geometry_msgs::PoseArray & ros1_msg,
  geometry_msgs::msg::PoseArray & ros2_msg)
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
  ros2_msg.poses.resize(ros1_msg.poses.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.poses.cbegin();
    auto ros2_it = ros2_msg.poses.begin();
    for (
      ;
      ros1_it != ros1_msg.poses.cend() &&
      ros2_it != ros2_msg.poses.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        geometry_msgs::Pose,
        geometry_msgs::msg::Pose
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }
}

template<>
void
Factory<
  geometry_msgs::PoseArray,
  geometry_msgs::msg::PoseArray
>::convert_2_to_1(
  const geometry_msgs::msg::PoseArray & ros2_msg,
  geometry_msgs::PoseArray & ros1_msg)
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
  ros1_msg.poses.resize(ros2_msg.poses.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.poses.cbegin();
    auto ros1_it = ros1_msg.poses.begin();
    for (
      ;
      ros2_it != ros2_msg.poses.cend() &&
      ros1_it != ros1_msg.poses.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        geometry_msgs::Pose,
        geometry_msgs::msg::Pose
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }
}
}  // namespace ros1_bridge
