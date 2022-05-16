/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:32:39 GMT+02:00
 */

#ifndef JS_INITIAL_SWING_VELOCITY_FLFOOT_DIAGONALSTANCE_HH
#define JS_INITIAL_SWING_VELOCITY_FLFOOT_DIAGONALSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace DiagonalStance
{

  void Js_initial_swing_velocity_FlFoot_DiagonalStance_raw(double *p_output1, const double *var1);

  inline void Js_initial_swing_velocity_FlFoot_DiagonalStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 37, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_initial_swing_velocity_FlFoot_DiagonalStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_INITIAL_SWING_VELOCITY_FLFOOT_DIAGONALSTANCE_HH
