//TODO Remove
#include "ros/ros.h"

#include <hierarchical_optimization_controller/hierarchical_optimization_controller.h>

void testHLSO(HierarchicalOptimizationControl &_ho_controller)
{
    Eigen::Matrix<double, 1, 2> A1;
    Eigen::Matrix<double, 1, 1> b1;

    Eigen::Matrix<double, 2, 2> A2;
    Eigen::Matrix<double, 2, 1> b2;

    Eigen::Matrix<double, 1, 2> A3;
    Eigen::Matrix<double, 1, 1> b3;

    A1 << 1, 1;

    b1 << 10;

    A2 << 1, 0,
          0, 0;

    b2 << 16,
          0;

    A3 << 0, 1;
          

    b3 << -5;

    Eigen::Matrix<Eigen::MatrixXd, 3, 1> A;
    Eigen::Matrix<Eigen::Matrix<double, Eigen::Dynamic, 1>, 3, 1> b;

    A(0) = A1;
    b(0) = b1;
    A(1) = A2;
    b(1) = b2;
    A(2) = A3;
    b(2) = b3;
    
    Eigen::MatrixXd x_opt = _ho_controller.HierarchicalLeastSquareOptimization(A, b, 1);

    ROS_INFO_STREAM("x_opt HLSO: \n" << x_opt);
}

void testHQPO(HierarchicalOptimizationControl &_ho_controller)
{
    Eigen::MatrixXd A1;
    Eigen::MatrixXd b1;

    Eigen::MatrixXd A2;
    Eigen::MatrixXd b2;

    Eigen::MatrixXd A3;
    Eigen::MatrixXd b3;

    Eigen::MatrixXd A4;
    Eigen::MatrixXd b4;

    Eigen::MatrixXd A5;
    Eigen::MatrixXd b5;


    A1.resize(2, 2);
    b1.resize(2, 1);
    A2.resize(1, 2);
    b2.resize(1, 1);
    A3.resize(1, 2);
    b3.resize(1, 1);
    A4.resize(2, 2);
    b4.resize(2, 1);
    A5.resize(1, 2);
    b5.resize(1, 1);

    A1 << 1, 1,
         -1,-1;

    b1 << 10,
          -5;

    A2 << -1, 1;

    b2 << 5;

    A3 << 1, -1;

    b3 << 5;
    
    A4 << 1, 0,
          0, 1;

    b4 << 15,
          15;

    A5 << 1, 0;

    b5 << 100;


    HierarchicalOptimizationControl::Task t1;
    HierarchicalOptimizationControl::Task t2;
    HierarchicalOptimizationControl::Task t3;
    HierarchicalOptimizationControl::Task t4;
    HierarchicalOptimizationControl::Task t5;

    t1.A_ineq = A1;
    t1.b_ineq = b1;
    t1.has_eq_constraint = false;
    t1.has_ineq_constraint = true;

    t2.A_ineq = A2;
    t2.b_ineq = b2;
    t2.has_eq_constraint = false;
    t2.has_ineq_constraint = true;

    t3.A_ineq = A3;
    t3.b_ineq = b3;
    t3.has_eq_constraint = false;
    t3.has_ineq_constraint = true;

    t4.A_eq = A4;
    t4.b_eq = b4;
    t4.has_eq_constraint = true;
    t4.has_ineq_constraint = false;

    t5.A_eq = A5;
    t5.b_eq = b5;
    t5.has_eq_constraint = true;
    t5.has_ineq_constraint = false;

    std::vector<HierarchicalOptimizationControl::Task> tasks;
    tasks.push_back(t5);
    tasks.push_back(t4);
    tasks.push_back(t1);
    tasks.push_back(t2);
    tasks.push_back(t3);

    Eigen::VectorXd x_opt = _ho_controller.HierarchicalQPOptimization(2, 
                                                                      tasks, 
                                                                      HierarchicalOptimizationControl::SolverType::UNSPECIFIED,
                                                                      3);

    ROS_INFO_STREAM("x_opt HQPO: \n" << x_opt);
}

void testQPSolver(HierarchicalOptimizationControl &_ho_controller)
{
    Eigen::Matrix2d Q;
    Eigen::Vector2d c;

    Eigen::Matrix<double, 2, 2> A_eq;
    Eigen::Matrix<double, 2, 1> b_eq;

    Eigen::Matrix<double, 1, 2> A_ineq;
    Eigen::Matrix<double, 1, 1> b_ineq;

    Q.setIdentity();
    c.setZero();

    A_ineq << 1, -1;
    b_ineq << -10;

    A_eq << 1, 0;

    b_eq << 5;

    Eigen::VectorXd sol;

    _ho_controller.SolveQP(Q,
                           c,
                           A_eq,
                           b_eq,
                           A_ineq,
                           b_ineq,
                           sol);

    ROS_INFO_STREAM("x_opt: \n" << sol);
}

void testQPSolver2(HierarchicalOptimizationControl &_ho_controller)
{
    Eigen::Matrix2d Q;
    Eigen::Vector2d c;

    Eigen::Matrix<double, 2, 2> A_eq;
    Eigen::Matrix<double, 2, 1> b_eq;

    Eigen::MatrixXd A_ineq;
    Eigen::MatrixXd b_ineq;

    Q << 1, 0,
         0, 0;

    c << 1000,
         100;

    A_ineq.setZero();
    b_ineq.setZero();

    Eigen::VectorXd sol;

    _ho_controller.SolveQP(Q,
                           c,
                           A_ineq,
                           b_ineq,
                           sol,
                           HierarchicalOptimizationControl::SolverType::UNSPECIFIED,
                           1);

    ROS_INFO_STREAM("x_opt: \n" << sol);
}

void testQPSolver3(HierarchicalOptimizationControl &_ho_controller)
{

    Eigen::Matrix2d Q;
    Eigen::Vector2d c;

    Eigen::Matrix<double, 2, 2> A_eq;
    Eigen::Matrix<double, 2, 1> b_eq;

    Eigen::Matrix2d A;
    Eigen::Vector2d lb;
    Eigen::Vector2d ub;

    Q << 1, 0,
         0, 1;

    c << -1000,
         -100;


    A << 1, 0,
         0, 1;

    lb << -math_utils::INF,
          -math_utils::INF;

    ub << math_utils::INF,
          math_utils::INF;

    Eigen::VectorXd sol;

    _ho_controller.SolveQP(Q,
                           c,
                           A,
                           lb,
                           ub,
                           sol,
                           HierarchicalOptimizationControl::SolverType::OSQP,
                           1);

    ROS_INFO_STREAM("x_opt: \n" << sol);
}

void testDrake()
{
    // Create an empty Mathematical Program
    drake::solvers::MathematicalProgram prog;

    // Create an empty Mathematical Program Result
    drake::solvers::MathematicalProgramResult result;

    // Add decision variables
    Eigen::Matrix<drake::solvers::DecisionVariable, Eigen::Dynamic, 1> x = prog.NewContinuousVariables(10, "x");
}