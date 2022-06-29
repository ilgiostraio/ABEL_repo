// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "moveit_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <moveit_msgs/ApplyPlanningScene.h>

// include ROS 2 services
#include <moveit_msgs/srv/apply_planning_scene.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__srv__ApplyPlanningScene(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__ApplyPlanningScene(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "moveit_msgs" &&
      service_name == "ApplyPlanningScene"
    ) || (
      ros_id == "ros2" &&
      package_name == "moveit_msgs" &&
      service_name == "srv/ApplyPlanningScene"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      moveit_msgs::ApplyPlanningScene,
      moveit_msgs::srv::ApplyPlanningScene
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  moveit_msgs::ApplyPlanningScene,
  moveit_msgs::srv::ApplyPlanningScene
>::translate_1_to_2(
  const moveit_msgs::ApplyPlanningScene::Request& req1,
  moveit_msgs::srv::ApplyPlanningScene::Request& req2
) {
  auto & scene1 = req1.scene;
  auto & scene2 = req2.scene;
  Factory<moveit_msgs::PlanningScene,moveit_msgs::msg::PlanningScene>::convert_1_to_2(scene1, scene2);
}

template <>
void ServiceFactory<
  moveit_msgs::ApplyPlanningScene,
  moveit_msgs::srv::ApplyPlanningScene
>::translate_1_to_2(
  const moveit_msgs::ApplyPlanningScene::Response& req1,
  moveit_msgs::srv::ApplyPlanningScene::Response& req2
) {
  auto & success1 = req1.success;
  auto & success2 = req2.success;
  success2 = success1;
}

template <>
void ServiceFactory<
  moveit_msgs::ApplyPlanningScene,
  moveit_msgs::srv::ApplyPlanningScene
>::translate_2_to_1(
  const moveit_msgs::srv::ApplyPlanningScene::Request& req2,
  moveit_msgs::ApplyPlanningScene::Request& req1
) {
  auto & scene1 = req1.scene;
  auto & scene2 = req2.scene;
  Factory<moveit_msgs::PlanningScene,moveit_msgs::msg::PlanningScene>::convert_2_to_1(scene2, scene1);
}

template <>
void ServiceFactory<
  moveit_msgs::ApplyPlanningScene,
  moveit_msgs::srv::ApplyPlanningScene
>::translate_2_to_1(
  const moveit_msgs::srv::ApplyPlanningScene::Response& req2,
  moveit_msgs::ApplyPlanningScene::Response& req1
) {
  auto & success1 = req1.success;
  auto & success2 = req2.success;
  success1 = success2;
}

}  // namespace ros1_bridge
