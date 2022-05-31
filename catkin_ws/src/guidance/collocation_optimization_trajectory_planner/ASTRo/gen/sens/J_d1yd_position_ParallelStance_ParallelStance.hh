/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:48:31 GMT+02:00
 */

#ifndef J_D1YD_POSITION_PARALLELSTANCE_PARALLELSTANCE_HH
#define J_D1YD_POSITION_PARALLELSTANCE_PARALLELSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void J_d1yd_position_ParallelStance_ParallelStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3);

  inline void J_d1yd_position_ParallelStance_ParallelStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);
    assert_size_matrix(var2, 84, 1);
    assert_size_matrix(var3, 2, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 126, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_d1yd_position_ParallelStance_ParallelStance_raw(p_output1.data(), var1.data(),var2.data(),var3.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_D1YD_POSITION_PARALLELSTANCE_PARALLELSTANCE_HH
