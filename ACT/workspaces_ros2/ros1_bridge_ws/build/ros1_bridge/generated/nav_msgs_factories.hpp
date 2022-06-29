// generated from ros1_bridge/resource/pkg_factories.hpp.em

#include <memory>
#include <string>

#include <ros1_bridge/factory.hpp>

// include ROS 1 messages
#include <nav_msgs/MapMetaData.h>
#include <nav_msgs/GridCells.h>
#include <nav_msgs/OccupancyGrid.h>
#include <nav_msgs/Odometry.h>
#include <nav_msgs/Path.h>

// include ROS 2 messages
#include <nav_msgs/msg/map_meta_data.hpp>
#include <nav_msgs/msg/grid_cells.hpp>
#include <nav_msgs/msg/occupancy_grid.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <nav_msgs/msg/path.hpp>

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_nav_msgs(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_nav_msgs__msg__GridCells(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_nav_msgs__msg__MapMetaData(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_nav_msgs__msg__OccupancyGrid(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_nav_msgs__msg__Odometry(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_nav_msgs__msg__Path(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_nav_msgs(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_nav_msgs__srv__GetMap(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_nav_msgs__srv__GetPlan(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_nav_msgs__srv__SetMap(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

// conversion functions for available interfaces

template<>
void
Factory<
  nav_msgs::MapMetaData,
  nav_msgs::msg::MapMetaData
>::convert_1_to_2(
  const nav_msgs::MapMetaData & ros1_msg,
  nav_msgs::msg::MapMetaData & ros2_msg);

template<>
void
Factory<
  nav_msgs::MapMetaData,
  nav_msgs::msg::MapMetaData
>::convert_2_to_1(
  const nav_msgs::msg::MapMetaData & ros2_msg,
  nav_msgs::MapMetaData & ros1_msg);


template<>
void
Factory<
  nav_msgs::GridCells,
  nav_msgs::msg::GridCells
>::convert_1_to_2(
  const nav_msgs::GridCells & ros1_msg,
  nav_msgs::msg::GridCells & ros2_msg);

template<>
void
Factory<
  nav_msgs::GridCells,
  nav_msgs::msg::GridCells
>::convert_2_to_1(
  const nav_msgs::msg::GridCells & ros2_msg,
  nav_msgs::GridCells & ros1_msg);


template<>
void
Factory<
  nav_msgs::OccupancyGrid,
  nav_msgs::msg::OccupancyGrid
>::convert_1_to_2(
  const nav_msgs::OccupancyGrid & ros1_msg,
  nav_msgs::msg::OccupancyGrid & ros2_msg);

template<>
void
Factory<
  nav_msgs::OccupancyGrid,
  nav_msgs::msg::OccupancyGrid
>::convert_2_to_1(
  const nav_msgs::msg::OccupancyGrid & ros2_msg,
  nav_msgs::OccupancyGrid & ros1_msg);


template<>
void
Factory<
  nav_msgs::Odometry,
  nav_msgs::msg::Odometry
>::convert_1_to_2(
  const nav_msgs::Odometry & ros1_msg,
  nav_msgs::msg::Odometry & ros2_msg);

template<>
void
Factory<
  nav_msgs::Odometry,
  nav_msgs::msg::Odometry
>::convert_2_to_1(
  const nav_msgs::msg::Odometry & ros2_msg,
  nav_msgs::Odometry & ros1_msg);


template<>
void
Factory<
  nav_msgs::Path,
  nav_msgs::msg::Path
>::convert_1_to_2(
  const nav_msgs::Path & ros1_msg,
  nav_msgs::msg::Path & ros2_msg);

template<>
void
Factory<
  nav_msgs::Path,
  nav_msgs::msg::Path
>::convert_2_to_1(
  const nav_msgs::msg::Path & ros2_msg,
  nav_msgs::Path & ros1_msg);

}  // namespace ros1_bridge
