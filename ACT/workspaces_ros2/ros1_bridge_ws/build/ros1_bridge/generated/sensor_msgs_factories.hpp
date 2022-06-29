// generated from ros1_bridge/resource/pkg_factories.hpp.em

#include <memory>
#include <string>

#include <ros1_bridge/factory.hpp>

// include ROS 1 messages
#include <sensor_msgs/ChannelFloat32.h>
#include <sensor_msgs/JoyFeedback.h>
#include <sensor_msgs/JoyFeedbackArray.h>
#include <sensor_msgs/LaserEcho.h>
#include <sensor_msgs/NavSatStatus.h>
#include <sensor_msgs/PointField.h>
#include <sensor_msgs/RegionOfInterest.h>
#include <sensor_msgs/BatteryState.h>
#include <sensor_msgs/CameraInfo.h>
#include <sensor_msgs/CompressedImage.h>
#include <sensor_msgs/FluidPressure.h>
#include <sensor_msgs/Illuminance.h>
#include <sensor_msgs/Image.h>
#include <sensor_msgs/Imu.h>
#include <sensor_msgs/JointState.h>
#include <sensor_msgs/Joy.h>
#include <sensor_msgs/LaserScan.h>
#include <sensor_msgs/MagneticField.h>
#include <sensor_msgs/MultiDOFJointState.h>
#include <sensor_msgs/MultiEchoLaserScan.h>
#include <sensor_msgs/NavSatFix.h>
#include <sensor_msgs/PointCloud.h>
#include <sensor_msgs/PointCloud2.h>
#include <sensor_msgs/Range.h>
#include <sensor_msgs/RelativeHumidity.h>
#include <sensor_msgs/Temperature.h>
#include <sensor_msgs/TimeReference.h>

// include ROS 2 messages
#include <sensor_msgs/msg/channel_float32.hpp>
#include <sensor_msgs/msg/joy_feedback.hpp>
#include <sensor_msgs/msg/joy_feedback_array.hpp>
#include <sensor_msgs/msg/laser_echo.hpp>
#include <sensor_msgs/msg/nav_sat_status.hpp>
#include <sensor_msgs/msg/point_field.hpp>
#include <sensor_msgs/msg/region_of_interest.hpp>
#include <sensor_msgs/msg/battery_state.hpp>
#include <sensor_msgs/msg/camera_info.hpp>
#include <sensor_msgs/msg/compressed_image.hpp>
#include <sensor_msgs/msg/fluid_pressure.hpp>
#include <sensor_msgs/msg/illuminance.hpp>
#include <sensor_msgs/msg/image.hpp>
#include <sensor_msgs/msg/imu.hpp>
#include <sensor_msgs/msg/joint_state.hpp>
#include <sensor_msgs/msg/joy.hpp>
#include <sensor_msgs/msg/laser_scan.hpp>
#include <sensor_msgs/msg/magnetic_field.hpp>
#include <sensor_msgs/msg/multi_dof_joint_state.hpp>
#include <sensor_msgs/msg/multi_echo_laser_scan.hpp>
#include <sensor_msgs/msg/nav_sat_fix.hpp>
#include <sensor_msgs/msg/point_cloud.hpp>
#include <sensor_msgs/msg/point_cloud2.hpp>
#include <sensor_msgs/msg/range.hpp>
#include <sensor_msgs/msg/relative_humidity.hpp>
#include <sensor_msgs/msg/temperature.hpp>
#include <sensor_msgs/msg/time_reference.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_sensor_msgs(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_sensor_msgs__msg__BatteryState(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_sensor_msgs__msg__CameraInfo(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_sensor_msgs__msg__ChannelFloat32(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_sensor_msgs__msg__CompressedImage(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_sensor_msgs__msg__FluidPressure(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_sensor_msgs__msg__Illuminance(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_sensor_msgs__msg__Image(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_sensor_msgs__msg__Imu(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_sensor_msgs__msg__JointState(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_sensor_msgs__msg__Joy(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_sensor_msgs__msg__JoyFeedback(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_sensor_msgs__msg__JoyFeedbackArray(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_sensor_msgs__msg__LaserEcho(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_sensor_msgs__msg__LaserScan(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_sensor_msgs__msg__MagneticField(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_sensor_msgs__msg__MultiDOFJointState(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_sensor_msgs__msg__MultiEchoLaserScan(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_sensor_msgs__msg__NavSatFix(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_sensor_msgs__msg__NavSatStatus(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_sensor_msgs__msg__PointCloud(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_sensor_msgs__msg__PointCloud2(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_sensor_msgs__msg__PointField(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_sensor_msgs__msg__Range(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_sensor_msgs__msg__RegionOfInterest(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_sensor_msgs__msg__RelativeHumidity(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_sensor_msgs__msg__Temperature(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_sensor_msgs__msg__TimeReference(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_sensor_msgs(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_sensor_msgs__srv__SetCameraInfo(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

