/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:27:35 GMT+01:00
 */

#ifndef J_OUTPUT_BOUNDARY_DIAGONALSTANCE1_HH
#define J_OUTPUT_BOUNDARY_DIAGONALSTANCE1_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace DiagonalStance1
{

  void J_output_boundary_DiagonalStance1_raw(double *p_output1, const double *var1);

  inline void J_output_boundary_DiagonalStance1(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 40, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_output_boundary_DiagonalStance1_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_OUTPUT_BOUNDARY_DIAGONALSTANCE1_HH
