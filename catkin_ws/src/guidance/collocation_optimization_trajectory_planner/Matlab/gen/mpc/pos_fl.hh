/*
 * Automatically Generated from Mathematica.
 * Tue 16 Nov 2021 21:24:56 GMT+01:00
 */

#ifndef POS_FL_HH
#define POS_FL_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void pos_fl_raw(double *p_output1, const double *var1);

  inline void pos_fl(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 9, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    pos_fl_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // POS_FL_HH
