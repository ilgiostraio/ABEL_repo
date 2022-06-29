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
get_factory_gazebo_msgs__msg__ContactState(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "gazebo_msgs/ContactState" ||
     ros1_type_name == "") &&
    ros2_type_name == "gazebo_msgs/msg/ContactState")
  {
    return std::make_shared<
      Factory<
        gazebo_msgs::ContactState,
        gazebo_msgs::msg::ContactState
      >
    >("gazebo_msgs/ContactState", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__msg__ContactState(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  gazebo_msgs::ContactState,
  gazebo_msgs::msg::ContactState
>::convert_1_to_2(
  const gazebo_msgs::ContactState & ros1_msg,
  gazebo_msgs::msg::ContactState & ros2_msg)
{

  // convert non-array field
  // convert primitive field
  ros2_msg.info = ros1_msg.info;

  // convert non-array field
  // convert primitive field
  ros2_msg.collision1_name = ros1_msg.collision1_name;

  // convert non-array field
  // convert primitive field
  ros2_msg.collision2_name = ros1_msg.collision2_name;

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.wrenches.resize(ros1_msg.wrenches.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.wrenches.cbegin();
    auto ros2_it = ros2_msg.wrenches.begin();
    for (
      ;
      ros1_it != ros1_msg.wrenches.cend() &&
      ros2_it != ros2_msg.wrenches.end();
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

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Wrench,
    geometry_msgs::msg::Wrench
  >::convert_1_to_2(
    ros1_msg.total_wrench, ros2_msg.total_wrench);

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.contact_positions.resize(ros1_msg.contact_positions.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.contact_positions.cbegin();
    auto ros2_it = ros2_msg.contact_positions.begin();
    for (
      ;
      ros1_it != ros1_msg.contact_positions.cend() &&
      ros2_it != ros2_msg.contact_positions.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        geometry_msgs::Vector3,
        geometry_msgs::msg::Vector3
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.contact_normals.resize(ros1_msg.contact_normals.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.contact_normals.cbegin();
    auto ros2_it = ros2_msg.contact_normals.begin();
    for (
      ;
      ros1_it != ros1_msg.contact_normals.cend() &&
      ros2_it != ros2_msg.contact_normals.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        geometry_msgs::Vector3,
        geometry_msgs::msg::Vector3
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.depths.resize(ros1_msg.depths.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.depths.begin(),
    ros1_msg.depths.end(),
    ros2_msg.depths.begin());
}

template<>
void
Factory<
  gazebo_msgs::ContactState,
  gazebo_msgs::msg::ContactState
>::convert_2_to_1(
  const gazebo_msgs::msg::ContactState & ros2_msg,
  gazebo_msgs::ContactState & ros1_msg)
{

  // convert non-array field
  // convert primitive field
  ros1_msg.info = ros2_msg.info;

  // convert non-array field
  // convert primitive field
  ros1_msg.collision1_name = ros2_msg.collision1_name;

  // convert non-array field
  // convert primitive field
  ros1_msg.collision2_name = ros2_msg.collision2_name;

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.wrenches.resize(ros2_msg.wrenches.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.wrenches.cbegin();
    auto ros1_it = ros1_msg.wrenches.begin();
    for (
      ;
      ros2_it != ros2_msg.wrenches.cend() &&
      ros1_it != ros1_msg.wrenches.end();
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

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::Wrench,
    geometry_msgs::msg::Wrench
  >::convert_2_to_1(
    ros2_msg.total_wrench, ros1_msg.total_wrench);

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.contact_positions.resize(ros2_msg.contact_positions.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.contact_positions.cbegin();
    auto ros1_it = ros1_msg.contact_positions.begin();
    for (
      ;
      ros2_it != ros2_msg.contact_positions.cend() &&
      ros1_it != ros1_msg.contact_positions.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        geometry_msgs::Vector3,
        geometry_msgs::msg::Vector3
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.contact_normals.resize(ros2_msg.contact_normals.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.contact_normals.cbegin();
    auto ros1_it = ros1_msg.contact_normals.begin();
    for (
      ;
      ros2_it != ros2_msg.contact_normals.cend() &&
      ros1_it != ros1_msg.contact_normals.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        geometry_msgs::Vector3,
        geometry_msgs::msg::Vector3
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.depths.resize(ros2_msg.depths.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.depths.begin(),
    ros2_msg.depths.end(),
    ros1_msg.depths.begin());
}
}  // namespace ros1_bridge
