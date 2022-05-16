/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:18:45 GMT+01:00
 */

#ifndef OUTPUT_BOUNDARY_DIAGONALSTANCE2_HH
#define OUTPUT_BOUNDARY_DIAGONALSTANCE2_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace TrotStance2
{

  void output_boundary_DiagonalStance2_raw(double *p_output1, const double *var1);

  inline void output_boundary_DiagonalStance2(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 6, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    output_boundary_DiagonalStance2_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // OUTPUT_BOUNDARY_DIAGONALSTANCE2_HH