#ifndef gait_controller_h
#define gait_controller_h

// ROS
#include "ros/ros.h"
#include "std_msgs/Empty.h"
#include "std_msgs/Bool.h"
#include "std_msgs/Float64.h"
#include "std_msgs/Float64MultiArray.h"
#include "sensor_msgs/JointState.h"
#include "geometry_msgs/Twist.h"
#include "eigen_conversions/eigen_msg.h"

// Eigen
#include <Eigen/Core>

// Standard Library
#include <thread>

// Kinematics
#include <kinematics/kinematics.h>

#define UNINITIALIZED_JOINT_STATE 10.0

enum LegID {fl = 0, fr = 1, rl = 2, rr = 3};

enum GaitPhase {pre_swing_fl_rr = 0, swing_fl_rr = 1, pre_swing_fr_rl = 2, swing_fr_rl = 3, gait_phase_not_set = 4};

class GaitController
{
    public: GaitController();

    public: virtual ~GaitController(){}

    /*** Functions ***/

    public: void initROS();

    private: void generalizedPositionCallback(const std_msgs::Float64MultiArrayConstPtr &_msg);

    private: void generalizedVelocityCallback(const std_msgs::Float64MultiArrayConstPtr &_msg);

    private: void readyToProceedCallback(const std_msgs::Bool &_msg);

    private: void twistCommandCallback(const geometry_msgs::TwistConstPtr &_msg);

    public: void checkForNewMessages(); 

    public: bool setInitialConfiguration();

    public: void updateFeetReferences();

    public: bool updateJointCommands();

    public: void publishJointCommands();

    public: void waitForReadyToProceedMessage();

    public: bool readyToProceed(){return ready_to_proceed;}

    public: void setReadyToProceedToFalse(){ready_to_proceed = false;}

    public: void waitForPositionJointStates();

    private: bool moveFootToPosition(Eigen::Matrix<double, 3, 1> _foot_pos, bool _offset, int _leg_index);
    
    private: Eigen::Matrix<double, 3, 1> reverseXY(Eigen::Matrix<double, 3, 1> _v_in);

    private: Eigen::Matrix<double, 3, 1> calculateFullStanceFootPosition(LegID _leg);

    private: Eigen::Matrix<double, 3, 1> calculateStanceFootPosition(LegID _leg);

    private: Eigen::Matrix<double, 3, 1> calculateSwingFootPosition(LegID _leg);

    private: double calculateSwingFootHeight(double _current_iteration, double _max_iteration);

    /*** Variables ***/

    private: std::unique_ptr<ros::NodeHandle> nodeHandle;

    private: ros::Subscriber ready_to_proceed_subscriber;

    private: ros::Subscriber generalized_position_subscriber;

    private: ros::Subscriber generalized_velocity_subscriber;

    private: ros::Subscriber twist_command_subscriber;

    private: ros::Publisher joint_command_publisher;

    private: Kinematics kinematics;

    private: Eigen::Matrix<double, 12, 1> joint_angle_commands = Eigen::Matrix<double, 12, 1>::Zero();

    private: Eigen::Matrix<double, 12, 1> joint_angles = Eigen::Matrix<double, 12, 1>::Zero();

    private: Eigen::Matrix<double, 12, 1> joint_velocities = Eigen::Matrix<double, 12, 1>::Zero();

    private: double hip_height = 0.36;

    private: double max_step_height = 0.2;

    private: double current_iteration_full_stance = 0.0;

    private: double max_iteration_full_stance = 10.0;

    private: double current_iteration_swing = 0.0;

    private: double max_iteration_swing = 40.0;

    private: double lin_vel_x = 0.0;

    private: double lin_vel_y = 0.0;

    private: double ang_vel_z = 0.0;

    private: bool fl_offset = false;

    private: bool rr_offset = false;

    private: bool fr_offset = true;

    private: bool rl_offset = true;

    private: GaitPhase current_gait_phase = gait_phase_not_set;

    private: bool ready_to_proceed = false;

    private: double x_0 = 0.22;

    private: double y_0 = 0.22;

    private: double dx_max = 0.0;

    private: double dy_max = 0.0;

    private: double dr_max = 0.0;

    private: double t_full = 0.1;

    private: double t_double = 1.0 - 2.0*t_full;

    private: Eigen::Matrix<double, 3, 1> fl_foot_position_in_body;

    private: Eigen::Matrix<double, 3, 1> fr_foot_position_in_body;

    private: Eigen::Matrix<double, 3, 1> rl_foot_position_in_body;

    private: Eigen::Matrix<double, 3, 1> rr_foot_position_in_body;

    private: sensor_msgs::JointState joint_command_msg;
};

#endif