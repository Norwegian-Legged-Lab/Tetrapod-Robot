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

    this->genCoord.setZero();
    this->genVel.setZero();
    this->fPos.setZero();

    this->contactState[0] = 1;
    this->contactState[1] = 1;
    this->contactState[2] = 1;
    this->contactState[3] = 1;
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

Eigen::Matrix<double, 12, 1> HierarchicalOptimizationControl::ComputeTorque(const Eigen::Vector3d &_desired_base_pos,
                                            const Eigen::Vector3d &_desired_base_vel,
                                            const Eigen::Vector3d &_desired_base_acc,
                                            const Eigen::Vector3d &_desired_base_ori,
                                            const Eigen::Vector3d &_desired_base_omega,
                                            const Eigen::Vector3d &_desired_base_alpha,
                                            const Eigen::Matrix<Eigen::Vector3d, 4, 1> &_desired_f_pos,
                                            const Eigen::Matrix<Eigen::Vector3d, 4, 1> &_desired_f_vel,
                                            const Eigen::Matrix<Eigen::Vector3d, 4, 1> &_desired_f_acc,
                                            const int (&_contact_state)[4])
{
    Eigen::Matrix<double, 12, 1> desired_tau;

    auto start = std::chrono::steady_clock::now();

    desired_tau = this->HierarchicalOptimization(_desired_base_pos,
                                                _desired_base_vel,
                                                _desired_base_acc,
                                                _desired_base_ori,
                                                _desired_base_omega,
                                                _desired_base_alpha,
                                                _desired_f_pos,
                                                _desired_f_vel,
                                                _desired_f_acc,
                                                this->fPos,
                                                this->fVel,
                                                this->genCoord,
                                                this->genVel,
                                                _contact_state,
                                                0);

    auto end = std::chrono::steady_clock::now();

    std::chrono::duration<double, std::micro> diff = end - start;

    ROS_INFO_STREAM("HO run-time: " << diff.count() << " microseconds. \n");

    return desired_tau;
}

Eigen::Matrix<double, 12, 1> HierarchicalOptimizationControl::ComputeTorque(const Eigen::Vector3d &_desired_base_pos,
                                            const Eigen::Vector3d &_desired_base_vel,
                                            const Eigen::Vector3d &_desired_base_acc,
                                            const Eigen::Vector3d &_desired_base_ori,
                                            const Eigen::Vector3d &_desired_base_omega,
                                            const Eigen::Vector3d &_desired_base_alpha,
                                            const Eigen::Matrix<Eigen::Vector3d, 4, 1> &_desired_f_pos,
                                            const Eigen::Matrix<Eigen::Vector3d, 4, 1> &_desired_f_vel,
                                            const Eigen::Matrix<Eigen::Vector3d, 4, 1> &_desired_f_acc,
                                            const Eigen::Array4i &_contact_state)
{
    int contact_state_c_arr[4];

    Eigen::Array4i::Map(contact_state_c_arr) = _contact_state;

    return ComputeTorque(_desired_base_pos,
                        _desired_base_vel,
                        _desired_base_acc,
                        _desired_base_ori,
                        _desired_base_omega,
                        _desired_base_alpha,
                        _desired_f_pos,
                        _desired_f_vel,
                        _desired_f_acc,
                        contact_state_c_arr);
}
Eigen::Matrix<double, 12, 1> HierarchicalOptimizationControl::ComputeStandingTorque(const Eigen::Vector3d &_desired_base_pos,
                                            const Eigen::Vector3d &_desired_base_vel,
                                            const Eigen::Vector3d &_desired_base_acc,
                                            const Eigen::Vector3d &_desired_base_ori,
                                            const Eigen::Vector3d &_desired_base_omega,
                                            const Eigen::Vector3d &_desired_base_alpha)
{
    Eigen::Matrix<Eigen::Vector3d, 4, 1> desired_f_pos;
    Eigen::Matrix<Eigen::Vector3d, 4, 1> desired_f_vel;
    Eigen::Matrix<Eigen::Vector3d, 4, 1> desired_f_acc;
    Eigen::Matrix<double, 12, 1> desired_tau;

    desired_f_pos = this->fPos;

    for(int i = 0; i < 4; ++i){
        desired_f_vel(i).setZero();
        desired_f_acc(i).setZero();
    }

    desired_tau = ComputeTorque(_desired_base_pos,
                                _desired_base_vel,
                                _desired_base_acc,
                                _desired_base_ori,
                                _desired_base_omega,
                                _desired_base_alpha,
                                desired_f_pos,
                                desired_f_vel,
                                desired_f_acc,
                                this->contactState);

    return desired_tau;
}
// TODO remove this
void HierarchicalOptimizationControl::StaticTorqueTest()
{
    // Declare desired states
    Eigen::Vector3d desired_base_pos;
    Eigen::Vector3d desired_base_vel;
    Eigen::Vector3d desired_base_acc;
    Eigen::Vector3d desired_base_ori;
    Eigen::Matrix<Eigen::Vector3d, 4, 1> desired_f_pos;
    Eigen::Matrix<Eigen::Vector3d, 4, 1> desired_f_vel;
    Eigen::Matrix<Eigen::Vector3d, 4, 1> desired_f_acc;

    // Declare torque solution
    Eigen::Matrix<double, 12, 1> desired_tau;

    // TODO Message to send with base pos command to be removed after plotting..
    std_msgs::Float64MultiArray base_pose_cmd_msg;
    std_msgs::Float64MultiArray base_twist_cmd_msg;

    base_pose_cmd_msg.data.resize(6);
    base_twist_cmd_msg.data.resize(6);
        
    // Loop rate
    ros::Rate loop_rate(200);

    // Loop
    while(this->rosNode->ok())
    {
        // Set desired values
        desired_base_pos << 0,
                            0,
                            0.25;
        desired_base_vel.setZero();
        desired_base_acc.setZero();
        desired_base_ori.setZero();

        desired_f_pos = this->fPos;

        for (int i = 0; i < 4; i++)
        {                
            desired_f_vel(i).setZero();
            desired_f_acc(i).setZero();
        }

        auto start = std::chrono::steady_clock::now();

        desired_tau = this->HierarchicalOptimization(desired_base_pos,
                                                     desired_base_vel,
                                                     desired_base_acc,
                                                     desired_base_ori,
                                                     Eigen::Vector3d::Zero(),
                                                     Eigen::Vector3d::Zero(),
                                                     desired_f_pos,
                                                     desired_f_vel,
                                                     desired_f_acc,
                                                     this->fPos,
                                                     this->fVel,
                                                     this->genCoord,
                                                     this->genVel,
                                                     0);

        auto end = std::chrono::steady_clock::now();

        std::chrono::duration<double, std::micro> diff = end - start;

        ROS_INFO_STREAM("HO run-time: " << diff.count() << " microseconds. \n");

        //debug_utils::printBaseState(this->genCoord.topRows(6));
        //debug_utils::printFootstepPositions(this->fPos);
        //debug_utils::printJointTorques(desired_tau.bottomRows(12));
        //debug_utils::printJointTorques(desired_tau);

        // TODO find better solution to plot data and remove this..
        base_pose_cmd_msg.data[0] = desired_base_pos(0);
        base_pose_cmd_msg.data[1] = desired_base_pos(1);
        base_pose_cmd_msg.data[2] = desired_base_pos(2);
        base_pose_cmd_msg.data[3] = desired_base_ori(0);
        base_pose_cmd_msg.data[4] = desired_base_ori(1);
        base_pose_cmd_msg.data[5] = desired_base_ori(2);
        this->basePoseCmdPub.publish(base_pose_cmd_msg);

        base_twist_cmd_msg.data[0] = desired_base_vel(0);
        base_twist_cmd_msg.data[1] = desired_base_vel(1);
        base_twist_cmd_msg.data[2] = desired_base_vel(2);
        base_twist_cmd_msg.data[3] = 0;
        base_twist_cmd_msg.data[4] = 0;
        base_twist_cmd_msg.data[5] = 0;
        this->baseTwistCmdPub.publish(base_twist_cmd_msg);

        //this->PublishTorqueMsg(desired_tau.bottomRows(12));
        this->PublishTorqueMsg(desired_tau);

        loop_rate.sleep();
    }
}

