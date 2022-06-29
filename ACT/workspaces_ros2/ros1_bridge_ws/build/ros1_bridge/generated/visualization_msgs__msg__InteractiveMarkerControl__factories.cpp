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
get_factory_visualization_msgs__msg__InteractiveMarkerControl(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "visualization_msgs/InteractiveMarkerControl" ||
     ros1_type_name == "") &&
    ros2_type_name == "visualization_msgs/msg/InteractiveMarkerControl")
  {
    return std::make_shared<
      Factory<
        visualization_msgs::InteractiveMarkerControl,
        visualization_msgs::msg::InteractiveMarkerControl
      >
    >("visualization_msgs/InteractiveMarkerControl", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_visualization_msgs__msg__InteractiveMarkerControl(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  visualization_msgs::InteractiveMarkerControl,
  visualization_msgs::msg::InteractiveMarkerControl
>::convert_1_to_2(
  const visualization_msgs::InteractiveMarkerControl & ros1_msg,
  visualization_msgs::msg::InteractiveMarkerControl & ros2_msg)
{

  // convert non-array field
  // convert primitive field
  ros2_msg.name = ros1_msg.name;

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Quaternion,
    geometry_msgs::msg::Quaternion
  >::convert_1_to_2(
    ros1_msg.orientation, ros2_msg.orientation);

  // convert non-array field
  // convert primitive field
  ros2_msg.orientation_mode = ros1_msg.orientation_mode;

  // convert non-array field
  // convert primitive field
  ros2_msg.interaction_mode = ros1_msg.interaction_mode;

  // convert non-array field
  // convert primitive field
  ros2_msg.always_visible = ros1_msg.always_visible;

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.markers.resize(ros1_msg.markers.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.markers.cbegin();
    auto ros2_it = ros2_msg.markers.begin();
    for (
      ;
      ros1_it != ros1_msg.markers.cend() &&
      ros2_it != ros2_msg.markers.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        visualization_msgs::Marker,
        visualization_msgs::msg::Marker
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }

  // convert non-array field
  // convert primitive field
  ros2_msg.independent_marker_orientation = ros1_msg.independent_marker_orientation;

  // convert non-array field
  // convert primitive field
  ros2_msg.description = ros1_msg.description;
}

template<>
void
Factory<
  visualization_msgs::InteractiveMarkerControl,
  visualization_msgs::msg::InteractiveMarkerControl
>::convert_2_to_1(
  const visualization_msgs::msg::InteractiveMarkerControl & ros2_msg,
  visualization_msgs::InteractiveMarkerControl & ros1_msg)
{

  // convert non-array field
  // convert primitive field
  ros1_msg.name = ros2_msg.name;

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Quaternion,
    geometry_msgs::msg::Quaternion
  >::convert_2_to_1(
    ros2_msg.orientation, ros1_msg.orientation);

  // convert non-array field
  // convert primitive field
  ros1_msg.orientation_mode = ros2_msg.orientation_mode;

  // convert non-array field
  // convert primitive field
  ros1_msg.interaction_mode = ros2_msg.interaction_mode;

  // convert non-array field
  // convert primitive field
  ros1_msg.always_visible = ros2_msg.always_visible;

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.markers.resize(ros2_msg.markers.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.markers.cbegin();
    auto ros1_it = ros1_msg.markers.begin();
    for (
      ;
      ros2_it != ros2_msg.markers.cend() &&
      ros1_it != ros1_msg.markers.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        visualization_msgs::Marker,
        visualization_msgs::msg::Marker
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }

  // convert non-array field
  // convert primitive field
  ros1_msg.independent_marker_orientation = ros2_msg.independent_marker_orientation;

  // convert non-array field
  // convert primitive field
  ros1_msg.description = ros2_msg.description;
}
}  // namespace ros1_bridge
