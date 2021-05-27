
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

    b2 << 15,
          0;

    A3 << 0, 1;
          

    b3 << 5;

    Eigen::Matrix<Eigen::MatrixXd, 1, 1> A;
    Eigen::Matrix<Eigen::Matrix<double, Eigen::Dynamic, 1>, 1, 1> b;

    A(0) = A1;
    b(0) = b1;
    //A(1) = A2;
    //b(1) = b2;
    //A(2) = A3;
    //b(2) = b3;
    
    Eigen::MatrixXd x_opt = _ho_controller.HierarchicalLeastSquareOptimization(A, b);

    ROS_INFO_STREAM("x_opt HLSO: \n" << x_opt);
}

void testHQPO(HierarchicalOptimizationControl &_ho_controller)
{
    Eigen::Matrix<double, 1, 2> A1_eq;
    Eigen::Matrix<double, 1, 1> b1_eq;

    Eigen::Matrix<double, 2, 2> A2_eq;
    Eigen::Matrix<double, 2, 1> b2_eq;

    Eigen::Matrix<double, 1, 2> A3_eq;
    Eigen::Matrix<double, 1, 1> b3_eq;

    Eigen::Matrix<double, 1, 2> A1_ineq;
    Eigen::Matrix<double, 1, 1> b1_ineq;

    Eigen::Matrix<double, 2, 2> A2_ineq;
    Eigen::Matrix<double, 2, 1> b2_ineq;

    Eigen::Matrix<double, 1, 2> A3_ineq;
    Eigen::Matrix<double, 1, 1> b3_ineq;

    A1_eq << 1, 1;

    b1_eq << 10;

    A2_eq << 1, 0,
             0, 0;

    b2_eq << 15,
             0;

    A3_eq << 0, 1;

    b3_eq << 5;

    A1_ineq.setZero();
    b1_ineq.setZero();

    A2_ineq.setZero();
    b2_ineq.setZero();

    A3_ineq.setZero();
    b3_ineq.setZero();

    HierarchicalOptimizationControl::Task t1;
    HierarchicalOptimizationControl::Task t2;
    HierarchicalOptimizationControl::Task t3;

    t1.A_eq = A1_eq;
    t1.b_eq = b1_eq;
    t1.A_ineq = A1_ineq;
    t1.b_ineq = b1_ineq;
    t2.A_eq = A2_eq;
    t2.b_eq = b2_eq;
    t2.A_ineq = A2_ineq;
    t2.b_ineq = b2_ineq;
    t3.A_eq = A3_eq;
    t3.b_eq = b3_eq;
    t3.A_ineq = A3_ineq;
    t3.b_ineq = b3_ineq;

    std::vector<HierarchicalOptimizationControl::Task> tasks;
    tasks.push_back(t1);
    //tasks.push_back(t2);
    //tasks.push_back(t3);

    Eigen::VectorXd x_opt = _ho_controller.HierarchicalQPOptimization(2, tasks);

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

    A_eq << 1, 0,
            0, 0;
    b_eq << 5,
            0;

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

// Main
int main(int argc, char **argv)
{
    HierarchicalOptimizationControl ho_controller;

    testHLSO(ho_controller);

    testHQPO(ho_controller);

    ros::spin();

    return 0;
}