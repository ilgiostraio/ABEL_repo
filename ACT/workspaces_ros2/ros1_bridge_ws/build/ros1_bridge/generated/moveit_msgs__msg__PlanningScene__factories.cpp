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
get_factory_moveit_msgs__msg__PlanningScene(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  // mapping from string to specialized template
  if (
    (ros1_type_name == "moveit_msgs/PlanningScene" ||
     ros1_type_name == "") &&
    ros2_type_name == "moveit_msgs/msg/PlanningScene")
  {
    return std::make_shared<
      Factory<
        moveit_msgs::PlanningScene,
        moveit_msgs::msg::PlanningScene
      >
    >("moveit_msgs/PlanningScene", ros2_type_name);
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_moveit_msgs__msg__PlanningScene(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
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
  moveit_msgs::PlanningScene,
  moveit_msgs::msg::PlanningScene
>::convert_1_to_2(
  const moveit_msgs::PlanningScene & ros1_msg,
  moveit_msgs::msg::PlanningScene & ros2_msg)
{

  // convert non-array field
  // convert primitive field
  ros2_msg.name = ros1_msg.name;

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::RobotState,
    moveit_msgs::msg::RobotState
  >::convert_1_to_2(
    ros1_msg.robot_state, ros2_msg.robot_state);

  // convert non-array field
  // convert primitive field
  ros2_msg.robot_model_name = ros1_msg.robot_model_name;

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.fixed_frame_transforms.resize(ros1_msg.fixed_frame_transforms.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.fixed_frame_transforms.cbegin();
    auto ros2_it = ros2_msg.fixed_frame_transforms.begin();
    for (
      ;
      ros1_it != ros1_msg.fixed_frame_transforms.cend() &&
      ros2_it != ros2_msg.fixed_frame_transforms.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        geometry_msgs::TransformStamped,
        geometry_msgs::msg::TransformStamped
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::AllowedCollisionMatrix,
    moveit_msgs::msg::AllowedCollisionMatrix
  >::convert_1_to_2(
    ros1_msg.allowed_collision_matrix, ros2_msg.allowed_collision_matrix);

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.link_padding.resize(ros1_msg.link_padding.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.link_padding.cbegin();
    auto ros2_it = ros2_msg.link_padding.begin();
    for (
      ;
      ros1_it != ros1_msg.link_padding.cend() &&
      ros2_it != ros2_msg.link_padding.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        moveit_msgs::LinkPadding,
        moveit_msgs::msg::LinkPadding
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.link_scale.resize(ros1_msg.link_scale.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.link_scale.cbegin();
    auto ros2_it = ros2_msg.link_scale.begin();
    for (
      ;
      ros1_it != ros1_msg.link_scale.cend() &&
      ros2_it != ros2_msg.link_scale.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        moveit_msgs::LinkScale,
        moveit_msgs::msg::LinkScale
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }

  // convert array or sequence field
  // dynamically sized sequence, ensure destination sequence/vector size is large enough
  // resize ros2 field to match the ros1 field
  ros2_msg.object_colors.resize(ros1_msg.object_colors.size());
  // copy element wise since the type is different
  {
    auto ros1_it = ros1_msg.object_colors.cbegin();
    auto ros2_it = ros2_msg.object_colors.begin();
    for (
      ;
      ros1_it != ros1_msg.object_colors.cend() &&
      ros2_it != ros2_msg.object_colors.end();
      ++ros1_it, ++ros2_it
    )
    {
      // convert sub message element
      Factory<
        moveit_msgs::ObjectColor,
        moveit_msgs::msg::ObjectColor
      >::convert_1_to_2(
        *ros1_it, *ros2_it);
    }
  }

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::PlanningSceneWorld,
    moveit_msgs::msg::PlanningSceneWorld
  >::convert_1_to_2(
    ros1_msg.world, ros2_msg.world);

  // convert non-array field
  // convert primitive field
  ros2_msg.is_diff = ros1_msg.is_diff;
}

template<>
void
Factory<
  moveit_msgs::PlanningScene,
  moveit_msgs::msg::PlanningScene
>::convert_2_to_1(
  const moveit_msgs::msg::PlanningScene & ros2_msg,
  moveit_msgs::PlanningScene & ros1_msg)
{

  // convert non-array field
  // convert primitive field
  ros1_msg.name = ros2_msg.name;

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::RobotState,
    moveit_msgs::msg::RobotState
  >::convert_2_to_1(
    ros2_msg.robot_state, ros1_msg.robot_state);

  // convert non-array field
  // convert primitive field
  ros1_msg.robot_model_name = ros2_msg.robot_model_name;

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.fixed_frame_transforms.resize(ros2_msg.fixed_frame_transforms.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.fixed_frame_transforms.cbegin();
    auto ros1_it = ros1_msg.fixed_frame_transforms.begin();
    for (
      ;
      ros2_it != ros2_msg.fixed_frame_transforms.cend() &&
      ros1_it != ros1_msg.fixed_frame_transforms.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        geometry_msgs::TransformStamped,
        geometry_msgs::msg::TransformStamped
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::AllowedCollisionMatrix,
    moveit_msgs::msg::AllowedCollisionMatrix
  >::convert_2_to_1(
    ros2_msg.allowed_collision_matrix, ros1_msg.allowed_collision_matrix);

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.link_padding.resize(ros2_msg.link_padding.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.link_padding.cbegin();
    auto ros1_it = ros1_msg.link_padding.begin();
    for (
      ;
      ros2_it != ros2_msg.link_padding.cend() &&
      ros1_it != ros1_msg.link_padding.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        moveit_msgs::LinkPadding,
        moveit_msgs::msg::LinkPadding
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.link_scale.resize(ros2_msg.link_scale.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.link_scale.cbegin();
    auto ros1_it = ros1_msg.link_scale.begin();
    for (
      ;
      ros2_it != ros2_msg.link_scale.cend() &&
      ros1_it != ros1_msg.link_scale.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        moveit_msgs::LinkScale,
        moveit_msgs::msg::LinkScale
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }

  // convert array or sequence field
  // dynamically sized sequence, ensure destination vector size is large enough
  // resize ros1 field to match the ros2 field
  ros1_msg.object_colors.resize(ros2_msg.object_colors.size());
  // copy element wise since the type is different
  {
    auto ros2_it = ros2_msg.object_colors.cbegin();
    auto ros1_it = ros1_msg.object_colors.begin();
    for (
      ;
      ros2_it != ros2_msg.object_colors.cend() &&
      ros1_it != ros1_msg.object_colors.end();
      ++ros2_it, ++ros1_it
    )
    {
      // convert sub message element
      Factory<
        moveit_msgs::ObjectColor,
        moveit_msgs::msg::ObjectColor
      >::convert_2_to_1(
        *ros2_it, *ros1_it);
    }
  }

  // convert non-array field
  // convert sub message field
  Factory<
    moveit_msgs::PlanningSceneWorld,
    moveit_msgs::msg::PlanningSceneWorld
  >::convert_2_to_1(
    ros2_msg.world, ros1_msg.world);

  // convert non-array field
  // convert primitive field
  ros1_msg.is_diff = ros2_msg.is_diff;
}
}  // namespace ros1_bridge
