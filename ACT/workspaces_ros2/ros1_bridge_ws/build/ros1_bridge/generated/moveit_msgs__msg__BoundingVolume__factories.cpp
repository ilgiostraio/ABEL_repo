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
get_factory_moveit_msgs__msg__BoundingVolume(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "moveit_msgs/BoundingVolume" ||
     ros1_type_name == "") &&
    ros2_type_name == "moveit_msgs/msg/BoundingVolume")
  {
    return std::make_shared<
      Factory<
        moveit_msgs::BoundingVolume,
        moveit_msgs::msg::BoundingVolume
      >
    >("moveit_msgs/BoundingVolume", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__msg__BoundingVolume(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  moveit_msgs::BoundingVolume,
  moveit_msgs::msg::BoundingVolume
>::convert_1_to_2(
  const moveit_msgs::BoundingVolume & ros1_msg,
  moveit_msgs::msg::BoundingVolume & ros2_msg)
{

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.primitives.resize(ros1_msg.primitives.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.primitives.cbegin();
    auto ros2_it = ros2_msg.primitives.begin();
    for (
      ;
      ros1_it != ros1_msg.primitives.cend() &&
      ros2_it != ros2_msg.primitives.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        shape_msgs::SolidPrimitive,
        shape_msgs::msg::SolidPrimitive
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.primitive_poses.resize(ros1_msg.primitive_poses.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.primitive_poses.cbegin();
    auto ros2_it = ros2_msg.primitive_poses.begin();
    for (
      ;
      ros1_it != ros1_msg.primitive_poses.cend() &&
      ros2_it != ros2_msg.primitive_poses.end();
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
  ros2_msg.meshes.resize(ros1_msg.meshes.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.meshes.cbegin();
    auto ros2_it = ros2_msg.meshes.begin();
    for (
      ;
      ros1_it != ros1_msg.meshes.cend() &&
      ros2_it != ros2_msg.meshes.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        shape_msgs::Mesh,
        shape_msgs::msg::Mesh
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.mesh_poses.resize(ros1_msg.mesh_poses.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.mesh_poses.cbegin();
    auto ros2_it = ros2_msg.mesh_poses.begin();
    for (
      ;
      ros1_it != ros1_msg.mesh_poses.cend() &&
      ros2_it != ros2_msg.mesh_poses.end();
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
}

template<>
void
Factory<
  moveit_msgs::BoundingVolume,
  moveit_msgs::msg::BoundingVolume
>::convert_2_to_1(
  const moveit_msgs::msg::BoundingVolume & ros2_msg,
  moveit_msgs::BoundingVolume & ros1_msg)
{

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.primitives.resize(ros2_msg.primitives.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.primitives.cbegin();
    auto ros1_it = ros1_msg.primitives.begin();
    for (
      ;
      ros2_it != ros2_msg.primitives.cend() &&
      ros1_it != ros1_msg.primitives.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        shape_msgs::SolidPrimitive,
        shape_msgs::msg::SolidPrimitive
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.primitive_poses.resize(ros2_msg.primitive_poses.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.primitive_poses.cbegin();
    auto ros1_it = ros1_msg.primitive_poses.begin();
    for (
      ;
      ros2_it != ros2_msg.primitive_poses.cend() &&
      ros1_it != ros1_msg.primitive_poses.end();
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
  ros1_msg.meshes.resize(ros2_msg.meshes.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.meshes.cbegin();
    auto ros1_it = ros1_msg.meshes.begin();
    for (
      ;
      ros2_it != ros2_msg.meshes.cend() &&
      ros1_it != ros1_msg.meshes.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        shape_msgs::Mesh,
        shape_msgs::msg::Mesh
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.mesh_poses.resize(ros2_msg.mesh_poses.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.mesh_poses.cbegin();
    auto ros1_it = ros1_msg.mesh_poses.begin();
    for (
      ;
      ros2_it != ros2_msg.mesh_poses.cend() &&
      ros1_it != ros1_msg.mesh_poses.end();
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
}
}  // namespace ros1_bridge
