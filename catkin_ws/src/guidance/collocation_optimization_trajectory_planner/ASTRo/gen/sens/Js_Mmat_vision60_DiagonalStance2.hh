/*
 * Automatically Generated from Mathematica.
 * Wed 6 Apr 2022 13:26:25 GMT+02:00
 */

#ifndef JS_MMAT_VISION60_DIAGONALSTANCE2_HH
#define JS_MMAT_VISION60_DIAGONALSTANCE2_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Js_Mmat_vision60_DiagonalStance2_raw(double *p_output1, const double *var1);

  inline void Js_Mmat_vision60_DiagonalStance2(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1059, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_Mmat_vision60_DiagonalStance2_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_MMAT_VISION60_DIAGONALSTANCE2_HH
