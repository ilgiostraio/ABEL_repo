// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "gazebo_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_gazebo_msgs__msg__LinkStates(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "gazebo_msgs/LinkStates" ||
     ros1_type_name == "") &&
    ros2_type_name == "gazebo_msgs/msg/LinkStates")
  {
    return std::make_shared<
      Factory<
        gazebo_msgs::LinkStates,
        gazebo_msgs::msg::LinkStates
      >
    >("gazebo_msgs/LinkStates", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__msg__LinkStates(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  gazebo_msgs::LinkStates,
  gazebo_msgs::msg::LinkStates
>::convert_1_to_2(
  const gazebo_msgs::LinkStates & ros1_msg,
  gazebo_msgs::msg::LinkStates & ros2_msg)
{

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.name.resize(ros1_msg.name.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.name.begin(),
    ros1_msg.name.end(),
    ros2_msg.name.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.pose.resize(ros1_msg.pose.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.pose.cbegin();
    auto ros2_it = ros2_msg.pose.begin();
    for (
      ;
      ros1_it != ros1_msg.pose.cend() &&
      ros2_it != ros2_msg.pose.end();
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

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.twist.resize(ros1_msg.twist.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.twist.cbegin();
    auto ros2_it = ros2_msg.twist.begin();
    for (
      ;
      ros1_it != ros1_msg.twist.cend() &&
      ros2_it != ros2_msg.twist.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        geometry_msgs::Twist,
        geometry_msgs::msg::Twist
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }
}

template<>
void
Factory<
  gazebo_msgs::LinkStates,
  gazebo_msgs::msg::LinkStates
>::convert_2_to_1(
  const gazebo_msgs::msg::LinkStates & ros2_msg,
  gazebo_msgs::LinkStates & ros1_msg)
{

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.name.resize(ros2_msg.name.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.name.begin(),
    ros2_msg.name.end(),
    ros1_msg.name.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.pose.resize(ros2_msg.pose.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.pose.cbegin();
    auto ros1_it = ros1_msg.pose.begin();
    for (
      ;
      ros2_it != ros2_msg.pose.cend() &&
      ros1_it != ros1_msg.pose.end();
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

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.twist.resize(ros2_msg.twist.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.twist.cbegin();
    auto ros1_it = ros1_msg.twist.begin();
    for (
      ;
      ros2_it != ros2_msg.twist.cend() &&
      ros1_it != ros1_msg.twist.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        geometry_msgs::Twist,
        geometry_msgs::msg::Twist
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }
}
}  // namespace ros1_bridge
