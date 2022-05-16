/*
 * Automatically Generated from Mathematica.
 * Fri 13 May 2022 14:24:42 GMT+02:00
 */

#ifndef LINK_UPPER1_TO_3_BAR_HH
#define LINK_UPPER1_TO_3_BAR_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Link_upper1_to_3_bar_raw(double *p_output1, const double *var1);

  inline void Link_upper1_to_3_bar(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 20, 6);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Link_upper1_to_3_bar_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // LINK_UPPER1_TO_3_BAR_HH
