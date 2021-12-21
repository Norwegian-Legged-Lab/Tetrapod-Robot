/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:19:51 GMT+01:00
 */

#ifndef XPARTIALDISCRETEMAPTROTIMPACT2_HH
#define XPARTIALDISCRETEMAPTROTIMPACT2_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace TrotImpact2
{

  void xPartialDiscreteMapTrotImpact2_raw(double *p_output1, const double *var1,const double *var2);

  inline void xPartialDiscreteMapTrotImpact2(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);
    assert_size_matrix(var2, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 12, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    xPartialDiscreteMapTrotImpact2_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // XPARTIALDISCRETEMAPTROTIMPACT2_HH
