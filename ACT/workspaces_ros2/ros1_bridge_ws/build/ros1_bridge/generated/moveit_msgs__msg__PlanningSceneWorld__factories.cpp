// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "moveit_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services

// include ROS 2 services

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_moveit_msgs__msg__PlanningSceneWorld(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "moveit_msgs/PlanningSceneWorld" ||
     ros1_type_name == "") &&
    ros2_type_name == "moveit_msgs/msg/PlanningSceneWorld")
  {
    return std::make_shared<
      Factory<
        moveit_msgs::PlanningSceneWorld,
        moveit_msgs::msg::PlanningSceneWorld
      >
    >("moveit_msgs/PlanningSceneWorld", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__msg__PlanningSceneWorld(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  (void)ros_id;
  (void)package_name;
  (void)service_name;
  return nullptr;
}
// conversion functions for available interfaces

template<>
void
Factory<
  moveit_msgs::PlanningSceneWorld,
  moveit_msgs::msg::PlanningSceneWorld
>::convert_1_to_2(
  const moveit_msgs::PlanningSceneWorld & ros1_msg,
  moveit_msgs::msg::PlanningSceneWorld & ros2_msg)
{

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.collision_objects.resize(ros1_msg.collision_objects.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.collision_objects.cbegin();
    auto ros2_it = ros2_msg.collision_objects.begin();
    for (
      ;
      ros1_it != ros1_msg.collision_objects.cend() &&
      ros2_it != ros2_msg.collision_objects.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        moveit_msgs::CollisionObject,
        moveit_msgs::msg::CollisionObject
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }

  // convert non-array field
  // convert sub message field
  Factory<
    octomap_msgs::OctomapWithPose,
    octomap_msgs::msg::OctomapWithPose
  >::convert_1_to_2(
    ros1_msg.octomap, ros2_msg.octomap);
}

template<>
void
Factory<
  moveit_msgs::PlanningSceneWorld,
  moveit_msgs::msg::PlanningSceneWorld
>::convert_2_to_1(
  const moveit_msgs::msg::PlanningSceneWorld & ros2_msg,
  moveit_msgs::PlanningSceneWorld & ros1_msg)
{

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.collision_objects.resize(ros2_msg.collision_objects.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.collision_objects.cbegin();
    auto ros1_it = ros1_msg.collision_objects.begin();
    for (
      ;
      ros2_it != ros2_msg.collision_objects.cend() &&
      ros1_it != ros1_msg.collision_objects.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        moveit_msgs::CollisionObject,
        moveit_msgs::msg::CollisionObject
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }

  // convert non-array field
  // convert sub message field
  Factory<
    octomap_msgs::OctomapWithPose,
    octomap_msgs::msg::OctomapWithPose
  >::convert_2_to_1(
    ros2_msg.octomap, ros1_msg.octomap);
}
}  // namespace ros1_bridge