// TODO remove this
void HierarchicalOptimizationControl::HeightRollYawTest()
{
    // Declare desired states
    Eigen::Vector3d desired_base_pos;
    Eigen::Vector3d desired_base_vel;
    Eigen::Vector3d desired_base_acc;
    Eigen::Vector3d desired_base_ori;
    Eigen::Matrix<Eigen::Vector3d, 4, 1> desired_f_pos;
    Eigen::Matrix<Eigen::Vector3d, 4, 1> desired_f_vel;
    Eigen::Matrix<Eigen::Vector3d, 4, 1> desired_f_acc;

    // Declare torque solution
    Eigen::Matrix<double, 12, 1> desired_tau;

    // TODO Message to send with base pos command to be removed after plotting..
    std_msgs::Float64MultiArray base_pose_cmd_msg;
    std_msgs::Float64MultiArray base_twist_cmd_msg;

    base_pose_cmd_msg.data.resize(6);
    base_twist_cmd_msg.data.resize(6);
        
    // Loop rate
    ros::Rate loop_rate(200);

    // Time factor
    int timefactor = 3;

    // Loop
    while(this->rosNode->ok())
    {
        // Set desired values
        desired_base_pos << 0,
                            0,
        //                    0.25;
                            0.05 * std::sin(timefactor*ros::Time::now().toSec()) + 0.2; 
        desired_base_vel.setZero();
        desired_base_vel << 0,
                            0,
                            timefactor * 0.05 * std::cos(timefactor*ros::Time::now().toSec());
        desired_base_acc.setZero();
        desired_base_acc << 0,
                            0,
                            - timefactor * timefactor * 0.05 * std::sin(timefactor*ros::Time::now().toSec());
        desired_base_ori.setZero();

        desired_base_ori(0) = 0.3 * std::cos(timefactor*ros::Time::now().toSec());
        desired_base_ori(2) = 0.15 * std::sin(timefactor*ros::Time::now().toSec());

        desired_f_pos = this->fPos;

        for (int i = 0; i < 4; i++)
        {                
            desired_f_vel(i).setZero();
            desired_f_acc(i).setZero();
        }

        


        auto start = std::chrono::steady_clock::now();

        desired_tau = this->HierarchicalOptimization(desired_base_pos,
                                                     desired_base_vel,
                                                     desired_base_acc,
                                                     desired_base_ori,
                                                     Eigen::Vector3d::Zero(),
                                                     Eigen::Vector3d::Zero(),
                                                     desired_f_pos,
                                                     desired_f_vel,
                                                     desired_f_acc,
                                                     this->fPos,
                                                     this->fVel,
                                                     this->genCoord,
                                                     this->genVel,
                                                     0);

        auto end = std::chrono::steady_clock::now();

        std::chrono::duration<double, std::micro> diff = end - start;

        ROS_INFO_STREAM("HO run-time: " << diff.count() << " microseconds. \n");

        //debug_utils::printBaseState(this->genCoord.topRows(6));
        //debug_utils::printFootstepPositions(this->fPos);
        //debug_utils::printJointTorques(desired_tau.bottomRows(12));
        //debug_utils::printJointTorques(desired_tau);

        // TODO find better solution to plot data and remove this..
        base_pose_cmd_msg.data[0] = desired_base_pos(0);
        base_pose_cmd_msg.data[1] = desired_base_pos(1);
        base_pose_cmd_msg.data[2] = desired_base_pos(2);
        base_pose_cmd_msg.data[3] = desired_base_ori(0);
        base_pose_cmd_msg.data[4] = desired_base_ori(1);
        base_pose_cmd_msg.data[5] = desired_base_ori(2);
        this->basePoseCmdPub.publish(base_pose_cmd_msg);

        base_twist_cmd_msg.data[0] = desired_base_vel(0);
        base_twist_cmd_msg.data[1] = desired_base_vel(1);
        base_twist_cmd_msg.data[2] = desired_base_vel(2);
        base_twist_cmd_msg.data[3] = 0;
        base_twist_cmd_msg.data[4] = 0;
        base_twist_cmd_msg.data[5] = 0;
        this->baseTwistCmdPub.publish(base_twist_cmd_msg);

        //this->PublishTorqueMsg(desired_tau.bottomRows(12));
        this->PublishTorqueMsg(desired_tau);

        //break;

        loop_rate.sleep();
    }
}

