// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "shape_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_shape_msgs__msg__Mesh(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "shape_msgs/Mesh" ||
     ros1_type_name == "") &&
    ros2_type_name == "shape_msgs/msg/Mesh")
  {
    return std::make_shared<
      Factory<
        shape_msgs::Mesh,
        shape_msgs::msg::Mesh
      >
    >("shape_msgs/Mesh", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_shape_msgs__msg__Mesh(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  shape_msgs::Mesh,
  shape_msgs::msg::Mesh
>::convert_1_to_2(
  const shape_msgs::Mesh & ros1_msg,
  shape_msgs::msg::Mesh & ros2_msg)
{

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.triangles.resize(ros1_msg.triangles.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.triangles.cbegin();
    auto ros2_it = ros2_msg.triangles.begin();
    for (
      ;
      ros1_it != ros1_msg.triangles.cend() &&
      ros2_it != ros2_msg.triangles.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        shape_msgs::MeshTriangle,
        shape_msgs::msg::MeshTriangle
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.vertices.resize(ros1_msg.vertices.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.vertices.cbegin();
    auto ros2_it = ros2_msg.vertices.begin();
    for (
      ;
      ros1_it != ros1_msg.vertices.cend() &&
      ros2_it != ros2_msg.vertices.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        geometry_msgs::Point,
        geometry_msgs::msg::Point
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }
}

template<>
void
Factory<
  shape_msgs::Mesh,
  shape_msgs::msg::Mesh
>::convert_2_to_1(
  const shape_msgs::msg::Mesh & ros2_msg,
  shape_msgs::Mesh & ros1_msg)
{

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.triangles.resize(ros2_msg.triangles.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.triangles.cbegin();
    auto ros1_it = ros1_msg.triangles.begin();
    for (
      ;
      ros2_it != ros2_msg.triangles.cend() &&
      ros1_it != ros1_msg.triangles.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        shape_msgs::MeshTriangle,
        shape_msgs::msg::MeshTriangle
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.vertices.resize(ros2_msg.vertices.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.vertices.cbegin();
    auto ros1_it = ros1_msg.vertices.begin();
    for (
      ;
      ros2_it != ros2_msg.vertices.cend() &&
      ros1_it != ros1_msg.vertices.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        geometry_msgs::Point,
        geometry_msgs::msg::Point
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }
}
}  // namespace ros1_bridge
