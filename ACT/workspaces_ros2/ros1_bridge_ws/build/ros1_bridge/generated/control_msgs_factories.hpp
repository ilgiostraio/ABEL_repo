// generated from ros1_bridge/resource/pkg_factories.hpp.em

#include <memory>
#include <string>

#include <ros1_bridge/factory.hpp>

// include ROS 1 messages
#include <control_msgs/GripperCommand.h>
#include <control_msgs/JointTolerance.h>
#include <control_msgs/JointControllerState.h>
#include <control_msgs/JointJog.h>
#include <control_msgs/PidState.h>
#include <control_msgs/JointTrajectoryControllerState.h>

// include ROS 2 messages
#include <control_msgs/msg/gripper_command.hpp>
#include <control_msgs/msg/joint_tolerance.hpp>
#include <control_msgs/msg/joint_controller_state.hpp>
#include <control_msgs/msg/joint_jog.hpp>
#include <control_msgs/msg/pid_state.hpp>
#include <control_msgs/msg/joint_trajectory_controller_state.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_control_msgs(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_control_msgs__msg__DynamicJointState(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_control_msgs__msg__GripperCommand(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_control_msgs__msg__InterfaceValue(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_control_msgs__msg__JointControllerState(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_control_msgs__msg__JointJog(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_control_msgs__msg__JointTolerance(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_control_msgs__msg__JointTrajectoryControllerState(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_control_msgs__msg__PidState(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_control_msgs(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_control_msgs__srv__QueryCalibrationState(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_control_msgs__srv__QueryTrajectoryState(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

// conversion functions for available interfaces

template<>
void
Factory<
  control_msgs::GripperCommand,
  control_msgs::msg::GripperCommand
>::convert_1_to_2(
  const control_msgs::GripperCommand & ros1_msg,
  control_msgs::msg::GripperCommand & ros2_msg);

template<>
void
Factory<
  control_msgs::GripperCommand,
  control_msgs::msg::GripperCommand
>::convert_2_to_1(
  const control_msgs::msg::GripperCommand & ros2_msg,
  control_msgs::GripperCommand & ros1_msg);


template<>
void
Factory<
  control_msgs::JointTolerance,
  control_msgs::msg::JointTolerance
>::convert_1_to_2(
  const control_msgs::JointTolerance & ros1_msg,
  control_msgs::msg::JointTolerance & ros2_msg);

template<>
void
Factory<
  control_msgs::JointTolerance,
  control_msgs::msg::JointTolerance
>::convert_2_to_1(
  const control_msgs::msg::JointTolerance & ros2_msg,
  control_msgs::JointTolerance & ros1_msg);


template<>
void
Factory<
  control_msgs::JointControllerState,
  control_msgs::msg::JointControllerState
>::convert_1_to_2(
  const control_msgs::JointControllerState & ros1_msg,
  control_msgs::msg::JointControllerState & ros2_msg);

template<>
void
Factory<
  control_msgs::JointControllerState,
  control_msgs::msg::JointControllerState
>::convert_2_to_1(
  const control_msgs::msg::JointControllerState & ros2_msg,
  control_msgs::JointControllerState & ros1_msg);


template<>
void
Factory<
  control_msgs::JointJog,
  control_msgs::msg::JointJog
>::convert_1_to_2(
  const control_msgs::JointJog & ros1_msg,
  control_msgs::msg::JointJog & ros2_msg);

template<>
void
Factory<
  control_msgs::JointJog,
  control_msgs::msg::JointJog
>::convert_2_to_1(
  const control_msgs::msg::JointJog & ros2_msg,
  control_msgs::JointJog & ros1_msg);


template<>
void
Factory<
  control_msgs::PidState,
  control_msgs::msg::PidState
>::convert_1_to_2(
  const control_msgs::PidState & ros1_msg,
  control_msgs::msg::PidState & ros2_msg);

template<>
void
Factory<
  control_msgs::PidState,
  control_msgs::msg::PidState
>::convert_2_to_1(
  const control_msgs::msg::PidState & ros2_msg,
  control_msgs::PidState & ros1_msg);


template<>
void
Factory<
  control_msgs::JointTrajectoryControllerState,
  control_msgs::msg::JointTrajectoryControllerState
>::convert_1_to_2(
  const control_msgs::JointTrajectoryControllerState & ros1_msg,
  control_msgs::msg::JointTrajectoryControllerState & ros2_msg);

template<>
void
Factory<
  control_msgs::JointTrajectoryControllerState,
  control_msgs::msg::JointTrajectoryControllerState
>::convert_2_to_1(
  const control_msgs::msg::JointTrajectoryControllerState & ros2_msg,
  control_msgs::JointTrajectoryControllerState & ros1_msg);

}  // namespace ros1_bridge
