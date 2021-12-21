/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 22:33:13 GMT+01:00
 */

#ifndef DDH_FLFOOT_QUADRUPLESTANCE_HH
#define DDH_FLFOOT_QUADRUPLESTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace QuadrupleStance
{

  void ddh_FlFoot_QuadrupleStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4);

  inline void ddh_FlFoot_QuadrupleStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3,const Eigen::VectorXd &var4)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);
    assert_size_matrix(var2, 18, 1);
    assert_size_matrix(var3, 18, 1);
    assert_size_matrix(var4, 3, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    ddh_FlFoot_QuadrupleStance_raw(p_output1.data(), var1.data(),var2.data(),var3.data(),var4.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // DDH_FLFOOT_QUADRUPLESTANCE_HH
