/*******************************************************************/
/*    AUTHOR: Paal Arthur S. Thorseth                              */
/*    ORGN:   Dept of Eng Cybernetics, NTNU Trondheim              */
/*    FILE:   math_utils.h                                        */
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

// Eigen
#include <Eigen/Core>
#include <Eigen/SVD>

// Boost
#include <boost/math/constants/constants.hpp>

namespace math_utils
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

    // Damped pseudo-inverse
    template<typename Matrix_TypeA, typename Matrix_TypeB>
    bool static dampedPseudoInverse(const Matrix_TypeA &_J, 
                                    Matrix_TypeB &_dPinvJ, 
                                    const double _epsilon = std::numeric_limits<typename Matrix_TypeA::Scalar>::epsilon())
    {
        // Dimensions
        const double _lambda = 0;
        constexpr auto rowsA = static_cast<int>(Matrix_TypeA::RowsAtCompileTime);
        constexpr auto colsA = static_cast<int>(Matrix_TypeA::ColsAtCompileTime);
        constexpr auto rowsB = static_cast<int>(Matrix_TypeB::RowsAtCompileTime);
        constexpr auto colsB = static_cast<int>(Matrix_TypeB::ColsAtCompileTime);
        constexpr auto rankA = static_cast<int>(Eigen::JacobiSVD<Matrix_TypeA>::DiagSizeAtCompileTime);

        // Validate matrices
        //static_assert(rowsA == 0 || colsA == 0,
        //              "[math_utils::dampedPseudoInverse] Input matrix is empty.");
        static_assert(std::is_same<typename Matrix_TypeA::Scalar, typename Matrix_TypeB::Scalar>::value,
                      "[math_utils::dampedPseduoInverse] Matrix scalars does not match!");
        static_assert(rowsA == colsB && colsA == rowsB,
                      "[math_utils::dampedPseduoInverse] Input and Output matrix dimensions does not match!");

        // Calculate pseudo-inverse pinv_J = V S+ U*
        Eigen::JacobiSVD<Matrix_TypeA> svd(_J, Eigen::ComputeThinU | Eigen::ComputeThinV);
        const Eigen::Matrix<typename Matrix_TypeA::Scalar, rowsA, rankA> U = svd.matrixU();
        const Eigen::Matrix<typename Matrix_TypeA::Scalar, rankA, 1> SV = svd.singularValues();
        const Eigen::Matrix<typename Matrix_TypeA::Scalar, colsA, rankA> V = svd.matrixV();

        // Calculate damped singular-values
        Eigen::Matrix<typename Matrix_TypeA::Scalar, rankA, 1> damped_SV;
        for (size_t i = 0; i < rankA; ++i)
        {
            if (std::fabs(SV(i) > _epsilon))
            {
                damped_SV(i) = 1 / SV(i);
            }
            else
            {
                damped_SV(i) = SV(i) / ( std::pow(SV(i),2) + std::pow(_lambda, 2) ); 
            }
        }
        
        // Calculate damped pseudo-inverse
        _dPinvJ = V * damped_SV.asDiagonal() * U.transpose();

        return true;
    
    }
    
} // namespace math_utils