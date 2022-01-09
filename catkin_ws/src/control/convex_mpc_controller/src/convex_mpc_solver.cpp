#include<convex_mpc_controller/convex_mpc_solver.h>

namespace ConvexMpc{

ConvexMpcSolver::ConvexMpcSolver(
    double mass,
    Eigen::Matrix3d J_b,
    double mu,
    Eigen::Vector3d r_b_to_fl_ref_in_b,
    double delta_t,
    double T_sim,
    double T_gait,
    Eigen::Matrix<double, n_states_, n_states_> cost_reference,
    Eigen::Matrix<double, 3*n_legs_, 3*n_legs_> cost_force,
    GaitType gait_type,
    ros::Publisher *p_mpc_pub)
{
    mass_ = mass;
    J_b_ = J_b;
    mu_ = mu;
    r_b_to_fl_ref_in_b_ = r_b_to_fl_ref_in_b;
    delta_t_ = delta_t;
    T_sim_ = T_sim;
    T_gait_ = T_gait;
    cost_reference_ = cost_reference;
    cost_force_ = cost_force;
    gait_type_ = gait_type;
    stance_info_ = getStanceInfo(gait_type);
    tk_ = Eigen::LocalExtensions::Arange(0, T_sim, delta_t);
    n_steps_ = tk_.size();
    //This should really be static const or something but found no elegant way to initialize in a const-friendly way
    g_ext_.setZero();
    g_ext_.segment(6, 3) << 0, 0, -9.81;

    A_forces_ << 0, 0, -1,
                0, 0, 1,
                1, 0, -mu,
                -1, 0, -mu,
                0, 1, -mu,
                0, -1, -mu;
    
    double f_min = 0;

    double f_max = 10000;

    b_forces_ << f_min, f_max, Eigen::Vector4d::Zero();

    p_mpc_pub_ = p_mpc_pub;

}

ConvexMpcSolver::ConvexMpcSolver(
    double mass,
    Eigen::Matrix3d J_b,
    double mu,
    Eigen::Vector3d r_b_to_fl_ref_in_b,
    double delta_t,
    double T_sim,
    double T_gait,
    Eigen::Matrix<double, n_states_, n_states_> cost_reference,
    double cost_force_scalar,
    GaitType gait_type,
    ros::Publisher *p_mpc_pub)
    : ConvexMpcSolver(mass, J_b, mu, r_b_to_fl_ref_in_b_, delta_t, T_sim, T_gait, cost_reference,
    cost_force_scalar*Eigen::Matrix<double, 3*n_legs_, 3*n_legs_>::Identity(), gait_type, p_mpc_pub){}

ConvexMpcSolver::ConvexMpcSolver(
    double mass,
    Eigen::Matrix3d J_b,
    double mu,
    Eigen::Vector3d r_b_to_fl_ref_in_b,
    double delta_t,
    double T_sim,
    double T_gait,
    double cost_reference_scalar,
    double cost_force_scalar,
    GaitType gait_type,
    ros::Publisher *p_mpc_pub)
    : ConvexMpcSolver(mass, J_b, mu, r_b_to_fl_ref_in_b_, delta_t, T_sim, T_gait, cost_reference_scalar*Eigen::Matrix<double, n_states_, n_states_>::Identity(),
    cost_force_scalar*Eigen::Matrix<double, 3*n_legs_, 3*n_legs_>::Identity(), gait_type, p_mpc_pub){}

ConvexMpcSolver::OptimizationVariables ConvexMpcSolver::InitializeOptimizationVariables(drake::solvers::MathematicalProgram &prog){
    OptimizationVariables opt_vars;
    opt_vars.states = prog.NewContinuousVariables(n_states_, n_steps_, "x");

    opt_vars.forces = prog.NewContinuousVariables(3*n_legs_, n_steps_, "f");

    return opt_vars;
}


Eigen::MatrixXd ConvexMpcSolver::GetA(const double &yaw){
    Eigen::MatrixXd A = Eigen::Matrix<double, n_states_, n_states_>::Zero();

    A.block(0, 6, 3, 3).setIdentity();

    A.block(3, 9, 3, 3) = Eigen::AngleAxisd(yaw, Eigen::Vector3d::UnitZ()).toRotationMatrix().transpose();
    return A;
}

Eigen::MatrixXd ConvexMpcSolver::GetB(const Eigen::Array<Eigen::Vector3d, 4, 1> &r_b_feet_w, const double &yaw){
    // Note: more of a coincidence that the B-matrix is square, not so by necessity. Nor does it make the system fully actuated in this case
    Eigen::MatrixXd B = Eigen::MatrixXd::Zero(12, 12);
    Eigen::Matrix3d rot_z = Eigen::AngleAxisd(yaw, Eigen::Vector3d::UnitZ()).toRotationMatrix();
    Eigen::Matrix3d J_w = rot_z*J_b_*rot_z.transpose();
    Eigen::Matrix3d skew;
    for(int i = 0; i < r_b_feet_w.size(); ++i){
        B.block(6, 3*i, 3, 3) = Eigen::Matrix3d::Identity()/mass_;
        //B.block(9, 3*i, 3, 3) = -J_w.llt().solve(Eigen::Matrix3d::Identity().colwise().cross(r_b_feet_w(i)));
        skew << 0, -r_b_feet_w(i)(2), r_b_feet_w(i)(1),
                        r_b_feet_w(i)(2), 0, -r_b_feet_w(i)(0),
                        -r_b_feet_w(i)(1), r_b_feet_w(i)(0), 0;
        B.block(9, 3*i, 3, 3) << J_w.llt().solve(skew);
    }
    return B;
}

Eigen::Matrix2Xd ConvexMpcSolver::GetBodyXYPositions(
    const Eigen::Vector2d &p0,
    const Eigen::Vector2d &vel_des,
    const Eigen::VectorXd &yaw_des)
{
    Eigen::Matrix2Xd body_xy_positions(2, n_steps_);
    
    Eigen::Vector2d vel_rot;

    body_xy_positions.col(0) = p0;
    for (int i = 1; i < n_steps_; ++i){
        vel_rot = Eigen::Rotation2Dd(yaw_des(i - 1)).toRotationMatrix()*vel_des;
        body_xy_positions.col(i) = body_xy_positions.col(i - 1) + vel_rot*delta_t_;
    }
    return body_xy_positions;
}

Eigen::Array<Eigen::Vector3d, 4, Eigen::Dynamic> ConvexMpcSolver::GetStanceVectors(
    const StanceIndices &stance_indices,
    const Eigen::Matrix2Xd &body_xy_positions,
    const Eigen::VectorXd &yaw_des,
    const Eigen::Vector2d &vel_des,
    const Eigen::Array<Eigen::Vector3d, 4, 1> &init_stance_pos,
    const double &body_height)
{
    Eigen::Array<Eigen::Vector3d, 4, Eigen::Dynamic> stances(4, n_steps_);

    stances.setZero();

    Eigen::Matrix3d R_z;

    for (int i = 0; i < n_legs_; ++i){
        if(stance_indices(i).stance(0) == 1){
            stances(i, 0) = init_stance_pos(i);
        }
        Eigen::Vector3d r_landing = getNominalTranslationBaseToFoot(r_b_to_fl_ref_in_b_, static_cast<FootType>(i));

        double stance_time = stance_info_(i).durations.sum()*T_gait_;
        
        switch(i){
            case fl:
                break;
            case fr:
                r_landing(1) = -r_landing(1);
                break;
            case rl:
                r_landing(0) = -r_landing(0);
                break;
            case rr:
                r_landing << -r_landing.head(2), r_landing(2);
                break;
        }

        r_landing.head(2) += vel_des*stance_time/2;
        r_landing(2) = -body_height;

        for (int j = 1; j < n_steps_; ++j){
            if (stance_indices(i).stance(j) == 1){
                if (stance_indices(i).stance_diff(j) == 1){ //if foot is landing
                    R_z = Eigen::AngleAxisd(yaw_des(j), Eigen::Vector3d::UnitZ()).toRotationMatrix();
                    stances(i, j) = R_z*r_landing;
                } else{
                    stances(i, j) = stances(i, j - 1);
                    stances(i, j).head(2) -= (body_xy_positions.col(j) - body_xy_positions.col(j - 1));
                }
            }
        }
    }
    return stances;
}

Eigen::Matrix<double, 12, Eigen::Dynamic> ConvexMpcSolver::GetReferenceTrajectory(
    const Eigen::Matrix<double, 12, 1> &x0,
    const Eigen::Matrix2Xd &body_xy_positions,
    const double &z_des,
    const Eigen::VectorXd &yaw_des,
    const Eigen::Vector2d &vel_des,
    const double &yaw_rate_des)
{
    Eigen::Matrix<double, 12, Eigen::Dynamic> reference_trajectory(12, n_steps_);

    reference_trajectory.setZero();

    reference_trajectory.topRows(6).colwise() = x0.head(6);

    reference_trajectory.topRows(2) = body_xy_positions;

    reference_trajectory.middleRows(2, 1).setConstant(z_des);

    //reference_trajectory.middleRows(1,1).colwise() = p_des_.middleRows(1,1);

    reference_trajectory.row(3).setZero();

    reference_trajectory.row(4).setZero();//setConstant(-0.03);

    reference_trajectory.row(5) = yaw_des;

    reference_trajectory.middleRows(6, 2).colwise() = vel_des;
    
    reference_trajectory.row(11).setConstant(yaw_rate_des);

    return reference_trajectory;
}

void ConvexMpcSolver::AddDynamicsConstraint(int i, const Eigen::Array<Eigen::Vector3d, 4, 1> &r_b_feet_w, const double &yaw, OptimizationVariables &opt_vars, drake::solvers::MathematicalProgram &prog){
    bool zero_order_hold = true;
    
    Eigen::Matrix<double, n_states_, n_states_> A_discrete;
    Eigen::Matrix<double, n_states_, 3*n_legs_> B_u_discrete;
    Eigen::Matrix<double, n_states_, n_states_> B_g_discrete;
    if(zero_order_hold){
        Eigen::Matrix<double, n_states_, n_states_> A_continuous = GetA(yaw);
        Eigen::Matrix<double, n_states_, n_states_ + 3*n_legs_> B_continuous;

        B_continuous << GetB(r_b_feet_w, yaw), Eigen::Matrix<double, n_states_, n_states_>::Identity();

        Eigen::Matrix<double, 2*n_states_ + 3*n_legs_, 2*n_states_ + 3*n_legs_> matrix_exponent;

        matrix_exponent.setZero();
        matrix_exponent.topLeftCorner(n_states_, n_states_) << A_continuous;
        matrix_exponent.topRightCorner(n_states_, n_states_ + 3*n_legs_) << B_continuous;

        Eigen::Matrix<double, 2*n_states_ + 3*n_legs_, 2*n_states_ + 3*n_legs_> matrix_exponential = (delta_t_*matrix_exponent).exp();

        A_discrete << matrix_exponential.topLeftCorner(n_states_, n_states_);
        B_u_discrete << matrix_exponential.block(0, n_states_, n_states_, 3*n_legs_);
        B_g_discrete << matrix_exponential.topRightCorner(n_states_, n_states_);
    } else{
        A_discrete = Eigen::Matrix<double, n_states_, n_states_>::Identity() + delta_t_*GetA(yaw);
        B_u_discrete = delta_t_*GetB(r_b_feet_w, yaw);
        B_g_discrete = delta_t_*Eigen::Matrix<double, n_states_, n_states_>::Identity();
    }
    
    prog.AddLinearConstraint(opt_vars.states.col(i + 1) == A_discrete*opt_vars.states.col(i) + B_u_discrete*opt_vars.forces.col(i) + B_g_discrete*g_ext_);
}


void ConvexMpcSolver::AddAllDynamicsConstraints(
    const Eigen::Array<Eigen::Vector3d, 4, Eigen::Dynamic> &r_b_feet_w,
    const Eigen::Vector2d &vel_des,
    const Eigen::VectorXd &yaw_des,
    OptimizationVariables &opt_vars,
    drake::solvers::MathematicalProgram &prog)
{
    for (int i = 0; i < n_steps_ - 1; ++i){
        AddDynamicsConstraint(i, r_b_feet_w.col(i), yaw_des(i), opt_vars, prog);
    }
}

void ConvexMpcSolver::AddStanceConstraints(const StanceIndices &stance_indices, OptimizationVariables &opt_vars, drake::solvers::MathematicalProgram &prog){
    for (int i = 0; i < stance_indices.size(); ++i){
        for (int j = 0; j < n_steps_; ++j){
            //if the foot i in question is not a stance foot at ts j
            if(stance_indices(i).stance(j) == 0){
                prog.AddBoundingBoxConstraint(Eigen::Vector3d::Zero(), Eigen::Vector3d::Zero(), opt_vars.forces.block(3*i, j, 3, 1));
            }
        }
    }
}

void ConvexMpcSolver::AddForceConstraints(const StanceIndices &stance_indices, OptimizationVariables &opt_vars, drake::solvers::MathematicalProgram &prog){
    for (int i = 0; i < stance_indices.size(); ++i){
        for (int j = 0; j < n_steps_; ++j){
            if(stance_indices(i).stance(j) == 1){
                prog.AddLinearConstraint(A_forces_*opt_vars.forces.block(3*i, j, 3, 1) <= b_forces_);
            }
        }
    }
}

void ConvexMpcSolver::AddInitialConditionConstraint(const Eigen::Matrix<double, 12, 1> &x0, OptimizationVariables &opt_vars, drake::solvers::MathematicalProgram &prog){
    prog.AddLinearConstraint(opt_vars.states.col(0) == x0);
    //prog.AddBoundingBoxConstraint(x0, x0, opt_vars.states.col(0));
}

void ConvexMpcSolver::AddForceCost(OptimizationVariables &opt_vars, drake::solvers::MathematicalProgram &prog){
    for (int i = 0; i < n_steps_; ++i){
        prog.AddQuadraticCost(cost_force_, Eigen::Matrix<double, 3*n_legs_, 1>::Zero(), opt_vars.forces.col(i));
    }
}

void ConvexMpcSolver::AddReferenceCost(const Eigen::Matrix<double, 12, Eigen::Dynamic> &reference_trajectory, OptimizationVariables &opt_vars, drake::solvers::MathematicalProgram &prog){
    Eigen::Matrix<double, n_states_, 1> f;
    for (int i = 0; i < n_steps_; ++i){
        f = -cost_reference_*reference_trajectory.col(i);
        prog.AddQuadraticCost(cost_reference_, f, opt_vars.states.col(i));
    }
}

void ConvexMpcSolver::AddStateBounds(
    const Eigen::Matrix<double, 12, 1> &x0,
    const double &z_des,
    const Eigen::Vector2d &vel_des,
    const double &yaw_rate_des,
    OptimizationVariables &opt_vars,
    drake::solvers::MathematicalProgram &prog)
{
    double max_xy_displ = n_steps_*delta_t_*vel_des.norm();
    double max_yaw_displ = n_steps_*delta_t_*std::abs(yaw_rate_des);

    double lb_x = x0(0) - max_xy_displ - 0.2;
    double lb_y = x0(1) - max_xy_displ - 0.2;
    double lb_z = std::min(x0(2), z_des) - 0.03;
    double lb_roll = - 0.2;
    double lb_pitch = - 0.5;
    double lb_yaw = x0(4) - max_yaw_displ - 0.1;
    double lb_dx = -vel_des.norm() - 2;
    double lb_dy = -vel_des.norm() - 2;
    double lb_dz = -3;
    double lb_droll = -0.4;
    double lb_dpitch = -0.4;
    double lb_dyaw = -std::abs(yaw_rate_des) - 1;


    double ub_x = x0(0) + max_xy_displ + 0.2;
    double ub_y = x0(1) + max_xy_displ + 0.2;
    double ub_z = std::max(x0(2), z_des) + 0.03;
    double ub_roll =  + 0.2;
    double ub_pitch = + 0.5;
    double ub_yaw = x0(4) + max_yaw_displ + 0.1;
    double ub_dx = vel_des.norm() + 2;
    double ub_dy = vel_des.norm() + 2;
    double ub_dz = 3;
    double ub_droll = +0.4;
    double ub_dpitch = +0.4;
    double ub_dyaw = std::abs(yaw_rate_des) + 1;

    Eigen::Matrix<double, n_states_, 1> lb;
    Eigen::Matrix<double, n_states_, 1> ub;

    lb << lb_x, lb_y, lb_z, lb_roll, lb_pitch, lb_yaw, lb_dx, lb_dy, lb_dz, lb_droll, lb_dpitch, lb_dyaw;
    
    ub << ub_x, ub_y, ub_z, ub_roll, ub_pitch, ub_yaw, ub_dx, ub_dy, ub_dz, ub_droll, ub_dpitch, ub_dyaw;

    for(int i = 0; i < n_steps_; ++i){
//        prog.AddBoundingBoxConstraint(lb, ub, opt_vars.states.col(i));
        prog.AddBoundingBoxConstraint(lb.middleRows(3, 2), ub.middleRows(3, 2), opt_vars.states.col(i).middleRows(3, 2));
//        prog.AddBoundingBoxConstraint(lb.bottomRows(9), ub.bottomRows(9), opt_vars.states.col(i).bottomRows(9));
    }
}

convex_mpc_controller::solveMpcResponse ConvexMpcSolver::Solve(
    const double &t0,
    const Eigen::Matrix<double, 12, 1> &x0,
    const Eigen::Array<Eigen::Vector3d, 4, 1> &init_stance_pos,
    const Eigen::Array4i &init_contact_state,
    const double &z_des,
    const Eigen::Vector2d &vel_des,
    const double &yaw_rate_des)
{
    auto chrono_t0 = std::chrono::high_resolution_clock::now();

    drake::solvers::MathematicalProgram prog;

    OptimizationVariables opt_vars = InitializeOptimizationVariables(prog);

    ROS_INFO_STREAM("Solver started");

    Eigen::VectorXd yaw_des = tk_*yaw_rate_des;

    yaw_des.rowwise() += Eigen::Matrix<double, 1, 1>::Constant(x0(5));

    Eigen::Matrix2Xd body_xy_positions = GetBodyXYPositions(x0.head(2), vel_des, yaw_des);

    Eigen::Matrix<double, 12, Eigen::Dynamic> reference_trajectory = GetReferenceTrajectory(x0, body_xy_positions, z_des, yaw_des, vel_des, yaw_rate_des);

    StanceIndices stance_indices = getStanceIndices(stance_info_, t0, T_sim_, T_gait_, delta_t_, init_contact_state);

    Eigen::Array<Eigen::Vector3d, 4, Eigen::Dynamic> stance_vectors = GetStanceVectors(stance_indices, body_xy_positions, yaw_des, vel_des, init_stance_pos, x0(2));

    AddAllDynamicsConstraints(stance_vectors, vel_des, yaw_des, opt_vars, prog);

    AddStanceConstraints(stance_indices, opt_vars, prog);
    
    AddForceConstraints(stance_indices, opt_vars, prog);
    AddInitialConditionConstraint(x0, opt_vars, prog);

//    AddStateBounds(x0, z_des, vel_des, yaw_rate_des, opt_vars, prog);

    AddForceCost(opt_vars, prog);
    AddReferenceCost(reference_trajectory, opt_vars, prog);


    enum SolverType {Gurobi, Snopt, Ipopt};

    SolverType solver_type = Gurobi;

    drake::solvers::MathematicalProgramResult result;
    
    switch(solver_type){
        case Gurobi:{
            drake::solvers::GurobiSolver solver;
            ROS_INFO_STREAM("About to solve");
            result = solver.Solve(prog);
            if (!result.is_success()){
                ROS_INFO_STREAM("Convex MPC Solver: Program failed to be solved. Program looks as follows:" << std::endl << std::endl<< prog.to_string());
                auto constr = result.GetInfeasibleConstraints(prog);
                for (int i = 0; i < constr.size(); ++i){
                    ROS_INFO_STREAM("Infeasible constraint: " << std::endl << constr[i]);
                }
            } else {
                ROS_INFO_STREAM("Convex MPC Solver: Program solved successfully.");
            }
        }break;
        case Snopt:{
            drake::solvers::SnoptSolver solver;
            ROS_INFO_STREAM("About to solve");
            result = solver.Solve(prog);
        }break;
    }

    auto chrono_t1 = std::chrono::high_resolution_clock::now();

    UpdateStatistics(chrono_t0, chrono_t1);

    PrintStatistics();

    Eigen::Matrix<double, n_states_, Eigen::Dynamic> x = result.GetSolution(opt_vars.states);
    Eigen::Matrix<double, 3*n_legs_, Eigen::Dynamic> f = result.GetSolution(opt_vars.forces);

    Eigen::MatrixXd flsv(3, n_steps_);
    for(int i = 0; i < n_steps_ ; ++i){flsv.col(i) = stance_vectors(0,i);}
    return SolutionToRosMsg(result, t0, stance_indices, stance_vectors, yaw_des, opt_vars);
}

convex_mpc_controller::solveMpcResponse ConvexMpcSolver::SolutionToRosMsg(
    drake::solvers::MathematicalProgramResult &result,
    const double &t0,
    const StanceIndices &stance_indices,
    Eigen::Array<Eigen::Vector3d, 4, Eigen::Dynamic> &stance_vectors,
    const Eigen::VectorXd &yaw_des,
    OptimizationVariables &opt_vars)
{
    convex_mpc_controller::solveMpcResponse msg;

    msg.solved = result.is_success();

    Eigen::MatrixXd x = result.GetSolution(opt_vars.states);

    Eigen::MatrixXd f = result.GetSolution(opt_vars.forces);
    
    msg.t.resize(tk_.size());

    Eigen::VectorXd ts = tk_;
    ts.rowwise() += Eigen::Matrix<double, 1, 1>::Constant(t0);

    Eigen::VectorXd::Map(msg.t.data(), ts.size()) = ts;
    //ROS_INFO_STREAM("here are state solutions: " << std::endl << states);
    //ROS_INFO_STREAM("here are force solutions: " << std::endl << forces);
    tf::matrixEigenToMsg(x, msg.states.x);
    
    Eigen::Matrix<double, n_states_, Eigen::Dynamic> dx = GetDerivativeVectors(x, f, stance_vectors, yaw_des);

    tf::matrixEigenToMsg(dx, msg.states.dx);

    auto toMatrix = [](const Eigen::Array<Eigen::Vector3d, 1, Eigen::Dynamic> &arr){auto res = Eigen::MatrixXd(3, arr.cols()); for(int i = 0; i < res.cols(); ++i){res.col(i) << arr(i);} return res;};
    
    //front left foot
    msg.inputs.fl.stance_indices.resize(tk_.size());
    Eigen::VectorXi::Map(msg.inputs.fl.stance_indices.data(), tk_.size()) = stance_indices(FootType::fl).stance;

    msg.inputs.fl.d_stance_indices.resize(tk_.size());
    Eigen::VectorXi::Map(msg.inputs.fl.d_stance_indices.data(), tk_.size()) = stance_indices(FootType::fl).stance_diff;

    tf::matrixEigenToMsg(f.middleRows(3*FootType::fl, 3), msg.inputs.fl.forces);


    Eigen::MatrixXd fl_mat = toMatrix(stance_vectors.row(FootType::fl));

    tf::matrixEigenToMsg(fl_mat, msg.inputs.fl.stance_vectors);
    
    //front right foot
    msg.inputs.fr.stance_indices.resize(tk_.size());
    Eigen::VectorXi::Map(msg.inputs.fr.stance_indices.data(), tk_.size()) = stance_indices(FootType::fr).stance;

    msg.inputs.fr.d_stance_indices.resize(tk_.size());
    Eigen::VectorXi::Map(msg.inputs.fr.d_stance_indices.data(), tk_.size()) = stance_indices(FootType::fr).stance_diff;

    tf::matrixEigenToMsg(f.middleRows(3*FootType::fr, 3), msg.inputs.fr.forces);


    Eigen::MatrixXd fr_mat = toMatrix(stance_vectors.row(FootType::fr));

    tf::matrixEigenToMsg(fr_mat, msg.inputs.fr.stance_vectors);
    
    //rear left foot
    msg.inputs.rl.stance_indices.resize(tk_.size());
    Eigen::VectorXi::Map(msg.inputs.rl.stance_indices.data(), tk_.size()) = stance_indices(FootType::rl).stance;

    msg.inputs.rl.d_stance_indices.resize(tk_.size());
    Eigen::VectorXi::Map(msg.inputs.rl.d_stance_indices.data(), tk_.size()) = stance_indices(FootType::rl).stance_diff;

    tf::matrixEigenToMsg(f.middleRows(3*FootType::rl, 3), msg.inputs.rl.forces);


    Eigen::MatrixXd rl_mat = toMatrix(stance_vectors.row(FootType::rl));

    tf::matrixEigenToMsg(rl_mat, msg.inputs.rl.stance_vectors);
    
    //front left foot
    msg.inputs.rr.stance_indices.resize(tk_.size());
    Eigen::VectorXi::Map(msg.inputs.rr.stance_indices.data(), tk_.size()) = stance_indices(FootType::rr).stance;

    msg.inputs.rr.d_stance_indices.resize(tk_.size());
    Eigen::VectorXi::Map(msg.inputs.rr.d_stance_indices.data(), tk_.size()) = stance_indices(FootType::rr).stance_diff;

    tf::matrixEigenToMsg(f.middleRows(3*FootType::rr, 3), msg.inputs.rr.forces);


    Eigen::MatrixXd rr_mat = toMatrix(stance_vectors.row(FootType::rr));

    tf::matrixEigenToMsg(rr_mat, msg.inputs.rr.stance_vectors);
    
    return msg;
}

ConvexMpcSolver::Solution ConvexMpcSolver::RosMsgToSolution(convex_mpc_controller::solveMpcResponse msg, bool row_major){
    Solution solution;

    solution.solved = msg.solved;

    int n_steps = msg.t.size();

    solution.t = Eigen::VectorXd::Map(msg.t.data(), n_steps);

    if(row_major){
        solution.states.x = Eigen::Matrix<double, n_states_, Eigen::Dynamic, Eigen::RowMajor>::Map(msg.states.x.data.data(), n_states_, n_steps);

        solution.states.dx = Eigen::Matrix<double, n_states_, Eigen::Dynamic, Eigen::RowMajor>::Map(msg.states.dx.data.data(), n_states_, n_steps);

        solution.inputs(0).forces = Eigen::Matrix<double, 3, Eigen::Dynamic, Eigen::RowMajor>::Map(msg.inputs.fl.forces.data.data(), 3, n_steps);
        
        solution.inputs(0).stance_vectors = Eigen::Matrix<double, 3, Eigen::Dynamic, Eigen::RowMajor>::Map(msg.inputs.fl.stance_vectors.data.data(), 3, n_steps);
        
        solution.inputs(0).stance_indices.stance = Eigen::VectorXi::Map(msg.inputs.fl.stance_indices.data(), n_steps);

        solution.inputs(0).stance_indices.stance_diff = Eigen::VectorXi::Map(msg.inputs.fl.d_stance_indices.data(), n_steps);
        
        solution.inputs(1).forces = Eigen::Matrix<double, 3, Eigen::Dynamic, Eigen::RowMajor>::Map(msg.inputs.fr.forces.data.data(), 3, n_steps);
        
        solution.inputs(1).stance_vectors = Eigen::Matrix<double, 3, Eigen::Dynamic, Eigen::RowMajor>::Map(msg.inputs.fr.stance_vectors.data.data(), 3, n_steps);
        
        solution.inputs(1).stance_indices.stance = Eigen::VectorXi::Map(msg.inputs.fr.stance_indices.data(), n_steps);

        solution.inputs(1).stance_indices.stance_diff = Eigen::VectorXi::Map(msg.inputs.fr.d_stance_indices.data(), n_steps);
        
        solution.inputs(2).forces = Eigen::Matrix<double, 3, Eigen::Dynamic, Eigen::RowMajor>::Map(msg.inputs.rl.forces.data.data(), 3, n_steps);
        
        solution.inputs(2).stance_vectors = Eigen::Matrix<double, 3, Eigen::Dynamic, Eigen::RowMajor>::Map(msg.inputs.rl.stance_vectors.data.data(), 3, n_steps);
        
        solution.inputs(2).stance_indices.stance = Eigen::VectorXi::Map(msg.inputs.rl.stance_indices.data(), n_steps);

        solution.inputs(2).stance_indices.stance_diff = Eigen::VectorXi::Map(msg.inputs.rl.d_stance_indices.data(), n_steps);
        
        solution.inputs(3).forces = Eigen::Matrix<double, 3, Eigen::Dynamic, Eigen::RowMajor>::Map(msg.inputs.rr.forces.data.data(), 3, n_steps);
        
        solution.inputs(3).stance_vectors = Eigen::Matrix<double, 3, Eigen::Dynamic, Eigen::RowMajor>::Map(msg.inputs.rr.stance_vectors.data.data(), 3, n_steps);
        
        solution.inputs(3).stance_indices.stance = Eigen::VectorXi::Map(msg.inputs.rr.stance_indices.data(), n_steps);

        solution.inputs(3).stance_indices.stance_diff = Eigen::VectorXi::Map(msg.inputs.rr.d_stance_indices.data(), n_steps);

    } else{
        solution.states.x = Eigen::Matrix<double, n_states_, Eigen::Dynamic>::Map(msg.states.x.data.data(), n_states_, n_steps);

        solution.states.dx = Eigen::Matrix<double, n_states_, Eigen::Dynamic>::Map(msg.states.dx.data.data(), n_states_, n_steps);

        solution.inputs(0).forces = Eigen::Matrix<double, 3, Eigen::Dynamic>::Map(msg.inputs.fl.forces.data.data(), 3, n_steps);
        
        solution.inputs(0).stance_vectors = Eigen::Matrix<double, 3, Eigen::Dynamic>::Map(msg.inputs.fl.stance_vectors.data.data(), 3, n_steps);
        
        solution.inputs(0).stance_indices.stance = Eigen::VectorXi::Map(msg.inputs.fl.stance_indices.data(), n_steps);

        solution.inputs(0).stance_indices.stance_diff = Eigen::VectorXi::Map(msg.inputs.fl.d_stance_indices.data(), n_steps);
        
        solution.inputs(1).forces = Eigen::Matrix<double, 3, Eigen::Dynamic>::Map(msg.inputs.fr.forces.data.data(), 3, n_steps);
        
        solution.inputs(1).stance_vectors = Eigen::Matrix<double, 3, Eigen::Dynamic>::Map(msg.inputs.fr.stance_vectors.data.data(), 3, n_steps);
        
        solution.inputs(1).stance_indices.stance = Eigen::VectorXi::Map(msg.inputs.fr.stance_indices.data(), n_steps);

        solution.inputs(1).stance_indices.stance_diff = Eigen::VectorXi::Map(msg.inputs.fr.d_stance_indices.data(), n_steps);
        
        solution.inputs(2).forces = Eigen::Matrix<double, 3, Eigen::Dynamic>::Map(msg.inputs.rl.forces.data.data(), 3, n_steps);
        
        solution.inputs(2).stance_vectors = Eigen::Matrix<double, 3, Eigen::Dynamic>::Map(msg.inputs.rl.stance_vectors.data.data(), 3, n_steps);
        
        solution.inputs(2).stance_indices.stance = Eigen::VectorXi::Map(msg.inputs.rl.stance_indices.data(), n_steps);

        solution.inputs(2).stance_indices.stance_diff = Eigen::VectorXi::Map(msg.inputs.rl.d_stance_indices.data(), n_steps);
        
        solution.inputs(3).forces = Eigen::Matrix<double, 3, Eigen::Dynamic>::Map(msg.inputs.rr.forces.data.data(), 3, n_steps);
        
        solution.inputs(3).stance_vectors = Eigen::Matrix<double, 3, Eigen::Dynamic>::Map(msg.inputs.rr.stance_vectors.data.data(), 3, n_steps);
        
        solution.inputs(3).stance_indices.stance = Eigen::VectorXi::Map(msg.inputs.rr.stance_indices.data(), n_steps);

        solution.inputs(3).stance_indices.stance_diff = Eigen::VectorXi::Map(msg.inputs.rr.d_stance_indices.data(), n_steps);
    }

    return solution;
}

void ConvexMpcSolver::RequestCallback(const convex_mpc_controller::solveMpcRequestConstPtr& request_msg){
    
    Eigen::Matrix<double, n_states_, 1> x0(request_msg->x0.data());

    double t0 = request_msg->t0;

    Eigen::Vector2d vel_des(request_msg->vel_des.data());

    double yaw_rate_des = request_msg->yaw_rate_des;

    Eigen::Array<Eigen::Vector3d, 4, 1> init_stance_pos;

    init_stance_pos(FootType::fl) = Eigen::Map<const Eigen::Vector3d>(request_msg->init_stance_pos.fl_pos.data());
    
    init_stance_pos(FootType::fr) = Eigen::Map<const Eigen::Vector3d>(request_msg->init_stance_pos.fr_pos.data());

    init_stance_pos(FootType::rl) = Eigen::Map<const Eigen::Vector3d>(request_msg->init_stance_pos.rl_pos.data());

    init_stance_pos(FootType::rr) = Eigen::Map<const Eigen::Vector3d>(request_msg->init_stance_pos.rr_pos.data());

    Eigen::Array4i init_contact_state;

    init_contact_state = Eigen::Array<uint8_t, 4, 1>::Map(request_msg->init_stance_pos.contact_state.data()).cast<int>();

    if(not has_received_z_){
        has_received_z_ = true;
        z_des_ = x0(2);
        p_des_ = x0.topRows(3);
    }

    convex_mpc_controller::solveMpcResponse response_msg = Solve(t0, x0, init_stance_pos, init_contact_state, z_des_, vel_des, yaw_rate_des);

    ROS_INFO_STREAM("Convex MPC Solver: Finished Solving. Ready to publish.");

    p_mpc_pub_->publish(response_msg);
}

Eigen::Matrix<double, ConvexMpcSolver::n_states_, Eigen::Dynamic> ConvexMpcSolver::GetDerivativeVectors(const Eigen::Matrix<double, n_states_, Eigen::Dynamic> &x, const Eigen::Matrix<double, 3*n_legs_, Eigen::Dynamic> &f, const Eigen::Array<Eigen::Vector3d, 4, Eigen::Dynamic> &r_b_feet_w, const Eigen::VectorXd &yaw_des){
    Eigen::Matrix<double, n_states_, Eigen::Dynamic> dx(n_states_, n_steps_);
    
    Eigen::Matrix<double, n_states_, n_states_> A;
    Eigen::Matrix<double, n_states_, 3*n_legs_> B;
    for(int i = 0; i < n_steps_ ; ++i){
        A = GetA(yaw_des(i));
        B = GetB(r_b_feet_w.col(i), yaw_des(i));
        dx.col(i) = A*x.col(i) + B*f.col(i) + g_ext_;
    }

    return dx;
}

void ConvexMpcSolver::UpdateStatistics(std::chrono::high_resolution_clock::time_point chrono_t0, std::chrono::high_resolution_clock::time_point chrono_t1){
    statistics_.latest_solve_time_musec = std::chrono::duration_cast<std::chrono::microseconds>(chrono_t1 - chrono_t0).count();
    
    statistics_.latest_solve_time_sec = std::chrono::duration<double>(chrono_t1 - chrono_t0).count();

    statistics_.average_solve_time = (statistics_.iterations*statistics_.average_solve_time + statistics_.latest_solve_time_sec)/(statistics_.iterations + 1);

    ++(statistics_.iterations);

    if(statistics_.latest_solve_time_sec > statistics_.max_solve_time){statistics_.max_solve_time = statistics_.latest_solve_time_sec;}

    if(statistics_.latest_solve_time_sec < statistics_.min_solve_time){statistics_.min_solve_time = statistics_.latest_solve_time_sec;}
}

void ConvexMpcSolver::PrintStatistics()
{
    ROS_INFO_STREAM("Convex MPC Solver: Time spent solving was " << std::to_string(statistics_.latest_solve_time_musec) << " microseconds (" << statistics_.latest_solve_time_sec << " seconds)."
    << std::endl << "Average solve time is " << statistics_.average_solve_time << " seconds. Minimum solve time is " << statistics_.min_solve_time << ". Maximum solve time is " << statistics_.max_solve_time << ".");

}



}//ConvexMpc