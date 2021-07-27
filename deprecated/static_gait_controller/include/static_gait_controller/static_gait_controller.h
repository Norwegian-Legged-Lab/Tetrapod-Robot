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

#define UNINITIALIZED_JOINT_STATE 10.0

enum LegID {fl = 0, fr = 1, rl = 2, rr = 3};

enum GaitPhase {swing_rl = 0, swing_fl = 1, swing_rr = 2, swing_fr = 3, no_gait_phase = 4};

enum TurningPhase 
{
    quad_stance_before_fl_rr = 0, 
    swing_fl_rr = 1, 
    quad_stance_before_fr_rl = 2, 
    swing_fr_rl = 3, 
    no_turning_phase = 4
};

class StaticGaitController
{
    /// \brief Constructor
    public: StaticGaitController(double _step_length, double _step_width, double _iterations_per_gait_period, double _shoulder_height);

    /// \brief Destructor
    public: virtual ~StaticGaitController(){};

    /// \brief Calculates the desired footstep positions in the body frame
    public: void updateFeetReferencePositionsInBody();

    /// \brief The reference joint angles are calculated through inverse kinematics based on reference feet positions
    public: bool updateReferenceJointAngles();

    /// \brief This functions updates the joint commands based on the previous state and latest command
    public: bool updateJointCommands();

    public: void sendJointPositionCommand();

    /// \brief The joint states for the leg is updated
    /// \param[in] _msg A float array containing the generalized coordinates 
    private: void generalizedPositionCallback(const std_msgs::Float64MultiArrayConstPtr &_msg);

    private: void generalizedVelocityCallback(const std_msgs::Float64MultiArrayConstPtr &_msg);

    private: void readyToProceedCallback(const std_msgs::Bool &_msg);

    public: void checkForNewMessages();

    /// \brief This function initilizes ROS
    public: void initROS();

    /// \brief This functions moves each of the robot's legs so that it is ready to perform locomotion
    public: bool setInitialConfiguration();

    private: bool moveFootToBodyPosition(Eigen::Matrix<double, 3, 1> _foot_pos, bool _offset, int _leg_index);

    /// \brief This variable keeps track of which leg to move
    private: int gait_phase;

    /// \brief Distance from CoM to foot in y direction in the body frame
    private: double step_width = 0.25;

    private: double max_step_width = 0.4;

    /// \brief Length of each step in the body x direction
    private: double step_length = 0.3;

    private: double step_max_height = 0.15;

    /// For swing leg controller
    private: double max_hip_turning_angle = M_PI/3.0;

    private: double x_distance_from_CoM_to_hip = 0.151;
    
    private: double y_distance_from_CoM_to_hip = 0.151;

    /// \brief Minimum distance between the body and foot in the x direction
    private: double x_offset_min = 0.1;

    /// \brief Maximum distance between the body and foot in the x direction
    private: double x_offset_max;

    private: double shoulder_height_over_ground;

    private: bool fl_offset = false;

    private: bool rr_offset = false;

    private: bool fr_offset = true;

    private: bool rl_offset = true;

    /// \brief Desired feet positions in the body frame
    private: Eigen::Matrix<double, 4, 1> feet_positions_in_body;

    private: Eigen::Matrix<double, 3, 1> fl_foot_position_in_body;

    private: Eigen::Matrix<double, 3, 1> fr_foot_position_in_body;

    private: Eigen::Matrix<double, 3, 1> rl_foot_position_in_body;

    private: Eigen::Matrix<double, 3, 1> rr_foot_position_in_body;

    /// \brief 
    private: GaitPhase current_gait_phase = GaitPhase::no_gait_phase;



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

    private: bool ready_to_proceed = false;

    public: bool readyToProceed(){return ready_to_proceed;}

    public: void setReadyToProceedToFalse(){ready_to_proceed = false;}

    public: void waitForReadyToProceedMessage();

    public: void waitForPositionJointStates();

    private: sensor_msgs::JointState joint_command_msg;


    private: TurningPhase current_turning_phase = no_turning_phase;

    public: void updateFootPositionsTurning();

    private: void updateTurningPhase();

    private: Eigen::Matrix<double, 3, 1> calculateTurningSwingFootPosition(LegID _foot);

    private: Eigen::Matrix<double, 3, 1> calculateTurningStanceFootPosition(LegID _foot);

    private: Eigen::Matrix<double, 3, 1> calculateTurningQuadStanceFootPosition(LegID _foot);

    private: Eigen::Matrix<double, 3, 1> reverseXY(Eigen::Matrix<double, 3, 1> _v_in);

    private: double current_iteration_turning_double_stance = 0.0;

    private: double current_iteration_turning_quad_stance = 0.0;

    private: double max_iteration_turning_double_stance = 10.0;

    private: double max_iteration_turning_quad_stance = 5.0;

    private: double max_angle_deflection = M_PI/12;

    private: double angle_offset = (M_PI/2.0 - max_angle_deflection)/2.0; // 2*angle_offset + max_angle_deflection = 90 deg

    /// \brief 2*quad_stance_phase_period + double_stance_phase_period = 1.0
    private: double quad_stance_phase_period = 0.1;

    private: double double_stance_phase_period = 1.0 - 2.0*quad_stance_phase_period;

    private: double distance_body_to_hip = 0.15;

    private: double turning_radius = 0.5;

    private: double calculateSwingFootHeightInHip(double _current_iteration, double _max_iteration);

    public: bool prepareForTurning();
};

#endif