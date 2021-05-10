/*******************************************************************/
/*    AUTHOR: Paal Arthur S. Thorseth                              */
/*    ORGN:   Dept of Eng Cybernetics, NTNU Trondheim              */
/*    FILE:   gait_control.cpp                                     */
/*    DATE:   Apr 6, 2021                                          */
/*                                                                 */
/* Copyright (C) 2021 Paal Arthur S. Thorseth,                     */
/*                    Adrian B. Ghansah                            */
/*                                                                 */
/* This program is free software: you can redistribute it          */
/* and/or modify it under the terms of the GNU General             */
/* Public License as published by the Free Software Foundation,    */
/* either version 3 of the License, or (at your option) any        */
/* later version.                                                  */
/*                                                                 */
/* This program is distributed in the hope that it will be useful, */
/* but WITHOUT ANY WARRANTY; without even the implied warranty     */
/* of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.         */
/* See the GNU General Public License for more details.            */
/*                                                                 */
/* You should have received a copy of the GNU General Public       */
/* License along with this program. If not, see                    */
/* <https://www.gnu.org/licenses/>.                                */
/*                                                                 */
/*******************************************************************/

#include <kinematics/gait_control.h>

// Constructor
GaitControl::GaitControl()
{
    this->InitRos();
    this->InitRosQueueThreads();

    ros::Duration(2.0).sleep();

    Eigen::Matrix<double, 6, 1> desired_pose;
    desired_pose(0) = 0.0;
    desired_pose(1) = 0.5;
    desired_pose(2) = 0.6;
    desired_pose(3) = 0;
    desired_pose(4) = 0;
    desired_pose(5) = 0;

    Eigen::Matrix<double, 3, 1> desired_pos;
    desired_pos(0) = 0.0;
    desired_pos(1) = 0.5;
    desired_pos(2) = 0.6;

    double tol = 0.05;
    double k = 0.3;

    //this->NumericalIKPositionControl(desired_pose, tol, k);
    //this->NumericalInverseKinematicsControl(desired_pos, tol, k);
    this->PositionTrajectoryIKControl();

}

// Destructor
GaitControl::~GaitControl()
{
    this->rosNode->shutdown();    

    this->rosProcessQueue.clear();
    this->rosProcessQueue.disable();
    this->rosProcessQueueThread.join();

    this->rosPublishQueue.clear();
    this->rosPublishQueue.disable();
    this->rosPublishQueueThread.join();
}

// Position Trajectory Control
void GaitControl::PositionTrajectoryControl()
{
    double amplitude = 0.2;
    double period = 0.2;
    double y_offset_left = 0.25;
    double y_offset_right = -0.25;

    double kpp = 1;
     
    Eigen::Matrix<double, 3, 1> delta_position_in_W;
    Eigen::Matrix<double, 3, 1> desired_position_in_W;
    Eigen::Matrix<double, 3, 1> position_in_W;
    Eigen::Matrix<double, 3, 1> desired_velocity_in_W;

    kindr::RotationMatrixD rotationWToB;

    Eigen::Matrix<double, 3, 18> J;
    Eigen::Matrix<double, 18, 3> pinvJ;

    Eigen::Matrix<double, 18, 1>  desired_gen_vel;

    double t = 0;
    double delta_t = 0.01;

    while (t <= period)
    {
        // Update current position
        position_in_W = this->fPos;

        // Update rotation matrix
        rotationWToB = kindr::RotationMatrixD(kindr::EulerAnglesZyxD(this->genCoord(5),
                                                                     this->genCoord(4),
                                                                     this->genCoord(3))
                                             );

        // Update desired position in world frame
        desired_position_in_W = rotationWToB.matrix() * 
                                this->GetPositionTrajectory(amplitude,
                                                            period,
                                                            y_offset_left,
                                                            t);

        // Update position delta
        delta_position_in_W = desired_position_in_W - position_in_W;

        // Update desired velocity in world frame
        desired_velocity_in_W = Eigen::Matrix<double, 3, 1>::Constant(0);

        // Update Jacobian
        J = this->kinematics.GetTranslationJacobianInW(Kinematics::LegType::frontLeft,
                                                       this->genCoord);

        // Calculate pseudoInverse
        if (!kindr::pseudoInverse(J, pinvJ))
        {
            ROS_ERROR_STREAM("Failed to find pseudo-inverse Jacobian in Position Trajectory Control.");
        } 

        // Calculate desired generalized velocities
        desired_gen_vel = pinvJ * (desired_velocity_in_W + kpp * delta_position_in_W);

        debug_utils::printGeneralizedVelocities(desired_gen_vel);

        // Publish desired generalized velocities
        std_msgs::Float64MultiArray vel_msg;

        tf::matrixEigenToMsg(desired_gen_vel.block<3, 1>(6,0), vel_msg);

        sensor_msgs::JointState joint_state_msg;

        joint_state_msg.header.stamp = ros::Time::now();
        joint_state_msg.velocity = vel_msg.data;

        ROS_INFO("Publishing.");
        this->jointStatePub.publish(joint_state_msg);

        // Increment
        t += delta_t;
    }
}

