#include <include/collocation_optimization_trajectory_planner/collocation_optimization_trajectory_planner.h>

CollocationOptimizationTrajectoryPlanner::CollocationOptimizationTrajectoryPlanner(int domain_count, Eigen::VectorXd cardinal_point_counts)
{
    return;
}

void CollocationOptimizationTrajectoryPlanner::AddStateCollocationConstraintAtNode(int node_idx)
{
    int prev_idx, next_idx;

    double delta_t;

    Eigen::Matrix<drake::solvers::DecisionVariable, Eigen::Dynamic, 1> x_prev(2*this->kinematics.nCoord);

    Eigen::Matrix<drake::solvers::DecisionVariable, Eigen::Dynamic, 1> x_current(2*this->kinematics.nCoord);

    Eigen::Matrix<drake::solvers::DecisionVariable, Eigen::Dynamic, 1> x_next(2*this->kinematics.nCoord);

    Eigen::Matrix<drake::solvers::DecisionVariable, Eigen::Dynamic, 1> dx_prev(2*this->kinematics.nCoord);

    Eigen::Matrix<drake::solvers::DecisionVariable, Eigen::Dynamic, 1> dx_next(2*this->kinematics.nCoord);

    prev_idx = node_idx - 1;

    next_idx = node_idx + 1;

    delta_t = this->t(next_idx) - this->t(prev_idx);

    x_prev << this->q.col(prev_idx), this->dq.col(prev_idx);

    x_current << this->q.col(node_idx), this->dq.col(node_idx);

    x_next << this->q.col(next_idx), this->dq.col(next_idx);

    dx_prev << this->dq.col(prev_idx), this->ddq.col(prev_idx);

    dx_next << this->dq.col(next_idx), this->ddq.col(next_idx);

    this->prog.AddLinearConstraint(x_current - (1/2)*(x_next + x_prev) - (delta_t/8)*(dx_prev - dx_next) == Eigen::VectorXd::Zero(2*this->kinematics.nCoord));
}

void CollocationOptimizationTrajectoryPlanner::AddSlopeCollocationConstraintAtNode(int node_idx)
{
    int prev_idx, next_idx;

    double delta_t;

    Eigen::Matrix<drake::solvers::DecisionVariable, Eigen::Dynamic, 1> x_prev(2*this->kinematics.nCoord);

    Eigen::Matrix<drake::solvers::DecisionVariable, Eigen::Dynamic, 1> x_next(2*this->kinematics.nCoord);

    Eigen::Matrix<drake::solvers::DecisionVariable, Eigen::Dynamic, 1> dx_prev(2*this->kinematics.nCoord);

    Eigen::Matrix<drake::solvers::DecisionVariable, Eigen::Dynamic, 1> dx_current(2*this->kinematics.nCoord);

    Eigen::Matrix<drake::solvers::DecisionVariable, Eigen::Dynamic, 1> dx_next(2*this->kinematics.nCoord);

    prev_idx = node_idx - 1;

    next_idx = node_idx + 1;

    delta_t = this->t(next_idx) - this->t(prev_idx);

    x_prev << this->q.col(prev_idx), this->dq.col(prev_idx);

    x_next << this->q.col(next_idx), this->dq.col(next_idx);

    dx_prev << this->dq.col(prev_idx), this->ddq.col(prev_idx);

    dx_current << this->dq.col(node_idx), this->ddq.col(node_idx);

    dx_next << this->dq.col(next_idx), this->ddq.col(next_idx);

    this->prog.AddLinearConstraint(dx_current - 3.0/(2*delta_t)*(x_next - x_prev) + (1/4)*(dx_prev + dx_next) == Eigen::VectorXd::Zero(2*this->kinematics.nCoord));
}

void CollocationOptimizationTrajectoryPlanner::AddDynamicConstraintAtNode(int node_idx)
{
    drake::solvers::
}

void CollocationOptimizationTrajectoryPlanner::AddHolonomicConstraintAtNode(int node_idx)
{
    return;
}

void CollocationOptimizationTrajectoryPlanner::AddVirtualConstraintAtNode(int node_idx)
{
    return;
}

void CollocationOptimizationTrajectoryPlanner::AddEOMConstraintAtNode(int node_idx)
{
    return;
}

void CollocationOptimizationTrajectoryPlanner::AddAdmissibilityConstraintAtNode(int node_idx)
{
    return;
}

void CollocationOptimizationTrajectoryPlanner::AddCostAtDomain(int domain_idx)
{
    return;
}

void CollocationOptimizationTrajectoryPlanner::AddCost()
{
    return;
}