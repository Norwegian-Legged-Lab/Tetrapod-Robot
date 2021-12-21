/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 23:17:54 GMT+01:00
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
  double t948;
  double t104;
  double t155;
  double t293;
  double t337;
  double t478;
  double t675;
  double t1008;
  double t1154;
  double t1322;
  double t1545;
  double t108;
  double t1992;
  double t1688;
  double t2140;
  double t2161;
  double t2181;
  double t2309;
  double t2311;
  double t2312;
  double t2330;
  double t2332;
  double t2337;
  double t2351;
  double t2763;
  double t2382;
  double t2436;
  double t2448;
  double t2498;
  double t2522;
  double t2556;
  double t2832;
  double t2839;
  double t2856;
  double t2864;
  double t2913;
  double t2920;
  double t2923;
  double t2925;
  double t2931;
  double t2934;
  double t864;
  double t1260;
  double t1454;
  double t1599;
  double t1620;
  double t461;
  double t684;
  double t3236;
  double t1855;
  double t1921;
  double t3255;
  double t2024;
  double t2027;
  double t2098;
  double t2102;
  double t2130;
  double t3254;
  double t3265;
  double t3286;
  double t3302;
  double t3303;
  double t3340;
  double t2197;
  double t2204;
  double t2229;
  double t2347;
  double t2353;
  double t2356;
  double t3346;
  double t3349;
  double t3350;
  double t3353;
  double t3356;
  double t3357;
  double t2596;
  double t2721;
  double t2821;
  double t2822;
  double t2831;
  double t2892;
  double t2898;
  double t2902;
  double t2910;
  double t2911;
  double t3362;
  double t3363;
  double t3366;
  double t3367;
  double t3376;
  double t3379;
  double t3381;
  double t3382;
  double t3030;
  double t3038;
  double t3390;
  double t3396;
  double t3400;
  double t3402;
  double t3183;
  double t3185;
  double t3467;
  double t3471;
  double t3475;
  double t3487;
  double t3489;
  double t3490;
  double t3500;
  double t3501;
  double t3503;
  double t3516;
  double t3518;
  double t3519;
  double t3525;
  double t3528;
  double t3535;
  double t3537;
  double t3543;
  double t3550;
  double t3556;
  double t3564;
  double t3568;
  double t3570;
  double t3576;
  double t3577;
  t948 = Cos(var1[10]);
  t104 = Cos(var1[4]);
  t155 = Cos(var1[9]);
  t293 = -1.*t155;
  t337 = 1. + t293;
  t478 = Sin(var1[9]);
  t675 = -0.15121*t478;
  t1008 = -1.*t948;
  t1154 = 1. + t1008;
  t1322 = -1. + t948;
  t1545 = Sin(var1[10]);
  t108 = Cos(var1[5]);
  t1992 = Sin(var1[5]);
  t1688 = Sin(var1[4]);
  t2140 = -1.*t104*t108*t478;
  t2161 = -1.*t155*t104*t1992;
  t2181 = t2140 + t2161;
  t2309 = t155*t104*t108;
  t2311 = -1.*t104*t478*t1992;
  t2312 = t2309 + t2311;
  t2330 = Cos(var1[11]);
  t2332 = -1.*t2330;
  t2337 = 1. + t2332;
  t2351 = Sin(var1[11]);
  t2763 = -1. + t2330;
  t2382 = t1545*t1688;
  t2436 = -4.e-6*t1545*t2181;
  t2448 = -1.000000000016*t1154;
  t2498 = 1. + t2448;
  t2522 = t2498*t2312;
  t2556 = t2382 + t2436 + t2522;
  t2832 = t948*t1688;
  t2839 = 4.e-6*t1154*t2181;
  t2856 = -1.*t1545*t2312;
  t2864 = t2832 + t2839 + t2856;
  t2913 = 4.e-6*t1154*t1688;
  t2920 = 1.6e-11*t1322;
  t2923 = 1. + t2920;
  t2925 = t2923*t2181;
  t2931 = 4.e-6*t1545*t2312;
  t2934 = t2913 + t2925 + t2931;
  t864 = -4.9936e-13*var1[10];
  t1260 = -0.038749*t1154;
  t1454 = 6.19984e-13*t1322;
  t1599 = -0.281210000004*t1545;
  t1620 = t864 + t1260 + t1454 + t1599;
  t461 = 0.15121*t337;
  t684 = t461 + t675;
  t3236 = Sin(var1[3]);
  t1855 = -0.15121*t337;
  t1921 = t1855 + t675;
  t3255 = Cos(var1[3]);
  t2024 = -1.2484e-7*var1[10];
  t2027 = 2.479936e-18*t1154;
  t2098 = -1.54996e-7*t1322;
  t2102 = 1.124840000016e-6*t1545;
  t2130 = t2024 + t2027 + t2098 + t2102;
  t3254 = t108*t3236*t1688;
  t3265 = t3255*t1992;
  t3286 = t3254 + t3265;
  t3302 = t3255*t108;
  t3303 = -1.*t3236*t1688*t1992;
  t3340 = t3302 + t3303;
  t2197 = 0.281210000008499*t1154;
  t2204 = -0.03874900000062*t1545;
  t2229 = t2197 + t2204;
  t2347 = 0.50315000001605*t2337;
  t2353 = -0.0398890000006382*t2351;
  t2356 = t2347 + t2353;
  t3346 = -1.*t478*t3286;
  t3349 = t155*t3340;
  t3350 = t3346 + t3349;
  t3353 = t155*t3286;
  t3356 = t478*t3340;
  t3357 = t3353 + t3356;
  t2596 = -5.04e-14*var1[11];
  t2721 = -0.039889*t2337;
  t2821 = 6.38224e-13*t2763;
  t2822 = -0.503150000008*t2351;
  t2831 = t2596 + t2721 + t2821 + t2822;
  t2892 = -1.26e-8*var1[11];
  t2898 = 2.552896e-18*t2337;
  t2902 = -1.59556e-7*t2763;
  t2910 = 2.012600000032e-6*t2351;
  t2911 = t2892 + t2898 + t2902 + t2910;
  t3362 = -1.*t104*t1545*t3236;
  t3363 = -4.e-6*t1545*t3350;
  t3366 = t2498*t3357;
  t3367 = t3362 + t3363 + t3366;
  t3376 = -1.*t948*t104*t3236;
  t3379 = 4.e-6*t1154*t3350;
  t3381 = -1.*t1545*t3357;
  t3382 = t3376 + t3379 + t3381;
  t3030 = 1.6e-11*t2763;
  t3038 = 1. + t3030;
  t3390 = -4.e-6*t1154*t104*t3236;
  t3396 = t2923*t3350;
  t3400 = 4.e-6*t1545*t3357;
  t3402 = t3390 + t3396 + t3400;
  t3183 = -1.000000000016*t2337;
  t3185 = 1. + t3183;
  t3467 = -1.*t3255*t108*t1688;
  t3471 = t3236*t1992;
  t3475 = t3467 + t3471;
  t3487 = t108*t3236;
  t3489 = t3255*t1688*t1992;
  t3490 = t3487 + t3489;
  t3500 = -1.*t478*t3475;
  t3501 = t155*t3490;
  t3503 = t3500 + t3501;
  t3516 = t155*t3475;
  t3518 = t478*t3490;
  t3519 = t3516 + t3518;
  t3525 = t3255*t104*t1545;
  t3528 = -4.e-6*t1545*t3503;
  t3535 = t2498*t3519;
  t3537 = t3525 + t3528 + t3535;
  t3543 = t948*t3255*t104;
  t3550 = 4.e-6*t1154*t3503;
  t3556 = -1.*t1545*t3519;
  t3564 = t3543 + t3550 + t3556;
  t3568 = 4.e-6*t1154*t3255*t104;
  t3570 = t2923*t3503;
  t3576 = 4.e-6*t1545*t3519;
  t3577 = t3568 + t3570 + t3576;
  p_output1[0]=t1620*t1688 - 1.*t104*t1921*t1992 + t2130*t2181 + t2229*t2312 + t2356*t2556 + t2831*t2864 + t2911*t2934 - 0.041195*(-1.*t2351*t2556 + t2330*t2864 + 4.e-6*t2337*t2934) - 0.14871*(4.e-6*t2351*t2556 + 4.e-6*t2337*t2864 + t2934*t3038) + 0.803147*(t2351*t2864 - 4.e-6*t2351*t2934 + t2556*t3185) + t104*t108*t684 + var1[0];
  p_output1[1]=-1.*t104*t1620*t3236 + t1921*t3340 + t2130*t3350 + t2229*t3357 + t2356*t3367 + t2831*t3382 + t2911*t3402 - 0.041195*(-1.*t2351*t3367 + t2330*t3382 + 4.e-6*t2337*t3402) + 0.803147*(t3185*t3367 + t2351*t3382 - 4.e-6*t2351*t3402) - 0.14871*(4.e-6*t2351*t3367 + 4.e-6*t2337*t3382 + t3038*t3402) + t3286*t684 + var1[1];
  p_output1[2]=t104*t1620*t3255 + t1921*t3490 + t2130*t3503 + t2229*t3519 + t2356*t3537 + t2831*t3564 + t2911*t3577 - 0.041195*(-1.*t2351*t3537 + t2330*t3564 + 4.e-6*t2337*t3577) + 0.803147*(t3185*t3537 + t2351*t3564 - 4.e-6*t2351*t3577) - 0.14871*(4.e-6*t2351*t3537 + 4.e-6*t2337*t3564 + t3038*t3577) + t3475*t684 + var1[2];
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

#include "FrFoot_sphere_center.hh"

namespace SymFunction
{

void FrFoot_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