// Position trajectory inverse kinematics control
void GaitControl::PositionTrajectoryIKControl()
{

    double amplitude = 0.1;
    double period = 0.2;
    double y_offset_left = 0.55;
    double y_offset_right = -0.55;

    double t = 0;
    double delta_t = 0.01;

    double tol = 0.10;
    double k = 0.6;

    kindr::RotationMatrixD rotationWToB;

    Eigen::Matrix<double, 3, 1> desired_pose_in_W;

    while (t <= period)
    {
        // Update rotation matrix
        rotationWToB = kindr::RotationMatrixD(kindr::EulerAnglesZyxD(this->genCoord(5),
                                                                     this->genCoord(4),
                                                                     this->genCoord(3))
                                             );
        rotationWToB.setIdentity();

        // Update desired position in world frame
        desired_pose_in_W.block<3,1>(0,0) = rotationWToB.matrix() * 
                                            this->GetPositionTrajectory(amplitude,
                                                                        period,
                                                                        y_offset_left,
                                                                        t);
        //desired_pose_in_W.block<3,1>(3,0) = Eigen::Matrix<double, 3, 1>::Constant(0);

        ROS_INFO_STREAM("Desired position: " << desired_pose_in_W);

        // Iterate
        this->NumericalInverseKinematicsControl(desired_pose_in_W,
                                                tol,
                                                k);

        // Increment
        t += delta_t;
    }

    ROS_INFO("DONENENE");
}

// Numerical IK Position Control
void GaitControl::NumericalIKPositionControl(const Eigen::Matrix<double, 6, 1> &_des_pose,
                                             const double &_tol,
                                             const double &_k)
{
    Eigen::Matrix<double, 6, 1> pose;
    Eigen::Matrix<double, 6, 1> delta_pose;

    Eigen::Matrix<double, 6, 3> J;
    Eigen::Matrix<double, 3, 6> pinvJ;

    Eigen::Matrix<double, 3, 1> desired_joint_state;

    ros::Rate loop_rate(100);

    do 
    {
        J.block<3,3>(0,0) = this->kinematics.GetTranslationJacobianInB(Kinematics::LegType::frontLeft,
                                                                       Kinematics::BodyType::foot,
                                                                       this->genCoord(6),
                                                                       this->genCoord(7),
                                                                       this->genCoord(8));

        J.block<3,3>(3,0) = this->kinematics.GetSingleLegRotationJacobianInB(false,
                                                                             this->genCoord(6),
                                                                             this->genCoord(7),
                                                                             this->genCoord(8));

        if (!kindr::pseudoInverse(J, pinvJ))
        {
            ROS_ERROR_STREAM("Failed to find pseudo-inverse Jacobian in Numerical Inverse Kinematics Control.");
        } 

        ROS_INFO_STREAM("J: \n" << J);

        pose.block<3,1>(0,0) = this->fPos;
        pose.block<3,1>(3,0) = Eigen::Matrix<double, 3, 1>::Constant(0);

        delta_pose = _des_pose - pose;

        desired_joint_state = this->genCoord.block<3,1>(6,0) + _k * pinvJ * delta_pose;

        std_msgs::Float64MultiArray pos_msg;

        tf::matrixEigenToMsg(desired_joint_state, pos_msg);

        sensor_msgs::JointState joint_state_msg;

        joint_state_msg.header.stamp = ros::Time::now();
        joint_state_msg.position = pos_msg.data;

        this->jointStatePub.publish(joint_state_msg);

        loop_rate.sleep();

    } while (delta_pose.norm() > _tol);

    ROS_INFO("Terminated at solution within tolerance.");
}


