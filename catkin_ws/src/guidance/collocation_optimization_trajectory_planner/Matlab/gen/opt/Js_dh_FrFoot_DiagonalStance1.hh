/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:09:32 GMT+01:00
 */

#ifndef JS_DH_FRFOOT_DIAGONALSTANCE1_HH
#define JS_DH_FRFOOT_DIAGONALSTANCE1_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace DiagonalStance1
{

  void Js_dh_FrFoot_DiagonalStance1_raw(double *p_output1, const double *var1);

  inline void Js_dh_FrFoot_DiagonalStance1(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 45, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_dh_FrFoot_DiagonalStance1_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_DH_FRFOOT_DIAGONALSTANCE1_HH
