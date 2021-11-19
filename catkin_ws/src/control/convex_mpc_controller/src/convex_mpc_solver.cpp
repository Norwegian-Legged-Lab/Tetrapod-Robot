#include<convex_mpc_controller/convex_mpc_solver.h>

namespace ConvexMpcController{

ConvexMpcSolver::ConvexMpcSolver(
    double mass,
    Eigen::Matrix3d J_b,
    double mu,
    Eigen::Vector3d r_b_to_fl_ref_in_b,
    double delta_t,
    double T_sim,
    double T_gait,
    double cost_reference,
    double cost_force,
    GaitType gait_type)
{
    mass_ = mass;
    J_b_ = J_b;
    mu_ = mu;
    r_b_to_fl_ref_in_b_ = r_b_to_fl_ref_in_b;
    delta_t_ = delta_t;
    T_sim_ = T_sim;
    T_gait_ = T_gait;
    cost_reference_ = cost_reference;
    cost_force_ = cost_force_;
    gait_type_ = gait_type;
    stance_info_ = getStanceInfo(gait_type);
    tk_ = Eigen::Extensions::Arange(0, T_sim, delta_t);
    n_steps_ = tk_.size();
    //This should really be static const or something but found no elegant way to initialize in a const-friendly way
    g_ext_.setZero();
    g_ext_.segment(6, 3) << 0, 0, -9.81;

    A_forces_ << 0, 0, 1,
                0, 0, 1,
                1, 0, -mu_,
                -1, 0, -mu,
                0, 1, -mu,
                0, -1, -mu;
    
    double f_min = 0;

    double f_max = 10000;

    b_forces_ << f_min, f_max, Eigen::Vector4d::Zero();

    InitializeOptimizationVariables();
}

void ConvexMpcSolver::InitializeOptimizationVariables(){
    opt_vars_.states = prog_.NewContinuousVariables(n_states_, n_steps_, "x");

    opt_vars_.forces = prog_.NewContinuousVariables(3*n_legs_, n_steps_, "f");
}


Eigen::MatrixXd ConvexMpcSolver::GetA(const double &yaw){
    Eigen::MatrixXd A = Eigen::MatrixXd::Zero(12, 12);

    A.block(0, 6, 3, 3).setIdentity();

    A.block(3, 9, 3, 3) = Eigen::AngleAxisd(yaw, Eigen::Vector3d::UnitZ()).toRotationMatrix();

    return A;
}

Eigen::MatrixXd ConvexMpcSolver::GetB(const Eigen::Array<Eigen::Vector3d, 4, 1> &r_b_feet_w, const double &yaw){
    // Note: more of a coincidence that the B-matrix is square, not so by necessity. Nor does it make the system fully actuated in this case
    Eigen::MatrixXd B = Eigen::MatrixXd::Zero(12, 12);
    Eigen::Matrix3d rot_z = Eigen::AngleAxisd(yaw, Eigen::Vector3d::UnitZ()).toRotationMatrix();
    Eigen::Matrix3d J_w = rot_z*J_b_*rot_z.transpose();

    for(int i = 0; i < r_b_feet_w.size(); ++i){
        B.block(6, 3*i, 3, 3) = Eigen::Matrix3d::Identity()/mass_;
        B.block(9, 3*i, 3, 3) = J_w.llt().solve(-Eigen::Matrix3d::Identity().colwise().cross(r_b_feet_w(i)));
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
        body_xy_positions.col(i) = body_xy_positions.col(i - 1) + vel_rot;
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

    for (int i = 0; i < n_legs_; ++i){
        if(stance_indices(i).stance(0) == 1){
            stances(i, 0) = init_stance_pos(i);
        }
        Eigen::Vector3d r_landing = r_b_to_fl_ref_in_b_;

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
                    stances(i, j) = r_landing;
                } else{
                    stances(i, j) = stances(i, j - 1);
                    stances(i, j).head(2) += body_xy_positions.col(j) - body_xy_positions.col(j - 1);
                }
            }
        }
    }
    return stances;
}

Eigen::Matrix<double, 12, Eigen::Dynamic> ConvexMpcSolver::GetReferenceTrajectory(
    const Eigen::Matrix<double, 12, 1> &x0,
    const Eigen::Matrix2Xd &body_xy_positions,
    const Eigen::VectorXd &yaw_des,
    const Eigen::Vector2d &vel_des,
    const double &yaw_rate_des)
{
    Eigen::Matrix<double, 12, Eigen::Dynamic> reference_trajectory(12, n_steps_);

    reference_trajectory.setZero();

    reference_trajectory.topRows(6).colwise() = x0.head(6);
    
    reference_trajectory.topRows(2) = body_xy_positions;

    reference_trajectory.row(5) = yaw_des;

    reference_trajectory.middleRows(6, 2).colwise() = vel_des;
    
    reference_trajectory.row(11).setConstant(yaw_rate_des);

    return reference_trajectory;
}

