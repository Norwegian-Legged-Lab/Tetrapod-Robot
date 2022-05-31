/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 16:55:26 GMT+02:00
 */

#ifndef FRRFOOT_VEC_DIAGONALSTANCE2_HH
#define FRRFOOT_VEC_DIAGONALSTANCE2_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void fRrFoot_vec_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2);

  inline void fRrFoot_vec_DiagonalStance2(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);
    assert_size_matrix(var2, 3, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 18, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    fRrFoot_vec_DiagonalStance2_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // FRRFOOT_VEC_DIAGONALSTANCE2_HH
