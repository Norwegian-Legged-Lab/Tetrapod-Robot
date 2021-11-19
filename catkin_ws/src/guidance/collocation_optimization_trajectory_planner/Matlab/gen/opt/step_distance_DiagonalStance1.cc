/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:27:41 GMT+01:00
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
  double t1185;
  double t51;
  double t61;
  double t62;
  double t68;
  double t133;
  double t456;
  double t1220;
  double t1259;
  double t1512;
  double t1545;
  double t57;
  double t1677;
  double t1582;
  double t1722;
  double t1745;
  double t1753;
  double t1819;
  double t1820;
  double t1834;
  double t1895;
  double t1908;
  double t1938;
  double t1968;
  double t2099;
  double t1985;
  double t1987;
  double t2001;
  double t2003;
  double t2016;
  double t2017;
  double t2120;
  double t2123;
  double t2125;
  double t2142;
  double t2201;
  double t2215;
  double t2223;
  double t2224;
  double t2226;
  double t2233;
  double t2334;
  double t2342;
  double t2352;
  double t2356;
  double t2369;
  double t2408;
  double t2410;
  double t2416;
  double t2424;
  double t2486;
  double t2397;
  double t2398;
  double t2405;
  double t2441;
  double t2446;
  double t2460;
  double t2572;
  double t2580;
  double t2582;
  double t2594;
  double t2491;
  double t2494;
  double t2502;
  double t2516;
  double t2527;
  double t2540;
  double t2738;
  double t2660;
  double t2665;
  double t2672;
  double t2673;
  double t2612;
  double t2621;
  double t2627;
  double t2628;
  double t2633;
  double t2636;
  double t1069;
  double t1504;
  double t1519;
  double t1575;
  double t1581;
  double t129;
  double t537;
  double t2818;
  double t1603;
  double t1611;
  double t2834;
  double t1696;
  double t1699;
  double t1708;
  double t1714;
  double t1716;
  double t2822;
  double t2840;
  double t2849;
  double t2858;
  double t2869;
  double t2876;
  double t1767;
  double t1792;
  double t1795;
  double t1966;
  double t1977;
  double t1980;
  double t2886;
  double t2892;
  double t2893;
  double t2898;
  double t2900;
  double t2901;
  double t2063;
  double t2098;
  double t2103;
  double t2106;
  double t2113;
  double t2153;
  double t2186;
  double t2190;
  double t2192;
  double t2197;
  double t2918;
  double t2924;
  double t2925;
  double t2927;
  double t2930;
  double t2933;
  double t2936;
  double t2938;
  double t2266;
  double t2279;
  double t2951;
  double t2952;
  double t2957;
  double t2965;
  double t2311;
  double t2313;
  double t2376;
  double t2377;
  double t2388;
  double t2391;
  double t2406;
  double t2421;
  double t2425;
  double t2426;
  double t2461;
  double t2462;
  double t2465;
  double t2467;
  double t2471;
  double t2474;
  double t2481;
  double t3033;
  double t3041;
  double t3042;
  double t3045;
  double t3046;
  double t3047;
  double t2550;
  double t2584;
  double t2597;
  double t2601;
  double t2646;
  double t2651;
  double t2652;
  double t2683;
  double t2700;
  double t2721;
  double t2726;
  double t2740;
  double t2741;
  double t3066;
  double t3068;
  double t3072;
  double t3073;
  double t3095;
  double t3096;
  double t3097;
  double t3099;
  double t3077;
  double t3080;
  double t3085;
  double t3089;
  double t2790;
  double t2793;
  t1185 = Cos(var1[10]);
  t51 = Cos(var1[4]);
  t61 = Cos(var1[9]);
  t62 = -1.*t61;
  t68 = 1. + t62;
  t133 = Sin(var1[9]);
  t456 = -0.15121*t133;
  t1220 = -1.*t1185;
  t1259 = 1. + t1220;
  t1512 = -1. + t1185;
  t1545 = Sin(var1[10]);
  t57 = Cos(var1[5]);
  t1677 = Sin(var1[5]);
  t1582 = Sin(var1[4]);
  t1722 = -1.*t51*t57*t133;
  t1745 = -1.*t61*t51*t1677;
  t1753 = t1722 + t1745;
  t1819 = t61*t51*t57;
  t1820 = -1.*t51*t133*t1677;
  t1834 = t1819 + t1820;
  t1895 = Cos(var1[11]);
  t1908 = -1.*t1895;
  t1938 = 1. + t1908;
  t1968 = Sin(var1[11]);
  t2099 = -1. + t1895;
  t1985 = t1545*t1582;
  t1987 = -4.e-6*t1545*t1753;
  t2001 = -1.000000000016*t1259;
  t2003 = 1. + t2001;
  t2016 = t2003*t1834;
  t2017 = t1985 + t1987 + t2016;
  t2120 = t1185*t1582;
  t2123 = 4.e-6*t1259*t1753;
  t2125 = -1.*t1545*t1834;
  t2142 = t2120 + t2123 + t2125;
  t2201 = 4.e-6*t1259*t1582;
  t2215 = 1.6e-11*t1512;
  t2223 = 1. + t2215;
  t2224 = t2223*t1753;
  t2226 = 4.e-6*t1545*t1834;
  t2233 = t2201 + t2224 + t2226;
  t2334 = Cos(var1[6]);
  t2342 = -1.*t2334;
  t2352 = 1. + t2342;
  t2356 = 0.15121*t2352;
  t2369 = Sin(var1[6]);
  t2408 = Cos(var1[7]);
  t2410 = -1.*t2408;
  t2416 = 1. + t2410;
  t2424 = Sin(var1[7]);
  t2486 = -1. + t2408;
  t2397 = -1.*t51*t2334*t1677;
  t2398 = -1.*t51*t57*t2369;
  t2405 = t2397 + t2398;
  t2441 = t51*t57*t2334;
  t2446 = -1.*t51*t1677*t2369;
  t2460 = t2441 + t2446;
  t2572 = Cos(var1[8]);
  t2580 = -1.*t2572;
  t2582 = 1. + t2580;
  t2594 = Sin(var1[8]);
  t2491 = 4.e-6*t2486*t1582;
  t2494 = 1.6e-11*t2486;
  t2502 = 1. + t2494;
  t2516 = t2502*t2405;
  t2527 = 4.e-6*t2460*t2424;
  t2540 = t2491 + t2516 + t2527;
  t2738 = -1. + t2572;
  t2660 = t2408*t1582;
  t2665 = 4.e-6*t2486*t2405;
  t2672 = t2460*t2424;
  t2673 = t2660 + t2665 + t2672;
  t2612 = -1.000000000016*t2416;
  t2621 = 1. + t2612;
  t2627 = t2621*t2460;
  t2628 = -1.*t1582*t2424;
  t2633 = -4.e-6*t2405*t2424;
  t2636 = t2627 + t2628 + t2633;
  t1069 = -4.9936e-13*var1[10];
  t1504 = -0.038749*t1259;
  t1519 = 6.19984e-13*t1512;
  t1575 = -0.281210000004*t1545;
  t1581 = t1069 + t1504 + t1519 + t1575;
  t129 = 0.15121*t68;
  t537 = t129 + t456;
  t2818 = Sin(var1[3]);
  t1603 = -0.15121*t68;
  t1611 = t1603 + t456;
  t2834 = Cos(var1[3]);
  t1696 = -1.2484e-7*var1[10];
  t1699 = 2.479936e-18*t1259;
  t1708 = -1.54996e-7*t1512;
  t1714 = 1.124840000016e-6*t1545;
  t1716 = t1696 + t1699 + t1708 + t1714;
  t2822 = t57*t2818*t1582;
  t2840 = t2834*t1677;
  t2849 = t2822 + t2840;
  t2858 = t2834*t57;
  t2869 = -1.*t2818*t1582*t1677;
  t2876 = t2858 + t2869;
  t1767 = 0.281210000008499*t1259;
  t1792 = -0.03874900000062*t1545;
  t1795 = t1767 + t1792;
  t1966 = 0.50315000001605*t1938;
  t1977 = -0.0398890000006382*t1968;
  t1980 = t1966 + t1977;
  t2886 = -1.*t133*t2849;
  t2892 = t61*t2876;
  t2893 = t2886 + t2892;
  t2898 = t61*t2849;
  t2900 = t133*t2876;
  t2901 = t2898 + t2900;
  t2063 = -5.04e-14*var1[11];
  t2098 = -0.039889*t1938;
  t2103 = 6.38224e-13*t2099;
  t2106 = -0.503150000008*t1968;
  t2113 = t2063 + t2098 + t2103 + t2106;
  t2153 = -1.26e-8*var1[11];
  t2186 = 2.552896e-18*t1938;
  t2190 = -1.59556e-7*t2099;
  t2192 = 2.012600000032e-6*t1968;
  t2197 = t2153 + t2186 + t2190 + t2192;
  t2918 = -1.*t51*t1545*t2818;
  t2924 = -4.e-6*t1545*t2893;
  t2925 = t2003*t2901;
  t2927 = t2918 + t2924 + t2925;
  t2930 = -1.*t1185*t51*t2818;
  t2933 = 4.e-6*t1259*t2893;
  t2936 = -1.*t1545*t2901;
  t2938 = t2930 + t2933 + t2936;
  t2266 = 1.6e-11*t2099;
  t2279 = 1. + t2266;
  t2951 = -4.e-6*t1259*t51*t2818;
  t2952 = t2223*t2893;
  t2957 = 4.e-6*t1545*t2901;
  t2965 = t2951 + t2952 + t2957;
  t2311 = -1.000000000016*t1938;
  t2313 = 1. + t2311;
  t2376 = -0.15121*t2369;
  t2377 = t2356 + t2376;
  t2388 = 0.15121*t2369;
  t2391 = t2356 + t2388;
  t2406 = -1.2484e-7*var1[7];
  t2421 = -1.5499600000248e-7*t2416;
  t2425 = 1.124840000016e-6*t2424;
  t2426 = t2406 + t2421 + t2425;
  t2461 = 0.281210000008499*t2416;
  t2462 = 0.03874900000062*t2424;
  t2465 = t2461 + t2462;
  t2467 = 4.9936e-13*var1[7];
  t2471 = -0.03874900000062*t2416;
  t2474 = 0.281210000004*t2424;
  t2481 = t2467 + t2471 + t2474;
  t3033 = t2334*t2876;
  t3041 = -1.*t2849*t2369;
  t3042 = t3033 + t3041;
  t3045 = t2334*t2849;
  t3046 = t2876*t2369;
  t3047 = t3045 + t3046;
  t2550 = -1.284e-8*var1[8];
  t2584 = -1.5499600000248e-7*t2582;
  t2597 = 2.012840000032e-6*t2594;
  t2601 = t2550 + t2584 + t2597;
  t2646 = 0.503210000016051*t2582;
  t2651 = 0.03874900000062*t2594;
  t2652 = t2646 + t2651;
  t2683 = 5.136e-14*var1[8];
  t2700 = -0.03874900000062*t2582;
  t2721 = 0.503210000008*t2594;
  t2726 = t2683 + t2700 + t2721;
  t2740 = 1.6e-11*t2738;
  t2741 = 1. + t2740;
  t3066 = -4.e-6*t51*t2486*t2818;
  t3068 = t2502*t3042;
  t3072 = 4.e-6*t3047*t2424;
  t3073 = t3066 + t3068 + t3072;
  t3095 = -1.*t51*t2408*t2818;
  t3096 = 4.e-6*t2486*t3042;
  t3097 = t3047*t2424;
  t3099 = t3095 + t3096 + t3097;
  t3077 = t2621*t3047;
  t3080 = t51*t2818*t2424;
  t3085 = -4.e-6*t3042*t2424;
  t3089 = t3077 + t3080 + t3085;
  t2790 = -1.000000000016*t2582;
  t2793 = 1. + t2790;
  p_output1[0]=t1581*t1582 + t1716*t1753 + t1795*t1834 + t1980*t2017 + t2113*t2142 + t2197*t2233 - 0.041195*(-1.*t1968*t2017 + t1895*t2142 + 4.e-6*t1938*t2233) - 0.14871*(4.e-6*t1968*t2017 + 4.e-6*t1938*t2142 + t2233*t2279) + 0.803147*(t1968*t2142 - 4.e-6*t1968*t2233 + t2017*t2313) - 1.*t2405*t2426 - 1.*t2460*t2465 - 1.*t1582*t2481 - 1.*t2540*t2601 - 1.*t2636*t2652 - 1.*t2673*t2726 + 0.03875*(t2594*t2636 + t2572*t2673 + 4.e-6*t2540*t2738) - 0.14871*(4.e-6*t2594*t2636 + 4.e-6*t2673*t2738 + t2540*t2741) - 0.80321*(-4.e-6*t2540*t2594 - 1.*t2594*t2673 + t2636*t2793) - 1.*t1611*t1677*t51 + t1677*t2377*t51 - 1.*t2391*t51*t57 + t51*t537*t57;
  p_output1[1]=-1.*t2391*t2849 + t1611*t2876 - 1.*t2377*t2876 + t1716*t2893 + t1795*t2901 + t1980*t2927 + t2113*t2938 + t2197*t2965 - 0.041195*(-1.*t1968*t2927 + t1895*t2938 + 4.e-6*t1938*t2965) + 0.803147*(t2313*t2927 + t1968*t2938 - 4.e-6*t1968*t2965) - 0.14871*(4.e-6*t1968*t2927 + 4.e-6*t1938*t2938 + t2279*t2965) - 1.*t2426*t3042 - 1.*t2465*t3047 - 1.*t2601*t3073 - 1.*t2652*t3089 - 1.*t2726*t3099 + 0.03875*(4.e-6*t2738*t3073 + t2594*t3089 + t2572*t3099) - 0.80321*(-4.e-6*t2594*t3073 + t2793*t3089 - 1.*t2594*t3099) - 0.14871*(t2741*t3073 + 4.e-6*t2594*t3089 + 4.e-6*t2738*t3099) - 1.*t1581*t2818*t51 + t2481*t2818*t51 + t2849*t537;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 2, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "step_distance_DiagonalStance1.hh"

namespace DiagonalStance1
{

void step_distance_DiagonalStance1_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
