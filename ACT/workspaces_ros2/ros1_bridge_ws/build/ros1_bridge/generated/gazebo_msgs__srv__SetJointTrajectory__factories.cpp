// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "gazebo_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <gazebo_msgs/SetJointTrajectory.h>

// include ROS 2 services
#include <gazebo_msgs/srv/set_joint_trajectory.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_gazebo_msgs__srv__SetJointTrajectory(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_gazebo_msgs__srv__SetJointTrajectory(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "gazebo_msgs" &&
      service_name == "SetJointTrajectory"
    ) || (
      ros_id == "ros2" &&
      package_name == "gazebo_msgs" &&
      service_name == "srv/SetJointTrajectory"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      gazebo_msgs::SetJointTrajectory,
      gazebo_msgs::srv::SetJointTrajectory
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  gazebo_msgs::SetJointTrajectory,
  gazebo_msgs::srv::SetJointTrajectory
>::translate_1_to_2(
  const gazebo_msgs::SetJointTrajectory::Request& req1,
  gazebo_msgs::srv::SetJointTrajectory::Request& req2
) {
  auto & model_name1 = req1.model_name;
  auto & model_name2 = req2.model_name;
  model_name2 = model_name1;
  auto & joint_trajectory1 = req1.joint_trajectory;
  auto & joint_trajectory2 = req2.joint_trajectory;
  Factory<trajectory_msgs::JointTrajectory,trajectory_msgs::msg::JointTrajectory>::convert_1_to_2(joint_trajectory1, joint_trajectory2);
  auto & model_pose1 = req1.model_pose;
  auto & model_pose2 = req2.model_pose;
  Factory<geometry_msgs::Pose,geometry_msgs::msg::Pose>::convert_1_to_2(model_pose1, model_pose2);
  auto & set_model_pose1 = req1.set_model_pose;
  auto & set_model_pose2 = req2.set_model_pose;
  set_model_pose2 = set_model_pose1;
  auto & disable_physics_updates1 = req1.disable_physics_updates;
  auto & disable_physics_updates2 = req2.disable_physics_updates;
  disable_physics_updates2 = disable_physics_updates1;
}

template <>
void ServiceFactory<
  gazebo_msgs::SetJointTrajectory,
  gazebo_msgs::srv::SetJointTrajectory
>::translate_1_to_2(
  const gazebo_msgs::SetJointTrajectory::Response& req1,
  gazebo_msgs::srv::SetJointTrajectory::Response& req2
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
  gazebo_msgs::SetJointTrajectory,
  gazebo_msgs::srv::SetJointTrajectory
>::translate_2_to_1(
  const gazebo_msgs::srv::SetJointTrajectory::Request& req2,
  gazebo_msgs::SetJointTrajectory::Request& req1
) {
  auto & model_name1 = req1.model_name;
  auto & model_name2 = req2.model_name;
  model_name1 = model_name2;
  auto & joint_trajectory1 = req1.joint_trajectory;
  auto & joint_trajectory2 = req2.joint_trajectory;
  Factory<trajectory_msgs::JointTrajectory,trajectory_msgs::msg::JointTrajectory>::convert_2_to_1(joint_trajectory2, joint_trajectory1);
  auto & model_pose1 = req1.model_pose;
  auto & model_pose2 = req2.model_pose;
  Factory<geometry_msgs::Pose,geometry_msgs::msg::Pose>::convert_2_to_1(model_pose2, model_pose1);
  auto & set_model_pose1 = req1.set_model_pose;
  auto & set_model_pose2 = req2.set_model_pose;
  set_model_pose1 = set_model_pose2;
  auto & disable_physics_updates1 = req1.disable_physics_updates;
  auto & disable_physics_updates2 = req2.disable_physics_updates;
  disable_physics_updates1 = disable_physics_updates2;
}

template <>
void ServiceFactory<
  gazebo_msgs::SetJointTrajectory,
  gazebo_msgs::srv::SetJointTrajectory
>::translate_2_to_1(
  const gazebo_msgs::srv::SetJointTrajectory::Response& req2,
  gazebo_msgs::SetJointTrajectory::Response& req1
) {
  auto & success1 = req1.success;
  auto & success2 = req2.success;
  success1 = success2;
  auto & status_message1 = req1.status_message;
  auto & status_message2 = req2.status_message;
  status_message1 = status_message2;
}

}  // namespace ros1_bridge
