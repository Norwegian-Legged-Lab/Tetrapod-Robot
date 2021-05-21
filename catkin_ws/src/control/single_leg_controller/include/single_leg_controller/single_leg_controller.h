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

// Kinematics
#include <kinematics/kinematics.h>

// Utilities
#include <filter_utils/filter_utils.h>

class SingleLegController
{
    /*** Constructor/Destructor ***/

    /// \brief Constructor
    public: SingleLegController();

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

    public: void updateJointSetpoints();

    /// \brief The function tries to move the foot to the position given by the input parameters.
    /// This is done by calculating the inverse kinematics and giving the motors position references
    /// \param[in] _foot_pos_x The target foot x position
    /// \param[in] _foot_pos_y The target foot y position
    /// \param[in] _foot_pos_z The target foot z position
    public: bool moveJointsToSetpoints();


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


    /*** STATE VARIABLES ***/

    /// \brief The joint angles of the leg
    private: Eigen::Matrix<double, 3, 1> q = Eigen::Matrix<double, 3, 1>::Zero();

    /// \brief Desired joint velocity
    private: Eigen::Matrix<double, 3, 1> q_d = Eigen::Matrix<double, 3, 1>::Zero();

    private: Eigen::Matrix<double, 3, 1> q_ref = Eigen::Matrix<double, 3, 1>::Zero();

    private: Eigen::Matrix<double, 3, 1> q_d_ref = Eigen::Matrix<double, 3, 1>::Zero();

    private: Eigen::Matrix<double, 3, 1> q_dd_ref = Eigen::Matrix<double, 3, 1>::Zero();

    private: Eigen::Matrix<double, 3, 1> tau = Eigen::Matrix<double, 3, 1>::Zero();

    private: double timer = 0.0;

    /// \brief Variable deciding whether or not we want to move the leg
    private: bool ready_to_proceed = false;


    /*** PARAMETERS ***/

    private: Eigen::Matrix<double, 3, 3> K_p = Eigen::Matrix<double, 3, 3>::Zero();

    private: Eigen::Matrix<double, 3, 3> K_d = Eigen::Matrix<double, 3, 3>::Zero();

    const double uninitialized_state = 100.0;

    /// \brief Variable indicate no control effort
    const double CONTROL_IDLE  = 1000.0;

    /// \brief Convergence crieria for position control test
    const double POSITION_CONVERGENCE_CRITERIA = 0.010; // Cirka 1 degree error for all joints


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

    /// \brief The joint state message that is sent to the Teensy
    private: sensor_msgs::JointState motor_command_msg;


    /*** UTILITY VARIABLES ***/

    /// \brief Kinematics object
    private: Kinematics kinematics;
};

#endif