/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 17:01:21 GMT+02:00
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
  double t269;
  double t118;
  double t403;
  double t191;
  double t444;
  double t457;
  double t559;
  double t563;
  double t628;
  double t660;
  double t221;
  double t453;
  double t455;
  double t926;
  double t927;
  double t963;
  double t1243;
  double t1263;
  double t1266;
  double t1272;
  double t1284;
  double t1301;
  double t1334;
  double t1372;
  double t1374;
  double t1378;
  double t1384;
  double t1531;
  double t1546;
  double t1589;
  t269 = Cos(var1[3]);
  t118 = Cos(var1[5]);
  t403 = Sin(var1[4]);
  t191 = Sin(var1[3]);
  t444 = Sin(var1[5]);
  t457 = Cos(var1[6]);
  t559 = -1.*t457;
  t563 = 1. + t559;
  t628 = 0.15121*t563;
  t660 = Sin(var1[6]);
  t221 = t118*t191;
  t453 = t269*t403*t444;
  t455 = t221 + t453;
  t926 = -1.*t269*t118*t403;
  t927 = t191*t444;
  t963 = t926 + t927;
  t1243 = Cos(var1[7]);
  t1263 = t457*t963;
  t1266 = t455*t660;
  t1272 = t1263 + t1266;
  t1284 = Cos(var1[4]);
  t1301 = Sin(var1[7]);
  t1334 = Cos(var1[8]);
  t1372 = t1243*t1272;
  t1374 = -1.*t269*t1284*t1301;
  t1378 = t1372 + t1374;
  t1384 = t269*t1284*t1243;
  t1531 = t1272*t1301;
  t1546 = t1384 + t1531;
  t1589 = Sin(var1[8]);
  p_output1[0]=0.28121*(1. - 1.*t1243)*t1272 + 0.50321*(1. - 1.*t1334)*t1378 - 0.50321*t1546*t1589 + 0.19821*(t1334*t1378 + t1546*t1589) + 0.28121*t1284*t1301*t269 + t455*(t628 - 0.15121*t660) + (t628 + 0.15121*t660)*t963 + 0.15121*(t455*t457 - 1.*t660*t963) + var1[2];
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

#include "foot_clearance_FlFoot_ParallelStance.hh"

namespace ParallelStance
{

void foot_clearance_FlFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
