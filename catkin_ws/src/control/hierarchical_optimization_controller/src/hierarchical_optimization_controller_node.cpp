
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

    Eigen::Vector3d desired_base_pos;
    Eigen::Matrix<Eigen::Vector3d, 4, 1> desired_f_pos;

    desired_base_pos.setZero();
    desired_f_pos(0).setZero();
    desired_f_pos(1).setZero();
    desired_f_pos(2).setZero();
    desired_f_pos(3).setZero();

    ho_controller.HierarchicalOptimization(desired_base_pos, desired_f_pos);

    ros::spin();

    return 0;
}