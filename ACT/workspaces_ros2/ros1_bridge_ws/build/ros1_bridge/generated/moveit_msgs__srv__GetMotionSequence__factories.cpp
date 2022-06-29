// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "moveit_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <moveit_msgs/GetMotionSequence.h>

// include ROS 2 services
#include <moveit_msgs/srv/get_motion_sequence.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__srv__GetMotionSequence(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__GetMotionSequence(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "moveit_msgs" &&
      service_name == "GetMotionSequence"
    ) || (
      ros_id == "ros2" &&
      package_name == "moveit_msgs" &&
      service_name == "srv/GetMotionSequence"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      moveit_msgs::GetMotionSequence,
      moveit_msgs::srv::GetMotionSequence
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  moveit_msgs::GetMotionSequence,
  moveit_msgs::srv::GetMotionSequence
>::translate_1_to_2(
  const moveit_msgs::GetMotionSequence::Request& req1,
  moveit_msgs::srv::GetMotionSequence::Request& req2
) {
  auto & request1 = req1.request;
  auto & request2 = req2.request;
  Factory<moveit_msgs::MotionSequenceRequest,moveit_msgs::msg::MotionSequenceRequest>::convert_1_to_2(request1, request2);
}

template <>
void ServiceFactory<
  moveit_msgs::GetMotionSequence,
  moveit_msgs::srv::GetMotionSequence
>::translate_1_to_2(
  const moveit_msgs::GetMotionSequence::Response& req1,
  moveit_msgs::srv::GetMotionSequence::Response& req2
) {
  auto & response1 = req1.response;
  auto & response2 = req2.response;
  Factory<moveit_msgs::MotionSequenceResponse,moveit_msgs::msg::MotionSequenceResponse>::convert_1_to_2(response1, response2);
}

template <>
void ServiceFactory<
  moveit_msgs::GetMotionSequence,
  moveit_msgs::srv::GetMotionSequence
>::translate_2_to_1(
  const moveit_msgs::srv::GetMotionSequence::Request& req2,
  moveit_msgs::GetMotionSequence::Request& req1
) {
  auto & request1 = req1.request;
  auto & request2 = req2.request;
  Factory<moveit_msgs::MotionSequenceRequest,moveit_msgs::msg::MotionSequenceRequest>::convert_2_to_1(request2, request1);
}

template <>
void ServiceFactory<
  moveit_msgs::GetMotionSequence,
  moveit_msgs::srv::GetMotionSequence
>::translate_2_to_1(
  const moveit_msgs::srv::GetMotionSequence::Response& req2,
  moveit_msgs::GetMotionSequence::Response& req1
) {
  auto & response1 = req1.response;
  auto & response2 = req2.response;
  Factory<moveit_msgs::MotionSequenceResponse,moveit_msgs::msg::MotionSequenceResponse>::convert_2_to_1(response2, response1);
}

}  // namespace ros1_bridge
