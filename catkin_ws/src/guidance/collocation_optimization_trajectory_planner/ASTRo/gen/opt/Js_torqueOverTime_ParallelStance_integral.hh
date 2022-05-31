/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 17:14:18 GMT+02:00
 */

#ifndef JS_TORQUEOVERTIME_PARALLELSTANCE_INTEGRAL_HH
#define JS_TORQUEOVERTIME_PARALLELSTANCE_INTEGRAL_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace ParallelStance
{

  void Js_torqueOverTime_ParallelStance_integral_raw(double *p_output1, const double *var1);

  inline void Js_torqueOverTime_ParallelStance_integral(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 16, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_torqueOverTime_ParallelStance_integral_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_TORQUEOVERTIME_PARALLELSTANCE_INTEGRAL_HH
