/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 18:25:21 GMT+02:00
 */

#ifndef J_JEDOT_PARALLELSTANCE_HH
#define J_JEDOT_PARALLELSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void J_Jedot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2);

  inline void J_Jedot_ParallelStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);
    assert_size_matrix(var2, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 386, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_Jedot_ParallelStance_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_JEDOT_PARALLELSTANCE_HH