// Hierarchical Optimization
Eigen::Matrix<double, 12, 1> HierarchicalOptimizationControl::HierarchicalOptimization(const Eigen::Matrix<double, 3, 1> &_desired_base_pos,
                                                                                       const Eigen::Matrix<double, 3, 1> &_desired_base_vel,
                                                                                       const Eigen::Matrix<double, 3, 1> &_desired_base_acc,
                                                                                       const Eigen::Matrix<double, 3, 1> &_desired_base_ori,
                                                                                       const Eigen::Matrix<double, 3, 1> &_desired_base_omega,
                                                                                       const Eigen::Matrix<double, 3, 1> &_desired_base_alpha,
                                                                                       const Eigen::Matrix<Eigen::Vector3d, 4, 1> &_desired_f_pos,
                                                                                       const Eigen::Matrix<Eigen::Vector3d, 4, 1> &_desired_f_vel,
                                                                                       const Eigen::Matrix<Eigen::Vector3d, 4, 1> &_desired_f_acc,
                                                                                       const Eigen::Matrix<Eigen::Vector3d, 4, 1> &_f_pos,
                                                                                       const Eigen::Matrix<Eigen::Vector3d, 4, 1> &_f_vel,
                                                                                       const Eigen::Matrix<double, 18, 1> &_q,
                                                                                       const Eigen::Matrix<double, 18, 1> &_u,
                                                                                       const int (&_contact_state)[4],
                                                                                       const int &_v)
{
    //*************************************************************************************
    // Declarations
    //*************************************************************************************

    Eigen::Matrix<double, 12, 1> desired_tau;    // 12x1 Reference joint torques

    Eigen::VectorXd x_opt;                       // Optimal solution x_opt = [dot_u_opt, F_c_opt]^T

    SolverType solver = SolverType::OSQP;        // Solver type

    // Tasks used to formulate the hierarchical optimization
    // problem
    TaskGenerator::Task t_eom;     // Task for the equations of motion
    TaskGenerator::Task t_cmc;     // Task for the contact motion constraint
    TaskGenerator::Task t_cftl;    // Task for the contact force and torque limits
    TaskGenerator::Task t_mt;      // Task for the motion tracking of the floating base and swing legs
    TaskGenerator::Task t_pt;      // Task for posture tracking, for a nominal posture
    TaskGenerator::Task t_cfm;     // Task for the contact force minimization

    std::vector<TaskGenerator::Task> tasks; // Set of tasks

    // Kinematic and dynamic matrices and terms used to
    // enforce constraints.
    Eigen::Matrix<double, 18, 18> M;                      // 18x18 Mass matrix
    Eigen::Matrix<double, 18, 1> b;                       // 18x1 Coriolis and centrifugal terms
    Eigen::Matrix<double, 18, 1> g;                       // 18x1 Gravitational terms
    Eigen::Matrix<double, Eigen::Dynamic, 18> J_c;        // (3*n_c)x18 Contact Jacobian

    std::vector<Kinematics::LegType> contact_legs; // Vector of contact points (legs)
    std::vector<Kinematics::LegType> swing_legs;   // Vector of swing legs

    //*************************************************************************************
    // Tuning parameters
    //*************************************************************************************

    // Friction coefficient
    double mu = 0.6;

    // Motion tracking gains
    double k_p_fb_pos = 0;//15; // Floating base position proportional gain
    double k_d_fb_pos = 0;//2; // Floating base position derivative gain
    double k_p_fb_rot = 0;//30; // Floating base rotation proportional gain
    double k_d_fb_rot = 0;//2; // Floating base rotation proportional gain
    double k_p_fl = 250;     // Front left foot proportional gain
    double k_d_fl = 249;     // Front left foot derivative gain
    double k_p_fr = 250;     // Front right foot proportional gain
    double k_d_fr = 249;     // Front right foot derivative gain
    double k_p_rl = 250;     // Rear left foot proportional gain
    double k_d_rl = 249;     // Rear left foot derivative gain
    double k_p_rr = 250;     // Rear right foot proportional gain
    double k_d_rr = 249;     // Rear right foot derivative gain

    // Posture tracking gains
    double k_p_pt = 15;      // Posture tracking proportional gain
    double k_d_pt = 4;      // Posture tracking derivative gain

    //*************************************************************************************
    // Updates
    //*************************************************************************************

    // Fill contact and swing legs
    for (size_t i = 0; i < 4; i++)
    {
        ROS_INFO_STREAM("Contact state: " << i << ": "<< _contact_state[i]);
        // Contact State is assumed sorted by fl, fr, rl, rr
        if (_contact_state[i])
        {
            // fl = 1, fr = 2, rl = 3, rr = 4
            contact_legs.push_back(Kinematics::LegType(i + 1));
        }
        else
        {
            // fl = 1, fr = 2, rl = 3, rr = 4
            swing_legs.push_back(Kinematics::LegType(i + 1));
        }
    }

    // Number of contact and swing legs, respectively
    const unsigned int n_c = contact_legs.size();
    const unsigned int n_s = swing_legs.size();
    // Update state dimension x = [dot_u, F_c]^T
    const unsigned int state_dim = 18 + 3*n_c;

    J_c.resize(3*n_c, 18);

    // Update matrices and terms
    M = kinematics.GetMassMatrix(_q);

    b = kinematics.GetCoriolisAndCentrifugalTerms(_q, _u);

    g = kinematics.GetGravitationalTerms(_q);

    J_c = kinematics.GetContactJacobianInW(contact_legs, _q);

    // Add tasks in prioritized order
    TaskGenerator task_generator(
        kinematics,
        _desired_base_pos,
        _desired_base_vel,
        _desired_base_acc,
        _desired_base_ori,
        _desired_base_omega,
        _desired_base_alpha,
        _desired_f_pos,
        _desired_f_vel,
        _desired_f_acc,
        _f_pos,
        _f_vel,
        _q,
        _u,
        mu,
        k_p_fb_pos,
        k_d_fb_pos,
        k_p_fb_rot,
        k_d_fb_rot,
        k_p_fl,
        k_d_fl,
        k_p_fr,
        k_d_fr,
        k_p_rl,
        k_d_rl,
        k_p_rr,
        k_d_rr,
        k_p_pt,
        k_d_pt,
        -40,
        40,
        contact_legs,
        swing_legs);
    
    t_eom = task_generator.EomTask();
    t_cftl = task_generator.CftlTask();
    t_cmc = task_generator.CmcTask();
    t_mt = task_generator.MtTask();
    t_pt = task_generator.PtTask();
    t_cfm = task_generator.CfmTask();

    tasks.push_back(t_eom);
    tasks.push_back(t_cftl);
    tasks.push_back(t_cmc);
    tasks.push_back(t_mt);
    //tasks.push_back(t_pt);
    tasks.push_back(t_cfm);

    Eigen::Matrix<Eigen::MatrixXd, 5, 1> A_ls;
    Eigen::Matrix<Eigen::VectorXd, 5, 1> b_ls;

    A_ls(0) = t_eom.A_eq;
    b_ls(0) = t_eom.b_eq;
    A_ls(1) = t_cmc.A_eq;
    b_ls(1) = t_cmc.b_eq;
    A_ls(2) = t_mt.A_eq;
    b_ls(2) = t_mt.b_eq;
    A_ls(3) = t_pt.A_eq;
    b_ls(3) = t_pt.b_eq;
    A_ls(4) = t_cfm.A_eq;
    b_ls(4) = t_cfm.b_eq;

    // Solve the hierarchical optimization problem
    x_opt = HierarchicalQPOptimization(state_dim, 
                                       tasks,
                                       solver, 
                                       _v);

    //x_opt = HierarchicalLeastSquareOptimization(A_ls,
    //                                            b_ls,
    //                                            _v);

    //*************************************************************************************
    // Compute reference joint torques
    //*************************************************************************************

    desired_tau = M.bottomRows(12) * x_opt.topRows(18) -  J_c.transpose().bottomRows(12) * x_opt.bottomRows(3*n_c) + b.bottomRows(12) + g.bottomRows(12);

    // Printing TODO Fix
    //if (_v > 0)
    if (true)
    {
        debug_utils::printGeneralizedAccelerations(x_opt.topRows(18));
        debug_utils::printFootstepForces(this->contactState, x_opt.bottomRows(3*n_c));
        debug_utils::printJointTorques(desired_tau);
    }


    return desired_tau;
}

