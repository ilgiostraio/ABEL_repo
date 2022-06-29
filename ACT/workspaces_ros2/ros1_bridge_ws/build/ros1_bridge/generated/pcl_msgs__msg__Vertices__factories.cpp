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
get_factory_pcl_msgs__msg__Vertices(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "pcl_msgs/Vertices" ||
     ros1_type_name == "") &&
    ros2_type_name == "pcl_msgs/msg/Vertices")
  {
    return std::make_shared<
      Factory<
        pcl_msgs::Vertices,
        pcl_msgs::msg::Vertices
      >
    >("pcl_msgs/Vertices", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_pcl_msgs__msg__Vertices(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  pcl_msgs::Vertices,
  pcl_msgs::msg::Vertices
>::convert_1_to_2(
  const pcl_msgs::Vertices & ros1_msg,
  pcl_msgs::msg::Vertices & ros2_msg)
{

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.vertices.resize(ros1_msg.vertices.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.vertices.begin(),
    ros1_msg.vertices.end(),
    ros2_msg.vertices.begin());
}

template<>
void
Factory<
  pcl_msgs::Vertices,
  pcl_msgs::msg::Vertices
>::convert_2_to_1(
  const pcl_msgs::msg::Vertices & ros2_msg,
  pcl_msgs::Vertices & ros1_msg)
{

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.vertices.resize(ros2_msg.vertices.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.vertices.begin(),
    ros2_msg.vertices.end(),
    ros1_msg.vertices.begin());
}
}  // namespace ros1_bridge
