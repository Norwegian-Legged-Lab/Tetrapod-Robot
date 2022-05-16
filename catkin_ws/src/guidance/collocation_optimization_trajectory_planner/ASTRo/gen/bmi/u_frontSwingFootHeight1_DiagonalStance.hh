/*
 * Automatically Generated from Mathematica.
 * Wed 6 Apr 2022 10:59:39 GMT+02:00
 */

#ifndef U_FRONTSWINGFOOTHEIGHT1_DIAGONALSTANCE_HH
#define U_FRONTSWINGFOOTHEIGHT1_DIAGONALSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void u_frontSwingFootHeight1_DiagonalStance_raw(double *p_output1, const double *var1);

  inline void u_frontSwingFootHeight1_DiagonalStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    u_frontSwingFootHeight1_DiagonalStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // U_FRONTSWINGFOOTHEIGHT1_DIAGONALSTANCE_HH
