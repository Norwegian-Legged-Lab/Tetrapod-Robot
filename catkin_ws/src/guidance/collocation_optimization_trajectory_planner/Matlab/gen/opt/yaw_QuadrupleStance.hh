/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 22:33:56 GMT+01:00
 */

#ifndef YAW_QUADRUPLESTANCE_HH
#define YAW_QUADRUPLESTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace QuadrupleStance
{

  void yaw_QuadrupleStance_raw(double *p_output1, const double *var1);

  inline void yaw_QuadrupleStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    yaw_QuadrupleStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // YAW_QUADRUPLESTANCE_HH
