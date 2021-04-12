
/*******************************************************************/
/*    AUTHOR: Paal Arthur S. Thorseth                              */
/*    ORGN:   Dept of Eng Cybernetics, NTNU Trondheim              */
/*    FILE:   debug_utils.cpp                                      */
/*    DATE:   Apr 12, 2021                                         */
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

#include <debug_utils/debug_utils.h>

namespace debug_utils
{

// Print Base State
void printBaseState(const Eigen::Matrix<double, 6, 1> &_base_state)
{
    ROS_INFO_STREAM("\n --------------- Base State --------------- ");
    ROS_INFO_STREAM("x: \t" << _base_state(0));
    ROS_INFO_STREAM("y: \t" << _base_state(1));
    ROS_INFO_STREAM("z: \t" << _base_state(2));
    ROS_INFO_STREAM("roll: \t" << _base_state(3));
    ROS_INFO_STREAM("pitch: \t" << _base_state(4));
    ROS_INFO_STREAM("yaw: \t" << _base_state(5));
    ROS_INFO_STREAM(" ------------------------------------------ ");
}

// Print Joint State
void printJointState(const Eigen::Matrix<double, 12, 1> &_joint_state)
{
    ROS_INFO_STREAM("\n -------------- Joint State --------------- ");
    ROS_INFO_STREAM("fl,hy: \t" << _joint_state(0) * 360 * angle_utils::ONE_DIV_TWO_PI);
    ROS_INFO_STREAM("fl,hp: \t" << _joint_state(1) * 360 * angle_utils::ONE_DIV_TWO_PI);
    ROS_INFO_STREAM("fl,kp: \t" << _joint_state(2) * 360 * angle_utils::ONE_DIV_TWO_PI);
    ROS_INFO_STREAM("fr,hy: \t" << _joint_state(3) * 360 * angle_utils::ONE_DIV_TWO_PI);
    ROS_INFO_STREAM("fr,hp: \t" << _joint_state(4) * 360 * angle_utils::ONE_DIV_TWO_PI);
    ROS_INFO_STREAM("fr,kp: \t" << _joint_state(5) * 360 * angle_utils::ONE_DIV_TWO_PI);
    ROS_INFO_STREAM("rl,hy: \t" << _joint_state(6) * 360 * angle_utils::ONE_DIV_TWO_PI);
    ROS_INFO_STREAM("rl,hp: \t" << _joint_state(7) * 360 * angle_utils::ONE_DIV_TWO_PI);
    ROS_INFO_STREAM("rl,kp: \t" << _joint_state(8) * 360 * angle_utils::ONE_DIV_TWO_PI);
    ROS_INFO_STREAM("rr,hy: \t" << _joint_state(9) * 360 * angle_utils::ONE_DIV_TWO_PI);
    ROS_INFO_STREAM("rr,hp: \t" << _joint_state(10));
    ROS_INFO_STREAM("rr,kp: \t" << _joint_state(11));
    ROS_INFO_STREAM(" ------------------------------------------ ");
}

// Print Generalized Coordinates
void printGeneralizedCoordinates(const Eigen::Matrix<double, 18, 1> &_gen_coord)
{
    printBaseState(_gen_coord.block(0,0,5,0));
    printJointState(_gen_coord.block(6,0,17,0));
}

void printFootstepPositions(const Eigen::Matrix<Eigen::Vector3d, 4, 1> &_f_pos)
{
    ROS_INFO_STREAM("\n --------- Footstep Positions ------------- ");
    ROS_INFO_STREAM("****front left****");
    ROS_INFO_STREAM("x: " << _f_pos(0)(0));
    ROS_INFO_STREAM("y: " << _f_pos(0)(1));
    ROS_INFO_STREAM("z: " << _f_pos(0)(2));
    ROS_INFO_STREAM("*******************");
    ROS_INFO_STREAM("****front right****");
    ROS_INFO_STREAM("x: " << _f_pos(1)(0));
    ROS_INFO_STREAM("y: " << _f_pos(1)(1));
    ROS_INFO_STREAM("z: " << _f_pos(1)(2));
    ROS_INFO_STREAM("*******************");
    ROS_INFO_STREAM("****rear left****");
    ROS_INFO_STREAM("x: " << _f_pos(2)(0));
    ROS_INFO_STREAM("y: " << _f_pos(2)(1));
    ROS_INFO_STREAM("z: " << _f_pos(2)(2));
    ROS_INFO_STREAM("******************");
    ROS_INFO_STREAM("****rear right****");
    ROS_INFO_STREAM("x: " << _f_pos(3)(0));
    ROS_INFO_STREAM("y: " << _f_pos(3)(1));
    ROS_INFO_STREAM("z: " << _f_pos(3)(2));
    ROS_INFO_STREAM("******************");
    ROS_INFO_STREAM(" ------------------------------------------ ");
}

} // namespace debug_utils