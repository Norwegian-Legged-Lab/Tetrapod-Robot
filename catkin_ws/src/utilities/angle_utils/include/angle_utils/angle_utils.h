/*******************************************************************/
/*    AUTHOR: Paal Arthur S. Thorseth                              */
/*    ORGN:   Dept of Eng Cybernetics, NTNU Trondheim              */
/*    FILE:   angle_utils.h                                        */
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

#pragma once

// C++ Standard Library
#include <cmath>

// Boost
#include <boost/math/constants/constants.hpp>

namespace angle_utils
{
    /// \brief Define PI
    static constexpr double PI = boost::math::constants::pi<double>(); 

    /// \brief The degToRad function converts degrees to radians.
    /// \param[in] _deg Angle in degrees.
    /// \return Angle in radians.
    double degToRad(const double &_deg);

    /// \brief The radToDeg function converts radians to degrees.
    /// \param[in] _rad Angle in radians.
    /// \return Angle in degrees.
    double radToDeg(const double &_rad);

    /// \brief The wrapAngleToPi function wraps an input angle to
    /// the interval [-pi, pi).
    /// \param[in] _rad Angle in radians.
    /// \return Angle in radians in the interval [-pi,pi)
    double wrapAngleToPi(const double &_rad);

    /// \brief The wrapAngleTo2Pi function wraps an input angle to 
    /// the interval [0, 2pi).
    /// \param[in] _rad Angle in radians.
    /// \return Angle in radians in the interval [0, 2pi).
    double wrapAngleTo2Pi(const double &_rad);

    /// \brief The angleDiff function returns the difference in angle
    /// between two given angles in the interval [0, pi)
    /// \param[in] _ang1 First angle in radians
    /// \param[in] _ang2 Second angle in radians
    /// \return Angle difference in the interval [0, pi)
    double angleDiff(const double &_ang1, const double &_ang2);

} // namespace angle_utils