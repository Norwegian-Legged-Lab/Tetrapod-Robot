/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:04:19 GMT+02:00
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
  double t5775;
  double t4650;
  double t6478;
  double t4772;
  double t9363;
  double t11867;
  double t12008;
  double t12257;
  double t12340;
  double t12352;
  double t5540;
  double t9536;
  double t10079;
  double t12578;
  double t12630;
  double t12635;
  double t13053;
  double t13172;
  double t13173;
  double t13179;
  double t13236;
  double t13238;
  double t13243;
  double t13300;
  double t13304;
  double t13308;
  double t13310;
  double t13311;
  double t13319;
  double t13335;
  t5775 = Cos(var1[3]);
  t4650 = Cos(var1[5]);
  t6478 = Sin(var1[4]);
  t4772 = Sin(var1[3]);
  t9363 = Sin(var1[5]);
  t11867 = Cos(var1[6]);
  t12008 = -1.*t11867;
  t12257 = 1. + t12008;
  t12340 = 0.15121*t12257;
  t12352 = Sin(var1[6]);
  t5540 = t4650*t4772;
  t9536 = t5775*t6478*t9363;
  t10079 = t5540 + t9536;
  t12578 = -1.*t5775*t4650*t6478;
  t12630 = t4772*t9363;
  t12635 = t12578 + t12630;
  t13053 = Cos(var1[7]);
  t13172 = t11867*t12635;
  t13173 = t10079*t12352;
  t13179 = t13172 + t13173;
  t13236 = Cos(var1[4]);
  t13238 = Sin(var1[7]);
  t13243 = Cos(var1[8]);
  t13300 = t13053*t13179;
  t13304 = -1.*t5775*t13236*t13238;
  t13308 = t13300 + t13304;
  t13310 = t5775*t13236*t13053;
  t13311 = t13179*t13238;
  t13319 = t13310 + t13311;
  t13335 = Sin(var1[8]);
  p_output1[0]=t10079*(t12340 - 0.15121*t12352) + (t12340 + 0.15121*t12352)*t12635 + 0.15121*(t10079*t11867 - 1.*t12352*t12635) + 0.28121*(1. - 1.*t13053)*t13179 + 0.50321*(1. - 1.*t13243)*t13308 - 0.50321*t13319*t13335 + 0.19821*(t13243*t13308 + t13319*t13335) + 0.28121*t13236*t13238*t5775 + var1[2];
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

#include "u_frontSwingFootHeightflat_ParallelStance.hh"

namespace SymFunction
{

void u_frontSwingFootHeightflat_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
