// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "object_recognition_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_object_recognition_msgs__msg__Table(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "object_recognition_msgs/Table" ||
     ros1_type_name == "") &&
    ros2_type_name == "object_recognition_msgs/msg/Table")
  {
    return std::make_shared<
      Factory<
        object_recognition_msgs::Table,
        object_recognition_msgs::msg::Table
      >
    >("object_recognition_msgs/Table", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_object_recognition_msgs__msg__Table(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  object_recognition_msgs::Table,
  object_recognition_msgs::msg::Table
>::convert_1_to_2(
  const object_recognition_msgs::Table & ros1_msg,
  object_recognition_msgs::msg::Table & ros2_msg)
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
    ros1_msg.pose, ros2_msg.pose);

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.convex_hull.resize(ros1_msg.convex_hull.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.convex_hull.cbegin();
    auto ros2_it = ros2_msg.convex_hull.begin();
    for (
      ;
      ros1_it != ros1_msg.convex_hull.cend() &&
      ros2_it != ros2_msg.convex_hull.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        geometry_msgs::Point,
        geometry_msgs::msg::Point
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }
}

template<>
void
Factory<
  object_recognition_msgs::Table,
  object_recognition_msgs::msg::Table
>::convert_2_to_1(
  const object_recognition_msgs::msg::Table & ros2_msg,
  object_recognition_msgs::Table & ros1_msg)
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
    ros2_msg.pose, ros1_msg.pose);

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.convex_hull.resize(ros2_msg.convex_hull.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.convex_hull.cbegin();
    auto ros1_it = ros1_msg.convex_hull.begin();
    for (
      ;
      ros2_it != ros2_msg.convex_hull.cend() &&
      ros1_it != ros1_msg.convex_hull.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        geometry_msgs::Point,
        geometry_msgs::msg::Point
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }
}
}  // namespace ros1_bridge
