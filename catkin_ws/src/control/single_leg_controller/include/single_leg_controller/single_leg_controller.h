#ifndef single_leg_controller_h
#define single_leg_controller_h

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
#include <iostream>
#include <iomanip>

// Kinematics
#include <kinematics/kinematics.h>

// Utilities
#include <filter_utils/filter_utils.h>

class SingleLegController
{
    public: enum State {stance = 1, swing = 2, uninitialized = 3};

    /*** Constructor/Destructor ***/

    /// \brief Constructor
    public: SingleLegController(double _publish_frequency);

    /// \brief Destructor
    public: virtual ~SingleLegController(){};


    /*** ROS FUNCTIONS ***/

    /// \brief This function initilizes ROS
    public: void initROS();

    /// \brief The joint states for the leg is updated
    /// \param[in] _msg A float array containing the generalized coordinates 
    public: void generalizedCoordinatesCallback(const std_msgs::Float64MultiArrayConstPtr &_msg);

    public: void generalizedVelocitiesCallback(const std_msgs::Float64MultiArrayConstPtr &_msg);

    /// \brief The ready_to_move parameter is changed based on the incomming message
    /// \param[in] _msg A bool message deciding if it is safe to move the leg or not
    public: void readyToProceedCallback(const std_msgs::Bool &_msg);

    private: void jointSetpointCallback(const std_msgs::Float64MultiArrayConstPtr &_msg);


    /*** CONTROL FUNCTIONS ***/

    private: Eigen::Matrix<double, 3, 1> calculateSwingLegHeightTrajectory(double _percentage, double _period, double _max_swing_height, double _hip_height);

    private: void calculateSingleAxisTrajectory
    (
        const double &_percentage, 
        const double &_period, 
        const double &_max_travel,
        double &_x, 
        double &_x_d, 
        double &_x_dd
    );

    public: void updateStanceFootPositionTrajectory();

    public: void updateSwingFootPositionTrajectory();

    public: void updateJointReferences();

    public: void updateJointTorques
    (
        const Eigen::Matrix<double, 3, 1> &_q_ref,
        const Eigen::Matrix<double, 3, 1> &_q_d_ref,
        const Eigen::Matrix<double, 3, 1> &_q_dd_ref,
        const Eigen::Matrix<double, 3, 1> &_q,
        const Eigen::Matrix<double, 3, 1> &_q_d        
    );

    public: void updateJointTorques();

    /// \brief Updates the joint torque control commands based on the desired foot position
    public: void sendTorqueCommand();

    /// \brief Sends joint position commands to the actuators
    public: void sendPositionCommand();

    public: void updateJointSetpoints();

    /// \brief The function tries to move the foot to the position given by the input parameters.
    /// This is done by calculating the inverse kinematics and giving the motors position references
    /// \param[in] _foot_pos_x The target foot x position
    /// \param[in] _foot_pos_y The target foot y position
    /// \param[in] _foot_pos_z The target foot z position
    public: bool moveJointsToSetpoints();

    public: bool moveJointsToCenter();

    public: bool updateSimpleFootTrajectory();

    public: void increaseIterator();

    public: void updateState();

    public: void updateFootReference();

    public: void setMotorGains();

    /*** HELPER FUNCTIONS ***/

    /// \brief Function used to check if any new ROS messages has been received
    public: void checkForNewMessages();

    /// \brief Check whether or not the ready to move message has been received
    public: bool readyToProceed(){return ready_to_proceed;}

    /// \brief Set the ready_to_move flag to false
    public: void resetReadyToProceed(){ready_to_proceed = false;}

    /// \brief Check if the squared error between the current joint angles and target joint angles 
    /// is smaller than some threshold.
    public: bool isTargetPositionReached();

    public: bool isJointVelocitySmall();

    public: bool initialStateReceived();

    public: void printTorques();

    public: void printSpatialTrajectories();

    public: void printJointTrajectories();

    public: void printPercentage();

    public: void printAllStates();

    public: void writeToLog();

    public: State getState(){return state;}


    /*** STATE VARIABLES ***/
    private: Eigen::Matrix<double, 3, 1> pos = Eigen::Matrix<double, 3, 1>::Zero();

