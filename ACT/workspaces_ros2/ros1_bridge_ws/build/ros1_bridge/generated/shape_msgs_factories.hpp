// generated from ros1_bridge/resource/pkg_factories.hpp.em

#include <memory>
#include <string>

#include <ros1_bridge/factory.hpp>

// include ROS 1 messages
#include <shape_msgs/Mesh.h>
#include <shape_msgs/MeshTriangle.h>
#include <shape_msgs/Plane.h>
#include <shape_msgs/SolidPrimitive.h>

// include ROS 2 messages
#include <shape_msgs/msg/mesh.hpp>
#include <shape_msgs/msg/mesh_triangle.hpp>
#include <shape_msgs/msg/plane.hpp>
#include <shape_msgs/msg/solid_primitive.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_shape_msgs(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_shape_msgs__msg__Mesh(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_shape_msgs__msg__MeshTriangle(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_shape_msgs__msg__Plane(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_shape_msgs__msg__SolidPrimitive(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_shape_msgs(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

// conversion functions for available interfaces

template<>
void
Factory<
  shape_msgs::Mesh,
  shape_msgs::msg::Mesh
>::convert_1_to_2(
  const shape_msgs::Mesh & ros1_msg,
  shape_msgs::msg::Mesh & ros2_msg);

template<>
void
Factory<
  shape_msgs::Mesh,
  shape_msgs::msg::Mesh
>::convert_2_to_1(
  const shape_msgs::msg::Mesh & ros2_msg,
  shape_msgs::Mesh & ros1_msg);


template<>
void
Factory<
  shape_msgs::MeshTriangle,
  shape_msgs::msg::MeshTriangle
>::convert_1_to_2(
  const shape_msgs::MeshTriangle & ros1_msg,
  shape_msgs::msg::MeshTriangle & ros2_msg);

template<>
void
Factory<
  shape_msgs::MeshTriangle,
  shape_msgs::msg::MeshTriangle
>::convert_2_to_1(
  const shape_msgs::msg::MeshTriangle & ros2_msg,
  shape_msgs::MeshTriangle & ros1_msg);


template<>
void
Factory<
  shape_msgs::Plane,
  shape_msgs::msg::Plane
>::convert_1_to_2(
  const shape_msgs::Plane & ros1_msg,
  shape_msgs::msg::Plane & ros2_msg);

template<>
void
Factory<
  shape_msgs::Plane,
  shape_msgs::msg::Plane
>::convert_2_to_1(
  const shape_msgs::msg::Plane & ros2_msg,
  shape_msgs::Plane & ros1_msg);


template<>
void
Factory<
  shape_msgs::SolidPrimitive,
  shape_msgs::msg::SolidPrimitive
>::convert_1_to_2(
  const shape_msgs::SolidPrimitive & ros1_msg,
  shape_msgs::msg::SolidPrimitive & ros2_msg);

template<>
void
Factory<
  shape_msgs::SolidPrimitive,
  shape_msgs::msg::SolidPrimitive
>::convert_2_to_1(
  const shape_msgs::msg::SolidPrimitive & ros2_msg,
  shape_msgs::SolidPrimitive & ros1_msg);

}  // namespace ros1_bridge
