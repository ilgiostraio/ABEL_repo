// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "moveit_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <moveit_msgs/GetPositionFK.h>

// include ROS 2 services
#include <moveit_msgs/srv/get_position_fk.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__srv__GetPositionFK(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__GetPositionFK(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "moveit_msgs" &&
      service_name == "GetPositionFK"
    ) || (
      ros_id == "ros2" &&
      package_name == "moveit_msgs" &&
      service_name == "srv/GetPositionFK"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      moveit_msgs::GetPositionFK,
      moveit_msgs::srv::GetPositionFK
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  moveit_msgs::GetPositionFK,
  moveit_msgs::srv::GetPositionFK
>::translate_1_to_2(
  const moveit_msgs::GetPositionFK::Request& req1,
  moveit_msgs::srv::GetPositionFK::Request& req2
) {
  auto & header1 = req1.header;
  auto & header2 = req2.header;
  Factory<std_msgs::Header,std_msgs::msg::Header>::convert_1_to_2(header1, header2);
  req2.fk_link_names.resize(req1.fk_link_names.size());
  auto fk_link_names1_it = req1.fk_link_names.begin();
  auto fk_link_names2_it = req2.fk_link_names.begin();
  while (
    fk_link_names1_it != req1.fk_link_names.end() &&
    fk_link_names2_it != req2.fk_link_names.end()
  ) {
    auto & fk_link_names1 = *(fk_link_names1_it++);
    auto & fk_link_names2 = *(fk_link_names2_it++);
  fk_link_names2 = fk_link_names1;
  }
  auto & robot_state1 = req1.robot_state;
  auto & robot_state2 = req2.robot_state;
  Factory<moveit_msgs::RobotState,moveit_msgs::msg::RobotState>::convert_1_to_2(robot_state1, robot_state2);
}

template <>
void ServiceFactory<
  moveit_msgs::GetPositionFK,
  moveit_msgs::srv::GetPositionFK
>::translate_1_to_2(
  const moveit_msgs::GetPositionFK::Response& req1,
  moveit_msgs::srv::GetPositionFK::Response& req2
) {
  req2.pose_stamped.resize(req1.pose_stamped.size());
  auto pose_stamped1_it = req1.pose_stamped.begin();
  auto pose_stamped2_it = req2.pose_stamped.begin();
  while (
    pose_stamped1_it != req1.pose_stamped.end() &&
    pose_stamped2_it != req2.pose_stamped.end()
  ) {
    auto & pose_stamped1 = *(pose_stamped1_it++);
    auto & pose_stamped2 = *(pose_stamped2_it++);
  Factory<geometry_msgs::PoseStamped,geometry_msgs::msg::PoseStamped>::convert_1_to_2(pose_stamped1, pose_stamped2);
  }
  req2.fk_link_names.resize(req1.fk_link_names.size());
  auto fk_link_names1_it = req1.fk_link_names.begin();
  auto fk_link_names2_it = req2.fk_link_names.begin();
  while (
    fk_link_names1_it != req1.fk_link_names.end() &&
    fk_link_names2_it != req2.fk_link_names.end()
  ) {
    auto & fk_link_names1 = *(fk_link_names1_it++);
    auto & fk_link_names2 = *(fk_link_names2_it++);
  fk_link_names2 = fk_link_names1;
  }
  auto & error_code1 = req1.error_code;
  auto & error_code2 = req2.error_code;
  Factory<moveit_msgs::MoveItErrorCodes,moveit_msgs::msg::MoveItErrorCodes>::convert_1_to_2(error_code1, error_code2);
}

template <>
void ServiceFactory<
  moveit_msgs::GetPositionFK,
  moveit_msgs::srv::GetPositionFK
>::translate_2_to_1(
  const moveit_msgs::srv::GetPositionFK::Request& req2,
  moveit_msgs::GetPositionFK::Request& req1
) {
  auto & header1 = req1.header;
  auto & header2 = req2.header;
  Factory<std_msgs::Header,std_msgs::msg::Header>::convert_2_to_1(header2, header1);
  req1.fk_link_names.resize(req2.fk_link_names.size());
  auto fk_link_names1_it = req1.fk_link_names.begin();
  auto fk_link_names2_it = req2.fk_link_names.begin();
  while (
    fk_link_names1_it != req1.fk_link_names.end() &&
    fk_link_names2_it != req2.fk_link_names.end()
  ) {
    auto & fk_link_names1 = *(fk_link_names1_it++);
    auto & fk_link_names2 = *(fk_link_names2_it++);
  fk_link_names1 = fk_link_names2;
  }
  auto & robot_state1 = req1.robot_state;
  auto & robot_state2 = req2.robot_state;
  Factory<moveit_msgs::RobotState,moveit_msgs::msg::RobotState>::convert_2_to_1(robot_state2, robot_state1);
}

template <>
void ServiceFactory<
  moveit_msgs::GetPositionFK,
  moveit_msgs::srv::GetPositionFK
>::translate_2_to_1(
  const moveit_msgs::srv::GetPositionFK::Response& req2,
  moveit_msgs::GetPositionFK::Response& req1
) {
  req1.pose_stamped.resize(req2.pose_stamped.size());
  auto pose_stamped1_it = req1.pose_stamped.begin();
  auto pose_stamped2_it = req2.pose_stamped.begin();
  while (
    pose_stamped1_it != req1.pose_stamped.end() &&
    pose_stamped2_it != req2.pose_stamped.end()
  ) {
    auto & pose_stamped1 = *(pose_stamped1_it++);
    auto & pose_stamped2 = *(pose_stamped2_it++);
  Factory<geometry_msgs::PoseStamped,geometry_msgs::msg::PoseStamped>::convert_2_to_1(pose_stamped2, pose_stamped1);
  }
  req1.fk_link_names.resize(req2.fk_link_names.size());
  auto fk_link_names1_it = req1.fk_link_names.begin();
  auto fk_link_names2_it = req2.fk_link_names.begin();
  while (
    fk_link_names1_it != req1.fk_link_names.end() &&
    fk_link_names2_it != req2.fk_link_names.end()
  ) {
    auto & fk_link_names1 = *(fk_link_names1_it++);
    auto & fk_link_names2 = *(fk_link_names2_it++);
  fk_link_names1 = fk_link_names2;
  }
  auto & error_code1 = req1.error_code;
  auto & error_code2 = req2.error_code;
  Factory<moveit_msgs::MoveItErrorCodes,moveit_msgs::msg::MoveItErrorCodes>::convert_2_to_1(error_code2, error_code1);
}

}  // namespace ros1_bridge
