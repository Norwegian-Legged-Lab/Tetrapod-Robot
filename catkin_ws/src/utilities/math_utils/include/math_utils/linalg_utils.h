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

// Kindr
#include <kindr/Core>

// Eigen
#include <Eigen/Core>
#include <Eigen/SVD>

namespace math_utils
{
    /// \brief The dampedPseudoInverse function calculates the damped
    /// pseudo-inverse of a matrix using SVD.
    /// \param[in] _J Input Matrix.
    /// \param[out] _dPinvJ Output Matrix (damped pseudo-inverse of the input matrix).
    /// \param[in] _lambda Damping factor. Defaults to zero, i.e. the moore-penrose pseudo-inverse.
    /// \param[in] _epsilon Numerical precision (singular value threshold).
    /// \returns Returns true if the damped pseudo-inverse is calculated successfully.
    // TODO Fix Singularity issue, as it stands now the pseudo inverse fails when the input matrix is singular.
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

    /// \brief The nullSpaceProjector function calculates the null-space
    /// projector of a given matrix. The null-space projector is calculated
    /// using the Moore-Penrose pseudo-inverse (N = I - alpha * pinvA * A).
    /// \param[in] _A Input matrix A.
    /// \param[out] _N Output matrix N (null-space projector of the input matrix).
    /// \param[in] _alpha Scalar parameter between 0 and 1 used to
    /// regulate the priority between two tasks (if used in a hierarchical
    /// control approach).
    /// \return Returns true if a null-space projector is calculated successfully.
    template<typename Matrix_TypeA, typename Matrix_TypeB>
    bool static nullSpaceProjector(const Matrix_TypeA &_A,
                                         Matrix_TypeB &_N,
                                         const double _alpha = 1)
    {
        constexpr auto rowsA = static_cast<int>(Matrix_TypeA::RowsAtCompileTime);
        constexpr auto colsA = static_cast<int>(Matrix_TypeA::ColsAtCompileTime);
        constexpr auto rowsB = static_cast<int>(Matrix_TypeB::RowsAtCompileTime);
        constexpr auto colsB = static_cast<int>(Matrix_TypeB::ColsAtCompileTime);

        // Validate matrices
        static_assert(std::is_same<typename Matrix_TypeA::Scalar, typename Matrix_TypeB::Scalar>::value,
                      "[angle_utils::nullSpaceProjector] Matrix scalars does not match!");
        static_assert(colsA == rowsB && colsA == colsB,
                      "[angle_utils::nullSpaceProjector] Input and Output matrix dimensions does not match!");

        // Calculate pseudo-inverse of A
        Eigen::Matrix<typename Matrix_TypeA::Scalar, colsA, rowsA> pinvA;

        kindr::pseudoInverse(_A, pinvA);

        // Set identity matrix
        Eigen::Matrix<typename Matrix_TypeA::Scalar, colsA, colsA> I = Eigen::Matrix<typename Matrix_TypeA::Scalar, colsA, colsA>::Identity();

        // Caculate null-space projector
        _N = I - _alpha * pinvA * _A;

        return true;
    }

    /// \brief The SVDNullSpaceProjector function calculates the null-space
    /// projector of a given matrix. The null-space projector is calculated
    /// using the singular-value decomposition (SVD). The null-space
    /// projector is found as N(_A) = V_N^*, where the SVD comprises:
    /// -------------------------------------------------------------
    ///           A = [U_R, U_N][S, 0;[V_R^*;
    ///                          0, 0] V_N^*]
    /// -------------------------------------------------------------
    /// \param[in] _A Input matrix A.
    /// \return Returns the SVD null-space projector of the input matrix _A.
    template<typename Matrix_TypeA> 
    Eigen::Matrix<typename Matrix_TypeA::Scalar, Eigen::Dynamic, Eigen::Dynamic> SVDNullSpaceProjector(const Matrix_TypeA &_A)
    {
        // Null-space projector
        Eigen::Matrix<typename Matrix_TypeA::Scalar, Eigen::Dynamic, Eigen::Dynamic> N;

        // Dimensions
        const auto rowsA = _A.rows();
        const auto colsA = _A.cols();

        // Jacobi SVD
        Eigen::JacobiSVD< Eigen::Matrix<typename Matrix_TypeA::Scalar, Eigen::Dynamic, Eigen::Dynamic> > svd(_A, Eigen::ComputeThinU | Eigen::ComputeFullV);

        // Rank of input matrix
        const auto rankA = svd.rank();

        // Validate
        if (rankA == colsA)
        {
            N.resize(colsA, 1);
            N.setZero();
        }
        else
        {
            N.resize(colsA, colsA - rankA);
            N = svd.matrixV().rightCols(colsA - rankA);
        }

        return N;
    }                                

    /// \brief The boxMinus function calculates the box-minus
    /// operation between two vectors of equal size.
    /// \param[in] _a LHS vector.
    /// \param[in] _b RHS vector.
    /// \return Returns the box-minus operation between the two vectors.
    template<typename Vector_TypeA, typename Vector_TypeB>
    Eigen::Matrix<typename Vector_TypeA::Scalar, Eigen::Dynamic, 1> boxMinus(const Vector_TypeA &_a, const Vector_TypeB &_b)
    {
        // Dimensions
        constexpr auto rowsA = static_cast<int>(Vector_TypeA::RowsAtCompileTime);
        constexpr auto colsA = static_cast<int>(Vector_TypeA::ColsAtCompileTime);
        constexpr auto rowsB = static_cast<int>(Vector_TypeB::RowsAtCompileTime);
        constexpr auto colsB = static_cast<int>(Vector_TypeB::ColsAtCompileTime);
 
        // Validate vectors
        static_assert(std::is_same<typename Vector_TypeA::Scalar, typename Vector_TypeB::Scalar>::value,
                      "[math_utils::boxMinus] Vectors must be of the same Scalar type!");
        static_assert(rowsA == rowsB && colsA == 1 && colsB == 1, "[math_utils::boxMinus] Inputs has wrong size!");

        // Return vector
        Eigen::Matrix<typename Vector_TypeA::Scalar, rowsA, 1> res; 

        // Fill result
        for (size_t i = 0; i < rowsA; i++)
        {
            res(i) = std::log( _a(i) / _b(i) );
        }

        return res;
    }

} // namespace math_utils