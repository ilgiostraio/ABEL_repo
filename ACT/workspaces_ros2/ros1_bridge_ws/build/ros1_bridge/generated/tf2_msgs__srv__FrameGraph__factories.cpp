// generated from ros1_bridge/resource/interface_factories.cpp.em

#include "tf2_msgs_factories.hpp"

#include <algorithm>

#include "rclcpp/rclcpp.hpp"

// include builtin interfaces
#include <ros1_bridge/convert_builtin_interfaces.hpp>

// include ROS 1 services
#include <tf2_msgs/FrameGraph.h>

// include ROS 2 services
#include <tf2_msgs/srv/frame_graph.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_tf2_msgs__srv__FrameGraph(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  (void)ros1_type_name;
  (void)ros2_type_name;
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_tf2_msgs__srv__FrameGraph(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  if (
    (
      ros_id == "ros1" &&
      package_name == "tf2_msgs" &&
      service_name == "FrameGraph"
    ) || (
      ros_id == "ros2" &&
      package_name == "tf2_msgs" &&
      service_name == "srv/FrameGraph"
    )
  ) {
    return std::unique_ptr<ServiceFactoryInterface>(new ServiceFactory<
      tf2_msgs::FrameGraph,
      tf2_msgs::srv::FrameGraph
    >);
  }
  return nullptr;
}
// conversion functions for available interfaces

template <>
void ServiceFactory<
  tf2_msgs::FrameGraph,
  tf2_msgs::srv::FrameGraph
>::translate_1_to_2(
  const tf2_msgs::FrameGraph::Request& req1,
  tf2_msgs::srv::FrameGraph::Request& req2
) {
}

template <>
void ServiceFactory<
  tf2_msgs::FrameGraph,
  tf2_msgs::srv::FrameGraph
>::translate_1_to_2(
  const tf2_msgs::FrameGraph::Response& req1,
  tf2_msgs::srv::FrameGraph::Response& req2
) {
  auto & frame_yaml1 = req1.frame_yaml;
  auto & frame_yaml2 = req2.frame_yaml;
  frame_yaml2 = frame_yaml1;
}

template <>
void ServiceFactory<
  tf2_msgs::FrameGraph,
  tf2_msgs::srv::FrameGraph
>::translate_2_to_1(
  const tf2_msgs::srv::FrameGraph::Request& req2,
  tf2_msgs::FrameGraph::Request& req1
) {
}

template <>
void ServiceFactory<
  tf2_msgs::FrameGraph,
  tf2_msgs::srv::FrameGraph
>::translate_2_to_1(
  const tf2_msgs::srv::FrameGraph::Response& req2,
  tf2_msgs::FrameGraph::Response& req1
) {
  auto & frame_yaml1 = req1.frame_yaml;
  auto & frame_yaml2 = req2.frame_yaml;
  frame_yaml1 = frame_yaml2;
}

}  // namespace ros1_bridge
