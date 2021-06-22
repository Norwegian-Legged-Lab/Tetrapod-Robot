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
    public: bool moveJointsToSetpoints(); // should be changed or removed XXXXXXXXXXXXXXXXXXXX

    public: bool moveJointsToCenter(); // should be changed or removed XXXXXXXXXXXXX

    public: bool updateSimpleFootTrajectory(); // XXXXXXXXXXXXXXXXXXX should be REMOVED

    /// \brief Increment the gait cycle iterator. It stops iterating when the final iteration is reached
    public: void increaseIterator();

    /// \brief Increments the gait cycle iterator and updates the leg state
    public: void updateState();

    /// \brief Update the foot trajectory based on the leg state 
    public: void updateFootReference();

    /// \brief Tries to set the control gains in the motors. The function loops until it succeeds.
    public: void setMotorGains();

    public: void updateSetpointTrajectory(); /// XXXXXXXXXXXXXXXXXXXXXXXX



    /*** HELPER FUNCTIONS ***/

    /// \brief Function used to check if any new ROS messages has been received
    public: void checkForNewMessages();

    /// \brief Check whether or not a ready to proceed message has been received
    /// \return The status of the ready_to_proceed boolean value
    public: bool readyToProceed(){return ready_to_proceed;}

    /// \brief Set the ready_to_proceed flag to false
    public: void resetReadyToProceed(){ready_to_proceed = false;}

    /// \brief Check if the squared error between the current joint angles and target joint angles 
    /// is smaller than some threshold.
    public: bool isTargetPositionReached(); //XXXXXXXXXXXXXXXXXXXXXXXXXX

    public: bool isJointVelocitySmall(); // XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

    /// \brief Check if the uninitalized joint state of the robot has been overridden by measurements
    public: bool initialStateReceived();

    /// \brief Print the joint torque references
    public: void printTorques();

    /// \brief Print the foot trajectory reference
    public: void printSpatialTrajectories();

    /// \brief Print the joint trajectory references
    public: void printJointTrajectories();

    public: void printPercentage(); // XXXXXXXXXXXXXXXXXXX Is this still active?

    /// \brief Print various information about all joints
    public: void printAllStates();

    /// \brief Write the joint references and estimated states to the log
    public: void writeToLog();

    /// \brief Return the leg's phase state
    /// \return The phase state of the single leg
    public: State getState(){return state;}


    /*** STATE VARIABLES ***/

    /// \brief The foot position reference relative to the hip
    private: Eigen::Matrix<double, 3, 1> pos = Eigen::Matrix<double, 3, 1>::Zero();

    /// \brief The foot velocity reference relative to the hip
    private: Eigen::Matrix<double, 3, 1> vel = Eigen::Matrix<double, 3, 1>::Zero();

    /// \brief The foot acceleration reference relative to the hip
    private: Eigen::Matrix<double, 3, 1> acc = Eigen::Matrix<double, 3, 1>::Zero();

    /// \brief When using setpointTrajectory control these are the joint angles we want to reach eventually
    private: Eigen::Matrix<double, 3, 1> q_goal = Eigen::Matrix<double, 3, 1>::Zero(); /// XXXXXXXXXXXXXXXXXXXXXXX 

    /// \brief The estimated joint angles of the leg
    private: Eigen::Matrix<double, 3, 1> q = Eigen::Matrix<double, 3, 1>::Zero();

    /// \brief The estimated joint velocities of the leg
    private: Eigen::Matrix<double, 3, 1> q_d = Eigen::Matrix<double, 3, 1>::Zero();

    /// \brief The reference joint angles of the leg
    private: Eigen::Matrix<double, 3, 1> q_ref = Eigen::Matrix<double, 3, 1>::Zero();

    /// \brief The reference joint velocities of the leg
    private: Eigen::Matrix<double, 3, 1> q_d_ref = Eigen::Matrix<double, 3, 1>::Zero();

    /// \brief The reference joint accelerations of the leg
    private: Eigen::Matrix<double, 3, 1> q_dd_ref = Eigen::Matrix<double, 3, 1>::Zero();

    /// \brief The reference joint torques of the leg
    private: Eigen::Matrix<double, 3, 1> tau = Eigen::Matrix<double, 3, 1>::Zero();

    /// \brief The current gait phase of the leg
    private: State state = State::stance;

    private: double swing_current_time = 0.0; // XXXXXXXXXXXXXXXXXXXXXX IS THIS USED?

    private: double swing_start_time = 0.0; // XXXXXXXXXXXXXXXXX IS THIS USED

    private: double swing_percentage = 0.0; // XXXXXXXXXXXXXXXXXXXXXX IS THIS USED

    /// \brief A variable used to control the flow of the program. 
    /// It can be set throuh a boolean message received by the ready_to_proceed_subscriber
    private: bool ready_to_proceed = false;

    /// \brief The current iteration in a gait phase. 
    /// This should be incremented for every control loop
    private: double current_iteration = 0;

    /// \brief The final iteration of a gait phase. 
    private: double final_iteration = 400.0;

    /// \brief Keeps track of whether or not the motor gains have been set
    private: bool gains_set = false;



    /*** PARAMETERS ***/

    bool SIMULATION = true; // XXXXXXXXXXXXXXXXXX REMOVE

    /// \brief The number of motors used in single leg control tests
    const int NUMBER_OF_MOTORS = 3;

    /// \brief The value of an uninitialized state
    private: const double uninitialized_state = 100.0;

    /// \brief Variable indicate no control effort
    const double CONTROL_IDLE  = 1000.0;

    /// \brief Convergence crieria for position control test
    const double POSITION_CONVERGENCE_CRITERIA = 0.01; // Cirka 1 degree error for all joints



    /// \brief A diagonal matrix of proportional gains for the closed loop torque controller
    private: Eigen::Matrix<double, 3, 3> K_p = Eigen::Matrix<double, 3, 3>::Zero();

    /// \brief A diagonal matrix of derivative gains for the closed loop torque controller
    private: Eigen::Matrix<double, 3, 3> K_d = Eigen::Matrix<double, 3, 3>::Zero();

    /// \brief The expected publish frequency of the robot. 
    /// This is used to calculate the maximum number of iterations per cycle XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX Is this necessary? You probably only need final_iterations
    private: double publish_frequency = 100.0;

    /// \brief The duration of a phase period in seconds
    private: double swing_period = 10.0;

    /// \brief The standard height of the hips above the ground
    private: double hip_height = 0.3;

    /// \brief The nominal x position of the foot relative to the hip
    private: double x_center = 0.3;

    /// \brief The nominal y position of the foot relative to the hip
    private: double y_center = 0.3;

    /// \brief The step distance in the x direction
    private: double x_offset = 0.3;

    /// \brief The step distance in the y direction
    private: double y_offset = 0.0;

    /// \brief The maximum height above the ground to lift the foot
    private: double max_swing_height = 0.25; 

    /// \brief Hip yaw joint motor position control proportional gain
    double k_p_pos_hy;

    /// \brief Hip yaw joint motor position control integral gain
    double k_i_pos_hy;

    /// \brief Hip pitch joint motor position control proportional gain
    double k_p_pos_hp;

    /// \brief Hip pitch joint motor position control integral gain
    double k_i_pos_hp;

    /// \brief Knee pitch joint motor position control proportional gain
    double k_p_pos_kp;

    /// \brief Knee pitch joint motor position control integral gain
    double k_i_pos_kp;

    /// \brief Hip yaw joint motor velocity control proportional gain
    double k_p_vel_hy;

    /// \brief Hip yaw joint motor velocity control integral gain
    double k_i_vel_hy;

    /// \brief Hip pitch joint motor velocity control proportional gain
    double k_p_vel_hp;

    /// \brief Hip pitch joint motor velocity control integral gain
    double k_i_vel_hp;

    /// \brief Knee pitch joint motor velocity control proportional gain
    double k_p_vel_kp;

    /// \brief Knee pitch joint motor velocity control integral gain
    double k_i_vel_kp;

    /// \brief Hip yaw motor torque control proportional gain
    double k_p_torque_hy;

    /// \brief Hip yaw motor torque control integral gain
    double k_i_torque_hy;

    /// \brief Hip pitch motor torque control proportional gain
    double k_p_torque_hp;

    /// \brief Hip pitch motor torque control integral gain
    double k_i_torque_hp;

    /// \brief Knee pitch motor torque control proportional gain
    double k_p_torque_kp;

    /// \brief Knee pitch motor torque control integral gain
    double k_i_torque_kp;
    


    /*** ROS VARIABLES ***/

    /// \brief ROS node handle
    private: std::unique_ptr<ros::NodeHandle> node_handle;

    /// \brief Subscribes to generalized coordinates messages
    private: ros::Subscriber generalized_coordinates_subscriber;

    /// \brief Subscribes to generalized velocities messages
    private: ros::Subscriber generalized_velocities_subscriber;

    /// \brief Subscribes to joint state messages from the motors
    private: ros::Subscriber joint_state_subscriber;

    /// \brief Subscribes to messages deciding whether or not we should proceed in the script
    private: ros::Subscriber ready_to_proceed_subscriber;

    /// \brief Subscribes to joint setpoint messages
    private: ros::Subscriber joint_setpoint_subscriber;

    /// \brief Subscribes to confirmation messages from the motor
    private: ros::Subscriber motor_confirmation_subscriber;

    /// \brief Publishes velocity commands to the teensy to control the motors
    private: ros::Publisher joint_state_publisher;

    /// \brief Publishes desired motor gains to the motors
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