// Hierarchical Optimization without specified contact states, using current contact states
Eigen::Matrix<double, 12, 1> HierarchicalOptimizationControl::HierarchicalOptimization(const Eigen::Matrix<double, 3, 1> &_desired_base_pos,
                                                                                       const Eigen::Matrix<double, 3, 1> &_desired_base_vel,
                                                                                       const Eigen::Matrix<double, 3, 1> &_desired_base_acc,
                                                                                       const Eigen::Matrix<double, 3, 1> &_desired_base_ori,
                                                                                       const Eigen::Matrix<double, 3, 1> &_desired_base_omega,
                                                                                       const Eigen::Matrix<double, 3, 1> &_desired_base_alpha,
                                                                                       const Eigen::Matrix<Eigen::Vector3d, 4, 1> &_desired_f_pos,
                                                                                       const Eigen::Matrix<Eigen::Vector3d, 4, 1> &_desired_f_vel,
                                                                                       const Eigen::Matrix<Eigen::Vector3d, 4, 1> &_desired_f_acc,
                                                                                       const Eigen::Matrix<Eigen::Vector3d, 4, 1> &_f_pos,
                                                                                       const Eigen::Matrix<Eigen::Vector3d, 4, 1> &_f_vel,
                                                                                       const Eigen::Matrix<double, 18, 1> &_q,
                                                                                       const Eigen::Matrix<double, 18, 1> &_u,
                                                                                       const int &_v)
{
    return HierarchicalOptimization(_desired_base_pos,
                                    _desired_base_vel,
                                    _desired_base_acc,
                                    _desired_base_ori,
                                    _desired_base_omega,
                                    _desired_base_alpha,
                                    _desired_f_pos,
                                    _desired_f_vel,
                                    _desired_f_acc,
                                    _f_pos,
                                    _f_vel,
                                    _q,
                                    _u,
                                    this->contactState,
                                    _v);
}

