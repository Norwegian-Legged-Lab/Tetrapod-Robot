/*******************************************************************/
/*    AUTHOR: Paal Arthur S. Thorseth                              */
/*    ORGN:   Dept of Eng Cybernetics, NTNU Trondheim              */
/*    FILE:   angle_utils.cpp                                      */
/*    DATE:   Feb 9, 2021                                          */
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

#include <math_utils/angle_utils.h>

namespace angle_utils
{   

// Convert deg to rad
double degToRad(const double &_deg)
{
    return (_deg/180.0) * PI;
}

// Convert rad to deg
double radToDeg(const double &_rad)
{
    return (_rad/PI) * 180;
}

// Wrap angle to the interval [-pi, pi)
double wrapAngleToPi(const double &_rad)
{
    double ret = std::fmod(_rad + PI, 2 * PI);

    if (ret < 0)
    {
        ret += 2 * PI;
    }

    return ret - PI;
}


// Wrap angle to the interval [0, 2pi)
double wrapAngleTo2Pi(const double &_rad)
{
    double ret = std::fmod(_rad, 2 * PI);

    if (ret < 0)
    {
        ret += 2 * PI;
    }

    return ret;
}

// Angle difference 
double angleDiff(const double &_ang1, const double &_ang2)
{
    double diff = std::fmod(_ang2 - _ang1 + PI, 2 * PI);

    if (diff < 0)
    {
        diff += 2*PI;
    }

    return diff - PI;
}


}// namespace angle_utils