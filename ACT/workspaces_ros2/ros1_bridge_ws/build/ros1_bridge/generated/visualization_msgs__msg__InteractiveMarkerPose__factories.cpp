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
get_factory_visualization_msgs__msg__InteractiveMarkerPose(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "visualization_msgs/InteractiveMarkerPose" ||
     ros1_type_name == "") &&
    ros2_type_name == "visualization_msgs/msg/InteractiveMarkerPose")
  {
    return std::make_shared<
      Factory<
        visualization_msgs::InteractiveMarkerPose,
        visualization_msgs::msg::InteractiveMarkerPose
      >
    >("visualization_msgs/InteractiveMarkerPose", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_visualization_msgs__msg__InteractiveMarkerPose(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  visualization_msgs::InteractiveMarkerPose,
  visualization_msgs::msg::InteractiveMarkerPose
>::convert_1_to_2(
  const visualization_msgs::InteractiveMarkerPose & ros1_msg,
  visualization_msgs::msg::InteractiveMarkerPose & ros2_msg)
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
}

template<>
void
Factory<
  visualization_msgs::InteractiveMarkerPose,
  visualization_msgs::msg::InteractiveMarkerPose
>::convert_2_to_1(
  const visualization_msgs::msg::InteractiveMarkerPose & ros2_msg,
  visualization_msgs::InteractiveMarkerPose & ros1_msg)
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
}
}  // namespace ros1_bridge
