/*
 * Automatically Generated from Mathematica.
 * Fri 4 Feb 2022 15:52:01 GMT+01:00
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
  double t475;
  double t652;
  double t707;
  double t758;
  double t168;
  double t280;
  double t296;
  double t336;
  double t370;
  double t388;
  double t724;
  double t211;
  double t1221;
  double t855;
  double t1691;
  double t2211;
  double t919;
  double t2221;
  double t2094;
  double t2096;
  double t2106;
  double t2252;
  double t2256;
  double t2261;
  double t1303;
  double t2287;
  double t1693;
  double t2303;
  double t2304;
  double t765;
  double t2268;
  double t474;
  double t723;
  double t811;
  double t814;
  double t863;
  double t888;
  double t918;
  double t364;
  double t429;
  double t2337;
  double t1213;
  double t1218;
  double t2342;
  double t1243;
  double t1252;
  double t1508;
  double t1509;
  double t1741;
  double t1791;
  double t2017;
  double t2340;
  double t2343;
  double t2344;
  double t2378;
  double t2405;
  double t2410;
  double t2194;
  double t2210;
  double t2212;
  double t2219;
  double t2247;
  double t2249;
  double t2250;
  double t2274;
  double t2290;
  double t2420;
  double t2421;
  double t2423;
  double t2292;
  double t2293;
  double t2426;
  double t2449;
  double t2453;
  double t2305;
  double t2307;
  double t2308;
  double t2310;
  double t2316;
  double t2317;
  double t2321;
  double t2323;
  double t2807;
  double t2808;
  double t2810;
  double t2812;
  double t2818;
  double t2820;
  double t2832;
  double t2833;
  double t2985;
  double t3059;
  double t3061;
  double t3062;
  t475 = Cos(var1[13]);
  t652 = -1.*t475;
  t707 = 1. + t652;
  t758 = Sin(var1[13]);
  t168 = Cos(var1[4]);
  t280 = Cos(var1[12]);
  t296 = -1.*t280;
  t336 = 1. + t296;
  t370 = Sin(var1[12]);
  t388 = 0.15121*t370;
  t724 = 4.e-6*t707;
  t211 = Cos(var1[5]);
  t1221 = Sin(var1[5]);
  t855 = -2.8e-11*t707;
  t1691 = 7.e-6*t707;
  t2211 = -1.*t758;
  t919 = Sin(var1[4]);
  t2221 = -4.e-6*t758;
  t2094 = -1.*t168*t211*t370;
  t2096 = -1.*t280*t168*t1221;
  t2106 = t2094 + t2096;
  t2252 = t280*t168*t211;
  t2256 = -1.*t168*t370*t1221;
  t2261 = t2252 + t2256;
  t1303 = -7.e-6*t758;
  t2287 = -7.e-6*t707;
  t1693 = 4.e-6*t758;
  t2303 = -1. + t475;
  t2304 = 4.e-6*t2303;
  t765 = 7.e-6*t758;
  t2268 = 2.8e-11*t707;
  t474 = 5.856279999999999e-13*var1[13];
  t723 = -0.0387489999948987*t707;
  t811 = t724 + t765;
  t814 = -2.123459e-6*t811;
  t863 = t855 + t758;
  t888 = -0.281209000004*t863;
  t918 = t474 + t723 + t814 + t888;
  t364 = -0.15121*t336;
  t429 = t364 + t388;
  t2337 = Sin(var1[3]);
  t1213 = 0.15121*t336;
  t1218 = t1213 + t388;
  t2342 = Cos(var1[3]);
  t1243 = -1.4640699999999997e-7*var1[13];
  t1252 = -1.38024835e-16*t707;
  t1508 = t724 + t1303;
  t1509 = -0.038748999993*t1508;
  t1741 = t1691 + t1693;
  t1791 = -0.281209000004*t1741;
  t2017 = t1243 + t1252 + t1509 + t1791;
  t2340 = t211*t2337*t919;
  t2343 = t2342*t1221;
  t2344 = t2340 + t2343;
  t2378 = t2342*t211;
  t2405 = -1.*t2337*t919*t1221;
  t2410 = t2378 + t2405;
  t2194 = 1.0248489999999998e-12*var1[13];
  t2210 = -0.28120900000849935*t707;
  t2212 = t855 + t2211;
  t2219 = -0.038748999993*t2212;
  t2247 = t1691 + t2221;
  t2249 = -2.123459e-6*t2247;
  t2250 = t2194 + t2210 + t2219 + t2249;
  t2274 = t2268 + t2211;
  t2290 = t2287 + t2221;
  t2420 = -1.*t370*t2344;
  t2421 = t280*t2410;
  t2423 = t2420 + t2421;
  t2292 = -1.000000000016*t707;
  t2293 = 1. + t2292;
  t2426 = t280*t2344;
  t2449 = t370*t2410;
  t2453 = t2426 + t2449;
  t2305 = t2304 + t1303;
  t2307 = -6.5e-11*t707;
  t2308 = 1. + t2307;
  t2310 = t2287 + t1693;
  t2316 = -1.000000000049*t707;
  t2317 = 1. + t2316;
  t2321 = t2304 + t765;
  t2323 = t2268 + t758;
  t2807 = -1.*t2342*t211*t919;
  t2808 = t2337*t1221;
  t2810 = t2807 + t2808;
  t2812 = t211*t2337;
  t2818 = t2342*t919*t1221;
  t2820 = t2812 + t2818;
  t2832 = -1.*t370*t2810;
  t2833 = t280*t2820;
  t2985 = t2832 + t2833;
  t3059 = t280*t2810;
  t3061 = t370*t2820;
  t3062 = t3059 + t3061;
  p_output1[0]=-1.*t1218*t1221*t168 + t2017*t2106 + t2250*t2261 + t168*t211*t429 + t918*t919 - 0.281211*(t2106*t2290 + t2261*t2293 + t2274*t919) + 0.226709*(t2106*t2308 + t2261*t2310 + t2305*t919) - 0.03875*(t2106*t2321 + t2261*t2323 + t2317*t919) + var1[0];
  p_output1[1]=t1218*t2410 + t2017*t2423 + t2250*t2453 - 0.281211*(-1.*t168*t2274*t2337 + t2290*t2423 + t2293*t2453) + 0.226709*(-1.*t168*t2305*t2337 + t2308*t2423 + t2310*t2453) - 0.03875*(-1.*t168*t2317*t2337 + t2321*t2423 + t2323*t2453) + t2344*t429 - 1.*t168*t2337*t918 + var1[1];
  p_output1[2]=t1218*t2820 + t2017*t2985 + t2250*t3062 - 0.281211*(t168*t2274*t2342 + t2290*t2985 + t2293*t3062) + 0.226709*(t168*t2305*t2342 + t2308*t2985 + t2310*t3062) - 0.03875*(t168*t2317*t2342 + t2321*t2985 + t2323*t3062) + t2810*t429 + t168*t2342*t918 + var1[2];
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

#include "Joint_rl_hip_pitch_sphere_center.hh"

namespace SymFunction
{

void Joint_rl_hip_pitch_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
