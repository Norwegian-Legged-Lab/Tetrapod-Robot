/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:31:05 GMT+01:00
 */

#ifndef JS_DXMINUSCONT_DIAGONALIMPACT_HH
#define JS_DXMINUSCONT_DIAGONALIMPACT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace DiagonalImpact
{

  void Js_dxMinusCont_DiagonalImpact_raw(double *p_output1, const double *var1);

  inline void Js_dxMinusCont_DiagonalImpact(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 36, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_dxMinusCont_DiagonalImpact_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_DXMINUSCONT_DIAGONALIMPACT_HH