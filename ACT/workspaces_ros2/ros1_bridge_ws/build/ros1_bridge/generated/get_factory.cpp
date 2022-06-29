// generated from ros1_bridge/resource/get_factory.cpp.em

#include "ros1_bridge/factory.hpp"
#include "ros1_bridge/builtin_interfaces_factories.hpp"

#include "action_msgs_factories.hpp"
#include "action_tutorials_interfaces_factories.hpp"
#include "actionlib_msgs_factories.hpp"
#include "cartographer_ros_msgs_factories.hpp"
#include "composition_interfaces_factories.hpp"
#include "control_msgs_factories.hpp"
#include "diagnostic_msgs_factories.hpp"
#include "dwb_msgs_factories.hpp"
#include "example_interfaces_factories.hpp"
#include "gazebo_msgs_factories.hpp"
#include "geometry_msgs_factories.hpp"
#include "lifecycle_msgs_factories.hpp"
#include "logging_demo_factories.hpp"
#include "map_msgs_factories.hpp"
#include "move_base_msgs_factories.hpp"
#include "moveit_msgs_factories.hpp"
#include "nav2_msgs_factories.hpp"
#include "nav_2d_msgs_factories.hpp"
#include "nav_msgs_factories.hpp"
#include "object_recognition_msgs_factories.hpp"
#include "octomap_msgs_factories.hpp"
#include "pcl_msgs_factories.hpp"
#include "pendulum_msgs_factories.hpp"
#include "rcl_interfaces_factories.hpp"
#include "rmw_dds_common_factories.hpp"
#include "rosgraph_msgs_factories.hpp"
#include "sensor_msgs_factories.hpp"
#include "shape_msgs_factories.hpp"
#include "statistics_msgs_factories.hpp"
#include "std_msgs_factories.hpp"
#include "std_srvs_factories.hpp"
#include "stereo_msgs_factories.hpp"
#include "test_msgs_factories.hpp"
#include "tf2_msgs_factories.hpp"
#include "trajectory_msgs_factories.hpp"
#include "turtlebot3_msgs_factories.hpp"
#include "turtlesim_factories.hpp"
#include "unique_identifier_msgs_factories.hpp"
#include "visualization_msgs_factories.hpp"

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  std::shared_ptr<FactoryInterface> factory;
  factory = get_factory_builtin_interfaces(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_action_msgs(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_action_tutorials_interfaces(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_actionlib_msgs(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_cartographer_ros_msgs(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_composition_interfaces(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_control_msgs(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_diagnostic_msgs(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_dwb_msgs(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_example_interfaces(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_gazebo_msgs(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_geometry_msgs(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_lifecycle_msgs(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_logging_demo(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_map_msgs(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_move_base_msgs(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_moveit_msgs(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_nav2_msgs(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_nav_2d_msgs(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_nav_msgs(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_object_recognition_msgs(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_octomap_msgs(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_pcl_msgs(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_pendulum_msgs(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_rcl_interfaces(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_rmw_dds_common(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_rosgraph_msgs(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_sensor_msgs(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_shape_msgs(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_statistics_msgs(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_std_msgs(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_std_srvs(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_stereo_msgs(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_test_msgs(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_tf2_msgs(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_trajectory_msgs(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_turtlebot3_msgs(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_turtlesim(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_unique_identifier_msgs(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_visualization_msgs(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  throw std::runtime_error("No template specialization for the pair");
}

std::unique_ptr<ServiceFactoryInterface> get_service_factory(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  std::unique_ptr<ServiceFactoryInterface> factory;
  factory = get_service_factory_action_msgs(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_action_tutorials_interfaces(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_actionlib_msgs(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_cartographer_ros_msgs(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_composition_interfaces(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_control_msgs(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_diagnostic_msgs(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_dwb_msgs(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_example_interfaces(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_gazebo_msgs(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_geometry_msgs(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_lifecycle_msgs(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_logging_demo(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_map_msgs(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_move_base_msgs(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_moveit_msgs(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_nav2_msgs(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_nav_2d_msgs(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_nav_msgs(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_object_recognition_msgs(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_octomap_msgs(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_pcl_msgs(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_pendulum_msgs(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_rcl_interfaces(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_rmw_dds_common(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_rosgraph_msgs(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_sensor_msgs(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_shape_msgs(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_statistics_msgs(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_std_msgs(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_std_srvs(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_stereo_msgs(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_test_msgs(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_tf2_msgs(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_trajectory_msgs(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_turtlebot3_msgs(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_turtlesim(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_unique_identifier_msgs(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  factory = get_service_factory_visualization_msgs(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  // fprintf(stderr, "No template specialization for the service %s:%s/%s\n", ros_id.data(), package_name.data(), service_name.data());
  return factory;
}

}  // namespace ros1_bridge
