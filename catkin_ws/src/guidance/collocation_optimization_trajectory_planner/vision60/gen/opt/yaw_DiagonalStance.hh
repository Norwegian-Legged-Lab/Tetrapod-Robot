/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:47:14 GMT+02:00
 */

#ifndef YAW_DIAGONALSTANCE_HH
#define YAW_DIAGONALSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace DiagonalStance
{

  void yaw_DiagonalStance_raw(double *p_output1, const double *var1);

  inline void yaw_DiagonalStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    yaw_DiagonalStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // YAW_DIAGONALSTANCE_HH