// Hierarchical QP Optimization
Eigen::Matrix<double, Eigen::Dynamic, 1> HierarchicalOptimizationControl::HierarchicalQPOptimization(const int &_state_dim,
                                                                                                     const std::vector<TaskGenerator::Task> &_tasks,
                                                                                                     const SolverType &_solver,
                                                                                                     const int &_v)
{
    // Declarations
    Eigen::VectorXd x_opt(_state_dim);           // Optimal solution
    Eigen::MatrixXd N(_state_dim, _state_dim);   // Null-space projector
    Eigen::VectorXd z(_state_dim);               // Null-space vector
    Eigen::MatrixXd stacked_A_eq;                // Stacked equality matrices 
    Eigen::MatrixXd stacked_A_ineq;              // Stacked inequality matrices 
    Eigen::VectorXd stacked_b_ineq;              // Stacked inequality vectors 

    Eigen::MatrixXd Q;            // Quadratic program Q cost matrix
    Eigen::VectorXd c;            // Quadratic program c cost vector
    Eigen::MatrixXd E_ineq;       // Quadratic program E_ineq inequality constraint matrix 
    Eigen::VectorXd f_ineq;       // Quadratic program f_ineq inequality constraint vector
    Eigen::VectorXd xi;           // Quadratic program optimization variable, xi = [z, v]^T
    Eigen::VectorXd v;            // Quadratic program inequality constraint slack variable
    Eigen::VectorXd stacked_v;    // Stacked slack variables

    int rowsA_eq;   // Number of rows of current tasks A_eq
    int rowsA_ineq; // Number of rows of current tasks A_ineq
    int colsN;      // Number of cols of current null-space projector N
    int count = 0;  // Task counter

    // Initializations
    x_opt.setZero();
    N.setIdentity();

    // Iterate over the set of tasks 
    for (TaskGenerator::Task t : _tasks)
    {
        // Update count
        count += 1;

        // Update null-space dimension
        colsN = N.cols();

        // If task has a equality constraint
        if (t.has_eq_constraint)
        {
            // Update row count
            rowsA_eq = t.A_eq.rows(); 

            // Update stacked equality matrices
            Eigen::MatrixXd stacked_A_eq_tmp = stacked_A_eq;

            stacked_A_eq.resize(t.A_eq.rows() + stacked_A_eq_tmp.rows(), _state_dim); 
            stacked_A_eq << t.A_eq,
                            stacked_A_eq_tmp;
        }
        else
        {
            // Update row count
            rowsA_eq = 0;
        }

        // If task has a inequality constraint
        if (t.has_ineq_constraint)
        {
            // Update row count
            rowsA_ineq = t.A_ineq.rows();

            // Update stacked inequality matrices
            Eigen::MatrixXd stacked_A_ineq_tmp = stacked_A_ineq;

            stacked_A_ineq.resize(t.A_ineq.rows() + stacked_A_ineq_tmp.rows(), _state_dim); 
            stacked_A_ineq << t.A_ineq,
                              stacked_A_ineq_tmp;

            // Update stacked inequality vectors
            Eigen::VectorXd stacked_b_ineq_tmp = stacked_b_ineq;

            stacked_b_ineq.resize(t.b_ineq.rows() + stacked_b_ineq_tmp.rows(), 1);
            stacked_b_ineq << t.b_ineq,
                              stacked_b_ineq_tmp;
        }
        else
        {                
            // Update row count
            rowsA_ineq = 0;
        }

        // Update dimensions
        z.resize(colsN, 1);
        v.resize(rowsA_ineq, 1);
        xi.resize(colsN + rowsA_ineq, 1);

        // Update QP costs 
        Q.resize(colsN + rowsA_ineq, colsN + rowsA_ineq);
        c.resize(colsN + rowsA_ineq, 1);

        if (t.has_eq_constraint)
        {
            Q.topLeftCorner(colsN, colsN) = N.transpose() * t.A_eq.transpose() * t.A_eq * N;
            Q.topRightCorner(colsN, rowsA_ineq).setZero();
            Q.bottomLeftCorner(rowsA_ineq, colsN).setZero();
            Q.bottomRightCorner(rowsA_ineq, rowsA_ineq).setIdentity();

            c.topRows(colsN) = N.transpose() * t.A_eq.transpose() * (t.A_eq * x_opt - t.b_eq);
            c.bottomRows(rowsA_ineq).setZero();
        }
        else
        {
            Q.setZero();
            Q.bottomRightCorner(rowsA_ineq, rowsA_ineq).setIdentity();

            c.setZero();
        }

        // Update inequality constraints
        E_ineq.resize(stacked_A_ineq.rows() + rowsA_ineq, colsN + rowsA_ineq);
        f_ineq.resize(stacked_A_ineq.rows() + rowsA_ineq, 1);

        E_ineq.setZero();

        E_ineq.topLeftCorner(stacked_A_ineq.rows(), colsN) = stacked_A_ineq * N;
        E_ineq.topRightCorner(rowsA_ineq, rowsA_ineq) = - Eigen::MatrixXd::Identity(rowsA_ineq, rowsA_ineq);

        E_ineq.bottomRightCorner(rowsA_ineq, rowsA_ineq) = - Eigen::MatrixXd::Identity(rowsA_ineq, rowsA_ineq);

        f_ineq.topRows(stacked_b_ineq.rows()) = stacked_b_ineq - stacked_A_ineq * x_opt;
        f_ineq.segment(rowsA_ineq, stacked_b_ineq.rows() - rowsA_ineq) += stacked_v; 
        f_ineq.bottomRows(rowsA_ineq).setZero();

        // Print w.r.t verbosity level
        if (_v > 1)
        {
            ROS_INFO_STREAM("----------------------" << "Task: " << count << "---------------------- \n" );
            ROS_INFO_STREAM("Q: \n" << Q << "\n");
            ROS_INFO_STREAM("eigenvalues(Q): \n" << Q.eigenvalues() << "\n");
            ROS_INFO_STREAM("c: \n" << c << "\n");
            ROS_INFO_STREAM("E_ineq: \n" << E_ineq << "\n");
            ROS_INFO_STREAM("f_ineq: \n" << f_ineq << "\n");
        }
        if (_v > 2)
        {
            ROS_INFO_STREAM("N: \n" << N << "\n");
            ROS_INFO_STREAM("A_eq: \n" << t.A_eq << "\n");
            ROS_INFO_STREAM("b_eq: \n" << t.b_eq << "\n");
            ROS_INFO_STREAM("stacked_A_eq: \n" << stacked_A_eq << "\n");
            ROS_INFO_STREAM("stacked_A_ineq: \n" << stacked_A_ineq << "\n");
            ROS_INFO_STREAM("stacked_b_ineq: \n" << stacked_b_ineq << "\n");
        }

        // Solve QP
        if (!SolveQP(Q, c, E_ineq, f_ineq, xi, _solver,_v))
        {
            ROS_ERROR_STREAM("[HierarchicalOptimizationControl::HierarchicalQPOptimization] Failed to solve QP at task " << count << "!");
            
            break;
        }

        // Get solutions
        z = xi.topRows(colsN);
        v = xi.bottomRows(rowsA_ineq);

        // Update optimal state for the hierarchical optimization
        x_opt = x_opt + N * z;

        // Update the null-space projector if a equality constraint
        // is present.
        if (t.has_eq_constraint)
        {
            N = math_utils::SVDNullSpaceProjector(stacked_A_eq);
        }

        // Update stacked slack variables if a inequality constraint
        // is present.
        if (t.has_ineq_constraint)
        {
            Eigen::VectorXd stacked_v_tmp = stacked_v;

            stacked_v.resize(v.rows() + stacked_v_tmp.rows(), 1);
            stacked_v << v,
                         stacked_v_tmp;
        }

        // Print w.r.t verbosity level
        if (_v > 0 )
        {
            ROS_INFO_STREAM("Solution at task " << count << " is: \n" << x_opt);
        }

        // Terminate if null-space is zero (i.e. only the trivial solution exist)
        if (N.isZero())
        {
            if (_v > 0)
            {
                ROS_INFO_STREAM("Terminating at task " << count << " due to the null-space being zero. \n");
            }
            break;
        }

    }

    return x_opt;
}

