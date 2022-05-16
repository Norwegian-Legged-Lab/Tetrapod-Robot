/*
 * Automatically Generated from Mathematica.
 * Fri 4 Feb 2022 15:52:15 GMT+01:00
 */

#ifndef RLFOOT_SPHERE_CENTER_HH
#define RLFOOT_SPHERE_CENTER_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void RlFoot_sphere_center_raw(double *p_output1, const double *var1);

  inline void RlFoot_sphere_center(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    RlFoot_sphere_center_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // RLFOOT_SPHERE_CENTER_HH