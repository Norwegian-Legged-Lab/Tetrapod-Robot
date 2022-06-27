/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:34:57 GMT+02:00
 */

#ifndef JS_TORQUEOVERTIME_DIAGONALSTANCE_INTEGRAL_HH
#define JS_TORQUEOVERTIME_DIAGONALSTANCE_INTEGRAL_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace DiagonalStance
{

  void Js_torqueOverTime_DiagonalStance_integral_raw(double *p_output1, const double *var1);

  inline void Js_torqueOverTime_DiagonalStance_integral(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 16, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_torqueOverTime_DiagonalStance_integral_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_TORQUEOVERTIME_DIAGONALSTANCE_INTEGRAL_HH
