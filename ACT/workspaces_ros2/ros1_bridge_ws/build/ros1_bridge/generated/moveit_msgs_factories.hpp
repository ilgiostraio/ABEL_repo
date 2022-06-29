// generated from ros1_bridge/resource/pkg_factories.hpp.em

#include <memory>
#include <string>

#include <ros1_bridge/factory.hpp>

// include ROS 1 messages
#include <moveit_msgs/AllowedCollisionEntry.h>
#include <moveit_msgs/AllowedCollisionMatrix.h>
#include <moveit_msgs/BoundingVolume.h>
#include <moveit_msgs/CartesianPoint.h>
#include <moveit_msgs/CartesianTrajectoryPoint.h>
#include <moveit_msgs/ConstraintEvalResult.h>
#include <moveit_msgs/Constraints.h>
#include <moveit_msgs/CostSource.h>
#include <moveit_msgs/JointConstraint.h>
#include <moveit_msgs/JointLimits.h>
#include <moveit_msgs/KinematicSolverInfo.h>
#include <moveit_msgs/LinkPadding.h>
#include <moveit_msgs/LinkScale.h>
#include <moveit_msgs/MotionSequenceRequest.h>
#include <moveit_msgs/MoveItErrorCodes.h>
#include <moveit_msgs/OrientedBoundingBox.h>
#include <moveit_msgs/PlannerInterfaceDescription.h>
#include <moveit_msgs/PlannerParams.h>
#include <moveit_msgs/PlanningSceneComponents.h>
#include <moveit_msgs/TrajectoryConstraints.h>
#include <moveit_msgs/ObjectColor.h>
#include <moveit_msgs/CartesianTrajectory.h>
#include <moveit_msgs/CollisionObject.h>
#include <moveit_msgs/ContactInformation.h>
#include <moveit_msgs/GenericTrajectory.h>
#include <moveit_msgs/GripperTranslation.h>
#include <moveit_msgs/OrientationConstraint.h>
#include <moveit_msgs/PositionConstraint.h>
#include <moveit_msgs/VisibilityConstraint.h>
#include <moveit_msgs/WorkspaceParameters.h>
#include <moveit_msgs/PlanningSceneWorld.h>
#include <moveit_msgs/RobotState.h>
#include <moveit_msgs/DisplayRobotState.h>
#include <moveit_msgs/DisplayTrajectory.h>
#include <moveit_msgs/MotionPlanDetailedResponse.h>
#include <moveit_msgs/MotionPlanRequest.h>
#include <moveit_msgs/MotionSequenceItem.h>
#include <moveit_msgs/MotionSequenceResponse.h>
#include <moveit_msgs/PlanningScene.h>
#include <moveit_msgs/PlanningOptions.h>
#include <moveit_msgs/PositionIKRequest.h>
#include <moveit_msgs/AttachedCollisionObject.h>
#include <moveit_msgs/Grasp.h>
#include <moveit_msgs/PlaceLocation.h>
#include <moveit_msgs/RobotTrajectory.h>
#include <moveit_msgs/MotionPlanResponse.h>

