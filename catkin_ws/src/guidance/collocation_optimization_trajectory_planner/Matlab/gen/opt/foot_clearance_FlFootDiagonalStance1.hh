/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:10:09 GMT+01:00
 */

#ifndef FOOT_CLEARANCE_FLFOOTDIAGONALSTANCE1_HH
#define FOOT_CLEARANCE_FLFOOTDIAGONALSTANCE1_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace DiagonalStance1
{

  void foot_clearance_FlFootDiagonalStance1_raw(double *p_output1, const double *var1);

  inline void foot_clearance_FlFootDiagonalStance1(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    foot_clearance_FlFootDiagonalStance1_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // FOOT_CLEARANCE_FLFOOTDIAGONALSTANCE1_HH