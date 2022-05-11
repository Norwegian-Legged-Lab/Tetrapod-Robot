/*
 * Automatically Generated from Mathematica.
 * Thu 28 Apr 2022 15:24:35 GMT+02:00
 */

#ifndef FFLFOOT_MAP_PARALLELSTANCE2_HH
#define FFLFOOT_MAP_PARALLELSTANCE2_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void fFlFoot_map_ParallelStance2_raw(double *p_output1, const double *var1);

  inline void fFlFoot_map_ParallelStance2(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 18, 3);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    fFlFoot_map_ParallelStance2_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // FFLFOOT_MAP_PARALLELSTANCE2_HH