// include ROS 2 messages
#include <moveit_msgs/msg/allowed_collision_entry.hpp>
#include <moveit_msgs/msg/allowed_collision_matrix.hpp>
#include <moveit_msgs/msg/bounding_volume.hpp>
#include <moveit_msgs/msg/cartesian_point.hpp>
#include <moveit_msgs/msg/cartesian_trajectory_point.hpp>
#include <moveit_msgs/msg/constraint_eval_result.hpp>
#include <moveit_msgs/msg/constraints.hpp>
#include <moveit_msgs/msg/cost_source.hpp>
#include <moveit_msgs/msg/joint_constraint.hpp>
#include <moveit_msgs/msg/joint_limits.hpp>
#include <moveit_msgs/msg/kinematic_solver_info.hpp>
#include <moveit_msgs/msg/link_padding.hpp>
#include <moveit_msgs/msg/link_scale.hpp>
#include <moveit_msgs/msg/motion_sequence_request.hpp>
#include <moveit_msgs/msg/move_it_error_codes.hpp>
#include <moveit_msgs/msg/oriented_bounding_box.hpp>
#include <moveit_msgs/msg/planner_interface_description.hpp>
#include <moveit_msgs/msg/planner_params.hpp>
#include <moveit_msgs/msg/planning_scene_components.hpp>
#include <moveit_msgs/msg/trajectory_constraints.hpp>
#include <moveit_msgs/msg/object_color.hpp>
#include <moveit_msgs/msg/cartesian_trajectory.hpp>
#include <moveit_msgs/msg/collision_object.hpp>
#include <moveit_msgs/msg/contact_information.hpp>
#include <moveit_msgs/msg/generic_trajectory.hpp>
#include <moveit_msgs/msg/gripper_translation.hpp>
#include <moveit_msgs/msg/orientation_constraint.hpp>
#include <moveit_msgs/msg/position_constraint.hpp>
#include <moveit_msgs/msg/visibility_constraint.hpp>
#include <moveit_msgs/msg/workspace_parameters.hpp>
#include <moveit_msgs/msg/planning_scene_world.hpp>
#include <moveit_msgs/msg/robot_state.hpp>
#include <moveit_msgs/msg/display_robot_state.hpp>
#include <moveit_msgs/msg/display_trajectory.hpp>
#include <moveit_msgs/msg/motion_plan_detailed_response.hpp>
#include <moveit_msgs/msg/motion_plan_request.hpp>
#include <moveit_msgs/msg/motion_sequence_item.hpp>
#include <moveit_msgs/msg/motion_sequence_response.hpp>
#include <moveit_msgs/msg/planning_scene.hpp>
#include <moveit_msgs/msg/planning_options.hpp>
#include <moveit_msgs/msg/position_ik_request.hpp>
#include <moveit_msgs/msg/attached_collision_object.hpp>
#include <moveit_msgs/msg/grasp.hpp>
#include <moveit_msgs/msg/place_location.hpp>
#include <moveit_msgs/msg/robot_trajectory.hpp>
#include <moveit_msgs/msg/motion_plan_response.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__AllowedCollisionEntry(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__AllowedCollisionMatrix(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__AttachedCollisionObject(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__BoundingVolume(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__CartesianPoint(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__CartesianTrajectory(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__CartesianTrajectoryPoint(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__CollisionObject(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__ConstraintEvalResult(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__Constraints(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__ContactInformation(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__CostSource(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__DisplayRobotState(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__DisplayTrajectory(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__GenericTrajectory(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__Grasp(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__GripperTranslation(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__JointConstraint(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__JointLimits(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__KinematicSolverInfo(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__LinkPadding(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__LinkScale(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__MotionPlanDetailedResponse(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__MotionPlanRequest(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__MotionPlanResponse(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__MotionSequenceItem(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__MotionSequenceRequest(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__MotionSequenceResponse(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__MoveItErrorCodes(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__ObjectColor(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__OrientationConstraint(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__OrientedBoundingBox(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__PlaceLocation(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__PlannerInterfaceDescription(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__PlannerParams(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__PlanningOptions(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__PlanningScene(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__PlanningSceneComponents(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__PlanningSceneWorld(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__PositionConstraint(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__PositionIKRequest(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__RobotState(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__RobotTrajectory(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__TrajectoryConstraints(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__VisibilityConstraint(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__WorkspaceParameters(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__ApplyPlanningScene(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__ChangeControlDimensions(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__ChangeDriftDimensions(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__DeleteRobotStateFromWarehouse(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__ExecuteKnownTrajectory(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__GetCartesianPath(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__GetMotionPlan(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__GetMotionSequence(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__GetPlannerParams(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__GetPlanningScene(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__GetPositionFK(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__GetPositionIK(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__GetRobotStateFromWarehouse(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__GetStateValidity(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__GraspPlanning(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__ListRobotStatesInWarehouse(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__LoadMap(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__QueryPlannerInterfaces(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__RenameRobotStateInWarehouse(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__SaveMap(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__SaveRobotStateToWarehouse(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__SetPlannerParams(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__UpdatePointcloudOctomap(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

// conversion functions for available interfaces

template<>
void
Factory<
  moveit_msgs::AllowedCollisionEntry,
  moveit_msgs::msg::AllowedCollisionEntry
>::convert_1_to_2(
  const moveit_msgs::AllowedCollisionEntry & ros1_msg,
  moveit_msgs::msg::AllowedCollisionEntry & ros2_msg);

template<>
void
Factory<
  moveit_msgs::AllowedCollisionEntry,
  moveit_msgs::msg::AllowedCollisionEntry
>::convert_2_to_1(
  const moveit_msgs::msg::AllowedCollisionEntry & ros2_msg,
  moveit_msgs::AllowedCollisionEntry & ros1_msg);


template<>
void
Factory<
  moveit_msgs::AllowedCollisionMatrix,
  moveit_msgs::msg::AllowedCollisionMatrix
