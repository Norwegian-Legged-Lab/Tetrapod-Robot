/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 12:55:36 GMT+01:00
 */

#ifndef IMPACT_VELOCITY_FRFOOTDIAGONALSTANCE2_HH
#define IMPACT_VELOCITY_FRFOOTDIAGONALSTANCE2_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace TrotStance2
{

  void impact_velocity_FrFootDiagonalStance2_raw(double *p_output1, const double *var1,const double *var2);

  inline void impact_velocity_FrFootDiagonalStance2(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
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
    impact_velocity_FrFootDiagonalStance2_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // IMPACT_VELOCITY_FRFOOTDIAGONALSTANCE2_HH
