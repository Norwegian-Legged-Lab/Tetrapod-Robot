/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:42:16 GMT+02:00
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
  double t10;
  double t902;
  double t1001;
  double t1167;
  double t1404;
  double t1615;
  double t1708;
  double t2179;
  double t2021;
  double t2309;
  double t2051;
  double t2380;
  double t2386;
  double t2710;
  double t2758;
  double t2836;
  double t247;
  double t548;
  double t3021;
  double t3038;
  double t3056;
  double t3092;
  double t3111;
  double t3147;
  double t3160;
  double t3166;
  double t3231;
  double t3321;
  double t3379;
  double t3444;
  t10 = Cos(var1[3]);
  t902 = Cos(var1[15]);
  t1001 = -1.*t902;
  t1167 = 1. + t1001;
  t1404 = -0.15121*t1167;
  t1615 = Sin(var1[15]);
  t1708 = Cos(var1[5]);
  t2179 = Sin(var1[3]);
  t2021 = Sin(var1[4]);
  t2309 = Sin(var1[5]);
  t2051 = -1.*t10*t1708*t2021;
  t2380 = t2179*t2309;
  t2386 = t2051 + t2380;
  t2710 = t1708*t2179;
  t2758 = t10*t2021*t2309;
  t2836 = t2710 + t2758;
  t247 = Cos(var1[4]);
  t548 = Sin(var1[16]);
  t3021 = Cos(var1[16]);
  t3038 = t902*t2386;
  t3056 = t1615*t2836;
  t3092 = t3038 + t3056;
  t3111 = Cos(var1[17]);
  t3147 = t10*t247*t548;
  t3160 = t3021*t3092;
  t3166 = t3147 + t3160;
  t3231 = Sin(var1[17]);
  t3321 = t3021*t10*t247;
  t3379 = -1.*t548*t3092;
  t3444 = t3321 + t3379;
  p_output1[0]=(t1404 - 0.15121*t1615)*t2386 + (t1404 + 0.15121*t1615)*t2836 - 0.28121*(1. - 1.*t3021)*t3092 - 0.50321*(1. - 1.*t3111)*t3166 - 0.50321*t3231*t3444 - 0.23321*(t3111*t3166 - 1.*t3231*t3444) + 0.28121*t10*t247*t548 - 0.15121*(-1.*t1615*t2386 + t2836*t902) + var1[2];
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

#include "foot_clearance_RrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void foot_clearance_RrFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