>::convert_1_to_2(
  const moveit_msgs::AllowedCollisionMatrix & ros1_msg,
  moveit_msgs::msg::AllowedCollisionMatrix & ros2_msg);

template<>
void
Factory<
  moveit_msgs::AllowedCollisionMatrix,
  moveit_msgs::msg::AllowedCollisionMatrix
>::convert_2_to_1(
  const moveit_msgs::msg::AllowedCollisionMatrix & ros2_msg,
  moveit_msgs::AllowedCollisionMatrix & ros1_msg);


template<>
void
Factory<
  moveit_msgs::BoundingVolume,
  moveit_msgs::msg::BoundingVolume
>::convert_1_to_2(
  const moveit_msgs::BoundingVolume & ros1_msg,
  moveit_msgs::msg::BoundingVolume & ros2_msg);

template<>
void
Factory<
  moveit_msgs::BoundingVolume,
  moveit_msgs::msg::BoundingVolume
>::convert_2_to_1(
  const moveit_msgs::msg::BoundingVolume & ros2_msg,
  moveit_msgs::BoundingVolume & ros1_msg);


template<>
void
Factory<
  moveit_msgs::CartesianPoint,
  moveit_msgs::msg::CartesianPoint
>::convert_1_to_2(
  const moveit_msgs::CartesianPoint & ros1_msg,
  moveit_msgs::msg::CartesianPoint & ros2_msg);

template<>
void
Factory<
  moveit_msgs::CartesianPoint,
  moveit_msgs::msg::CartesianPoint
>::convert_2_to_1(
  const moveit_msgs::msg::CartesianPoint & ros2_msg,
  moveit_msgs::CartesianPoint & ros1_msg);


template<>
void
Factory<
  moveit_msgs::CartesianTrajectoryPoint,
  moveit_msgs::msg::CartesianTrajectoryPoint
>::convert_1_to_2(
  const moveit_msgs::CartesianTrajectoryPoint & ros1_msg,
  moveit_msgs::msg::CartesianTrajectoryPoint & ros2_msg);

template<>
void
Factory<
  moveit_msgs::CartesianTrajectoryPoint,
  moveit_msgs::msg::CartesianTrajectoryPoint
>::convert_2_to_1(
  const moveit_msgs::msg::CartesianTrajectoryPoint & ros2_msg,
  moveit_msgs::CartesianTrajectoryPoint & ros1_msg);


template<>
void
Factory<
  moveit_msgs::ConstraintEvalResult,
  moveit_msgs::msg::ConstraintEvalResult
>::convert_1_to_2(
  const moveit_msgs::ConstraintEvalResult & ros1_msg,
  moveit_msgs::msg::ConstraintEvalResult & ros2_msg);

template<>
void
Factory<
  moveit_msgs::ConstraintEvalResult,
  moveit_msgs::msg::ConstraintEvalResult
>::convert_2_to_1(
  const moveit_msgs::msg::ConstraintEvalResult & ros2_msg,
  moveit_msgs::ConstraintEvalResult & ros1_msg);


template<>
void
Factory<
  moveit_msgs::Constraints,
  moveit_msgs::msg::Constraints
>::convert_1_to_2(
  const moveit_msgs::Constraints & ros1_msg,
  moveit_msgs::msg::Constraints & ros2_msg);

template<>
void
Factory<
  moveit_msgs::Constraints,
  moveit_msgs::msg::Constraints
>::convert_2_to_1(
  const moveit_msgs::msg::Constraints & ros2_msg,
  moveit_msgs::Constraints & ros1_msg);


template<>
void
Factory<
  moveit_msgs::CostSource,
  moveit_msgs::msg::CostSource
>::convert_1_to_2(
  const moveit_msgs::CostSource & ros1_msg,
  moveit_msgs::msg::CostSource & ros2_msg);

template<>
void
Factory<
  moveit_msgs::CostSource,
  moveit_msgs::msg::CostSource
>::convert_2_to_1(
  const moveit_msgs::msg::CostSource & ros2_msg,
  moveit_msgs::CostSource & ros1_msg);


template<>
void
Factory<
  moveit_msgs::JointConstraint,
  moveit_msgs::msg::JointConstraint
>::convert_1_to_2(
  const moveit_msgs::JointConstraint & ros1_msg,
  moveit_msgs::msg::JointConstraint & ros2_msg);

template<>
void
Factory<
  moveit_msgs::JointConstraint,
  moveit_msgs::msg::JointConstraint
