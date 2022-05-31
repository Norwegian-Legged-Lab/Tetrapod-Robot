/*
 * Automatically Generated from Mathematica.
 * Fri 27 May 2022 16:42:01 GMT+02:00
 */

#ifndef JS_U_VEC_PARALLELSTANCE_HH
#define JS_U_VEC_PARALLELSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace ParallelStance
{

  void Js_u_vec_ParallelStance_raw(double *p_output1, const double *var1);

  inline void Js_u_vec_ParallelStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 11, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_u_vec_ParallelStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_U_VEC_PARALLELSTANCE_HH
