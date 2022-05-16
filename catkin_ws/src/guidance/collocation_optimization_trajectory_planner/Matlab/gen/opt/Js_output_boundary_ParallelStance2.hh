/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:15:48 GMT+01:00
 */

#ifndef JS_OUTPUT_BOUNDARY_PARALLELSTANCE2_HH
#define JS_OUTPUT_BOUNDARY_PARALLELSTANCE2_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace ParallelStance2
{

  void Js_output_boundary_ParallelStance2_raw(double *p_output1, const double *var1);

  inline void Js_output_boundary_ParallelStance2(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 40, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_output_boundary_ParallelStance2_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_OUTPUT_BOUNDARY_PARALLELSTANCE2_HH