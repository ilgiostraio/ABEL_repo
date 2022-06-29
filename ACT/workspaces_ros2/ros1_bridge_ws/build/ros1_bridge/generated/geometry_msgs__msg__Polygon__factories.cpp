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
get_factory_geometry_msgs__msg__Polygon(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "geometry_msgs/Polygon" ||
     ros1_type_name == "") &&
    ros2_type_name == "geometry_msgs/msg/Polygon")
  {
    return std::make_shared<
      Factory<
        geometry_msgs::Polygon,
        geometry_msgs::msg::Polygon
      >
    >("geometry_msgs/Polygon", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_geometry_msgs__msg__Polygon(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  geometry_msgs::Polygon,
  geometry_msgs::msg::Polygon
>::convert_1_to_2(
  const geometry_msgs::Polygon & ros1_msg,
  geometry_msgs::msg::Polygon & ros2_msg)
{

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
        geometry_msgs::Point32,
        geometry_msgs::msg::Point32
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }
}

template<>
void
Factory<
  geometry_msgs::Polygon,
  geometry_msgs::msg::Polygon
>::convert_2_to_1(
  const geometry_msgs::msg::Polygon & ros2_msg,
  geometry_msgs::Polygon & ros1_msg)
{

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
        geometry_msgs::Point32,
        geometry_msgs::msg::Point32
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }
}
}  // namespace ros1_bridge