// Numerical Inverse Kinematics Control
void GaitControl::NumericalInverseKinematicsControl(const Eigen::Matrix<double, 3, 1> &_des_pose,
                                                    const double &_tol,
                                                    const double &_k)
{
    Eigen::Matrix<double, 3, 1> pose;
    Eigen::Matrix<double, 3, 1> delta_pose;

    Eigen::Matrix<double, 3, 12> J;
    Eigen::Matrix<double, 12, 3> pinvJ;

    Eigen::Matrix<double, 12, 1> desired_gen_coord;

    ros::Rate loop_rate(100);

    do 
    {
        J = this->kinematics.GetTranslationJacobianInB(Kinematics::LegType::frontLeft,
                                                       Kinematics::BodyType::foot,
                                                       this->genCoord.block<12,1>(6,0));

        if (!kindr::pseudoInverse(J, pinvJ))
        {
            ROS_ERROR_STREAM("Failed to find pseudo-inverse Jacobian in Numerical Inverse Kinematics Control.");
        } 

        //ROS_INFO_STREAM("J: \n" << J);

        pose = this->fPos;

        delta_pose = _des_pose - pose;

        desired_gen_coord = this->genCoord.block<12,1>(6,0) + _k * pinvJ * delta_pose;

        //debug_utils::printJointState(desired_gen_coord);

        std_msgs::Float64MultiArray pos_msg;

        tf::matrixEigenToMsg(desired_gen_coord.block<3, 1>(0,0), pos_msg);

        sensor_msgs::JointState joint_state_msg;

        joint_state_msg.header.stamp = ros::Time::now();
        joint_state_msg.position = pos_msg.data;

        this->jointStatePub.publish(joint_state_msg);

        loop_rate.sleep();

    } while (delta_pose.norm() > _tol);

    ROS_INFO("Terminated at solution within tolerance.");
}


// Position Trajectory
Eigen::Matrix<double, 3, 1> GaitControl::GetPositionTrajectory(const double &_A,
                                                               const double &_P,
                                                               const double &_y_offset,
                                                               const double &_t)
{
    Eigen::Matrix<double, 3, 1> positionInB;

    // TODO fix added z offsets
    if (_t >= 0 && _t <= _P/2)
    {
        positionInB(0) = _t;
        positionInB(1) = _y_offset;
        positionInB(2) = _A * std::sin( math_utils::TWO_PI / _P * _t ) + 0.6;
    }
    else if (_t > _P/2 && _t <= _P)
    {

        positionInB(0) = _P - _t;
        positionInB(1) = _y_offset;
        positionInB(2) = 0.6;
    }
    else
    {
        ROS_ERROR_STREAM("Could not retrieve position trajectory as _t is out of range.");
    }

    return positionInB;
}