>::convert_2_to_1(
  const moveit_msgs::msg::JointConstraint & ros2_msg,
  moveit_msgs::JointConstraint & ros1_msg);


template<>
void
Factory<
  moveit_msgs::JointLimits,
  moveit_msgs::msg::JointLimits
>::convert_1_to_2(
  const moveit_msgs::JointLimits & ros1_msg,
  moveit_msgs::msg::JointLimits & ros2_msg);

template<>
void
Factory<
  moveit_msgs::JointLimits,
  moveit_msgs::msg::JointLimits
>::convert_2_to_1(
  const moveit_msgs::msg::JointLimits & ros2_msg,
  moveit_msgs::JointLimits & ros1_msg);


template<>
void
Factory<
  moveit_msgs::KinematicSolverInfo,
  moveit_msgs::msg::KinematicSolverInfo
>::convert_1_to_2(
  const moveit_msgs::KinematicSolverInfo & ros1_msg,
  moveit_msgs::msg::KinematicSolverInfo & ros2_msg);

template<>
void
Factory<
  moveit_msgs::KinematicSolverInfo,
  moveit_msgs::msg::KinematicSolverInfo
>::convert_2_to_1(
  const moveit_msgs::msg::KinematicSolverInfo & ros2_msg,
  moveit_msgs::KinematicSolverInfo & ros1_msg);


template<>
void
Factory<
  moveit_msgs::LinkPadding,
  moveit_msgs::msg::LinkPadding
>::convert_1_to_2(
  const moveit_msgs::LinkPadding & ros1_msg,
  moveit_msgs::msg::LinkPadding & ros2_msg);

template<>
void
Factory<
  moveit_msgs::LinkPadding,
  moveit_msgs::msg::LinkPadding
>::convert_2_to_1(
  const moveit_msgs::msg::LinkPadding & ros2_msg,
  moveit_msgs::LinkPadding & ros1_msg);


template<>
void
Factory<
  moveit_msgs::LinkScale,
  moveit_msgs::msg::LinkScale
>::convert_1_to_2(
  const moveit_msgs::LinkScale & ros1_msg,
  moveit_msgs::msg::LinkScale & ros2_msg);

template<>
void
Factory<
  moveit_msgs::LinkScale,
  moveit_msgs::msg::LinkScale
>::convert_2_to_1(
  const moveit_msgs::msg::LinkScale & ros2_msg,
  moveit_msgs::LinkScale & ros1_msg);


template<>
void
Factory<
  moveit_msgs::MotionSequenceRequest,
  moveit_msgs::msg::MotionSequenceRequest
>::convert_1_to_2(
  const moveit_msgs::MotionSequenceRequest & ros1_msg,
  moveit_msgs::msg::MotionSequenceRequest & ros2_msg);

template<>
void
Factory<
  moveit_msgs::MotionSequenceRequest,
  moveit_msgs::msg::MotionSequenceRequest
>::convert_2_to_1(
  const moveit_msgs::msg::MotionSequenceRequest & ros2_msg,
  moveit_msgs::MotionSequenceRequest & ros1_msg);


template<>
void
Factory<
  moveit_msgs::MoveItErrorCodes,
  moveit_msgs::msg::MoveItErrorCodes
>::convert_1_to_2(
  const moveit_msgs::MoveItErrorCodes & ros1_msg,
  moveit_msgs::msg::MoveItErrorCodes & ros2_msg);

template<>
void
Factory<
  moveit_msgs::MoveItErrorCodes,
  moveit_msgs::msg::MoveItErrorCodes
>::convert_2_to_1(
  const moveit_msgs::msg::MoveItErrorCodes & ros2_msg,
  moveit_msgs::MoveItErrorCodes & ros1_msg);


template<>
void
Factory<
  moveit_msgs::OrientedBoundingBox,
  moveit_msgs::msg::OrientedBoundingBox
>::convert_1_to_2(
  const moveit_msgs::OrientedBoundingBox & ros1_msg,
  moveit_msgs::msg::OrientedBoundingBox & ros2_msg);

template<>
void
Factory<
  moveit_msgs::OrientedBoundingBox,
  moveit_msgs::msg::OrientedBoundingBox
>::convert_2_to_1(
  const moveit_msgs::msg::OrientedBoundingBox & ros2_msg,
  moveit_msgs::OrientedBoundingBox & ros1_msg);


template<>
void
Factory<
  moveit_msgs::PlannerInterfaceDescription,
  moveit_msgs::msg::PlannerInterfaceDescription
