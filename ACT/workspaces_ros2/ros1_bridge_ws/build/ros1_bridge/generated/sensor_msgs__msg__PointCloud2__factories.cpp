// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "sensor_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_sensor_msgs__msg__PointCloud2(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "sensor_msgs/PointCloud2" ||
     ros1_type_name == "") &&
    ros2_type_name == "sensor_msgs/msg/PointCloud2")
  {
    return std::make_shared<
      Factory<
        sensor_msgs::PointCloud2,
        sensor_msgs::msg::PointCloud2
      >
    >("sensor_msgs/PointCloud2", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_sensor_msgs__msg__PointCloud2(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  sensor_msgs::PointCloud2,
  sensor_msgs::msg::PointCloud2
>::convert_1_to_2(
  const sensor_msgs::PointCloud2 & ros1_msg,
  sensor_msgs::msg::PointCloud2 & ros2_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);

  // convert non-array field
  // convert primitive field
  ros2_msg.height = ros1_msg.height;

  // convert non-array field
  // convert primitive field
  ros2_msg.width = ros1_msg.width;

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.fields.resize(ros1_msg.fields.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.fields.cbegin();
    auto ros2_it = ros2_msg.fields.begin();
    for (
      ;
      ros1_it != ros1_msg.fields.cend() &&
      ros2_it != ros2_msg.fields.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        sensor_msgs::PointField,
        sensor_msgs::msg::PointField
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }

  // convert non-array field
  // convert primitive field
  ros2_msg.is_bigendian = ros1_msg.is_bigendian;

  // convert non-array field
  // convert primitive field
  ros2_msg.point_step = ros1_msg.point_step;

  // convert non-array field
  // convert primitive field
  ros2_msg.row_step = ros1_msg.row_step;

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.data.resize(ros1_msg.data.size());
  // convert primitive array elements
  std::copy(
    ros1_msg.data.begin(),
    ros1_msg.data.end(),
    ros2_msg.data.begin());

  // convert non-array field
  // convert primitive field
  ros2_msg.is_dense = ros1_msg.is_dense;
}

template<>
void
Factory<
  sensor_msgs::PointCloud2,
  sensor_msgs::msg::PointCloud2
>::convert_2_to_1(
  const sensor_msgs::msg::PointCloud2 & ros2_msg,
  sensor_msgs::PointCloud2 & ros1_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);

  // convert non-array field
  // convert primitive field
  ros1_msg.height = ros2_msg.height;

  // convert non-array field
  // convert primitive field
  ros1_msg.width = ros2_msg.width;

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.fields.resize(ros2_msg.fields.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.fields.cbegin();
    auto ros1_it = ros1_msg.fields.begin();
    for (
      ;
      ros2_it != ros2_msg.fields.cend() &&
      ros1_it != ros1_msg.fields.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        sensor_msgs::PointField,
        sensor_msgs::msg::PointField
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }

  // convert non-array field
  // convert primitive field
  ros1_msg.is_bigendian = ros2_msg.is_bigendian;

  // convert non-array field
  // convert primitive field
  ros1_msg.point_step = ros2_msg.point_step;

  // convert non-array field
  // convert primitive field
  ros1_msg.row_step = ros2_msg.row_step;

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.data.resize(ros2_msg.data.size());
  // convert primitive array elements
  std::copy(
    ros2_msg.data.begin(),
    ros2_msg.data.end(),
    ros1_msg.data.begin());

  // convert non-array field
  // convert primitive field
  ros1_msg.is_dense = ros2_msg.is_dense;
}
}  // namespace ros1_bridge
