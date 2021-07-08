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
#include <functional>
#include <cmath>
#include <string>
// Kinematics
#include <kinematics/kinematics.h>

#define UNINITIALIZED_JOINT_STATE 10.0
#define ROBOT_NAME "my_robot"


class Controller{
    protected: using JointState = Eigen::Matrix<double, 12, 1>;
    
    public: Controller(int controller_freq): controller_freq(controller_freq) {initROS();}
    
    public: virtual ~Controller() {}

    /*** Functions ***/
    public: void waitForReadyToProceed();

    public: virtual void UpdateFeetReferences() = 0;

    public: bool UpdateJointCommands();

    public: bool sendJointPositionCommands();

    public: virtual void setInitialConfiguration();

    public: void initROS();

    void jointStateCallback(const sensor_msgs::JointStatePtr &msg);

    void readyToProceedCallback(const std_msgs::Bool &msg);
    /*** Variables ***/
    private: bool ready_to_proceed = false;

    protected: std::string node_name = "controller_node";

    protected: std::string robot_name = ROBOT_NAME;

    protected: int controller_freq;

    protected: Kinematics kinematics;

    protected: ros::NodeHandlePtr nodeHandle;

    protected: ros::Publisher joint_command_publisher;

    protected: ros::Subscriber joint_state_subscriber;

    protected: ros::Subscriber ready_to_proceed_subscriber;

    protected: Eigen::Vector3d fl_offset = Eigen::Vector3d(0.22, 0.22, 0);

    protected: Eigen::Vector3d fr_offset = Eigen::Vector3d(0.22, -0.22, 0);

    protected: Eigen::Vector3d rl_offset = Eigen::Vector3d(-0.22, 0.22, 0);

    protected: Eigen::Vector3d rr_offset = Eigen::Vector3d(-0.22, -0.22, 0);

    protected: Eigen::Vector3d fl_position_body;

    protected: Eigen::Vector3d fr_position_body;

    protected: Eigen::Vector3d rl_position_body;

    protected: Eigen::Vector3d rr_position_body;

    protected: JointState joint_angle_commands = JointState::Zero();

    protected: JointState joint_angles = JointState::Constant(UNINITIALIZED_JOINT_STATE);

    protected: JointState joint_velocities = JointState::Zero();
};