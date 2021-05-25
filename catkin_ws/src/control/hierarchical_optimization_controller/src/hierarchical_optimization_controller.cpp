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

// Hierarchical Optimization
Eigen::Matrix<double, 12, 1> HierarchicalOptimizationControl::HierarchicalOptimization(const Eigen::Vector3d &_desired_base_pos,
                                                                                       const Eigen::Matrix<Eigen::Vector3d, 4, 1> &_desired_f_pos)
{
    //*************************************************************************************
    // Declarations
    //*************************************************************************************

    Eigen::Matrix<double, 12, 1> desired_tau;              // 12x1 Reference joint torques

    // Matrices and vectors used for the QP formulation
    // used to solve the multi-tasks control problem.
    Eigen::Matrix<double, Eigen::Dynamic, 1> x;                     // (18 + 3*n_c)x1 Optimization variable, comprises of [dot_u^T, F_c^T]^T
    Eigen::Matrix<double, Eigen::Dynamic, 1> x_i;                   // (18 + 3*n_c)x1 Optimization variable for the at hand QP indexed by i
    Eigen::MatrixXd A_stacked;                                      // Stacked vector of A_i matrices
    Eigen::MatrixXd N;                                              // Null-space projector
    Eigen::MatrixXd AN;                                             // Matrix A_i*N_i
    Eigen::MatrixXd pinvAN;                                         // Pseudo inverse of A_i*N_i

    Eigen::Matrix<double, 18, Eigen::Dynamic> A_eom;                // 18x(18 + 3*n_c) A matrix for EOMs
    Eigen::Matrix<double, 18, 1> b_eom;                             // 18x1 b vector for EOMs

    Eigen::Matrix<double, 18, Eigen::Dynamic> A_tl;                 // 18x(18 + 3*n_c) A matrix for torque limits
    Eigen::Matrix<double, 18, 1> b_tl;                              // 18x1 b vector for torque limits

    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> A_cmc;    // (3*n_c)x(18 + 3*n_c) A matrix for contact motion constraints
    Eigen::Matrix<double, Eigen::Dynamic, 1> b_cmc;                 // (3*n_c)x1 b vector for contact motion constraints

    Eigen::Matrix<double, 3, Eigen::Dynamic> A_mt_fb;               // 3x(18 + 3*n_c) A matrix for floating base motion tracking
    Eigen::Matrix<double, 3, 1> b_mt_fb;                            // 3x1 b vector for floating base motion tracking

    Eigen::Matrix<double, 3, Eigen::Dynamic> A_mt_fl;               // 3x(18 + 3*n_c) A matrix for front left foot motion tracking
    Eigen::Matrix<double, 3, 1> b_mt_fl;                            // 3x1 b vector for front left foot motion tracking

    Eigen::Matrix<double, 3, Eigen::Dynamic> A_mt_fr;               // 3x(18 + 3*n_c) A matrix for front right foot motion tracking
    Eigen::Matrix<double, 3, 1> b_mt_fr;                            // 3x1 b vector for front right foot motion tracking
    
    Eigen::Matrix<double, 3, Eigen::Dynamic> A_mt_rl;               // 3x(18 + 3*n_c) A matrix for rear left foot motion tracking
    Eigen::Matrix<double, 3, 1> b_mt_rl;                            // 3x1 b vector for rear left foot tracking

    Eigen::Matrix<double, 3, Eigen::Dynamic> A_mt_rr;               // 3x(18 + 3*n_c) A matrix for rear right foot motion tracking
    Eigen::Matrix<double, 3, 1> b_mt_rr;                            // 3x1 b vector for rear right foot motion tracking

    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> A_cfm;    // (3*n_c)x(18 + 3*n_c) A matrix for contact force minimization
    Eigen::Matrix<double, Eigen::Dynamic, 1> b_cfm;                 // (3*n_c)x1 b vector for contact force minimization

    // Matrices and terms used to enforce equations of motion 
    // for the floating base system dynamics (the first six
    // rows of the respective matrices and terms).
    Eigen::Matrix<double, 18, 18> M_fb;                    // 18x18 Floating base Mass matrix
    Eigen::Matrix<double, 18, 1> b_fb;                     // 18x1 Floating base Coriolis and centrifugal terms
    Eigen::Matrix<double, 18, 1> g_fb;                     // 18x1 Floating base Gravitational terms
    Eigen::Matrix<double, Eigen::Dynamic, 18> J_c_fb;      // (3*n_c)x18 Floating base Contact Jacobian

    // Matrices used to enforce contact motion constraints
    Eigen::Matrix<double, Eigen::Dynamic, 18> J_c;         // (3*n_c)x18 Contact Jacobian
    Eigen::Matrix<double, Eigen::Dynamic, 18> dot_J_c;     // (3*n_c)x18 Time derivative of the Contact Jacobian

    // Matrices and parameters used to enfore motion tracking
    Eigen::Matrix<double, 3, 18> J_P_fb;                   // 3x18 Floating base Translation Jacobian
    Eigen::Matrix<double, 3, 18> J_P_fl;                   // 3x18 Front left foot Translation Jacobian
    Eigen::Matrix<double, 3, 18> J_P_fr;                   // 3x18 Front right foot Translation Jacobian
    Eigen::Matrix<double, 3, 18> J_P_rl;                   // 3x18 Rear left foot Translation Jacobian
    Eigen::Matrix<double, 3, 18> J_P_rr;                   // 3x18 Rear right foot Translation Jacobian


    std::vector<Kinematics::LegType> contact_legs; // Vector of contact points (legs)
    std::vector<Kinematics::LegType> swing_legs;   // Vector of swing legs

    //*************************************************************************************
    // Tuning parameters
    //*************************************************************************************

    // Motion tracking gains
    double k_p_fb = 1;      // Floating base proportional gain
    double k_p_fl = 1;      // Front left foot proportional gain
    double k_p_fr = 1;      // Front right foot proportional gain
    double k_p_rl = 1;      // Rear left foot proportional gain
    double k_p_rr = 1;      // Rear right foot proportional gain

    //*************************************************************************************
    // Updates
    //*************************************************************************************

    // Fill contact and swing legs
    for (size_t i = 0; i < 4; i++)
    {
        // Contact State is assumed sorted by fl, fr, rl, rr
        if (contactState[i])
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

    // Resize dynamic matrices and terms
    x.resize(18 + 3*n_c, 1);
    x_i.resize(18 + 3*n_c, 1);
    N.resize(18 + 3*n_c, 18 + 3*n_c);

    A_eom.resize(18, 18 + 3*n_c);

    A_cmc.resize(3*n_c, 18 + 3*n_c);
    b_cmc.resize(3*n_c, 1);

    A_mt_fb.resize(3, 18 + 3*n_c);
    A_mt_fl.resize(3, 18 + 3*n_c);
    A_mt_fr.resize(3, 18 + 3*n_c);
    A_mt_rl.resize(3, 18 + 3*n_c);
    A_mt_rr.resize(3, 18 + 3*n_c);

    A_cfm.resize(3*n_c, 18 + 3*n_c);
    b_cfm.resize(3*n_c, 1);

    J_c_fb.resize(3*n_c, 18);
    J_c.resize(3*n_c, 18);
    dot_J_c.resize(3*n_c, 18);

    // Update matrices used by EOM constraints
    M_fb = kinematics.GetMassMatrix(this->genCoord);
    M_fb.bottomRows(12).setZero();

    b_fb = kinematics.GetCoriolisAndCentrifugalTerms(this->genCoord, this->genVel);
    b_fb.bottomRows(12).setZero();

    g_fb = kinematics.GetGravitationalTerms(this->genCoord);
    g_fb.bottomRows(12).setZero();

    J_c_fb = kinematics.GetContactJacobianInW(contact_legs, this->genCoord);
    J_c_fb.rightCols(12).setZero();

    // Update matrices used by contact motion constraints
    J_c = kinematics.GetContactJacobianInW(contact_legs, this->genCoord);
    dot_J_c = kinematics.GetContactJacobianInWDiff(contact_legs, this->genCoord, this->genVel);

    // Update matrices used by motion tracking constraints
    J_P_fb = kinematics.GetTranslationJacobianInW(Kinematics::LegType::NONE,
                                                  Kinematics::BodyType::base,
                                                  this->genCoord);
    J_P_fl = kinematics.GetTranslationJacobianInW(Kinematics::LegType::frontLeft,
                                                  Kinematics::BodyType::foot,
                                                  this->genCoord);
    J_P_fr = kinematics.GetTranslationJacobianInW(Kinematics::LegType::frontRight,
                                                  Kinematics::BodyType::foot,
                                                  this->genCoord);
    J_P_rl = kinematics.GetTranslationJacobianInW(Kinematics::LegType::rearLeft,
                                                  Kinematics::BodyType::foot,
                                                  this->genCoord);
    J_P_rr = kinematics.GetTranslationJacobianInW(Kinematics::LegType::rearRight,
                                                  Kinematics::BodyType::foot,
                                                  this->genCoord);


    // Add updated matrices to QP matrix A and vector b
    A_eom.leftCols(18) = M_fb;
    A_eom.rightCols(3*n_c) = - J_c_fb.transpose();
    b_eom = - (b_fb + g_fb);

    A_cmc.leftCols(18) = J_c;
    A_cmc.rightCols(3*n_c).setZero();
    b_cmc = - dot_J_c * this->genVel;

    A_mt_fb.leftCols(18) = J_P_fb;
    A_mt_fb.rightCols(3*n_c).setZero();
    b_mt_fb = k_p_fb * (_desired_base_pos - this->genCoord.topRows(3));

    A_mt_fl.leftCols(18) = J_P_fl;
    A_mt_fl.rightCols(3*n_c).setZero();
    b_mt_fl = k_p_fl * (_desired_f_pos(0) - this->fPos(0));

    A_mt_fr.leftCols(18) = J_P_fr;
    A_mt_fr.rightCols(3*n_c).setZero();
    b_mt_fr = k_p_fr * (_desired_f_pos(1) - this->fPos(1));

    A_mt_rl.leftCols(18) = J_P_rl;
    A_mt_rl.rightCols(3*n_c).setZero();
    b_mt_rl = k_p_rl * (_desired_f_pos(2) - this->fPos(2));

    A_mt_rr.leftCols(18) = J_P_rr;
    A_mt_rr.rightCols(3*n_c).setZero();
    b_mt_rr = k_p_rr * (_desired_f_pos(3) - this->fPos(3));

    A_cfm.leftCols(18).setZero();
    A_cfm.rightCols(3*n_c).setIdentity();
    b_cfm.setZero();

    //*************************************************************************************
    // Hierarchical Least Squares Optimization
    //*************************************************************************************

    // Init 
    x.setZero();
    x_i.setZero();
    N.setIdentity();

    // ---------------- 1st iteration - EOMs -----------------

    // Find Pseudoinverse
    AN = A_eom * N;
    kindr::pseudoInverse(AN, pinvAN);
    
    // Find least squares optimal state for the at hand QP
    x_i = pinvAN * (b_eom - A_eom * x);

    // Update optimal state for the hierarchical optimization
    x = x + N * x_i;

    // Find new null-space projector
    A_stacked << A_eom;
    N = math_utils::SVDNullSpaceProjector(A_stacked);

    // ---------------- 2nd iteration - Contact Motion Constraint -----------------

    // Find Pseudoinverse
    AN = A_cmc * N;
    kindr::pseudoInverse(AN, pinvAN);
    
    // Find least squares optimal state for the at hand QP
    x_i = pinvAN * (b_cmc - A_cmc * x);

    // Update optimal state for the hierarchical optimization
    x = x + N * x_i;

    // Find new null-space projector
    A_stacked << A_eom,
                 A_cmc;
    //math_utils::nullSpaceProjector(A_stacked, N);



    return desired_tau;
}

// TODO Remove
void HierarchicalOptimizationControl::testDrakeQPOpt()
{
    drake::solvers::MathematicalProgram prog;
    drake::solvers::MathematicalProgramResult result;

    Eigen::Matrix<drake::symbolic::Variable, Eigen::Dynamic, 1> x = prog.NewContinuousVariables(3, "x");



    prog.AddQuadraticCost(x[0] * x[0] + x[1] * x[1]);

    prog.AddLinearEqualityConstraint(x[0] + 2*x[1] == 10);

    prog.AddLinearEqualityConstraint(x[0] == 5);


    result = Solve(prog);

    ROS_INFO_STREAM("Solver id: " << result.get_solver_id());
    ROS_INFO_STREAM("Found solution: " << result.is_success());
    ROS_INFO_STREAM("Solution result: " << result.get_solution_result());
    ROS_INFO_STREAM("Optimal solution: " << result.GetSolution(x));

}


// Hierarchical QP Optimization
Eigen::Matrix<double, Eigen::Dynamic, 1> HierarchicalOptimizationControl::HierarchicalQPOptimization(const Eigen::Matrix<Eigen::MatrixXd, Eigen::Dynamic, 1> &_A_eq,
                                                                                                     const Eigen::Matrix<Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Dynamic, 1> &_b_eq,
                                                                                                     const Eigen::Matrix<Eigen::MatrixXd, Eigen::Dynamic, 1> &_A_ineq,
                                                                                                     const Eigen::Matrix<Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Dynamic, 1> &_b_ineq)
{
    const auto rowsA_eq = _A_eq.rows();
    const auto rowsb_eq = _b_eq.rows();
    const auto rowsA_ineq = _A_ineq.rows();
    const auto rowsb_ineq = _b_ineq.rows();

    // Validate number of equations
    if( rowsA_eq != rowsb_eq )
    {
        ROS_ERROR("[HierarchicalOptimizationControl::HierarchicalQPOptimization] _A_eq and _b_eq does not contain equal amount of elements!");

        std::abort();
    }
    if( rowsA_ineq != rowsb_ineq )
    {
        ROS_ERROR("[HierarchicalOptimizationControl::HierarchicalQPOptimization] _A_ineq and _b_ineq does not contain equal amount of elements!");

        std::abort();
    }

    const auto state_dim = _A_eq(0).cols();

    // Validate state and equation dimensions
    for (size_t i = 0; i < rowsA_eq; i++)
    {
        if (_A_eq(i).cols() != state_dim || _A_eq(i).rows() != _b_eq(i).rows() )
        {
            ROS_ERROR_STREAM("[HierarchicalOptimizationControl::HierarchicalLeastSquareOptimization] State or equation dimensions failed for equality constraints at index: i = !" << i);

            std::abort();
        }
        if (_A_ineq(i).cols() != state_dim || _A_ineq(i).rows() != _b_ineq(i).rows() )
        {
            ROS_ERROR_STREAM("[HierarchicalOptimizationControl::HierarchicalLeastSquareOptimization] State or equation dimensions failed for inequality constraints at index: i = !" << i);

            std::abort();
        }
    }

    // Declarations

    Eigen::Vector3d d;

    return d;
}

// Hierarchical Least-Square Optimization
Eigen::Matrix<double, Eigen::Dynamic, 1> HierarchicalOptimizationControl::HierarchicalLeastSquareOptimization(const Eigen::Matrix<Eigen::MatrixXd, Eigen::Dynamic, 1> &_A,
                                                                                                              const Eigen::Matrix<Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Dynamic, 1> &_b)
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

        ROS_INFO_STREAM("Solution at iteration " << i << " is: \n" << x_opt);

    }

    return x_opt;
}

// Callback for ROS Generalized Coordinates messages
void HierarchicalOptimizationControl::OnGenCoordMsg(const std_msgs::Float64MultiArrayConstPtr &_msg)
{
    std::vector<double> data = _msg->data;

    this->genCoord = Eigen::Map<Eigen::MatrixXd>(data.data(), 18, 1);

    if (!this->kinematics.SolveForwardKinematics(genCoord, fPos))
    {
        ROS_ERROR("[HierarchicalOptimizationControl::OnGenCoordMsg] Could not solve forward kinematics!");
    }
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