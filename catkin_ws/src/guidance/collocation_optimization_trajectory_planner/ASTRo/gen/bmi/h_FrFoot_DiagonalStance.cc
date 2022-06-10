/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:49:11 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t130;
  double t243;
  double t254;
  double t267;
  double t353;
  double t382;
  double t154;
  double t606;
  double t423;
  double t428;
  double t724;
  double t992;
  double t1002;
  double t1025;
  double t1044;
  double t1199;
  double t1229;
  double t1245;
  double t1354;
  double t1380;
  double t1384;
  double t1393;
  double t277;
  double t391;
  double t1770;
  double t596;
  double t600;
  double t1909;
  double t1865;
  double t2011;
  double t2035;
  double t2057;
  double t2085;
  double t2086;
  double t741;
  double t986;
  double t1058;
  double t1110;
  double t2312;
  double t2370;
  double t2373;
  double t2513;
  double t2574;
  double t2581;
  double t2678;
  double t2763;
  double t2769;
  double t3139;
  double t3170;
  double t3202;
  double t3211;
  double t3213;
  double t3216;
  double t3361;
  double t3365;
  double t3366;
  double t3401;
  double t3435;
  double t3449;
  double t3479;
  double t3482;
  double t3483;
  t130 = Cos(var1[4]);
  t243 = Cos(var1[12]);
  t254 = -1.*t243;
  t267 = 1. + t254;
  t353 = Sin(var1[12]);
  t382 = -0.15121*t353;
  t154 = Cos(var1[5]);
  t606 = Sin(var1[5]);
  t423 = Sin(var1[13]);
  t428 = Sin(var1[4]);
  t724 = Cos(var1[13]);
  t992 = t243*t130*t154;
  t1002 = -1.*t130*t353*t606;
  t1025 = t992 + t1002;
  t1044 = Cos(var1[14]);
  t1199 = -1.*t423*t428;
  t1229 = t724*t1025;
  t1245 = t1199 + t1229;
  t1354 = Sin(var1[14]);
  t1380 = t724*t428;
  t1384 = t423*t1025;
  t1393 = t1380 + t1384;
  t277 = 0.15121*t267;
  t391 = t277 + t382;
  t1770 = Sin(var1[3]);
  t596 = -0.15121*t267;
  t600 = t596 + t382;
  t1909 = Cos(var1[3]);
  t1865 = t154*t1770*t428;
  t2011 = t1909*t606;
  t2035 = t1865 + t2011;
  t2057 = t1909*t154;
  t2085 = -1.*t1770*t428*t606;
  t2086 = t2057 + t2085;
  t741 = -1.*t724;
  t986 = 1. + t741;
  t1058 = -1.*t1044;
  t1110 = 1. + t1058;
  t2312 = t243*t2035;
  t2370 = t353*t2086;
  t2373 = t2312 + t2370;
  t2513 = t130*t423*t1770;
  t2574 = t724*t2373;
  t2581 = t2513 + t2574;
  t2678 = -1.*t724*t130*t1770;
  t2763 = t423*t2373;
  t2769 = t2678 + t2763;
  t3139 = -1.*t1909*t154*t428;
  t3170 = t1770*t606;
  t3202 = t3139 + t3170;
  t3211 = t154*t1770;
  t3213 = t1909*t428*t606;
  t3216 = t3211 + t3213;
  t3361 = t243*t3202;
  t3365 = t353*t3216;
  t3366 = t3361 + t3365;
  t3401 = -1.*t1909*t130*t423;
  t3435 = t724*t3366;
  t3449 = t3401 + t3435;
  t3479 = t724*t1909*t130;
  t3482 = t423*t3366;
  t3483 = t3479 + t3482;
  p_output1[0]=0.50321*t1110*t1245 - 0.50321*t1354*t1393 + 0.19821*(t1044*t1245 + t1354*t1393) + t130*t154*t391 + 0.28121*t423*t428 - 1.*t130*t600*t606 - 0.15121*(-1.*t130*t154*t353 - 1.*t130*t243*t606) + 0.28121*t1025*t986 + var1[0] - 1.*var2[0];
  p_output1[1]=0.50321*t1110*t2581 - 0.50321*t1354*t2769 + 0.19821*(t1044*t2581 + t1354*t2769) - 0.15121*(t2086*t243 - 1.*t2035*t353) + t2035*t391 - 0.28121*t130*t1770*t423 + t2086*t600 + 0.28121*t2373*t986 + var1[1] - 1.*var2[1];
  p_output1[2]=0.50321*t1110*t3449 - 0.50321*t1354*t3483 + 0.19821*(t1044*t3449 + t1354*t3483) - 0.15121*(t243*t3216 - 1.*t3202*t353) + t3202*t391 + 0.28121*t130*t1909*t423 + t3216*t600 + 0.28121*t3366*t986 + var1[2] - 1.*var2[2];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_FrFoot_DiagonalStance.hh"

namespace SymFunction
{

void h_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
