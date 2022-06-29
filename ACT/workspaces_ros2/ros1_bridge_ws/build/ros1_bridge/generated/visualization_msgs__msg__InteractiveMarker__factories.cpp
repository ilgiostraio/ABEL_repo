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
get_factory_visualization_msgs__msg__InteractiveMarker(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "visualization_msgs/InteractiveMarker" ||
     ros1_type_name == "") &&
    ros2_type_name == "visualization_msgs/msg/InteractiveMarker")
  {
    return std::make_shared<
      Factory<
        visualization_msgs::InteractiveMarker,
        visualization_msgs::msg::InteractiveMarker
      >
    >("visualization_msgs/InteractiveMarker", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_visualization_msgs__msg__InteractiveMarker(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  visualization_msgs::InteractiveMarker,
  visualization_msgs::msg::InteractiveMarker
>::convert_1_to_2(
  const visualization_msgs::InteractiveMarker & ros1_msg,
  visualization_msgs::msg::InteractiveMarker & ros2_msg)
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

  // convert non-array field
  // convert primitive field
  ros2_msg.name = ros1_msg.name;

  // convert non-array field
  // convert primitive field
  ros2_msg.description = ros1_msg.description;

  // convert non-array field
  // convert primitive field
  ros2_msg.scale = ros1_msg.scale;

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.menu_entries.resize(ros1_msg.menu_entries.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.menu_entries.cbegin();
    auto ros2_it = ros2_msg.menu_entries.begin();
    for (
      ;
      ros1_it != ros1_msg.menu_entries.cend() &&
      ros2_it != ros2_msg.menu_entries.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        visualization_msgs::MenuEntry,
        visualization_msgs::msg::MenuEntry
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.controls.resize(ros1_msg.controls.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.controls.cbegin();
    auto ros2_it = ros2_msg.controls.begin();
    for (
      ;
      ros1_it != ros1_msg.controls.cend() &&
      ros2_it != ros2_msg.controls.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        visualization_msgs::InteractiveMarkerControl,
        visualization_msgs::msg::InteractiveMarkerControl
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }
}

template<>
void
Factory<
  visualization_msgs::InteractiveMarker,
  visualization_msgs::msg::InteractiveMarker
>::convert_2_to_1(
  const visualization_msgs::msg::InteractiveMarker & ros2_msg,
  visualization_msgs::InteractiveMarker & ros1_msg)
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

  // convert non-array field
  // convert primitive field
  ros1_msg.name = ros2_msg.name;

  // convert non-array field
  // convert primitive field
  ros1_msg.description = ros2_msg.description;

  // convert non-array field
  // convert primitive field
  ros1_msg.scale = ros2_msg.scale;

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.menu_entries.resize(ros2_msg.menu_entries.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.menu_entries.cbegin();
    auto ros1_it = ros1_msg.menu_entries.begin();
    for (
      ;
      ros2_it != ros2_msg.menu_entries.cend() &&
      ros1_it != ros1_msg.menu_entries.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        visualization_msgs::MenuEntry,
        visualization_msgs::msg::MenuEntry
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.controls.resize(ros2_msg.controls.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.controls.cbegin();
    auto ros1_it = ros1_msg.controls.begin();
    for (
      ;
      ros2_it != ros2_msg.controls.cend() &&
      ros1_it != ros1_msg.controls.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        visualization_msgs::InteractiveMarkerControl,
        visualization_msgs::msg::InteractiveMarkerControl
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }
}
}  // namespace ros1_bridge
