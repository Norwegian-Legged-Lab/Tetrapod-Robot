#ifndef single_leg_controller_h
#define single_leg_controller_h

// ROS
#include "ros/ros.h"
#include "std_msgs/Empty.h"
#include "std_msgs/Bool.h"
#include "sensor_msgs/JointState.h"
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

        /// \brief Check if the target position has been reached
        bool checkIfTargetIsReached(){return goal_reached;}

    private:
        /// \brief The joint angles of the leg
        Eigen::Matrix<double, 3, 1> joint_angles = Eigen::Matrix<double, 3, 1>::Zero();

        /// \brief Desired joint velocities
        Eigen::Matrix<double, 3, 1> joint_velocities = Eigen::Matrix<double, 3, 1>::Zero();

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
        bool goal_reached = false;

        /// \brief Kinematics object
        Kinematics kinematics;
};

#endif