/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:37:57 GMT+02:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t3652;
  double t12396;
  double t14038;
  double t14120;
  double t15700;
  double t15703;
  double t15742;
  double t15758;
  double t15743;
  double t15760;
  double t15746;
  double t15762;
  double t15764;
  double t15778;
  double t15779;
  double t15793;
  double t3805;
  double t3921;
  double t15807;
  double t15822;
  double t15823;
  double t15825;
  double t15828;
  double t15831;
  double t15832;
  double t15833;
  double t15840;
  double t15841;
  double t15843;
  double t15844;
  t3652 = Cos(var1[3]);
  t12396 = Cos(var1[9]);
  t14038 = -1.*t12396;
  t14120 = 1. + t14038;
  t15700 = Sin(var1[9]);
  t15703 = 0.15121*t15700;
  t15742 = Cos(var1[5]);
  t15758 = Sin(var1[3]);
  t15743 = Sin(var1[4]);
  t15760 = Sin(var1[5]);
  t15746 = -1.*t3652*t15742*t15743;
  t15762 = t15758*t15760;
  t15764 = t15746 + t15762;
  t15778 = t15742*t15758;
  t15779 = t3652*t15743*t15760;
  t15793 = t15778 + t15779;
  t3805 = Cos(var1[4]);
  t3921 = Sin(var1[10]);
  t15807 = Cos(var1[10]);
  t15822 = t12396*t15764;
  t15823 = t15700*t15793;
  t15825 = t15822 + t15823;
  t15828 = Cos(var1[11]);
  t15831 = t3652*t3805*t3921;
  t15832 = t15807*t15825;
  t15833 = t15831 + t15832;
  t15840 = Sin(var1[11]);
  t15841 = t15807*t3652*t3805;
  t15843 = -1.*t3921*t15825;
  t15844 = t15841 + t15843;
  p_output1[0]=(-0.15121*t14120 + t15703)*t15764 + (0.15121*t14120 + t15703)*t15793 + 0.15121*(-1.*t15700*t15764 + t12396*t15793) - 0.28121*(1. - 1.*t15807)*t15825 - 0.50321*(1. - 1.*t15828)*t15833 - 0.50321*t15840*t15844 - 0.19821*(t15828*t15833 - 1.*t15840*t15844) + 0.28121*t3652*t3805*t3921 + var1[2];
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "u_rearSwingFootHeight3_DiagonalStance2.hh"

namespace SymFunction
{

void u_rearSwingFootHeight3_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
