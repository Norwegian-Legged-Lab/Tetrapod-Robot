/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:18:59 GMT+01:00
 */

#ifndef J_IMPACT_VELOCITY_RLFOOT_HH
#define J_IMPACT_VELOCITY_RLFOOT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace TrotStance2
{

  void J_impact_velocity_RlFoot_raw(double *p_output1, const double *var1,const double *var2);

  inline void J_impact_velocity_RlFoot(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);
    assert_size_matrix(var2, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 37, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_impact_velocity_RlFoot_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_IMPACT_VELOCITY_RLFOOT_HH
