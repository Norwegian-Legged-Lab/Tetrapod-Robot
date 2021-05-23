/*******************************************************************/
/*    AUTHOR: Paal Arthur S. Thorseth                              */
/*    ORGN:   Dept of Eng Cybernetics, NTNU Trondheim              */
/*    FILE:   hierarchical_optimization_controller.cpp             */
/*    DATE:   May 15, 2021                                         */
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

#include <hierarchical_optimization_controller/hierarchical_optimization_controller.h>

// Constructor
HierarchicalOptimizationControl::HierarchicalOptimizationControl()
{
    this->InitRos();
    this->InitRosQueueThreads();
}

// Destructor
HierarchicalOptimizationControl::~HierarchicalOptimizationControl()
{
    this->rosNode->shutdown();

    this->rosProcessQueue.clear();
    this->rosProcessQueue.disable();
    this->rosProcessQueueThread.join();

    this->rosPublishQueue.clear();
    this->rosPublishQueue.disable();
    this->rosPublishQueueThread.join();
}

// Hierarchical Least-Square Optimization
void HierarchicalOptimizationControl::HierarchicalLeastSquareOptimization()
{
    Eigen::Matrix<double, 18, 1> desired_dot_u;            // 18x1 Desired Generalized accelerations
    Eigen::Matrix<double, Eigen::Dynamic, 1> desired_F_c;  // 3*n_cx1 Desired Contact forces

    Eigen::Matrix<double, Eigen::Dynamic, 1> x;            // (18 + 3*n_c)x1 Optimization variable

    // Matrices and terms used to enfore equations of motion 
    // for the floating base system dynamics (the first six
    // rows of the respective matrices and terms).
    Eigen::Matrix<double, 18, 18> M_fb;                    // 18x18 Floating base Mass matrix
    Eigen::Matrix<double, 18, 1> b_fb;                     // 18x1 Floating base Coriolis and centrifugal terms
    Eigen::Matrix<double, 18, 1> g_fb;                     // 18x1 Floating base Gravitational terms
    Eigen::Matrix<double, Eigen::Dynamic, 18> J_c_fb;      // (3*n_c)x18 Floating base Contact Jacobian

    std::vector<Kinematics::LegType> contact_legs; // Vector of contact points (legs)

    ros::Rate control_rate(200); 
    while (this->rosNode->ok())
    {
        // Clear contact points
        contact_legs.clear();

        // Fill contact points
        for (size_t i = 0; i < 4; i++)
        {
            // Contact State is assumed sorted by fl, fr, rl, rr
            if (contactState[i])
            {
                // fl = 1, fr = 2, rl = 3, rr = 4
                contact_legs.push_back(Kinematics::LegType(i + 1));
            }
        }

        // Number of contact points
        const unsigned int n_c = contact_legs.size();

        // Resize dynamic matrices and terms
        x.resize(18 + 3*n_c, 1);
        J_c_fb.resize(3*n_c, 18);

        // Update matrices used by EOMs
        M_fb = kinematics.GetMassMatrix(this->genCoord);
        M_fb.bottomRows(12).setZero();

        b_fb = kinematics.GetCoriolisAndCentrifugalTerms(this->genCoord, this->genVel);
        b_fb.bottomRows(12).setZero();

        g_fb = kinematics.GetGravitationalTerms(this->genCoord);
        g_fb.bottomRows(12).setZero();

        J_c_fb = kinematics.GetContactJacobianInW(contact_legs, this->genCoord);
        J_c_fb.rightCols(12).setZero();

        control_rate.sleep();
    }
}

// Callback for ROS Generalized Coordinates messages
void HierarchicalOptimizationControl::OnGenCoordMsg(const std_msgs::Float64MultiArrayConstPtr &_msg)
{
    std::vector<double> data = _msg->data;

    this->genCoord = Eigen::Map<Eigen::MatrixXd>(data.data(), 18, 1);
}

