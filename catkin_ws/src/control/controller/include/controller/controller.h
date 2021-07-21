// ROS
#include "ros/ros.h"
#include "std_msgs/Empty.h"
#include "std_msgs/Bool.h"
#include "std_msgs/Float64.h"
#include "std_msgs/Float64MultiArray.h"
#include "sensor_msgs/JointState.h"
#include "geometry_msgs/Twist.h"
#include "eigen_conversions/eigen_msg.h"

// Eigen
#include <Eigen/Core>

// Standard Library
#include <thread>
#include <functional>
#include <cmath>
#include <string>
// Kinematics
#include <kinematics/kinematics.h>

#define UNINITIALIZED_JOINT_STATE 10.0
#define ROBOT_NAME "my_robot"
#define LEG_OFFSET_LENGTH 0.25
#define NUMBER_OF_LEGS 4
#define ACTUATORS_PER_LEG 3

class Controller{
    protected: using JointState = Eigen::Matrix<double, 12, 1>;
    
    public: Controller(int controller_freq): controller_freq(controller_freq) {initROS();}
    
    public: virtual ~Controller() {}

    /*** Functions ***/
    public: bool RunStandUpSequence();

    public: void waitForReadyToProceed();

    public: virtual void UpdateFeetReferences() = 0;

    public: bool UpdateJointCommands();

    public: bool sendJointPositionCommands();

    public: virtual void setInitialConfiguration();

    public: void SetTwistCommand(double lin_vel_cmd_x, double lin_vel_cmd_y, double ang_vel_cmd_z);

    public: void initROS();

    public: void WaitForInitialState();

    public: bool MoveFeetToPositions(Eigen::Matrix<double, 3, 1> fl_goal_foot_pos, 
                                     Eigen::Matrix<double, 3, 1> fr_goal_foot_pos, 
                                     Eigen::Matrix<double, 3, 1> rl_goal_foot_pos, 
                                     Eigen::Matrix<double, 3, 1> rr_goal_foot_pos);

    public: bool MoveJointsToSetpoints(Eigen::Matrix<double, 12, 1> goal_joint_angles);

    public: void UpdateFeetPositions();

    protected: void jointStateCallback(const sensor_msgs::JointStatePtr &msg);

    protected: void readyToProceedCallback(const std_msgs::Bool &msg);

    /// \brief Converts twist command messages into desired linear and angular body velocities
    protected: void TwistCommandCallback(const geometry_msgs::TwistConstPtr &_msg);

    protected: void TwistStateCallback(const geometry_msgs::TwistConstPtr &_msg);

    protected: void BasePoseStateCallback(const std_msgs::Float64MultiArrayConstPtr &msg);

    /*** Variables ***/
    private: bool ready_to_proceed = false;

    protected: std::string node_name = "controller_node";

    protected: std::string robot_name = ROBOT_NAME;

    protected: int controller_freq;

    protected: Kinematics kinematics;

    protected: ros::NodeHandlePtr nodeHandle;

    protected: ros::Publisher joint_command_publisher;

    protected: ros::Subscriber joint_state_subscriber;

    protected: ros::Subscriber base_pose_state_subscriber;

    protected: ros::Subscriber ready_to_proceed_subscriber;

    /// \brief Subscribes to twist command messages from an external controller
    protected: ros::Subscriber twist_command_subscriber;

    protected: ros::Subscriber twist_state_subscriber;

    protected: Eigen::Vector3d fl_offset = Eigen::Vector3d(LEG_OFFSET_LENGTH, LEG_OFFSET_LENGTH, 0);

    protected: Eigen::Vector3d fr_offset = Eigen::Vector3d(LEG_OFFSET_LENGTH, -LEG_OFFSET_LENGTH, 0);

    protected: Eigen::Vector3d rl_offset = Eigen::Vector3d(-LEG_OFFSET_LENGTH, LEG_OFFSET_LENGTH, 0);

    protected: Eigen::Vector3d rr_offset = Eigen::Vector3d(-LEG_OFFSET_LENGTH, -LEG_OFFSET_LENGTH, 0);

    protected: Eigen::Vector3d fl_position_body;

    protected: Eigen::Vector3d fr_position_body;

    protected: Eigen::Vector3d rl_position_body;

    protected: Eigen::Vector3d rr_position_body;

    protected: Eigen::Vector3d fl_velocity_body;

    protected: Eigen::Vector3d fr_velocity_body;

    protected: Eigen::Vector3d rl_velocity_body;

    protected: Eigen::Vector3d rr_velocity_body;

    protected: Eigen::Vector3d fl_acceleration_body;

    protected: Eigen::Vector3d fr_acceleration_body;

    protected: Eigen::Vector3d rl_acceleration_body;

    protected: Eigen::Vector3d rr_acceleration_body;

    protected: JointState joint_angle_commands = JointState::Zero();

    protected: JointState joint_velocity_commands = JointState::Zero();

    protected: JointState joint_acceleration_commands = JointState::Zero();

    protected: JointState joint_torque_commands = JointState::Zero();

    protected: JointState joint_angles = JointState::Constant(UNINITIALIZED_JOINT_STATE);

    protected: JointState joint_velocities = JointState::Zero();

    protected: JointState joint_torques = JointState::Zero();

    protected: Eigen::Matrix<double, 6, 1> base_pose_state = Eigen::Matrix<double, 6, 1>::Zero();

    /// \brief The desired linear robot velocity in the body frame's x direction
    protected: double lin_vel_x = 0.0;

    /// \brief The desired linear robot velocity in the body frame's y direction
    protected: double lin_vel_y = 0.0;

    /// \brief The desired angular robot velocity around the robot's z axis
    protected: double ang_vel_z = 0.0;

    protected: double _lin_vel_x_estimated = 0.0;

    protected: double _lin_vel_y_estimated = 0.0;

    protected: double _ang_vel_z_estimated = 0.0;

    protected: double nominal_base_height = 0.35;

    // For logging

    public: void WriteToLog();

    private: ros::Publisher joint_state_logger;

    private: ros::Publisher joint_command_logger;

    private: ros::Publisher base_twist_state_logger;

    private: ros::Publisher base_pose_state_logger;

    private: ros::Publisher base_twist_command_logger;

    private: ros::Publisher base_pose_command_logger;

};