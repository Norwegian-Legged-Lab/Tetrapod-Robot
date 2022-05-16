/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:42:28 GMT+02:00
 */

#ifndef J_STEP_DISTANCE_REAR_DIAGONALSTANCE_HH
#define J_STEP_DISTANCE_REAR_DIAGONALSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace DiagonalStance
{

  void J_step_distance_rear_DiagonalStance_raw(double *p_output1, const double *var1);

  inline void J_step_distance_rear_DiagonalStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 17, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_step_distance_rear_DiagonalStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_STEP_DISTANCE_REAR_DIAGONALSTANCE_HH
