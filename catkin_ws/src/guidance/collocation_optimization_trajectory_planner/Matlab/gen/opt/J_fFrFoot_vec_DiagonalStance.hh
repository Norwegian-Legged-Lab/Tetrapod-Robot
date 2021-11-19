/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:28:19 GMT+01:00
 */

#ifndef J_FFRFOOT_VEC_DIAGONALSTANCE_HH
#define J_FFRFOOT_VEC_DIAGONALSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace DiagonalStance
{

  void J_fFrFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2);

  inline void J_fFrFoot_vec_DiagonalStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);
    assert_size_matrix(var2, 3, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 59, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_fFrFoot_vec_DiagonalStance_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_FFRFOOT_VEC_DIAGONALSTANCE_HH
