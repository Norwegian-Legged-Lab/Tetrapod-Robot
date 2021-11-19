/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:28:32 GMT+01:00
 */

#ifndef DH_RLFOOT_DIAGONALSTANCE_HH
#define DH_RLFOOT_DIAGONALSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace DiagonalStance
{

  void dh_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2);

  inline void dh_RlFoot_DiagonalStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);
    assert_size_matrix(var2, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    dh_RlFoot_DiagonalStance_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // DH_RLFOOT_DIAGONALSTANCE_HH
