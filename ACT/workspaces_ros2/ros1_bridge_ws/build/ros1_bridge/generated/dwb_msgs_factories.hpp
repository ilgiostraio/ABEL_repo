// generated from ros1_bridge/resource/pkg_factories.hpp.em

#include <memory>
#include <string>

#include <ros1_bridge/factory.hpp>

// include ROS 1 messages

// include ROS 2 messages

namespace ros1_bridge
{

std::shared_ptr<FactoryInterface>
get_factory_dwb_msgs(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_dwb_msgs__msg__CriticScore(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_dwb_msgs__msg__LocalPlanEvaluation(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_dwb_msgs__msg__Trajectory2D(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::shared_ptr<FactoryInterface>
get_factory_dwb_msgs__msg__TrajectoryScore(const std::string & ros1_type_name, const std::string & ros2_type_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_dwb_msgs(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_dwb_msgs__srv__DebugLocalPlan(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_dwb_msgs__srv__GenerateTrajectory(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_dwb_msgs__srv__GenerateTwists(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_dwb_msgs__srv__GetCriticScore(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

std::unique_ptr<ServiceFactoryInterface>
get_service_factory_dwb_msgs__srv__ScoreTrajectory(const std::string & ros_id, const std::string & package_name, const std::string & service_name);

// conversion functions for available interfaces
}  // namespace ros1_bridge
