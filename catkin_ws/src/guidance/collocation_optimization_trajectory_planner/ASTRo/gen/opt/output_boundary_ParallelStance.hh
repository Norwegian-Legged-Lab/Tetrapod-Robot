/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:54:57 GMT+02:00
 */

#ifndef OUTPUT_BOUNDARY_PARALLELSTANCE_HH
#define OUTPUT_BOUNDARY_PARALLELSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace ParallelStance
{

  void output_boundary_ParallelStance_raw(double *p_output1, const double *var1);

  inline void output_boundary_ParallelStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 4, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    output_boundary_ParallelStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // OUTPUT_BOUNDARY_PARALLELSTANCE_HH