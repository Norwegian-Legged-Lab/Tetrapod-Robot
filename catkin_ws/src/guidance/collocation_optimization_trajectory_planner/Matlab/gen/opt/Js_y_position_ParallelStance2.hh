/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:32:33 GMT+01:00
 */

#ifndef JS_Y_POSITION_PARALLELSTANCE2_HH
#define JS_Y_POSITION_PARALLELSTANCE2_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace ParallelStance2
{

  void Js_y_position_ParallelStance2_raw(double *p_output1, const double *var1);

  inline void Js_y_position_ParallelStance2(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 156, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_y_position_ParallelStance2_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_Y_POSITION_PARALLELSTANCE2_HH