// Callback for ROS Generalized Velocities messages
void HierarchicalOptimizationControl::OnGenVelMsg(const std_msgs::Float64MultiArrayConstPtr &_msg)
{
    std::vector<double> data = _msg->data;

    this->genVel = Eigen::Map<Eigen::MatrixXd>(data.data(), 18, 1); 

}

// Callback for ROS Contact State messages
void HierarchicalOptimizationControl::OnContactStateMsg(const std_msgs::Int8MultiArrayConstPtr &_msg)
{
    if (_msg->data.size() == 4)
    {
        ROS_ERROR("[HierarchicalOptimizationControl::OnContactStateMsg] Received contact message with wrong size!");
    }
    else
    {
        this->contactState[0] = _msg->data[0];
        this->contactState[1] = _msg->data[1];
        this->contactState[2] = _msg->data[2];
        this->contactState[3] = _msg->data[3];
    }
}

// Setup thread to process messages
void HierarchicalOptimizationControl::ProcessQueueThread()
{
    static const double timeout = 0.01;
    while (this->rosNode->ok())
    {
        this->rosProcessQueue.callAvailable(ros::WallDuration(timeout));
    }
}

// Setup thread to publish messages
void HierarchicalOptimizationControl::PublishQueueThread()
{
    static const double timeout = 0.01;
    while (this->rosNode->ok())
    {
        this->rosPublishQueue.callAvailable(ros::WallDuration(timeout));
    }
}

// Initialize ROS
void HierarchicalOptimizationControl::InitRos()
{
    if (!ros::isInitialized())
    {
        int argc = 0;
        char **argv = NULL;
        ros::init(
            argc,
            argv,
            "hierarchical_optimization_control_node",
            ros::init_options::NoSigintHandler
        );
    }

    this->rosNode.reset(new ros::NodeHandle("hierarchical_optimization_control_node"));

    ros::SubscribeOptions gen_coord_so = 
        ros::SubscribeOptions::create<std_msgs::Float64MultiArray>(
            "/my_robot/gen_coord",
            1,
            boost::bind(&HierarchicalOptimizationControl::OnGenCoordMsg, this, _1),
            ros::VoidPtr(),
            &this->rosProcessQueue
            );

    ros::SubscribeOptions gen_vel_so = 
        ros::SubscribeOptions::create<std_msgs::Float64MultiArray>(
            "/my_robot/gen_vel",
            1,
            boost::bind(&HierarchicalOptimizationControl::OnGenVelMsg, this, _1),
            ros::VoidPtr(),
            &this->rosProcessQueue
            );

    ros::SubscribeOptions contact_state_so = 
        ros::SubscribeOptions::create<std_msgs::Int8MultiArray>(
            "/my_robot/contact_state",
            1,
            boost::bind(&HierarchicalOptimizationControl::OnContactStateMsg, this, _1),
            ros::VoidPtr(),
            &this->rosProcessQueue
            );

    ros::AdvertiseOptions joint_state_ao =
        ros::AdvertiseOptions::create<sensor_msgs::JointState>(
            "/my_robot/joint_state_cmd",
            1,
            ros::SubscriberStatusCallback(),
            ros::SubscriberStatusCallback(),
            ros::VoidPtr(),
            &this->rosPublishQueue
        );

    this->genCoordSub = this->rosNode->subscribe(gen_coord_so);

    this->genVelSub = this->rosNode->subscribe(gen_vel_so);

    this->contactStateSub = this->rosNode->subscribe(contact_state_so);

    this->jointStatePub = this->rosNode->advertise(joint_state_ao);
}

// Initialize ROS Publish and Process Queue Threads
void HierarchicalOptimizationControl::InitRosQueueThreads()
{
    this->rosPublishQueueThread = std::thread(
        std::bind(&HierarchicalOptimizationControl::PublishQueueThread, this)
    );

    this->rosProcessQueueThread = std::thread(
        std::bind(&HierarchicalOptimizationControl::ProcessQueueThread, this)
    );
}