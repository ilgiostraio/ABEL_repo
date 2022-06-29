// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "cartographer_ros_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_cartographer_ros_msgs__msg__SubmapList(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "cartographer_ros_msgs/SubmapList" ||
     ros1_type_name == "") &&
    ros2_type_name == "cartographer_ros_msgs/msg/SubmapList")
  {
    return std::make_shared<
      Factory<
        cartographer_ros_msgs::SubmapList,
        cartographer_ros_msgs::msg::SubmapList
      >
    >("cartographer_ros_msgs/SubmapList", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_cartographer_ros_msgs__msg__SubmapList(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  cartographer_ros_msgs::SubmapList,
  cartographer_ros_msgs::msg::SubmapList
>::convert_1_to_2(
  const cartographer_ros_msgs::SubmapList & ros1_msg,
  cartographer_ros_msgs::msg::SubmapList & ros2_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_1_to_2(
    ros1_msg.header, ros2_msg.header);

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.submap.resize(ros1_msg.submap.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.submap.cbegin();
    auto ros2_it = ros2_msg.submap.begin();
    for (
      ;
      ros1_it != ros1_msg.submap.cend() &&
      ros2_it != ros2_msg.submap.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        cartographer_ros_msgs::SubmapEntry,
        cartographer_ros_msgs::msg::SubmapEntry
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }
}

template<>
void
Factory<
  cartographer_ros_msgs::SubmapList,
  cartographer_ros_msgs::msg::SubmapList
>::convert_2_to_1(
  const cartographer_ros_msgs::msg::SubmapList & ros2_msg,
  cartographer_ros_msgs::SubmapList & ros1_msg)
{

  // convert non-array field
  // convert sub message field
  Factory<
    std_msgs::Header,
    std_msgs::msg::Header
  >::convert_2_to_1(
    ros2_msg.header, ros1_msg.header);

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.submap.resize(ros2_msg.submap.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.submap.cbegin();
    auto ros1_it = ros1_msg.submap.begin();
    for (
      ;
      ros2_it != ros2_msg.submap.cend() &&
      ros1_it != ros1_msg.submap.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        cartographer_ros_msgs::SubmapEntry,
        cartographer_ros_msgs::msg::SubmapEntry
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }
}
}  // namespace ros1_bridge