    private: Eigen::Matrix<double, 3, 1> vel = Eigen::Matrix<double, 3, 1>::Zero();

    private: Eigen::Matrix<double, 3, 1> acc = Eigen::Matrix<double, 3, 1>::Zero();

    /// \brief The joint angles of the leg
    private: Eigen::Matrix<double, 3, 1> q = Eigen::Matrix<double, 3, 1>::Zero();

    /// \brief Desired joint velocity
    private: Eigen::Matrix<double, 3, 1> q_d = Eigen::Matrix<double, 3, 1>::Zero();

    private: Eigen::Matrix<double, 3, 1> q_ref = Eigen::Matrix<double, 3, 1>::Zero();

    private: Eigen::Matrix<double, 3, 1> q_d_ref = Eigen::Matrix<double, 3, 1>::Zero();

    private: Eigen::Matrix<double, 3, 1> q_dd_ref = Eigen::Matrix<double, 3, 1>::Zero();

    private: Eigen::Matrix<double, 3, 1> tau = Eigen::Matrix<double, 3, 1>::Zero();

    private: State state = State::stance;

    private: double swing_current_time = 0.0;

    private: double swing_start_time = 0.0;

    private: double swing_percentage = 0.0;

    /// \brief Variable deciding whether or not we want to move the leg
    private: bool ready_to_proceed = false;

    private: double current_iteration = 0;

    private: double final_iteration = 100.0;

    private: bool gains_set = false;


    /*** PARAMETERS ***/

    double k_p_pos_hy;
    double k_i_pos_hy;
    double k_p_pos_hp;
    double k_i_pos_hp;
    double k_p_pos_kp;
    double k_i_pos_kp;

    double k_p_torque_hy;
    double k_i_torque_hy;
    double k_d_torque_hy;

    double k_p_torque_hp;
    double k_i_torque_hp;
    double k_d_torque_hp;

    double k_p_torque_kp;
    double k_i_torque_kp;
    double k_d_torque_kp;

    private: Eigen::Matrix<double, 3, 3> K_p = Eigen::Matrix<double, 3, 3>::Zero();

    private: Eigen::Matrix<double, 3, 3> K_d = Eigen::Matrix<double, 3, 3>::Zero();

    private: double publish_frequency = 100.0;

    private: double swing_period = 2.0;

    private: double hip_height = 0.3;

    private: double x_center = 0.3;

    private: double y_center = 0.3;

    private: double x_offset = 0.3;

    private: double y_offset = 0.0;

    private: double max_swing_height = 0.25; 

    const double uninitialized_state = 100.0;

    /// \brief Variable indicate no control effort
    const double CONTROL_IDLE  = 1000.0;

    /// \brief Convergence crieria for position control test
    const double POSITION_CONVERGENCE_CRITERIA = 0.01; // Cirka 1 degree error for all joints


    /*** ROS VARIABLES ***/

    /// \brief ROS node handle
    private: std::unique_ptr<ros::NodeHandle> node_handle;

    /// \brief Subscribes to generalized coordinates messages
    private: ros::Subscriber generalized_coordinates_subscriber;

    /// \brief Subscribes to generalized velocities messages
    private: ros::Subscriber generalized_velocities_subscriber;

    /// \brief Subscribes to messages deciding whether or not we should move the leg
    private: ros::Subscriber ready_to_proceed_subscriber;

    private: ros::Subscriber joint_setpoint_subscriber;

    /// \brief Publishes velocity commands to the teensy to control the motors
    private: ros::Publisher joint_state_publisher;

    private: ros::Publisher motor_gain_publisher;

    /// \brief The joint state message that is sent to the Teensy
    private: sensor_msgs::JointState motor_command_msg;

    /// \brief Publishes joint positions for logging
    private: ros::Publisher log_joint_states_publisher;

    /// \brief The joint state message that is used to log states
    private: sensor_msgs::JointState joint_state_log_msg;

    /// \brief Publishes joint position references for logging
    private: ros::Publisher log_joint_references_publisher;

    /// \brief The joint state message that is used to log references
    private: sensor_msgs::JointState joint_reference_log_msg;

    /*** UTILITY VARIABLES ***/

    /// \brief Kinematics object
    private: Kinematics kinematics;
};

#endif