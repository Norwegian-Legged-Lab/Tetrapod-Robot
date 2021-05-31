
/*******************************************************************/
/*    AUTHOR: Paal Arthur S. Thorseth                              */
/*    ORGN:   Dept of Eng Cybernetics, NTNU Trondheim              */
/*    FILE:   hierarchical_optimization_controller_node.cpp        */
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

    Eigen::VectorXd x_opt = _ho_controller.HierarchicalQPOptimization(2, tasks, 3);

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

    Q << 1, 1,
         1, 1;

    c << -10,
         -10;

    A_ineq.setZero();
    b_ineq.setZero();

    Eigen::VectorXd sol;

    _ho_controller.SolveQP(Q,
                           c,
                           A_ineq,
                           b_ineq,
                           sol);

    ROS_INFO_STREAM("x_opt: \n" << sol);
}

void testHO(HierarchicalOptimizationControl &_ho_controller)
{
    Eigen::Vector3d desired_base_pos;
    Eigen::Matrix<Eigen::Vector3d, 4, 1> desired_f_pos;

    desired_base_pos << 0,
                        0,
                        0;
    desired_f_pos(0) << 0,
                        0,
                        0;
    desired_f_pos(1) << 0,
                        0,
                        0;
    desired_f_pos(2) << 0,
                        0,
                        0;
    desired_f_pos(3) << 0,
                        0,
                        0;
    
    Eigen::Matrix<double, 18, 1> tau = _ho_controller.HierarchicalOptimization(desired_base_pos, 
                                                                               desired_f_pos);
    
    ROS_INFO_STREAM("Tau: \n" << tau << "\n");
}

// Main
int main(int argc, char **argv)
{
    HierarchicalOptimizationControl ho_controller;

    //testHLSO(ho_controller);

    //testHQPO(ho_controller);

    //testHO(ho_controller);

    ros::Duration(2.0).sleep();

    ho_controller.StaticTorqueTest();


    ros::spin();

    return 0;
}