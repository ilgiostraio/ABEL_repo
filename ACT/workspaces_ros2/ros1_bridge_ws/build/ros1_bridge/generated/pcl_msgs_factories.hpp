// generated from ros1_bridge/resource/pkg_factories.hpp.em

#include <memory>
#include <string>

#include <ros1_bridge/factory.hpp>

// include ROS 1 messages
#include <pcl_msgs/Vertices.h>
#include <pcl_msgs/ModelCoefficients.h>
#include <pcl_msgs/PointIndices.h>
#include <pcl_msgs/PolygonMesh.h>

// include ROS 2 messages
#include <pcl_msgs/msg/vertices.hpp>
#include <pcl_msgs/msg/model_coefficients.hpp>
#include <pcl_msgs/msg/point_indices.hpp>
#include <pcl_msgs/msg/polygon_mesh.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_pcl_msgs(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_pcl_msgs__msg__ModelCoefficients(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_pcl_msgs__msg__PointIndices(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_pcl_msgs__msg__PolygonMesh(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_pcl_msgs__msg__Vertices(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_pcl_msgs(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_pcl_msgs__srv__UpdateFilename(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

// conversion functions for available interfaces

template<>
void
Factory<
  pcl_msgs::Vertices,
  pcl_msgs::msg::Vertices
>::convert_1_to_2(
  const pcl_msgs::Vertices & ros1_msg,
  pcl_msgs::msg::Vertices & ros2_msg);

template<>
void
Factory<
  pcl_msgs::Vertices,
  pcl_msgs::msg::Vertices
>::convert_2_to_1(
  const pcl_msgs::msg::Vertices & ros2_msg,
  pcl_msgs::Vertices & ros1_msg);


template<>
void
Factory<
  pcl_msgs::ModelCoefficients,
  pcl_msgs::msg::ModelCoefficients
>::convert_1_to_2(
  const pcl_msgs::ModelCoefficients & ros1_msg,
  pcl_msgs::msg::ModelCoefficients & ros2_msg);

template<>
void
Factory<
  pcl_msgs::ModelCoefficients,
  pcl_msgs::msg::ModelCoefficients
>::convert_2_to_1(
  const pcl_msgs::msg::ModelCoefficients & ros2_msg,
  pcl_msgs::ModelCoefficients & ros1_msg);


template<>
void
Factory<
  pcl_msgs::PointIndices,
  pcl_msgs::msg::PointIndices
>::convert_1_to_2(
  const pcl_msgs::PointIndices & ros1_msg,
  pcl_msgs::msg::PointIndices & ros2_msg);

template<>
void
Factory<
  pcl_msgs::PointIndices,
  pcl_msgs::msg::PointIndices
>::convert_2_to_1(
  const pcl_msgs::msg::PointIndices & ros2_msg,
  pcl_msgs::PointIndices & ros1_msg);


template<>
void
Factory<
  pcl_msgs::PolygonMesh,
  pcl_msgs::msg::PolygonMesh
>::convert_1_to_2(
  const pcl_msgs::PolygonMesh & ros1_msg,
  pcl_msgs::msg::PolygonMesh & ros2_msg);

template<>
void
Factory<
  pcl_msgs::PolygonMesh,
  pcl_msgs::msg::PolygonMesh
>::convert_2_to_1(
  const pcl_msgs::msg::PolygonMesh & ros2_msg,
  pcl_msgs::PolygonMesh & ros1_msg);

}  // namespace ros1_bridge
