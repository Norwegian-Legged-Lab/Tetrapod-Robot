/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 15:18:36 GMT+01:00
 */

#ifndef LINK_RL_CALF_TO_RL_FOOT_BAR_HH
#define LINK_RL_CALF_TO_RL_FOOT_BAR_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Link_rl_calf_to_rl_foot_bar_raw(double *p_output1, const double *var1);

  inline void Link_rl_calf_to_rl_foot_bar(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 20, 6);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Link_rl_calf_to_rl_foot_bar_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // LINK_RL_CALF_TO_RL_FOOT_BAR_HH