// conversion functions for available interfaces

template<>
void
Factory<
  sensor_msgs::ChannelFloat32,
  sensor_msgs::msg::ChannelFloat32
>::convert_1_to_2(
  const sensor_msgs::ChannelFloat32 & ros1_msg,
  sensor_msgs::msg::ChannelFloat32 & ros2_msg);

template<>
void
Factory<
  sensor_msgs::ChannelFloat32,
  sensor_msgs::msg::ChannelFloat32
>::convert_2_to_1(
  const sensor_msgs::msg::ChannelFloat32 & ros2_msg,
  sensor_msgs::ChannelFloat32 & ros1_msg);


template<>
void
Factory<
  sensor_msgs::JoyFeedback,
  sensor_msgs::msg::JoyFeedback
>::convert_1_to_2(
  const sensor_msgs::JoyFeedback & ros1_msg,
  sensor_msgs::msg::JoyFeedback & ros2_msg);

template<>
void
Factory<
  sensor_msgs::JoyFeedback,
  sensor_msgs::msg::JoyFeedback
>::convert_2_to_1(
  const sensor_msgs::msg::JoyFeedback & ros2_msg,
  sensor_msgs::JoyFeedback & ros1_msg);


template<>
void
Factory<
  sensor_msgs::JoyFeedbackArray,
  sensor_msgs::msg::JoyFeedbackArray
>::convert_1_to_2(
  const sensor_msgs::JoyFeedbackArray & ros1_msg,
  sensor_msgs::msg::JoyFeedbackArray & ros2_msg);

template<>
void
Factory<
  sensor_msgs::JoyFeedbackArray,
  sensor_msgs::msg::JoyFeedbackArray
>::convert_2_to_1(
  const sensor_msgs::msg::JoyFeedbackArray & ros2_msg,
  sensor_msgs::JoyFeedbackArray & ros1_msg);


template<>
void
Factory<
  sensor_msgs::LaserEcho,
  sensor_msgs::msg::LaserEcho
>::convert_1_to_2(
  const sensor_msgs::LaserEcho & ros1_msg,
  sensor_msgs::msg::LaserEcho & ros2_msg);

template<>
void
Factory<
  sensor_msgs::LaserEcho,
  sensor_msgs::msg::LaserEcho
>::convert_2_to_1(
  const sensor_msgs::msg::LaserEcho & ros2_msg,
  sensor_msgs::LaserEcho & ros1_msg);


template<>
void
Factory<
  sensor_msgs::NavSatStatus,
  sensor_msgs::msg::NavSatStatus
>::convert_1_to_2(
  const sensor_msgs::NavSatStatus & ros1_msg,
  sensor_msgs::msg::NavSatStatus & ros2_msg);

template<>
void
Factory<
  sensor_msgs::NavSatStatus,
  sensor_msgs::msg::NavSatStatus
>::convert_2_to_1(
  const sensor_msgs::msg::NavSatStatus & ros2_msg,
  sensor_msgs::NavSatStatus & ros1_msg);


template<>
void
Factory<
  sensor_msgs::PointField,
  sensor_msgs::msg::PointField
