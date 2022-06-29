// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "moveit_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <moveit_msgs/GetPlanningScene.h>

// include ROS 2 services
#include <moveit_msgs/srv/get_planning_scene.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__srv__GetPlanningScene(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__srv__GetPlanningScene(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "moveit_msgs" &&
      service_name == "GetPlanningScene"
    ) || (
      ros_id == "ros2" &&
      package_name == "moveit_msgs" &&
      service_name == "srv/GetPlanningScene"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      moveit_msgs::GetPlanningScene,
      moveit_msgs::srv::GetPlanningScene
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  moveit_msgs::GetPlanningScene,
  moveit_msgs::srv::GetPlanningScene
>::translate_1_to_2(
  const moveit_msgs::GetPlanningScene::Request& req1,
  moveit_msgs::srv::GetPlanningScene::Request& req2
) {
  auto & components1 = req1.components;
  auto & components2 = req2.components;
  Factory<moveit_msgs::PlanningSceneComponents,moveit_msgs::msg::PlanningSceneComponents>::convert_1_to_2(components1, components2);
}

template <>
void ServiceFactory<
  moveit_msgs::GetPlanningScene,
  moveit_msgs::srv::GetPlanningScene
>::translate_1_to_2(
  const moveit_msgs::GetPlanningScene::Response& req1,
  moveit_msgs::srv::GetPlanningScene::Response& req2
) {
  auto & scene1 = req1.scene;
  auto & scene2 = req2.scene;
  Factory<moveit_msgs::PlanningScene,moveit_msgs::msg::PlanningScene>::convert_1_to_2(scene1, scene2);
}

template <>
void ServiceFactory<
  moveit_msgs::GetPlanningScene,
  moveit_msgs::srv::GetPlanningScene
>::translate_2_to_1(
  const moveit_msgs::srv::GetPlanningScene::Request& req2,
  moveit_msgs::GetPlanningScene::Request& req1
) {
  auto & components1 = req1.components;
  auto & components2 = req2.components;
  Factory<moveit_msgs::PlanningSceneComponents,moveit_msgs::msg::PlanningSceneComponents>::convert_2_to_1(components2, components1);
}

template <>
void ServiceFactory<
  moveit_msgs::GetPlanningScene,
  moveit_msgs::srv::GetPlanningScene
>::translate_2_to_1(
  const moveit_msgs::srv::GetPlanningScene::Response& req2,
  moveit_msgs::GetPlanningScene::Response& req1
) {
  auto & scene1 = req1.scene;
  auto & scene2 = req2.scene;
  Factory<moveit_msgs::PlanningScene,moveit_msgs::msg::PlanningScene>::convert_2_to_1(scene2, scene1);
}

}  // namespace ros1_bridge
