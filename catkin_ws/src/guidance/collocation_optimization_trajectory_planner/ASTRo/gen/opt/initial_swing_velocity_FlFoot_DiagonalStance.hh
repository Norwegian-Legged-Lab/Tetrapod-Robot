/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:36:15 GMT+02:00
 */

#ifndef INITIAL_SWING_VELOCITY_FLFOOT_DIAGONALSTANCE_HH
#define INITIAL_SWING_VELOCITY_FLFOOT_DIAGONALSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace DiagonalStance
{

  void initial_swing_velocity_FlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2);

  inline void initial_swing_velocity_FlFoot_DiagonalStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);
    assert_size_matrix(var2, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    initial_swing_velocity_FlFoot_DiagonalStance_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // INITIAL_SWING_VELOCITY_FLFOOT_DIAGONALSTANCE_HH