// Hierarchical Least-Square Optimization
Eigen::Matrix<double, Eigen::Dynamic, 1> HierarchicalOptimizationControl::HierarchicalLeastSquareOptimization(const Eigen::Matrix<Eigen::MatrixXd, Eigen::Dynamic, 1> &_A,
                                                                                                              const Eigen::Matrix<Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Dynamic, 1> &_b,
                                                                                                              const int &_v)
{
    const auto rowsA = _A.rows();
    const auto rowsb = _b.rows();

    // Validate number of equations
    if( rowsA != rowsb )
    {
        ROS_ERROR("[HierarchicalOptimizationControl::HierarchicalLeastSquareOptimization] _A and _b does not contain equal amount of elements!");

        std::abort();
    }

    const auto state_dim = _A(0).cols();

    // Validate state and equation dimensions
    for (size_t i = 0; i < rowsA; i++)
    {
        if (_A(i).cols() != state_dim || _A(i).rows() != _b(i).rows() )
        {
            ROS_ERROR_STREAM("[HierarchicalOptimizationControl::HierarchicalLeastSquareOptimization] State or equation dimensions failed at index: i = !" << i);

            std::abort();
        }
    }

    // Declarations
    Eigen::Matrix<double, Eigen::Dynamic, 1> x_opt;                 // Optimal solution
    Eigen::Matrix<double, Eigen::Dynamic, 1> x_i;                   // Optimal solution for the at hand projected QP
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> N;        // Null-space projector
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> AN;       // Matrix multiplication of A and N (A*N)
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> pinvAN;   // Pseudo-inverse of A*N
    Eigen::MatrixXd A_stacked;                                      // Stacked matrix of A_i matrices

    // Setup
    x_opt.resize(state_dim, 1);
    N.resize(state_dim, state_dim);

    // Initialize
    x_opt.setZero();
    N.setIdentity();

    // Loop
    for (size_t i = 0; i < rowsA; i++)
    {
        // Find Pseudoinverse
        AN = _A(i) * N;
        kindr::pseudoInverse(AN, pinvAN);
    
        // Find least squares optimal state for the at hand QP
        x_i = pinvAN * (_b(i) - _A(i) * x_opt);

        // Update optimal state for the hierarchical optimization
        x_opt = x_opt + N * x_i;

        // Find new null-space projector
        Eigen::MatrixXd A_stacked_tmp = A_stacked;

        A_stacked.resize(A_stacked_tmp.rows() + _A(i).rows(), state_dim);
        A_stacked << A_stacked_tmp,
                     _A(i);

        N = math_utils::SVDNullSpaceProjector(A_stacked);

        // Print w.r.t verbosity level
        if (_v == 1)
        {
            ROS_INFO_STREAM("Solution at iteration " << i << " is: \n" << x_opt);
        }

    }

    return x_opt;
}

