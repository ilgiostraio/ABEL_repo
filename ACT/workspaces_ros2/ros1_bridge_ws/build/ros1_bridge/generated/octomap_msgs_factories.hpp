// generated from ros1_bridge/resource/pkg_factories.hpp.em

#include <memory>
#include <string>

#include <ros1_bridge/factory.hpp>

// include ROS 1 messages
#include <octomap_msgs/Octomap.h>
#include <octomap_msgs/OctomapWithPose.h>

// include ROS 2 messages
#include <octomap_msgs/msg/octomap.hpp>
#include <octomap_msgs/msg/octomap_with_pose.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_octomap_msgs(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_octomap_msgs__msg__Octomap(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_octomap_msgs__msg__OctomapWithPose(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_octomap_msgs(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_octomap_msgs__srv__BoundingBoxQuery(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_octomap_msgs__srv__GetOctomap(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

// conversion functions for available interfaces

template<>
void
Factory<
  octomap_msgs::Octomap,
  octomap_msgs::msg::Octomap
>::convert_1_to_2(
  const octomap_msgs::Octomap & ros1_msg,
  octomap_msgs::msg::Octomap & ros2_msg);

template<>
void
Factory<
  octomap_msgs::Octomap,
  octomap_msgs::msg::Octomap
>::convert_2_to_1(
  const octomap_msgs::msg::Octomap & ros2_msg,
  octomap_msgs::Octomap & ros1_msg);


template<>
void
Factory<
  octomap_msgs::OctomapWithPose,
  octomap_msgs::msg::OctomapWithPose
>::convert_1_to_2(
  const octomap_msgs::OctomapWithPose & ros1_msg,
  octomap_msgs::msg::OctomapWithPose & ros2_msg);

template<>
void
Factory<
  octomap_msgs::OctomapWithPose,
  octomap_msgs::msg::OctomapWithPose
>::convert_2_to_1(
  const octomap_msgs::msg::OctomapWithPose & ros2_msg,
  octomap_msgs::OctomapWithPose & ros1_msg);

}  // namespace ros1_bridge
