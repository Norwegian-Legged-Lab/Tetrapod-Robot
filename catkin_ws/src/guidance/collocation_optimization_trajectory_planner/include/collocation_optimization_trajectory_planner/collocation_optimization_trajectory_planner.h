#pragma once

// C++ Standard Library
#include <cmath>
#include <thread>

// ROS
#include "ros/ros.h" 
#include "ros/callback_queue.h"

// ROS messages
#include "std_msgs/Int8MultiArray.h"
#include "std_msgs/Float64MultiArray.h"
#include "sensor_msgs/JointState.h"

// ROS Package Libraries
#include <kinematics/kinematics.h>
#include <debug_utils/debug_utils.h>
#include <math_utils/Core>

// Eigen
#include <Eigen/Core>


// Drake C++ Toolbox
#include <drake/common/symbolic.h>
#include <drake/solvers/mathematical_program.h>
#include <drake/solvers/solve.h>
#include <drake/solvers/osqp_solver.h>
#include <drake/solvers/equality_constrained_qp_solver.h>
#include <drake/solvers/clp_solver.h>
#include <drake/solvers/scs_solver.h>
#include <drake/solvers/snopt_solver.h>

class CollocationOptimizationTrajectoryPlanner{
    // Member functions
    public: CollocationOptimizationTrajectoryPlanner(int domain_count, Eigen::VectorXd cardinal_point_counts) ; //TODO: fill out necessary parameters to configure

    public: void AddStateCollocationConstraintAtNode(int node_idx);
    
    public: void AddSlopeCollocationConstraintAtNode(int node_idx);

    public: void AddDynamicConstraintAtNode(int node_idx);

    public: void AddHolonomicConstraintAtNode(int node_idx);

    public: void AddVirtualConstraintAtNode(int node_idx);

    public: void AddEOMConstraintAtNode(int node_idx);

    public: void AddAdmissibilityConstraintAtNode(int node_idx);

    public: void AddCostAtDomain(int domain_idx)

    public: void AddCost();
    // Member variables
    Kinematics kinematics;

    drake::solvers::MathematicalProgram prog;

    drake::solvers::MatrixXDecisionVariable q;

    drake::solvers::MatrixXDecisionVariable dq;

    drake::solvers::MatrixXDecisionVariable ddq;

    drake::solvers::MatrixXDecisionVariable u;
    
    drake::solvers::MatrixXDecisionVariable lambda;
    
    Eigen::VectorXd t; //TODO: Check if this should actually be decision variables, either free or a function of the period of each domain
}