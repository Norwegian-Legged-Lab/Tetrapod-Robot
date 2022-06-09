/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 14:40:41 GMT+02:00
 */

#ifndef D1TAU_POSITION_DIAGONALSTANCE_HH
#define D1TAU_POSITION_DIAGONALSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void d1tau_position_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2);

  inline void d1tau_position_DiagonalStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);
    assert_size_matrix(var2, 2, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    d1tau_position_DiagonalStance_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // D1TAU_POSITION_DIAGONALSTANCE_HH
