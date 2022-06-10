/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:31:47 GMT+02:00
 */

#ifndef J_U_REARSWINGFOOTHEIGHTFLAT_DIAGONALSTANCE2_DIAGONALSTANCE2_HH
#define J_U_REARSWINGFOOTHEIGHTFLAT_DIAGONALSTANCE2_DIAGONALSTANCE2_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void J_u_rearSwingFootHeightflat_DiagonalStance2_DiagonalStance2_raw(double *p_output1, const double *var1);

  inline void J_u_rearSwingFootHeightflat_DiagonalStance2_DiagonalStance2(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 7, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_u_rearSwingFootHeightflat_DiagonalStance2_DiagonalStance2_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_U_REARSWINGFOOTHEIGHTFLAT_DIAGONALSTANCE2_DIAGONALSTANCE2_HH