void ConvexMpcSolver::AddDynamicsConstraint(int i, const Eigen::Array<Eigen::Vector3d, 4, 1> &r_b_feet_w, const double &yaw){
    Eigen::MatrixXd A_discrete = Eigen::Matrix3d::Identity() + delta_t_*GetA(yaw);
    
    Eigen::MatrixXd B_discrete = delta_t_*GetB(r_b_feet_w, yaw);

    prog_.AddLinearConstraint(opt_vars_.states.col(i + 1) == A_discrete*opt_vars_.states.col(i) + B_discrete*opt_vars_.forces.col(i) + g_ext_);
}


void ConvexMpcSolver::AddAllDynamicsConstraints(
    const Eigen::Array<Eigen::Vector3d, 4, Eigen::Dynamic> &r_b_feet_w,
    const Eigen::Vector2d &vel_des, const Eigen::VectorXd &yaw_des)
{
    for (int i = 0; i < n_steps_ - 1; ++i){
        AddDynamicsConstraint(i, r_b_feet_w.col(i), yaw_des(i));
    }
}


void ConvexMpcSolver::AddStanceConstraints(const StanceIndices &stance_indices){
    for (int i = 0; i < stance_indices.size(); ++i){
        for (int j = 0; j < n_steps_; ++j){
            //if the foot i in question is not a stance foot at ts j
            if(stance_indices(i).stance(j) == 0){
                prog_.AddBoundingBoxConstraint(Eigen::Vector3d::Zero(), Eigen::Vector3d::Zero(), opt_vars_.forces.block(3*i, j, 3, 1));
            }
        }
    }
}

void ConvexMpcSolver::AddForceConstraints(const StanceIndices &stance_indices){
    for (int i = 0; i < stance_indices.size(); ++i){
        for (int j = 0; j < n_steps_; ++j){
            if(stance_indices(i).stance(j) == 1){
                prog_.AddLinearConstraint(A_forces_*opt_vars_.forces.block(3*i, j, 3, 1) <= b_forces_);
            }
        }
    }
}

void ConvexMpcSolver::AddInitialConditionConstraint(const Eigen::Matrix<double, 12, 1> &x0){
    prog_.AddBoundingBoxConstraint(x0, x0, opt_vars_.states.col(0));
}

void ConvexMpcSolver::AddTorqueCost(){
    Eigen::Matrix<double, 3*n_legs_, 3*n_legs_> Q = cost_force_*Eigen::Matrix<double, 3*n_legs_, 3*n_legs_>::Identity();
    for (int i = 0; i < n_steps_; ++i){
        prog_.AddQuadraticCost(Q, Eigen::Matrix<double, 3*n_legs_, 1>::Zero(),opt_vars_.forces.col(i));
    }
}

void ConvexMpcSolver::AddReferenceCost(const Eigen::Matrix<double, 12, Eigen::Dynamic> &reference_trajectory){
    Eigen::Matrix<double, n_states_, n_states_> Q = cost_reference_*Eigen::Matrix<double, n_states_, n_states_>::Identity();
    for (int i = 0; i < n_steps_; ++i){
        prog_.AddQuadraticCost(Q, -cost_reference_*reference_trajectory.col(i), opt_vars_.states.col(i));
    }
}

ConvexMpcSolver::Solution ConvexMpcSolver::Solve(
    const double &t0,
    const Eigen::Matrix<double, 12, 1> &x0,
    const Eigen::Array<Eigen::Vector3d, 4, 1> &init_stance_pos,
    const Eigen::Vector2d &vel_des,
    const double &yaw_rate_des)
{
    Eigen::VectorXd yaw_des = tk_*yaw_rate_des;

    yaw_des.rowwise() += Eigen::Matrix<double, 1, 1>::Constant(x0(5));

    Eigen::Matrix2Xd body_xy_positions = GetBodyXYPositions(x0.head(2), vel_des, yaw_des);

    Eigen::Matrix<double, 12, Eigen::Dynamic> reference_trajectory = GetReferenceTrajectory(x0, body_xy_positions, yaw_des, vel_des, yaw_rate_des);

    StanceIndices stance_indices = getStanceIndices(stance_info_, t0, T_sim_, T_gait_, delta_t_);

    Eigen::Array<Eigen::Vector3d, 4, Eigen::Dynamic> stance_vectors = GetStanceVectors(stance_indices, body_xy_positions, yaw_des, vel_des, init_stance_pos, x0(2));

    AddAllDynamicsConstraints(stance_vectors, vel_des, yaw_des);

    AddStanceConstraints(stance_indices);
    
    AddForceConstraints(stance_indices);

    AddInitialConditionConstraint(x0);

    AddTorqueCost();

    AddReferenceCost(reference_trajectory);

    drake::solvers::GurobiSolver solver;
    
    drake::solvers::MathematicalProgramResult result = solver.Solve(prog_);

    Solution s;
    return s;
}



}//ConvexMpcController