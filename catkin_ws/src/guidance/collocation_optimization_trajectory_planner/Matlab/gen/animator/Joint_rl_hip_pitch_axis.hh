/*
 * Automatically Generated from Mathematica.
 * Fri 4 Feb 2022 15:52:02 GMT+01:00
 */

#ifndef JOINT_RL_HIP_PITCH_AXIS_HH
#define JOINT_RL_HIP_PITCH_AXIS_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Joint_rl_hip_pitch_axis_raw(double *p_output1, const double *var1);

  inline void Joint_rl_hip_pitch_axis(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Joint_rl_hip_pitch_axis_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JOINT_RL_HIP_PITCH_AXIS_HH
