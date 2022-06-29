// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "tf2_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_tf2_msgs__msg__TFMessage(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "tf2_msgs/TFMessage" ||
     ros1_type_name == "") &&
    ros2_type_name == "tf2_msgs/msg/TFMessage")
  {
    return std::make_shared<
      Factory<
        tf2_msgs::TFMessage,
        tf2_msgs::msg::TFMessage
      >
    >("tf2_msgs/TFMessage", ros2_type_name);
  }
  if (
    (ros1_type_name == "tf/tfMessage" ||
     ros1_type_name == "") &&
    ros2_type_name == "tf2_msgs/msg/TFMessage")
  {
    return std::make_shared<
      Factory<
        tf::tfMessage,
        tf2_msgs::msg::TFMessage
      >
    >("tf/tfMessage", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_tf2_msgs__msg__TFMessage(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  tf2_msgs::TFMessage,
  tf2_msgs::msg::TFMessage
>::convert_1_to_2(
  const tf2_msgs::TFMessage & ros1_msg,
  tf2_msgs::msg::TFMessage & ros2_msg)
{

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.transforms.resize(ros1_msg.transforms.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.transforms.cbegin();
    auto ros2_it = ros2_msg.transforms.begin();
    for (
      ;
      ros1_it != ros1_msg.transforms.cend() &&
      ros2_it != ros2_msg.transforms.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        geometry_msgs::TransformStamped,
        geometry_msgs::msg::TransformStamped
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }
}

template<>
void
Factory<
  tf2_msgs::TFMessage,
  tf2_msgs::msg::TFMessage
>::convert_2_to_1(
  const tf2_msgs::msg::TFMessage & ros2_msg,
  tf2_msgs::TFMessage & ros1_msg)
{

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.transforms.resize(ros2_msg.transforms.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.transforms.cbegin();
    auto ros1_it = ros1_msg.transforms.begin();
    for (
      ;
      ros2_it != ros2_msg.transforms.cend() &&
      ros1_it != ros1_msg.transforms.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        geometry_msgs::TransformStamped,
        geometry_msgs::msg::TransformStamped
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }
}

template<>
void
Factory<
  tf::tfMessage,
  tf2_msgs::msg::TFMessage
>::convert_1_to_2(
  const tf::tfMessage & ros1_msg,
  tf2_msgs::msg::TFMessage & ros2_msg)
{

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.transforms.resize(ros1_msg.transforms.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.transforms.cbegin();
    auto ros2_it = ros2_msg.transforms.begin();
    for (
      ;
      ros1_it != ros1_msg.transforms.cend() &&
      ros2_it != ros2_msg.transforms.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        geometry_msgs::TransformStamped,
        geometry_msgs::msg::TransformStamped
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }
}

template<>
void
Factory<
  tf::tfMessage,
  tf2_msgs::msg::TFMessage
>::convert_2_to_1(
  const tf2_msgs::msg::TFMessage & ros2_msg,
  tf::tfMessage & ros1_msg)
{

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.transforms.resize(ros2_msg.transforms.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.transforms.cbegin();
    auto ros1_it = ros1_msg.transforms.begin();
    for (
      ;
      ros2_it != ros2_msg.transforms.cend() &&
      ros1_it != ros1_msg.transforms.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        geometry_msgs::TransformStamped,
        geometry_msgs::msg::TransformStamped
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }
}
}  // namespace ros1_bridge
