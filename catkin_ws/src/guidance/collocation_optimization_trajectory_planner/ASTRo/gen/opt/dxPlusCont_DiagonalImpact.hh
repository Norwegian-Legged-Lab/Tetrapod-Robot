/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 17:01:45 GMT+02:00
 */

#ifndef DXPLUSCONT_DIAGONALIMPACT_HH
#define DXPLUSCONT_DIAGONALIMPACT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace DiagonalImpact
{

  void dxPlusCont_DiagonalImpact_raw(double *p_output1, const double *var1,const double *var2);

  inline void dxPlusCont_DiagonalImpact(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);
    assert_size_matrix(var2, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 18, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    dxPlusCont_DiagonalImpact_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // DXPLUSCONT_DIAGONALIMPACT_HH
