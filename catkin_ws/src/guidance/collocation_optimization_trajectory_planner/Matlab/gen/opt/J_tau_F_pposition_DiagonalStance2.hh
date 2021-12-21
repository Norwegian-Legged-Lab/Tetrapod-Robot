/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:18:44 GMT+01:00
 */

#ifndef J_TAU_F_PPOSITION_DIAGONALSTANCE2_HH
#define J_TAU_F_PPOSITION_DIAGONALSTANCE2_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace TrotStance2
{

  void J_tau_F_pposition_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2);

  inline void J_tau_F_pposition_DiagonalStance2(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 2, 1);
    assert_size_matrix(var2, 2, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 2, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_tau_F_pposition_DiagonalStance2_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_TAU_F_PPOSITION_DIAGONALSTANCE2_HH
