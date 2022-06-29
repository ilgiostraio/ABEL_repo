// generated from ros1_bridge/resource/pkg_factories.cpp.em

#include "sensor_msgs_factories.hpp"

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_sensor_msgs(const std::string & ros1_type_name, const std::string & ros2_type_name)
{
  std::shared_ptr<FactoryInterface> factory;
  factory = get_factory_sensor_msgs__msg__BatteryState(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_sensor_msgs__msg__CameraInfo(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_sensor_msgs__msg__ChannelFloat32(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_sensor_msgs__msg__CompressedImage(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_sensor_msgs__msg__FluidPressure(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_sensor_msgs__msg__Illuminance(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_sensor_msgs__msg__Image(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_sensor_msgs__msg__Imu(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_sensor_msgs__msg__JointState(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_sensor_msgs__msg__Joy(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_sensor_msgs__msg__JoyFeedback(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_sensor_msgs__msg__JoyFeedbackArray(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_sensor_msgs__msg__LaserEcho(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_sensor_msgs__msg__LaserScan(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_sensor_msgs__msg__MagneticField(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_sensor_msgs__msg__MultiDOFJointState(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_sensor_msgs__msg__MultiEchoLaserScan(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_sensor_msgs__msg__NavSatFix(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_sensor_msgs__msg__NavSatStatus(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_sensor_msgs__msg__PointCloud(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_sensor_msgs__msg__PointCloud2(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_sensor_msgs__msg__PointField(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_sensor_msgs__msg__Range(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_sensor_msgs__msg__RegionOfInterest(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_sensor_msgs__msg__RelativeHumidity(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_sensor_msgs__msg__Temperature(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  factory = get_factory_sensor_msgs__msg__TimeReference(ros1_type_name, ros2_type_name);
  if (factory) {
    return factory;
  }
  return std::shared_ptr<FactoryInterface>();
}

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_sensor_msgs(const std::string & ros_id, const std::string & package_name, const std::string & service_name)
{
  std::unique_ptr<ServiceFactoryInterface> factory;
  factory = get_service_factory_sensor_msgs__srv__SetCameraInfo(ros_id, package_name, service_name);
  if (factory) {
    return factory;
  }
  return nullptr;
}
}  // namespace ros1_bridge
