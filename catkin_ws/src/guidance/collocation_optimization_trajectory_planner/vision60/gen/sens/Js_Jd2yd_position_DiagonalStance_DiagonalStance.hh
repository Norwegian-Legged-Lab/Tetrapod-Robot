/*
 * Automatically Generated from Mathematica.
 * Wed 6 Apr 2022 13:25:38 GMT+02:00
 */

#ifndef JS_JD2YD_POSITION_DIAGONALSTANCE_DIAGONALSTANCE_HH
#define JS_JD2YD_POSITION_DIAGONALSTANCE_DIAGONALSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Js_Jd2yd_position_DiagonalStance_DiagonalStance_raw(double *p_output1, const double *var1);

  inline void Js_Jd2yd_position_DiagonalStance_DiagonalStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 126, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_Jd2yd_position_DiagonalStance_DiagonalStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_JD2YD_POSITION_DIAGONALSTANCE_DIAGONALSTANCE_HH
