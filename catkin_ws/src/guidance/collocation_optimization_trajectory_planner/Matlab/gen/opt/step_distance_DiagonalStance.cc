/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:29:03 GMT+01:00
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
  double t1548;
  double t311;
  double t767;
  double t827;
  double t842;
  double t1326;
  double t1403;
  double t1597;
  double t1598;
  double t1679;
  double t1719;
  double t492;
  double t1835;
  double t1811;
  double t1963;
  double t1964;
  double t1972;
  double t2010;
  double t2020;
  double t2022;
  double t2080;
  double t2092;
  double t2098;
  double t2139;
  double t2232;
  double t2167;
  double t2170;
  double t2177;
  double t2179;
  double t2186;
  double t2200;
  double t2251;
  double t2256;
  double t2257;
  double t2262;
  double t2333;
  double t2342;
  double t2344;
  double t2345;
  double t2353;
  double t2362;
  double t2437;
  double t2444;
  double t2464;
  double t2470;
  double t2472;
  double t2506;
  double t2507;
  double t2511;
  double t2516;
  double t2646;
  double t2491;
  double t2498;
  double t2501;
  double t2541;
  double t2556;
  double t2558;
  double t2695;
  double t2700;
  double t2701;
  double t2711;
  double t2652;
  double t2654;
  double t2655;
  double t2662;
  double t2664;
  double t2666;
  double t2831;
  double t2781;
  double t2785;
  double t2794;
  double t2805;
  double t2729;
  double t2738;
  double t2746;
  double t2747;
  double t2750;
  double t2752;
  double t1528;
  double t1612;
  double t1699;
  double t1784;
  double t1806;
  double t1202;
  double t1472;
  double t2908;
  double t1815;
  double t1829;
  double t2920;
  double t1841;
  double t1892;
  double t1923;
  double t1937;
  double t1951;
  double t2913;
  double t2928;
  double t2940;
  double t2948;
  double t2950;
  double t2951;
  double t1995;
  double t1997;
  double t2001;
  double t2100;
  double t2147;
  double t2163;
  double t2960;
  double t2965;
  double t2966;
  double t2975;
  double t2976;
  double t2982;
  double t2221;
  double t2227;
  double t2239;
  double t2245;
  double t2250;
  double t2286;
  double t2290;
  double t2294;
  double t2306;
  double t2315;
  double t3000;
  double t3001;
  double t3002;
  double t3010;
  double t3018;
  double t3026;
  double t3032;
  double t3033;
  double t2371;
  double t2374;
  double t3052;
  double t3057;
  double t3063;
  double t3068;
  double t2403;
  double t2405;
  double t2475;
  double t2477;
  double t2486;
  double t2489;
  double t2504;
  double t2513;
  double t2517;
  double t2518;
  double t2564;
  double t2598;
  double t2600;
  double t2609;
  double t2613;
  double t2618;
  double t2631;
  double t3136;
  double t3144;
  double t3145;
  double t3150;
  double t3151;
  double t3159;
  double t2691;
  double t2706;
  double t2721;
  double t2722;
  double t2758;
  double t2759;
  double t2761;
  double t2807;
  double t2814;
  double t2824;
  double t2829;
  double t2840;
  double t2849;
  double t3173;
  double t3175;
  double t3178;
  double t3179;
  double t3196;
  double t3199;
  double t3200;
  double t3202;
  double t3181;
  double t3184;
  double t3188;
  double t3190;
  double t2885;
  double t2887;
  t1548 = Cos(var1[10]);
  t311 = Cos(var1[4]);
  t767 = Cos(var1[9]);
  t827 = -1.*t767;
  t842 = 1. + t827;
  t1326 = Sin(var1[9]);
  t1403 = -0.15121*t1326;
  t1597 = -1.*t1548;
  t1598 = 1. + t1597;
  t1679 = -1. + t1548;
  t1719 = Sin(var1[10]);
  t492 = Cos(var1[5]);
  t1835 = Sin(var1[5]);
  t1811 = Sin(var1[4]);
  t1963 = -1.*t311*t492*t1326;
  t1964 = -1.*t767*t311*t1835;
  t1972 = t1963 + t1964;
  t2010 = t767*t311*t492;
  t2020 = -1.*t311*t1326*t1835;
  t2022 = t2010 + t2020;
  t2080 = Cos(var1[11]);
  t2092 = -1.*t2080;
  t2098 = 1. + t2092;
  t2139 = Sin(var1[11]);
  t2232 = -1. + t2080;
  t2167 = t1719*t1811;
  t2170 = -4.e-6*t1719*t1972;
  t2177 = -1.000000000016*t1598;
  t2179 = 1. + t2177;
  t2186 = t2179*t2022;
  t2200 = t2167 + t2170 + t2186;
  t2251 = t1548*t1811;
  t2256 = 4.e-6*t1598*t1972;
  t2257 = -1.*t1719*t2022;
  t2262 = t2251 + t2256 + t2257;
  t2333 = 4.e-6*t1598*t1811;
  t2342 = 1.6e-11*t1679;
  t2344 = 1. + t2342;
  t2345 = t2344*t1972;
  t2353 = 4.e-6*t1719*t2022;
  t2362 = t2333 + t2345 + t2353;
  t2437 = Cos(var1[6]);
  t2444 = -1.*t2437;
  t2464 = 1. + t2444;
  t2470 = 0.15121*t2464;
  t2472 = Sin(var1[6]);
  t2506 = Cos(var1[7]);
  t2507 = -1.*t2506;
  t2511 = 1. + t2507;
  t2516 = Sin(var1[7]);
  t2646 = -1. + t2506;
  t2491 = -1.*t311*t2437*t1835;
  t2498 = -1.*t311*t492*t2472;
  t2501 = t2491 + t2498;
  t2541 = t311*t492*t2437;
  t2556 = -1.*t311*t1835*t2472;
  t2558 = t2541 + t2556;
  t2695 = Cos(var1[8]);
  t2700 = -1.*t2695;
  t2701 = 1. + t2700;
  t2711 = Sin(var1[8]);
  t2652 = 4.e-6*t2646*t1811;
  t2654 = 1.6e-11*t2646;
  t2655 = 1. + t2654;
  t2662 = t2655*t2501;
  t2664 = 4.e-6*t2558*t2516;
  t2666 = t2652 + t2662 + t2664;
  t2831 = -1. + t2695;
  t2781 = t2506*t1811;
  t2785 = 4.e-6*t2646*t2501;
  t2794 = t2558*t2516;
  t2805 = t2781 + t2785 + t2794;
  t2729 = -1.000000000016*t2511;
  t2738 = 1. + t2729;
  t2746 = t2738*t2558;
  t2747 = -1.*t1811*t2516;
  t2750 = -4.e-6*t2501*t2516;
  t2752 = t2746 + t2747 + t2750;
  t1528 = -4.9936e-13*var1[10];
  t1612 = -0.038749*t1598;
  t1699 = 6.19984e-13*t1679;
  t1784 = -0.281210000004*t1719;
  t1806 = t1528 + t1612 + t1699 + t1784;
  t1202 = 0.15121*t842;
  t1472 = t1202 + t1403;
  t2908 = Sin(var1[3]);
  t1815 = -0.15121*t842;
  t1829 = t1815 + t1403;
  t2920 = Cos(var1[3]);
  t1841 = -1.2484e-7*var1[10];
  t1892 = 2.479936e-18*t1598;
  t1923 = -1.54996e-7*t1679;
  t1937 = 1.124840000016e-6*t1719;
  t1951 = t1841 + t1892 + t1923 + t1937;
  t2913 = t492*t2908*t1811;
  t2928 = t2920*t1835;
  t2940 = t2913 + t2928;
  t2948 = t2920*t492;
  t2950 = -1.*t2908*t1811*t1835;
  t2951 = t2948 + t2950;
  t1995 = 0.281210000008499*t1598;
  t1997 = -0.03874900000062*t1719;
  t2001 = t1995 + t1997;
  t2100 = 0.50315000001605*t2098;
  t2147 = -0.0398890000006382*t2139;
  t2163 = t2100 + t2147;
  t2960 = -1.*t1326*t2940;
  t2965 = t767*t2951;
  t2966 = t2960 + t2965;
  t2975 = t767*t2940;
  t2976 = t1326*t2951;
  t2982 = t2975 + t2976;
  t2221 = -5.04e-14*var1[11];
  t2227 = -0.039889*t2098;
  t2239 = 6.38224e-13*t2232;
  t2245 = -0.503150000008*t2139;
  t2250 = t2221 + t2227 + t2239 + t2245;
  t2286 = -1.26e-8*var1[11];
  t2290 = 2.552896e-18*t2098;
  t2294 = -1.59556e-7*t2232;
  t2306 = 2.012600000032e-6*t2139;
  t2315 = t2286 + t2290 + t2294 + t2306;
  t3000 = -1.*t311*t1719*t2908;
  t3001 = -4.e-6*t1719*t2966;
  t3002 = t2179*t2982;
  t3010 = t3000 + t3001 + t3002;
  t3018 = -1.*t1548*t311*t2908;
  t3026 = 4.e-6*t1598*t2966;
  t3032 = -1.*t1719*t2982;
  t3033 = t3018 + t3026 + t3032;
  t2371 = 1.6e-11*t2232;
  t2374 = 1. + t2371;
  t3052 = -4.e-6*t1598*t311*t2908;
  t3057 = t2344*t2966;
  t3063 = 4.e-6*t1719*t2982;
  t3068 = t3052 + t3057 + t3063;
  t2403 = -1.000000000016*t2098;
  t2405 = 1. + t2403;
  t2475 = -0.15121*t2472;
  t2477 = t2470 + t2475;
  t2486 = 0.15121*t2472;
  t2489 = t2470 + t2486;
  t2504 = -1.2484e-7*var1[7];
  t2513 = -1.5499600000248e-7*t2511;
  t2517 = 1.124840000016e-6*t2516;
  t2518 = t2504 + t2513 + t2517;
  t2564 = 0.281210000008499*t2511;
  t2598 = 0.03874900000062*t2516;
  t2600 = t2564 + t2598;
  t2609 = 4.9936e-13*var1[7];
  t2613 = -0.03874900000062*t2511;
  t2618 = 0.281210000004*t2516;
  t2631 = t2609 + t2613 + t2618;
  t3136 = t2437*t2951;
  t3144 = -1.*t2940*t2472;
  t3145 = t3136 + t3144;
  t3150 = t2437*t2940;
  t3151 = t2951*t2472;
  t3159 = t3150 + t3151;
  t2691 = -1.284e-8*var1[8];
  t2706 = -1.5499600000248e-7*t2701;
  t2721 = 2.012840000032e-6*t2711;
  t2722 = t2691 + t2706 + t2721;
  t2758 = 0.503210000016051*t2701;
  t2759 = 0.03874900000062*t2711;
  t2761 = t2758 + t2759;
  t2807 = 5.136e-14*var1[8];
  t2814 = -0.03874900000062*t2701;
  t2824 = 0.503210000008*t2711;
  t2829 = t2807 + t2814 + t2824;
  t2840 = 1.6e-11*t2831;
  t2849 = 1. + t2840;
  t3173 = -4.e-6*t311*t2646*t2908;
  t3175 = t2655*t3145;
  t3178 = 4.e-6*t3159*t2516;
  t3179 = t3173 + t3175 + t3178;
  t3196 = -1.*t311*t2506*t2908;
  t3199 = 4.e-6*t2646*t3145;
  t3200 = t3159*t2516;
  t3202 = t3196 + t3199 + t3200;
  t3181 = t2738*t3159;
  t3184 = t311*t2908*t2516;
  t3188 = -4.e-6*t3145*t2516;
  t3190 = t3181 + t3184 + t3188;
  t2885 = -1.000000000016*t2701;
  t2887 = 1. + t2885;
  p_output1[0]=t1806*t1811 + t1951*t1972 + t2001*t2022 + t2163*t2200 + t2250*t2262 + t2315*t2362 - 0.041195*(-1.*t2139*t2200 + t2080*t2262 + 4.e-6*t2098*t2362) - 0.14871*(4.e-6*t2139*t2200 + 4.e-6*t2098*t2262 + t2362*t2374) + 0.803147*(t2139*t2262 - 4.e-6*t2139*t2362 + t2200*t2405) - 1.*t2501*t2518 - 1.*t2558*t2600 - 1.*t1811*t2631 - 1.*t2666*t2722 - 1.*t2752*t2761 - 1.*t2805*t2829 + 0.03875*(t2711*t2752 + t2695*t2805 + 4.e-6*t2666*t2831) - 0.14871*(4.e-6*t2711*t2752 + 4.e-6*t2805*t2831 + t2666*t2849) - 0.80321*(-4.e-6*t2666*t2711 - 1.*t2711*t2805 + t2752*t2887) - 1.*t1829*t1835*t311 + t1835*t2477*t311 + t1472*t311*t492 - 1.*t2489*t311*t492;
  p_output1[1]=t1472*t2940 - 1.*t2489*t2940 + t1829*t2951 - 1.*t2477*t2951 + t1951*t2966 + t2001*t2982 + t2163*t3010 + t2250*t3033 + t2315*t3068 - 0.041195*(-1.*t2139*t3010 + t2080*t3033 + 4.e-6*t2098*t3068) + 0.803147*(t2405*t3010 + t2139*t3033 - 4.e-6*t2139*t3068) - 0.14871*(4.e-6*t2139*t3010 + 4.e-6*t2098*t3033 + t2374*t3068) - 1.*t1806*t2908*t311 + t2631*t2908*t311 - 1.*t2518*t3145 - 1.*t2600*t3159 - 1.*t2722*t3179 - 1.*t2761*t3190 - 1.*t2829*t3202 + 0.03875*(4.e-6*t2831*t3179 + t2711*t3190 + t2695*t3202) - 0.80321*(-4.e-6*t2711*t3179 + t2887*t3190 - 1.*t2711*t3202) - 0.14871*(t2849*t3179 + 4.e-6*t2711*t3190 + 4.e-6*t2831*t3202);
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

#include "step_distance_DiagonalStance.hh"

namespace DiagonalStance
{

void step_distance_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
