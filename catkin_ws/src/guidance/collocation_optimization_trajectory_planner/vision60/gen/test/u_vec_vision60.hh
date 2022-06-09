/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 10:40:23 GMT+02:00
 */

#ifndef U_VEC_VISION60_HH
#define U_VEC_VISION60_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void u_vec_vision60_raw(double *p_output1, const double *var1,const double *var2);

  inline void u_vec_vision60(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);
    assert_size_matrix(var2, 12, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 18, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    u_vec_vision60_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // U_VEC_VISION60_HH
