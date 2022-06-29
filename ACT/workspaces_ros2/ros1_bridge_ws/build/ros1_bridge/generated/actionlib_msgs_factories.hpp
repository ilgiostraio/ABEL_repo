// generated from ros1_bridge/resource/pkg_factories.hpp.em

#include <memory>
#include <string>

#include <ros1_bridge/factory.hpp>

// include ROS 1 messages
#include <actionlib_msgs/GoalID.h>
#include <actionlib_msgs/GoalStatus.h>
#include <actionlib_msgs/GoalStatusArray.h>

// include ROS 2 messages
#include <actionlib_msgs/msg/goal_id.hpp>
#include <actionlib_msgs/msg/goal_status.hpp>
#include <actionlib_msgs/msg/goal_status_array.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_actionlib_msgs(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_actionlib_msgs__msg__GoalID(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_actionlib_msgs__msg__GoalStatus(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_actionlib_msgs__msg__GoalStatusArray(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_actionlib_msgs(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

// conversion functions for available interfaces

template<>
void
Factory<
  actionlib_msgs::GoalID,
  actionlib_msgs::msg::GoalID
>::convert_1_to_2(
  const actionlib_msgs::GoalID & ros1_msg,
  actionlib_msgs::msg::GoalID & ros2_msg);

template<>
void
Factory<
  actionlib_msgs::GoalID,
  actionlib_msgs::msg::GoalID
>::convert_2_to_1(
  const actionlib_msgs::msg::GoalID & ros2_msg,
  actionlib_msgs::GoalID & ros1_msg);


template<>
void
Factory<
  actionlib_msgs::GoalStatus,
  actionlib_msgs::msg::GoalStatus
>::convert_1_to_2(
  const actionlib_msgs::GoalStatus & ros1_msg,
  actionlib_msgs::msg::GoalStatus & ros2_msg);

template<>
void
Factory<
  actionlib_msgs::GoalStatus,
  actionlib_msgs::msg::GoalStatus
>::convert_2_to_1(
  const actionlib_msgs::msg::GoalStatus & ros2_msg,
  actionlib_msgs::GoalStatus & ros1_msg);


template<>
void
Factory<
  actionlib_msgs::GoalStatusArray,
  actionlib_msgs::msg::GoalStatusArray
>::convert_1_to_2(
  const actionlib_msgs::GoalStatusArray & ros1_msg,
  actionlib_msgs::msg::GoalStatusArray & ros2_msg);

template<>
void
Factory<
  actionlib_msgs::GoalStatusArray,
  actionlib_msgs::msg::GoalStatusArray
>::convert_2_to_1(
  const actionlib_msgs::msg::GoalStatusArray & ros2_msg,
  actionlib_msgs::GoalStatusArray & ros1_msg);

}  // namespace ros1_bridge
