// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "moveit_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <moveit_msgs/GraspPlanning.h>

// include ROS 2 services
#include <moveit_msgs/srv/grasp_planning.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__srv__GraspPlanning(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__GraspPlanning(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "moveit_msgs" &&
      service_name == "GraspPlanning"
    ) || (
      ros_id == "ros2" &&
      package_name == "moveit_msgs" &&
      service_name == "srv/GraspPlanning"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      moveit_msgs::GraspPlanning,
      moveit_msgs::srv::GraspPlanning
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  moveit_msgs::GraspPlanning,
  moveit_msgs::srv::GraspPlanning
>::translate_1_to_2(
  const moveit_msgs::GraspPlanning::Request& req1,
  moveit_msgs::srv::GraspPlanning::Request& req2
) {
  auto & group_name1 = req1.group_name;
  auto & group_name2 = req2.group_name;
  group_name2 = group_name1;
  auto & target1 = req1.target;
  auto & target2 = req2.target;
  Factory<moveit_msgs::CollisionObject,moveit_msgs::msg::CollisionObject>::convert_1_to_2(target1, target2);
  req2.support_surfaces.resize(req1.support_surfaces.size());
  auto support_surfaces1_it = req1.support_surfaces.begin();
  auto support_surfaces2_it = req2.support_surfaces.begin();
  while (
    support_surfaces1_it != req1.support_surfaces.end() &&
    support_surfaces2_it != req2.support_surfaces.end()
  ) {
    auto & support_surfaces1 = *(support_surfaces1_it++);
    auto & support_surfaces2 = *(support_surfaces2_it++);
  support_surfaces2 = support_surfaces1;
  }
  req2.candidate_grasps.resize(req1.candidate_grasps.size());
  auto candidate_grasps1_it = req1.candidate_grasps.begin();
  auto candidate_grasps2_it = req2.candidate_grasps.begin();
  while (
    candidate_grasps1_it != req1.candidate_grasps.end() &&
    candidate_grasps2_it != req2.candidate_grasps.end()
  ) {
    auto & candidate_grasps1 = *(candidate_grasps1_it++);
    auto & candidate_grasps2 = *(candidate_grasps2_it++);
  Factory<moveit_msgs::Grasp,moveit_msgs::msg::Grasp>::convert_1_to_2(candidate_grasps1, candidate_grasps2);
  }
  req2.movable_obstacles.resize(req1.movable_obstacles.size());
  auto movable_obstacles1_it = req1.movable_obstacles.begin();
  auto movable_obstacles2_it = req2.movable_obstacles.begin();
  while (
    movable_obstacles1_it != req1.movable_obstacles.end() &&
    movable_obstacles2_it != req2.movable_obstacles.end()
  ) {
    auto & movable_obstacles1 = *(movable_obstacles1_it++);
    auto & movable_obstacles2 = *(movable_obstacles2_it++);
  Factory<moveit_msgs::CollisionObject,moveit_msgs::msg::CollisionObject>::convert_1_to_2(movable_obstacles1, movable_obstacles2);
  }
}

template <>
void ServiceFactory<
  moveit_msgs::GraspPlanning,
  moveit_msgs::srv::GraspPlanning
>::translate_1_to_2(
  const moveit_msgs::GraspPlanning::Response& req1,
  moveit_msgs::srv::GraspPlanning::Response& req2
) {
  req2.grasps.resize(req1.grasps.size());
  auto grasps1_it = req1.grasps.begin();
  auto grasps2_it = req2.grasps.begin();
  while (
    grasps1_it != req1.grasps.end() &&
    grasps2_it != req2.grasps.end()
  ) {
    auto & grasps1 = *(grasps1_it++);
    auto & grasps2 = *(grasps2_it++);
  Factory<moveit_msgs::Grasp,moveit_msgs::msg::Grasp>::convert_1_to_2(grasps1, grasps2);
  }
  auto & error_code1 = req1.error_code;
  auto & error_code2 = req2.error_code;
  Factory<moveit_msgs::MoveItErrorCodes,moveit_msgs::msg::MoveItErrorCodes>::convert_1_to_2(error_code1, error_code2);
}

template <>
void ServiceFactory<
  moveit_msgs::GraspPlanning,
  moveit_msgs::srv::GraspPlanning
>::translate_2_to_1(
  const moveit_msgs::srv::GraspPlanning::Request& req2,
  moveit_msgs::GraspPlanning::Request& req1
) {
  auto & group_name1 = req1.group_name;
  auto & group_name2 = req2.group_name;
  group_name1 = group_name2;
  auto & target1 = req1.target;
  auto & target2 = req2.target;
  Factory<moveit_msgs::CollisionObject,moveit_msgs::msg::CollisionObject>::convert_2_to_1(target2, target1);
  req1.support_surfaces.resize(req2.support_surfaces.size());
  auto support_surfaces1_it = req1.support_surfaces.begin();
  auto support_surfaces2_it = req2.support_surfaces.begin();
  while (
    support_surfaces1_it != req1.support_surfaces.end() &&
    support_surfaces2_it != req2.support_surfaces.end()
  ) {
    auto & support_surfaces1 = *(support_surfaces1_it++);
    auto & support_surfaces2 = *(support_surfaces2_it++);
  support_surfaces1 = support_surfaces2;
  }
  req1.candidate_grasps.resize(req2.candidate_grasps.size());
  auto candidate_grasps1_it = req1.candidate_grasps.begin();
  auto candidate_grasps2_it = req2.candidate_grasps.begin();
  while (
    candidate_grasps1_it != req1.candidate_grasps.end() &&
    candidate_grasps2_it != req2.candidate_grasps.end()
  ) {
    auto & candidate_grasps1 = *(candidate_grasps1_it++);
    auto & candidate_grasps2 = *(candidate_grasps2_it++);
  Factory<moveit_msgs::Grasp,moveit_msgs::msg::Grasp>::convert_2_to_1(candidate_grasps2, candidate_grasps1);
  }
  req1.movable_obstacles.resize(req2.movable_obstacles.size());
  auto movable_obstacles1_it = req1.movable_obstacles.begin();
  auto movable_obstacles2_it = req2.movable_obstacles.begin();
  while (
    movable_obstacles1_it != req1.movable_obstacles.end() &&
    movable_obstacles2_it != req2.movable_obstacles.end()
  ) {
    auto & movable_obstacles1 = *(movable_obstacles1_it++);
    auto & movable_obstacles2 = *(movable_obstacles2_it++);
  Factory<moveit_msgs::CollisionObject,moveit_msgs::msg::CollisionObject>::convert_2_to_1(movable_obstacles2, movable_obstacles1);
  }
}

template <>
void ServiceFactory<
  moveit_msgs::GraspPlanning,
  moveit_msgs::srv::GraspPlanning
>::translate_2_to_1(
  const moveit_msgs::srv::GraspPlanning::Response& req2,
  moveit_msgs::GraspPlanning::Response& req1
) {
  req1.grasps.resize(req2.grasps.size());
  auto grasps1_it = req1.grasps.begin();
  auto grasps2_it = req2.grasps.begin();
  while (
    grasps1_it != req1.grasps.end() &&
    grasps2_it != req2.grasps.end()
  ) {
    auto & grasps1 = *(grasps1_it++);
    auto & grasps2 = *(grasps2_it++);
  Factory<moveit_msgs::Grasp,moveit_msgs::msg::Grasp>::convert_2_to_1(grasps2, grasps1);
  }
  auto & error_code1 = req1.error_code;
  auto & error_code2 = req2.error_code;
  Factory<moveit_msgs::MoveItErrorCodes,moveit_msgs::msg::MoveItErrorCodes>::convert_2_to_1(error_code2, error_code1);
}

}  // namespace ros1_bridge
