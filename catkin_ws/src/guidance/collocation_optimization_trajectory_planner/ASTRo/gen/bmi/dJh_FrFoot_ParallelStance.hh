/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:22 GMT+02:00
 */

#ifndef DJH_FRFOOT_PARALLELSTANCE_HH
#define DJH_FRFOOT_PARALLELSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void dJh_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2);

  inline void dJh_FrFoot_ParallelStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);
    assert_size_matrix(var2, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 18);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    dJh_FrFoot_ParallelStance_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // DJH_FRFOOT_PARALLELSTANCE_HH
