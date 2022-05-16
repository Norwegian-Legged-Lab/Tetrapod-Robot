/*
 * Automatically Generated from Mathematica.
 * Fri 13 May 2022 14:25:00 GMT+02:00
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
  double t80;
  double t389;
  double t697;
  double t699;
  double t1451;
  double t1827;
  double t385;
  double t2422;
  double t1903;
  double t1925;
  double t2601;
  double t2663;
  double t2666;
  double t2703;
  double t2733;
  double t2780;
  double t2781;
  double t2785;
  double t2795;
  double t2798;
  double t2817;
  double t2831;
  double t1196;
  double t1896;
  double t2907;
  double t2056;
  double t2127;
  double t2927;
  double t2925;
  double t2929;
  double t2944;
  double t2955;
  double t2962;
  double t2967;
  double t2634;
  double t2655;
  double t2749;
  double t2777;
  double t2985;
  double t2988;
  double t2989;
  double t2994;
  double t3001;
  double t3002;
  double t3047;
  double t3052;
  double t3084;
  double t3195;
  double t3211;
  double t3221;
  double t3266;
  double t3280;
  double t3291;
  double t3389;
  double t3399;
  double t3404;
  double t3430;
  double t3432;
  double t3447;
  double t3474;
  double t3478;
  double t3479;
  t80 = Cos(var1[4]);
  t389 = Cos(var1[9]);
  t697 = -1.*t389;
  t699 = 1. + t697;
  t1451 = Sin(var1[9]);
  t1827 = 0.15121*t1451;
  t385 = Cos(var1[5]);
  t2422 = Sin(var1[5]);
  t1903 = Sin(var1[10]);
  t1925 = Sin(var1[4]);
  t2601 = Cos(var1[10]);
  t2663 = t389*t80*t385;
  t2666 = -1.*t80*t1451*t2422;
  t2703 = t2663 + t2666;
  t2733 = Cos(var1[11]);
  t2780 = t1903*t1925;
  t2781 = t2601*t2703;
  t2785 = t2780 + t2781;
  t2795 = Sin(var1[11]);
  t2798 = t2601*t1925;
  t2817 = -1.*t1903*t2703;
  t2831 = t2798 + t2817;
  t1196 = -0.15121*t699;
  t1896 = t1196 + t1827;
  t2907 = Sin(var1[3]);
  t2056 = 0.15121*t699;
  t2127 = t2056 + t1827;
  t2927 = Cos(var1[3]);
  t2925 = t385*t2907*t1925;
  t2929 = t2927*t2422;
  t2944 = t2925 + t2929;
  t2955 = t2927*t385;
  t2962 = -1.*t2907*t1925*t2422;
  t2967 = t2955 + t2962;
  t2634 = -1.*t2601;
  t2655 = 1. + t2634;
  t2749 = -1.*t2733;
  t2777 = 1. + t2749;
  t2985 = t389*t2944;
  t2988 = t1451*t2967;
  t2989 = t2985 + t2988;
  t2994 = -1.*t80*t1903*t2907;
  t3001 = t2601*t2989;
  t3002 = t2994 + t3001;
  t3047 = -1.*t2601*t80*t2907;
  t3052 = -1.*t1903*t2989;
  t3084 = t3047 + t3052;
  t3195 = -1.*t2927*t385*t1925;
  t3211 = t2907*t2422;
  t3221 = t3195 + t3211;
  t3266 = t385*t2907;
  t3280 = t2927*t1925*t2422;
  t3291 = t3266 + t3280;
  t3389 = t389*t3221;
  t3399 = t1451*t3291;
  t3404 = t3389 + t3399;
  t3430 = t2927*t80*t1903;
  t3432 = t2601*t3404;
  t3447 = t3430 + t3432;
  t3474 = t2601*t2927*t80;
  t3478 = -1.*t1903*t3404;
  t3479 = t3474 + t3478;
  p_output1[0]=0.28121*t1903*t1925 - 0.28121*t2655*t2703 - 0.50321*t2777*t2785 - 0.50321*t2795*t2831 - 0.23321*(t2733*t2785 - 1.*t2795*t2831) - 1.*t2127*t2422*t80 + t1896*t385*t80 + 0.15121*(-1.*t1451*t385*t80 - 1.*t2422*t389*t80) + var1[0];
  p_output1[1]=t1896*t2944 + t2127*t2967 - 0.28121*t2655*t2989 - 0.50321*t2777*t3002 - 0.50321*t2795*t3084 - 0.23321*(t2733*t3002 - 1.*t2795*t3084) + 0.15121*(-1.*t1451*t2944 + t2967*t389) - 0.28121*t1903*t2907*t80 + var1[1];
  p_output1[2]=t1896*t3221 + t2127*t3291 - 0.28121*t2655*t3404 - 0.50321*t2777*t3447 - 0.50321*t2795*t3479 - 0.23321*(t2733*t3447 - 1.*t2795*t3479) + 0.15121*(-1.*t1451*t3221 + t3291*t389) + 0.28121*t1903*t2927*t80 + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "RlFoot_sphere_center.hh"

namespace SymFunction
{

void RlFoot_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
