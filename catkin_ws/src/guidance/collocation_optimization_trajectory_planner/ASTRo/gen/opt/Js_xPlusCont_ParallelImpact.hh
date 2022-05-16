/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:42:44 GMT+02:00
 */

#ifndef JS_XPLUSCONT_PARALLELIMPACT_HH
#define JS_XPLUSCONT_PARALLELIMPACT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace ParallelImpact
{

  void Js_xPlusCont_ParallelImpact_raw(double *p_output1, const double *var1);

  inline void Js_xPlusCont_ParallelImpact(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 36, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_xPlusCont_ParallelImpact_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_XPLUSCONT_PARALLELIMPACT_HH
