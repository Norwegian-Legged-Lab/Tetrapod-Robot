/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 16:59:37 GMT+02:00
 */

#ifndef JS_D2Y_POSITION_DIAGONALSTANCE_HH
#define JS_D2Y_POSITION_DIAGONALSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace DiagonalStance
{

  void Js_d2y_position_DiagonalStance_raw(double *p_output1, const double *var1);

  inline void Js_d2y_position_DiagonalStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 143, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_d2y_position_DiagonalStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_D2Y_POSITION_DIAGONALSTANCE_HH
