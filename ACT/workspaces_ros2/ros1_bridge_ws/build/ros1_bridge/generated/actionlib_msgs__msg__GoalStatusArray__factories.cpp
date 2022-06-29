// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "actionlib_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_actionlib_msgs__msg__GoalStatusArray(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "actionlib_msgs/GoalStatusArray" ||
     ros1_type_name == "") &&
    ros2_type_name == "actionlib_msgs/msg/GoalStatusArray")
  {
    return std::make_shared<
      Factory<
        actionlib_msgs::GoalStatusArray,
        actionlib_msgs::msg::GoalStatusArray
      >
    >("actionlib_msgs/GoalStatusArray", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_actionlib_msgs__msg__GoalStatusArray(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  actionlib_msgs::GoalStatusArray,
  actionlib_msgs::msg::GoalStatusArray
>::convert_1_to_2(
  const actionlib_msgs::GoalStatusArray & ros1_msg,
  actionlib_msgs::msg::GoalStatusArray & ros2_msg)
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
  ros2_msg.status_list.resize(ros1_msg.status_list.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.status_list.cbegin();
    auto ros2_it = ros2_msg.status_list.begin();
    for (
      ;
      ros1_it != ros1_msg.status_list.cend() &&
      ros2_it != ros2_msg.status_list.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        actionlib_msgs::GoalStatus,
        actionlib_msgs::msg::GoalStatus
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }
}

template<>
void
Factory<
  actionlib_msgs::GoalStatusArray,
  actionlib_msgs::msg::GoalStatusArray
>::convert_2_to_1(
  const actionlib_msgs::msg::GoalStatusArray & ros2_msg,
  actionlib_msgs::GoalStatusArray & ros1_msg)
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
  ros1_msg.status_list.resize(ros2_msg.status_list.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.status_list.cbegin();
    auto ros1_it = ros1_msg.status_list.begin();
    for (
      ;
      ros2_it != ros2_msg.status_list.cend() &&
      ros1_it != ros1_msg.status_list.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        actionlib_msgs::GoalStatus,
        actionlib_msgs::msg::GoalStatus
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }
}
}  // namespace ros1_bridge
