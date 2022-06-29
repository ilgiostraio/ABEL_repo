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
get_factory_moveit_msgs__msg__CollisionObject(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "moveit_msgs/CollisionObject" ||
     ros1_type_name == "") &&
    ros2_type_name == "moveit_msgs/msg/CollisionObject")
  {
    return std::make_shared<
      Factory<
        moveit_msgs::CollisionObject,
        moveit_msgs::msg::CollisionObject
      >
    >("moveit_msgs/CollisionObject", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__msg__CollisionObject(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  moveit_msgs::CollisionObject,
  moveit_msgs::msg::CollisionObject
>::convert_1_to_2(
  const moveit_msgs::CollisionObject & ros1_msg,
  moveit_msgs::msg::CollisionObject & ros2_msg)
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
  ros2_msg.id = ros1_msg.id;

  // convert non-array field
  // convert sub message field
  Factory<
    object_recognition_msgs::ObjectType,
    object_recognition_msgs::msg::ObjectType
  >::convert_1_to_2(
    ros1_msg.type, ros2_msg.type);

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

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.planes.resize(ros1_msg.planes.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.planes.cbegin();
    auto ros2_it = ros2_msg.planes.begin();
    for (
      ;
      ros1_it != ros1_msg.planes.cend() &&
      ros2_it != ros2_msg.planes.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        shape_msgs::Plane,
        shape_msgs::msg::Plane
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.plane_poses.resize(ros1_msg.plane_poses.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.plane_poses.cbegin();
    auto ros2_it = ros2_msg.plane_poses.begin();
    for (
      ;
      ros1_it != ros1_msg.plane_poses.cend() &&
      ros2_it != ros2_msg.plane_poses.end();
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
  ros2_msg.subframe_names.resize(ros1_msg.subframe_names.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.subframe_names.begin(),
    ros1_msg.subframe_names.end(),
    ros2_msg.subframe_names.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.subframe_poses.resize(ros1_msg.subframe_poses.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.subframe_poses.cbegin();
    auto ros2_it = ros2_msg.subframe_poses.begin();
    for (
      ;
      ros1_it != ros1_msg.subframe_poses.cend() &&
      ros2_it != ros2_msg.subframe_poses.end();
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

  // convert non-array field
  // convert primitive field
  ros2_msg.operation = ros1_msg.operation;
}

template<>
void
Factory<
  moveit_msgs::CollisionObject,
  moveit_msgs::msg::CollisionObject
>::convert_2_to_1(
  const moveit_msgs::msg::CollisionObject & ros2_msg,
  moveit_msgs::CollisionObject & ros1_msg)
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
  ros1_msg.id = ros2_msg.id;

  // convert non-array field
  // convert sub message field
  Factory<
    object_recognition_msgs::ObjectType,
    object_recognition_msgs::msg::ObjectType
  >::convert_2_to_1(
    ros2_msg.type, ros1_msg.type);

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

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.planes.resize(ros2_msg.planes.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.planes.cbegin();
    auto ros1_it = ros1_msg.planes.begin();
    for (
      ;
      ros2_it != ros2_msg.planes.cend() &&
      ros1_it != ros1_msg.planes.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        shape_msgs::Plane,
        shape_msgs::msg::Plane
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.plane_poses.resize(ros2_msg.plane_poses.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.plane_poses.cbegin();
    auto ros1_it = ros1_msg.plane_poses.begin();
    for (
      ;
      ros2_it != ros2_msg.plane_poses.cend() &&
      ros1_it != ros1_msg.plane_poses.end();
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
  ros1_msg.subframe_names.resize(ros2_msg.subframe_names.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.subframe_names.begin(),
    ros2_msg.subframe_names.end(),
    ros1_msg.subframe_names.begin());

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.subframe_poses.resize(ros2_msg.subframe_poses.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.subframe_poses.cbegin();
    auto ros1_it = ros1_msg.subframe_poses.begin();
    for (
      ;
      ros2_it != ros2_msg.subframe_poses.cend() &&
      ros1_it != ros1_msg.subframe_poses.end();
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

  // convert non-array field
  // convert primitive field
  ros1_msg.operation = ros2_msg.operation;
}
}  // namespace ros1_bridge
