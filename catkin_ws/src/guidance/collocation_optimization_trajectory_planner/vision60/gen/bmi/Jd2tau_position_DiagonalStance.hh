/*
 * Automatically Generated from Mathematica.
 * Thu 28 Apr 2022 15:23:48 GMT+02:00
 */

#ifndef JD2TAU_POSITION_DIAGONALSTANCE_HH
#define JD2TAU_POSITION_DIAGONALSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Jd2tau_position_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2);

  inline void Jd2tau_position_DiagonalStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);
    assert_size_matrix(var2, 2, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Jd2tau_position_DiagonalStance_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JD2TAU_POSITION_DIAGONALSTANCE_HH