>::convert_1_to_2(
  const moveit_msgs::PlannerInterfaceDescription & ros1_msg,
  moveit_msgs::msg::PlannerInterfaceDescription & ros2_msg);

template<>
void
Factory<
  moveit_msgs::PlannerInterfaceDescription,
  moveit_msgs::msg::PlannerInterfaceDescription
>::convert_2_to_1(
  const moveit_msgs::msg::PlannerInterfaceDescription & ros2_msg,
  moveit_msgs::PlannerInterfaceDescription & ros1_msg);


template<>
void
Factory<
  moveit_msgs::PlannerParams,
  moveit_msgs::msg::PlannerParams
>::convert_1_to_2(
  const moveit_msgs::PlannerParams & ros1_msg,
  moveit_msgs::msg::PlannerParams & ros2_msg);

template<>
void
Factory<
  moveit_msgs::PlannerParams,
  moveit_msgs::msg::PlannerParams
>::convert_2_to_1(
  const moveit_msgs::msg::PlannerParams & ros2_msg,
  moveit_msgs::PlannerParams & ros1_msg);


template<>
void
Factory<
  moveit_msgs::PlanningSceneComponents,
  moveit_msgs::msg::PlanningSceneComponents
>::convert_1_to_2(
  const moveit_msgs::PlanningSceneComponents & ros1_msg,
  moveit_msgs::msg::PlanningSceneComponents & ros2_msg);

template<>
void
Factory<
  moveit_msgs::PlanningSceneComponents,
  moveit_msgs::msg::PlanningSceneComponents
>::convert_2_to_1(
  const moveit_msgs::msg::PlanningSceneComponents & ros2_msg,
  moveit_msgs::PlanningSceneComponents & ros1_msg);


template<>
void
Factory<
  moveit_msgs::TrajectoryConstraints,
  moveit_msgs::msg::TrajectoryConstraints
>::convert_1_to_2(
  const moveit_msgs::TrajectoryConstraints & ros1_msg,
  moveit_msgs::msg::TrajectoryConstraints & ros2_msg);

template<>
void
Factory<
  moveit_msgs::TrajectoryConstraints,
  moveit_msgs::msg::TrajectoryConstraints
>::convert_2_to_1(
  const moveit_msgs::msg::TrajectoryConstraints & ros2_msg,
  moveit_msgs::TrajectoryConstraints & ros1_msg);


template<>
void
Factory<
  moveit_msgs::ObjectColor,
  moveit_msgs::msg::ObjectColor
>::convert_1_to_2(
  const moveit_msgs::ObjectColor & ros1_msg,
  moveit_msgs::msg::ObjectColor & ros2_msg);

template<>
void
Factory<
  moveit_msgs::ObjectColor,
  moveit_msgs::msg::ObjectColor
>::convert_2_to_1(
  const moveit_msgs::msg::ObjectColor & ros2_msg,
  moveit_msgs::ObjectColor & ros1_msg);


template<>
void
Factory<
  moveit_msgs::CartesianTrajectory,
  moveit_msgs::msg::CartesianTrajectory
>::convert_1_to_2(
  const moveit_msgs::CartesianTrajectory & ros1_msg,
  moveit_msgs::msg::CartesianTrajectory & ros2_msg);

template<>
void
Factory<
  moveit_msgs::CartesianTrajectory,
  moveit_msgs::msg::CartesianTrajectory
>::convert_2_to_1(
  const moveit_msgs::msg::CartesianTrajectory & ros2_msg,
  moveit_msgs::CartesianTrajectory & ros1_msg);


template<>
void
Factory<
  moveit_msgs::CollisionObject,
  moveit_msgs::msg::CollisionObject
>::convert_1_to_2(
  const moveit_msgs::CollisionObject & ros1_msg,
  moveit_msgs::msg::CollisionObject & ros2_msg);

template<>
void
Factory<
  moveit_msgs::CollisionObject,
  moveit_msgs::msg::CollisionObject
>::convert_2_to_1(
  const moveit_msgs::msg::CollisionObject & ros2_msg,
  moveit_msgs::CollisionObject & ros1_msg);


template<>
void
Factory<
  moveit_msgs::ContactInformation,
  moveit_msgs::msg::ContactInformation
>::convert_1_to_2(
  const moveit_msgs::ContactInformation & ros1_msg,
  moveit_msgs::msg::ContactInformation & ros2_msg);

template<>
void
Factory<
  moveit_msgs::ContactInformation,
  moveit_msgs::msg::ContactInformation
