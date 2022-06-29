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
get_factory_visualization_msgs__msg__InteractiveMarkerFeedback(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "visualization_msgs/InteractiveMarkerFeedback" ||
     ros1_type_name == "") &&
    ros2_type_name == "visualization_msgs/msg/InteractiveMarkerFeedback")
  {
    return std::make_shared<
      Factory<
        visualization_msgs::InteractiveMarkerFeedback,
        visualization_msgs::msg::InteractiveMarkerFeedback
      >
    >("visualization_msgs/InteractiveMarkerFeedback", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_visualization_msgs__msg__InteractiveMarkerFeedback(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  visualization_msgs::InteractiveMarkerFeedback,
  visualization_msgs::msg::InteractiveMarkerFeedback
>::convert_1_to_2(
  const visualization_msgs::InteractiveMarkerFeedback & ros1_msg,
  visualization_msgs::msg::InteractiveMarkerFeedback & ros2_msg)
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
  ros2_msg.client_id = ros1_msg.client_id;

  // convert non-array field
  // convert primitive field
  ros2_msg.marker_name = ros1_msg.marker_name;

  // convert non-array field
  // convert primitive field
  ros2_msg.control_name = ros1_msg.control_name;

  // convert non-array field
  // convert primitive field
  ros2_msg.event_type = ros1_msg.event_type;

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Pose,
    geometry_msgs::msg::Pose
  >::convert_1_to_2(
    ros1_msg.pose, ros2_msg.pose);

  // convert non-array field
  // convert primitive field
  ros2_msg.menu_entry_id = ros1_msg.menu_entry_id;

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Point,
    geometry_msgs::msg::Point
  >::convert_1_to_2(
    ros1_msg.mouse_point, ros2_msg.mouse_point);

  // convert non-array field
  // convert primitive field
  ros2_msg.mouse_point_valid = ros1_msg.mouse_point_valid;
}

template<>
void
Factory<
  visualization_msgs::InteractiveMarkerFeedback,
  visualization_msgs::msg::InteractiveMarkerFeedback
>::convert_2_to_1(
  const visualization_msgs::msg::InteractiveMarkerFeedback & ros2_msg,
  visualization_msgs::InteractiveMarkerFeedback & ros1_msg)
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
  ros1_msg.client_id = ros2_msg.client_id;

  // convert non-array field
  // convert primitive field
  ros1_msg.marker_name = ros2_msg.marker_name;

  // convert non-array field
  // convert primitive field
  ros1_msg.control_name = ros2_msg.control_name;

  // convert non-array field
  // convert primitive field
  ros1_msg.event_type = ros2_msg.event_type;

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Pose,
    geometry_msgs::msg::Pose
  >::convert_2_to_1(
    ros2_msg.pose, ros1_msg.pose);

  // convert non-array field
  // convert primitive field
  ros1_msg.menu_entry_id = ros2_msg.menu_entry_id;

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Point,
    geometry_msgs::msg::Point
  >::convert_2_to_1(
    ros2_msg.mouse_point, ros1_msg.mouse_point);

  // convert non-array field
  // convert primitive field
  ros1_msg.mouse_point_valid = ros2_msg.mouse_point_valid;
}
}  // namespace ros1_bridge