// Solve a Quadratic Program
bool HierarchicalOptimizationControl::SolveQP(const Eigen::MatrixXd &_Q,
                                              const Eigen::VectorXd &_c,
                                              const Eigen::MatrixXd &_E_ineq,
                                              const Eigen::VectorXd &_f_ineq,
                                              Eigen::VectorXd &_sol,
                                              const SolverType &_solver,
                                              const int &_v)
{
    // Validate dimensions
    if (_E_ineq.rows() != _f_ineq.rows())
    {
        ROS_INFO_STREAM("[HierarchicalOptimizationControl::SolveQP] Equality constraint dimensions does not match!");

        std::abort();
    }

    // Create a negative infinite lower bound
    Eigen::VectorXd lb;

    lb.resize(_f_ineq.rows(), 1);

    lb.setConstant(-math_utils::INF);

    return this->SolveQP(_Q, _c, _E_ineq, lb, _f_ineq, _sol, _solver, _v);
}

// Solve a Quadratic Program
bool HierarchicalOptimizationControl::SolveQP(const Eigen::MatrixXd &_Q,
                                              const Eigen::VectorXd &_c,
                                              const Eigen::MatrixXd &_A,
                                              const Eigen::VectorXd &_lb,
                                              const Eigen::VectorXd &_ub,
                                              Eigen::VectorXd &_sol,
                                              const SolverType &_solver,
                                              const int &_v)
{
    // Create an empty Mathematical Program
    drake::solvers::MathematicalProgram prog;

    // Create an empty Mathematical Program Result
    drake::solvers::MathematicalProgramResult result;

    // Add decision variables
    auto x = prog.NewContinuousVariables(_Q.cols(), "x");

    // Add quadratic cost
    prog.AddQuadraticCost(_Q, _c, x, true);

    // Add inequality constraints
    if (!_A.isZero())
    {
        if (_v > 2)
        {
            ROS_INFO_STREAM("Linear ineq, A: \n" << _A << "\n");
            ROS_INFO_STREAM("Linear ineq, lb: \n" << _lb << "\n");
            ROS_INFO_STREAM("Linear ineq, ub: \n" << _ub << "\n");
        }

        prog.AddLinearConstraint(_A, _lb, _ub, x);
    }

    // Solve the program
    switch (_solver)
    {
        case OSQP:
        {
            auto solver = drake::solvers::OsqpSolver();
            
            auto start = std::chrono::steady_clock::now();

            result = solver.Solve(prog);

            if (_v > 2)
            {
                auto end = std::chrono::steady_clock::now();

                std::chrono::duration<double, std::micro> diff = end - start;

                ROS_INFO_STREAM("OSQP run-time: " << diff.count() << " microseconds. \n");

                auto details = result.get_solver_details<drake::solvers::OsqpSolver>();
                ROS_INFO_STREAM("Solver details: run_time: " << details.run_time << "\n");
            }

            break;
        }
        case ECQP:
        {
            auto solver = drake::solvers::EqualityConstrainedQPSolver();
            result = solver.Solve(prog);

            break;
        }
        case CLP:
        {
            auto solver = drake::solvers::ClpSolver();
            result = solver.Solve(prog);

            break;
        }
        case SCS:
        {
            auto solver = drake::solvers::ScsSolver();
            result = solver.Solve(prog);

            break;
        }
        case SNOPT:
        {
            auto solver = drake::solvers::SnoptSolver();
            result = solver.Solve(prog);

            break;
        }
        case UNSPECIFIED:
        {
            result = Solve(prog);

            break;
        }
        default:
        {
            ROS_WARN("[HierarchicalOptimizationControl::SolveQP] Could not determine solver type!");

            std::abort();
        }
    }

    if (!result.is_success())
    {
        ROS_WARN("[HierarchicalOptimizationControl::SolveQP] Failed to solve QP!");

        if (_v > 0)
        {
            //auto details = result.get_solver_details<drake::solvers::SnoptSolver>();

            ROS_INFO_STREAM("Solver id: " << result.get_solver_id() << "\n");
            ROS_INFO_STREAM("Solver result: " << result.get_solution_result() << "\n");
            ROS_INFO_STREAM("Solution result: " << result.GetSolution(x) << "\n");
            ROS_INFO_STREAM("Solution result: " << result.GetSolution(x) << "\n");
            //ROS_INFO_STREAM("Solver detals: status_val: " << details.status_val << "\n");
            //ROS_INFO_STREAM("Solver details: run_time: " << details.run_time);
            //ROS_INFO_STREAM("Solver details: info: " << details.info << "\n");
        }

        _sol.setZero();

        return false;
    }

    // Set solution
    _sol = result.GetSolution(x);


    // TODO add verbosity prints


    return true;
}


