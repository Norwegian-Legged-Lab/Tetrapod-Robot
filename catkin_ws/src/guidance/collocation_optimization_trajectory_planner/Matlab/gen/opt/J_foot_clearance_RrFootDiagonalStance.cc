/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:29:02 GMT+01:00
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
  double t633;
  double t662;
  double t1172;
  double t1467;
  double t1582;
  double t1631;
  double t1636;
  double t1639;
  double t1641;
  double t1642;
  double t1681;
  double t1674;
  double t1677;
  double t1686;
  double t1507;
  double t1513;
  double t1679;
  double t1699;
  double t1710;
  double t1806;
  double t1807;
  double t1809;
  double t1817;
  double t1443;
  double t2029;
  double t2030;
  double t2034;
  double t2053;
  double t161;
  double t1957;
  double t1881;
  double t1892;
  double t1909;
  double t2001;
  double t2010;
  double t2014;
  double t2093;
  double t1523;
  double t2124;
  double t1471;
  double t2047;
  double t2187;
  double t2190;
  double t2216;
  double t1836;
  double t2138;
  double t1820;
  double t2255;
  double t2126;
  double t2130;
  double t2139;
  double t2147;
  double t2151;
  double t2154;
  double t2163;
  double t2166;
  double t2260;
  double t2210;
  double t2213;
  double t2215;
  double t2221;
  double t2227;
  double t2232;
  double t2239;
  double t2244;
  double t2274;
  double t2276;
  double t2283;
  double t2284;
  double t2286;
  double t2290;
  double t2294;
  double t2299;
  double t2178;
  double t2319;
  double t2195;
  double t2347;
  double t2308;
  double t2054;
  double t1662;
  double t1666;
  double t311;
  double t1403;
  double t1472;
  double t1473;
  double t1528;
  double t1548;
  double t1567;
  double t1758;
  double t1788;
  double t1814;
  double t1815;
  double t1829;
  double t1835;
  double t1839;
  double t1841;
  double t1869;
  double t1937;
  double t1951;
  double t1963;
  double t1972;
  double t1976;
  double t1997;
  double t1999;
  double t2022;
  double t2040;
  double t2080;
  double t2092;
  double t2098;
  double t2100;
  double t2118;
  double t2401;
  double t2403;
  double t2404;
  double t2407;
  double t2409;
  double t2414;
  double t2170;
  double t2177;
  double t2179;
  double t2186;
  double t2200;
  double t2203;
  double t2209;
  double t2250;
  double t2251;
  double t2256;
  double t2257;
  double t2262;
  double t2270;
  double t2271;
  double t2314;
  double t2417;
  double t2418;
  double t2419;
  double t2421;
  double t2325;
  double t2429;
  double t2437;
  double t2444;
  double t2452;
  double t2337;
  double t2339;
  double t2465;
  double t2470;
  double t2472;
  double t2476;
  double t2351;
  double t2356;
  double t2361;
  double t2363;
  double t2368;
  double t2369;
  double t2372;
  double t2376;
  double t2541;
  double t2545;
  double t2555;
  double t2558;
  double t2564;
  double t2591;
  double t2600;
  double t2603;
  double t2610;
  double t2618;
  double t2620;
  double t2630;
  double t2633;
  double t2646;
  double t2649;
  double t2654;
  double t2655;
  double t2656;
  double t2664;
  double t2666;
  double t2683;
  double t2775;
  double t2781;
  double t2782;
  double t2811;
  double t2812;
  double t2815;
  double t2826;
  double t2830;
  double t2831;
  double t2839;
  double t2849;
  double t2850;
  double t2851;
  double t2861;
  double t2865;
  double t2867;
  double t2931;
  double t2957;
  double t2964;
  double t3016;
  double t3018;
  double t3024;
  double t2919;
  double t3070;
  double t2992;
  double t3032;
  double t3033;
  double t3045;
  double t3048;
  double t3052;
  double t3056;
  double t3062;
  double t3063;
  double t3068;
  double t3072;
  double t3074;
  double t3078;
  double t3083;
  double t3085;
  double t3090;
  double t3091;
  double t3094;
  double t3100;
  double t3155;
  double t3179;
  double t3180;
  double t3181;
  double t3182;
  double t3202;
  double t3204;
  double t3206;
  double t3209;
  double t3166;
  double t3232;
  double t3237;
  double t3240;
  double t3243;
  double t3253;
  double t3186;
  double t3221;
  double t3213;
  t633 = Cos(var1[16]);
  t662 = -1.*t633;
  t1172 = 1. + t662;
  t1467 = Sin(var1[16]);
  t1582 = Sin(var1[3]);
  t1631 = Cos(var1[15]);
  t1636 = -1.*t1631;
  t1639 = 1. + t1636;
  t1641 = -0.15121*t1639;
  t1642 = Sin(var1[15]);
  t1681 = Cos(var1[3]);
  t1674 = Cos(var1[5]);
  t1677 = Sin(var1[4]);
  t1686 = Sin(var1[5]);
  t1507 = -1. + t633;
  t1513 = 4.e-6*t1507;
  t1679 = t1674*t1582*t1677;
  t1699 = t1681*t1686;
  t1710 = t1679 + t1699;
  t1806 = t1681*t1674;
  t1807 = -1.*t1582*t1677*t1686;
  t1809 = t1806 + t1807;
  t1817 = 7.e-6*t1172;
  t1443 = 2.8e-11*t1172;
  t2029 = Cos(var1[17]);
  t2030 = -1.*t2029;
  t2034 = 1. + t2030;
  t2053 = Sin(var1[17]);
  t161 = Cos(var1[4]);
  t1957 = -4.e-6*t1467;
  t1881 = -1.*t1642*t1710;
  t1892 = t1631*t1809;
  t1909 = t1881 + t1892;
  t2001 = t1631*t1710;
  t2010 = t1642*t1809;
  t2014 = t2001 + t2010;
  t2093 = 2.8e-11*t2034;
  t1523 = -7.e-6*t1467;
  t2124 = -2.8e-11*t1172;
  t1471 = -1.*t1467;
  t2047 = 7.e-6*t2034;
  t2187 = -1. + t2029;
  t2190 = 4.e-6*t2187;
  t2216 = 4.e-6*t1172;
  t1836 = 7.e-6*t1467;
  t2138 = -7.e-6*t1172;
  t1820 = 4.e-6*t1467;
  t2255 = 4.e-6*t2053;
  t2126 = t2124 + t1467;
  t2130 = -1.*t161*t2126*t1582;
  t2139 = t2138 + t1957;
  t2147 = t2139*t1909;
  t2151 = -1.000000000016*t1172;
  t2154 = 1. + t2151;
  t2163 = t2154*t2014;
  t2166 = t2130 + t2147 + t2163;
  t2260 = 7.e-6*t2053;
  t2210 = -1.000000000049*t1172;
  t2213 = 1. + t2210;
  t2215 = -1.*t2213*t161*t1582;
  t2221 = t2216 + t1523;
  t2227 = t2221*t1909;
  t2232 = t2124 + t1471;
  t2239 = t2232*t2014;
  t2244 = t2215 + t2227 + t2239;
  t2274 = t2216 + t1836;
  t2276 = -1.*t161*t2274*t1582;
  t2283 = -6.5e-11*t1172;
  t2284 = 1. + t2283;
  t2286 = t2284*t1909;
  t2290 = t2138 + t1820;
  t2294 = t2290*t2014;
  t2299 = t2276 + t2286 + t2294;
  t2178 = -1.*t2053;
  t2319 = 4.e-6*t2034;
  t2195 = -7.e-6*t2053;
  t2347 = -2.8e-11*t2034;
  t2308 = -7.e-6*t2034;
  t2054 = -4.e-6*t2053;
  t1662 = -0.15121*t1642;
  t1666 = t1641 + t1662;
  t311 = 1.5843479999999999e-12*var1[16];
  t1403 = -0.03874900000889869*t1172;
  t1472 = t1443 + t1471;
  t1473 = -0.281211000004*t1472;
  t1528 = t1513 + t1523;
  t1548 = -1.8134809999999998e-6*t1528;
  t1567 = t311 + t1403 + t1473 + t1548;
  t1758 = 0.15121*t1642;
  t1788 = t1641 + t1758;
  t1814 = 3.9608699999999997e-7*var1[16];
  t1815 = -1.1787626499999999e-16*t1172;
  t1829 = t1817 + t1820;
  t1835 = -0.281211000004*t1829;
  t1839 = t1513 + t1836;
  t1841 = -0.038749000006999997*t1839;
  t1869 = t1814 + t1815 + t1835 + t1841;
  t1937 = -2.7726089999999997e-12*var1[16];
  t1951 = -0.2812110000084994*t1172;
  t1963 = t1817 + t1957;
  t1972 = -1.8134809999999998e-6*t1963;
  t1976 = t1443 + t1467;
  t1997 = -0.038749000006999997*t1976;
  t1999 = t1937 + t1951 + t1972 + t1997;
  t2022 = -1.9784030000000015e-12*var1[17];
  t2040 = -0.5031510000160505*t2034;
  t2080 = t2047 + t2054;
  t2092 = -3.367757e-6*t2080;
  t2098 = t2093 + t2053;
  t2100 = -0.038575000014*t2098;
  t2118 = t2022 + t2040 + t2092 + t2100;
  t2401 = t1681*t161*t1674*t1642;
  t2403 = t1631*t1681*t161*t1686;
  t2404 = t2401 + t2403;
  t2407 = -1.*t1631*t1681*t161*t1674;
  t2409 = t1681*t161*t1642*t1686;
  t2414 = t2407 + t2409;
  t2170 = 1.1305160000000008e-12*var1[17];
  t2177 = -0.03857500001589017*t2034;
  t2179 = t2093 + t2178;
  t2186 = -0.5031510000080001*t2179;
  t2200 = t2190 + t2195;
  t2203 = -3.367757e-6*t2200;
  t2209 = t2170 + t2177 + t2186 + t2203;
  t2250 = 2.826290000000002e-7*var1[17];
  t2251 = -2.18904205e-16*t2034;
  t2256 = t2047 + t2255;
  t2257 = -0.5031510000080001*t2256;
  t2262 = t2190 + t2260;
  t2270 = -0.038575000014*t2262;
  t2271 = t2250 + t2251 + t2257 + t2270;
  t2314 = t2308 + t2255;
  t2417 = -1.*t1681*t2126*t1677;
  t2418 = t2139*t2404;
  t2419 = t2154*t2414;
  t2421 = t2417 + t2418 + t2419;
  t2325 = t2319 + t2260;
  t2429 = -1.*t2213*t1681*t1677;
  t2437 = t2221*t2404;
  t2444 = t2232*t2414;
  t2452 = t2429 + t2437 + t2444;
  t2337 = -6.5e-11*t2034;
  t2339 = 1. + t2337;
  t2465 = -1.*t1681*t2274*t1677;
  t2470 = t2284*t2404;
  t2472 = t2290*t2414;
  t2476 = t2465 + t2470 + t2472;
  t2351 = t2347 + t2178;
  t2356 = -1.000000000049*t2034;
  t2361 = 1. + t2356;
  t2363 = t2319 + t2195;
  t2368 = -1.000000000016*t2034;
  t2369 = 1. + t2368;
  t2372 = t2347 + t2053;
  t2376 = t2308 + t2054;
  t2541 = t1681*t1674*t1677;
  t2545 = -1.*t1582*t1686;
  t2555 = t2541 + t2545;
  t2558 = t1674*t1582;
  t2564 = t1681*t1677*t1686;
  t2591 = t2558 + t2564;
  t2600 = t1642*t2555;
  t2603 = t1631*t2591;
  t2610 = t2600 + t2603;
  t2618 = t1631*t2555;
  t2620 = -1.*t1642*t2591;
  t2630 = t2618 + t2620;
  t2633 = t2290*t2610;
  t2646 = t2284*t2630;
  t2649 = t2633 + t2646;
  t2654 = t2232*t2610;
  t2655 = t2221*t2630;
  t2656 = t2654 + t2655;
  t2664 = t2154*t2610;
  t2666 = t2139*t2630;
  t2683 = t2664 + t2666;
  t2775 = -1.*t1681*t1674*t1677;
  t2781 = t1582*t1686;
  t2782 = t2775 + t2781;
  t2811 = -1.*t1642*t2782;
  t2812 = t2811 + t2603;
  t2815 = -1.*t1631*t2782;
  t2826 = t2815 + t2620;
  t2830 = t2290*t2812;
  t2831 = t2284*t2826;
  t2839 = t2830 + t2831;
  t2849 = t2232*t2812;
  t2850 = t2221*t2826;
  t2851 = t2849 + t2850;
  t2861 = t2154*t2812;
  t2865 = t2139*t2826;
  t2867 = t2861 + t2865;
  t2931 = 2.8e-11*t1467;
  t2957 = 7.e-6*t633;
  t2964 = 4.e-6*t633;
  t3016 = t1631*t2782;
  t3018 = t1642*t2591;
  t3024 = t3016 + t3018;
  t2919 = -7.e-6*t633;
  t3070 = -2.8e-11*t1467;
  t2992 = -4.e-6*t633;
  t3032 = t2957 + t1820;
  t3033 = t1681*t161*t3032;
  t3045 = -6.5e-11*t1467*t2812;
  t3048 = t2964 + t1523;
  t3052 = t3048*t3024;
  t3056 = t3033 + t3045 + t3052;
  t3062 = -1.000000000049*t1681*t161*t1467;
  t3063 = t2919 + t1820;
  t3068 = t3063*t2812;
  t3072 = t662 + t3070;
  t3074 = t3072*t3024;
  t3078 = t3062 + t3068 + t3074;
  t3083 = t633 + t3070;
  t3085 = t1681*t161*t3083;
  t3090 = t2992 + t1523;
  t3091 = t3090*t2812;
  t3094 = -1.000000000016*t1467*t3024;
  t3100 = t3085 + t3091 + t3094;
  t3155 = 2.8e-11*t2053;
  t3179 = t1681*t161*t2126;
  t3180 = t2139*t2812;
  t3181 = t2154*t3024;
  t3182 = t3179 + t3180 + t3181;
  t3202 = t2213*t1681*t161;
  t3204 = t2221*t2812;
  t3206 = t2232*t3024;
  t3209 = t3202 + t3204 + t3206;
  t3166 = -4.e-6*t2029;
  t3232 = t1681*t161*t2274;
  t3237 = t2284*t2812;
  t3240 = t2290*t3024;
  t3243 = t3232 + t3237 + t3240;
  t3253 = -2.8e-11*t2053;
  t3186 = -7.e-6*t2029;
  t3221 = 4.e-6*t2029;
  t3213 = 7.e-6*t2029;
  p_output1[0]=1.;
  p_output1[1]=-1.*t1567*t1582*t161 + t1666*t1710 + t1788*t1809 + t1869*t1909 + t1999*t2014 + t2118*t2166 + t2209*t2244 + t2271*t2299 - 0.148715*(t2166*t2314 + t2244*t2325 + t2299*t2339) - 0.038576*(t2166*t2351 + t2244*t2361 + t2299*t2363) - 0.80315*(t2166*t2369 + t2244*t2372 + t2299*t2376);
  p_output1[2]=-1.*t161*t1666*t1674*t1681 - 1.*t1567*t1677*t1681 + t161*t1681*t1686*t1788 + t1869*t2404 + t1999*t2414 + t2118*t2421 + t2209*t2452 + t2271*t2476 - 0.148715*(t2314*t2421 + t2325*t2452 + t2339*t2476) - 0.038576*(t2351*t2421 + t2361*t2452 + t2363*t2476) - 0.80315*(t2369*t2421 + t2372*t2452 + t2376*t2476);
  p_output1[3]=t1788*t2555 + t1666*t2591 + t1999*t2610 + t1869*t2630 + t2271*t2649 + t2209*t2656 + t2118*t2683 - 0.148715*(t2339*t2649 + t2325*t2656 + t2314*t2683) - 0.038576*(t2363*t2649 + t2361*t2656 + t2351*t2683) - 0.80315*(t2376*t2649 + t2372*t2656 + t2369*t2683);
  p_output1[4]=(0.15121*t1631 + t1662)*t2591 + (-0.15121*t1631 + t1662)*t2782 + t1999*t2812 + t1869*t2826 + t2271*t2839 + t2209*t2851 + t2118*t2867 - 0.148715*(t2339*t2839 + t2325*t2851 + t2314*t2867) - 0.038576*(t2363*t2839 + t2361*t2851 + t2351*t2867) - 0.80315*(t2376*t2839 + t2372*t2851 + t2369*t2867);
  p_output1[5]=t2812*(3.9608699999999997e-7 - 1.1787626499999999e-16*t1467 - 0.038749000006999997*(t1957 + t2957) - 0.281211000004*(t1836 + t2964)) + t2271*t3056 + t2209*t3078 + t2118*t3100 - 0.148715*(t2339*t3056 + t2325*t3078 + t2314*t3100) - 0.038576*(t2363*t3056 + t2361*t3078 + t2351*t3100) - 0.80315*(t2376*t3056 + t2372*t3078 + t2369*t3100) + t3024*(-2.7726089999999997e-12 - 0.2812110000084994*t1467 - 1.8134809999999998e-6*(t1836 + t2992) - 0.038749000006999997*(t2931 + t633)) + t161*t1681*(1.5843479999999999e-12 - 0.03874900000889869*t1467 - 1.8134809999999998e-6*(t1957 + t2919) - 0.281211000004*(t2931 + t662));
  p_output1[6]=(-1.9784030000000015e-12 - 0.5031510000160505*t2053 - 0.038575000014*(t2029 + t3155) - 3.367757e-6*(t2260 + t3166))*t3182 + (1.1305160000000008e-12 - 0.03857500001589017*t2053 - 0.5031510000080001*(t2030 + t3155) - 3.367757e-6*(t2054 + t3186))*t3209 + (2.826290000000002e-7 - 2.18904205e-16*t2053 - 0.038575000014*(t2054 + t3213) - 0.5031510000080001*(t2260 + t3221))*t3243 - 0.148715*(t3209*(t2255 + t3213) + t3182*(t2195 + t3221) - 6.5e-11*t2053*t3243) - 0.80315*(-1.000000000016*t2053*t3182 + (t2195 + t3166)*t3243 + t3209*(t2029 + t3253)) - 0.038576*(-1.000000000049*t2053*t3209 + (t2255 + t3186)*t3243 + t3182*(t2030 + t3253));
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

#include "J_foot_clearance_RrFootDiagonalStance.hh"

namespace DiagonalStance
{

void J_foot_clearance_RrFootDiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
