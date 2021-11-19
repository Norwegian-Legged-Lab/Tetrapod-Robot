/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 18:01:43 GMT+01:00
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
  double t89;
  double t446;
  double t495;
  double t1248;
  double t649;
  double t1520;
  double t1309;
  double t1355;
  double t1568;
  double t870;
  double t2198;
  double t1499;
  double t2034;
  double t2078;
  double t2262;
  double t2305;
  double t2344;
  double t574;
  double t2461;
  double t799;
  double t869;
  double t892;
  double t925;
  double t2853;
  double t2870;
  double t2199;
  double t2240;
  double t2867;
  double t2887;
  double t2954;
  double t2991;
  double t3036;
  double t3046;
  double t2474;
  double t2515;
  double t2516;
  double t2983;
  double t3050;
  double t3055;
  double t2533;
  double t2540;
  double t3115;
  double t3128;
  double t3137;
  double t2699;
  double t2715;
  double t2722;
  double t2740;
  double t2765;
  double t2778;
  double t3248;
  double t3249;
  double t3251;
  double t3273;
  double t3320;
  double t3344;
  double t3254;
  double t3345;
  double t3347;
  double t3354;
  double t3384;
  double t3388;
  t89 = Cos(var1[16]);
  t446 = -1.*t89;
  t495 = 1. + t446;
  t1248 = Cos(var1[4]);
  t649 = Sin(var1[16]);
  t1520 = Cos(var1[15]);
  t1309 = Cos(var1[5]);
  t1355 = Sin(var1[15]);
  t1568 = Sin(var1[5]);
  t870 = Sin(var1[4]);
  t2198 = -7.e-6*t495;
  t1499 = -1.*t1248*t1309*t1355;
  t2034 = -1.*t1520*t1248*t1568;
  t2078 = t1499 + t2034;
  t2262 = t1520*t1248*t1309;
  t2305 = -1.*t1248*t1355*t1568;
  t2344 = t2262 + t2305;
  t574 = 4.e-6*t495;
  t2461 = -2.7999999999999997e-11*t495;
  t799 = 7.e-6*t649;
  t869 = t574 + t799;
  t892 = -6.5e-11*t495;
  t925 = 1. + t892;
  t2853 = Sin(var1[3]);
  t2870 = Cos(var1[3]);
  t2199 = 4.e-6*t649;
  t2240 = t2198 + t2199;
  t2867 = t1309*t2853*t870;
  t2887 = t2870*t1568;
  t2954 = t2867 + t2887;
  t2991 = t2870*t1309;
  t3036 = -1.*t2853*t870*t1568;
  t3046 = t2991 + t3036;
  t2474 = t2461 + t649;
  t2515 = -4.e-6*t649;
  t2516 = t2198 + t2515;
  t2983 = -1.*t1355*t2954;
  t3050 = t1520*t3046;
  t3055 = t2983 + t3050;
  t2533 = -1.000000000016*t495;
  t2540 = 1. + t2533;
  t3115 = t1520*t2954;
  t3128 = t1355*t3046;
  t3137 = t3115 + t3128;
  t2699 = -1.000000000049*t495;
  t2715 = 1. + t2699;
  t2722 = -7.e-6*t649;
  t2740 = t574 + t2722;
  t2765 = -1.*t649;
  t2778 = t2461 + t2765;
  t3248 = -1.*t2870*t1309*t870;
  t3249 = t2853*t1568;
  t3251 = t3248 + t3249;
  t3273 = t1309*t2853;
  t3320 = t2870*t870*t1568;
  t3344 = t3273 + t3320;
  t3254 = -1.*t1355*t3251;
  t3345 = t1520*t3344;
  t3347 = t3254 + t3345;
  t3354 = t1520*t3251;
  t3384 = t1355*t3344;
  t3388 = t3354 + t3384;
  p_output1[0]=-1.*t2240*t2344 - 1.*t869*t870 + 7.e-6*(t2078*t2516 + t2344*t2540 + t2474*t870) - 4.e-6*(t2078*t2740 + t2344*t2778 + t2715*t870) - 1.*t2078*t925;
  p_output1[1]=-1.*t2240*t3137 + 7.e-6*(-1.*t1248*t2474*t2853 + t2516*t3055 + t2540*t3137) - 4.e-6*(-1.*t1248*t2715*t2853 + t2740*t3055 + t2778*t3137) + t1248*t2853*t869 - 1.*t3055*t925;
  p_output1[2]=-1.*t2240*t3388 + 7.e-6*(t1248*t2474*t2870 + t2516*t3347 + t2540*t3388) - 4.e-6*(t1248*t2715*t2870 + t2740*t3347 + t2778*t3388) - 1.*t1248*t2870*t869 - 1.*t3347*t925;
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

#include "Joint_rr_hip_pitch_axis.hh"

namespace SymFunction
{

void Joint_rr_hip_pitch_axis_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
