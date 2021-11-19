/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:31:59 GMT+01:00
 */

#ifndef TIMEDURATION_HH
#define TIMEDURATION_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace ParallelStance2
{

  void timeDuration_raw(double *p_output1, const double *var1);

  inline void timeDuration(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 2, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    timeDuration_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // TIMEDURATION_HH
