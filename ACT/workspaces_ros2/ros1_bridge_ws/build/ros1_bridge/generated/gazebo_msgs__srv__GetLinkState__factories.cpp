// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "gazebo_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <gazebo_msgs/GetLinkState.h>

// include ROS 2 services
#include <gazebo_msgs/srv/get_link_state.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_gazebo_msgs__srv__GetLinkState(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__GetLinkState(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "gazebo_msgs" &&
      service_name == "GetLinkState"
    ) || (
      ros_id == "ros2" &&
      package_name == "gazebo_msgs" &&
      service_name == "srv/GetLinkState"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      gazebo_msgs::GetLinkState,
      gazebo_msgs::srv::GetLinkState
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  gazebo_msgs::GetLinkState,
  gazebo_msgs::srv::GetLinkState
>::translate_1_to_2(
  const gazebo_msgs::GetLinkState::Request& req1,
  gazebo_msgs::srv::GetLinkState::Request& req2
) {
  auto & link_name1 = req1.link_name;
  auto & link_name2 = req2.link_name;
  link_name2 = link_name1;
  auto & reference_frame1 = req1.reference_frame;
  auto & reference_frame2 = req2.reference_frame;
  reference_frame2 = reference_frame1;
}

template <>
void ServiceFactory<
  gazebo_msgs::GetLinkState,
  gazebo_msgs::srv::GetLinkState
>::translate_1_to_2(
  const gazebo_msgs::GetLinkState::Response& req1,
  gazebo_msgs::srv::GetLinkState::Response& req2
) {
  auto & link_state1 = req1.link_state;
  auto & link_state2 = req2.link_state;
  Factory<gazebo_msgs::LinkState,gazebo_msgs::msg::LinkState>::convert_1_to_2(link_state1, link_state2);
  auto & success1 = req1.success;
  auto & success2 = req2.success;
  success2 = success1;
  auto & status_message1 = req1.status_message;
  auto & status_message2 = req2.status_message;
  status_message2 = status_message1;
}

template <>
void ServiceFactory<
  gazebo_msgs::GetLinkState,
  gazebo_msgs::srv::GetLinkState
>::translate_2_to_1(
  const gazebo_msgs::srv::GetLinkState::Request& req2,
  gazebo_msgs::GetLinkState::Request& req1
) {
  auto & link_name1 = req1.link_name;
  auto & link_name2 = req2.link_name;
  link_name1 = link_name2;
  auto & reference_frame1 = req1.reference_frame;
  auto & reference_frame2 = req2.reference_frame;
  reference_frame1 = reference_frame2;
}

template <>
void ServiceFactory<
  gazebo_msgs::GetLinkState,
  gazebo_msgs::srv::GetLinkState
>::translate_2_to_1(
  const gazebo_msgs::srv::GetLinkState::Response& req2,
  gazebo_msgs::GetLinkState::Response& req1
) {
  auto & link_state1 = req1.link_state;
  auto & link_state2 = req2.link_state;
  Factory<gazebo_msgs::LinkState,gazebo_msgs::msg::LinkState>::convert_2_to_1(link_state2, link_state1);
  auto & success1 = req1.success;
  auto & success2 = req2.success;
  success1 = success2;
  auto & status_message1 = req1.status_message;
  auto & status_message2 = req2.status_message;
  status_message1 = status_message2;
}

}  // namespace ros1_bridge
