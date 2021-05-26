#ifndef single_motor_controller_h
#define single_motor_controller_h

#include "ros/ros.h"
#include "std_msgs/Bool.h"
#include "std_msgs/Float32.h"
#include "sensor_msgs/JointState.h"
#include "std_msgs/Float64MultiArray.h"

#include <Eigen/Core>

#include <kinematics/kinematics.h>

class SingleMotorController
{
    const double UNINITIALIZED_STATE = 1000.0;

    const double IDLE_COMMAND = 1000.0;

    /*** CONSTRUCTOR/DESTRUCTOR) ***/

    public: SingleMotorController(double _publish_frequency, bool _use_position_control);

    public: virtual ~SingleMotorController(){};

    /*** ROS FUNCTIONS ***/

    public: void initROS();

    private: void motorStateCallback(const sensor_msgs::JointStatePtr &_msg);

    private: void readyToProceedCallback(const std_msgs::Bool &_msg);

    private: void setGoalCallback(const std_msgs::Float32 &_msg);

    private: void motorConfirmationCallback(const std_msgs::Bool &_msg);

    /*** CONTROL FUNCTIONS ***/

    public: void calculateSingleAxisTrajectory
    (
        const double &_percentage, 
        const double &_period, 
        const double &_max_travel,
        double &_x, 
        double &_x_d, 
        double &_x_dd
    );

    public: void updateTrajectory();

    public: void sendJointPositionCommand();

    public: void sendJointTorqueCommand();

    public: void increaseIterator();

    public: void moveToZero();

    /*** HELPER FUNCTIONS ***/

    public: void initializeMotor(double _k_p_pos, double _k_d_pos, double _k_p_torque, double _k_d_torque);

    public: void initializeMotor();

    public: bool readyToProceed();

    public: bool initialStateReceived();

    public: void checkForNewMessages();

    public: void printAll();

    public: void writeToLog();

    /*** STATE VARIABLES ***/

    double angle_offset = 0.0;

    double angle_pos = UNINITIALIZED_STATE;

    double angle_vel = 0;

    double angle_pos_ref = 0;

    double angle_vel_ref = 0;

    double angle_acc_ref = 0;

    double torque;

    bool ready_to_proceed = false;

    bool motor_initialized = false;

    double current_iteration = 0.0;

    /*** PARAMETERS ***/

    private: double publish_frequency = 100.0;

    private: double period = 2.0;

    private: double max_iterations;

    private: double max_travel = M_PI*2.0/3.0;

    private: double inertia = 1;

    private: double k_p_pos = 1.0;

    private: double k_d_pos = 1.0;

    private: double k_p_torque = 1.0;

    private: double k_d_torque = 1.0;

    /*** ROS VARIABLES ***/

    private: std::unique_ptr<ros::NodeHandle> node_handle;

    private: ros::Subscriber motor_state_subscriber;

    private: ros::Subscriber ready_to_proceed_subscriber;

    private: ros::Subscriber set_goal_subscriber;

    private: ros::Subscriber motor_confirmation_subscriber;

    private: ros::Publisher joint_command_publisher;

    private: ros::Publisher motor_gain_publisher;

    private: ros::Publisher log_motor_state_publisher;

    private: ros::Publisher log_motor_reference_publisher;
};

#endif