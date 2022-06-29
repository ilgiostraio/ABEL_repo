// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "object_recognition_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_object_recognition_msgs__msg__ObjectInformation(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "object_recognition_msgs/ObjectInformation" ||
     ros1_type_name == "") &&
    ros2_type_name == "object_recognition_msgs/msg/ObjectInformation")
  {
    return std::make_shared<
      Factory<
        object_recognition_msgs::ObjectInformation,
        object_recognition_msgs::msg::ObjectInformation
      >
    >("object_recognition_msgs/ObjectInformation", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_object_recognition_msgs__msg__ObjectInformation(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  object_recognition_msgs::ObjectInformation,
  object_recognition_msgs::msg::ObjectInformation
>::convert_1_to_2(
  const object_recognition_msgs::ObjectInformation & ros1_msg,
  object_recognition_msgs::msg::ObjectInformation & ros2_msg)
{

  // convert non-array field
  // convert primitive field
  ros2_msg.name = ros1_msg.name;

  // convert non-array field
  // convert sub message field
  Factory<
    shape_msgs::Mesh,
    shape_msgs::msg::Mesh
  >::convert_1_to_2(
    ros1_msg.ground_truth_mesh, ros2_msg.ground_truth_mesh);

  // convert non-array field
  // convert sub message field
  Factory<
    sensor_msgs::PointCloud2,
    sensor_msgs::msg::PointCloud2
  >::convert_1_to_2(
    ros1_msg.ground_truth_point_cloud, ros2_msg.ground_truth_point_cloud);
}

template<>
void
Factory<
  object_recognition_msgs::ObjectInformation,
  object_recognition_msgs::msg::ObjectInformation
>::convert_2_to_1(
  const object_recognition_msgs::msg::ObjectInformation & ros2_msg,
  object_recognition_msgs::ObjectInformation & ros1_msg)
{

  // convert non-array field
  // convert primitive field
  ros1_msg.name = ros2_msg.name;

  // convert non-array field
  // convert sub message field
  Factory<
    shape_msgs::Mesh,
    shape_msgs::msg::Mesh
  >::convert_2_to_1(
    ros2_msg.ground_truth_mesh, ros1_msg.ground_truth_mesh);

  // convert non-array field
  // convert sub message field
  Factory<
    sensor_msgs::PointCloud2,
    sensor_msgs::msg::PointCloud2
  >::convert_2_to_1(
    ros2_msg.ground_truth_point_cloud, ros1_msg.ground_truth_point_cloud);
}
}  // namespace ros1_bridge
