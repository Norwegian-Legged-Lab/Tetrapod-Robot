/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:11:45 GMT+01:00
 */

#ifndef J_Y_POSITION_PARALLELSTANCE1_HH
#define J_Y_POSITION_PARALLELSTANCE1_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace ParallelStance1
{

  void J_y_position_ParallelStance1_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6);

  inline void J_y_position_ParallelStance1(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3,const Eigen::VectorXd &var4,const Eigen::VectorXd &var5,const Eigen::VectorXd &var6)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 2, 1);
    assert_size_matrix(var2, 18, 1);
    assert_size_matrix(var3, 60, 1);
    assert_size_matrix(var4, 2, 1);
    assert_size_matrix(var5, 1, 1);
    assert_size_matrix(var6, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 156, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_y_position_ParallelStance1_raw(p_output1.data(), var1.data(),var2.data(),var3.data(),var4.data(),var5.data(),var6.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_Y_POSITION_PARALLELSTANCE1_HH
