/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:51:10 GMT+02:00
 */

#ifndef JS_JD2YA_POSITION_PARALLELSTANCE_PARALLELSTANCE_HH
#define JS_JD2YA_POSITION_PARALLELSTANCE_PARALLELSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Js_Jd2ya_position_ParallelStance_ParallelStance_raw(double *p_output1, const double *var1);

  inline void Js_Jd2ya_position_ParallelStance_ParallelStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 0, 0);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_Jd2ya_position_ParallelStance_ParallelStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_JD2YA_POSITION_PARALLELSTANCE_PARALLELSTANCE_HH
