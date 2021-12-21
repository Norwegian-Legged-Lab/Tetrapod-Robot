/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:12:07 GMT+01:00
 */

#ifndef STEP_DISTANCE_PARALLELSTANCE1_HH
#define STEP_DISTANCE_PARALLELSTANCE1_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace ParallelStance1
{

  void step_distance_ParallelStance1_raw(double *p_output1, const double *var1);

  inline void step_distance_ParallelStance1(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 2, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    step_distance_ParallelStance1_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // STEP_DISTANCE_PARALLELSTANCE1_HH
