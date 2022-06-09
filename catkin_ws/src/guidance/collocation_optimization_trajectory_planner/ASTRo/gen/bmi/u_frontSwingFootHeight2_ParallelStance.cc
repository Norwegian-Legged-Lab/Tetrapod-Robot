/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 17:58:52 GMT+02:00
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
  double t4806;
  double t4787;
  double t4807;
  double t4792;
  double t4810;
  double t4819;
  double t4820;
  double t4821;
  double t4822;
  double t4823;
  double t4805;
  double t4815;
  double t4816;
  double t4831;
  double t4842;
  double t4843;
  double t4896;
  double t4906;
  double t4913;
  double t4914;
  double t4920;
  double t4924;
  double t4931;
  double t4934;
  double t4937;
  double t4938;
  double t4941;
  double t4942;
  double t4952;
  double t4956;
  t4806 = Cos(var1[3]);
  t4787 = Cos(var1[5]);
  t4807 = Sin(var1[4]);
  t4792 = Sin(var1[3]);
  t4810 = Sin(var1[5]);
  t4819 = Cos(var1[6]);
  t4820 = -1.*t4819;
  t4821 = 1. + t4820;
  t4822 = 0.15121*t4821;
  t4823 = Sin(var1[6]);
  t4805 = t4787*t4792;
  t4815 = t4806*t4807*t4810;
  t4816 = t4805 + t4815;
  t4831 = -1.*t4806*t4787*t4807;
  t4842 = t4792*t4810;
  t4843 = t4831 + t4842;
  t4896 = Cos(var1[7]);
  t4906 = t4819*t4843;
  t4913 = t4816*t4823;
  t4914 = t4906 + t4913;
  t4920 = Cos(var1[4]);
  t4924 = Sin(var1[7]);
  t4931 = Cos(var1[8]);
  t4934 = t4896*t4914;
  t4937 = -1.*t4806*t4920*t4924;
  t4938 = t4934 + t4937;
  t4941 = t4806*t4920*t4896;
  t4942 = t4914*t4924;
  t4952 = t4941 + t4942;
  t4956 = Sin(var1[8]);
  p_output1[0]=t4816*(t4822 - 0.15121*t4823) + (t4822 + 0.15121*t4823)*t4843 + 0.15121*(t4816*t4819 - 1.*t4823*t4843) + 0.28121*(1. - 1.*t4896)*t4914 + 0.28121*t4806*t4920*t4924 + 0.50321*(1. - 1.*t4931)*t4938 - 0.50321*t4952*t4956 + 0.19821*(t4931*t4938 + t4952*t4956) + var1[2];
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

#include "u_frontSwingFootHeight2_ParallelStance.hh"

namespace SymFunction
{

void u_frontSwingFootHeight2_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
