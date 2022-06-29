// generated from ros1_bridge/resource/pkg_factories.hpp.em

#include <memory>
#include <string>

#include <ros1_bridge/factory.hpp>

// include ROS 1 messages
#include <trajectory_msgs/JointTrajectory.h>
#include <trajectory_msgs/JointTrajectoryPoint.h>
#include <trajectory_msgs/MultiDOFJointTrajectory.h>
#include <trajectory_msgs/MultiDOFJointTrajectoryPoint.h>

// include ROS 2 messages
#include <trajectory_msgs/msg/joint_trajectory.hpp>
#include <trajectory_msgs/msg/joint_trajectory_point.hpp>
#include <trajectory_msgs/msg/multi_dof_joint_trajectory.hpp>
#include <trajectory_msgs/msg/multi_dof_joint_trajectory_point.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_trajectory_msgs(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_trajectory_msgs__msg__JointTrajectory(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_trajectory_msgs__msg__JointTrajectoryPoint(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_trajectory_msgs__msg__MultiDOFJointTrajectory(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_trajectory_msgs(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

// conversion functions for available interfaces

template<>
void
Factory<
  trajectory_msgs::JointTrajectory,
  trajectory_msgs::msg::JointTrajectory
>::convert_1_to_2(
  const trajectory_msgs::JointTrajectory & ros1_msg,
  trajectory_msgs::msg::JointTrajectory & ros2_msg);

template<>
void
Factory<
  trajectory_msgs::JointTrajectory,
  trajectory_msgs::msg::JointTrajectory
>::convert_2_to_1(
  const trajectory_msgs::msg::JointTrajectory & ros2_msg,
  trajectory_msgs::JointTrajectory & ros1_msg);


template<>
void
Factory<
  trajectory_msgs::JointTrajectoryPoint,
  trajectory_msgs::msg::JointTrajectoryPoint
>::convert_1_to_2(
  const trajectory_msgs::JointTrajectoryPoint & ros1_msg,
  trajectory_msgs::msg::JointTrajectoryPoint & ros2_msg);

template<>
void
Factory<
  trajectory_msgs::JointTrajectoryPoint,
  trajectory_msgs::msg::JointTrajectoryPoint
>::convert_2_to_1(
  const trajectory_msgs::msg::JointTrajectoryPoint & ros2_msg,
  trajectory_msgs::JointTrajectoryPoint & ros1_msg);


template<>
void
Factory<
  trajectory_msgs::MultiDOFJointTrajectory,
  trajectory_msgs::msg::MultiDOFJointTrajectory
>::convert_1_to_2(
  const trajectory_msgs::MultiDOFJointTrajectory & ros1_msg,
  trajectory_msgs::msg::MultiDOFJointTrajectory & ros2_msg);

template<>
void
Factory<
  trajectory_msgs::MultiDOFJointTrajectory,
  trajectory_msgs::msg::MultiDOFJointTrajectory
>::convert_2_to_1(
  const trajectory_msgs::msg::MultiDOFJointTrajectory & ros2_msg,
  trajectory_msgs::MultiDOFJointTrajectory & ros1_msg);


template<>
void
Factory<
  trajectory_msgs::MultiDOFJointTrajectoryPoint,
  trajectory_msgs::msg::MultiDOFJointTrajectoryPoint
>::convert_1_to_2(
  const trajectory_msgs::MultiDOFJointTrajectoryPoint & ros1_msg,
  trajectory_msgs::msg::MultiDOFJointTrajectoryPoint & ros2_msg);

template<>
void
Factory<
  trajectory_msgs::MultiDOFJointTrajectoryPoint,
  trajectory_msgs::msg::MultiDOFJointTrajectoryPoint
>::convert_2_to_1(
  const trajectory_msgs::msg::MultiDOFJointTrajectoryPoint & ros2_msg,
  trajectory_msgs::MultiDOFJointTrajectoryPoint & ros1_msg);

}  // namespace ros1_bridge
