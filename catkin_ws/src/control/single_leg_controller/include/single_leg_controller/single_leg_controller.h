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
    /// \brief Gait phases 
    public: enum GaitPhase {stance = 1, swing = 2, uninitialized = 3};

    /*** Constructor/Destructor ***/

    /// \brief Constructor
    public: SingleLegController(double _publish_frequency);

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

    /// \brief Listens to joint force messages from the simulated leg
    /// \param[in] _msg A float array containing the simulated single leg joint forces
    public: void generalizedForcesCallback(const std_msgs::Float64MultiArrayConstPtr &_msg);

    /// \brief Listens to joint state messages from the motors
    /// The messages contains joint angles, velocities and torques for all three motors
    /// \param[in] _msg A float array containing the motor joint states
    private: void jointStateCallback(const sensor_msgs::JointStatePtr &_msg);

    /// \brief The ready_to_proceed parameter is changed based on the incomming message
    /// \param[in] _msg A bool message indicating whether or not a script can proceed
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
        double &_axis_pos, 
        double &_axis_vel, 
        double &_axis_acc
    );

    /// \brief Update the swing foot trajectory for the leg
    public: void updateSwingFootPositionTrajectory();

    /// \brief Update the stance foot tractory for the leg
    public: void updateStanceFootPositionTrajectory();

    /// \brief Update The joint trajectory reference based on the spatial foot trajectory
    public: void updateJointReferences();

    /// \brief Update the joint torqes references based on the joint trajectories and joint states
    /// \param[in] _joint_pos_ref The joint angle references
    /// \param[in] _joint_vel_ref the joint velocity references
    /// \param[in] _joint_acc_ref The joint acceleration references
    /// \param[in] _joint_pos The estimated joint angles
    /// \param[in] _joint_vel The estimated joint velocities
    public: void updateJointTorqueCommands
    (
        const Eigen::Matrix<double, 3, 1> &_joint_pos_ref,
        const Eigen::Matrix<double, 3, 1> &_joint_vel_ref,
        const Eigen::Matrix<double, 3, 1> &_joint_acc_ref,
        const Eigen::Matrix<double, 3, 1> &_joint_pos,
        const Eigen::Matrix<double, 3, 1> &_joint_vel        
    );

    /// \brief Overloaded function that uses the current joint references and joint states
    public: void updateJointTorqueCommands();

    /// \brief A non model based torque controller
    public: void updateClosedLoopTorqueCommands();

    /// \brief Updates the joint velocity control commands based on the joint velocity reference 
    /// and the joint position error
    public: void updateJointVelocityCommands(); 

    /// \brief Sends a joint position commands to the motors
    public: void sendJointPositionCommands();

    /// \brief Updates the joint velocity commands and send them to the motors
    public: void sendJointVelocityCommands();

    /// \brief Updates the joint torque control commands based on the desired foot position
    public: void sendJointTorqueCommands();

    /// \brief Increment the gait cycle iterator. It stops iterating when the final iteration is reached
    public: void increaseIterator();

    /// \brief Increments the gait cycle iterator and updates the leg state
    public: bool updateGaitPhase();

    /// \brief Update the foot trajectory based on the leg state 
    public: void updateFootTrajectoryReference();

    /// \brief Update the pose control trajectory reference for the single leg
    public: bool updatePoseControlJointTrajectoryReference();

    /// \brief Set the final and initial states for pose control trajectories
    public: void setPoseGoal(Eigen::Matrix<double, 3, 1> _foot_pos);

    /// \brief Tries to set the control gains in the motors. The function loops until it succeeds.
    public: void setMotorGains();

    /// \brief Creates a trajectory from the current foot position to the goal foot position
    /// and moves the foot to the target position along the trajectory. 
    /// Function returns when the foot is standing still at the goal position
    public: bool moveFootToPosition(Eigen::Matrix<double, 3, 1> _foot_goal_pos);

    /// \brief The function tries to move the foot to the foot position given by the input parameters.
    public: bool moveJointsToSetpoints();

    /// \brief The function tries to move the foot to the nominal trajectory position
    public: bool moveFootToNominalPosition();



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
    public: bool isTargetPositionReached();

    /// \brief Checks if the sum of squared joint velocities are smaller than a certain threshold
    public: bool isJointVelocitySmall(); 

    /// \brief Check if the uninitalized joint state of the robot has been overridden by measurements
    public: bool isInitialStateReceived();

    /// \brief Print the joint torque references
    public: void printTorqueReferences();

    /// \brief Print the foot trajectory reference
    public: void printSpatialTrajectories();

    /// \brief Print the joint trajectory references
    public: void printJointTrajectories();

    /// \brief Print various information about all joints
    public: void printAllStates();

    /// \brief Write the joint references and estimated states to the log
    public: void writeToLog();

    /// \brief Return the leg's phase state
    /// \return The phase state of the single leg
    public: GaitPhase getGaitPhase(){return gait_phase;}


    /*** STATE VARIABLES ***/

    /// \brief The foot position reference relative to the hip
    private: Eigen::Matrix<double, 3, 1> foot_pos_ref = Eigen::Matrix<double, 3, 1>::Zero();

    /// \brief The foot velocity reference relative to the hip
    private: Eigen::Matrix<double, 3, 1> foot_vel_ref = Eigen::Matrix<double, 3, 1>::Zero();

    /// \brief The foot acceleration reference relative to the hip
    private: Eigen::Matrix<double, 3, 1> foot_acc_ref = Eigen::Matrix<double, 3, 1>::Zero();

    /// \brief When using setpointTrajectory control these are the joint angles we want to reach eventually
    private: Eigen::Matrix<double, 3, 1> foot_pos_goal = Eigen::Matrix<double, 3, 1>::Zero();

    /// \brief The joint angles we want to eventually reach when using pose trajectory control
    private: Eigen::Matrix<double, 3, 1> joint_pos_goal = Eigen::Matrix<double, 3, 1>::Zero();

    /// \brief The joint angles at the beginning of a trajectory
    private: Eigen::Matrix<double, 3, 1> joint_pos_initial = Eigen::Matrix<double, 3, 1>::Zero();

    /// \brief The estimated joint angles of the motors
    private: Eigen::Matrix<double, 3, 1> joint_pos = Eigen::Matrix<double, 3, 1>::Zero();

    /// \brief The estimated joint velocities of the motors
    private: Eigen::Matrix<double, 3, 1> joint_vel = Eigen::Matrix<double, 3, 1>::Zero();

    /// \brief The estimated joint torques of the motors
    private: Eigen::Matrix<double, 3, 1> joint_torque = Eigen::Matrix<double, 3, 1>::Zero();

    /// \brief The reference joint angles for the motors
    private: Eigen::Matrix<double, 3, 1> joint_pos_ref = Eigen::Matrix<double, 3, 1>::Zero();

    /// \brief The reference joint velocities for the motors
    private: Eigen::Matrix<double, 3, 1> joint_vel_ref = Eigen::Matrix<double, 3, 1>::Zero();

    /// \brief The reference joint accelerations for the motors
    private: Eigen::Matrix<double, 3, 1> joint_acc_ref = Eigen::Matrix<double, 3, 1>::Zero();

    /// \brief The reference joint torques for the motors
    private: Eigen::Matrix<double, 3, 1> joint_torque_ref = Eigen::Matrix<double, 3, 1>::Zero();

    /// \brief The velocity commands sent to the motors
    private: Eigen::Matrix<double, 3, 1> joint_vel_commands = Eigen::Matrix<double, 3, 1>::Zero();

    /// \brief The joint torque command being sent to the motors
    private: Eigen::Matrix<double, 3, 1> joint_torque_commands = Eigen::Matrix<double, 3, 1>::Zero();

    /// \brief The current gait phase of the leg
    private: GaitPhase gait_phase = GaitPhase::stance;

    /// \brief A variable used to control the flow of the program. 
    /// It can be set throuh a boolean message received by the ready_to_proceed_subscriber
    private: bool ready_to_proceed = false;

    /// \brief The current iteration in a gait phase. 
    /// This should be incremented for every control loop
    private: double current_iteration = 0;

    /// \brief The final iteration of a gait phase. 
    private: double final_iteration = 400.0;

    /// \brief The current iteration used for pose control
    private: double current_pose_iteration = 0;

    /// \brief The final iteration used for pose control
    private: double final_pose_iteration = 100;

    /// \brief Keeps track of whether or not the motor gains have been set
    private: bool gains_set = false;



    /*** PARAMETERS ***/

    /// \brief The number of motors used in single leg control tests
    private: const int NUMBER_OF_MOTORS = 3;

    /// \brief The value of an uninitialized state
    private: const double UNINITIALIZED_STATE = 100.0;

    /// \brief Convergence crieria for position control test
    private: const double POSITION_CONVERGENCE_CRITERIA = 0.01; // Cirka 1 degree error for all joints

    /// \brief The identifier to be used for position command messages
    private: const double POSITION_COMMAND = 1.0;

    /// \brief The identifier to be used for velocity command messages
    private: const double VELOCITY_COMMAND = 2.0;

    /// \brief The identifier to be used for torque command messages
    private: const double TORQUE_COMMAND = 3.0;

    /// \brief A diagonal matrix of proportional gains for the closed loop torque controller
    private: Eigen::Matrix<double, 3, 3> K_p = Eigen::Matrix<double, 3, 3>::Zero();

    /// \brief A diagonal matrix of derivative gains for the closed loop torque controller
    private: Eigen::Matrix<double, 3, 3> K_d = Eigen::Matrix<double, 3, 3>::Zero();

    /// \brief A digonal matrix for of gains used for the position error in the closed loop velocity controller
    private: Eigen::Matrix<double, 3, 3> K_pos_error_vel_control = Eigen::Matrix<double, 3, 3>::Zero();

    /// \brief The expected publish frequency of the robot. 
    /// This is used to calculate the maximum number of iterations per gait phase
    private: double publish_frequency = 200.0;

    /// \brief The duration of a phase period in seconds
    private: double phase_period = 0.5;

    /// \brief The standard height of the hips above the ground
    private: double hip_height = 0.35;

    /// \brief The nominal x position of the foot relative to the hip
    private: double x_nominal = 0.1;

    /// \brief The nominal y position of the foot relative to the hip
    private: double y_nominal = 0.3;

    /// \brief The step distance in the x direction
    private: double x_step_distance = 0.2;

    /// \brief The step distance in the y direction
    private: double y_step_distance = 0.0;

    /// \brief The maximum height above the ground to lift the foot
    private: double max_swing_height = 0.12; 

    /// \brief The time used to change from one pose to the next
    private: double pose_period;

    /// \brief Max pose control joint angle velocity [rad/s]
    private: double max_pose_vel = math_utils::degToRad(50);

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

    /// \brief Subscribes to generalized forces messages
    private: ros::Subscriber generalized_forces_subscriber;

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