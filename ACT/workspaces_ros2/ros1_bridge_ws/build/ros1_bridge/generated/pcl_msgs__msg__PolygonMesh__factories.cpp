// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "pcl_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_pcl_msgs__msg__PolygonMesh(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "pcl_msgs/PolygonMesh" ||
     ros1_type_name == "") &&
    ros2_type_name == "pcl_msgs/msg/PolygonMesh")
  {
    return std::make_shared<
      Factory<
        pcl_msgs::PolygonMesh,
        pcl_msgs::msg::PolygonMesh
      >
    >("pcl_msgs/PolygonMesh", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_pcl_msgs__msg__PolygonMesh(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  pcl_msgs::PolygonMesh,
  pcl_msgs::msg::PolygonMesh
>::convert_1_to_2(
  const pcl_msgs::PolygonMesh & ros1_msg,
  pcl_msgs::msg::PolygonMesh & ros2_msg)
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
    sensor_msgs::PointCloud2,
    sensor_msgs::msg::PointCloud2
  >::convert_1_to_2(
    ros1_msg.cloud, ros2_msg.cloud);

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.polygons.resize(ros1_msg.polygons.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.polygons.cbegin();
    auto ros2_it = ros2_msg.polygons.begin();
    for (
      ;
      ros1_it != ros1_msg.polygons.cend() &&
      ros2_it != ros2_msg.polygons.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        pcl_msgs::Vertices,
        pcl_msgs::msg::Vertices
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }
}

template<>
void
Factory<
  pcl_msgs::PolygonMesh,
  pcl_msgs::msg::PolygonMesh
>::convert_2_to_1(
  const pcl_msgs::msg::PolygonMesh & ros2_msg,
  pcl_msgs::PolygonMesh & ros1_msg)
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
    sensor_msgs::PointCloud2,
    sensor_msgs::msg::PointCloud2
  >::convert_2_to_1(
    ros2_msg.cloud, ros1_msg.cloud);

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.polygons.resize(ros2_msg.polygons.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.polygons.cbegin();
    auto ros1_it = ros1_msg.polygons.begin();
    for (
      ;
      ros2_it != ros2_msg.polygons.cend() &&
      ros1_it != ros1_msg.polygons.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        pcl_msgs::Vertices,
        pcl_msgs::msg::Vertices
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }
}
}  // namespace ros1_bridge
