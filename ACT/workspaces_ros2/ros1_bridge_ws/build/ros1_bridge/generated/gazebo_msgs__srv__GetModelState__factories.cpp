// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "gazebo_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <gazebo_msgs/GetModelState.h>

// include ROS 2 services
#include <gazebo_msgs/srv/get_model_state.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_gazebo_msgs__srv__GetModelState(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__GetModelState(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "gazebo_msgs" &&
      service_name == "GetModelState"
    ) || (
      ros_id == "ros2" &&
      package_name == "gazebo_msgs" &&
      service_name == "srv/GetModelState"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      gazebo_msgs::GetModelState,
      gazebo_msgs::srv::GetModelState
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  gazebo_msgs::GetModelState,
  gazebo_msgs::srv::GetModelState
>::translate_1_to_2(
  const gazebo_msgs::GetModelState::Request& req1,
  gazebo_msgs::srv::GetModelState::Request& req2
) {
  auto & model_name1 = req1.model_name;
  auto & model_name2 = req2.model_name;
  model_name2 = model_name1;
  auto & relative_entity_name1 = req1.relative_entity_name;
  auto & relative_entity_name2 = req2.relative_entity_name;
  relative_entity_name2 = relative_entity_name1;
}

template <>
void ServiceFactory<
  gazebo_msgs::GetModelState,
  gazebo_msgs::srv::GetModelState
>::translate_1_to_2(
  const gazebo_msgs::GetModelState::Response& req1,
  gazebo_msgs::srv::GetModelState::Response& req2
) {
  auto & header1 = req1.header;
  auto & header2 = req2.header;
  Factory<std_msgs::Header,std_msgs::msg::Header>::convert_1_to_2(header1, header2);
  auto & pose1 = req1.pose;
  auto & pose2 = req2.pose;
  Factory<geometry_msgs::Pose,geometry_msgs::msg::Pose>::convert_1_to_2(pose1, pose2);
  auto & twist1 = req1.twist;
  auto & twist2 = req2.twist;
  Factory<geometry_msgs::Twist,geometry_msgs::msg::Twist>::convert_1_to_2(twist1, twist2);
  auto & success1 = req1.success;
  auto & success2 = req2.success;
  success2 = success1;
  auto & status_message1 = req1.status_message;
  auto & status_message2 = req2.status_message;
  status_message2 = status_message1;
}

template <>
void ServiceFactory<
  gazebo_msgs::GetModelState,
  gazebo_msgs::srv::GetModelState
>::translate_2_to_1(
  const gazebo_msgs::srv::GetModelState::Request& req2,
  gazebo_msgs::GetModelState::Request& req1
) {
  auto & model_name1 = req1.model_name;
  auto & model_name2 = req2.model_name;
  model_name1 = model_name2;
  auto & relative_entity_name1 = req1.relative_entity_name;
  auto & relative_entity_name2 = req2.relative_entity_name;
  relative_entity_name1 = relative_entity_name2;
}

template <>
void ServiceFactory<
  gazebo_msgs::GetModelState,
  gazebo_msgs::srv::GetModelState
>::translate_2_to_1(
  const gazebo_msgs::srv::GetModelState::Response& req2,
  gazebo_msgs::GetModelState::Response& req1
) {
  auto & header1 = req1.header;
  auto & header2 = req2.header;
  Factory<std_msgs::Header,std_msgs::msg::Header>::convert_2_to_1(header2, header1);
  auto & pose1 = req1.pose;
  auto & pose2 = req2.pose;
  Factory<geometry_msgs::Pose,geometry_msgs::msg::Pose>::convert_2_to_1(pose2, pose1);
  auto & twist1 = req1.twist;
  auto & twist2 = req2.twist;
  Factory<geometry_msgs::Twist,geometry_msgs::msg::Twist>::convert_2_to_1(twist2, twist1);
  auto & success1 = req1.success;
  auto & success2 = req2.success;
  success1 = success2;
  auto & status_message1 = req1.status_message;
  auto & status_message2 = req2.status_message;
  status_message1 = status_message2;
}

}  // namespace ros1_bridge
