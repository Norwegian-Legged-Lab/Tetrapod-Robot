/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:53:48 GMT+02:00
 */

#ifndef JS_DXMINUSCONT_PARALLELIMPACT_HH
#define JS_DXMINUSCONT_PARALLELIMPACT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace ParallelImpact
{

  void Js_dxMinusCont_ParallelImpact_raw(double *p_output1, const double *var1);

  inline void Js_dxMinusCont_ParallelImpact(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 36, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_dxMinusCont_ParallelImpact_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_DXMINUSCONT_PARALLELIMPACT_HH