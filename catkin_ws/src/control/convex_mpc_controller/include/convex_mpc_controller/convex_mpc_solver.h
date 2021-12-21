#pragma once

#include<chrono>
#include<string>
#include<cmath>
#include<limits>

// custom includes
#include <convex_mpc_controller/stance.h>
#include <convex_mpc_controller/local_eigen_extensions.h>
#include <convex_mpc_controller/solveMpcRequest.h>
#include <convex_mpc_controller/solveMpcResponse.h>
// Eigen
#include <Eigen/Core>
#include <unsupported/Eigen/MatrixFunctions>

#include<kindr/Core>

// ROS
#include<ros/ros.h>
#include<eigen_conversions/eigen_msg.h>

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

namespace ConvexMpc{

class ConvexMpcSolver {

    struct OptimizationVariables{
        drake::solvers::MatrixXDecisionVariable states;

        drake::solvers::MatrixXDecisionVariable forces;
    };

    public:

    static const int n_states_ = 12;

    static const int n_legs_ = 4;

    struct Solution{
        bool solved;
        
        struct States {
            Eigen::Matrix<double, n_states_, Eigen::Dynamic> x;

            Eigen::Matrix<double, n_states_, Eigen::Dynamic> dx;
        };

        struct FootInput {
            LegStanceIndices stance_indices;

            Eigen::Matrix<double, 3, Eigen::Dynamic> forces;

            Eigen::Matrix<double, 3, Eigen::Dynamic> stance_vectors;
        };
        
        States states;

        Eigen::VectorXd t;

        Eigen::Array<FootInput, 4, 1> inputs;        
    };

    struct SolveStatistics{
        int iterations = 0;
        int latest_solve_time_musec;
        double latest_solve_time_sec;
        double average_solve_time = 0;
        double min_solve_time = std::numeric_limits<double>::infinity();
        double max_solve_time = 0;
    };
    ConvexMpcSolver(
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
        ros::Publisher *p_mpc_pub);

    ConvexMpcSolver(
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
        ros::Publisher *p_mpc_pub);

    ConvexMpcSolver(
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
        ros::Publisher *p_mpc_pub);
    
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
        const double &z_des,
        const Eigen::VectorXd &yaw_des,
        const Eigen::Vector2d &vel_des,
        const double &yaw_rate_des);
    
    OptimizationVariables InitializeOptimizationVariables(drake::solvers::MathematicalProgram &prog);

    void AddDynamicsConstraint(int i, const Eigen::Array<Eigen::Vector3d, 4, 1> &r_b_feet_w, const double &yaw, OptimizationVariables &opt_vars, drake::solvers::MathematicalProgram &prog);

    void AddAllDynamicsConstraints(
        const Eigen::Array<Eigen::Vector3d, 4, Eigen::Dynamic> &r_b_feet_w,
        const Eigen::Vector2d &vel_des,
        const Eigen::VectorXd &yaw_des,
        OptimizationVariables &opt_vars,
        drake::solvers::MathematicalProgram &prog);

    void AddStanceConstraints(const StanceIndices &stance_indices, OptimizationVariables &opt_vars, drake::solvers::MathematicalProgram &prog);

    void AddForceConstraints(const StanceIndices &stance_indices, OptimizationVariables &opt_vars, drake::solvers::MathematicalProgram &prog);

    void AddInitialConditionConstraint(const Eigen::Matrix<double, 12, 1> &x0, OptimizationVariables &opt_vars, drake::solvers::MathematicalProgram &prog);

    void AddStateBounds(const Eigen::Matrix<double, 12, 1> &x0, const double &z_des, const Eigen::Vector2d &vel_des, const double &yaw_rate_des, OptimizationVariables &opt_vars, drake::solvers::MathematicalProgram &prog);

    void AddForceCost(OptimizationVariables &opt_vars, drake::solvers::MathematicalProgram &prog);

    void AddReferenceCost(
        const Eigen::Matrix<double, 12, Eigen::Dynamic> &reference_trajectory,
        OptimizationVariables &opt_vars,
        drake::solvers::MathematicalProgram &prog);

    convex_mpc_controller::solveMpcResponse Solve(
        const double &t0,
        const Eigen::Matrix<double, 12, 1> &x0,
        const Eigen::Array<Eigen::Vector3d, 4, 1> &init_stance_pos,
        const Eigen::Array4i &init_contact_state,
        const double &z_des,
        const Eigen::Vector2d &vel_des,
        const double &yaw_rate_des);
    
    convex_mpc_controller::solveMpcResponse SolutionToRosMsg(
        drake::solvers::MathematicalProgramResult &result,
        const double &t0,
        const StanceIndices &stance_indices,
        Eigen::Array<Eigen::Vector3d, 4, Eigen::Dynamic> &stance_vectors,
        const Eigen::VectorXd &yaw_des,
        OptimizationVariables &opt_vars);

    static Solution RosMsgToSolution(convex_mpc_controller::solveMpcResponse msg, bool row_major = true);

    void RequestCallback(const convex_mpc_controller::solveMpcRequestConstPtr& request_msg);

    Eigen::Matrix<double, n_states_, Eigen::Dynamic> GetDerivativeVectors(const Eigen::Matrix<double, n_states_, Eigen::Dynamic> &x, const Eigen::Matrix<double, 3*n_legs_, Eigen::Dynamic> &f, const Eigen::Array<Eigen::Vector3d, 4, Eigen::Dynamic> &r_b_feet_w, const Eigen::VectorXd &yaw_des);

    void UpdateStatistics(std::chrono::high_resolution_clock::time_point chrono_t0, std::chrono::high_resolution_clock::time_point chrono_t1);

    void PrintStatistics();

    private:

    double mass_;
    Eigen::Matrix3d J_b_;
    double mu_;
    Eigen::Matrix<double, 12, 1> g_ext_;
    Eigen::Vector3d r_b_to_fl_ref_in_b_;
    double delta_t_;
    double T_sim_;
    double T_gait_;
    Eigen::Matrix<double, 6, 3> A_forces_;
    Eigen::Matrix<double, 6, 1> b_forces_;
    Eigen::Matrix<double, n_states_, n_states_> cost_reference_;
    Eigen::Matrix<double, 3*n_legs_, 3*n_legs_> cost_force_;
    Eigen::VectorXd tk_;
    int n_steps_;
    GaitType gait_type_;
    StanceInfo stance_info_;
    ros::Publisher *p_mpc_pub_;
    double z_des_;
    Eigen::Vector3d p_des_;
    bool has_received_z_ = false;
    SolveStatistics statistics_;
};

} // ConvexMpc