/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:21:28 GMT+02:00
 */

#ifndef FFRFOOT_VEC_DIAGONALIMPACT2_HH
#define FFRFOOT_VEC_DIAGONALIMPACT2_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void fFrFoot_vec_DiagonalImpact2_raw(double *p_output1, const double *var1,const double *var2);

  inline void fFrFoot_vec_DiagonalImpact2(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
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
    fFrFoot_vec_DiagonalImpact2_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // FFRFOOT_VEC_DIAGONALIMPACT2_HH
