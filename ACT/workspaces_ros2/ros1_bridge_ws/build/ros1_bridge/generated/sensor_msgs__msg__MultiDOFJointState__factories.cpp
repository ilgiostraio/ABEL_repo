// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "sensor_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_sensor_msgs__msg__MultiDOFJointState(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "sensor_msgs/MultiDOFJointState" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/msg/MultiDOFJointState")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::MultiDOFJointState,
        sensor_msgs::msg::MultiDOFJointState
      >
    >("sensor_msgs/MultiDOFJointState", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_sensor_msgs__msg__MultiDOFJointState(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  sensor_msgs::MultiDOFJointState,
  sensor_msgs::msg::MultiDOFJointState
>::convert_1_to_2(
  const sensor_msgs::MultiDOFJointState & ros1_msg,
  sensor_msgs::msg::MultiDOFJointState & ros2_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.joint_names.resize(ros1_msg.joint_names.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.joint_names.begin(),
    ros1_msg.joint_names.end(),
    ros2_msg.joint_names.begin());

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
        geometry_msgs::Transform,
        geometry_msgs::msg::Transform
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

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.wrench.resize(ros1_msg.wrench.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.wrench.cbegin();
    auto ros2_it = ros2_msg.wrench.begin();
    for (
      ;
      ros1_it != ros1_msg.wrench.cend() &&
      ros2_it != ros2_msg.wrench.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        geometry_msgs::Wrench,
        geometry_msgs::msg::Wrench
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }
}

template<>
void
Factory<
  sensor_msgs::MultiDOFJointState,
  sensor_msgs::msg::MultiDOFJointState
>::convert_2_to_1(
  const sensor_msgs::msg::MultiDOFJointState & ros2_msg,
  sensor_msgs::MultiDOFJointState & ros1_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.joint_names.resize(ros2_msg.joint_names.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.joint_names.begin(),
    ros2_msg.joint_names.end(),
    ros1_msg.joint_names.begin());

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
        geometry_msgs::Transform,
        geometry_msgs::msg::Transform
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

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.wrench.resize(ros2_msg.wrench.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.wrench.cbegin();
    auto ros1_it = ros1_msg.wrench.begin();
    for (
      ;
      ros2_it != ros2_msg.wrench.cend() &&
      ros1_it != ros1_msg.wrench.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        geometry_msgs::Wrench,
        geometry_msgs::msg::Wrench
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }
}
}  // namespace ros1_bridge
