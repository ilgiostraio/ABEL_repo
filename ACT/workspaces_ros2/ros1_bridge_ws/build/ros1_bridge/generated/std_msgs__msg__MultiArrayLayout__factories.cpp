// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "std_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_std_msgs__msg__MultiArrayLayout(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "std_msgs/MultiArrayLayout" ||
     ros1_type_name == "") &&
    ros2_type_name == "std_msgs/msg/MultiArrayLayout")
  {
    return std::make_shared<
      Factory<
        std_msgs::MultiArrayLayout,
        std_msgs::msg::MultiArrayLayout
      >
    >("std_msgs/MultiArrayLayout", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_std_msgs__msg__MultiArrayLayout(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  std_msgs::MultiArrayLayout,
  std_msgs::msg::MultiArrayLayout
>::convert_1_to_2(
  const std_msgs::MultiArrayLayout & ros1_msg,
  std_msgs::msg::MultiArrayLayout & ros2_msg)
{

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.dim.resize(ros1_msg.dim.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.dim.cbegin();
    auto ros2_it = ros2_msg.dim.begin();
    for (
      ;
      ros1_it != ros1_msg.dim.cend() &&
      ros2_it != ros2_msg.dim.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        std_msgs::MultiArrayDimension,
        std_msgs::msg::MultiArrayDimension
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }

  // convert non-array field
  // convert primitive field
  ros2_msg.data_offset = ros1_msg.data_offset;
}

template<>
void
Factory<
  std_msgs::MultiArrayLayout,
  std_msgs::msg::MultiArrayLayout
>::convert_2_to_1(
  const std_msgs::msg::MultiArrayLayout & ros2_msg,
  std_msgs::MultiArrayLayout & ros1_msg)
{

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.dim.resize(ros2_msg.dim.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.dim.cbegin();
    auto ros1_it = ros1_msg.dim.begin();
    for (
      ;
      ros2_it != ros2_msg.dim.cend() &&
      ros1_it != ros1_msg.dim.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        std_msgs::MultiArrayDimension,
        std_msgs::msg::MultiArrayDimension
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }

  // convert non-array field
  // convert primitive field
  ros1_msg.data_offset = ros2_msg.data_offset;
}
}  // namespace ros1_bridge
