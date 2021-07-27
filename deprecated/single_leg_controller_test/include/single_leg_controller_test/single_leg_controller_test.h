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

/// \brief Variable indicate no control effort
const double CONTROL_IDLE  = 1000.0;

/// \brief Convergence crieria for position control test
const double POSITION_CONVERGENCE_CRITERIA = 0.010; // Cirka 1 degree error for all joints

class SingleLegController
{
    public:
        /// \brief Constructor
        SingleLegController(double _dt);

        /// \brief Destructor
        virtual ~SingleLegController(){};

        /// \brief The joint states for the leg is updated
        /// \param[in] _msg A float array containing the generalized coordinates 
        void generalizedCoordinatesCallback(const sensor_msgs::JointStateConstPtr &_msg);

        /// \brief The ready_to_move parameter is changed based on the incomming message
        /// \param[in] _msg A bool message deciding if it is safe to move the leg or not
        void readyToMoveCallback(const std_msgs::Bool &_msg);

        /// \brief Updates the joint position control commands based on the desired foot position
        void sendJointPositionCommand();

        /// \brief Updates the joint speed control commands based on foot vel references and jacobian
        /*/// \return If we failed to update the speed commands report false. Otherwise return true*/
        void updateSpeedControlCommands();

        /// \brief Populates the joint command message with joint velocity commands and sends it to the Teensy
        void sendSpeedJointCommand();

        /// \brief Set the frequency and damping parameters for the three references
        /// \param[in] _omega_x Frequency of x reference
        /// \param[in] _omega_y Frequency of y reference
        /// \param[in] _omega_z Frequency of z reference
        /// \param[in] _damping_x Damping of x reference
        /// \param[in] _damping_y Damping of y reference
        /// \param[in] _damping_z Damping of z reference
        void setReferenceParameters
        (
            double _omega_x, double _omega_y, double _omega_z,
            double _damping_x, double _damping_y, double _damping_z
        );

        /// \brief Set the current value of the references
        /// \param[in] _pos_x Set the current x position
        /// \param[in] _pos_y Set the current y position
        /// \param[in] _pos_z Set the current z position
        void setCurrentReferencePosition(double _pos_x, double _pos_y, double _pos_z);

        /// \brief Set the foot target velocity
        /// \param[in] _desired_foot_vel_x The desired foot speed in the x direction
        /// \param[in] _desired_foot_vel_y The desired foot speed in the y direction
        /// \param[in] _desired_foot_vel_z The desired foot speed in the z direction
        void setFootGoalPos(double _desired_foot_pos_x, double _desired_foot_pos_y, double _desired_foot_pos_z);

        /// \brief The function tries to move the foot to the position given by the input parameters.
        /// This is done by calculating the inverse kinematics and giving the motors position references
        /// \param[in] _foot_pos_x The target foot x position
        /// \param[in] _foot_pos_y The target foot y position
        /// \param[in] _foot_pos_z The target foot z position
        bool moveFootToPosition(double _foot_pos_x, double _foot_pos_y, double _foot_pos_z);

        /// \brief Function used to check if any new ROS messages has been received
        void checkForNewMessages();

        /// \brief This is a ROS helper function that process messages.
        //void processQueueThread();

        /// \brief This is a ROS helper function that publish messages.
        //void publishQueueThread();

        /// \brief This function initilizes ROS
        void initROS();

        /// \brief This function initializes the ROS publish and process queue threads
        //void initROSQueueThreads();

        /// \brief Check whether or not the ready to move message has been received
        bool checkIfReadyToMove(){return ready_to_move;}

        /// \brief Set the ready_to_move flag to false
        void setNotReadyToMove(){ready_to_move = false;}

        /// \brief Check if the target position has been reached
        bool checkIfTargetIsReached(){return is_target_position_reached;}

        /// \brief Check if the squared error between the current joint angles and target joint angles 
        /// is smaller than some threshold.
        bool isTargetPositionReached();

        /// \brief Set the target_position_reached flag to false
        void setTargetPositionToNotReached() {is_target_position_reached = false;}

        /// \brief Sends a command to the motors telling them to stand still
        void setJointVelocityToZero();

        /// \brief Function that publishes joint states and commands.
        /// The messages are stored in seperate ros bags
        void logStatesAndCommands();

        void setJointPositions(double _theta_hy, double _theta_hp, double _theta_kp);

    private:
        /// \brief The joint angles of the leg
        Eigen::Matrix<double, 3, 1> joint_angles = Eigen::Matrix<double, 3, 1>::Zero();

        /// \brief Desired joint velocity
        Eigen::Matrix<double, 3, 1> joint_velocity = Eigen::Matrix<double, 3, 1>::Zero();

        /// \brief ROS node handle
        std::unique_ptr<ros::NodeHandle> nodeHandle;

        /// \brief Subscribes to generalized coordinates messages
        ros::Subscriber generalizedCoordinatesSubscriber;

        /// \brief Subscribes to messages deciding whether or not we should move the leg
        ros::Subscriber readyToMoveSubscriber;

        /// \brief Publishes velocity commands to the teensy to control the motors
        ros::Publisher jointCommandPublisher;

        /// \brief The joint state message that is sent to the Teensy
        sensor_msgs::JointState motor_command_msg;

        /// \brief ROS callback queue that helps processing messages
        //ros::CallbackQueue rosProcessQueue;

        /// \brief ROS callback queue that helps publishing messages
        //ros::CallbackQueue rosPublishQueue;

        /// \brief Thread running the ROS process queue
        //std::thread rosProcessQueueThread;

        /// \brief Thread running the ROS publish queue
        //std::thread rosPublishQueueThread;

        /// \brief Reference generator for foot speed in x direction
        ThirdOrderFilter filter_ref_foot_speed_x;

        /// \brief Reference generator for foot speed in y direction
        ThirdOrderFilter filter_ref_foot_speed_y;

        /// \brief Reference generator for foot speed in z direction
        ThirdOrderFilter filter_ref_foot_speed_z;

        /// \brief Variable deciding whether or not we want to move the leg
        bool ready_to_move = false;

        /// \brief Variable indicating wheher or not we have reached the goal
        bool is_target_position_reached = false;

        /// \brief Angles used for the joint position setpoint controller
        Eigen::Matrix<double, 3, 1> position_controller_joint_target = Eigen::Matrix<double, 3, 1>::Zero();

        /// \brief Setpoint joint velocity for velocity control
        Eigen::Matrix<double, 3, 1> velocity_controller_joint_target = Eigen::Matrix<double, 3, 1>::Zero();

        /// \brief Kinematics object
        Kinematics kinematics;


        //*** FOR SIMULATOR ***//

        /// \brief Simulator joint angles
        //Eigen::Matrix<double, 12, 1> simulator_joint_angles;

        ros::Subscriber simulator_generalized_coordinates_subscriber;

        ros::Subscriber simulator_generalized_velocity_subscriber;

        ros::Publisher simulator_joint_state_publisher;

        void simulatorGeneralizedCoordinateCallback(const std_msgs::Float64MultiArrayConstPtr &_msg);

        void simulatorGeneralizedVelocityCallback(const std_msgs::Float64MultiArrayConstPtr &_msg);

        void simulatorSendJointPositionCommand();

    public: void simulatorSendJointVelocityCommand();

    //*** For logging ***//
    private:    ros::Publisher log_state_publisher;

    private:    ros::Publisher log_command_publisher;
};

#endif