// Callback for ROS Generalized Coordinates messages
void GaitControl::OnGenCoordMsg(const std_msgs::Float64MultiArrayConstPtr &_msg)
{
    std::vector<double> data = _msg->data;

    Eigen::Matrix<double, 9, 1> single_leg_gen_coord;

    single_leg_gen_coord = Eigen::Map<Eigen::MatrixXd>(data.data(), 9, 1); 

    this->genCoord.block<9,1>(0,0) = single_leg_gen_coord;
    this->genCoord.block<9,1>(9,0) = Eigen::Matrix<double, 9, 1>::Constant(0);

    this->fPos = kinematics.SolveSingleLegForwardKinematics(this->genCoord.block<3,1>(0,0),
                                                            this->genCoord(6),
                                                            this->genCoord(7),
                                                            this->genCoord(8));

    // TODO remove this when not using single leg
    this->fPos(1) += 0.1;
}

// Callback for ROS Generalized Velocities messages
void GaitControl::OnGenVelMsg(const std_msgs::Float64MultiArrayConstPtr &_msg)
{
    std::vector<double> data = _msg->data;

    this->genVel = Eigen::Map<Eigen::MatrixXd>(data.data(), 18, 1); 

}

// Setup thread to process messages
void GaitControl::ProcessQueueThread()
{
    static const double timeout = 0.01;
    while (this->rosNode->ok())
    {
        this->rosProcessQueue.callAvailable(ros::WallDuration(timeout));
    }
}

// Setup thread to process messages
void GaitControl::PublishQueueThread()
{
    static const double timeout = 0.01;
    while (this->rosNode->ok())
    {
        this->rosPublishQueue.callAvailable(ros::WallDuration(timeout));
    }
}

// Initialize ROS
void GaitControl::InitRos()
{
    if (!ros::isInitialized())
    {
        int argc = 0;
        char **argv = NULL;
        ros::init(
            argc,
            argv,
            "gait_control_node",
            ros::init_options::NoSigintHandler
        );
    }

    this->rosNode.reset(new ros::NodeHandle("gait_control_node"));

    ros::SubscribeOptions gen_coord_so = 
        ros::SubscribeOptions::create<std_msgs::Float64MultiArray>(
            "/my_robot/gen_coord",
            1,
            boost::bind(&GaitControl::OnGenCoordMsg, this, _1),
            ros::VoidPtr(),
            &this->rosProcessQueue
            );

    ros::SubscribeOptions gen_vel_so = 
        ros::SubscribeOptions::create<std_msgs::Float64MultiArray>(
            "/my_robot/gen_vel",
            1,
            boost::bind(&GaitControl::OnGenVelMsg, this, _1),
            ros::VoidPtr(),
            &this->rosProcessQueue
            );

    ros::AdvertiseOptions joint_state_ao =
        ros::AdvertiseOptions::create<sensor_msgs::JointState>(
            "/my_robot/joint_state_cmd",
            100,
            ros::SubscriberStatusCallback(),
            ros::SubscriberStatusCallback(),
            ros::VoidPtr(),
            &this->rosPublishQueue
        );

    this->genCoordSub = this->rosNode->subscribe(gen_coord_so);

    this->genVelSub = this->rosNode->subscribe(gen_vel_so);

    this->jointStatePub = this->rosNode->advertise(joint_state_ao);
}

// Initialize ROS Publish and Process Queue Threads
void GaitControl::InitRosQueueThreads()
{
    this->rosPublishQueueThread = std::thread(
        std::bind(&GaitControl::PublishQueueThread, this)
    );

    this->rosProcessQueueThread = std::thread(
        std::bind(&GaitControl::ProcessQueueThread, this)
    );
}

void testGaitTrajectory(GaitControl &_gc)
{
    double A = 1;
    double P = 1;
    double y_offset = 0;

    Eigen::Matrix<double, 3, 1> positionInB;    
    double t = 0;

    while (t <= P)
    {
        positionInB = _gc.GetPositionTrajectory(A, P, y_offset, t);

        ROS_INFO_STREAM("Position at t: " << t << " is r: \n" << positionInB << "\n");

        t += 0.05;
    }

}

// Main
int main(int argc, char **argv)
{
    GaitControl gait_controller;

    ros::spin();

    return 0;
}