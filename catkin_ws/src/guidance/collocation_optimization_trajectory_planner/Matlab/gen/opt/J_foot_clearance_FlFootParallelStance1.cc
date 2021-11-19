/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:29:29 GMT+01:00
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
  double t483;
  double t583;
  double t681;
  double t475;
  double t713;
  double t1076;
  double t1252;
  double t1278;
  double t1307;
  double t1354;
  double t517;
  double t1040;
  double t1048;
  double t1407;
  double t1446;
  double t1474;
  double t1684;
  double t1686;
  double t1689;
  double t1764;
  double t2008;
  double t2048;
  double t1595;
  double t1604;
  double t1650;
  double t1848;
  double t1860;
  double t1930;
  double t2101;
  double t2109;
  double t2128;
  double t2144;
  double t2051;
  double t2052;
  double t2055;
  double t2062;
  double t2070;
  double t2074;
  double t2253;
  double t2189;
  double t2197;
  double t2202;
  double t2203;
  double t2162;
  double t2163;
  double t2165;
  double t2167;
  double t2168;
  double t2171;
  double t1355;
  double t1357;
  double t1482;
  double t1538;
  double t1677;
  double t1761;
  double t1792;
  double t1816;
  double t1931;
  double t1948;
  double t1953;
  double t2024;
  double t2031;
  double t2037;
  double t2044;
  double t2370;
  double t2373;
  double t2374;
  double t2383;
  double t2384;
  double t2386;
  double t2098;
  double t2142;
  double t2150;
  double t2157;
  double t2178;
  double t2180;
  double t2183;
  double t2208;
  double t2212;
  double t2215;
  double t2244;
  double t2268;
  double t2272;
  double t2392;
  double t2393;
  double t2398;
  double t2407;
  double t2449;
  double t2454;
  double t2457;
  double t2461;
  double t2415;
  double t2426;
  double t2428;
  double t2429;
  double t2334;
  double t2336;
  double t2572;
  double t2583;
  double t2588;
  double t2594;
  double t2599;
  double t2604;
  double t2617;
  double t2618;
  double t2622;
  double t2628;
  double t2629;
  double t2633;
  double t2662;
  double t2673;
  double t2679;
  double t2648;
  double t2649;
  double t2650;
  double t2684;
  double t2692;
  double t2694;
  double t2771;
  double t2777;
  double t2780;
  double t2791;
  double t2795;
  double t2797;
  double t2799;
  double t2818;
  double t2822;
  double t2826;
  double t2801;
  double t2807;
  double t2809;
  double t2828;
  double t2829;
  double t2831;
  double t2924;
  double t2931;
  double t2933;
  double t2960;
  double t2961;
  double t2963;
  double t2965;
  double t2973;
  double t2974;
  double t2978;
  double t2981;
  double t2946;
  double t2948;
  double t2955;
  double t2957;
  double t3091;
  double t3093;
  double t3096;
  double t3103;
  double t3067;
  double t3069;
  double t3071;
  double t3072;
  double t3133;
  double t3134;
  t483 = Cos(var1[5]);
  t583 = Sin(var1[3]);
  t681 = Sin(var1[4]);
  t475 = Cos(var1[3]);
  t713 = Sin(var1[5]);
  t1076 = Cos(var1[6]);
  t1252 = -1.*t1076;
  t1278 = 1. + t1252;
  t1307 = 0.15121*t1278;
  t1354 = Sin(var1[6]);
  t517 = t475*t483;
  t1040 = -1.*t583*t681*t713;
  t1048 = t517 + t1040;
  t1407 = t483*t583*t681;
  t1446 = t475*t713;
  t1474 = t1407 + t1446;
  t1684 = Cos(var1[7]);
  t1686 = -1.*t1684;
  t1689 = 1. + t1686;
  t1764 = Sin(var1[7]);
  t2008 = Cos(var1[4]);
  t2048 = -1. + t1684;
  t1595 = t1076*t1048;
  t1604 = -1.*t1474*t1354;
  t1650 = t1595 + t1604;
  t1848 = t1076*t1474;
  t1860 = t1048*t1354;
  t1930 = t1848 + t1860;
  t2101 = Cos(var1[8]);
  t2109 = -1.*t2101;
  t2128 = 1. + t2109;
  t2144 = Sin(var1[8]);
  t2051 = -4.e-6*t2008*t2048*t583;
  t2052 = 1.6e-11*t2048;
  t2055 = 1. + t2052;
  t2062 = t2055*t1650;
  t2070 = 4.e-6*t1930*t1764;
  t2074 = t2051 + t2062 + t2070;
  t2253 = -1. + t2101;
  t2189 = -1.*t2008*t1684*t583;
  t2197 = 4.e-6*t2048*t1650;
  t2202 = t1930*t1764;
  t2203 = t2189 + t2197 + t2202;
  t2162 = -1.000000000016*t1689;
  t2163 = 1. + t2162;
  t2165 = t2163*t1930;
  t2167 = t2008*t583*t1764;
  t2168 = -4.e-6*t1650*t1764;
  t2171 = t2165 + t2167 + t2168;
  t1355 = -0.15121*t1354;
  t1357 = t1307 + t1355;
  t1482 = 0.15121*t1354;
  t1538 = t1307 + t1482;
  t1677 = -1.2484e-7*var1[7];
  t1761 = -1.5499600000248e-7*t1689;
  t1792 = 1.124840000016e-6*t1764;
  t1816 = t1677 + t1761 + t1792;
  t1931 = 0.281210000008499*t1689;
  t1948 = 0.03874900000062*t1764;
  t1953 = t1931 + t1948;
  t2024 = 4.9936e-13*var1[7];
  t2031 = -0.03874900000062*t1689;
  t2037 = 0.281210000004*t1764;
  t2044 = t2024 + t2031 + t2037;
  t2370 = t475*t2008*t1076*t713;
  t2373 = t475*t2008*t483*t1354;
  t2374 = t2370 + t2373;
  t2383 = -1.*t475*t2008*t483*t1076;
  t2384 = t475*t2008*t713*t1354;
  t2386 = t2383 + t2384;
  t2098 = -1.284e-8*var1[8];
  t2142 = -1.5499600000248e-7*t2128;
  t2150 = 2.012840000032e-6*t2144;
  t2157 = t2098 + t2142 + t2150;
  t2178 = 0.503210000016051*t2128;
  t2180 = 0.03874900000062*t2144;
  t2183 = t2178 + t2180;
  t2208 = 5.136e-14*var1[8];
  t2212 = -0.03874900000062*t2128;
  t2215 = 0.503210000008*t2144;
  t2244 = t2208 + t2212 + t2215;
  t2268 = 1.6e-11*t2253;
  t2272 = 1. + t2268;
  t2392 = -4.e-6*t475*t2048*t681;
  t2393 = t2055*t2374;
  t2398 = 4.e-6*t2386*t1764;
  t2407 = t2392 + t2393 + t2398;
  t2449 = -1.*t475*t1684*t681;
  t2454 = 4.e-6*t2048*t2374;
  t2457 = t2386*t1764;
  t2461 = t2449 + t2454 + t2457;
  t2415 = t2163*t2386;
  t2426 = t475*t681*t1764;
  t2428 = -4.e-6*t2374*t1764;
  t2429 = t2415 + t2426 + t2428;
  t2334 = -1.000000000016*t2128;
  t2336 = 1. + t2334;
  t2572 = t475*t483*t681;
  t2583 = -1.*t583*t713;
  t2588 = t2572 + t2583;
  t2594 = t483*t583;
  t2599 = t475*t681*t713;
  t2604 = t2594 + t2599;
  t2617 = t1076*t2588;
  t2618 = -1.*t2604*t1354;
  t2622 = t2617 + t2618;
  t2628 = t1076*t2604;
  t2629 = t2588*t1354;
  t2633 = t2628 + t2629;
  t2662 = t2163*t2633;
  t2673 = -4.e-6*t2622*t1764;
  t2679 = t2662 + t2673;
  t2648 = t2055*t2622;
  t2649 = 4.e-6*t2633*t1764;
  t2650 = t2648 + t2649;
  t2684 = 4.e-6*t2048*t2622;
  t2692 = t2633*t1764;
  t2694 = t2684 + t2692;
  t2771 = -1.*t475*t483*t681;
  t2777 = t583*t713;
  t2780 = t2771 + t2777;
  t2791 = -1.*t1076*t2780;
  t2795 = t2791 + t2618;
  t2797 = -1.*t2780*t1354;
  t2799 = t2628 + t2797;
  t2818 = t2163*t2799;
  t2822 = -4.e-6*t2795*t1764;
  t2826 = t2818 + t2822;
  t2801 = t2055*t2795;
  t2807 = 4.e-6*t2799*t1764;
  t2809 = t2801 + t2807;
  t2828 = 4.e-6*t2048*t2795;
  t2829 = t2799*t1764;
  t2831 = t2828 + t2829;
  t2924 = t1076*t2780;
  t2931 = t2604*t1354;
  t2933 = t2924 + t2931;
  t2960 = -1.*t475*t2008*t1684;
  t2961 = -4.e-6*t1684*t2799;
  t2963 = -1.000000000016*t2933*t1764;
  t2965 = t2960 + t2961 + t2963;
  t2973 = t1684*t2933;
  t2974 = -1.*t475*t2008*t1764;
  t2978 = -4.e-6*t2799*t1764;
  t2981 = t2973 + t2974 + t2978;
  t2946 = 4.e-6*t1684*t2933;
  t2948 = -4.e-6*t475*t2008*t1764;
  t2955 = -1.6e-11*t2799*t1764;
  t2957 = t2946 + t2948 + t2955;
  t3091 = 4.e-6*t475*t2008*t2048;
  t3093 = t2055*t2799;
  t3096 = 4.e-6*t2933*t1764;
  t3103 = t3091 + t3093 + t3096;
  t3067 = t475*t2008*t1684;
  t3069 = 4.e-6*t2048*t2799;
  t3071 = t2933*t1764;
  t3072 = t3067 + t3069 + t3071;
  t3133 = t2163*t2933;
  t3134 = t3133 + t2974 + t2978;
  p_output1[0]=1.;
  p_output1[1]=t1048*t1357 + t1474*t1538 + t1650*t1816 + t1930*t1953 + t2074*t2157 + t2171*t2183 + t2203*t2244 - 0.03875*(t2144*t2171 + t2101*t2203 + 4.e-6*t2074*t2253) + 0.14871*(4.e-6*t2144*t2171 + 4.e-6*t2203*t2253 + t2074*t2272) + 0.80321*(-4.e-6*t2074*t2144 - 1.*t2144*t2203 + t2171*t2336) - 1.*t2008*t2044*t583;
  p_output1[2]=t1816*t2374 + t1953*t2386 + t2157*t2407 + t2183*t2429 + t2244*t2461 - 0.03875*(4.e-6*t2253*t2407 + t2144*t2429 + t2101*t2461) + 0.80321*(-4.e-6*t2144*t2407 + t2336*t2429 - 1.*t2144*t2461) + 0.14871*(t2272*t2407 + 4.e-6*t2144*t2429 + 4.e-6*t2253*t2461) - 1.*t1538*t2008*t475*t483 - 1.*t2044*t475*t681 + t1357*t2008*t475*t713;
  p_output1[3]=t1357*t2588 + t1538*t2604 + t1816*t2622 + t1953*t2633 + t2157*t2650 + t2183*t2679 + t2244*t2694 - 0.03875*(4.e-6*t2253*t2650 + t2144*t2679 + t2101*t2694) + 0.80321*(-4.e-6*t2144*t2650 + t2336*t2679 - 1.*t2144*t2694) + 0.14871*(t2272*t2650 + 4.e-6*t2144*t2679 + 4.e-6*t2253*t2694);
  p_output1[4]=(-0.15121*t1076 + t1482)*t2604 + (0.15121*t1076 + t1482)*t2780 + t1816*t2795 + t1953*t2799 + t2157*t2809 + t2183*t2826 + t2244*t2831 - 0.03875*(4.e-6*t2253*t2809 + t2144*t2826 + t2101*t2831) + 0.80321*(-4.e-6*t2144*t2809 + t2336*t2826 - 1.*t2144*t2831) + 0.14871*(t2272*t2809 + 4.e-6*t2144*t2826 + 4.e-6*t2253*t2831);
  p_output1[5]=(-1.2484e-7 + 1.124840000016e-6*t1684 - 1.5499600000248e-7*t1764)*t2799 + (0.03874900000062*t1684 + 0.281210000008499*t1764)*t2933 + t2157*t2957 + t2183*t2965 + t2244*t2981 - 0.03875*(4.e-6*t2253*t2957 + t2144*t2965 + t2101*t2981) + 0.80321*(-4.e-6*t2144*t2957 + t2336*t2965 - 1.*t2144*t2981) + 0.14871*(t2272*t2957 + 4.e-6*t2144*t2965 + 4.e-6*t2253*t2981) + (4.9936e-13 + 0.281210000004*t1684 - 0.03874900000062*t1764)*t2008*t475;
  p_output1[6]=(5.136e-14 + 0.503210000008*t2101 - 0.03874900000062*t2144)*t3072 + (-1.284e-8 + 2.012840000032e-6*t2101 - 1.5499600000248e-7*t2144)*t3103 + (0.03874900000062*t2101 + 0.503210000016051*t2144)*t3134 + 0.14871*(-4.e-6*t2144*t3072 - 1.6e-11*t2144*t3103 + 4.e-6*t2101*t3134) - 0.03875*(-1.*t2144*t3072 - 4.e-6*t2144*t3103 + t2101*t3134) + 0.80321*(-1.*t2101*t3072 - 4.e-6*t2101*t3103 - 1.000000000016*t2144*t3134);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_foot_clearance_FlFootParallelStance1.hh"

namespace ParallelStance1
{

void J_foot_clearance_FlFootParallelStance1_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
