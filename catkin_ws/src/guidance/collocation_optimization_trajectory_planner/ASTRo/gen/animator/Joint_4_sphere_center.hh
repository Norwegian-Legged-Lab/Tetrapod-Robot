/*
 * Automatically Generated from Mathematica.
 * Fri 13 May 2022 14:24:47 GMT+02:00
 */

#ifndef JOINT_4_SPHERE_CENTER_HH
#define JOINT_4_SPHERE_CENTER_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Joint_4_sphere_center_raw(double *p_output1, const double *var1);

  inline void Joint_4_sphere_center(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Joint_4_sphere_center_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JOINT_4_SPHERE_CENTER_HH