// Solve a Quadratic Program
bool HierarchicalOptimizationControl::SolveQP(const Eigen::MatrixXd &_Q,
                                              const Eigen::VectorXd &_c,
                                              const Eigen::MatrixXd &_E_eq,
                                              const Eigen::VectorXd &_f_eq,
                                              const Eigen::MatrixXd &_E_ineq,
                                              const Eigen::VectorXd &_f_ineq,
                                              Eigen::VectorXd &_sol,
                                              const SolverType &_solver,
                                              const int &_v)
{
    // Create an empty Mathematical Program
    drake::solvers::MathematicalProgram prog;

    // Create an empty Mathematical Program Result
    drake::solvers::MathematicalProgramResult result;

    // Add decision variables
    auto x = prog.NewContinuousVariables(_Q.cols(), "x");

    // Add quadratic cost
    prog.AddQuadraticCost(_Q, _c, x, true);

    // Add equality constraints
    if (!_E_eq.isZero())
    {
        prog.AddLinearEqualityConstraint(_E_eq, _f_eq, x);
    }

    // Add inequality constraints
    if (!_E_ineq.isZero())
    {
        prog.AddLinearConstraint((_E_ineq * x).array() <= _f_ineq.array());
    }

    // Solve the program
    switch (_solver)
    {
        case OSQP:
        {
            auto solver = drake::solvers::OsqpSolver();
            result = solver.Solve(prog);
            break;
        }
        case ECQP:
        {
            auto solver = drake::solvers::EqualityConstrainedQPSolver();
            result = solver.Solve(prog);
            break;
        }
        case CLP:
        {
            auto solver = drake::solvers::ClpSolver();
            result = solver.Solve(prog);
            break;
        }
        case SCS:
        {
            auto solver = drake::solvers::ScsSolver();
            result = solver.Solve(prog);
            break;
        }
        case SNOPT:
        {
            auto solver = drake::solvers::SnoptSolver();
            result = solver.Solve(prog);
            break;
        }
        case UNSPECIFIED:
        {
            result = Solve(prog);
            break;
        }
        default:
        {
            ROS_WARN("[HierarchicalOptimizationControl::SolveQP] Could not determine solver type!");

            std::abort();
        }
    }

    if (!result.is_success())
    {
        ROS_WARN("[HierarchicalOptimizationControl::SolveQP] Failed to solve QP!");

        _sol.setZero();

        return false;
    }

    // Set solution
    _sol = result.GetSolution(x);


    // TODO add verbosity prints


    return true;
}

// Publish function for ROS Joint State Torque messages
void HierarchicalOptimizationControl::PublishTorqueMsg(const Eigen::Matrix<double, 12, 1> &_desired_tau)
{
    // Declare msg
    sensor_msgs::JointState joint_state_msg;    

    // Set dimension
    joint_state_msg.effort.resize(12);

    // Front-left 
    joint_state_msg.effort[0] = _desired_tau(0);
    joint_state_msg.effort[1] = _desired_tau(1);
    joint_state_msg.effort[2] = _desired_tau(2);

    // Front right
    joint_state_msg.effort[3] = _desired_tau(3);
    joint_state_msg.effort[4] = _desired_tau(4);
    joint_state_msg.effort[5] = _desired_tau(5);

    // Rear left
    joint_state_msg.effort[6] = _desired_tau(6);
    joint_state_msg.effort[7] = _desired_tau(7);
    joint_state_msg.effort[8] = _desired_tau(8);

    // Rear right
    joint_state_msg.effort[9] = _desired_tau(9);
    joint_state_msg.effort[10] = _desired_tau(10);
    joint_state_msg.effort[11] = _desired_tau(11);

    // Set timestamp
    joint_state_msg.header.stamp = ros::Time::now();

    // Publish
    this->jointStatePub.publish(joint_state_msg);
}

// Callback for ROS Generalized Coordinates messages
void HierarchicalOptimizationControl::OnGenCoordMsg(const std_msgs::Float64MultiArrayConstPtr &_msg)
{
    std::vector<double> data = _msg->data;

    this->genCoord = Eigen::Map<Eigen::MatrixXd>(data.data(), 18, 1);

    //debug_utils::printGeneralizedCoordinates(this->genCoord);

    if (!this->kinematics.SolveForwardKinematics(genCoord, fPos))
    {
        ROS_ERROR("[HierarchicalOptimizationControl::OnGenCoordMsg] Could not solve forward kinematics!");
    }

    //debug_utils::printFootstepPositions(this->fPos);
}

// Callback for ROS Generalized Velocities messages
void HierarchicalOptimizationControl::OnGenVelMsg(const std_msgs::Float64MultiArrayConstPtr &_msg)
{
    std::vector<double> data = _msg->data;

    this->genVel = Eigen::Map<Eigen::MatrixXd>(data.data(), 18, 1); 

    for (int i = 0; i < 4; i++)
    {
        this->fVel(i) = kinematics.GetTranslationJacobianInW(Kinematics::LegType(i + 1), Kinematics::BodyType::foot, this->genCoord)
                        * this->genVel;
    }

}

// Callback for ROS Contact State messages
void HierarchicalOptimizationControl::OnContactStateMsg(const std_msgs::Int8MultiArrayConstPtr &_msg)
{
    if (!_msg->data.size() == 4)
    {
        ROS_ERROR("[HierarchicalOptimizationControl::OnContactStateMsg] Received contact message with wrong size!");
    }
    else
    {
        // TODO Fix this
        //this->contactState[0] = _msg->data[0];
        //this->contactState[1] = _msg->data[1];
        //this->contactState[2] = _msg->data[2];
        //this->contactState[3] = _msg->data[3];
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

    ros::AdvertiseOptions base_pose_cmd_ao =
        ros::AdvertiseOptions::create<std_msgs::Float64MultiArray>(
            "/my_robot/base_pose_cmd",
            1,
            ros::SubscriberStatusCallback(),
            ros::SubscriberStatusCallback(),
            ros::VoidPtr(),
            &this->rosPublishQueue
        );

    ros::AdvertiseOptions base_twist_cmd_ao =
        ros::AdvertiseOptions::create<std_msgs::Float64MultiArray>(
            "/my_robot/base_twist_cmd",
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
    
    this->basePoseCmdPub = this->rosNode->advertise(base_pose_cmd_ao);

    this->baseTwistCmdPub = this->rosNode->advertise(base_twist_cmd_ao);
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