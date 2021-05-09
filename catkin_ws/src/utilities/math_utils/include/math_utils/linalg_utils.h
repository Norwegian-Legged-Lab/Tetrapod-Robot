/*******************************************************************/
/*    AUTHOR: Paal Arthur S. Thorseth                              */
/*    ORGN:   Dept of Eng Cybernetics, NTNU Trondheim              */
/*    FILE:   linalg_utils.h                                       */
/*    DATE:   May 9, 2021                                          */
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

namespace math_utils
{
    /// \brief The dampedPseudoInverse function calculates the damped
    /// pseudo-inverse of a matrix using SVD.
    /// \param[in] _J Input Matrix.
    /// \param[in] _dPinvJ Output Matrix (damped pseudo-inverse of the input matrix).
    /// \param[in] _lambda Damping factor. Defaults to zero, i.e. the moore-penrose pseudo-inverse.
    /// \param[in] _epsilon Numerical precision (singular value threshold).
    /// \returns Returns true if the damped pseudo-inverse is calculated successfully.
    template<typename Matrix_TypeA, typename Matrix_TypeB>
    bool static dampedPseudoInverse(const Matrix_TypeA &_J, 
                                    Matrix_TypeB &_dPinvJ, 
                                    const double _lambda = 0,
                                    const double _epsilon = std::numeric_limits<typename Matrix_TypeA::Scalar>::epsilon())
    {
        // Dimensions
        constexpr auto rowsA = static_cast<int>(Matrix_TypeA::RowsAtCompileTime);
        constexpr auto colsA = static_cast<int>(Matrix_TypeA::ColsAtCompileTime);
        constexpr auto rowsB = static_cast<int>(Matrix_TypeB::RowsAtCompileTime);
        constexpr auto colsB = static_cast<int>(Matrix_TypeB::ColsAtCompileTime);
        constexpr auto rankA = static_cast<int>(Eigen::JacobiSVD<Matrix_TypeA>::DiagSizeAtCompileTime);

        // Validate matrices
        static_assert(std::is_same<typename Matrix_TypeA::Scalar, typename Matrix_TypeB::Scalar>::value,
                      "[angle_utils::dampedPseduoInverse] Matrix scalars does not match!");
        static_assert(rowsA == colsB && colsA == rowsB,
                      "[angle_utils::dampedPseduoInverse] Input and Output matrix dimensions does not match!");

        // Calculate pseudo-inverse pinv_J = V S+ U*
        Eigen::JacobiSVD<Eigen::Matrix<typename Matrix_TypeA::Scalar, Eigen::Dynamic, Eigen::Dynamic> > svd(_J, Eigen::ComputeThinU | Eigen::ComputeThinV);
        const Eigen::Matrix<typename Matrix_TypeA::Scalar, rowsA, rankA> U = svd.matrixU();
        const Eigen::Matrix<typename Matrix_TypeA::Scalar, rankA, 1> SV = svd.singularValues();
        const Eigen::Matrix<typename Matrix_TypeA::Scalar, colsA, rankA> V = svd.matrixV();

        // Calculate damped singular-values
        Eigen::Matrix<typename Matrix_TypeA::Scalar, rankA, 1> damped_inv_SV;
        for (size_t i = 0; i < rankA; ++i)
        {
            if (std::fabs(SV(i) > _epsilon))
            {
                damped_inv_SV(i) = 1 / SV(i);
            }
            else
            {
                damped_inv_SV(i) = SV(i) / ( std::pow(SV(i),2) + std::pow(_lambda, 2) ); 
            }
        }
        
        // Calculate damped pseudo-inverse
        _dPinvJ = V * damped_inv_SV.asDiagonal() * U.transpose();

        return true;
    }

} // namespace math_utils