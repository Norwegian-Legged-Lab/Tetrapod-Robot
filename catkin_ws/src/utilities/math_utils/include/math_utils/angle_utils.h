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
    /// \brief Define 2PI
    static constexpr double TWO_PI = boost::math::constants::two_pi<double>(); 

    /// \brief Define 4PI/3
    static constexpr double FOUR_THIRDS_PI = boost::math::constants::four_thirds_pi<double>(); 

    /// \brief Define PI
    static constexpr double PI = boost::math::constants::pi<double>(); 

    /// \brief Define 3PI/4
    static constexpr double THREE_QUARTERS_PI = boost::math::constants::three_quarters_pi<double>(); 

    /// \brief Define 2PI/3
    static constexpr double TWO_THIRDS_PI = boost::math::constants::two_thirds_pi<double>(); 

    /// \brief Define PI/2
    static constexpr double HALF_PI = boost::math::constants::half_pi<double>(); 

    /// \brief Define PI/3
    static constexpr double THIRD_PI = boost::math::constants::third_pi<double>(); 

    /// \brief Define PI/6
    static constexpr double SIXTH_PI = boost::math::constants::sixth_pi<double>(); 

    /// \brief Define 1/2PI
    static constexpr double ONE_DIV_TWO_PI = boost::math::constants::one_div_two_pi<double>(); 

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
    /// \return Angle difference from _ang1 relative _ang2 
    double angleDiff(const double &_ang1, const double &_ang2);

} // namespace angle_utils