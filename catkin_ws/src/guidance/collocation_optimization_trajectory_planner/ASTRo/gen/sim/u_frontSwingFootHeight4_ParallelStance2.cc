/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:38:14 GMT+02:00
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
  double t5696;
  double t14135;
  double t14141;
  double t14970;
  double t15171;
  double t15174;
  double t15179;
  double t15223;
  double t15180;
  double t15227;
  double t15182;
  double t15228;
  double t15229;
  double t15245;
  double t15246;
  double t15248;
  double t12455;
  double t13014;
  double t15283;
  double t15287;
  double t15289;
  double t15290;
  double t15298;
  double t15301;
  double t15304;
  double t15305;
  double t15315;
  double t15316;
  double t15318;
  double t15431;
  t5696 = Cos(var1[3]);
  t14135 = Cos(var1[12]);
  t14141 = -1.*t14135;
  t14970 = 1. + t14141;
  t15171 = Sin(var1[12]);
  t15174 = -0.15121*t15171;
  t15179 = Cos(var1[5]);
  t15223 = Sin(var1[3]);
  t15180 = Sin(var1[4]);
  t15227 = Sin(var1[5]);
  t15182 = -1.*t5696*t15179*t15180;
  t15228 = t15223*t15227;
  t15229 = t15182 + t15228;
  t15245 = t15179*t15223;
  t15246 = t5696*t15180*t15227;
  t15248 = t15245 + t15246;
  t12455 = Cos(var1[4]);
  t13014 = Sin(var1[13]);
  t15283 = Cos(var1[13]);
  t15287 = t14135*t15229;
  t15289 = t15171*t15248;
  t15290 = t15287 + t15289;
  t15298 = Cos(var1[14]);
  t15301 = -1.*t5696*t12455*t13014;
  t15304 = t15283*t15290;
  t15305 = t15301 + t15304;
  t15315 = Sin(var1[14]);
  t15316 = t15283*t5696*t12455;
  t15318 = t13014*t15290;
  t15431 = t15316 + t15318;
  p_output1[0]=(0.15121*t14970 + t15174)*t15229 + (-0.15121*t14970 + t15174)*t15248 - 0.15121*(-1.*t15171*t15229 + t14135*t15248) + 0.28121*(1. - 1.*t15283)*t15290 + 0.50321*(1. - 1.*t15298)*t15305 - 0.50321*t15315*t15431 + 0.19821*(t15298*t15305 + t15315*t15431) + 0.28121*t12455*t13014*t5696 + var1[2];
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

#include "u_frontSwingFootHeight4_ParallelStance2.hh"

namespace SymFunction
{

void u_frontSwingFootHeight4_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