>::convert_1_to_2(
  const sensor_msgs::PointField & ros1_msg,
  sensor_msgs::msg::PointField & ros2_msg);

template<>
void
Factory<
  sensor_msgs::PointField,
  sensor_msgs::msg::PointField
>::convert_2_to_1(
  const sensor_msgs::msg::PointField & ros2_msg,
  sensor_msgs::PointField & ros1_msg);


template<>
void
Factory<
  sensor_msgs::RegionOfInterest,
  sensor_msgs::msg::RegionOfInterest
>::convert_1_to_2(
  const sensor_msgs::RegionOfInterest & ros1_msg,
  sensor_msgs::msg::RegionOfInterest & ros2_msg);

template<>
void
Factory<
  sensor_msgs::RegionOfInterest,
  sensor_msgs::msg::RegionOfInterest
>::convert_2_to_1(
  const sensor_msgs::msg::RegionOfInterest & ros2_msg,
  sensor_msgs::RegionOfInterest & ros1_msg);


template<>
void
Factory<
  sensor_msgs::BatteryState,
  sensor_msgs::msg::BatteryState
>::convert_1_to_2(
  const sensor_msgs::BatteryState & ros1_msg,
  sensor_msgs::msg::BatteryState & ros2_msg);

template<>
void
Factory<
  sensor_msgs::BatteryState,
  sensor_msgs::msg::BatteryState
>::convert_2_to_1(
  const sensor_msgs::msg::BatteryState & ros2_msg,
  sensor_msgs::BatteryState & ros1_msg);


template<>
void
Factory<
  sensor_msgs::CameraInfo,
  sensor_msgs::msg::CameraInfo
>::convert_1_to_2(
  const sensor_msgs::CameraInfo & ros1_msg,
  sensor_msgs::msg::CameraInfo & ros2_msg);

template<>
void
Factory<
  sensor_msgs::CameraInfo,
  sensor_msgs::msg::CameraInfo
>::convert_2_to_1(
  const sensor_msgs::msg::CameraInfo & ros2_msg,
  sensor_msgs::CameraInfo & ros1_msg);


template<>
void
Factory<
  sensor_msgs::CompressedImage,
  sensor_msgs::msg::CompressedImage
>::convert_1_to_2(
  const sensor_msgs::CompressedImage & ros1_msg,
  sensor_msgs::msg::CompressedImage & ros2_msg);

template<>
void
Factory<
  sensor_msgs::CompressedImage,
  sensor_msgs::msg::CompressedImage
>::convert_2_to_1(
  const sensor_msgs::msg::CompressedImage & ros2_msg,
  sensor_msgs::CompressedImage & ros1_msg);


template<>
void
Factory<
  sensor_msgs::FluidPressure,
  sensor_msgs::msg::FluidPressure
>::convert_1_to_2(
  const sensor_msgs::FluidPressure & ros1_msg,
  sensor_msgs::msg::FluidPressure & ros2_msg);

template<>
void
Factory<
  sensor_msgs::FluidPressure,
  sensor_msgs::msg::FluidPressure
>::convert_2_to_1(
  const sensor_msgs::msg::FluidPressure & ros2_msg,
  sensor_msgs::FluidPressure & ros1_msg);


template<>
void
Factory<
  sensor_msgs::Illuminance,
  sensor_msgs::msg::Illuminance
>::convert_1_to_2(
  const sensor_msgs::Illuminance & ros1_msg,
  sensor_msgs::msg::Illuminance & ros2_msg);

template<>
void
Factory<
  sensor_msgs::Illuminance,
  sensor_msgs::msg::Illuminance
>::convert_2_to_1(
  const sensor_msgs::msg::Illuminance & ros2_msg,
  sensor_msgs::Illuminance & ros1_msg);


template<>
void
Factory<
  sensor_msgs::Image,
  sensor_msgs::msg::Image
>::convert_1_to_2(
  const sensor_msgs::Image & ros1_msg,
  sensor_msgs::msg::Image & ros2_msg);

