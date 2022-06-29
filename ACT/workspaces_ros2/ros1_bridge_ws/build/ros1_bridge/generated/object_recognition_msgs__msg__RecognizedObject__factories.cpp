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
get_factory_object_recognition_msgs__msg__RecognizedObject(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "object_recognition_msgs/RecognizedObject" ||
     ros1_type_name == "") &&
    ros2_type_name == "object_recognition_msgs/msg/RecognizedObject")
  {
    return std::make_shared<
      Factory<
        object_recognition_msgs::RecognizedObject,
        object_recognition_msgs::msg::RecognizedObject
      >
    >("object_recognition_msgs/RecognizedObject", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_object_recognition_msgs__msg__RecognizedObject(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  object_recognition_msgs::RecognizedObject,
  object_recognition_msgs::msg::RecognizedObject
>::convert_1_to_2(
  const object_recognition_msgs::RecognizedObject & ros1_msg,
  object_recognition_msgs::msg::RecognizedObject & ros2_msg)
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
    object_recognition_msgs::ObjectType,
    object_recognition_msgs::msg::ObjectType
  >::convert_1_to_2(
    ros1_msg.type, ros2_msg.type);

  // convert non-array field
  // convert primitive field
  ros2_msg.confidence = ros1_msg.confidence;

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.point_clouds.resize(ros1_msg.point_clouds.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.point_clouds.cbegin();
    auto ros2_it = ros2_msg.point_clouds.begin();
    for (
      ;
      ros1_it != ros1_msg.point_clouds.cend() &&
      ros2_it != ros2_msg.point_clouds.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        sensor_msgs::PointCloud2,
        sensor_msgs::msg::PointCloud2
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }

  // convert non-array field
  // convert sub message field
  Factory<
    shape_msgs::Mesh,
    shape_msgs::msg::Mesh
  >::convert_1_to_2(
    ros1_msg.bounding_mesh, ros2_msg.bounding_mesh);

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.bounding_contours.resize(ros1_msg.bounding_contours.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.bounding_contours.cbegin();
    auto ros2_it = ros2_msg.bounding_contours.begin();
    for (
      ;
      ros1_it != ros1_msg.bounding_contours.cend() &&
      ros2_it != ros2_msg.bounding_contours.end();
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

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::PoseWithCovarianceStamped,
    geometry_msgs::msg::PoseWithCovarianceStamped
  >::convert_1_to_2(
    ros1_msg.pose, ros2_msg.pose);
}

template<>
void
Factory<
  object_recognition_msgs::RecognizedObject,
  object_recognition_msgs::msg::RecognizedObject
>::convert_2_to_1(
  const object_recognition_msgs::msg::RecognizedObject & ros2_msg,
  object_recognition_msgs::RecognizedObject & ros1_msg)
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
    object_recognition_msgs::ObjectType,
    object_recognition_msgs::msg::ObjectType
  >::convert_2_to_1(
    ros2_msg.type, ros1_msg.type);

  // convert non-array field
  // convert primitive field
  ros1_msg.confidence = ros2_msg.confidence;

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.point_clouds.resize(ros2_msg.point_clouds.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.point_clouds.cbegin();
    auto ros1_it = ros1_msg.point_clouds.begin();
    for (
      ;
      ros2_it != ros2_msg.point_clouds.cend() &&
      ros1_it != ros1_msg.point_clouds.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        sensor_msgs::PointCloud2,
        sensor_msgs::msg::PointCloud2
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }

  // convert non-array field
  // convert sub message field
  Factory<
    shape_msgs::Mesh,
    shape_msgs::msg::Mesh
  >::convert_2_to_1(
    ros2_msg.bounding_mesh, ros1_msg.bounding_mesh);

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.bounding_contours.resize(ros2_msg.bounding_contours.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.bounding_contours.cbegin();
    auto ros1_it = ros1_msg.bounding_contours.begin();
    for (
      ;
      ros2_it != ros2_msg.bounding_contours.cend() &&
      ros1_it != ros1_msg.bounding_contours.end();
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

  // convert non-array field
  // convert sub message field
  Factory<
    geometry_msgs::PoseWithCovarianceStamped,
    geometry_msgs::msg::PoseWithCovarianceStamped
  >::convert_2_to_1(
    ros2_msg.pose, ros1_msg.pose);
}
}  // namespace ros1_bridge
