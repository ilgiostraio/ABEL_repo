// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "gazebo_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <gazebo_msgs/SpawnModel.h>

// include ROS 2 services
#include <gazebo_msgs/srv/spawn_model.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_gazebo_msgs__srv__SpawnModel(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__SpawnModel(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "gazebo_msgs" &&
      service_name == "SpawnModel"
    ) || (
      ros_id == "ros2" &&
      package_name == "gazebo_msgs" &&
      service_name == "srv/SpawnModel"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      gazebo_msgs::SpawnModel,
      gazebo_msgs::srv::SpawnModel
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  gazebo_msgs::SpawnModel,
  gazebo_msgs::srv::SpawnModel
>::translate_1_to_2(
  const gazebo_msgs::SpawnModel::Request& req1,
  gazebo_msgs::srv::SpawnModel::Request& req2
) {
  auto & model_name1 = req1.model_name;
  auto & model_name2 = req2.model_name;
  model_name2 = model_name1;
  auto & model_xml1 = req1.model_xml;
  auto & model_xml2 = req2.model_xml;
  model_xml2 = model_xml1;
  auto & robot_namespace1 = req1.robot_namespace;
  auto & robot_namespace2 = req2.robot_namespace;
  robot_namespace2 = robot_namespace1;
  auto & initial_pose1 = req1.initial_pose;
  auto & initial_pose2 = req2.initial_pose;
  Factory<geometry_msgs::Pose,geometry_msgs::msg::Pose>::convert_1_to_2(initial_pose1, initial_pose2);
  auto & reference_frame1 = req1.reference_frame;
  auto & reference_frame2 = req2.reference_frame;
  reference_frame2 = reference_frame1;
}

template <>
void ServiceFactory<
  gazebo_msgs::SpawnModel,
  gazebo_msgs::srv::SpawnModel
>::translate_1_to_2(
  const gazebo_msgs::SpawnModel::Response& req1,
  gazebo_msgs::srv::SpawnModel::Response& req2
) {
  auto & success1 = req1.success;
  auto & success2 = req2.success;
  success2 = success1;
  auto & status_message1 = req1.status_message;
  auto & status_message2 = req2.status_message;
  status_message2 = status_message1;
}

template <>
void ServiceFactory<
  gazebo_msgs::SpawnModel,
  gazebo_msgs::srv::SpawnModel
>::translate_2_to_1(
  const gazebo_msgs::srv::SpawnModel::Request& req2,
  gazebo_msgs::SpawnModel::Request& req1
) {
  auto & model_name1 = req1.model_name;
  auto & model_name2 = req2.model_name;
  model_name1 = model_name2;
  auto & model_xml1 = req1.model_xml;
  auto & model_xml2 = req2.model_xml;
  model_xml1 = model_xml2;
  auto & robot_namespace1 = req1.robot_namespace;
  auto & robot_namespace2 = req2.robot_namespace;
  robot_namespace1 = robot_namespace2;
  auto & initial_pose1 = req1.initial_pose;
  auto & initial_pose2 = req2.initial_pose;
  Factory<geometry_msgs::Pose,geometry_msgs::msg::Pose>::convert_2_to_1(initial_pose2, initial_pose1);
  auto & reference_frame1 = req1.reference_frame;
  auto & reference_frame2 = req2.reference_frame;
  reference_frame1 = reference_frame2;
}

template <>
void ServiceFactory<
  gazebo_msgs::SpawnModel,
  gazebo_msgs::srv::SpawnModel
>::translate_2_to_1(
  const gazebo_msgs::srv::SpawnModel::Response& req2,
  gazebo_msgs::SpawnModel::Response& req1
) {
  auto & success1 = req1.success;
  auto & success2 = req2.success;
  success1 = success2;
  auto & status_message1 = req1.status_message;
  auto & status_message2 = req2.status_message;
  status_message1 = status_message2;
}

}  // namespace ros1_bridge
