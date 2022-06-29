// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "visualization_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_visualization_msgs__msg__ImageMarker(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "visualization_msgs/ImageMarker" ||
     ros1_type_name == "") &&
    ros2_type_name == "visualization_msgs/msg/ImageMarker")
  {
    return std::make_shared<
      Factory<
        visualization_msgs::ImageMarker,
        visualization_msgs::msg::ImageMarker
      >
    >("visualization_msgs/ImageMarker", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_visualization_msgs__msg__ImageMarker(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  visualization_msgs::ImageMarker,
  visualization_msgs::msg::ImageMarker
>::convert_1_to_2(
  const visualization_msgs::ImageMarker & ros1_msg,
  visualization_msgs::msg::ImageMarker & ros2_msg)
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
  ros2_msg.ns = ros1_msg.ns;

  // convert non-array field
  // convert primitive field
  ros2_msg.id = ros1_msg.id;

  // convert non-array field
  // convert primitive field
  ros2_msg.type = ros1_msg.type;

  // convert non-array field
  // convert primitive field
  ros2_msg.action = ros1_msg.action;

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Point,
    geometry_msgs::msg::Point
  >::convert_1_to_2(
    ros1_msg.position, ros2_msg.position);

  // convert non-array field
  // convert primitive field
  ros2_msg.scale = ros1_msg.scale;

  // convert non-array field
  // convert sub message field
  Factory<
    std_msgs::ColorRGBA,
    std_msgs::msg::ColorRGBA
  >::convert_1_to_2(
    ros1_msg.outline_color, ros2_msg.outline_color);

  // convert non-array field
  // convert primitive field
  ros2_msg.filled = ros1_msg.filled;

  // convert non-array field
  // convert sub message field
  Factory<
    std_msgs::ColorRGBA,
    std_msgs::msg::ColorRGBA
  >::convert_1_to_2(
    ros1_msg.fill_color, ros2_msg.fill_color);

  // convert non-array field
  // convert builtin field
  ros1_bridge::convert_1_to_2(ros1_msg.lifetime, ros2_msg.lifetime);

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.points.resize(ros1_msg.points.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.points.cbegin();
    auto ros2_it = ros2_msg.points.begin();
    for (
      ;
      ros1_it != ros1_msg.points.cend() &&
      ros2_it != ros2_msg.points.end();
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

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.outline_colors.resize(ros1_msg.outline_colors.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.outline_colors.cbegin();
    auto ros2_it = ros2_msg.outline_colors.begin();
    for (
      ;
      ros1_it != ros1_msg.outline_colors.cend() &&
      ros2_it != ros2_msg.outline_colors.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        std_msgs::ColorRGBA,
        std_msgs::msg::ColorRGBA
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }
}

template<>
void
Factory<
  visualization_msgs::ImageMarker,
  visualization_msgs::msg::ImageMarker
>::convert_2_to_1(
  const visualization_msgs::msg::ImageMarker & ros2_msg,
  visualization_msgs::ImageMarker & ros1_msg)
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
  ros1_msg.ns = ros2_msg.ns;

  // convert non-array field
  // convert primitive field
  ros1_msg.id = ros2_msg.id;

  // convert non-array field
  // convert primitive field
  ros1_msg.type = ros2_msg.type;

  // convert non-array field
  // convert primitive field
  ros1_msg.action = ros2_msg.action;

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Point,
    geometry_msgs::msg::Point
  >::convert_2_to_1(
    ros2_msg.position, ros1_msg.position);

  // convert non-array field
  // convert primitive field
  ros1_msg.scale = ros2_msg.scale;

  // convert non-array field
  // convert sub message field
  Factory<
    std_msgs::ColorRGBA,
    std_msgs::msg::ColorRGBA
  >::convert_2_to_1(
    ros2_msg.outline_color, ros1_msg.outline_color);

  // convert non-array field
  // convert primitive field
  ros1_msg.filled = ros2_msg.filled;

  // convert non-array field
  // convert sub message field
  Factory<
    std_msgs::ColorRGBA,
    std_msgs::msg::ColorRGBA
  >::convert_2_to_1(
    ros2_msg.fill_color, ros1_msg.fill_color);

  // convert non-array field
  // convert builtin field
  ros1_bridge::convert_2_to_1(ros2_msg.lifetime, ros1_msg.lifetime);

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.points.resize(ros2_msg.points.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.points.cbegin();
    auto ros1_it = ros1_msg.points.begin();
    for (
      ;
      ros2_it != ros2_msg.points.cend() &&
      ros1_it != ros1_msg.points.end();
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

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.outline_colors.resize(ros2_msg.outline_colors.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.outline_colors.cbegin();
    auto ros1_it = ros1_msg.outline_colors.begin();
    for (
      ;
      ros2_it != ros2_msg.outline_colors.cend() &&
      ros1_it != ros1_msg.outline_colors.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        std_msgs::ColorRGBA,
        std_msgs::msg::ColorRGBA
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }
}
}  // namespace ros1_bridge
