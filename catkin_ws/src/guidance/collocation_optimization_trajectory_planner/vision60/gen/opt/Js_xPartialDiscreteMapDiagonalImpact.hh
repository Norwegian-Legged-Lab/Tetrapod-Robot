/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:34:32 GMT+02:00
 */

#ifndef JS_XPARTIALDISCRETEMAPDIAGONALIMPACT_HH
#define JS_XPARTIALDISCRETEMAPDIAGONALIMPACT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace DiagonalImpact
{

  void Js_xPartialDiscreteMapDiagonalImpact_raw(double *p_output1, const double *var1);

  inline void Js_xPartialDiscreteMapDiagonalImpact(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 28, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_xPartialDiscreteMapDiagonalImpact_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_XPARTIALDISCRETEMAPDIAGONALIMPACT_HH
