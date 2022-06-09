/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:39:32 GMT+02:00
 */

#ifndef JS_YA_POSITION_PARALLELSTANCE2_PARALLELSTANCE2_HH
#define JS_YA_POSITION_PARALLELSTANCE2_PARALLELSTANCE2_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Js_ya_position_ParallelStance2_ParallelStance2_raw(double *p_output1, const double *var1);

  inline void Js_ya_position_ParallelStance2_ParallelStance2(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 14, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_ya_position_ParallelStance2_ParallelStance2_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_YA_POSITION_PARALLELSTANCE2_PARALLELSTANCE2_HH
