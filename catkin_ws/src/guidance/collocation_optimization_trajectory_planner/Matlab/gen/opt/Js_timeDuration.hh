/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:32:00 GMT+01:00
 */

#ifndef JS_TIMEDURATION_HH
#define JS_TIMEDURATION_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace ParallelStance2
{

  void Js_timeDuration_raw(double *p_output1, const double *var1);

  inline void Js_timeDuration(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 2, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_timeDuration_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_TIMEDURATION_HH
