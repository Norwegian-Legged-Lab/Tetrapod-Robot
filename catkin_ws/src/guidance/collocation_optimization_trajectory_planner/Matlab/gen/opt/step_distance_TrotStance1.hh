/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:16:47 GMT+01:00
 */

#ifndef STEP_DISTANCE_TROTSTANCE1_HH
#define STEP_DISTANCE_TROTSTANCE1_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace TrotStance1
{

  void step_distance_TrotStance1_raw(double *p_output1, const double *var1);

  inline void step_distance_TrotStance1(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 2, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    step_distance_TrotStance1_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // STEP_DISTANCE_TROTSTANCE1_HH
