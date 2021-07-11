/*******************************************************************/
/*    AUTHOR: Paal Arthur S. Thorseth                              */
/*    ORGN:   Dept of Eng Cybernetics, NTNU Trondheim              */
/*    FILE:   tetrapod_plugin.cpp                                  */
/*    DATE:   Feb 4, 2021                                          */
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


#include <tetrapod_gazebo/tetrapod_plugin.h>


namespace gazebo {

// Constructor
TetrapodPlugin::TetrapodPlugin() {}

// Destructor
TetrapodPlugin::~TetrapodPlugin() 
{
    this->rosNode->shutdown();

    this->rosProcessQueue.clear();
    this->rosProcessQueue.disable();
    this->rosProcessQueueThread.join();

    this->rosPublishQueue.clear();
    this->rosPublishQueue.disable();
    this->rosPublishQueueThread.join();
}

// Load Plugin 
void TetrapodPlugin::Load(physics::ModelPtr _model, sdf::ElementPtr _sdf)
{
    // Store model pointer
    this->model = _model;

    // Store world pointer
    this->world = _model->GetWorld();

    // Store model name
    this->model_name = _model->GetName();
    // ROS_INFO_STREAM("Model name: " << model_name); TODO REMOVE

    // Store base link
    this->base = _model->GetLink(this->model_name + "::tetrapod::body");

    // Store joints 
    this->joints = this->model->GetJointController()->GetJoints();
    //printMap(joints); TODO remove

    for (auto& t: joints)
    {
        ROS_INFO_STREAM(t.first);
    }

    // Initialize ROS
    InitRos();

    // Load parameters from config
    if (!LoadParametersRos())
    {
        ROS_ERROR("Could not load parameters.");
        return;
    }

    // Setup Joint Controllers
    InitJointControllers();

    // Configure initial joint states
    InitJointConfiguration();

    // Initialize ROS Queue Threads
    InitRosQueueThreads();
}

// Get base pose
Eigen::Matrix<double, 6, 1> TetrapodPlugin::GetBasePose()
{
    ignition::math::Pose3d base_pose = this->base->WorldPose();

    Eigen::Matrix<double, 6, 1> q_b;

    q_b(0) = base_pose.X();
    q_b(1) = base_pose.Y();
    q_b(2) = base_pose.Z();
    q_b(3) = base_pose.Roll();
    q_b(4) = base_pose.Pitch();
    q_b(5) = base_pose.Yaw();

    return q_b;
}

// Get base twist
Eigen::Matrix<double, 6, 1> TetrapodPlugin::GetBaseTwist()
{
    ignition::math::Vector3d base_linear_velocity = this->base->WorldLinearVel();

    ignition::math::Vector3d base_angular_velocity = this->base->WorldAngularVel();

    Eigen::Matrix<double, 6, 1> u_b;

    u_b(0) = base_linear_velocity.X();
    u_b(1) = base_linear_velocity.Y();
    u_b(2) = base_linear_velocity.Z();
    u_b(3) = base_angular_velocity.X();
    u_b(4) = base_angular_velocity.Y();
    u_b(5) = base_angular_velocity.Z();

    return u_b;
}

// Get joint force at _joint_name 
// TODO Implement.
double TetrapodPlugin::GetJointForce(const std::string &_joint_name)
{
    //this->joints[joint_name]-A map<joint_name, force> that contains force values set by the user of the JointController.

    double force = this->joints[this->model_name + "::" + _joint_name]->GetForce(0);
    //std::map<std::string, double> force_map = this->model->GetJointController()->GetForces();

    //double force = force_map[this->model_name + "::" + _joint_name];

    return force;
}

// Get joint forces
Eigen::Matrix<double, 12, 1> TetrapodPlugin::GetJointForces()
{
    Eigen::Matrix<double, 12, 1> tau_r;

    // Front left
    tau_r(0) = this->GetJointForce(this->joint_names[0]);
    tau_r(1) = this->GetJointForce(this->joint_names[1]);
    tau_r(2) = this->GetJointForce(this->joint_names[2]);

    // Front right
    tau_r(3) = this->GetJointForce(this->joint_names[3]);
    tau_r(4) = this->GetJointForce(this->joint_names[4]);
    tau_r(5) = this->GetJointForce(this->joint_names[5]);

    // Rear left
    tau_r(6) = this->GetJointForce(this->joint_names[6]);
    tau_r(7) = this->GetJointForce(this->joint_names[7]);
    tau_r(8) = this->GetJointForce(this->joint_names[8]);

    // Rear right
    tau_r(9) = this->GetJointForce(this->joint_names[9]);
    tau_r(10) = this->GetJointForce(this->joint_names[10]);
    tau_r(11) = this->GetJointForce(this->joint_names[11]);

    return tau_r;
}

// Get joint velocity at _joint_name
double TetrapodPlugin::GetJointVelocity(const std::string &_joint_name)
{
    double vel = this->joints[this->model_name + "::" + _joint_name]->GetVelocity(0);

    return vel;
}

// Get joint velocities
Eigen::Matrix<double, 12, 1> TetrapodPlugin::GetJointVelocities()
{
    Eigen::Matrix<double, 12, 1> dot_q_r;

    // Front left
    dot_q_r(0) = this->GetJointVelocity(this->joint_names[0]);
    dot_q_r(1) = this->GetJointVelocity(this->joint_names[1]);
    dot_q_r(2) = this->GetJointVelocity(this->joint_names[2]);

    // Front right
    dot_q_r(3) = this->GetJointVelocity(this->joint_names[3]);
    dot_q_r(4) = this->GetJointVelocity(this->joint_names[4]);
    dot_q_r(5) = this->GetJointVelocity(this->joint_names[5]);

    // Rear left
    dot_q_r(6) = this->GetJointVelocity(this->joint_names[6]);
    dot_q_r(7) = this->GetJointVelocity(this->joint_names[7]);
    dot_q_r(8) = this->GetJointVelocity(this->joint_names[8]);

    // Rear right
    dot_q_r(9) = this->GetJointVelocity(this->joint_names[9]);
    dot_q_r(10) = this->GetJointVelocity(this->joint_names[10]);
    dot_q_r(11) = this->GetJointVelocity(this->joint_names[11]);

    return dot_q_r;
}

// Get joint position at _joint_name
double TetrapodPlugin::GetJointPosition(const std::string &_joint_name)
{
    double pos = this->joints[this->model_name + "::" + _joint_name]->Position();

    return pos;
}

// Get joint positions
Eigen::Matrix<double, 12, 1> TetrapodPlugin::GetJointPositions()
{
    Eigen::Matrix<double, 12, 1> q_r;

    // Front left
    q_r(0) = this->GetJointPosition(this->joint_names[0]);
    q_r(1) = this->GetJointPosition(this->joint_names[1]);
    q_r(2) = this->GetJointPosition(this->joint_names[2]);

    // Front right
    q_r(3) = this->GetJointPosition(this->joint_names[3]);
    q_r(4) = this->GetJointPosition(this->joint_names[4]);
    q_r(5) = this->GetJointPosition(this->joint_names[5]);

    // Rear left
    q_r(6) = this->GetJointPosition(this->joint_names[6]);
    q_r(7) = this->GetJointPosition(this->joint_names[7]);
    q_r(8) = this->GetJointPosition(this->joint_names[8]);

    // Rear right
    q_r(9) = this->GetJointPosition(this->joint_names[9]);
    q_r(10) = this->GetJointPosition(this->joint_names[10]);
    q_r(11) = this->GetJointPosition(this->joint_names[11]);

    return q_r;
}


// Apply force at a single joint
void TetrapodPlugin::SetJointForce(const std::string &_joint_name, const double &_force)
{
    this->model->GetJointController()->SetForce(
        this->model_name + "::" + _joint_name,
        _force
    );
}

// Apply joint forces
void TetrapodPlugin::SetJointForces(const std::vector<double> &_forces)
{
    auto start = std::chrono::steady_clock::now();

    if (this->controlMode != 3)
    {
        this->model->GetJointController()->Reset();

        this->controlMode = ControlMode::torque;
    }

    for (size_t i = 0; i < this->joint_names.size(); i++)
    {
        this->model->GetJointController()->SetForce(
            this->model_name + "::" + this->joint_names[i],
            _forces[i]
        );
    }

    auto end = std::chrono::steady_clock::now();

    std::chrono::duration<double,std::micro> diff = end - start;

    ROS_DEBUG_STREAM("Time spent resetting commands and applying torques: " << diff.count() << " microseconds.");
}

// Set the a single joints target velocity
void TetrapodPlugin::SetJointVelocity(const std::string &_joint_name, const double &_vel)
{
    this->model->GetJointController()->SetVelocityTarget(
        this->model_name + "::" + _joint_name, 
        _vel
    );
}

// Set joint target velocities
void TetrapodPlugin::SetJointVelocities(const std::vector<double> &_vel)
{
    auto start = std::chrono::steady_clock::now();

    if (this->controlMode != 2)
    {
        this->model->GetJointController()->Reset();

        this->controlMode = ControlMode::velocity;
    }

    for (size_t i = 0; i < this->joint_names.size(); i++)
    {
        this->model->GetJointController()->SetVelocityTarget(
            this->model_name + "::" + this->joint_names[i],
            _vel[i]
        );
    }

    auto end = std::chrono::steady_clock::now();

    std::chrono::duration<double,std::micro> diff = end - start;

    ROS_DEBUG_STREAM("Time spent resetting commands and setting velocity targets: " << diff.count() << " microseconds.");
}

// Set the a single joints target position
void TetrapodPlugin::SetJointPosition(const std::string &_joint_name, const double &_pos)
{
    this->model->GetJointController()->SetPositionTarget(
        this->model_name + "::" + _joint_name, 
        _pos
    );
}

// Set joint target positions
void TetrapodPlugin::SetJointPositions(const std::vector<double> &_pos)
{
    auto start = std::chrono::steady_clock::now();

    if (this->controlMode != 1)
    {
        this->model->GetJointController()->Reset();

        this->controlMode = ControlMode::position;
    }

    for (size_t i = 0; i < this->joint_names.size(); i++)
    {
        this->model->GetJointController()->SetPositionTarget(
            this->model_name + "::" + this->joint_names[i],
            math_utils::wrapAngleToPi(_pos[i])
        );
    }

    auto end = std::chrono::steady_clock::now();

    std::chrono::duration<double,std::micro> diff = end - start;

    ROS_DEBUG_STREAM("Time spent resetting commands and setting position targets: " << diff.count() << " microseconds.");
}

// Callback for ROS Joint State messages
void TetrapodPlugin::OnJointStateMsg(const sensor_msgs::JointStateConstPtr &_msg)
{
    if ((!_msg->position.empty()) && (_msg->position.size() == NUMJOINTS))
    {
        this->SetJointPositions(_msg->position);
    }

    if ((!_msg->velocity.empty()) && (_msg->velocity.size() == NUMJOINTS))
    {
        this->SetJointVelocities(_msg->velocity);
    }

    if ((!_msg->effort.empty()) && (_msg->effort.size() == NUMJOINTS))
    {
        this->SetJointForces(_msg->effort);
    }
}

// Callback for ROS Joint State messages
void TetrapodPlugin::OnFlJointStateMsg(const sensor_msgs::JointStateConstPtr &_msg)
{
    if ((!_msg->position.empty()) && (_msg->position.size() == 3))
    {
        this->SetJointPosition(this->joint_names[0], _msg->position[0]);
        this->SetJointPosition(this->joint_names[1], _msg->position[1]);
        this->SetJointPosition(this->joint_names[2], _msg->position[2]);
    }

    if ((!_msg->velocity.empty()) && (_msg->velocity.size() == 3))
    {
        this->SetJointVelocity(this->joint_names[0], _msg->velocity[0]);
        this->SetJointVelocity(this->joint_names[1], _msg->velocity[1]);
        this->SetJointVelocity(this->joint_names[2], _msg->velocity[2]);
    }

    if ((!_msg->effort.empty()) && (_msg->effort.size() == 3))
    {
        this->SetJointForce(this->joint_names[0], _msg->effort[0]);
        this->SetJointForce(this->joint_names[1], _msg->effort[1]);
        this->SetJointForce(this->joint_names[2], _msg->effort[2]);
    }
}

// Callback for ROS Force messages
void TetrapodPlugin::OnForceMsg(const std_msgs::Float64MultiArrayConstPtr &_msg)
{
    this->SetJointForces(_msg->data);
}

// Callback for ROS Velocity messages
void TetrapodPlugin::OnVelMsg(const std_msgs::Float64MultiArrayConstPtr &_msg)
{
    this->SetJointVelocities(_msg->data);
}

// Callback for ROS Position messages
void TetrapodPlugin::OnPosMsg(const std_msgs::Float64MultiArrayConstPtr &_msg)
{
    this->SetJointPositions(_msg->data);
}

// Setup thread to process messages
void TetrapodPlugin::ProcessQueueThread()
{
    static const double timeout = 0.000001;
    while (this->rosNode->ok())
    {
        this->rosProcessQueue.callAvailable(ros::WallDuration(timeout));
    }
}

// Setup thread to process messages
void TetrapodPlugin::PublishQueueThread()
{
    ros::Rate loop_rate(200);
    while (this->rosNode->ok())
    {
        Eigen::Matrix<double, 18, 1> q; // generalized coordinates
        Eigen::Matrix<double, 18, 1> u; // generalized velocities
        Eigen::Matrix<double, 12, 1> tau; // joint forces (torques)

        q.block(0,0,5,0) << this->GetBasePose();
        q.block(6,0,17,0) << this->GetJointPositions();

        u.block(0,0,5,0) << this->GetBaseTwist();
        u.block(6,0,17,0) << this->GetJointVelocities();

        tau = this->GetJointForces();

        std_msgs::Float64MultiArray gen_coord_msg;
        std_msgs::Float64MultiArray gen_vel_msg;
        std_msgs::Float64MultiArray joint_forces_msg;
        sensor_msgs::JointState joint_state_msg;

        tf::matrixEigenToMsg(q, gen_coord_msg);
        tf::matrixEigenToMsg(u, gen_vel_msg);
        tf::matrixEigenToMsg(tau, joint_forces_msg);

        joint_state_msg.header.stamp = ros::Time::now();
        for(int i = 0; i < 12; i++)
        {
            joint_state_msg.position.push_back(q(i + 6));
            joint_state_msg.velocity.push_back(u(i + 6));
            joint_state_msg.effort.push_back(tau(i));
        }

        this->genCoordPub.publish(gen_coord_msg);
        this->genVelPub.publish(gen_vel_msg);
        this->jointForcesPub.publish(joint_forces_msg);
        this->jointStatePub.publish(joint_state_msg);

        loop_rate.sleep();
    }
}

// Initialize ROS
void TetrapodPlugin::InitRos()
{
    if (!ros::isInitialized())
    {
        int argc = 0;
        char **argv = NULL;
        ros::init(
            argc,
            argv,
            "gazebo_client",
            ros::init_options::NoSigintHandler
        );
    }

    this->rosNode.reset(new ros::NodeHandle("gazebo_client"));

    ros::AdvertiseServiceOptions reset_simulation_aso =
        ros::AdvertiseServiceOptions::create<std_srvs::Empty>(
            "/" + this->model->GetName() + "/reset_simulation",
            boost::bind(&TetrapodPlugin::ResetSimulation, this, _1, _2),
            ros::VoidPtr(),
            &this->rosProcessQueue
        );

    ros::AdvertiseOptions gen_coord_ao =
        ros::AdvertiseOptions::create<std_msgs::Float64MultiArray>(
            "/" + this->model->GetName() + "/gen_coord",
            1,
            ros::SubscriberStatusCallback(),
            ros::SubscriberStatusCallback(),
            ros::VoidPtr(),
            &this->rosPublishQueue
        );

    ros::AdvertiseOptions gen_vel_ao =
        ros::AdvertiseOptions::create<std_msgs::Float64MultiArray>(
            "/" + this->model->GetName() + "/gen_vel",
            1,
            ros::SubscriberStatusCallback(),
            ros::SubscriberStatusCallback(),
            ros::VoidPtr(),
            &this->rosPublishQueue
        );

    ros::AdvertiseOptions joint_forces_ao =
        ros::AdvertiseOptions::create<std_msgs::Float64MultiArray>(
            "/" + this->model->GetName() + "/joint_forces",
            1,
            ros::SubscriberStatusCallback(),
            ros::SubscriberStatusCallback(),
            ros::VoidPtr(),
            &this->rosPublishQueue
        );

    ros::AdvertiseOptions joint_state_ao =
        ros::AdvertiseOptions::create<sensor_msgs::JointState>
        (
            "/" + this->model->GetName() + "/joint_state",
            1,
            ros::SubscriberStatusCallback(),
            ros::SubscriberStatusCallback(),
            ros::VoidPtr(),
            &this->rosPublishQueue
        );

    ros::SubscribeOptions joint_state_so = 
        ros::SubscribeOptions::create<sensor_msgs::JointState>(
            "/" + this->model->GetName() + "/joint_state_cmd",
            1,
            boost::bind(&TetrapodPlugin::OnJointStateMsg, this, _1),
            ros::VoidPtr(),
            &this->rosProcessQueue
            );

    ros::SubscribeOptions force_so = 
        ros::SubscribeOptions::create<std_msgs::Float64MultiArray>(
            "/" + this->model->GetName() + "/force_cmd",
            1,
            boost::bind(&TetrapodPlugin::OnForceMsg, this, _1),
            ros::VoidPtr(),
            &this->rosProcessQueue
            );

    ros::SubscribeOptions vel_so = 
        ros::SubscribeOptions::create<std_msgs::Float64MultiArray>(
            "/" + this->model->GetName() + "/vel_cmd",
            1,
            boost::bind(&TetrapodPlugin::OnVelMsg, this, _1),
            ros::VoidPtr(),
            &this->rosProcessQueue
            );

    ros::SubscribeOptions pos_so = 
        ros::SubscribeOptions::create<std_msgs::Float64MultiArray>(
            "/" + this->model->GetName() + "/pos_cmd",
            1,
            boost::bind(&TetrapodPlugin::OnPosMsg, this, _1),
            ros::VoidPtr(),
            &this->rosProcessQueue
            );

    this->resetSimService = this->rosNode->advertiseService(reset_simulation_aso);

    this->genCoordPub = this->rosNode->advertise(gen_coord_ao);

    this->genVelPub = this->rosNode->advertise(gen_vel_ao);

    this->jointForcesPub = this->rosNode->advertise(joint_forces_ao);

    this->jointStatePub = this->rosNode->advertise(joint_state_ao);

    this->jointStateSub = this->rosNode->subscribe(joint_state_so);

    this->forceSub = this->rosNode->subscribe(force_so);

    this->velSub = this->rosNode->subscribe(vel_so);

    this->posSub = this->rosNode->subscribe(pos_so);

}

// Initialize ROS Publish and Process Queue Threads
void TetrapodPlugin::InitRosQueueThreads()
{
    this->rosPublishQueueThread = std::thread(
        std::bind(&TetrapodPlugin::PublishQueueThread, this)
    );

    this->rosProcessQueueThread = std::thread(
        std::bind(&TetrapodPlugin::ProcessQueueThread, this)
    );
}

// Load configuration
bool TetrapodPlugin::LoadParametersRos()
{
    if (!this->rosNode->getParam("joint_names", this->joint_names))
    {
        ROS_ERROR("Could not read joint names from parameter server.");
        return false;
    }

    if (!this->rosNode->getParam("joint_config", this->joint_config))
    {
        ROS_ERROR("Could not read joint config from parameter server.");
        return false;
    }

    if (!this->rosNode->getParam("joint_velocity_controller/p_gains", this->vel_p_gains))
    {
        ROS_ERROR("Could not read velocity P-gains from parameter server.");
        return false;
    }

    if (!this->rosNode->getParam("joint_velocity_controller/i_gains", this->vel_i_gains))
    {
        ROS_ERROR("Could not read velocity I-gains from parameter server.");
        return false;
    }

    if (!this->rosNode->getParam("joint_velocity_controller/d_gains", this->vel_d_gains))
    {
        ROS_ERROR("Could not read velocity D-gains from parameter server.");
        return false;
    }

    if (!this->rosNode->getParam("joint_position_controller/p_gains", this->pos_p_gains))
    {
        ROS_ERROR("Could not read position P-gains from parameter server.");
        return false;
    }

    if (!this->rosNode->getParam("joint_position_controller/i_gains", this->pos_i_gains))
    {
        ROS_ERROR("Could not read position I-gains from parameter server.");
        return false;
    }

    if (!this->rosNode->getParam("joint_position_controller/d_gains", this->pos_d_gains))
    {
        ROS_ERROR("Could not read position D-gains from parameter server.");
        return false;
    }

    if (joint_names.size() != vel_p_gains.size() ||
        joint_names.size() != vel_i_gains.size() ||
        joint_names.size() != vel_d_gains.size() ||
        joint_names.size() != pos_p_gains.size() ||
        joint_names.size() != pos_i_gains.size() ||
        joint_names.size() != pos_d_gains.size())
    {
        ROS_ERROR("Mismatch in number of joints and number of gains.");
        return false;
    }

    return true;
}

// Initialize Joint Controllers
void TetrapodPlugin::InitJointControllers()
{
    for (size_t i = 0; i < this->joint_names.size(); i++)
    {
        this->model->GetJointController()->SetVelocityPID(
            this->model_name + "::" + this->joint_names[i],
            common::PID(vel_p_gains[i], vel_i_gains[i], vel_d_gains[i])
        );

        this->model->GetJointController()->SetPositionPID(
            this->model_name + "::" + this->joint_names[i],
            common::PID(pos_p_gains[i], pos_i_gains[i], pos_d_gains[i])
        );
    }
}

// Initialize joint configuration
void TetrapodPlugin::InitJointConfiguration()
{
    this->model->GetJointController()->Reset();

    this->controlMode = ControlMode::position;

    for (size_t i = 0; i < this->joint_names.size(); i++)
    {
        // Set default position 
        this->model->GetJointController()->SetJointPosition(
            this->model_name + "::" + this->joint_names[i],
            math_utils::wrapAngleToPi(math_utils::degToRad(this->joint_config[i]))
        );

        // Set controller position reference
        this->model->GetJointController()->SetPositionTarget(
            this->model_name + "::" + this->joint_names[i],
            math_utils::wrapAngleToPi(math_utils::degToRad(this->joint_config[i]))
        );
    }

}
bool TetrapodPlugin::ResetSimulation(const std_srvs::Empty::Request &_req,
                                     std_srvs::Empty::Response &_res)
{
    this->world->Reset();

    this->model->GetJointController()->Reset();

    this->controlMode = ControlMode::position;

    for (size_t i = 0; i < this->joint_names.size(); i++)
    {
        // Reset Torques
        this->model->GetJointController()->SetForce(
            this->model_name + "::" + this->joint_names[i],
            0
        );

        // Set default position 
        this->model->GetJointController()->SetJointPosition(
            this->model_name + "::" + this->joint_names[i],
            math_utils::wrapAngleToPi(math_utils::degToRad(this->joint_config[i]))
        );

        // Set controller position reference
        this->model->GetJointController()->SetPositionTarget(
            this->model_name + "::" + this->joint_names[i],
            math_utils::wrapAngleToPi(math_utils::degToRad(this->joint_config[i]))
        );
    }

    return true;
}

} // namespace gazebo