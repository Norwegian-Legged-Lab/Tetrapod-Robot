#ifndef static_gait_h
#define static_gait_h

// ROS
#include "ros/ros.h"
#include "std_msgs/Empty.h"
#include "std_msgs/Bool.h"
#include "std_msgs/Float64.h"
#include "std_msgs/Float64MultiArray.h"
#include "sensor_msgs/JointState.h"
#include "eigen_conversions/eigen_msg.h"

// Eigen
#include <Eigen/Core>

// Standard Library
#include <thread>

// Kinematics
#include <kinematics/kinematics.h>

// Utilities
#include <filter_utils/filter_utils.h>

enum LegID {fl = 0, fr = 1, rl = 2, rr = 3};

enum GaitPhase {swing_rl = 0, swing_fl = 1, swing_rr = 2, swing_fr = 3, no_gait_phase = 4};

class StaticGaitController
{
    /// \brief Constructor
    public: StaticGaitController(double _step_length, double _step_width, double _iterations_per_gait_period);

    /// \brief Destructor
    virtual ~StaticGaitController(){};

    /// \brief The joint states for the leg is updated
    /// \param[in] _msg A float array containing the generalized coordinates 
    private: void generalizedPositionCallback(const std_msgs::Float64MultiArrayConstPtr &_msg);

    private: void generalizedVelocityCallback(const std_msgs::Float64MultiArrayConstPtr &_msg);

    private: void readyToProceedCallback(const std_msgs::Bool &_msg);

    public: void checkForNewMessages();

    public: void sendJointPositionCommand();

    /// \brief This function initilizes ROS
    public: void initROS();

    /// \brief This functions moves each of the robot's legs so that it is ready to perform locomotion
    public: bool setInitialConfiguration();

    private: bool moveFootToBodyPosition(Eigen::Matrix<double, 3, 1> _foot_pos, bool _offset, int _leg_index);

    /// \brief This variable keeps track of which leg to move
    private: int gait_phase;

    /// \brief This functions updates the joint commands based on the previous state and latest command
    public: bool updateJointCommands();

    /// \brief This function publishes the latest joint commands to the motors
    public: void publishJointCommands();

    /// \brief Distance from CoM to foot in y direction in the body frame
    private: double step_width = 0.3;

    /// \brief Length of each step in the body x direction
    private: double step_length = 0.4;

    private: double step_max_height = 0.20;

    /// \brief Minimum distance between the body and foot in the x direction
    private: double x_offset_min;

    /// \brief Maximum distance between the body and foot in the x direction
    private: double x_offset_max;

    private: double shoulder_height_over_ground;

    private: bool fl_offset = true;

    private: bool rr_offset = true;

    private: bool fr_offset = false;

    private: bool rl_offset = false;

    /// \brief Desired feet positions in the body frame
    private: Eigen::Matrix<double, 4, 1> feet_positions_in_body;

    private: Eigen::Matrix<double, 3, 1> fl_foot_position_in_body;

    private: Eigen::Matrix<double, 3, 1> fr_foot_position_in_body;

    private: Eigen::Matrix<double, 3, 1> rl_foot_position_in_body;

    private: Eigen::Matrix<double, 3, 1> rr_foot_position_in_body;

    /// \brief 
    GaitPhase current_gait_phase = GaitPhase::no_gait_phase;

    /// \brief Calculates the desired footstep positions in the body frame
    public: void updateFeetReferencePositionsInBody();

    /// \brief The reference joint angles are calculated through inverse kinematics based on reference feet positions
    public: bool updateReferenceJointAngles();

    /// \brief Calculate the desired swing leg position for the input leg
    /// \param [in] _step_width The distance from the hip to the foot position i the body y direction
    /// \return A vector containing the desired swing leg position in the hip frame
    private: Eigen::Matrix<double, 3, 1> calculateSwingLegFootPositionInBody(double _step_width, double _x_offset);

    private: Eigen::Matrix<double, 3, 1> calculateStanceLegFootPositionInBody(double _step_width, double _phase_offset, double _x_offset);

    private: double iteration = 0;
    private: double iteration_max = 24;

    private: Eigen::Matrix<double, 12, 1> joint_angle_commands = Eigen::Matrix<double, 12, 1>::Zero();

    /// \brief The joint angles of the leg
    private: Eigen::Matrix<double, 12, 1> joint_angles = Eigen::Matrix<double, 12, 1>::Zero();

    /// \brief Desired joint velocity
    private: Eigen::Matrix<double, 12, 1> joint_velocities = Eigen::Matrix<double, 12, 1>::Zero();

    /// \brief ROS node handle
    private: std::unique_ptr<ros::NodeHandle> nodeHandle;

    private: ros::Subscriber ready_to_proceed_subscriber;

    /// \brief Subscribes to generalized coordinates messages
    private: ros::Subscriber generalized_position_subscriber;

    private: ros::Subscriber generalized_velocity_subscriber;

    private: ros::Publisher joint_command_publisher;

    private: Kinematics kinematics;

    private: void calculateSwingLegHeight();

    private: bool ready_to_proceed = false;

    public: bool readyToProceed(){return ready_to_proceed;}

    public: void setReadyToProceedToFalse(){ready_to_proceed = false;}

    public: void waitForReadyToProceedMessage();
};

#endif