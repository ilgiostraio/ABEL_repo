// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "moveit_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__MotionSequenceRequest(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "moveit_msgs/MotionSequenceRequest" ||
     ros1_type_name == "") &&
    ros2_type_name == "moveit_msgs/msg/MotionSequenceRequest")
  {
    return std::make_shared<
      Factory<
        moveit_msgs::MotionSequenceRequest,
        moveit_msgs::msg::MotionSequenceRequest
      >
    >("moveit_msgs/MotionSequenceRequest", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__msg__MotionSequenceRequest(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  moveit_msgs::MotionSequenceRequest,
  moveit_msgs::msg::MotionSequenceRequest
>::convert_1_to_2(
  const moveit_msgs::MotionSequenceRequest & ros1_msg,
  moveit_msgs::msg::MotionSequenceRequest & ros2_msg)
{

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.items.resize(ros1_msg.items.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.items.cbegin();
    auto ros2_it = ros2_msg.items.begin();
    for (
      ;
      ros1_it != ros1_msg.items.cend() &&
      ros2_it != ros2_msg.items.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        moveit_msgs::MotionSequenceItem,
        moveit_msgs::msg::MotionSequenceItem
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }
}

template<>
void
Factory<
  moveit_msgs::MotionSequenceRequest,
  moveit_msgs::msg::MotionSequenceRequest
>::convert_2_to_1(
  const moveit_msgs::msg::MotionSequenceRequest & ros2_msg,
  moveit_msgs::MotionSequenceRequest & ros1_msg)
{

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.items.resize(ros2_msg.items.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.items.cbegin();
    auto ros1_it = ros1_msg.items.begin();
    for (
      ;
      ros2_it != ros2_msg.items.cend() &&
      ros1_it != ros1_msg.items.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        moveit_msgs::MotionSequenceItem,
        moveit_msgs::msg::MotionSequenceItem
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }
}
}  // namespace ros1_bridge
