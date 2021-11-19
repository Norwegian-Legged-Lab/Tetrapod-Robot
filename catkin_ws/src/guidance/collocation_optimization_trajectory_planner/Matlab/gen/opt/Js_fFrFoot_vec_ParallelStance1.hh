/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:28:45 GMT+01:00
 */

#ifndef JS_FFRFOOT_VEC_PARALLELSTANCE1_HH
#define JS_FFRFOOT_VEC_PARALLELSTANCE1_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace ParallelStance1
{

  void Js_fFrFoot_vec_ParallelStance1_raw(double *p_output1, const double *var1);

  inline void Js_fFrFoot_vec_ParallelStance1(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 59, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_fFrFoot_vec_ParallelStance1_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_FFRFOOT_VEC_PARALLELSTANCE1_HH
