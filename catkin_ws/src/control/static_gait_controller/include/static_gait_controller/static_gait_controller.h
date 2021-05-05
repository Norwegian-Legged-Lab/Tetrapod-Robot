#ifndef static_gait_h
#define static_gait_h

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

enum LegID {fl = 0, fr = 1, rl = 2, rr = 3};

enum GaitPhase {swing_rl = 0, swing_fl = 1, swing_rr = 2, swing_fr = 3, no_gait_phase = 4};

/// \brief Variable indicate no control effort
const double CONTROL_IDLE  = 1000.0;

/// \brief Convergence crieria for position control test
const double POSITION_CONVERGENCE_CRITERIA = 0.010; // Cirka 1 degree error for all joints

class StaticGaitController
{
    public:
        /// \brief Constructor
        StaticGaitController(double _dt);

        /// \brief Destructor
        virtual ~StaticGaitController(){};

        /// \brief The joint states for the leg is updated
        /// \param[in] _msg A float array containing the generalized coordinates 
        void generalizedCoordinatesCallback(const sensor_msgs::JointStateConstPtr &_msg);

        /// \brief This function initilizes ROS
        void initROS();

        /// \brief This functions moves each of the robot's legs so that it is ready to perform locomotion
        void setInitialConfiguration();

        /// \brief This variable keeps track of which leg to move
        private: int gait_phase;

        /// \brief This functions updates the joint commands based on the previous state and latest command
        public: bool updateJointCommands();

        /// \brief This function publishes the latest joint commands to the motors
        public: void publishJointCommands();

        /// \brief Distance from CoM to foot in y direction in the body frame
        private: double step_width = 0.3;

        /// \brief Length of each step in the body x direction
        private: double step_length = 0.4;

        private: double step_max_height = 0.20;

        /// \brief Minimum distance between the body and foot in the x direction
        private: double x_offset_min;

        /// \brief Maximum distance between the body and foot in the x direction
        private: double x_offset_max;

        private: double shoulder_height_over_ground;

        private: bool fl_offset = true;

        private: bool rr_offset = true;

        private: bool fr_offset = false;

        private: bool rl_offset = false;

        /// \brief Desired feet positions in the body frame
        private: Eigen::Matrix<double, 4, 1> feet_positions_in_body;

        private: Eigen::Matrix<double, 3, 1> fl_foot_position_in_body;

        private: Eigen::Matrix<double, 3, 1> fr_foot_position_in_body;

        private: Eigen::Matrix<double, 3, 1> rl_foot_position_in_body;

        private: Eigen::Matrix<double, 3, 1> rr_foot_position_in_body;

        /// \brief 
        GaitPhase current_gait_phase = GaitPhase::no_gait_phase;

        /// \brief Calculates the desired footstep positions in the body frame
        public: void updateFeetReferencePositionsInBody();

        /// \brief The reference joint angles are calculated through inverse kinematics based on reference feet positions
        public: bool updateReferenceJointAngles();

        /// \brief Calculate the desired swing leg position for the input leg
        /// \param [in] _step_width The distance from the hip to the foot position i the body y direction
        /// \return A vector containing the desired swing leg position in the hip frame
        public: Eigen::Matrix<double, 3, 1> calculateSwingLegFootPositionInBody(double _step_width, double _x_offset);

        public: Eigen::Matrix<double, 3, 1> calculateStanceLegFootPositionInBody(double _step_width, double _phase_offset, double _x_offset);

        double iteration = 0;
        double iteration_max = 99;

    private:
        /// \brief The joint angles of the leg
        Eigen::Matrix<double, 12, 1> joint_angles = Eigen::Matrix<double, 12, 1>::Zero();

        /// \brief Desired joint velocity
        Eigen::Matrix<double, 12, 1> joint_velocities = Eigen::Matrix<double, 12, 1>::Zero();

        /// \brief ROS node handle
        std::unique_ptr<ros::NodeHandle> nodeHandle;

        /// \brief Subscribes to generalized coordinates messages
        ros::Subscriber generalizedCoordinatesSubscriber;

        Kinematics kinematics;

        void calculateSwingLegHeight();
};

#endif