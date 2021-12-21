/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:19:01 GMT+01:00
 */

#ifndef YAW_DIAGONALSTANCE2_HH
#define YAW_DIAGONALSTANCE2_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace TrotStance2
{

  void yaw_DiagonalStance2_raw(double *p_output1, const double *var1);

  inline void yaw_DiagonalStance2(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    yaw_DiagonalStance2_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // YAW_DIAGONALSTANCE2_HH
