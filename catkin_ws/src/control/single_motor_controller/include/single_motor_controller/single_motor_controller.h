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

    public: SingleMotorController(double _publish_frequency);

    public: virtual ~SingleMotorController(){};

    /*** ROS FUNCTIONS ***/

    public: void initROS();

    private: void motorStateCallback(const sensor_msgs::JointStatePtr &_msg);

    private: void readyToProceedCallback(const std_msgs::Bool &_msg);

    private: void setGoalCallback(const std_msgs::Float32 &_msg);

    private: void motorConfirmationCallback(const std_msgs::Bool &_msg);

    private: void keepLoggingCallback(const std_msgs::Bool &_msg);

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

    public: void setPositionDirectly(double _joint_pos);

    public: void setVelocityDirectly(double _joint_vel);

    public: void setTorqueDirectly(double _torque);

    

    /*** HELPER FUNCTIONS ***/

    public: void initializeMotor
    (
        double _k_p_pos, 
        double _k_d_pos, 
        double _k_p_vel, 
        double _k_i_vel, 
        double _k_p_torque, 
        double _k_i_torque
    );

    public: void initializeMotor();

    public: bool readyToProceed();

    public: bool initialStateReceived();

    public: void checkForNewMessages();

    public: void printAll();

    public: void writeToLog();

    public: bool keepLogging(){return keep_logging;}

    public: double getPosition(){return angle_pos;}

    /*** STATE VARIABLES ***/

    private: double angle_offset = 0.0;

    private: double angle_pos = UNINITIALIZED_STATE;

    private: double angle_vel = 0;

    private: double angle_pos_ref = 0;

    private: double angle_vel_ref = 0;

    private: double angle_acc_ref = 0;

    private: double torque = 0;

    private: double torque_ref = 0;

    private: bool ready_to_proceed = false;

    private: bool motor_initialized = false;

    private: double current_iteration = 0.0;

    private: bool keep_logging = true;

    private: bool gains_set = false;

    /*** PARAMETERS ***/

    private: double publish_frequency = 100.0;

    private: double period = 2.0;

    private: double max_iterations;

    private: double max_travel = 0.0; //M_PI*2.0/3.0;

    private: double inertia = 0.1;

    private: double k_p_controller = 50.0;

    private: double k_i_controller = 10.0;

    private: double k_d_controller = 5.0;

    private: double k_p_pos = 1.0;

    private: double k_i_pos = 1.0;

    private: double k_d_pos = 5.0;

    private: double k_p_vel = 50.0;

    private: double k_i_vel = 50.0;

    private: double k_d_vel = 0.0;

    private: double k_p_torque = 100.0;

    private: double k_i_torque = 100.0;

    private: double k_d_torque = 0.0;

    /*** ROS VARIABLES ***/

    private: std::unique_ptr<ros::NodeHandle> node_handle;

    private: ros::Subscriber motor_state_subscriber;

    private: ros::Subscriber ready_to_proceed_subscriber;

    private: ros::Subscriber set_goal_subscriber;

    private: ros::Subscriber motor_confirmation_subscriber;

    private: ros::Subscriber keep_logging_subscriber;

    private: ros::Publisher joint_command_publisher;

    private: ros::Publisher motor_gain_publisher;

    private: ros::Publisher log_motor_state_publisher;

    private: ros::Publisher log_motor_reference_publisher;
};

#endif