template<>
void
Factory<
  sensor_msgs::Image,
  sensor_msgs::msg::Image
>::convert_2_to_1(
  const sensor_msgs::msg::Image & ros2_msg,
  sensor_msgs::Image & ros1_msg);


template<>
void
Factory<
  sensor_msgs::Imu,
  sensor_msgs::msg::Imu
>::convert_1_to_2(
  const sensor_msgs::Imu & ros1_msg,
  sensor_msgs::msg::Imu & ros2_msg);

template<>
void
Factory<
  sensor_msgs::Imu,
  sensor_msgs::msg::Imu
>::convert_2_to_1(
  const sensor_msgs::msg::Imu & ros2_msg,
  sensor_msgs::Imu & ros1_msg);


template<>
void
Factory<
  sensor_msgs::JointState,
  sensor_msgs::msg::JointState
>::convert_1_to_2(
  const sensor_msgs::JointState & ros1_msg,
  sensor_msgs::msg::JointState & ros2_msg);

template<>
void
Factory<
  sensor_msgs::JointState,
  sensor_msgs::msg::JointState
>::convert_2_to_1(
  const sensor_msgs::msg::JointState & ros2_msg,
  sensor_msgs::JointState & ros1_msg);


template<>
void
Factory<
  sensor_msgs::Joy,
  sensor_msgs::msg::Joy
>::convert_1_to_2(
  const sensor_msgs::Joy & ros1_msg,
  sensor_msgs::msg::Joy & ros2_msg);

template<>
void
Factory<
  sensor_msgs::Joy,
  sensor_msgs::msg::Joy
>::convert_2_to_1(
  const sensor_msgs::msg::Joy & ros2_msg,
  sensor_msgs::Joy & ros1_msg);


template<>
void
Factory<
  sensor_msgs::LaserScan,
  sensor_msgs::msg::LaserScan
>::convert_1_to_2(
  const sensor_msgs::LaserScan & ros1_msg,
  sensor_msgs::msg::LaserScan & ros2_msg);

template<>
void
Factory<
  sensor_msgs::LaserScan,
  sensor_msgs::msg::LaserScan
>::convert_2_to_1(
  const sensor_msgs::msg::LaserScan & ros2_msg,
  sensor_msgs::LaserScan & ros1_msg);


template<>
void
Factory<
  sensor_msgs::MagneticField,
  sensor_msgs::msg::MagneticField
>::convert_1_to_2(
  const sensor_msgs::MagneticField & ros1_msg,
  sensor_msgs::msg::MagneticField & ros2_msg);

template<>
void
Factory<
  sensor_msgs::MagneticField,
  sensor_msgs::msg::MagneticField
>::convert_2_to_1(
  const sensor_msgs::msg::MagneticField & ros2_msg,
  sensor_msgs::MagneticField & ros1_msg);


template<>
void
Factory<
  sensor_msgs::MultiDOFJointState,
  sensor_msgs::msg::MultiDOFJointState
>::convert_1_to_2(
  const sensor_msgs::MultiDOFJointState & ros1_msg,
  sensor_msgs::msg::MultiDOFJointState & ros2_msg);

template<>
void
Factory<
  sensor_msgs::MultiDOFJointState,
  sensor_msgs::msg::MultiDOFJointState
>::convert_2_to_1(
  const sensor_msgs::msg::MultiDOFJointState & ros2_msg,
  sensor_msgs::MultiDOFJointState & ros1_msg);


template<>
void
Factory<
  sensor_msgs::MultiEchoLaserScan,
  sensor_msgs::msg::MultiEchoLaserScan
>::convert_1_to_2(
  const sensor_msgs::MultiEchoLaserScan & ros1_msg,
  sensor_msgs::msg::MultiEchoLaserScan & ros2_msg);

template<>
void
Factory<
  sensor_msgs::MultiEchoLaserScan,
  sensor_msgs::msg::MultiEchoLaserScan
