/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:53:18 GMT+02:00
 */

#ifndef J_OUTPUT_BOUNDARY_DIAGONALSTANCE_HH
#define J_OUTPUT_BOUNDARY_DIAGONALSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace DiagonalStance
{

  void J_output_boundary_DiagonalStance_raw(double *p_output1, const double *var1);

  inline void J_output_boundary_DiagonalStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 4, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_output_boundary_DiagonalStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_OUTPUT_BOUNDARY_DIAGONALSTANCE_HH