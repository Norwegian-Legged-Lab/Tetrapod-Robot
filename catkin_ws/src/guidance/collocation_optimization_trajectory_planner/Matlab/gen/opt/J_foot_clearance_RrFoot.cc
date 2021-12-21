/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:16:46 GMT+01:00
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
  double t474;
  double t568;
  double t646;
  double t705;
  double t1399;
  double t1428;
  double t1471;
  double t1538;
  double t1539;
  double t1545;
  double t1578;
  double t1562;
  double t1574;
  double t1581;
  double t773;
  double t775;
  double t1575;
  double t1590;
  double t1603;
  double t1678;
  double t1686;
  double t1687;
  double t1700;
  double t698;
  double t1910;
  double t1926;
  double t1935;
  double t1985;
  double t215;
  double t1842;
  double t1734;
  double t1749;
  double t1757;
  double t1867;
  double t1870;
  double t1881;
  double t2008;
  double t814;
  double t2018;
  double t712;
  double t1980;
  double t2121;
  double t2130;
  double t2158;
  double t1725;
  double t2027;
  double t1705;
  double t2189;
  double t2020;
  double t2022;
  double t2028;
  double t2029;
  double t2031;
  double t2042;
  double t2059;
  double t2067;
  double t2206;
  double t2151;
  double t2152;
  double t2153;
  double t2162;
  double t2169;
  double t2170;
  double t2171;
  double t2177;
  double t2230;
  double t2235;
  double t2247;
  double t2249;
  double t2252;
  double t2254;
  double t2256;
  double t2257;
  double t2107;
  double t2281;
  double t2134;
  double t2309;
  double t2266;
  double t1992;
  double t1548;
  double t1551;
  double t472;
  double t667;
  double t718;
  double t763;
  double t1110;
  double t1215;
  double t1397;
  double t1632;
  double t1643;
  double t1695;
  double t1699;
  double t1716;
  double t1722;
  double t1728;
  double t1729;
  double t1732;
  double t1827;
  double t1841;
  double t1847;
  double t1852;
  double t1853;
  double t1858;
  double t1861;
  double t1908;
  double t1978;
  double t2001;
  double t2002;
  double t2009;
  double t2013;
  double t2015;
  double t2390;
  double t2391;
  double t2392;
  double t2394;
  double t2395;
  double t2399;
  double t2090;
  double t2100;
  double t2115;
  double t2119;
  double t2139;
  double t2141;
  double t2143;
  double t2186;
  double t2188;
  double t2194;
  double t2202;
  double t2214;
  double t2215;
  double t2225;
  double t2269;
  double t2402;
  double t2403;
  double t2404;
  double t2406;
  double t2282;
  double t2412;
  double t2415;
  double t2416;
  double t2417;
  double t2297;
  double t2300;
  double t2419;
  double t2422;
  double t2426;
  double t2427;
  double t2310;
  double t2317;
  double t2318;
  double t2320;
  double t2341;
  double t2348;
  double t2357;
  double t2360;
  double t2486;
  double t2488;
  double t2490;
  double t2493;
  double t2496;
  double t2503;
  double t2508;
  double t2514;
  double t2516;
  double t2520;
  double t2521;
  double t2526;
  double t2536;
  double t2538;
  double t2539;
  double t2541;
  double t2546;
  double t2550;
  double t2555;
  double t2560;
  double t2562;
  double t2642;
  double t2649;
  double t2650;
  double t2669;
  double t2678;
  double t2687;
  double t2702;
  double t2718;
  double t2723;
  double t2725;
  double t2743;
  double t2744;
  double t2751;
  double t2774;
  double t2783;
  double t2792;
  double t2894;
  double t2937;
  double t2948;
  double t3002;
  double t3014;
  double t3020;
  double t2884;
  double t3057;
  double t2992;
  double t3026;
  double t3029;
  double t3036;
  double t3038;
  double t3049;
  double t3050;
  double t3052;
  double t3055;
  double t3056;
  double t3058;
  double t3062;
  double t3063;
  double t3069;
  double t3072;
  double t3078;
  double t3080;
  double t3084;
  double t3085;
  double t3158;
  double t3176;
  double t3186;
  double t3192;
  double t3193;
  double t3239;
  double t3245;
  double t3247;
  double t3252;
  double t3166;
  double t3288;
  double t3290;
  double t3292;
  double t3295;
  double t3303;
  double t3199;
  double t3274;
  double t3266;
  t474 = Cos(var1[16]);
  t568 = -1.*t474;
  t646 = 1. + t568;
  t705 = Sin(var1[16]);
  t1399 = Sin(var1[3]);
  t1428 = Cos(var1[15]);
  t1471 = -1.*t1428;
  t1538 = 1. + t1471;
  t1539 = -0.15121*t1538;
  t1545 = Sin(var1[15]);
  t1578 = Cos(var1[3]);
  t1562 = Cos(var1[5]);
  t1574 = Sin(var1[4]);
  t1581 = Sin(var1[5]);
  t773 = -1. + t474;
  t775 = 4.e-6*t773;
  t1575 = t1562*t1399*t1574;
  t1590 = t1578*t1581;
  t1603 = t1575 + t1590;
  t1678 = t1578*t1562;
  t1686 = -1.*t1399*t1574*t1581;
  t1687 = t1678 + t1686;
  t1700 = 7.e-6*t646;
  t698 = 2.8e-11*t646;
  t1910 = Cos(var1[17]);
  t1926 = -1.*t1910;
  t1935 = 1. + t1926;
  t1985 = Sin(var1[17]);
  t215 = Cos(var1[4]);
  t1842 = -4.e-6*t705;
  t1734 = -1.*t1545*t1603;
  t1749 = t1428*t1687;
  t1757 = t1734 + t1749;
  t1867 = t1428*t1603;
  t1870 = t1545*t1687;
  t1881 = t1867 + t1870;
  t2008 = 2.8e-11*t1935;
  t814 = -7.e-6*t705;
  t2018 = -2.8e-11*t646;
  t712 = -1.*t705;
  t1980 = 7.e-6*t1935;
  t2121 = -1. + t1910;
  t2130 = 4.e-6*t2121;
  t2158 = 4.e-6*t646;
  t1725 = 7.e-6*t705;
  t2027 = -7.e-6*t646;
  t1705 = 4.e-6*t705;
  t2189 = 4.e-6*t1985;
  t2020 = t2018 + t705;
  t2022 = -1.*t215*t2020*t1399;
  t2028 = t2027 + t1842;
  t2029 = t2028*t1757;
  t2031 = -1.000000000016*t646;
  t2042 = 1. + t2031;
  t2059 = t2042*t1881;
  t2067 = t2022 + t2029 + t2059;
  t2206 = 7.e-6*t1985;
  t2151 = -1.000000000049*t646;
  t2152 = 1. + t2151;
  t2153 = -1.*t2152*t215*t1399;
  t2162 = t2158 + t814;
  t2169 = t2162*t1757;
  t2170 = t2018 + t712;
  t2171 = t2170*t1881;
  t2177 = t2153 + t2169 + t2171;
  t2230 = t2158 + t1725;
  t2235 = -1.*t215*t2230*t1399;
  t2247 = -6.5e-11*t646;
  t2249 = 1. + t2247;
  t2252 = t2249*t1757;
  t2254 = t2027 + t1705;
  t2256 = t2254*t1881;
  t2257 = t2235 + t2252 + t2256;
  t2107 = -1.*t1985;
  t2281 = 4.e-6*t1935;
  t2134 = -7.e-6*t1985;
  t2309 = -2.8e-11*t1935;
  t2266 = -7.e-6*t1935;
  t1992 = -4.e-6*t1985;
  t1548 = -0.15121*t1545;
  t1551 = t1539 + t1548;
  t472 = 1.5843479999999999e-12*var1[16];
  t667 = -0.03874900000889869*t646;
  t718 = t698 + t712;
  t763 = -0.281211000004*t718;
  t1110 = t775 + t814;
  t1215 = -1.8134809999999998e-6*t1110;
  t1397 = t472 + t667 + t763 + t1215;
  t1632 = 0.15121*t1545;
  t1643 = t1539 + t1632;
  t1695 = 3.9608699999999997e-7*var1[16];
  t1699 = -1.1787626499999999e-16*t646;
  t1716 = t1700 + t1705;
  t1722 = -0.281211000004*t1716;
  t1728 = t775 + t1725;
  t1729 = -0.038749000006999997*t1728;
  t1732 = t1695 + t1699 + t1722 + t1729;
  t1827 = -2.7726089999999997e-12*var1[16];
  t1841 = -0.2812110000084994*t646;
  t1847 = t1700 + t1842;
  t1852 = -1.8134809999999998e-6*t1847;
  t1853 = t698 + t705;
  t1858 = -0.038749000006999997*t1853;
  t1861 = t1827 + t1841 + t1852 + t1858;
  t1908 = -1.9784030000000015e-12*var1[17];
  t1978 = -0.5031510000160505*t1935;
  t2001 = t1980 + t1992;
  t2002 = -3.367757e-6*t2001;
  t2009 = t2008 + t1985;
  t2013 = -0.038575000014*t2009;
  t2015 = t1908 + t1978 + t2002 + t2013;
  t2390 = t1578*t215*t1562*t1545;
  t2391 = t1428*t1578*t215*t1581;
  t2392 = t2390 + t2391;
  t2394 = -1.*t1428*t1578*t215*t1562;
  t2395 = t1578*t215*t1545*t1581;
  t2399 = t2394 + t2395;
  t2090 = 1.1305160000000008e-12*var1[17];
  t2100 = -0.03857500001589017*t1935;
  t2115 = t2008 + t2107;
  t2119 = -0.5031510000080001*t2115;
  t2139 = t2130 + t2134;
  t2141 = -3.367757e-6*t2139;
  t2143 = t2090 + t2100 + t2119 + t2141;
  t2186 = 2.826290000000002e-7*var1[17];
  t2188 = -2.18904205e-16*t1935;
  t2194 = t1980 + t2189;
  t2202 = -0.5031510000080001*t2194;
  t2214 = t2130 + t2206;
  t2215 = -0.038575000014*t2214;
  t2225 = t2186 + t2188 + t2202 + t2215;
  t2269 = t2266 + t2189;
  t2402 = -1.*t1578*t2020*t1574;
  t2403 = t2028*t2392;
  t2404 = t2042*t2399;
  t2406 = t2402 + t2403 + t2404;
  t2282 = t2281 + t2206;
  t2412 = -1.*t2152*t1578*t1574;
  t2415 = t2162*t2392;
  t2416 = t2170*t2399;
  t2417 = t2412 + t2415 + t2416;
  t2297 = -6.5e-11*t1935;
  t2300 = 1. + t2297;
  t2419 = -1.*t1578*t2230*t1574;
  t2422 = t2249*t2392;
  t2426 = t2254*t2399;
  t2427 = t2419 + t2422 + t2426;
  t2310 = t2309 + t2107;
  t2317 = -1.000000000049*t1935;
  t2318 = 1. + t2317;
  t2320 = t2281 + t2134;
  t2341 = -1.000000000016*t1935;
  t2348 = 1. + t2341;
  t2357 = t2309 + t1985;
  t2360 = t2266 + t1992;
  t2486 = t1578*t1562*t1574;
  t2488 = -1.*t1399*t1581;
  t2490 = t2486 + t2488;
  t2493 = t1562*t1399;
  t2496 = t1578*t1574*t1581;
  t2503 = t2493 + t2496;
  t2508 = t1545*t2490;
  t2514 = t1428*t2503;
  t2516 = t2508 + t2514;
  t2520 = t1428*t2490;
  t2521 = -1.*t1545*t2503;
  t2526 = t2520 + t2521;
  t2536 = t2254*t2516;
  t2538 = t2249*t2526;
  t2539 = t2536 + t2538;
  t2541 = t2170*t2516;
  t2546 = t2162*t2526;
  t2550 = t2541 + t2546;
  t2555 = t2042*t2516;
  t2560 = t2028*t2526;
  t2562 = t2555 + t2560;
  t2642 = -1.*t1578*t1562*t1574;
  t2649 = t1399*t1581;
  t2650 = t2642 + t2649;
  t2669 = -1.*t1545*t2650;
  t2678 = t2669 + t2514;
  t2687 = -1.*t1428*t2650;
  t2702 = t2687 + t2521;
  t2718 = t2254*t2678;
  t2723 = t2249*t2702;
  t2725 = t2718 + t2723;
  t2743 = t2170*t2678;
  t2744 = t2162*t2702;
  t2751 = t2743 + t2744;
  t2774 = t2042*t2678;
  t2783 = t2028*t2702;
  t2792 = t2774 + t2783;
  t2894 = 2.8e-11*t705;
  t2937 = 7.e-6*t474;
  t2948 = 4.e-6*t474;
  t3002 = t1428*t2650;
  t3014 = t1545*t2503;
  t3020 = t3002 + t3014;
  t2884 = -7.e-6*t474;
  t3057 = -2.8e-11*t705;
  t2992 = -4.e-6*t474;
  t3026 = t2937 + t1705;
  t3029 = t1578*t215*t3026;
  t3036 = -6.5e-11*t705*t2678;
  t3038 = t2948 + t814;
  t3049 = t3038*t3020;
  t3050 = t3029 + t3036 + t3049;
  t3052 = -1.000000000049*t1578*t215*t705;
  t3055 = t2884 + t1705;
  t3056 = t3055*t2678;
  t3058 = t568 + t3057;
  t3062 = t3058*t3020;
  t3063 = t3052 + t3056 + t3062;
  t3069 = t474 + t3057;
  t3072 = t1578*t215*t3069;
  t3078 = t2992 + t814;
  t3080 = t3078*t2678;
  t3084 = -1.000000000016*t705*t3020;
  t3085 = t3072 + t3080 + t3084;
  t3158 = 2.8e-11*t1985;
  t3176 = t1578*t215*t2020;
  t3186 = t2028*t2678;
  t3192 = t2042*t3020;
  t3193 = t3176 + t3186 + t3192;
  t3239 = t2152*t1578*t215;
  t3245 = t2162*t2678;
  t3247 = t2170*t3020;
  t3252 = t3239 + t3245 + t3247;
  t3166 = -4.e-6*t1910;
  t3288 = t1578*t215*t2230;
  t3290 = t2249*t2678;
  t3292 = t2254*t3020;
  t3295 = t3288 + t3290 + t3292;
  t3303 = -2.8e-11*t1985;
  t3199 = -7.e-6*t1910;
  t3274 = 4.e-6*t1910;
  t3266 = 7.e-6*t1910;
  p_output1[0]=1.;
  p_output1[1]=t1551*t1603 + t1643*t1687 + t1732*t1757 + t1861*t1881 + t2015*t2067 - 1.*t1397*t1399*t215 + t2143*t2177 + t2225*t2257 - 0.148715*(t2067*t2269 + t2177*t2282 + t2257*t2300) - 0.038576*(t2067*t2310 + t2177*t2318 + t2257*t2320) - 0.80315*(t2067*t2348 + t2177*t2357 + t2257*t2360);
  p_output1[2]=-1.*t1397*t1574*t1578 - 1.*t1551*t1562*t1578*t215 + t1578*t1581*t1643*t215 + t1732*t2392 + t1861*t2399 + t2015*t2406 + t2143*t2417 + t2225*t2427 - 0.148715*(t2269*t2406 + t2282*t2417 + t2300*t2427) - 0.038576*(t2310*t2406 + t2318*t2417 + t2320*t2427) - 0.80315*(t2348*t2406 + t2357*t2417 + t2360*t2427);
  p_output1[3]=t1643*t2490 + t1551*t2503 + t1861*t2516 + t1732*t2526 + t2225*t2539 + t2143*t2550 + t2015*t2562 - 0.148715*(t2300*t2539 + t2282*t2550 + t2269*t2562) - 0.038576*(t2320*t2539 + t2318*t2550 + t2310*t2562) - 0.80315*(t2360*t2539 + t2357*t2550 + t2348*t2562);
  p_output1[4]=(0.15121*t1428 + t1548)*t2503 + (-0.15121*t1428 + t1548)*t2650 + t1861*t2678 + t1732*t2702 + t2225*t2725 + t2143*t2751 + t2015*t2792 - 0.148715*(t2300*t2725 + t2282*t2751 + t2269*t2792) - 0.038576*(t2320*t2725 + t2318*t2751 + t2310*t2792) - 0.80315*(t2360*t2725 + t2357*t2751 + t2348*t2792);
  p_output1[5]=t2225*t3050 + t2143*t3063 + t2015*t3085 - 0.148715*(t2300*t3050 + t2282*t3063 + t2269*t3085) - 0.038576*(t2320*t3050 + t2318*t3063 + t2310*t3085) - 0.80315*(t2360*t3050 + t2357*t3063 + t2348*t3085) + t3020*(-2.7726089999999997e-12 - 1.8134809999999998e-6*(t1725 + t2992) - 0.038749000006999997*(t2894 + t474) - 0.2812110000084994*t705) + t1578*t215*(1.5843479999999999e-12 - 1.8134809999999998e-6*(t1842 + t2884) - 0.281211000004*(t2894 + t568) - 0.03874900000889869*t705) + t2678*(3.9608699999999997e-7 - 0.038749000006999997*(t1842 + t2937) - 0.281211000004*(t1725 + t2948) - 1.1787626499999999e-16*t705);
  p_output1[6]=(-1.9784030000000015e-12 - 0.5031510000160505*t1985 - 0.038575000014*(t1910 + t3158) - 3.367757e-6*(t2206 + t3166))*t3193 + (1.1305160000000008e-12 - 0.03857500001589017*t1985 - 0.5031510000080001*(t1926 + t3158) - 3.367757e-6*(t1992 + t3199))*t3252 + (2.826290000000002e-7 - 2.18904205e-16*t1985 - 0.038575000014*(t1992 + t3266) - 0.5031510000080001*(t2206 + t3274))*t3295 - 0.148715*(t3252*(t2189 + t3266) + t3193*(t2134 + t3274) - 6.5e-11*t1985*t3295) - 0.80315*(-1.000000000016*t1985*t3193 + (t2134 + t3166)*t3295 + t3252*(t1910 + t3303)) - 0.038576*(-1.000000000049*t1985*t3252 + (t2189 + t3199)*t3295 + t3193*(t1926 + t3303));
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

#include "J_foot_clearance_RrFoot.hh"

namespace TrotStance1
{

void J_foot_clearance_RrFoot_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
