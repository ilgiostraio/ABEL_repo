// generated from ros1_bridge/resource/pkg_factories.cpp.em

#include "geometry_msgs_factories.hpp"

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_geometry_msgs(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  std::shared_ptr<FactoryInterface> factory;
  factory = get_factory_geometry_msgs__msg__Accel(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_geometry_msgs__msg__AccelStamped(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_geometry_msgs__msg__AccelWithCovariance(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_geometry_msgs__msg__AccelWithCovarianceStamped(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_geometry_msgs__msg__Inertia(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_geometry_msgs__msg__InertiaStamped(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_geometry_msgs__msg__Point(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_geometry_msgs__msg__Point32(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_geometry_msgs__msg__PointStamped(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_geometry_msgs__msg__Polygon(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_geometry_msgs__msg__PolygonStamped(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_geometry_msgs__msg__Pose(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_geometry_msgs__msg__Pose2D(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_geometry_msgs__msg__PoseArray(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_geometry_msgs__msg__PoseStamped(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_geometry_msgs__msg__PoseWithCovariance(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_geometry_msgs__msg__PoseWithCovarianceStamped(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_geometry_msgs__msg__Quaternion(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_geometry_msgs__msg__QuaternionStamped(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_geometry_msgs__msg__Transform(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_geometry_msgs__msg__TransformStamped(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_geometry_msgs__msg__Twist(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_geometry_msgs__msg__TwistStamped(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_geometry_msgs__msg__TwistWithCovariance(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_geometry_msgs__msg__TwistWithCovarianceStamped(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_geometry_msgs__msg__Vector3(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_geometry_msgs__msg__Vector3Stamped(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_geometry_msgs__msg__Wrench(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_geometry_msgs__msg__WrenchStamped(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_geometry_msgs(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  (void)ros_id;
  (void)package_name;
  (void)service_name;
  return nullptr;
}
}  // namespace ros1_bridge
