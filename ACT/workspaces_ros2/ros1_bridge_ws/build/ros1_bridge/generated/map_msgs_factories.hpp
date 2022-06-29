// generated from ros1_bridge/resource/pkg_factories.hpp.em

#include <memory>
#include <string>

#include <ros1_bridge/factory.hpp>

// include ROS 1 messages
#include <map_msgs/ProjectedMapInfo.h>
#include <map_msgs/OccupancyGridUpdate.h>
#include <map_msgs/ProjectedMap.h>
#include <map_msgs/PointCloud2Update.h>

// include ROS 2 messages
#include <map_msgs/msg/projected_map_info.hpp>
#include <map_msgs/msg/occupancy_grid_update.hpp>
#include <map_msgs/msg/projected_map.hpp>
#include <map_msgs/msg/point_cloud2_update.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_map_msgs(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_map_msgs__msg__OccupancyGridUpdate(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_map_msgs__msg__PointCloud2Update(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_map_msgs__msg__ProjectedMap(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_map_msgs__msg__ProjectedMapInfo(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_map_msgs(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_map_msgs__srv__GetMapROI(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_map_msgs__srv__GetPointMap(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_map_msgs__srv__GetPointMapROI(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_map_msgs__srv__ProjectedMapsInfo(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_map_msgs__srv__SaveMap(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_map_msgs__srv__SetMapProjections(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

// conversion functions for available interfaces

template<>
void
Factory<
  map_msgs::ProjectedMapInfo,
  map_msgs::msg::ProjectedMapInfo
>::convert_1_to_2(
  const map_msgs::ProjectedMapInfo & ros1_msg,
  map_msgs::msg::ProjectedMapInfo & ros2_msg);

template<>
void
Factory<
  map_msgs::ProjectedMapInfo,
  map_msgs::msg::ProjectedMapInfo
>::convert_2_to_1(
  const map_msgs::msg::ProjectedMapInfo & ros2_msg,
  map_msgs::ProjectedMapInfo & ros1_msg);


template<>
void
Factory<
  map_msgs::OccupancyGridUpdate,
  map_msgs::msg::OccupancyGridUpdate
>::convert_1_to_2(
  const map_msgs::OccupancyGridUpdate & ros1_msg,
  map_msgs::msg::OccupancyGridUpdate & ros2_msg);

template<>
void
Factory<
  map_msgs::OccupancyGridUpdate,
  map_msgs::msg::OccupancyGridUpdate
>::convert_2_to_1(
  const map_msgs::msg::OccupancyGridUpdate & ros2_msg,
  map_msgs::OccupancyGridUpdate & ros1_msg);


template<>
void
Factory<
  map_msgs::ProjectedMap,
  map_msgs::msg::ProjectedMap
>::convert_1_to_2(
  const map_msgs::ProjectedMap & ros1_msg,
  map_msgs::msg::ProjectedMap & ros2_msg);

template<>
void
Factory<
  map_msgs::ProjectedMap,
  map_msgs::msg::ProjectedMap
>::convert_2_to_1(
  const map_msgs::msg::ProjectedMap & ros2_msg,
  map_msgs::ProjectedMap & ros1_msg);


template<>
void
Factory<
  map_msgs::PointCloud2Update,
  map_msgs::msg::PointCloud2Update
>::convert_1_to_2(
  const map_msgs::PointCloud2Update & ros1_msg,
  map_msgs::msg::PointCloud2Update & ros2_msg);

template<>
void
Factory<
  map_msgs::PointCloud2Update,
  map_msgs::msg::PointCloud2Update
>::convert_2_to_1(
  const map_msgs::msg::PointCloud2Update & ros2_msg,
  map_msgs::PointCloud2Update & ros1_msg);

}  // namespace ros1_bridge
