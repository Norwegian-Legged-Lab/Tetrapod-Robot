#pragma once

// custom includes
#include <convex_mpc_controller/stance.h>

// Eigen
#include <Eigen/Core>

#include<kindr/Core>

// Drake C++ Toolbox
#include <drake/common/symbolic.h>
#include <drake/solvers/mathematical_program.h>
#include <drake/solvers/solve.h>
#include <drake/solvers/osqp_solver.h>
#include <drake/solvers/equality_constrained_qp_solver.h>
#include <drake/solvers/clp_solver.h>
#include <drake/solvers/scs_solver.h>
#include <drake/solvers/snopt_solver.h>
#include "drake/solvers/osqp_solver.h"
#include "drake/solvers/gurobi_solver.h"

namespace ConvexMpcController{

class ConvexMpcSolver {
    struct OptimizationVariables{
        drake::solvers::MatrixXDecisionVariable states;

        drake::solvers::MatrixXDecisionVariable forces;
    };

    struct Solution{
        
    };

    public:
    ConvexMpcSolver(
        double mass,
        Eigen::Matrix3d J_b,
        double mu,
        Eigen::Vector3d r_b_to_fl_ref_in_b,
        double delta_t,
        double T_sim,
        double T_gait,
        double cost_reference,
        double cost_force,
        GaitType gait_type);
    
    Eigen::MatrixXd GetA(const double &yaw);

    Eigen::MatrixXd GetB(const Eigen::Array<Eigen::Vector3d, 4, 1> &r_b_feet_w, const double &yaw);

    Eigen::Matrix2Xd GetBodyXYPositions(const Eigen::Vector2d &p0, const Eigen::Vector2d &vel_des, const Eigen::VectorXd &yaw_des);
    
    Eigen::Array<Eigen::Vector3d, 4, Eigen::Dynamic> GetStanceVectors(const StanceIndices &stance_indices,
    const Eigen::Matrix2Xd &body_xy_positions,
    const Eigen::VectorXd &yaw_des,
    const Eigen::Vector2d &vel_des,
    const Eigen::Array<Eigen::Vector3d, 4, 1> &init_stance_pos,
    const double &body_height);

    Eigen::Matrix<double, 12, Eigen::Dynamic> GetReferenceTrajectory(
        const Eigen::Matrix<double, 12, 1> &x0,
        const Eigen::Matrix2Xd &body_xy_positions,
        const Eigen::VectorXd &yaw_des,
        const Eigen::Vector2d &vel_des,
        const double &yaw_rate_des);
    
    void InitializeOptimizationVariables();

    void AddDynamicsConstraint(int i, const Eigen::Array<Eigen::Vector3d, 4, 1> &r_b_feet_w, const double &yaw);

    void AddAllDynamicsConstraints(
        const Eigen::Array<Eigen::Vector3d, 4, Eigen::Dynamic> &r_b_feet_w,
        const Eigen::Vector2d &vel_des,
        const Eigen::VectorXd &yaw_des);

    void AddStanceConstraints(const StanceIndices &stance_indices);

    void AddForceConstraints(const StanceIndices &stance_indices);

    void AddInitialConditionConstraint(const Eigen::Matrix<double, 12, 1> &x0);

    void AddTorqueCost();

    void AddReferenceCost(const Eigen::Matrix<double, 12, Eigen::Dynamic> &reference_trajectory);

    Solution Solve(
        const double &t0,
        const Eigen::Matrix<double, 12, 1> &x0,
        const Eigen::Array<Eigen::Vector3d, 4, 1> &init_stance_pos,
        const Eigen::Vector2d &vel_des,
        const double &yaw_rate_des);
    
    private:

    double mass_;
    Eigen::Matrix3d J_b_;
    double mu_;
    Eigen::Matrix<double, 12, 1> g_ext_;
    Eigen::Vector3d r_b_to_fl_ref_in_b_;
    double delta_t_;
    double T_sim_;
    double T_gait_;
    double cost_reference_;
    double cost_force_;
    Eigen::Matrix<double, 6, 3> A_forces_;
    Eigen::Matrix<double, 6, 1> b_forces_;
    static const int n_states_ = 12;
    static const int n_legs_ = 4;
    Eigen::VectorXd tk_;
    int n_steps_;
    GaitType gait_type_;
    StanceInfo stance_info_;
    OptimizationVariables opt_vars_;
    drake::solvers::MathematicalProgram prog_;
    
};

} // ConvexMpcController