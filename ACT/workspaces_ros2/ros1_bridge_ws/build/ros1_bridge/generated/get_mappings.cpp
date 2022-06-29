// generated from ros1_bridge/resource/get_mappings.cpp.em

#include <map>
#include <string>

namespace ros1_bridge
{

bool
get_1to2_mapping(const std::string & ros1_type_name, std::string & ros2_type_name)
{

  if (ros1_type_name == "std_msgs/Duration")
  {
    ros2_type_name = "builtin_interfaces/msg/Duration";
    return true;
  }
  if (ros1_type_name == "std_msgs/Time")
  {
    ros2_type_name = "builtin_interfaces/msg/Time";
    return true;
  }
  if (ros1_type_name == "actionlib_msgs/GoalID")
  {
    ros2_type_name = "actionlib_msgs/msg/GoalID";
    return true;
  }
  if (ros1_type_name == "actionlib_msgs/GoalStatus")
  {
    ros2_type_name = "actionlib_msgs/msg/GoalStatus";
    return true;
  }
  if (ros1_type_name == "cartographer_ros_msgs/StatusCode")
  {
    ros2_type_name = "cartographer_ros_msgs/msg/StatusCode";
    return true;
  }
  if (ros1_type_name == "cartographer_ros_msgs/StatusResponse")
  {
    ros2_type_name = "cartographer_ros_msgs/msg/StatusResponse";
    return true;
  }
  if (ros1_type_name == "control_msgs/GripperCommand")
  {
    ros2_type_name = "control_msgs/msg/GripperCommand";
    return true;
  }
  if (ros1_type_name == "control_msgs/JointTolerance")
  {
    ros2_type_name = "control_msgs/msg/JointTolerance";
    return true;
  }
  if (ros1_type_name == "diagnostic_msgs/DiagnosticStatus")
  {
    ros2_type_name = "diagnostic_msgs/msg/DiagnosticStatus";
    return true;
  }
  if (ros1_type_name == "diagnostic_msgs/KeyValue")
  {
    ros2_type_name = "diagnostic_msgs/msg/KeyValue";
    return true;
  }
  if (ros1_type_name == "gazebo_msgs/LinkStates")
  {
    ros2_type_name = "gazebo_msgs/msg/LinkStates";
    return true;
  }
  if (ros1_type_name == "gazebo_msgs/ModelStates")
  {
    ros2_type_name = "gazebo_msgs/msg/ModelStates";
    return true;
  }
  if (ros1_type_name == "gazebo_msgs/ODEJointProperties")
  {
    ros2_type_name = "gazebo_msgs/msg/ODEJointProperties";
    return true;
  }
  if (ros1_type_name == "gazebo_msgs/ODEPhysics")
  {
    ros2_type_name = "gazebo_msgs/msg/ODEPhysics";
    return true;
  }
  if (ros1_type_name == "geometry_msgs/Point")
  {
    ros2_type_name = "geometry_msgs/msg/Point";
    return true;
  }
  if (ros1_type_name == "geometry_msgs/Point32")
  {
    ros2_type_name = "geometry_msgs/msg/Point32";
    return true;
  }
  if (ros1_type_name == "geometry_msgs/Polygon")
  {
    ros2_type_name = "geometry_msgs/msg/Polygon";
    return true;
  }
  if (ros1_type_name == "geometry_msgs/Pose2D")
  {
    ros2_type_name = "geometry_msgs/msg/Pose2D";
    return true;
  }
  if (ros1_type_name == "geometry_msgs/Quaternion")
  {
    ros2_type_name = "geometry_msgs/msg/Quaternion";
    return true;
  }
  if (ros1_type_name == "geometry_msgs/Pose")
  {
    ros2_type_name = "geometry_msgs/msg/Pose";
    return true;
  }
  if (ros1_type_name == "cartographer_ros_msgs/LandmarkEntry")
  {
    ros2_type_name = "cartographer_ros_msgs/msg/LandmarkEntry";
    return true;
  }
  if (ros1_type_name == "cartographer_ros_msgs/SubmapEntry")
  {
    ros2_type_name = "cartographer_ros_msgs/msg/SubmapEntry";
    return true;
  }
  if (ros1_type_name == "cartographer_ros_msgs/SubmapTexture")
  {
    ros2_type_name = "cartographer_ros_msgs/msg/SubmapTexture";
    return true;
  }
  if (ros1_type_name == "geometry_msgs/PoseWithCovariance")
  {
    ros2_type_name = "geometry_msgs/msg/PoseWithCovariance";
    return true;
  }
  if (ros1_type_name == "geometry_msgs/Vector3")
  {
    ros2_type_name = "geometry_msgs/msg/Vector3";
    return true;
  }
  if (ros1_type_name == "geometry_msgs/Accel")
  {
    ros2_type_name = "geometry_msgs/msg/Accel";
    return true;
  }
  if (ros1_type_name == "geometry_msgs/AccelWithCovariance")
  {
    ros2_type_name = "geometry_msgs/msg/AccelWithCovariance";
    return true;
  }
  if (ros1_type_name == "geometry_msgs/Inertia")
  {
    ros2_type_name = "geometry_msgs/msg/Inertia";
    return true;
  }
  if (ros1_type_name == "geometry_msgs/Transform")
  {
    ros2_type_name = "geometry_msgs/msg/Transform";
    return true;
  }
  if (ros1_type_name == "geometry_msgs/Twist")
  {
    ros2_type_name = "geometry_msgs/msg/Twist";
    return true;
  }
  if (ros1_type_name == "gazebo_msgs/LinkState")
  {
    ros2_type_name = "gazebo_msgs/msg/LinkState";
    return true;
  }
  if (ros1_type_name == "gazebo_msgs/ModelState")
  {
    ros2_type_name = "gazebo_msgs/msg/ModelState";
    return true;
  }
  if (ros1_type_name == "geometry_msgs/TwistWithCovariance")
  {
    ros2_type_name = "geometry_msgs/msg/TwistWithCovariance";
    return true;
  }
  if (ros1_type_name == "geometry_msgs/Wrench")
  {
    ros2_type_name = "geometry_msgs/msg/Wrench";
    return true;
  }
  if (ros1_type_name == "gazebo_msgs/ContactState")
  {
    ros2_type_name = "gazebo_msgs/msg/ContactState";
    return true;
  }
  if (ros1_type_name == "map_msgs/ProjectedMapInfo")
  {
    ros2_type_name = "map_msgs/msg/ProjectedMapInfo";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/AllowedCollisionEntry")
  {
    ros2_type_name = "moveit_msgs/msg/AllowedCollisionEntry";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/AllowedCollisionMatrix")
  {
    ros2_type_name = "moveit_msgs/msg/AllowedCollisionMatrix";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/BoundingVolume")
  {
    ros2_type_name = "moveit_msgs/msg/BoundingVolume";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/CartesianPoint")
  {
    ros2_type_name = "moveit_msgs/msg/CartesianPoint";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/CartesianTrajectoryPoint")
  {
    ros2_type_name = "moveit_msgs/msg/CartesianTrajectoryPoint";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/ConstraintEvalResult")
  {
    ros2_type_name = "moveit_msgs/msg/ConstraintEvalResult";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/Constraints")
  {
    ros2_type_name = "moveit_msgs/msg/Constraints";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/CostSource")
  {
    ros2_type_name = "moveit_msgs/msg/CostSource";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/JointConstraint")
  {
    ros2_type_name = "moveit_msgs/msg/JointConstraint";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/JointLimits")
  {
    ros2_type_name = "moveit_msgs/msg/JointLimits";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/KinematicSolverInfo")
  {
    ros2_type_name = "moveit_msgs/msg/KinematicSolverInfo";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/LinkPadding")
  {
    ros2_type_name = "moveit_msgs/msg/LinkPadding";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/LinkScale")
  {
    ros2_type_name = "moveit_msgs/msg/LinkScale";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/MotionSequenceRequest")
  {
    ros2_type_name = "moveit_msgs/msg/MotionSequenceRequest";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/MoveItErrorCodes")
  {
    ros2_type_name = "moveit_msgs/msg/MoveItErrorCodes";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/OrientedBoundingBox")
  {
    ros2_type_name = "moveit_msgs/msg/OrientedBoundingBox";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/PlannerInterfaceDescription")
  {
    ros2_type_name = "moveit_msgs/msg/PlannerInterfaceDescription";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/PlannerParams")
  {
    ros2_type_name = "moveit_msgs/msg/PlannerParams";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/PlanningSceneComponents")
  {
    ros2_type_name = "moveit_msgs/msg/PlanningSceneComponents";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/TrajectoryConstraints")
  {
    ros2_type_name = "moveit_msgs/msg/TrajectoryConstraints";
    return true;
  }
  if (ros1_type_name == "nav_msgs/MapMetaData")
  {
    ros2_type_name = "nav_msgs/msg/MapMetaData";
    return true;
  }
  if (ros1_type_name == "object_recognition_msgs/ObjectType")
  {
    ros2_type_name = "object_recognition_msgs/msg/ObjectType";
    return true;
  }
  if (ros1_type_name == "pcl_msgs/Vertices")
  {
    ros2_type_name = "pcl_msgs/msg/Vertices";
    return true;
  }
  if (ros1_type_name == "rosgraph_msgs/Clock")
  {
    ros2_type_name = "rosgraph_msgs/msg/Clock";
    return true;
  }
  if (ros1_type_name == "sensor_msgs/ChannelFloat32")
  {
    ros2_type_name = "sensor_msgs/msg/ChannelFloat32";
    return true;
  }
  if (ros1_type_name == "sensor_msgs/JoyFeedback")
  {
    ros2_type_name = "sensor_msgs/msg/JoyFeedback";
    return true;
  }
  if (ros1_type_name == "sensor_msgs/JoyFeedbackArray")
  {
    ros2_type_name = "sensor_msgs/msg/JoyFeedbackArray";
    return true;
  }
  if (ros1_type_name == "sensor_msgs/LaserEcho")
  {
    ros2_type_name = "sensor_msgs/msg/LaserEcho";
    return true;
  }
  if (ros1_type_name == "sensor_msgs/NavSatStatus")
  {
    ros2_type_name = "sensor_msgs/msg/NavSatStatus";
    return true;
  }
  if (ros1_type_name == "sensor_msgs/PointField")
  {
    ros2_type_name = "sensor_msgs/msg/PointField";
    return true;
  }
  if (ros1_type_name == "sensor_msgs/RegionOfInterest")
  {
    ros2_type_name = "sensor_msgs/msg/RegionOfInterest";
    return true;
  }
  if (ros1_type_name == "shape_msgs/Mesh")
  {
    ros2_type_name = "shape_msgs/msg/Mesh";
    return true;
  }
  if (ros1_type_name == "shape_msgs/MeshTriangle")
  {
    ros2_type_name = "shape_msgs/msg/MeshTriangle";
    return true;
  }
  if (ros1_type_name == "shape_msgs/Plane")
  {
    ros2_type_name = "shape_msgs/msg/Plane";
    return true;
  }
  if (ros1_type_name == "shape_msgs/SolidPrimitive")
  {
    ros2_type_name = "shape_msgs/msg/SolidPrimitive";
    return true;
  }
  if (ros1_type_name == "std_msgs/Bool")
  {
    ros2_type_name = "std_msgs/msg/Bool";
    return true;
  }
  if (ros1_type_name == "std_msgs/Byte")
  {
    ros2_type_name = "std_msgs/msg/Byte";
    return true;
  }
  if (ros1_type_name == "std_msgs/Char")
  {
    ros2_type_name = "std_msgs/msg/Char";
    return true;
  }
  if (ros1_type_name == "std_msgs/ColorRGBA")
  {
    ros2_type_name = "std_msgs/msg/ColorRGBA";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/ObjectColor")
  {
    ros2_type_name = "moveit_msgs/msg/ObjectColor";
    return true;
  }
  if (ros1_type_name == "std_msgs/Empty")
  {
    ros2_type_name = "std_msgs/msg/Empty";
    return true;
  }
  if (ros1_type_name == "std_msgs/Float32")
  {
    ros2_type_name = "std_msgs/msg/Float32";
    return true;
  }
  if (ros1_type_name == "std_msgs/Float64")
  {
    ros2_type_name = "std_msgs/msg/Float64";
    return true;
  }
  if (ros1_type_name == "std_msgs/Header")
  {
    ros2_type_name = "std_msgs/msg/Header";
    return true;
  }
  if (ros1_type_name == "actionlib_msgs/GoalStatusArray")
  {
    ros2_type_name = "actionlib_msgs/msg/GoalStatusArray";
    return true;
  }
  if (ros1_type_name == "cartographer_ros_msgs/SubmapList")
  {
    ros2_type_name = "cartographer_ros_msgs/msg/SubmapList";
    return true;
  }
  if (ros1_type_name == "control_msgs/JointControllerState")
  {
    ros2_type_name = "control_msgs/msg/JointControllerState";
    return true;
  }
  if (ros1_type_name == "control_msgs/JointJog")
  {
    ros2_type_name = "control_msgs/msg/JointJog";
    return true;
  }
  if (ros1_type_name == "control_msgs/PidState")
  {
    ros2_type_name = "control_msgs/msg/PidState";
    return true;
  }
  if (ros1_type_name == "diagnostic_msgs/DiagnosticArray")
  {
    ros2_type_name = "diagnostic_msgs/msg/DiagnosticArray";
    return true;
  }
  if (ros1_type_name == "gazebo_msgs/ContactsState")
  {
    ros2_type_name = "gazebo_msgs/msg/ContactsState";
    return true;
  }
  if (ros1_type_name == "gazebo_msgs/WorldState")
  {
    ros2_type_name = "gazebo_msgs/msg/WorldState";
    return true;
  }
  if (ros1_type_name == "geometry_msgs/AccelStamped")
  {
    ros2_type_name = "geometry_msgs/msg/AccelStamped";
    return true;
  }
  if (ros1_type_name == "geometry_msgs/AccelWithCovarianceStamped")
  {
    ros2_type_name = "geometry_msgs/msg/AccelWithCovarianceStamped";
    return true;
  }
  if (ros1_type_name == "geometry_msgs/InertiaStamped")
  {
    ros2_type_name = "geometry_msgs/msg/InertiaStamped";
    return true;
  }
  if (ros1_type_name == "geometry_msgs/PointStamped")
  {
    ros2_type_name = "geometry_msgs/msg/PointStamped";
    return true;
  }
  if (ros1_type_name == "geometry_msgs/PolygonStamped")
  {
    ros2_type_name = "geometry_msgs/msg/PolygonStamped";
    return true;
  }
  if (ros1_type_name == "geometry_msgs/PoseArray")
  {
    ros2_type_name = "geometry_msgs/msg/PoseArray";
    return true;
  }
  if (ros1_type_name == "geometry_msgs/PoseStamped")
  {
    ros2_type_name = "geometry_msgs/msg/PoseStamped";
    return true;
  }
  if (ros1_type_name == "geometry_msgs/PoseWithCovarianceStamped")
  {
    ros2_type_name = "geometry_msgs/msg/PoseWithCovarianceStamped";
    return true;
  }
  if (ros1_type_name == "geometry_msgs/QuaternionStamped")
  {
    ros2_type_name = "geometry_msgs/msg/QuaternionStamped";
    return true;
  }
  if (ros1_type_name == "geometry_msgs/TransformStamped")
  {
    ros2_type_name = "geometry_msgs/msg/TransformStamped";
    return true;
  }
  if (ros1_type_name == "geometry_msgs/TwistStamped")
  {
    ros2_type_name = "geometry_msgs/msg/TwistStamped";
    return true;
  }
  if (ros1_type_name == "geometry_msgs/TwistWithCovarianceStamped")
  {
    ros2_type_name = "geometry_msgs/msg/TwistWithCovarianceStamped";
    return true;
  }
  if (ros1_type_name == "geometry_msgs/Vector3Stamped")
  {
    ros2_type_name = "geometry_msgs/msg/Vector3Stamped";
    return true;
  }
  if (ros1_type_name == "geometry_msgs/WrenchStamped")
  {
    ros2_type_name = "geometry_msgs/msg/WrenchStamped";
    return true;
  }
  if (ros1_type_name == "map_msgs/OccupancyGridUpdate")
  {
    ros2_type_name = "map_msgs/msg/OccupancyGridUpdate";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/CartesianTrajectory")
  {
    ros2_type_name = "moveit_msgs/msg/CartesianTrajectory";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/CollisionObject")
  {
    ros2_type_name = "moveit_msgs/msg/CollisionObject";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/ContactInformation")
  {
    ros2_type_name = "moveit_msgs/msg/ContactInformation";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/GenericTrajectory")
  {
    ros2_type_name = "moveit_msgs/msg/GenericTrajectory";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/GripperTranslation")
  {
    ros2_type_name = "moveit_msgs/msg/GripperTranslation";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/OrientationConstraint")
  {
    ros2_type_name = "moveit_msgs/msg/OrientationConstraint";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/PositionConstraint")
  {
    ros2_type_name = "moveit_msgs/msg/PositionConstraint";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/VisibilityConstraint")
  {
    ros2_type_name = "moveit_msgs/msg/VisibilityConstraint";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/WorkspaceParameters")
  {
    ros2_type_name = "moveit_msgs/msg/WorkspaceParameters";
    return true;
  }
  if (ros1_type_name == "nav_msgs/GridCells")
  {
    ros2_type_name = "nav_msgs/msg/GridCells";
    return true;
  }
  if (ros1_type_name == "nav_msgs/OccupancyGrid")
  {
    ros2_type_name = "nav_msgs/msg/OccupancyGrid";
    return true;
  }
  if (ros1_type_name == "map_msgs/ProjectedMap")
  {
    ros2_type_name = "map_msgs/msg/ProjectedMap";
    return true;
  }
  if (ros1_type_name == "nav_msgs/Odometry")
  {
    ros2_type_name = "nav_msgs/msg/Odometry";
    return true;
  }
  if (ros1_type_name == "nav_msgs/Path")
  {
    ros2_type_name = "nav_msgs/msg/Path";
    return true;
  }
  if (ros1_type_name == "object_recognition_msgs/RecognizedObject")
  {
    ros2_type_name = "object_recognition_msgs/msg/RecognizedObject";
    return true;
  }
  if (ros1_type_name == "object_recognition_msgs/RecognizedObjectArray")
  {
    ros2_type_name = "object_recognition_msgs/msg/RecognizedObjectArray";
    return true;
  }
  if (ros1_type_name == "object_recognition_msgs/Table")
  {
    ros2_type_name = "object_recognition_msgs/msg/Table";
    return true;
  }
  if (ros1_type_name == "object_recognition_msgs/TableArray")
  {
    ros2_type_name = "object_recognition_msgs/msg/TableArray";
    return true;
  }
  if (ros1_type_name == "octomap_msgs/Octomap")
  {
    ros2_type_name = "octomap_msgs/msg/Octomap";
    return true;
  }
  if (ros1_type_name == "octomap_msgs/OctomapWithPose")
  {
    ros2_type_name = "octomap_msgs/msg/OctomapWithPose";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/PlanningSceneWorld")
  {
    ros2_type_name = "moveit_msgs/msg/PlanningSceneWorld";
    return true;
  }
  if (ros1_type_name == "pcl_msgs/ModelCoefficients")
  {
    ros2_type_name = "pcl_msgs/msg/ModelCoefficients";
    return true;
  }
  if (ros1_type_name == "pcl_msgs/PointIndices")
  {
    ros2_type_name = "pcl_msgs/msg/PointIndices";
    return true;
  }
  if (ros1_type_name == "sensor_msgs/BatteryState")
  {
    ros2_type_name = "sensor_msgs/msg/BatteryState";
    return true;
  }
  if (ros1_type_name == "sensor_msgs/CameraInfo")
  {
    ros2_type_name = "sensor_msgs/msg/CameraInfo";
    return true;
  }
  if (ros1_type_name == "sensor_msgs/CompressedImage")
  {
    ros2_type_name = "sensor_msgs/msg/CompressedImage";
    return true;
  }
  if (ros1_type_name == "sensor_msgs/FluidPressure")
  {
    ros2_type_name = "sensor_msgs/msg/FluidPressure";
    return true;
  }
  if (ros1_type_name == "sensor_msgs/Illuminance")
  {
    ros2_type_name = "sensor_msgs/msg/Illuminance";
    return true;
  }
  if (ros1_type_name == "sensor_msgs/Image")
  {
    ros2_type_name = "sensor_msgs/msg/Image";
    return true;
  }
  if (ros1_type_name == "sensor_msgs/Imu")
  {
    ros2_type_name = "sensor_msgs/msg/Imu";
    return true;
  }
  if (ros1_type_name == "sensor_msgs/JointState")
  {
    ros2_type_name = "sensor_msgs/msg/JointState";
    return true;
  }
  if (ros1_type_name == "sensor_msgs/Joy")
  {
    ros2_type_name = "sensor_msgs/msg/Joy";
    return true;
  }
  if (ros1_type_name == "sensor_msgs/LaserScan")
  {
    ros2_type_name = "sensor_msgs/msg/LaserScan";
    return true;
  }
  if (ros1_type_name == "sensor_msgs/MagneticField")
  {
    ros2_type_name = "sensor_msgs/msg/MagneticField";
    return true;
  }
  if (ros1_type_name == "sensor_msgs/MultiDOFJointState")
  {
    ros2_type_name = "sensor_msgs/msg/MultiDOFJointState";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/RobotState")
  {
    ros2_type_name = "moveit_msgs/msg/RobotState";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/DisplayRobotState")
  {
    ros2_type_name = "moveit_msgs/msg/DisplayRobotState";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/DisplayTrajectory")
  {
    ros2_type_name = "moveit_msgs/msg/DisplayTrajectory";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/MotionPlanDetailedResponse")
  {
    ros2_type_name = "moveit_msgs/msg/MotionPlanDetailedResponse";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/MotionPlanRequest")
  {
    ros2_type_name = "moveit_msgs/msg/MotionPlanRequest";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/MotionSequenceItem")
  {
    ros2_type_name = "moveit_msgs/msg/MotionSequenceItem";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/MotionSequenceResponse")
  {
    ros2_type_name = "moveit_msgs/msg/MotionSequenceResponse";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/PlanningScene")
  {
    ros2_type_name = "moveit_msgs/msg/PlanningScene";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/PlanningOptions")
  {
    ros2_type_name = "moveit_msgs/msg/PlanningOptions";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/PositionIKRequest")
  {
    ros2_type_name = "moveit_msgs/msg/PositionIKRequest";
    return true;
  }
  if (ros1_type_name == "sensor_msgs/MultiEchoLaserScan")
  {
    ros2_type_name = "sensor_msgs/msg/MultiEchoLaserScan";
    return true;
  }
  if (ros1_type_name == "sensor_msgs/NavSatFix")
  {
    ros2_type_name = "sensor_msgs/msg/NavSatFix";
    return true;
  }
  if (ros1_type_name == "sensor_msgs/PointCloud")
  {
    ros2_type_name = "sensor_msgs/msg/PointCloud";
    return true;
  }
  if (ros1_type_name == "sensor_msgs/PointCloud2")
  {
    ros2_type_name = "sensor_msgs/msg/PointCloud2";
    return true;
  }
  if (ros1_type_name == "map_msgs/PointCloud2Update")
  {
    ros2_type_name = "map_msgs/msg/PointCloud2Update";
    return true;
  }
  if (ros1_type_name == "object_recognition_msgs/ObjectInformation")
  {
    ros2_type_name = "object_recognition_msgs/msg/ObjectInformation";
    return true;
  }
  if (ros1_type_name == "pcl_msgs/PolygonMesh")
  {
    ros2_type_name = "pcl_msgs/msg/PolygonMesh";
    return true;
  }
  if (ros1_type_name == "sensor_msgs/Range")
  {
    ros2_type_name = "sensor_msgs/msg/Range";
    return true;
  }
  if (ros1_type_name == "sensor_msgs/RelativeHumidity")
  {
    ros2_type_name = "sensor_msgs/msg/RelativeHumidity";
    return true;
  }
  if (ros1_type_name == "sensor_msgs/Temperature")
  {
    ros2_type_name = "sensor_msgs/msg/Temperature";
    return true;
  }
  if (ros1_type_name == "sensor_msgs/TimeReference")
  {
    ros2_type_name = "sensor_msgs/msg/TimeReference";
    return true;
  }
  if (ros1_type_name == "std_msgs/Int16")
  {
    ros2_type_name = "std_msgs/msg/Int16";
    return true;
  }
  if (ros1_type_name == "std_msgs/Int32")
  {
    ros2_type_name = "std_msgs/msg/Int32";
    return true;
  }
  if (ros1_type_name == "std_msgs/Int64")
  {
    ros2_type_name = "std_msgs/msg/Int64";
    return true;
  }
  if (ros1_type_name == "std_msgs/Int8")
  {
    ros2_type_name = "std_msgs/msg/Int8";
    return true;
  }
  if (ros1_type_name == "std_msgs/MultiArrayDimension")
  {
    ros2_type_name = "std_msgs/msg/MultiArrayDimension";
    return true;
  }
  if (ros1_type_name == "std_msgs/MultiArrayLayout")
  {
    ros2_type_name = "std_msgs/msg/MultiArrayLayout";
    return true;
  }
  if (ros1_type_name == "std_msgs/ByteMultiArray")
  {
    ros2_type_name = "std_msgs/msg/ByteMultiArray";
    return true;
  }
  if (ros1_type_name == "std_msgs/Float32MultiArray")
  {
    ros2_type_name = "std_msgs/msg/Float32MultiArray";
    return true;
  }
  if (ros1_type_name == "std_msgs/Float64MultiArray")
  {
    ros2_type_name = "std_msgs/msg/Float64MultiArray";
    return true;
  }
  if (ros1_type_name == "std_msgs/Int16MultiArray")
  {
    ros2_type_name = "std_msgs/msg/Int16MultiArray";
    return true;
  }
  if (ros1_type_name == "std_msgs/Int32MultiArray")
  {
    ros2_type_name = "std_msgs/msg/Int32MultiArray";
    return true;
  }
  if (ros1_type_name == "std_msgs/Int64MultiArray")
  {
    ros2_type_name = "std_msgs/msg/Int64MultiArray";
    return true;
  }
  if (ros1_type_name == "std_msgs/Int8MultiArray")
  {
    ros2_type_name = "std_msgs/msg/Int8MultiArray";
    return true;
  }
  if (ros1_type_name == "std_msgs/String")
  {
    ros2_type_name = "std_msgs/msg/String";
    return true;
  }
  if (ros1_type_name == "std_msgs/UInt16")
  {
    ros2_type_name = "std_msgs/msg/UInt16";
    return true;
  }
  if (ros1_type_name == "std_msgs/UInt16MultiArray")
  {
    ros2_type_name = "std_msgs/msg/UInt16MultiArray";
    return true;
  }
  if (ros1_type_name == "std_msgs/UInt32")
  {
    ros2_type_name = "std_msgs/msg/UInt32";
    return true;
  }
  if (ros1_type_name == "std_msgs/UInt32MultiArray")
  {
    ros2_type_name = "std_msgs/msg/UInt32MultiArray";
    return true;
  }
  if (ros1_type_name == "std_msgs/UInt64")
  {
    ros2_type_name = "std_msgs/msg/UInt64";
    return true;
  }
  if (ros1_type_name == "std_msgs/UInt64MultiArray")
  {
    ros2_type_name = "std_msgs/msg/UInt64MultiArray";
    return true;
  }
  if (ros1_type_name == "std_msgs/UInt8")
  {
    ros2_type_name = "std_msgs/msg/UInt8";
    return true;
  }
  if (ros1_type_name == "std_msgs/UInt8MultiArray")
  {
    ros2_type_name = "std_msgs/msg/UInt8MultiArray";
    return true;
  }
  if (ros1_type_name == "stereo_msgs/DisparityImage")
  {
    ros2_type_name = "stereo_msgs/msg/DisparityImage";
    return true;
  }
  if (ros1_type_name == "tf2_msgs/TF2Error")
  {
    ros2_type_name = "tf2_msgs/msg/TF2Error";
    return true;
  }
  if (ros1_type_name == "tf2_msgs/TFMessage")
  {
    ros2_type_name = "tf2_msgs/msg/TFMessage";
    return true;
  }
  if (ros1_type_name == "trajectory_msgs/JointTrajectory")
  {
    ros2_type_name = "trajectory_msgs/msg/JointTrajectory";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/AttachedCollisionObject")
  {
    ros2_type_name = "moveit_msgs/msg/AttachedCollisionObject";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/Grasp")
  {
    ros2_type_name = "moveit_msgs/msg/Grasp";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/PlaceLocation")
  {
    ros2_type_name = "moveit_msgs/msg/PlaceLocation";
    return true;
  }
  if (ros1_type_name == "trajectory_msgs/JointTrajectoryPoint")
  {
    ros2_type_name = "trajectory_msgs/msg/JointTrajectoryPoint";
    return true;
  }
  if (ros1_type_name == "control_msgs/JointTrajectoryControllerState")
  {
    ros2_type_name = "control_msgs/msg/JointTrajectoryControllerState";
    return true;
  }
  if (ros1_type_name == "trajectory_msgs/MultiDOFJointTrajectory")
  {
    ros2_type_name = "trajectory_msgs/msg/MultiDOFJointTrajectory";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/RobotTrajectory")
  {
    ros2_type_name = "moveit_msgs/msg/RobotTrajectory";
    return true;
  }
  if (ros1_type_name == "moveit_msgs/MotionPlanResponse")
  {
    ros2_type_name = "moveit_msgs/msg/MotionPlanResponse";
    return true;
  }
  if (ros1_type_name == "trajectory_msgs/MultiDOFJointTrajectoryPoint")
  {
    ros2_type_name = "trajectory_msgs/msg/MultiDOFJointTrajectoryPoint";
    return true;
  }
  if (ros1_type_name == "visualization_msgs/ImageMarker")
  {
    ros2_type_name = "visualization_msgs/msg/ImageMarker";
    return true;
  }
  if (ros1_type_name == "visualization_msgs/InteractiveMarker")
  {
    ros2_type_name = "visualization_msgs/msg/InteractiveMarker";
    return true;
  }
  if (ros1_type_name == "visualization_msgs/InteractiveMarkerControl")
  {
    ros2_type_name = "visualization_msgs/msg/InteractiveMarkerControl";
    return true;
  }
  if (ros1_type_name == "visualization_msgs/InteractiveMarkerFeedback")
  {
    ros2_type_name = "visualization_msgs/msg/InteractiveMarkerFeedback";
    return true;
  }
  if (ros1_type_name == "visualization_msgs/InteractiveMarkerInit")
  {
    ros2_type_name = "visualization_msgs/msg/InteractiveMarkerInit";
    return true;
  }
  if (ros1_type_name == "visualization_msgs/InteractiveMarkerPose")
  {
    ros2_type_name = "visualization_msgs/msg/InteractiveMarkerPose";
    return true;
  }
  if (ros1_type_name == "visualization_msgs/InteractiveMarkerUpdate")
  {
    ros2_type_name = "visualization_msgs/msg/InteractiveMarkerUpdate";
    return true;
  }
  if (ros1_type_name == "visualization_msgs/Marker")
  {
    ros2_type_name = "visualization_msgs/msg/Marker";
    return true;
  }
  if (ros1_type_name == "visualization_msgs/MarkerArray")
  {
    ros2_type_name = "visualization_msgs/msg/MarkerArray";
    return true;
  }
  if (ros1_type_name == "visualization_msgs/MenuEntry")
  {
    ros2_type_name = "visualization_msgs/msg/MenuEntry";
    return true;
  }
  if (ros1_type_name == "rosgraph_msgs/Log")
  {
    ros2_type_name = "rcl_interfaces/msg/Log";
    return true;
  }
  if (ros1_type_name == "tf/tfMessage")
  {
    ros2_type_name = "tf2_msgs/msg/TFMessage";
    return true;
  }
  if (ros1_type_name == "uuid_msgs/UniqueID")
  {
    ros2_type_name = "unique_identifier_msgs/msg/UUID";
    return true;
  }

  return false;
}

bool
get_2to1_mapping(const std::string & ros2_type_name, std::string & ros1_type_name)
{

  if (ros2_type_name == "builtin_interfaces/msg/Duration")
  {
    ros1_type_name = "std_msgs/Duration";
    return true;
  }
  if (ros2_type_name == "builtin_interfaces/msg/Time")
  {
    ros1_type_name = "std_msgs/Time";
    return true;
  }
  if (ros2_type_name == "actionlib_msgs/msg/GoalID")
  {
    ros1_type_name = "actionlib_msgs/GoalID";
    return true;
  }
  if (ros2_type_name == "actionlib_msgs/msg/GoalStatus")
  {
    ros1_type_name = "actionlib_msgs/GoalStatus";
    return true;
  }
  if (ros2_type_name == "cartographer_ros_msgs/msg/StatusCode")
  {
    ros1_type_name = "cartographer_ros_msgs/StatusCode";
    return true;
  }
  if (ros2_type_name == "cartographer_ros_msgs/msg/StatusResponse")
  {
    ros1_type_name = "cartographer_ros_msgs/StatusResponse";
    return true;
  }
  if (ros2_type_name == "control_msgs/msg/GripperCommand")
  {
    ros1_type_name = "control_msgs/GripperCommand";
    return true;
  }
  if (ros2_type_name == "control_msgs/msg/JointTolerance")
  {
    ros1_type_name = "control_msgs/JointTolerance";
    return true;
  }
  if (ros2_type_name == "diagnostic_msgs/msg/DiagnosticStatus")
  {
    ros1_type_name = "diagnostic_msgs/DiagnosticStatus";
    return true;
  }
  if (ros2_type_name == "diagnostic_msgs/msg/KeyValue")
  {
    ros1_type_name = "diagnostic_msgs/KeyValue";
    return true;
  }
  if (ros2_type_name == "gazebo_msgs/msg/LinkStates")
  {
    ros1_type_name = "gazebo_msgs/LinkStates";
    return true;
  }
  if (ros2_type_name == "gazebo_msgs/msg/ModelStates")
  {
    ros1_type_name = "gazebo_msgs/ModelStates";
    return true;
  }
  if (ros2_type_name == "gazebo_msgs/msg/ODEJointProperties")
  {
    ros1_type_name = "gazebo_msgs/ODEJointProperties";
    return true;
  }
  if (ros2_type_name == "gazebo_msgs/msg/ODEPhysics")
  {
    ros1_type_name = "gazebo_msgs/ODEPhysics";
    return true;
  }
  if (ros2_type_name == "geometry_msgs/msg/Point")
  {
    ros1_type_name = "geometry_msgs/Point";
    return true;
  }
  if (ros2_type_name == "geometry_msgs/msg/Point32")
  {
    ros1_type_name = "geometry_msgs/Point32";
    return true;
  }
  if (ros2_type_name == "geometry_msgs/msg/Polygon")
  {
    ros1_type_name = "geometry_msgs/Polygon";
    return true;
  }
  if (ros2_type_name == "geometry_msgs/msg/Pose2D")
  {
    ros1_type_name = "geometry_msgs/Pose2D";
    return true;
  }
  if (ros2_type_name == "geometry_msgs/msg/Quaternion")
  {
    ros1_type_name = "geometry_msgs/Quaternion";
    return true;
  }
  if (ros2_type_name == "geometry_msgs/msg/Pose")
  {
    ros1_type_name = "geometry_msgs/Pose";
    return true;
  }
  if (ros2_type_name == "cartographer_ros_msgs/msg/LandmarkEntry")
  {
    ros1_type_name = "cartographer_ros_msgs/LandmarkEntry";
    return true;
  }
  if (ros2_type_name == "cartographer_ros_msgs/msg/SubmapEntry")
  {
    ros1_type_name = "cartographer_ros_msgs/SubmapEntry";
    return true;
  }
  if (ros2_type_name == "cartographer_ros_msgs/msg/SubmapTexture")
  {
    ros1_type_name = "cartographer_ros_msgs/SubmapTexture";
    return true;
  }
  if (ros2_type_name == "geometry_msgs/msg/PoseWithCovariance")
  {
    ros1_type_name = "geometry_msgs/PoseWithCovariance";
    return true;
  }
  if (ros2_type_name == "geometry_msgs/msg/Vector3")
  {
    ros1_type_name = "geometry_msgs/Vector3";
    return true;
  }
  if (ros2_type_name == "geometry_msgs/msg/Accel")
  {
    ros1_type_name = "geometry_msgs/Accel";
    return true;
  }
  if (ros2_type_name == "geometry_msgs/msg/AccelWithCovariance")
  {
    ros1_type_name = "geometry_msgs/AccelWithCovariance";
    return true;
  }
  if (ros2_type_name == "geometry_msgs/msg/Inertia")
  {
    ros1_type_name = "geometry_msgs/Inertia";
    return true;
  }
  if (ros2_type_name == "geometry_msgs/msg/Transform")
  {
    ros1_type_name = "geometry_msgs/Transform";
    return true;
  }
  if (ros2_type_name == "geometry_msgs/msg/Twist")
  {
    ros1_type_name = "geometry_msgs/Twist";
    return true;
  }
  if (ros2_type_name == "gazebo_msgs/msg/LinkState")
  {
    ros1_type_name = "gazebo_msgs/LinkState";
    return true;
  }
  if (ros2_type_name == "gazebo_msgs/msg/ModelState")
  {
    ros1_type_name = "gazebo_msgs/ModelState";
    return true;
  }
  if (ros2_type_name == "geometry_msgs/msg/TwistWithCovariance")
  {
    ros1_type_name = "geometry_msgs/TwistWithCovariance";
    return true;
  }
  if (ros2_type_name == "geometry_msgs/msg/Wrench")
  {
    ros1_type_name = "geometry_msgs/Wrench";
    return true;
  }
  if (ros2_type_name == "gazebo_msgs/msg/ContactState")
  {
    ros1_type_name = "gazebo_msgs/ContactState";
    return true;
  }
  if (ros2_type_name == "map_msgs/msg/ProjectedMapInfo")
  {
    ros1_type_name = "map_msgs/ProjectedMapInfo";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/AllowedCollisionEntry")
  {
    ros1_type_name = "moveit_msgs/AllowedCollisionEntry";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/AllowedCollisionMatrix")
  {
    ros1_type_name = "moveit_msgs/AllowedCollisionMatrix";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/BoundingVolume")
  {
    ros1_type_name = "moveit_msgs/BoundingVolume";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/CartesianPoint")
  {
    ros1_type_name = "moveit_msgs/CartesianPoint";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/CartesianTrajectoryPoint")
  {
    ros1_type_name = "moveit_msgs/CartesianTrajectoryPoint";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/ConstraintEvalResult")
  {
    ros1_type_name = "moveit_msgs/ConstraintEvalResult";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/Constraints")
  {
    ros1_type_name = "moveit_msgs/Constraints";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/CostSource")
  {
    ros1_type_name = "moveit_msgs/CostSource";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/JointConstraint")
  {
    ros1_type_name = "moveit_msgs/JointConstraint";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/JointLimits")
  {
    ros1_type_name = "moveit_msgs/JointLimits";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/KinematicSolverInfo")
  {
    ros1_type_name = "moveit_msgs/KinematicSolverInfo";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/LinkPadding")
  {
    ros1_type_name = "moveit_msgs/LinkPadding";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/LinkScale")
  {
    ros1_type_name = "moveit_msgs/LinkScale";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/MotionSequenceRequest")
  {
    ros1_type_name = "moveit_msgs/MotionSequenceRequest";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/MoveItErrorCodes")
  {
    ros1_type_name = "moveit_msgs/MoveItErrorCodes";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/OrientedBoundingBox")
  {
    ros1_type_name = "moveit_msgs/OrientedBoundingBox";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/PlannerInterfaceDescription")
  {
    ros1_type_name = "moveit_msgs/PlannerInterfaceDescription";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/PlannerParams")
  {
    ros1_type_name = "moveit_msgs/PlannerParams";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/PlanningSceneComponents")
  {
    ros1_type_name = "moveit_msgs/PlanningSceneComponents";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/TrajectoryConstraints")
  {
    ros1_type_name = "moveit_msgs/TrajectoryConstraints";
    return true;
  }
  if (ros2_type_name == "nav_msgs/msg/MapMetaData")
  {
    ros1_type_name = "nav_msgs/MapMetaData";
    return true;
  }
  if (ros2_type_name == "object_recognition_msgs/msg/ObjectType")
  {
    ros1_type_name = "object_recognition_msgs/ObjectType";
    return true;
  }
  if (ros2_type_name == "pcl_msgs/msg/Vertices")
  {
    ros1_type_name = "pcl_msgs/Vertices";
    return true;
  }
  if (ros2_type_name == "rosgraph_msgs/msg/Clock")
  {
    ros1_type_name = "rosgraph_msgs/Clock";
    return true;
  }
  if (ros2_type_name == "sensor_msgs/msg/ChannelFloat32")
  {
    ros1_type_name = "sensor_msgs/ChannelFloat32";
    return true;
  }
  if (ros2_type_name == "sensor_msgs/msg/JoyFeedback")
  {
    ros1_type_name = "sensor_msgs/JoyFeedback";
    return true;
  }
  if (ros2_type_name == "sensor_msgs/msg/JoyFeedbackArray")
  {
    ros1_type_name = "sensor_msgs/JoyFeedbackArray";
    return true;
  }
  if (ros2_type_name == "sensor_msgs/msg/LaserEcho")
  {
    ros1_type_name = "sensor_msgs/LaserEcho";
    return true;
  }
  if (ros2_type_name == "sensor_msgs/msg/NavSatStatus")
  {
    ros1_type_name = "sensor_msgs/NavSatStatus";
    return true;
  }
  if (ros2_type_name == "sensor_msgs/msg/PointField")
  {
    ros1_type_name = "sensor_msgs/PointField";
    return true;
  }
  if (ros2_type_name == "sensor_msgs/msg/RegionOfInterest")
  {
    ros1_type_name = "sensor_msgs/RegionOfInterest";
    return true;
  }
  if (ros2_type_name == "shape_msgs/msg/Mesh")
  {
    ros1_type_name = "shape_msgs/Mesh";
    return true;
  }
  if (ros2_type_name == "shape_msgs/msg/MeshTriangle")
  {
    ros1_type_name = "shape_msgs/MeshTriangle";
    return true;
  }
  if (ros2_type_name == "shape_msgs/msg/Plane")
  {
    ros1_type_name = "shape_msgs/Plane";
    return true;
  }
  if (ros2_type_name == "shape_msgs/msg/SolidPrimitive")
  {
    ros1_type_name = "shape_msgs/SolidPrimitive";
    return true;
  }
  if (ros2_type_name == "std_msgs/msg/Bool")
  {
    ros1_type_name = "std_msgs/Bool";
    return true;
  }
  if (ros2_type_name == "std_msgs/msg/Byte")
  {
    ros1_type_name = "std_msgs/Byte";
    return true;
  }
  if (ros2_type_name == "std_msgs/msg/Char")
  {
    ros1_type_name = "std_msgs/Char";
    return true;
  }
  if (ros2_type_name == "std_msgs/msg/ColorRGBA")
  {
    ros1_type_name = "std_msgs/ColorRGBA";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/ObjectColor")
  {
    ros1_type_name = "moveit_msgs/ObjectColor";
    return true;
  }
  if (ros2_type_name == "std_msgs/msg/Empty")
  {
    ros1_type_name = "std_msgs/Empty";
    return true;
  }
  if (ros2_type_name == "std_msgs/msg/Float32")
  {
    ros1_type_name = "std_msgs/Float32";
    return true;
  }
  if (ros2_type_name == "std_msgs/msg/Float64")
  {
    ros1_type_name = "std_msgs/Float64";
    return true;
  }
  if (ros2_type_name == "std_msgs/msg/Header")
  {
    ros1_type_name = "std_msgs/Header";
    return true;
  }
  if (ros2_type_name == "actionlib_msgs/msg/GoalStatusArray")
  {
    ros1_type_name = "actionlib_msgs/GoalStatusArray";
    return true;
  }
  if (ros2_type_name == "cartographer_ros_msgs/msg/SubmapList")
  {
    ros1_type_name = "cartographer_ros_msgs/SubmapList";
    return true;
  }
  if (ros2_type_name == "control_msgs/msg/JointControllerState")
  {
    ros1_type_name = "control_msgs/JointControllerState";
    return true;
  }
  if (ros2_type_name == "control_msgs/msg/JointJog")
  {
    ros1_type_name = "control_msgs/JointJog";
    return true;
  }
  if (ros2_type_name == "control_msgs/msg/PidState")
  {
    ros1_type_name = "control_msgs/PidState";
    return true;
  }
  if (ros2_type_name == "diagnostic_msgs/msg/DiagnosticArray")
  {
    ros1_type_name = "diagnostic_msgs/DiagnosticArray";
    return true;
  }
  if (ros2_type_name == "gazebo_msgs/msg/ContactsState")
  {
    ros1_type_name = "gazebo_msgs/ContactsState";
    return true;
  }
  if (ros2_type_name == "gazebo_msgs/msg/WorldState")
  {
    ros1_type_name = "gazebo_msgs/WorldState";
    return true;
  }
  if (ros2_type_name == "geometry_msgs/msg/AccelStamped")
  {
    ros1_type_name = "geometry_msgs/AccelStamped";
    return true;
  }
  if (ros2_type_name == "geometry_msgs/msg/AccelWithCovarianceStamped")
  {
    ros1_type_name = "geometry_msgs/AccelWithCovarianceStamped";
    return true;
  }
  if (ros2_type_name == "geometry_msgs/msg/InertiaStamped")
  {
    ros1_type_name = "geometry_msgs/InertiaStamped";
    return true;
  }
  if (ros2_type_name == "geometry_msgs/msg/PointStamped")
  {
    ros1_type_name = "geometry_msgs/PointStamped";
    return true;
  }
  if (ros2_type_name == "geometry_msgs/msg/PolygonStamped")
  {
    ros1_type_name = "geometry_msgs/PolygonStamped";
    return true;
  }
  if (ros2_type_name == "geometry_msgs/msg/PoseArray")
  {
    ros1_type_name = "geometry_msgs/PoseArray";
    return true;
  }
  if (ros2_type_name == "geometry_msgs/msg/PoseStamped")
  {
    ros1_type_name = "geometry_msgs/PoseStamped";
    return true;
  }
  if (ros2_type_name == "geometry_msgs/msg/PoseWithCovarianceStamped")
  {
    ros1_type_name = "geometry_msgs/PoseWithCovarianceStamped";
    return true;
  }
  if (ros2_type_name == "geometry_msgs/msg/QuaternionStamped")
  {
    ros1_type_name = "geometry_msgs/QuaternionStamped";
    return true;
  }
  if (ros2_type_name == "geometry_msgs/msg/TransformStamped")
  {
    ros1_type_name = "geometry_msgs/TransformStamped";
    return true;
  }
  if (ros2_type_name == "geometry_msgs/msg/TwistStamped")
  {
    ros1_type_name = "geometry_msgs/TwistStamped";
    return true;
  }
  if (ros2_type_name == "geometry_msgs/msg/TwistWithCovarianceStamped")
  {
    ros1_type_name = "geometry_msgs/TwistWithCovarianceStamped";
    return true;
  }
  if (ros2_type_name == "geometry_msgs/msg/Vector3Stamped")
  {
    ros1_type_name = "geometry_msgs/Vector3Stamped";
    return true;
  }
  if (ros2_type_name == "geometry_msgs/msg/WrenchStamped")
  {
    ros1_type_name = "geometry_msgs/WrenchStamped";
    return true;
  }
  if (ros2_type_name == "map_msgs/msg/OccupancyGridUpdate")
  {
    ros1_type_name = "map_msgs/OccupancyGridUpdate";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/CartesianTrajectory")
  {
    ros1_type_name = "moveit_msgs/CartesianTrajectory";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/CollisionObject")
  {
    ros1_type_name = "moveit_msgs/CollisionObject";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/ContactInformation")
  {
    ros1_type_name = "moveit_msgs/ContactInformation";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/GenericTrajectory")
  {
    ros1_type_name = "moveit_msgs/GenericTrajectory";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/GripperTranslation")
  {
    ros1_type_name = "moveit_msgs/GripperTranslation";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/OrientationConstraint")
  {
    ros1_type_name = "moveit_msgs/OrientationConstraint";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/PositionConstraint")
  {
    ros1_type_name = "moveit_msgs/PositionConstraint";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/VisibilityConstraint")
  {
    ros1_type_name = "moveit_msgs/VisibilityConstraint";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/WorkspaceParameters")
  {
    ros1_type_name = "moveit_msgs/WorkspaceParameters";
    return true;
  }
  if (ros2_type_name == "nav_msgs/msg/GridCells")
  {
    ros1_type_name = "nav_msgs/GridCells";
    return true;
  }
  if (ros2_type_name == "nav_msgs/msg/OccupancyGrid")
  {
    ros1_type_name = "nav_msgs/OccupancyGrid";
    return true;
  }
  if (ros2_type_name == "map_msgs/msg/ProjectedMap")
  {
    ros1_type_name = "map_msgs/ProjectedMap";
    return true;
  }
  if (ros2_type_name == "nav_msgs/msg/Odometry")
  {
    ros1_type_name = "nav_msgs/Odometry";
    return true;
  }
  if (ros2_type_name == "nav_msgs/msg/Path")
  {
    ros1_type_name = "nav_msgs/Path";
    return true;
  }
  if (ros2_type_name == "object_recognition_msgs/msg/RecognizedObject")
  {
    ros1_type_name = "object_recognition_msgs/RecognizedObject";
    return true;
  }
  if (ros2_type_name == "object_recognition_msgs/msg/RecognizedObjectArray")
  {
    ros1_type_name = "object_recognition_msgs/RecognizedObjectArray";
    return true;
  }
  if (ros2_type_name == "object_recognition_msgs/msg/Table")
  {
    ros1_type_name = "object_recognition_msgs/Table";
    return true;
  }
  if (ros2_type_name == "object_recognition_msgs/msg/TableArray")
  {
    ros1_type_name = "object_recognition_msgs/TableArray";
    return true;
  }
  if (ros2_type_name == "octomap_msgs/msg/Octomap")
  {
    ros1_type_name = "octomap_msgs/Octomap";
    return true;
  }
  if (ros2_type_name == "octomap_msgs/msg/OctomapWithPose")
  {
    ros1_type_name = "octomap_msgs/OctomapWithPose";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/PlanningSceneWorld")
  {
    ros1_type_name = "moveit_msgs/PlanningSceneWorld";
    return true;
  }
  if (ros2_type_name == "pcl_msgs/msg/ModelCoefficients")
  {
    ros1_type_name = "pcl_msgs/ModelCoefficients";
    return true;
  }
  if (ros2_type_name == "pcl_msgs/msg/PointIndices")
  {
    ros1_type_name = "pcl_msgs/PointIndices";
    return true;
  }
  if (ros2_type_name == "sensor_msgs/msg/BatteryState")
  {
    ros1_type_name = "sensor_msgs/BatteryState";
    return true;
  }
  if (ros2_type_name == "sensor_msgs/msg/CameraInfo")
  {
    ros1_type_name = "sensor_msgs/CameraInfo";
    return true;
  }
  if (ros2_type_name == "sensor_msgs/msg/CompressedImage")
  {
    ros1_type_name = "sensor_msgs/CompressedImage";
    return true;
  }
  if (ros2_type_name == "sensor_msgs/msg/FluidPressure")
  {
    ros1_type_name = "sensor_msgs/FluidPressure";
    return true;
  }
  if (ros2_type_name == "sensor_msgs/msg/Illuminance")
  {
    ros1_type_name = "sensor_msgs/Illuminance";
    return true;
  }
  if (ros2_type_name == "sensor_msgs/msg/Image")
  {
    ros1_type_name = "sensor_msgs/Image";
    return true;
  }
  if (ros2_type_name == "sensor_msgs/msg/Imu")
  {
    ros1_type_name = "sensor_msgs/Imu";
    return true;
  }
  if (ros2_type_name == "sensor_msgs/msg/JointState")
  {
    ros1_type_name = "sensor_msgs/JointState";
    return true;
  }
  if (ros2_type_name == "sensor_msgs/msg/Joy")
  {
    ros1_type_name = "sensor_msgs/Joy";
    return true;
  }
  if (ros2_type_name == "sensor_msgs/msg/LaserScan")
  {
    ros1_type_name = "sensor_msgs/LaserScan";
    return true;
  }
  if (ros2_type_name == "sensor_msgs/msg/MagneticField")
  {
    ros1_type_name = "sensor_msgs/MagneticField";
    return true;
  }
  if (ros2_type_name == "sensor_msgs/msg/MultiDOFJointState")
  {
    ros1_type_name = "sensor_msgs/MultiDOFJointState";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/RobotState")
  {
    ros1_type_name = "moveit_msgs/RobotState";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/DisplayRobotState")
  {
    ros1_type_name = "moveit_msgs/DisplayRobotState";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/DisplayTrajectory")
  {
    ros1_type_name = "moveit_msgs/DisplayTrajectory";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/MotionPlanDetailedResponse")
  {
    ros1_type_name = "moveit_msgs/MotionPlanDetailedResponse";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/MotionPlanRequest")
  {
    ros1_type_name = "moveit_msgs/MotionPlanRequest";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/MotionSequenceItem")
  {
    ros1_type_name = "moveit_msgs/MotionSequenceItem";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/MotionSequenceResponse")
  {
    ros1_type_name = "moveit_msgs/MotionSequenceResponse";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/PlanningScene")
  {
    ros1_type_name = "moveit_msgs/PlanningScene";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/PlanningOptions")
  {
    ros1_type_name = "moveit_msgs/PlanningOptions";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/PositionIKRequest")
  {
    ros1_type_name = "moveit_msgs/PositionIKRequest";
    return true;
  }
  if (ros2_type_name == "sensor_msgs/msg/MultiEchoLaserScan")
  {
    ros1_type_name = "sensor_msgs/MultiEchoLaserScan";
    return true;
  }
  if (ros2_type_name == "sensor_msgs/msg/NavSatFix")
  {
    ros1_type_name = "sensor_msgs/NavSatFix";
    return true;
  }
  if (ros2_type_name == "sensor_msgs/msg/PointCloud")
  {
    ros1_type_name = "sensor_msgs/PointCloud";
    return true;
  }
  if (ros2_type_name == "sensor_msgs/msg/PointCloud2")
  {
    ros1_type_name = "sensor_msgs/PointCloud2";
    return true;
  }
  if (ros2_type_name == "map_msgs/msg/PointCloud2Update")
  {
    ros1_type_name = "map_msgs/PointCloud2Update";
    return true;
  }
  if (ros2_type_name == "object_recognition_msgs/msg/ObjectInformation")
  {
    ros1_type_name = "object_recognition_msgs/ObjectInformation";
    return true;
  }
  if (ros2_type_name == "pcl_msgs/msg/PolygonMesh")
  {
    ros1_type_name = "pcl_msgs/PolygonMesh";
    return true;
  }
  if (ros2_type_name == "sensor_msgs/msg/Range")
  {
    ros1_type_name = "sensor_msgs/Range";
    return true;
  }
  if (ros2_type_name == "sensor_msgs/msg/RelativeHumidity")
  {
    ros1_type_name = "sensor_msgs/RelativeHumidity";
    return true;
  }
  if (ros2_type_name == "sensor_msgs/msg/Temperature")
  {
    ros1_type_name = "sensor_msgs/Temperature";
    return true;
  }
  if (ros2_type_name == "sensor_msgs/msg/TimeReference")
  {
    ros1_type_name = "sensor_msgs/TimeReference";
    return true;
  }
  if (ros2_type_name == "std_msgs/msg/Int16")
  {
    ros1_type_name = "std_msgs/Int16";
    return true;
  }
  if (ros2_type_name == "std_msgs/msg/Int32")
  {
    ros1_type_name = "std_msgs/Int32";
    return true;
  }
  if (ros2_type_name == "std_msgs/msg/Int64")
  {
    ros1_type_name = "std_msgs/Int64";
    return true;
  }
  if (ros2_type_name == "std_msgs/msg/Int8")
  {
    ros1_type_name = "std_msgs/Int8";
    return true;
  }
  if (ros2_type_name == "std_msgs/msg/MultiArrayDimension")
  {
    ros1_type_name = "std_msgs/MultiArrayDimension";
    return true;
  }
  if (ros2_type_name == "std_msgs/msg/MultiArrayLayout")
  {
    ros1_type_name = "std_msgs/MultiArrayLayout";
    return true;
  }
  if (ros2_type_name == "std_msgs/msg/ByteMultiArray")
  {
    ros1_type_name = "std_msgs/ByteMultiArray";
    return true;
  }
  if (ros2_type_name == "std_msgs/msg/Float32MultiArray")
  {
    ros1_type_name = "std_msgs/Float32MultiArray";
    return true;
  }
  if (ros2_type_name == "std_msgs/msg/Float64MultiArray")
  {
    ros1_type_name = "std_msgs/Float64MultiArray";
    return true;
  }
  if (ros2_type_name == "std_msgs/msg/Int16MultiArray")
  {
    ros1_type_name = "std_msgs/Int16MultiArray";
    return true;
  }
  if (ros2_type_name == "std_msgs/msg/Int32MultiArray")
  {
    ros1_type_name = "std_msgs/Int32MultiArray";
    return true;
  }
  if (ros2_type_name == "std_msgs/msg/Int64MultiArray")
  {
    ros1_type_name = "std_msgs/Int64MultiArray";
    return true;
  }
  if (ros2_type_name == "std_msgs/msg/Int8MultiArray")
  {
    ros1_type_name = "std_msgs/Int8MultiArray";
    return true;
  }
  if (ros2_type_name == "std_msgs/msg/String")
  {
    ros1_type_name = "std_msgs/String";
    return true;
  }
  if (ros2_type_name == "std_msgs/msg/UInt16")
  {
    ros1_type_name = "std_msgs/UInt16";
    return true;
  }
  if (ros2_type_name == "std_msgs/msg/UInt16MultiArray")
  {
    ros1_type_name = "std_msgs/UInt16MultiArray";
    return true;
  }
  if (ros2_type_name == "std_msgs/msg/UInt32")
  {
    ros1_type_name = "std_msgs/UInt32";
    return true;
  }
  if (ros2_type_name == "std_msgs/msg/UInt32MultiArray")
  {
    ros1_type_name = "std_msgs/UInt32MultiArray";
    return true;
  }
  if (ros2_type_name == "std_msgs/msg/UInt64")
  {
    ros1_type_name = "std_msgs/UInt64";
    return true;
  }
  if (ros2_type_name == "std_msgs/msg/UInt64MultiArray")
  {
    ros1_type_name = "std_msgs/UInt64MultiArray";
    return true;
  }
  if (ros2_type_name == "std_msgs/msg/UInt8")
  {
    ros1_type_name = "std_msgs/UInt8";
    return true;
  }
  if (ros2_type_name == "std_msgs/msg/UInt8MultiArray")
  {
    ros1_type_name = "std_msgs/UInt8MultiArray";
    return true;
  }
  if (ros2_type_name == "stereo_msgs/msg/DisparityImage")
  {
    ros1_type_name = "stereo_msgs/DisparityImage";
    return true;
  }
  if (ros2_type_name == "tf2_msgs/msg/TF2Error")
  {
    ros1_type_name = "tf2_msgs/TF2Error";
    return true;
  }
  if (ros2_type_name == "tf2_msgs/msg/TFMessage")
  {
    ros1_type_name = "tf2_msgs/TFMessage";
    return true;
  }
  if (ros2_type_name == "trajectory_msgs/msg/JointTrajectory")
  {
    ros1_type_name = "trajectory_msgs/JointTrajectory";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/AttachedCollisionObject")
  {
    ros1_type_name = "moveit_msgs/AttachedCollisionObject";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/Grasp")
  {
    ros1_type_name = "moveit_msgs/Grasp";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/PlaceLocation")
  {
    ros1_type_name = "moveit_msgs/PlaceLocation";
    return true;
  }
  if (ros2_type_name == "trajectory_msgs/msg/JointTrajectoryPoint")
  {
    ros1_type_name = "trajectory_msgs/JointTrajectoryPoint";
    return true;
  }
  if (ros2_type_name == "control_msgs/msg/JointTrajectoryControllerState")
  {
    ros1_type_name = "control_msgs/JointTrajectoryControllerState";
    return true;
  }
  if (ros2_type_name == "trajectory_msgs/msg/MultiDOFJointTrajectory")
  {
    ros1_type_name = "trajectory_msgs/MultiDOFJointTrajectory";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/RobotTrajectory")
  {
    ros1_type_name = "moveit_msgs/RobotTrajectory";
    return true;
  }
  if (ros2_type_name == "moveit_msgs/msg/MotionPlanResponse")
  {
    ros1_type_name = "moveit_msgs/MotionPlanResponse";
    return true;
  }
  if (ros2_type_name == "trajectory_msgs/msg/MultiDOFJointTrajectoryPoint")
  {
    ros1_type_name = "trajectory_msgs/MultiDOFJointTrajectoryPoint";
    return true;
  }
  if (ros2_type_name == "visualization_msgs/msg/ImageMarker")
  {
    ros1_type_name = "visualization_msgs/ImageMarker";
    return true;
  }
  if (ros2_type_name == "visualization_msgs/msg/InteractiveMarker")
  {
    ros1_type_name = "visualization_msgs/InteractiveMarker";
    return true;
  }
  if (ros2_type_name == "visualization_msgs/msg/InteractiveMarkerControl")
  {
    ros1_type_name = "visualization_msgs/InteractiveMarkerControl";
    return true;
  }
  if (ros2_type_name == "visualization_msgs/msg/InteractiveMarkerFeedback")
  {
    ros1_type_name = "visualization_msgs/InteractiveMarkerFeedback";
    return true;
  }
  if (ros2_type_name == "visualization_msgs/msg/InteractiveMarkerInit")
  {
    ros1_type_name = "visualization_msgs/InteractiveMarkerInit";
    return true;
  }
  if (ros2_type_name == "visualization_msgs/msg/InteractiveMarkerPose")
  {
    ros1_type_name = "visualization_msgs/InteractiveMarkerPose";
    return true;
  }
  if (ros2_type_name == "visualization_msgs/msg/InteractiveMarkerUpdate")
  {
    ros1_type_name = "visualization_msgs/InteractiveMarkerUpdate";
    return true;
  }
  if (ros2_type_name == "visualization_msgs/msg/Marker")
  {
    ros1_type_name = "visualization_msgs/Marker";
    return true;
  }
  if (ros2_type_name == "visualization_msgs/msg/MarkerArray")
  {
    ros1_type_name = "visualization_msgs/MarkerArray";
    return true;
  }
  if (ros2_type_name == "visualization_msgs/msg/MenuEntry")
  {
    ros1_type_name = "visualization_msgs/MenuEntry";
    return true;
  }
  if (ros2_type_name == "rcl_interfaces/msg/Log")
  {
    ros1_type_name = "rosgraph_msgs/Log";
    return true;
  }
  if (ros2_type_name == "tf2_msgs/msg/TFMessage")
  {
    ros1_type_name = "tf/tfMessage";
    return true;
  }
  if (ros2_type_name == "unique_identifier_msgs/msg/UUID")
  {
    ros1_type_name = "uuid_msgs/UniqueID";
    return true;
  }

  return false;
}

std::multimap<std::string, std::string>
get_all_message_mappings_2to1()
{
  static std::multimap<std::string, std::string> mappings = {
    {
      "builtin_interfaces/msg/Duration",  // ROS 2
      "std_msgs/Duration"   // ROS 1
    },
    {
      "builtin_interfaces/msg/Time",  // ROS 2
      "std_msgs/Time"   // ROS 1
    },
    {
      "actionlib_msgs/msg/GoalID",  // ROS 2
      "actionlib_msgs/GoalID"   // ROS 1
    },
    {
      "actionlib_msgs/msg/GoalStatus",  // ROS 2
      "actionlib_msgs/GoalStatus"   // ROS 1
    },
    {
      "cartographer_ros_msgs/msg/StatusCode",  // ROS 2
      "cartographer_ros_msgs/StatusCode"   // ROS 1
    },
    {
      "cartographer_ros_msgs/msg/StatusResponse",  // ROS 2
      "cartographer_ros_msgs/StatusResponse"   // ROS 1
    },
    {
      "control_msgs/msg/GripperCommand",  // ROS 2
      "control_msgs/GripperCommand"   // ROS 1
    },
    {
      "control_msgs/msg/JointTolerance",  // ROS 2
      "control_msgs/JointTolerance"   // ROS 1
    },
    {
      "diagnostic_msgs/msg/DiagnosticStatus",  // ROS 2
      "diagnostic_msgs/DiagnosticStatus"   // ROS 1
    },
    {
      "diagnostic_msgs/msg/KeyValue",  // ROS 2
      "diagnostic_msgs/KeyValue"   // ROS 1
    },
    {
      "gazebo_msgs/msg/LinkStates",  // ROS 2
      "gazebo_msgs/LinkStates"   // ROS 1
    },
    {
      "gazebo_msgs/msg/ModelStates",  // ROS 2
      "gazebo_msgs/ModelStates"   // ROS 1
    },
    {
      "gazebo_msgs/msg/ODEJointProperties",  // ROS 2
      "gazebo_msgs/ODEJointProperties"   // ROS 1
    },
    {
      "gazebo_msgs/msg/ODEPhysics",  // ROS 2
      "gazebo_msgs/ODEPhysics"   // ROS 1
    },
    {
      "geometry_msgs/msg/Point",  // ROS 2
      "geometry_msgs/Point"   // ROS 1
    },
    {
      "geometry_msgs/msg/Point32",  // ROS 2
      "geometry_msgs/Point32"   // ROS 1
    },
    {
      "geometry_msgs/msg/Polygon",  // ROS 2
      "geometry_msgs/Polygon"   // ROS 1
    },
    {
      "geometry_msgs/msg/Pose2D",  // ROS 2
      "geometry_msgs/Pose2D"   // ROS 1
    },
    {
      "geometry_msgs/msg/Quaternion",  // ROS 2
      "geometry_msgs/Quaternion"   // ROS 1
    },
    {
      "geometry_msgs/msg/Pose",  // ROS 2
      "geometry_msgs/Pose"   // ROS 1
    },
    {
      "cartographer_ros_msgs/msg/LandmarkEntry",  // ROS 2
      "cartographer_ros_msgs/LandmarkEntry"   // ROS 1
    },
    {
      "cartographer_ros_msgs/msg/SubmapEntry",  // ROS 2
      "cartographer_ros_msgs/SubmapEntry"   // ROS 1
    },
    {
      "cartographer_ros_msgs/msg/SubmapTexture",  // ROS 2
      "cartographer_ros_msgs/SubmapTexture"   // ROS 1
    },
    {
      "geometry_msgs/msg/PoseWithCovariance",  // ROS 2
      "geometry_msgs/PoseWithCovariance"   // ROS 1
    },
    {
      "geometry_msgs/msg/Vector3",  // ROS 2
      "geometry_msgs/Vector3"   // ROS 1
    },
    {
      "geometry_msgs/msg/Accel",  // ROS 2
      "geometry_msgs/Accel"   // ROS 1
    },
    {
      "geometry_msgs/msg/AccelWithCovariance",  // ROS 2
      "geometry_msgs/AccelWithCovariance"   // ROS 1
    },
    {
      "geometry_msgs/msg/Inertia",  // ROS 2
      "geometry_msgs/Inertia"   // ROS 1
    },
    {
      "geometry_msgs/msg/Transform",  // ROS 2
      "geometry_msgs/Transform"   // ROS 1
    },
    {
      "geometry_msgs/msg/Twist",  // ROS 2
      "geometry_msgs/Twist"   // ROS 1
    },
    {
      "gazebo_msgs/msg/LinkState",  // ROS 2
      "gazebo_msgs/LinkState"   // ROS 1
    },
    {
      "gazebo_msgs/msg/ModelState",  // ROS 2
      "gazebo_msgs/ModelState"   // ROS 1
    },
    {
      "geometry_msgs/msg/TwistWithCovariance",  // ROS 2
      "geometry_msgs/TwistWithCovariance"   // ROS 1
    },
    {
      "geometry_msgs/msg/Wrench",  // ROS 2
      "geometry_msgs/Wrench"   // ROS 1
    },
    {
      "gazebo_msgs/msg/ContactState",  // ROS 2
      "gazebo_msgs/ContactState"   // ROS 1
    },
    {
      "map_msgs/msg/ProjectedMapInfo",  // ROS 2
      "map_msgs/ProjectedMapInfo"   // ROS 1
    },
    {
      "moveit_msgs/msg/AllowedCollisionEntry",  // ROS 2
      "moveit_msgs/AllowedCollisionEntry"   // ROS 1
    },
    {
      "moveit_msgs/msg/AllowedCollisionMatrix",  // ROS 2
      "moveit_msgs/AllowedCollisionMatrix"   // ROS 1
    },
    {
      "moveit_msgs/msg/BoundingVolume",  // ROS 2
      "moveit_msgs/BoundingVolume"   // ROS 1
    },
    {
      "moveit_msgs/msg/CartesianPoint",  // ROS 2
      "moveit_msgs/CartesianPoint"   // ROS 1
    },
    {
      "moveit_msgs/msg/CartesianTrajectoryPoint",  // ROS 2
      "moveit_msgs/CartesianTrajectoryPoint"   // ROS 1
    },
    {
      "moveit_msgs/msg/ConstraintEvalResult",  // ROS 2
      "moveit_msgs/ConstraintEvalResult"   // ROS 1
    },
    {
      "moveit_msgs/msg/Constraints",  // ROS 2
      "moveit_msgs/Constraints"   // ROS 1
    },
    {
      "moveit_msgs/msg/CostSource",  // ROS 2
      "moveit_msgs/CostSource"   // ROS 1
    },
    {
      "moveit_msgs/msg/JointConstraint",  // ROS 2
      "moveit_msgs/JointConstraint"   // ROS 1
    },
    {
      "moveit_msgs/msg/JointLimits",  // ROS 2
      "moveit_msgs/JointLimits"   // ROS 1
    },
    {
      "moveit_msgs/msg/KinematicSolverInfo",  // ROS 2
      "moveit_msgs/KinematicSolverInfo"   // ROS 1
    },
    {
      "moveit_msgs/msg/LinkPadding",  // ROS 2
      "moveit_msgs/LinkPadding"   // ROS 1
    },
    {
      "moveit_msgs/msg/LinkScale",  // ROS 2
      "moveit_msgs/LinkScale"   // ROS 1
    },
    {
      "moveit_msgs/msg/MotionSequenceRequest",  // ROS 2
      "moveit_msgs/MotionSequenceRequest"   // ROS 1
    },
    {
      "moveit_msgs/msg/MoveItErrorCodes",  // ROS 2
      "moveit_msgs/MoveItErrorCodes"   // ROS 1
    },
    {
      "moveit_msgs/msg/OrientedBoundingBox",  // ROS 2
      "moveit_msgs/OrientedBoundingBox"   // ROS 1
    },
    {
      "moveit_msgs/msg/PlannerInterfaceDescription",  // ROS 2
      "moveit_msgs/PlannerInterfaceDescription"   // ROS 1
    },
    {
      "moveit_msgs/msg/PlannerParams",  // ROS 2
      "moveit_msgs/PlannerParams"   // ROS 1
    },
    {
      "moveit_msgs/msg/PlanningSceneComponents",  // ROS 2
      "moveit_msgs/PlanningSceneComponents"   // ROS 1
    },
    {
      "moveit_msgs/msg/TrajectoryConstraints",  // ROS 2
      "moveit_msgs/TrajectoryConstraints"   // ROS 1
    },
    {
      "nav_msgs/msg/MapMetaData",  // ROS 2
      "nav_msgs/MapMetaData"   // ROS 1
    },
    {
      "object_recognition_msgs/msg/ObjectType",  // ROS 2
      "object_recognition_msgs/ObjectType"   // ROS 1
    },
    {
      "pcl_msgs/msg/Vertices",  // ROS 2
      "pcl_msgs/Vertices"   // ROS 1
    },
    {
      "rosgraph_msgs/msg/Clock",  // ROS 2
      "rosgraph_msgs/Clock"   // ROS 1
    },
    {
      "sensor_msgs/msg/ChannelFloat32",  // ROS 2
      "sensor_msgs/ChannelFloat32"   // ROS 1
    },
    {
      "sensor_msgs/msg/JoyFeedback",  // ROS 2
      "sensor_msgs/JoyFeedback"   // ROS 1
    },
    {
      "sensor_msgs/msg/JoyFeedbackArray",  // ROS 2
      "sensor_msgs/JoyFeedbackArray"   // ROS 1
    },
    {
      "sensor_msgs/msg/LaserEcho",  // ROS 2
      "sensor_msgs/LaserEcho"   // ROS 1
    },
    {
      "sensor_msgs/msg/NavSatStatus",  // ROS 2
      "sensor_msgs/NavSatStatus"   // ROS 1
    },
    {
      "sensor_msgs/msg/PointField",  // ROS 2
      "sensor_msgs/PointField"   // ROS 1
    },
    {
      "sensor_msgs/msg/RegionOfInterest",  // ROS 2
      "sensor_msgs/RegionOfInterest"   // ROS 1
    },
    {
      "shape_msgs/msg/Mesh",  // ROS 2
      "shape_msgs/Mesh"   // ROS 1
    },
    {
      "shape_msgs/msg/MeshTriangle",  // ROS 2
      "shape_msgs/MeshTriangle"   // ROS 1
    },
    {
      "shape_msgs/msg/Plane",  // ROS 2
      "shape_msgs/Plane"   // ROS 1
    },
    {
      "shape_msgs/msg/SolidPrimitive",  // ROS 2
      "shape_msgs/SolidPrimitive"   // ROS 1
    },
    {
      "std_msgs/msg/Bool",  // ROS 2
      "std_msgs/Bool"   // ROS 1
    },
    {
      "std_msgs/msg/Byte",  // ROS 2
      "std_msgs/Byte"   // ROS 1
    },
    {
      "std_msgs/msg/Char",  // ROS 2
      "std_msgs/Char"   // ROS 1
    },
    {
      "std_msgs/msg/ColorRGBA",  // ROS 2
      "std_msgs/ColorRGBA"   // ROS 1
    },
    {
      "moveit_msgs/msg/ObjectColor",  // ROS 2
      "moveit_msgs/ObjectColor"   // ROS 1
    },
    {
      "std_msgs/msg/Empty",  // ROS 2
      "std_msgs/Empty"   // ROS 1
    },
    {
      "std_msgs/msg/Float32",  // ROS 2
      "std_msgs/Float32"   // ROS 1
    },
    {
      "std_msgs/msg/Float64",  // ROS 2
      "std_msgs/Float64"   // ROS 1
    },
    {
      "std_msgs/msg/Header",  // ROS 2
      "std_msgs/Header"   // ROS 1
    },
    {
      "actionlib_msgs/msg/GoalStatusArray",  // ROS 2
      "actionlib_msgs/GoalStatusArray"   // ROS 1
    },
    {
      "cartographer_ros_msgs/msg/SubmapList",  // ROS 2
      "cartographer_ros_msgs/SubmapList"   // ROS 1
    },
    {
      "control_msgs/msg/JointControllerState",  // ROS 2
      "control_msgs/JointControllerState"   // ROS 1
    },
    {
      "control_msgs/msg/JointJog",  // ROS 2
      "control_msgs/JointJog"   // ROS 1
    },
    {
      "control_msgs/msg/PidState",  // ROS 2
      "control_msgs/PidState"   // ROS 1
    },
    {
      "diagnostic_msgs/msg/DiagnosticArray",  // ROS 2
      "diagnostic_msgs/DiagnosticArray"   // ROS 1
    },
    {
      "gazebo_msgs/msg/ContactsState",  // ROS 2
      "gazebo_msgs/ContactsState"   // ROS 1
    },
    {
      "gazebo_msgs/msg/WorldState",  // ROS 2
      "gazebo_msgs/WorldState"   // ROS 1
    },
    {
      "geometry_msgs/msg/AccelStamped",  // ROS 2
      "geometry_msgs/AccelStamped"   // ROS 1
    },
    {
      "geometry_msgs/msg/AccelWithCovarianceStamped",  // ROS 2
      "geometry_msgs/AccelWithCovarianceStamped"   // ROS 1
    },
    {
      "geometry_msgs/msg/InertiaStamped",  // ROS 2
      "geometry_msgs/InertiaStamped"   // ROS 1
    },
    {
      "geometry_msgs/msg/PointStamped",  // ROS 2
      "geometry_msgs/PointStamped"   // ROS 1
    },
    {
      "geometry_msgs/msg/PolygonStamped",  // ROS 2
      "geometry_msgs/PolygonStamped"   // ROS 1
    },
    {
      "geometry_msgs/msg/PoseArray",  // ROS 2
      "geometry_msgs/PoseArray"   // ROS 1
    },
    {
      "geometry_msgs/msg/PoseStamped",  // ROS 2
      "geometry_msgs/PoseStamped"   // ROS 1
    },
    {
      "geometry_msgs/msg/PoseWithCovarianceStamped",  // ROS 2
      "geometry_msgs/PoseWithCovarianceStamped"   // ROS 1
    },
    {
      "geometry_msgs/msg/QuaternionStamped",  // ROS 2
      "geometry_msgs/QuaternionStamped"   // ROS 1
    },
    {
      "geometry_msgs/msg/TransformStamped",  // ROS 2
      "geometry_msgs/TransformStamped"   // ROS 1
    },
    {
      "geometry_msgs/msg/TwistStamped",  // ROS 2
      "geometry_msgs/TwistStamped"   // ROS 1
    },
    {
      "geometry_msgs/msg/TwistWithCovarianceStamped",  // ROS 2
      "geometry_msgs/TwistWithCovarianceStamped"   // ROS 1
    },
    {
      "geometry_msgs/msg/Vector3Stamped",  // ROS 2
      "geometry_msgs/Vector3Stamped"   // ROS 1
    },
    {
      "geometry_msgs/msg/WrenchStamped",  // ROS 2
      "geometry_msgs/WrenchStamped"   // ROS 1
    },
    {
      "map_msgs/msg/OccupancyGridUpdate",  // ROS 2
      "map_msgs/OccupancyGridUpdate"   // ROS 1
    },
    {
      "moveit_msgs/msg/CartesianTrajectory",  // ROS 2
      "moveit_msgs/CartesianTrajectory"   // ROS 1
    },
    {
      "moveit_msgs/msg/CollisionObject",  // ROS 2
      "moveit_msgs/CollisionObject"   // ROS 1
    },
    {
      "moveit_msgs/msg/ContactInformation",  // ROS 2
      "moveit_msgs/ContactInformation"   // ROS 1
    },
    {
      "moveit_msgs/msg/GenericTrajectory",  // ROS 2
      "moveit_msgs/GenericTrajectory"   // ROS 1
    },
    {
      "moveit_msgs/msg/GripperTranslation",  // ROS 2
      "moveit_msgs/GripperTranslation"   // ROS 1
    },
    {
      "moveit_msgs/msg/OrientationConstraint",  // ROS 2
      "moveit_msgs/OrientationConstraint"   // ROS 1
    },
    {
      "moveit_msgs/msg/PositionConstraint",  // ROS 2
      "moveit_msgs/PositionConstraint"   // ROS 1
    },
    {
      "moveit_msgs/msg/VisibilityConstraint",  // ROS 2
      "moveit_msgs/VisibilityConstraint"   // ROS 1
    },
    {
      "moveit_msgs/msg/WorkspaceParameters",  // ROS 2
      "moveit_msgs/WorkspaceParameters"   // ROS 1
    },
    {
      "nav_msgs/msg/GridCells",  // ROS 2
      "nav_msgs/GridCells"   // ROS 1
    },
    {
      "nav_msgs/msg/OccupancyGrid",  // ROS 2
      "nav_msgs/OccupancyGrid"   // ROS 1
    },
    {
      "map_msgs/msg/ProjectedMap",  // ROS 2
      "map_msgs/ProjectedMap"   // ROS 1
    },
    {
      "nav_msgs/msg/Odometry",  // ROS 2
      "nav_msgs/Odometry"   // ROS 1
    },
    {
      "nav_msgs/msg/Path",  // ROS 2
      "nav_msgs/Path"   // ROS 1
    },
    {
      "object_recognition_msgs/msg/RecognizedObject",  // ROS 2
      "object_recognition_msgs/RecognizedObject"   // ROS 1
    },
    {
      "object_recognition_msgs/msg/RecognizedObjectArray",  // ROS 2
      "object_recognition_msgs/RecognizedObjectArray"   // ROS 1
    },
    {
      "object_recognition_msgs/msg/Table",  // ROS 2
      "object_recognition_msgs/Table"   // ROS 1
    },
    {
      "object_recognition_msgs/msg/TableArray",  // ROS 2
      "object_recognition_msgs/TableArray"   // ROS 1
    },
    {
      "octomap_msgs/msg/Octomap",  // ROS 2
      "octomap_msgs/Octomap"   // ROS 1
    },
    {
      "octomap_msgs/msg/OctomapWithPose",  // ROS 2
      "octomap_msgs/OctomapWithPose"   // ROS 1
    },
    {
      "moveit_msgs/msg/PlanningSceneWorld",  // ROS 2
      "moveit_msgs/PlanningSceneWorld"   // ROS 1
    },
    {
      "pcl_msgs/msg/ModelCoefficients",  // ROS 2
      "pcl_msgs/ModelCoefficients"   // ROS 1
    },
    {
      "pcl_msgs/msg/PointIndices",  // ROS 2
      "pcl_msgs/PointIndices"   // ROS 1
    },
    {
      "sensor_msgs/msg/BatteryState",  // ROS 2
      "sensor_msgs/BatteryState"   // ROS 1
    },
    {
      "sensor_msgs/msg/CameraInfo",  // ROS 2
      "sensor_msgs/CameraInfo"   // ROS 1
    },
    {
      "sensor_msgs/msg/CompressedImage",  // ROS 2
      "sensor_msgs/CompressedImage"   // ROS 1
    },
    {
      "sensor_msgs/msg/FluidPressure",  // ROS 2
      "sensor_msgs/FluidPressure"   // ROS 1
    },
    {
      "sensor_msgs/msg/Illuminance",  // ROS 2
      "sensor_msgs/Illuminance"   // ROS 1
    },
    {
      "sensor_msgs/msg/Image",  // ROS 2
      "sensor_msgs/Image"   // ROS 1
    },
    {
      "sensor_msgs/msg/Imu",  // ROS 2
      "sensor_msgs/Imu"   // ROS 1
    },
    {
      "sensor_msgs/msg/JointState",  // ROS 2
      "sensor_msgs/JointState"   // ROS 1
    },
    {
      "sensor_msgs/msg/Joy",  // ROS 2
      "sensor_msgs/Joy"   // ROS 1
    },
    {
      "sensor_msgs/msg/LaserScan",  // ROS 2
      "sensor_msgs/LaserScan"   // ROS 1
    },
    {
      "sensor_msgs/msg/MagneticField",  // ROS 2
      "sensor_msgs/MagneticField"   // ROS 1
    },
    {
      "sensor_msgs/msg/MultiDOFJointState",  // ROS 2
      "sensor_msgs/MultiDOFJointState"   // ROS 1
    },
    {
      "moveit_msgs/msg/RobotState",  // ROS 2
      "moveit_msgs/RobotState"   // ROS 1
    },
    {
      "moveit_msgs/msg/DisplayRobotState",  // ROS 2
      "moveit_msgs/DisplayRobotState"   // ROS 1
    },
    {
      "moveit_msgs/msg/DisplayTrajectory",  // ROS 2
      "moveit_msgs/DisplayTrajectory"   // ROS 1
    },
    {
      "moveit_msgs/msg/MotionPlanDetailedResponse",  // ROS 2
      "moveit_msgs/MotionPlanDetailedResponse"   // ROS 1
    },
    {
      "moveit_msgs/msg/MotionPlanRequest",  // ROS 2
      "moveit_msgs/MotionPlanRequest"   // ROS 1
    },
    {
      "moveit_msgs/msg/MotionSequenceItem",  // ROS 2
      "moveit_msgs/MotionSequenceItem"   // ROS 1
    },
    {
      "moveit_msgs/msg/MotionSequenceResponse",  // ROS 2
      "moveit_msgs/MotionSequenceResponse"   // ROS 1
    },
    {
      "moveit_msgs/msg/PlanningScene",  // ROS 2
      "moveit_msgs/PlanningScene"   // ROS 1
    },
    {
      "moveit_msgs/msg/PlanningOptions",  // ROS 2
      "moveit_msgs/PlanningOptions"   // ROS 1
    },
    {
      "moveit_msgs/msg/PositionIKRequest",  // ROS 2
      "moveit_msgs/PositionIKRequest"   // ROS 1
    },
    {
      "sensor_msgs/msg/MultiEchoLaserScan",  // ROS 2
      "sensor_msgs/MultiEchoLaserScan"   // ROS 1
    },
    {
      "sensor_msgs/msg/NavSatFix",  // ROS 2
      "sensor_msgs/NavSatFix"   // ROS 1
    },
    {
      "sensor_msgs/msg/PointCloud",  // ROS 2
      "sensor_msgs/PointCloud"   // ROS 1
    },
    {
      "sensor_msgs/msg/PointCloud2",  // ROS 2
      "sensor_msgs/PointCloud2"   // ROS 1
    },
    {
      "map_msgs/msg/PointCloud2Update",  // ROS 2
      "map_msgs/PointCloud2Update"   // ROS 1
    },
    {
      "object_recognition_msgs/msg/ObjectInformation",  // ROS 2
      "object_recognition_msgs/ObjectInformation"   // ROS 1
    },
    {
      "pcl_msgs/msg/PolygonMesh",  // ROS 2
      "pcl_msgs/PolygonMesh"   // ROS 1
    },
    {
      "sensor_msgs/msg/Range",  // ROS 2
      "sensor_msgs/Range"   // ROS 1
    },
    {
      "sensor_msgs/msg/RelativeHumidity",  // ROS 2
      "sensor_msgs/RelativeHumidity"   // ROS 1
    },
    {
      "sensor_msgs/msg/Temperature",  // ROS 2
      "sensor_msgs/Temperature"   // ROS 1
    },
    {
      "sensor_msgs/msg/TimeReference",  // ROS 2
      "sensor_msgs/TimeReference"   // ROS 1
    },
    {
      "std_msgs/msg/Int16",  // ROS 2
      "std_msgs/Int16"   // ROS 1
    },
    {
      "std_msgs/msg/Int32",  // ROS 2
      "std_msgs/Int32"   // ROS 1
    },
    {
      "std_msgs/msg/Int64",  // ROS 2
      "std_msgs/Int64"   // ROS 1
    },
    {
      "std_msgs/msg/Int8",  // ROS 2
      "std_msgs/Int8"   // ROS 1
    },
    {
      "std_msgs/msg/MultiArrayDimension",  // ROS 2
      "std_msgs/MultiArrayDimension"   // ROS 1
    },
    {
      "std_msgs/msg/MultiArrayLayout",  // ROS 2
      "std_msgs/MultiArrayLayout"   // ROS 1
    },
    {
      "std_msgs/msg/ByteMultiArray",  // ROS 2
      "std_msgs/ByteMultiArray"   // ROS 1
    },
    {
      "std_msgs/msg/Float32MultiArray",  // ROS 2
      "std_msgs/Float32MultiArray"   // ROS 1
    },
    {
      "std_msgs/msg/Float64MultiArray",  // ROS 2
      "std_msgs/Float64MultiArray"   // ROS 1
    },
    {
      "std_msgs/msg/Int16MultiArray",  // ROS 2
      "std_msgs/Int16MultiArray"   // ROS 1
    },
    {
      "std_msgs/msg/Int32MultiArray",  // ROS 2
      "std_msgs/Int32MultiArray"   // ROS 1
    },
    {
      "std_msgs/msg/Int64MultiArray",  // ROS 2
      "std_msgs/Int64MultiArray"   // ROS 1
    },
    {
      "std_msgs/msg/Int8MultiArray",  // ROS 2
      "std_msgs/Int8MultiArray"   // ROS 1
    },
    {
      "std_msgs/msg/String",  // ROS 2
      "std_msgs/String"   // ROS 1
    },
    {
      "std_msgs/msg/UInt16",  // ROS 2
      "std_msgs/UInt16"   // ROS 1
    },
    {
      "std_msgs/msg/UInt16MultiArray",  // ROS 2
      "std_msgs/UInt16MultiArray"   // ROS 1
    },
    {
      "std_msgs/msg/UInt32",  // ROS 2
      "std_msgs/UInt32"   // ROS 1
    },
    {
      "std_msgs/msg/UInt32MultiArray",  // ROS 2
      "std_msgs/UInt32MultiArray"   // ROS 1
    },
    {
      "std_msgs/msg/UInt64",  // ROS 2
      "std_msgs/UInt64"   // ROS 1
    },
    {
      "std_msgs/msg/UInt64MultiArray",  // ROS 2
      "std_msgs/UInt64MultiArray"   // ROS 1
    },
    {
      "std_msgs/msg/UInt8",  // ROS 2
      "std_msgs/UInt8"   // ROS 1
    },
    {
      "std_msgs/msg/UInt8MultiArray",  // ROS 2
      "std_msgs/UInt8MultiArray"   // ROS 1
    },
    {
      "stereo_msgs/msg/DisparityImage",  // ROS 2
      "stereo_msgs/DisparityImage"   // ROS 1
    },
    {
      "tf2_msgs/msg/TF2Error",  // ROS 2
      "tf2_msgs/TF2Error"   // ROS 1
    },
    {
      "tf2_msgs/msg/TFMessage",  // ROS 2
      "tf2_msgs/TFMessage"   // ROS 1
    },
    {
      "trajectory_msgs/msg/JointTrajectory",  // ROS 2
      "trajectory_msgs/JointTrajectory"   // ROS 1
    },
    {
      "moveit_msgs/msg/AttachedCollisionObject",  // ROS 2
      "moveit_msgs/AttachedCollisionObject"   // ROS 1
    },
    {
      "moveit_msgs/msg/Grasp",  // ROS 2
      "moveit_msgs/Grasp"   // ROS 1
    },
    {
      "moveit_msgs/msg/PlaceLocation",  // ROS 2
      "moveit_msgs/PlaceLocation"   // ROS 1
    },
    {
      "trajectory_msgs/msg/JointTrajectoryPoint",  // ROS 2
      "trajectory_msgs/JointTrajectoryPoint"   // ROS 1
    },
    {
      "control_msgs/msg/JointTrajectoryControllerState",  // ROS 2
      "control_msgs/JointTrajectoryControllerState"   // ROS 1
    },
    {
      "trajectory_msgs/msg/MultiDOFJointTrajectory",  // ROS 2
      "trajectory_msgs/MultiDOFJointTrajectory"   // ROS 1
    },
    {
      "moveit_msgs/msg/RobotTrajectory",  // ROS 2
      "moveit_msgs/RobotTrajectory"   // ROS 1
    },
    {
      "moveit_msgs/msg/MotionPlanResponse",  // ROS 2
      "moveit_msgs/MotionPlanResponse"   // ROS 1
    },
    {
      "trajectory_msgs/msg/MultiDOFJointTrajectoryPoint",  // ROS 2
      "trajectory_msgs/MultiDOFJointTrajectoryPoint"   // ROS 1
    },
    {
      "visualization_msgs/msg/ImageMarker",  // ROS 2
      "visualization_msgs/ImageMarker"   // ROS 1
    },
    {
      "visualization_msgs/msg/InteractiveMarker",  // ROS 2
      "visualization_msgs/InteractiveMarker"   // ROS 1
    },
    {
      "visualization_msgs/msg/InteractiveMarkerControl",  // ROS 2
      "visualization_msgs/InteractiveMarkerControl"   // ROS 1
    },
    {
      "visualization_msgs/msg/InteractiveMarkerFeedback",  // ROS 2
      "visualization_msgs/InteractiveMarkerFeedback"   // ROS 1
    },
    {
      "visualization_msgs/msg/InteractiveMarkerInit",  // ROS 2
      "visualization_msgs/InteractiveMarkerInit"   // ROS 1
    },
    {
      "visualization_msgs/msg/InteractiveMarkerPose",  // ROS 2
      "visualization_msgs/InteractiveMarkerPose"   // ROS 1
    },
    {
      "visualization_msgs/msg/InteractiveMarkerUpdate",  // ROS 2
      "visualization_msgs/InteractiveMarkerUpdate"   // ROS 1
    },
    {
      "visualization_msgs/msg/Marker",  // ROS 2
      "visualization_msgs/Marker"   // ROS 1
    },
    {
      "visualization_msgs/msg/MarkerArray",  // ROS 2
      "visualization_msgs/MarkerArray"   // ROS 1
    },
    {
      "visualization_msgs/msg/MenuEntry",  // ROS 2
      "visualization_msgs/MenuEntry"   // ROS 1
    },
    {
      "rcl_interfaces/msg/Log",  // ROS 2
      "rosgraph_msgs/Log"   // ROS 1
    },
    {
      "tf2_msgs/msg/TFMessage",  // ROS 2
      "tf/tfMessage"   // ROS 1
    },
    {
      "unique_identifier_msgs/msg/UUID",  // ROS 2
      "uuid_msgs/UniqueID"   // ROS 1
    },
  };
  return mappings;
}

std::multimap<std::string, std::string>
get_all_service_mappings_2to1()
{
  static std::multimap<std::string, std::string> mappings = {
    {
      "cartographer_ros_msgs/srv/FinishTrajectory",  // ROS 2
      "cartographer_ros_msgs/FinishTrajectory"   // ROS 1
    },
    {
      "cartographer_ros_msgs/srv/SubmapQuery",  // ROS 2
      "cartographer_ros_msgs/SubmapQuery"   // ROS 1
    },
    {
      "control_msgs/srv/QueryCalibrationState",  // ROS 2
      "control_msgs/QueryCalibrationState"   // ROS 1
    },
    {
      "diagnostic_msgs/srv/AddDiagnostics",  // ROS 2
      "diagnostic_msgs/AddDiagnostics"   // ROS 1
    },
    {
      "diagnostic_msgs/srv/SelfTest",  // ROS 2
      "diagnostic_msgs/SelfTest"   // ROS 1
    },
    {
      "gazebo_msgs/srv/BodyRequest",  // ROS 2
      "gazebo_msgs/BodyRequest"   // ROS 1
    },
    {
      "gazebo_msgs/srv/DeleteLight",  // ROS 2
      "gazebo_msgs/DeleteLight"   // ROS 1
    },
    {
      "gazebo_msgs/srv/DeleteModel",  // ROS 2
      "gazebo_msgs/DeleteModel"   // ROS 1
    },
    {
      "gazebo_msgs/srv/GetJointProperties",  // ROS 2
      "gazebo_msgs/GetJointProperties"   // ROS 1
    },
    {
      "gazebo_msgs/srv/GetLightProperties",  // ROS 2
      "gazebo_msgs/GetLightProperties"   // ROS 1
    },
    {
      "gazebo_msgs/srv/GetLinkProperties",  // ROS 2
      "gazebo_msgs/GetLinkProperties"   // ROS 1
    },
    {
      "gazebo_msgs/srv/GetLinkState",  // ROS 2
      "gazebo_msgs/GetLinkState"   // ROS 1
    },
    {
      "gazebo_msgs/srv/GetModelProperties",  // ROS 2
      "gazebo_msgs/GetModelProperties"   // ROS 1
    },
    {
      "gazebo_msgs/srv/GetModelState",  // ROS 2
      "gazebo_msgs/GetModelState"   // ROS 1
    },
    {
      "gazebo_msgs/srv/GetPhysicsProperties",  // ROS 2
      "gazebo_msgs/GetPhysicsProperties"   // ROS 1
    },
    {
      "gazebo_msgs/srv/GetWorldProperties",  // ROS 2
      "gazebo_msgs/GetWorldProperties"   // ROS 1
    },
    {
      "gazebo_msgs/srv/JointRequest",  // ROS 2
      "gazebo_msgs/JointRequest"   // ROS 1
    },
    {
      "gazebo_msgs/srv/SetJointProperties",  // ROS 2
      "gazebo_msgs/SetJointProperties"   // ROS 1
    },
    {
      "gazebo_msgs/srv/SetJointTrajectory",  // ROS 2
      "gazebo_msgs/SetJointTrajectory"   // ROS 1
    },
    {
      "gazebo_msgs/srv/SetLinkProperties",  // ROS 2
      "gazebo_msgs/SetLinkProperties"   // ROS 1
    },
    {
      "gazebo_msgs/srv/SetLinkState",  // ROS 2
      "gazebo_msgs/SetLinkState"   // ROS 1
    },
    {
      "gazebo_msgs/srv/SetModelConfiguration",  // ROS 2
      "gazebo_msgs/SetModelConfiguration"   // ROS 1
    },
    {
      "gazebo_msgs/srv/SetModelState",  // ROS 2
      "gazebo_msgs/SetModelState"   // ROS 1
    },
    {
      "gazebo_msgs/srv/SetPhysicsProperties",  // ROS 2
      "gazebo_msgs/SetPhysicsProperties"   // ROS 1
    },
    {
      "gazebo_msgs/srv/SpawnModel",  // ROS 2
      "gazebo_msgs/SpawnModel"   // ROS 1
    },
    {
      "map_msgs/srv/GetMapROI",  // ROS 2
      "map_msgs/GetMapROI"   // ROS 1
    },
    {
      "map_msgs/srv/GetPointMap",  // ROS 2
      "map_msgs/GetPointMap"   // ROS 1
    },
    {
      "map_msgs/srv/GetPointMapROI",  // ROS 2
      "map_msgs/GetPointMapROI"   // ROS 1
    },
    {
      "map_msgs/srv/ProjectedMapsInfo",  // ROS 2
      "map_msgs/ProjectedMapsInfo"   // ROS 1
    },
    {
      "map_msgs/srv/SaveMap",  // ROS 2
      "map_msgs/SaveMap"   // ROS 1
    },
    {
      "map_msgs/srv/SetMapProjections",  // ROS 2
      "map_msgs/SetMapProjections"   // ROS 1
    },
    {
      "moveit_msgs/srv/ApplyPlanningScene",  // ROS 2
      "moveit_msgs/ApplyPlanningScene"   // ROS 1
    },
    {
      "moveit_msgs/srv/ChangeControlDimensions",  // ROS 2
      "moveit_msgs/ChangeControlDimensions"   // ROS 1
    },
    {
      "moveit_msgs/srv/ChangeDriftDimensions",  // ROS 2
      "moveit_msgs/ChangeDriftDimensions"   // ROS 1
    },
    {
      "moveit_msgs/srv/CheckIfRobotStateExistsInWarehouse",  // ROS 2
      "moveit_msgs/CheckIfRobotStateExistsInWarehouse"   // ROS 1
    },
    {
      "moveit_msgs/srv/DeleteRobotStateFromWarehouse",  // ROS 2
      "moveit_msgs/DeleteRobotStateFromWarehouse"   // ROS 1
    },
    {
      "moveit_msgs/srv/ExecuteKnownTrajectory",  // ROS 2
      "moveit_msgs/ExecuteKnownTrajectory"   // ROS 1
    },
    {
      "moveit_msgs/srv/GetCartesianPath",  // ROS 2
      "moveit_msgs/GetCartesianPath"   // ROS 1
    },
    {
      "moveit_msgs/srv/GetMotionPlan",  // ROS 2
      "moveit_msgs/GetMotionPlan"   // ROS 1
    },
    {
      "moveit_msgs/srv/GetMotionSequence",  // ROS 2
      "moveit_msgs/GetMotionSequence"   // ROS 1
    },
    {
      "moveit_msgs/srv/GetPlannerParams",  // ROS 2
      "moveit_msgs/GetPlannerParams"   // ROS 1
    },
    {
      "moveit_msgs/srv/GetPlanningScene",  // ROS 2
      "moveit_msgs/GetPlanningScene"   // ROS 1
    },
    {
      "moveit_msgs/srv/GetPositionFK",  // ROS 2
      "moveit_msgs/GetPositionFK"   // ROS 1
    },
    {
      "moveit_msgs/srv/GetPositionIK",  // ROS 2
      "moveit_msgs/GetPositionIK"   // ROS 1
    },
    {
      "moveit_msgs/srv/GetRobotStateFromWarehouse",  // ROS 2
      "moveit_msgs/GetRobotStateFromWarehouse"   // ROS 1
    },
    {
      "moveit_msgs/srv/GetStateValidity",  // ROS 2
      "moveit_msgs/GetStateValidity"   // ROS 1
    },
    {
      "moveit_msgs/srv/GraspPlanning",  // ROS 2
      "moveit_msgs/GraspPlanning"   // ROS 1
    },
    {
      "moveit_msgs/srv/ListRobotStatesInWarehouse",  // ROS 2
      "moveit_msgs/ListRobotStatesInWarehouse"   // ROS 1
    },
    {
      "moveit_msgs/srv/LoadMap",  // ROS 2
      "moveit_msgs/LoadMap"   // ROS 1
    },
    {
      "moveit_msgs/srv/QueryPlannerInterfaces",  // ROS 2
      "moveit_msgs/QueryPlannerInterfaces"   // ROS 1
    },
    {
      "moveit_msgs/srv/RenameRobotStateInWarehouse",  // ROS 2
      "moveit_msgs/RenameRobotStateInWarehouse"   // ROS 1
    },
    {
      "moveit_msgs/srv/SaveMap",  // ROS 2
      "moveit_msgs/SaveMap"   // ROS 1
    },
    {
      "moveit_msgs/srv/SaveRobotStateToWarehouse",  // ROS 2
      "moveit_msgs/SaveRobotStateToWarehouse"   // ROS 1
    },
    {
      "moveit_msgs/srv/SetPlannerParams",  // ROS 2
      "moveit_msgs/SetPlannerParams"   // ROS 1
    },
    {
      "moveit_msgs/srv/UpdatePointcloudOctomap",  // ROS 2
      "moveit_msgs/UpdatePointcloudOctomap"   // ROS 1
    },
    {
      "nav_msgs/srv/GetMap",  // ROS 2
      "nav_msgs/GetMap"   // ROS 1
    },
    {
      "nav_msgs/srv/GetPlan",  // ROS 2
      "nav_msgs/GetPlan"   // ROS 1
    },
    {
      "nav_msgs/srv/SetMap",  // ROS 2
      "nav_msgs/SetMap"   // ROS 1
    },
    {
      "object_recognition_msgs/srv/GetObjectInformation",  // ROS 2
      "object_recognition_msgs/GetObjectInformation"   // ROS 1
    },
    {
      "octomap_msgs/srv/BoundingBoxQuery",  // ROS 2
      "octomap_msgs/BoundingBoxQuery"   // ROS 1
    },
    {
      "octomap_msgs/srv/GetOctomap",  // ROS 2
      "octomap_msgs/GetOctomap"   // ROS 1
    },
    {
      "pcl_msgs/srv/UpdateFilename",  // ROS 2
      "pcl_msgs/UpdateFilename"   // ROS 1
    },
    {
      "sensor_msgs/srv/SetCameraInfo",  // ROS 2
      "sensor_msgs/SetCameraInfo"   // ROS 1
    },
    {
      "std_srvs/srv/Empty",  // ROS 2
      "std_srvs/Empty"   // ROS 1
    },
    {
      "std_srvs/srv/SetBool",  // ROS 2
      "std_srvs/SetBool"   // ROS 1
    },
    {
      "std_srvs/srv/Trigger",  // ROS 2
      "std_srvs/Trigger"   // ROS 1
    },
    {
      "tf2_msgs/srv/FrameGraph",  // ROS 2
      "tf2_msgs/FrameGraph"   // ROS 1
    },
    {
      "turtlesim/srv/Kill",  // ROS 2
      "turtlesim/Kill"   // ROS 1
    },
    {
      "turtlesim/srv/SetPen",  // ROS 2
      "turtlesim/SetPen"   // ROS 1
    },
    {
      "turtlesim/srv/Spawn",  // ROS 2
      "turtlesim/Spawn"   // ROS 1
    },
    {
      "turtlesim/srv/TeleportAbsolute",  // ROS 2
      "turtlesim/TeleportAbsolute"   // ROS 1
    },
    {
      "turtlesim/srv/TeleportRelative",  // ROS 2
      "turtlesim/TeleportRelative"   // ROS 1
    },
    {
      "example_interfaces/srv/AddTwoInts",  // ROS 2
      "roscpp_tutorials/TwoInts"   // ROS 1
    },
    {
      "example_interfaces/srv/AddTwoInts",  // ROS 2
      "rospy_tutorials/AddTwoInts"   // ROS 1
    },
  };
  return mappings;
}

}  // namespace ros1_bridge
