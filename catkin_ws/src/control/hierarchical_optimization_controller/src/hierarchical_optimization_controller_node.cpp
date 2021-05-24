
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

// Main
int main(int argc, char **argv)
{
    HierarchicalOptimizationControl ho_controller;


    Eigen::Matrix<double, 1, 2> A1;
    Eigen::Matrix<double, 1, 1> b1;

    Eigen::Matrix<double, 2, 2> A2;
    Eigen::Matrix<double, 2, 1> b2;

    Eigen::Matrix<double, 1, 2> A3;
    Eigen::Matrix<double, 1, 1> b3;

    A1 << 1, 1;

    b1 << 10;

    A2 << 1, 0,
          0, 1;

    b2 << 6,
          3;

    A3 << 0, 1;
          

    b3 << 3;

    Eigen::Matrix<Eigen::MatrixXd, 3, 1> A;
    Eigen::Matrix<Eigen::Matrix<double, Eigen::Dynamic, 1>, 3, 1> b;

    A(0) = A1;
    b(0) = b1;
    A(1) = A2;
    b(1) = b2;
    A(2) = A3;
    b(2) = b3;
    
    Eigen::MatrixXd x_opt = ho_controller.HierarchicalLeastSquareOptimization(A, b);

    ROS_INFO_STREAM("x_opt: \n" << x_opt);


    ros::spin();

    return 0;
}