/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:25:08 GMT+02:00
 */

#ifndef D1YA_POSITION_DIAGONALSTANCE2_HH
#define D1YA_POSITION_DIAGONALSTANCE2_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void d1ya_position_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2);

  inline void d1ya_position_DiagonalStance2(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);
    assert_size_matrix(var2, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 14, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    d1ya_position_DiagonalStance2_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // D1YA_POSITION_DIAGONALSTANCE2_HH