>::convert_2_to_1(
  const sensor_msgs::msg::MultiEchoLaserScan & ros2_msg,
  sensor_msgs::MultiEchoLaserScan & ros1_msg);


template<>
void
Factory<
  sensor_msgs::NavSatFix,
  sensor_msgs::msg::NavSatFix
>::convert_1_to_2(
  const sensor_msgs::NavSatFix & ros1_msg,
  sensor_msgs::msg::NavSatFix & ros2_msg);

template<>
void
Factory<
  sensor_msgs::NavSatFix,
  sensor_msgs::msg::NavSatFix
>::convert_2_to_1(
  const sensor_msgs::msg::NavSatFix & ros2_msg,
  sensor_msgs::NavSatFix & ros1_msg);


template<>
void
Factory<
  sensor_msgs::PointCloud,
  sensor_msgs::msg::PointCloud
>::convert_1_to_2(
  const sensor_msgs::PointCloud & ros1_msg,
  sensor_msgs::msg::PointCloud & ros2_msg);

template<>
void
Factory<
  sensor_msgs::PointCloud,
  sensor_msgs::msg::PointCloud
>::convert_2_to_1(
  const sensor_msgs::msg::PointCloud & ros2_msg,
  sensor_msgs::PointCloud & ros1_msg);


template<>
void
Factory<
  sensor_msgs::PointCloud2,
  sensor_msgs::msg::PointCloud2
>::convert_1_to_2(
  const sensor_msgs::PointCloud2 & ros1_msg,
  sensor_msgs::msg::PointCloud2 & ros2_msg);

template<>
void
Factory<
  sensor_msgs::PointCloud2,
  sensor_msgs::msg::PointCloud2
>::convert_2_to_1(
  const sensor_msgs::msg::PointCloud2 & ros2_msg,
  sensor_msgs::PointCloud2 & ros1_msg);


template<>
void
Factory<
  sensor_msgs::Range,
  sensor_msgs::msg::Range
>::convert_1_to_2(
  const sensor_msgs::Range & ros1_msg,
  sensor_msgs::msg::Range & ros2_msg);

template<>
void
Factory<
  sensor_msgs::Range,
  sensor_msgs::msg::Range
>::convert_2_to_1(
  const sensor_msgs::msg::Range & ros2_msg,
  sensor_msgs::Range & ros1_msg);


template<>
void
Factory<
  sensor_msgs::RelativeHumidity,
  sensor_msgs::msg::RelativeHumidity
>::convert_1_to_2(
  const sensor_msgs::RelativeHumidity & ros1_msg,
  sensor_msgs::msg::RelativeHumidity & ros2_msg);

template<>
void
Factory<
  sensor_msgs::RelativeHumidity,
  sensor_msgs::msg::RelativeHumidity
>::convert_2_to_1(
  const sensor_msgs::msg::RelativeHumidity & ros2_msg,
  sensor_msgs::RelativeHumidity & ros1_msg);


template<>
void
Factory<
  sensor_msgs::Temperature,
  sensor_msgs::msg::Temperature
>::convert_1_to_2(
  const sensor_msgs::Temperature & ros1_msg,
  sensor_msgs::msg::Temperature & ros2_msg);

template<>
void
Factory<
  sensor_msgs::Temperature,
  sensor_msgs::msg::Temperature
>::convert_2_to_1(
  const sensor_msgs::msg::Temperature & ros2_msg,
  sensor_msgs::Temperature & ros1_msg);


template<>
void
Factory<
  sensor_msgs::TimeReference,
  sensor_msgs::msg::TimeReference
>::convert_1_to_2(
  const sensor_msgs::TimeReference & ros1_msg,
  sensor_msgs::msg::TimeReference & ros2_msg);

template<>
void
Factory<
  sensor_msgs::TimeReference,
  sensor_msgs::msg::TimeReference
>::convert_2_to_1(
  const sensor_msgs::msg::TimeReference & ros2_msg,
  sensor_msgs::TimeReference & ros1_msg);

}  // namespace ros1_bridge