>::convert_2_to_1(
  const moveit_msgs::msg::ContactInformation & ros2_msg,
  moveit_msgs::ContactInformation & ros1_msg);


template<>
void
Factory<
  moveit_msgs::GenericTrajectory,
  moveit_msgs::msg::GenericTrajectory
>::convert_1_to_2(
  const moveit_msgs::GenericTrajectory & ros1_msg,
  moveit_msgs::msg::GenericTrajectory & ros2_msg);

template<>
void
Factory<
  moveit_msgs::GenericTrajectory,
  moveit_msgs::msg::GenericTrajectory
>::convert_2_to_1(
  const moveit_msgs::msg::GenericTrajectory & ros2_msg,
  moveit_msgs::GenericTrajectory & ros1_msg);


template<>
void
Factory<
  moveit_msgs::GripperTranslation,
  moveit_msgs::msg::GripperTranslation
>::convert_1_to_2(
  const moveit_msgs::GripperTranslation & ros1_msg,
  moveit_msgs::msg::GripperTranslation & ros2_msg);

template<>
void
Factory<
  moveit_msgs::GripperTranslation,
  moveit_msgs::msg::GripperTranslation
>::convert_2_to_1(
  const moveit_msgs::msg::GripperTranslation & ros2_msg,
  moveit_msgs::GripperTranslation & ros1_msg);


template<>
void
Factory<
  moveit_msgs::OrientationConstraint,
  moveit_msgs::msg::OrientationConstraint
>::convert_1_to_2(
  const moveit_msgs::OrientationConstraint & ros1_msg,
  moveit_msgs::msg::OrientationConstraint & ros2_msg);

template<>
void
Factory<
  moveit_msgs::OrientationConstraint,
  moveit_msgs::msg::OrientationConstraint
>::convert_2_to_1(
  const moveit_msgs::msg::OrientationConstraint & ros2_msg,
  moveit_msgs::OrientationConstraint & ros1_msg);


template<>
void
Factory<
  moveit_msgs::PositionConstraint,
  moveit_msgs::msg::PositionConstraint
>::convert_1_to_2(
  const moveit_msgs::PositionConstraint & ros1_msg,
  moveit_msgs::msg::PositionConstraint & ros2_msg);

template<>
void
Factory<
  moveit_msgs::PositionConstraint,
  moveit_msgs::msg::PositionConstraint
>::convert_2_to_1(
  const moveit_msgs::msg::PositionConstraint & ros2_msg,
  moveit_msgs::PositionConstraint & ros1_msg);


template<>
void
Factory<
  moveit_msgs::VisibilityConstraint,
  moveit_msgs::msg::VisibilityConstraint
>::convert_1_to_2(
  const moveit_msgs::VisibilityConstraint & ros1_msg,
  moveit_msgs::msg::VisibilityConstraint & ros2_msg);

template<>
void
Factory<
  moveit_msgs::VisibilityConstraint,
  moveit_msgs::msg::VisibilityConstraint
>::convert_2_to_1(
  const moveit_msgs::msg::VisibilityConstraint & ros2_msg,
  moveit_msgs::VisibilityConstraint & ros1_msg);


template<>
void
Factory<
  moveit_msgs::WorkspaceParameters,
  moveit_msgs::msg::WorkspaceParameters
>::convert_1_to_2(
  const moveit_msgs::WorkspaceParameters & ros1_msg,
  moveit_msgs::msg::WorkspaceParameters & ros2_msg);

template<>
void
Factory<
  moveit_msgs::WorkspaceParameters,
  moveit_msgs::msg::WorkspaceParameters
>::convert_2_to_1(
  const moveit_msgs::msg::WorkspaceParameters & ros2_msg,
  moveit_msgs::WorkspaceParameters & ros1_msg);


template<>
void
Factory<
  moveit_msgs::PlanningSceneWorld,
  moveit_msgs::msg::PlanningSceneWorld
>::convert_1_to_2(
  const moveit_msgs::PlanningSceneWorld & ros1_msg,
  moveit_msgs::msg::PlanningSceneWorld & ros2_msg);

template<>
void
Factory<
  moveit_msgs::PlanningSceneWorld,
  moveit_msgs::msg::PlanningSceneWorld
>::convert_2_to_1(
  const moveit_msgs::msg::PlanningSceneWorld & ros2_msg,
  moveit_msgs::PlanningSceneWorld & ros1_msg);


template<>
void
Factory<
  moveit_msgs::RobotState,
  moveit_msgs::msg::RobotState
