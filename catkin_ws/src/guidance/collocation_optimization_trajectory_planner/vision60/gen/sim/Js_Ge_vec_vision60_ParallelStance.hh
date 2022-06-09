/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 18:38:24 GMT+02:00
 */

#ifndef JS_GE_VEC_VISION60_PARALLELSTANCE_HH
#define JS_GE_VEC_VISION60_PARALLELSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Js_Ge_vec_vision60_ParallelStance_raw(double *p_output1, const double *var1);

  inline void Js_Ge_vec_vision60_ParallelStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 117, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_Ge_vec_vision60_ParallelStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_GE_VEC_VISION60_PARALLELSTANCE_HH
