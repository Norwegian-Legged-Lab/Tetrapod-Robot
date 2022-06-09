/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 18:37:48 GMT+02:00
 */

#ifndef J_YA_POSITION_DIAGONALSTANCE_DIAGONALSTANCE_HH
#define J_YA_POSITION_DIAGONALSTANCE_DIAGONALSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void J_ya_position_DiagonalStance_DiagonalStance_raw(double *p_output1, const double *var1);

  inline void J_ya_position_DiagonalStance_DiagonalStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 14, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_ya_position_DiagonalStance_DiagonalStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_YA_POSITION_DIAGONALSTANCE_DIAGONALSTANCE_HH
