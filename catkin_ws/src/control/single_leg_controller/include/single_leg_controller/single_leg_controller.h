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
    // Leg states 
    public: enum State {stance = 1, swing = 2, uninitialized = 3};

    /*** Constructor/Destructor ***/

    /// \brief Constructor
    public: SingleLegController(double _publish_frequency, bool _simulation);

    /// \brief Destructor
    public: virtual ~SingleLegController(){};



    /*** ROS FUNCTIONS ***/

    /// \brief This function initilizes ROS
    public: void initROS();

    /// \brief Listens to joint angle messages from the simulated leg
    /// \param[in] _msg A float array containing the simulated single leg joint angles 
    public: void generalizedCoordinatesCallback(const std_msgs::Float64MultiArrayConstPtr &_msg);

    /// \brief Listens to joint velocity messages from the simulated leg
    /// \param[in] _msg A float array containing the simulated single leg joint velocities
    public: void generalizedVelocitiesCallback(const std_msgs::Float64MultiArrayConstPtr &_msg);

    /// \brief Listens to joint state messages from the motors
    /// The messages contains joint angles, velocities and torques for all three motors
    /// \param[in] _msg A float array containing the motor joint states
    private: void jointStateCallback(const sensor_msgs::JointStatePtr &_msg);

    /// \brief The ready_to_proceed parameter is changed based on the incomming message
    /// \param[in] _msg A bool message deciding if it is safe to move the leg or not
    public: void readyToProceedCallback(const std_msgs::Bool &_msg);

    /// \brief Listens to joint setpoints messages 
    /// \param[in] _msg A float array containing the desired hy, hp, and kp angles
    private: void jointSetpointCallback(const std_msgs::Float64MultiArrayConstPtr &_msg);

    /// \brief Listens to a confirmation message from the motors 
    /// which is used to indicate if the motor gains have been set successfully
    /// \param[in] _msg A bool indicating whether or not the gains have been set successfully
    private: void motorConfirmationCallback(const std_msgs::Bool &_msg);



    /*** CONTROL FUNCTIONS ***/

    /// \brief This function calculates the swing leg height trajectory based on various gait cycle parameters
    /// \param[in] _percentage Our location in the gait cycle in the interval [0, 1]
    /// \param[in] _period The gait cycle period [s]
    /// \param[in] _max_swing_height The maximum foot height above the ground
    /// \param[in] _hip_height The height of the hip relative to the ground
    /// \return A vector containing the desired foot height [m], foot vertical velocity [m/s] and foot vertical acceleration [m/s^2] in the hip frame
    private: Eigen::Matrix<double, 3, 1> calculateSwingLegHeightTrajectory(double _percentage, double _period, double _max_swing_height, double _hip_height);

    /// \brief This functions calculates a smooth trajectory along a single linear axis. Please see the report for details.
    /// \param[in] _percentage The location in the gait cycle in the interval [0, 1]
    /// \param[in] _period The gait cycle period
    /// \param[in] _max_travel The maximum distance to move in a direction along the linear axis from its origin
    /// \param[out] _x The desired position along the axis
    /// \param[out] _x_d The desired velocity along the axis
    /// \param[out] _x_dd The desired acceleration along the axis
    private: void calculateSingleAxisTrajectory
    (
        const double &_percentage, 
        const double &_period, 
        const double &_max_travel,
        double &_x, 
        double &_x_d, 
        double &_x_dd
    );

    /// \brief Update the swing foot trajectory for the leg
    public: void updateSwingFootPositionTrajectory();

    /// \brief Update the stance foot tractory for the leg
    public: void updateStanceFootPositionTrajectory();

    /// \brief Update The joint trajectory reference based on the spatial foot trajectory
    public: void updateJointReferences();

    /// \brief Update the joint torqes references based on the joint trajectories and joint states
    /// \param[in] _q_ref The joint angle references
    /// \param[in] _q_d_ref the joint velocity references
    /// \param[in] _q_dd_ref The joint acceleration references
    /// \param[in] _q The estimated joint angles
    /// \param[in] _q_d The estimated joint velocities
    public: void updateJointTorques
    (
        const Eigen::Matrix<double, 3, 1> &_q_ref,
        const Eigen::Matrix<double, 3, 1> &_q_d_ref,
        const Eigen::Matrix<double, 3, 1> &_q_dd_ref,
        const Eigen::Matrix<double, 3, 1> &_q,
        const Eigen::Matrix<double, 3, 1> &_q_d        
    );

    /// \brief Overloaded function that uses the current joint references and joint states
    public: void updateJointTorques();

    /// \brief Updates the joint torque control commands based on the desired foot position
    public: void sendTorqueCommand();

    /// \brief Sends a joint position commands to the motors
    public: void sendPositionCommand();

     
    public: void updateJointSetpoints(); // XXXXXXXXXXXXXXXXXXXX Should be changed or removed

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

    public: void updateSetpointTrajectory();

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

    /// \brief When using setpointTrajectory control these are the joint angles we want to reach eventually
    private: Eigen::Matrix<double, 3, 1> q_goal = Eigen::Matrix<double, 3, 1>::Zero();

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

    private: double final_iteration = 400.0;

    private: bool gains_set = false;

    /*** PARAMETERS ***/

    bool SIMULATION = true;

    const int NUMBER_OF_MOTORS = 3;

    double k_p_pos_hy;
    double k_i_pos_hy;
    double k_p_pos_hp;
    double k_i_pos_hp;
    double k_p_pos_kp;
    double k_i_pos_kp;

    double k_p_vel_hy;
    double k_i_vel_hy;
    double k_p_vel_hp;
    double k_i_vel_hp;
    double k_p_vel_kp;
    double k_i_vel_kp;

    double k_p_torque_hy;
    double k_i_torque_hy;
    double k_p_torque_hp;
    double k_i_torque_hp;
    double k_p_torque_kp;
    double k_i_torque_kp;

    private: Eigen::Matrix<double, 3, 3> K_p = Eigen::Matrix<double, 3, 3>::Zero();

    private: Eigen::Matrix<double, 3, 3> K_d = Eigen::Matrix<double, 3, 3>::Zero();

    private: double publish_frequency = 100.0;

    private: double swing_period = 10.0;

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

    /// \brief Subscribes to joint state messages from the motor
    private: ros::Subscriber joint_state_subscriber;

    /// \brief Subscribes to messages deciding whether or not we should move the leg
    private: ros::Subscriber ready_to_proceed_subscriber;

    /// \brief Subscribes to joint setpoint messages
    private: ros::Subscriber joint_setpoint_subscriber;

    /// \brief Subscribes to confirmation messages from the motor
    private: ros::Subscriber motor_confirmation_subscriber;

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