>::convert_1_to_2(
  const moveit_msgs::RobotState & ros1_msg,
  moveit_msgs::msg::RobotState & ros2_msg);

template<>
void
Factory<
  moveit_msgs::RobotState,
  moveit_msgs::msg::RobotState
>::convert_2_to_1(
  const moveit_msgs::msg::RobotState & ros2_msg,
  moveit_msgs::RobotState & ros1_msg);


template<>
void
Factory<
  moveit_msgs::DisplayRobotState,
  moveit_msgs::msg::DisplayRobotState
>::convert_1_to_2(
  const moveit_msgs::DisplayRobotState & ros1_msg,
  moveit_msgs::msg::DisplayRobotState & ros2_msg);

template<>
void
Factory<
  moveit_msgs::DisplayRobotState,
  moveit_msgs::msg::DisplayRobotState
>::convert_2_to_1(
  const moveit_msgs::msg::DisplayRobotState & ros2_msg,
  moveit_msgs::DisplayRobotState & ros1_msg);


template<>
void
Factory<
  moveit_msgs::DisplayTrajectory,
  moveit_msgs::msg::DisplayTrajectory
>::convert_1_to_2(
  const moveit_msgs::DisplayTrajectory & ros1_msg,
  moveit_msgs::msg::DisplayTrajectory & ros2_msg);

template<>
void
Factory<
  moveit_msgs::DisplayTrajectory,
  moveit_msgs::msg::DisplayTrajectory
>::convert_2_to_1(
  const moveit_msgs::msg::DisplayTrajectory & ros2_msg,
  moveit_msgs::DisplayTrajectory & ros1_msg);


template<>
void
Factory<
  moveit_msgs::MotionPlanDetailedResponse,
  moveit_msgs::msg::MotionPlanDetailedResponse
>::convert_1_to_2(
  const moveit_msgs::MotionPlanDetailedResponse & ros1_msg,
  moveit_msgs::msg::MotionPlanDetailedResponse & ros2_msg);

template<>
void
Factory<
  moveit_msgs::MotionPlanDetailedResponse,
  moveit_msgs::msg::MotionPlanDetailedResponse
>::convert_2_to_1(
  const moveit_msgs::msg::MotionPlanDetailedResponse & ros2_msg,
  moveit_msgs::MotionPlanDetailedResponse & ros1_msg);


template<>
void
Factory<
  moveit_msgs::MotionPlanRequest,
  moveit_msgs::msg::MotionPlanRequest
>::convert_1_to_2(
  const moveit_msgs::MotionPlanRequest & ros1_msg,
  moveit_msgs::msg::MotionPlanRequest & ros2_msg);

template<>
void
Factory<
  moveit_msgs::MotionPlanRequest,
  moveit_msgs::msg::MotionPlanRequest
>::convert_2_to_1(
  const moveit_msgs::msg::MotionPlanRequest & ros2_msg,
  moveit_msgs::MotionPlanRequest & ros1_msg);


template<>
void
Factory<
  moveit_msgs::MotionSequenceItem,
  moveit_msgs::msg::MotionSequenceItem
>::convert_1_to_2(
  const moveit_msgs::MotionSequenceItem & ros1_msg,
  moveit_msgs::msg::MotionSequenceItem & ros2_msg);

template<>
void
Factory<
  moveit_msgs::MotionSequenceItem,
  moveit_msgs::msg::MotionSequenceItem
>::convert_2_to_1(
  const moveit_msgs::msg::MotionSequenceItem & ros2_msg,
  moveit_msgs::MotionSequenceItem & ros1_msg);


template<>
void
Factory<
  moveit_msgs::MotionSequenceResponse,
  moveit_msgs::msg::MotionSequenceResponse
>::convert_1_to_2(
  const moveit_msgs::MotionSequenceResponse & ros1_msg,
  moveit_msgs::msg::MotionSequenceResponse & ros2_msg);

template<>
void
Factory<
  moveit_msgs::MotionSequenceResponse,
  moveit_msgs::msg::MotionSequenceResponse
>::convert_2_to_1(
  const moveit_msgs::msg::MotionSequenceResponse & ros2_msg,
  moveit_msgs::MotionSequenceResponse & ros1_msg);


template<>
void
Factory<
  moveit_msgs::PlanningScene,
  moveit_msgs::msg::PlanningScene
>::convert_1_to_2(
  const moveit_msgs::PlanningScene & ros1_msg,
  moveit_msgs::msg::PlanningScene & ros2_msg);

