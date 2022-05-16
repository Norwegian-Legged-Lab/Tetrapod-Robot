/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:32:17 GMT+02:00
 */

#ifndef TAU_F_PPOSITION_DIAGONALSTANCE_HH
#define TAU_F_PPOSITION_DIAGONALSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace DiagonalStance
{

  void tau_F_pposition_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2);

  inline void tau_F_pposition_DiagonalStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 2, 1);
    assert_size_matrix(var2, 2, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    tau_F_pposition_DiagonalStance_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // TAU_F_PPOSITION_DIAGONALSTANCE_HH
