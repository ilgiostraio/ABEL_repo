// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "map_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_map_msgs__msg__PointCloud2Update(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "map_msgs/PointCloud2Update" ||
     ros1_type_name == "") &&
    ros2_type_name == "map_msgs/msg/PointCloud2Update")
  {
    return std::make_shared<
      Factory<
        map_msgs::PointCloud2Update,
        map_msgs::msg::PointCloud2Update
      >
    >("map_msgs/PointCloud2Update", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_map_msgs__msg__PointCloud2Update(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  map_msgs::PointCloud2Update,
  map_msgs::msg::PointCloud2Update
>::convert_1_to_2(
  const map_msgs::PointCloud2Update & ros1_msg,
  map_msgs::msg::PointCloud2Update & ros2_msg)
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
  ros2_msg.type = ros1_msg.type;

  // convert non-array field
  // convert sub message field
  Factory<
    sensor_msgs::PointCloud2,
    sensor_msgs::msg::PointCloud2
  >::convert_1_to_2(
    ros1_msg.points, ros2_msg.points);
}

template<>
void
Factory<
  map_msgs::PointCloud2Update,
  map_msgs::msg::PointCloud2Update
>::convert_2_to_1(
  const map_msgs::msg::PointCloud2Update & ros2_msg,
  map_msgs::PointCloud2Update & ros1_msg)
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
  ros1_msg.type = ros2_msg.type;

  // convert non-array field
  // convert sub message field
  Factory<
    sensor_msgs::PointCloud2,
    sensor_msgs::msg::PointCloud2
  >::convert_2_to_1(
    ros2_msg.points, ros1_msg.points);
}
}  // namespace ros1_bridge