template<>
void
Factory<
  moveit_msgs::PlanningScene,
  moveit_msgs::msg::PlanningScene
>::convert_2_to_1(
  const moveit_msgs::msg::PlanningScene & ros2_msg,
  moveit_msgs::PlanningScene & ros1_msg);


template<>
void
Factory<
  moveit_msgs::PlanningOptions,
  moveit_msgs::msg::PlanningOptions
>::convert_1_to_2(
  const moveit_msgs::PlanningOptions & ros1_msg,
  moveit_msgs::msg::PlanningOptions & ros2_msg);

template<>
void
Factory<
  moveit_msgs::PlanningOptions,
  moveit_msgs::msg::PlanningOptions
>::convert_2_to_1(
  const moveit_msgs::msg::PlanningOptions & ros2_msg,
  moveit_msgs::PlanningOptions & ros1_msg);


template<>
void
Factory<
  moveit_msgs::PositionIKRequest,
  moveit_msgs::msg::PositionIKRequest
>::convert_1_to_2(
  const moveit_msgs::PositionIKRequest & ros1_msg,
  moveit_msgs::msg::PositionIKRequest & ros2_msg);

template<>
void
Factory<
  moveit_msgs::PositionIKRequest,
  moveit_msgs::msg::PositionIKRequest
>::convert_2_to_1(
  const moveit_msgs::msg::PositionIKRequest & ros2_msg,
  moveit_msgs::PositionIKRequest & ros1_msg);


template<>
void
Factory<
  moveit_msgs::AttachedCollisionObject,
  moveit_msgs::msg::AttachedCollisionObject
>::convert_1_to_2(
  const moveit_msgs::AttachedCollisionObject & ros1_msg,
  moveit_msgs::msg::AttachedCollisionObject & ros2_msg);

template<>
void
Factory<
  moveit_msgs::AttachedCollisionObject,
  moveit_msgs::msg::AttachedCollisionObject
>::convert_2_to_1(
  const moveit_msgs::msg::AttachedCollisionObject & ros2_msg,
  moveit_msgs::AttachedCollisionObject & ros1_msg);


template<>
void
Factory<
  moveit_msgs::Grasp,
  moveit_msgs::msg::Grasp
>::convert_1_to_2(
  const moveit_msgs::Grasp & ros1_msg,
  moveit_msgs::msg::Grasp & ros2_msg);

template<>
void
Factory<
  moveit_msgs::Grasp,
  moveit_msgs::msg::Grasp
>::convert_2_to_1(
  const moveit_msgs::msg::Grasp & ros2_msg,
  moveit_msgs::Grasp & ros1_msg);


template<>
void
Factory<
  moveit_msgs::PlaceLocation,
  moveit_msgs::msg::PlaceLocation
>::convert_1_to_2(
  const moveit_msgs::PlaceLocation & ros1_msg,
  moveit_msgs::msg::PlaceLocation & ros2_msg);

template<>
void
Factory<
  moveit_msgs::PlaceLocation,
  moveit_msgs::msg::PlaceLocation
>::convert_2_to_1(
  const moveit_msgs::msg::PlaceLocation & ros2_msg,
  moveit_msgs::PlaceLocation & ros1_msg);


template<>
void
Factory<
  moveit_msgs::RobotTrajectory,
  moveit_msgs::msg::RobotTrajectory
>::convert_1_to_2(
  const moveit_msgs::RobotTrajectory & ros1_msg,
  moveit_msgs::msg::RobotTrajectory & ros2_msg);

template<>
void
Factory<
  moveit_msgs::RobotTrajectory,
  moveit_msgs::msg::RobotTrajectory
>::convert_2_to_1(
  const moveit_msgs::msg::RobotTrajectory & ros2_msg,
  moveit_msgs::RobotTrajectory & ros1_msg);


template<>
void
Factory<
  moveit_msgs::MotionPlanResponse,
  moveit_msgs::msg::MotionPlanResponse
>::convert_1_to_2(
  const moveit_msgs::MotionPlanResponse & ros1_msg,
  moveit_msgs::msg::MotionPlanResponse & ros2_msg);

template<>
void
Factory<
  moveit_msgs::MotionPlanResponse,
  moveit_msgs::msg::MotionPlanResponse
>::convert_2_to_1(
  const moveit_msgs::msg::MotionPlanResponse & ros2_msg,
  moveit_msgs::MotionPlanResponse & ros1_msg);

}  // namespace ros1_bridge
