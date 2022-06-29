// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "moveit_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <moveit_msgs/GetPositionIK.h>

// include ROS 2 services
#include <moveit_msgs/srv/get_position_ik.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__srv__GetPositionIK(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__GetPositionIK(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "moveit_msgs" &&
      service_name == "GetPositionIK"
    ) || (
      ros_id == "ros2" &&
      package_name == "moveit_msgs" &&
      service_name == "srv/GetPositionIK"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      moveit_msgs::GetPositionIK,
      moveit_msgs::srv::GetPositionIK
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  moveit_msgs::GetPositionIK,
  moveit_msgs::srv::GetPositionIK
>::translate_1_to_2(
  const moveit_msgs::GetPositionIK::Request& req1,
  moveit_msgs::srv::GetPositionIK::Request& req2
) {
  auto & ik_request1 = req1.ik_request;
  auto & ik_request2 = req2.ik_request;
  Factory<moveit_msgs::PositionIKRequest,moveit_msgs::msg::PositionIKRequest>::convert_1_to_2(ik_request1, ik_request2);
}

template <>
void ServiceFactory<
  moveit_msgs::GetPositionIK,
  moveit_msgs::srv::GetPositionIK
>::translate_1_to_2(
  const moveit_msgs::GetPositionIK::Response& req1,
  moveit_msgs::srv::GetPositionIK::Response& req2
) {
  auto & solution1 = req1.solution;
  auto & solution2 = req2.solution;
  Factory<moveit_msgs::RobotState,moveit_msgs::msg::RobotState>::convert_1_to_2(solution1, solution2);
  auto & error_code1 = req1.error_code;
  auto & error_code2 = req2.error_code;
  Factory<moveit_msgs::MoveItErrorCodes,moveit_msgs::msg::MoveItErrorCodes>::convert_1_to_2(error_code1, error_code2);
}

template <>
void ServiceFactory<
  moveit_msgs::GetPositionIK,
  moveit_msgs::srv::GetPositionIK
>::translate_2_to_1(
  const moveit_msgs::srv::GetPositionIK::Request& req2,
  moveit_msgs::GetPositionIK::Request& req1
) {
  auto & ik_request1 = req1.ik_request;
  auto & ik_request2 = req2.ik_request;
  Factory<moveit_msgs::PositionIKRequest,moveit_msgs::msg::PositionIKRequest>::convert_2_to_1(ik_request2, ik_request1);
}

template <>
void ServiceFactory<
  moveit_msgs::GetPositionIK,
  moveit_msgs::srv::GetPositionIK
>::translate_2_to_1(
  const moveit_msgs::srv::GetPositionIK::Response& req2,
  moveit_msgs::GetPositionIK::Response& req1
) {
  auto & solution1 = req1.solution;
  auto & solution2 = req2.solution;
  Factory<moveit_msgs::RobotState,moveit_msgs::msg::RobotState>::convert_2_to_1(solution2, solution1);
  auto & error_code1 = req1.error_code;
  auto & error_code2 = req2.error_code;
  Factory<moveit_msgs::MoveItErrorCodes,moveit_msgs::msg::MoveItErrorCodes>::convert_2_to_1(error_code2, error_code1);
}

}  // namespace ros1_bridge
