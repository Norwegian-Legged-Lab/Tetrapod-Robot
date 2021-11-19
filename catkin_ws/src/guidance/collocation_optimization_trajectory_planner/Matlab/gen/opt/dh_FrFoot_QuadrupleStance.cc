/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 17:51:53 GMT+01:00
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
  double t625;
  double t267;
  double t1042;
  double t901;
  double t958;
  double t1000;
  double t1361;
  double t369;
  double t617;
  double t1044;
  double t1288;
  double t1298;
  double t1349;
  double t1382;
  double t1426;
  double t1285;
  double t1525;
  double t1546;
  double t1561;
  double t1583;
  double t1599;
  double t1616;
  double t1624;
  double t1635;
  double t1678;
  double t1281;
  double t1476;
  double t1483;
  double t1498;
  double t1937;
  double t1945;
  double t1948;
  double t1954;
  double t1971;
  double t1984;
  double t1987;
  double t1684;
  double t1692;
  double t1995;
  double t2018;
  double t2055;
  double t2078;
  double t2108;
  double t2111;
  double t2117;
  double t2118;
  double t2119;
  double t2122;
  double t1460;
  double t1606;
  double t1638;
  double t1669;
  double t1698;
  double t1701;
  double t1706;
  double t1748;
  double t1863;
  double t1864;
  double t1867;
  double t1884;
  double t1900;
  double t1903;
  double t1917;
  double t1988;
  double t2091;
  double t2127;
  double t2132;
  double t2147;
  double t2149;
  double t2151;
  double t2154;
  double t2156;
  double t2167;
  double t1055;
  double t1087;
  double t1120;
  double t1133;
  double t1866;
  double t2139;
  double t2173;
  double t2183;
  double t2405;
  double t2413;
  double t2422;
  double t2431;
  double t2438;
  double t2439;
  double t2259;
  double t2289;
  double t2309;
  double t2310;
  double t1064;
  double t1181;
  double t1204;
  double t2364;
  double t2367;
  double t2368;
  double t2370;
  double t2376;
  double t2380;
  double t2388;
  double t2390;
  double t2328;
  double t2330;
  double t2354;
  double t2359;
  double t2501;
  double t2536;
  double t2537;
  double t2541;
  double t2553;
  double t2564;
  double t2583;
  double t2595;
  double t2599;
  double t2652;
  double t2658;
  double t2659;
  double t2661;
  double t2668;
  double t2670;
  double t2672;
  double t2551;
  double t2569;
  double t2606;
  double t2611;
  double t2618;
  double t2619;
  double t2620;
  double t2623;
  double t2790;
  double t2208;
  double t2222;
  double t2249;
  double t1670;
  double t1776;
  double t1845;
  double t2812;
  double t2489;
  double t2471;
  double t2479;
  double t2482;
  double t2423;
  double t2447;
  double t2456;
  double t2852;
  double t2859;
  double t2862;
  double t2395;
  double t2837;
  double t2841;
  double t2851;
  double t2868;
  double t2881;
  double t2894;
  double t2991;
  double t2994;
  double t3016;
  double t2808;
  double t2809;
  double t2810;
  double t2791;
  double t2793;
  double t2805;
  double t2770;
  double t2731;
  double t2743;
  double t2748;
  double t2759;
  double t2766;
  double t2807;
  double t2813;
  double t2814;
  double t3115;
  double t3088;
  double t3099;
  double t3110;
  double t3064;
  double t3117;
  double t3126;
  double t3165;
  double t3029;
  double t3032;
  double t3037;
  double t2898;
  double t2914;
  double t2926;
  double t2928;
  double t3284;
  double t3291;
  double t3295;
  double t3028;
  double t3276;
  double t3280;
  double t3283;
  double t3299;
  double t3304;
  double t3306;
  double t3332;
  double t3338;
  double t3371;
  double t3528;
  double t3531;
  double t3536;
  double t3541;
  double t3549;
  double t3551;
  double t3559;
  double t3404;
  double t3411;
  double t3412;
  double t3468;
  double t3457;
  double t2769;
  double t2824;
  double t2827;
  double t3729;
  double t3309;
  double t3311;
  double t3313;
  double t3772;
  double t4276;
  double t4297;
  double t4299;
  double t4301;
  double t4248;
  double t4255;
  double t4259;
  double t4263;
  double t4025;
  double t4012;
  double t4457;
  double t4478;
  t625 = Cos(var1[11]);
  t267 = Cos(var1[10]);
  t1042 = -1. + t625;
  t901 = -1.*t625;
  t958 = 1. + t901;
  t1000 = 1.6e-11*t958;
  t1361 = Sin(var1[11]);
  t369 = -1.*t267;
  t617 = 1. + t369;
  t1044 = 1.6e-11*t1042;
  t1288 = -1.000000000016*t958;
  t1298 = 1. + t1288;
  t1349 = 0.004352*t1298;
  t1382 = -0.9999910000159999*t1361;
  t1426 = t1349 + t1382;
  t1285 = Sin(var1[10]);
  t1525 = -1. + t1000;
  t1546 = 4.e-6*t1525;
  t1561 = 3.999964e-6*t958;
  t1583 = -1.7408e-8*t1361;
  t1599 = t1546 + t1561 + t1583;
  t1616 = 0.999991*t625;
  t1624 = 0.004352*t1361;
  t1635 = t1044 + t1616 + t1624;
  t1678 = Cos(var1[9]);
  t1281 = Sin(var1[9]);
  t1476 = -1. + t267;
  t1483 = 1.6e-11*t1476;
  t1498 = 1. + t1483;
  t1937 = -1.26e-8*var1[11];
  t1945 = 1. + t1044;
  t1948 = -0.14871*t1945;
  t1954 = -1.64779999997447e-7*t958;
  t1971 = -1.59556e-7*t1042;
  t1984 = -1.199987999968e-6*t1361;
  t1987 = t1937 + t1948 + t1954 + t1971 + t1984;
  t1684 = -1.000000000016*t617;
  t1692 = 1. + t1684;
  t1995 = 0.803147*t1298;
  t2018 = 0.50315000001605*t958;
  t2055 = 0.00130540515936178*t1361;
  t2078 = t1995 + t2018 + t2055;
  t2108 = -5.04e-14*var1[11];
  t2111 = -0.03988959484*t958;
  t2117 = 6.38224e-13*t1042;
  t2118 = -0.041195*t625;
  t2119 = 0.299996999992*t1361;
  t2122 = t2108 + t2111 + t2117 + t2118 + t2119;
  t1460 = -4.e-6*t1285*t1426;
  t1606 = t1498*t1599;
  t1638 = 4.e-6*t617*t1635;
  t1669 = 0. + t1460 + t1606 + t1638;
  t1698 = t1692*t1426;
  t1701 = 4.e-6*t1285*t1599;
  t1706 = -1.*t1285*t1635;
  t1748 = 0. + t1698 + t1701 + t1706;
  t1863 = -1.*t1678;
  t1864 = 1. + t1863;
  t1867 = -0.15121*t1281;
  t1884 = -1.2484e-7*var1[10];
  t1900 = 2.479936e-18*t617;
  t1903 = -1.54996e-7*t1476;
  t1917 = 1.124840000016e-6*t1285;
  t1988 = t1498*t1987;
  t2091 = -4.e-6*t1285*t2078;
  t2127 = 4.e-6*t617*t2122;
  t2132 = t1884 + t1900 + t1903 + t1917 + t1988 + t2091 + t2127;
  t2147 = 0.281210000008499*t617;
  t2149 = -0.03874900000062*t1285;
  t2151 = 4.e-6*t1285*t1987;
  t2154 = t1692*t2078;
  t2156 = -1.*t1285*t2122;
  t2167 = t2147 + t2149 + t2151 + t2154 + t2156;
  t1055 = -1. + t1000 + t1044;
  t1087 = 4.e-6*t1042;
  t1120 = -4.e-6*t625;
  t1133 = t1087 + t1120;
  t1866 = 0.15121*t1864;
  t2139 = -1.*t1281*t2132;
  t2173 = t1678*t2167;
  t2183 = t1866 + t1867 + t2139 + t2173;
  t2405 = t1498*t1055;
  t2413 = 4.e-6*t617*t1133;
  t2422 = t2405 + t2413;
  t2431 = 4.e-6*t1055*t1285;
  t2438 = -1.*t1133*t1285;
  t2439 = t2431 + t2438;
  t2259 = -0.15121*t1864;
  t2289 = t1678*t2132;
  t2309 = t1281*t2167;
  t2310 = t2259 + t1867 + t2289 + t2309;
  t1064 = 4.e-6*t617*t1055;
  t1181 = t267*t1133;
  t1204 = t1064 + t1181;
  t2364 = -4.9936e-13*var1[10];
  t2367 = -0.038749*t617;
  t2368 = 6.19984e-13*t1476;
  t2370 = -0.281210000004*t1285;
  t2376 = 4.e-6*t617*t1987;
  t2380 = t1285*t2078;
  t2388 = t267*t2122;
  t2390 = 0. + t2364 + t2367 + t2368 + t2370 + t2376 + t2380 + t2388;
  t2328 = t1285*t1426;
  t2330 = 4.e-6*t617*t1599;
  t2354 = t267*t1635;
  t2359 = 0. + t2328 + t2330 + t2354;
  t2501 = t2364 + t2367 + t2368 + t2370 + t2376 + t2380 + t2388;
  t2536 = -1.7408e-8*t958;
  t2537 = -3.999964e-6*t1361;
  t2541 = t2536 + t2537;
  t2553 = 0.999991*t1298;
  t2564 = t2553 + t1624;
  t2583 = -0.004352*t625;
  t2595 = 0.999991*t1361;
  t2599 = t2583 + t2595;
  t2652 = -1.*t1987*t1599;
  t2658 = -1.*t1426*t2078;
  t2659 = -1.*t1635*t2122;
  t2661 = t2652 + t2658 + t2659;
  t2668 = t1055*t1987;
  t2670 = t1133*t2122;
  t2672 = t2668 + t2670;
  t2551 = t1498*t2541;
  t2569 = -4.e-6*t1285*t2564;
  t2606 = 4.e-6*t617*t2599;
  t2611 = 0. + t2551 + t2569 + t2606;
  t2618 = 4.e-6*t1285*t2541;
  t2619 = t1692*t2564;
  t2620 = -1.*t1285*t2599;
  t2623 = 0. + t2618 + t2619 + t2620;
  t2790 = Cos(var1[5]);
  t2208 = t1678*t1669;
  t2222 = t1281*t1748;
  t2249 = 0. + t2208 + t2222;
  t1670 = -1.*t1281*t1669;
  t1776 = t1678*t1748;
  t1845 = 0. + t1670 + t1776;
  t2812 = Sin(var1[5]);
  t2489 = t1204*t2390;
  t2471 = t1678*t2422;
  t2479 = t1281*t2439;
  t2482 = t2471 + t2479;
  t2423 = -1.*t2422*t1281;
  t2447 = t1678*t2439;
  t2456 = t2423 + t2447;
  t2852 = t2790*t2482;
  t2859 = t2456*t2812;
  t2862 = t2852 + t2859;
  t2395 = -1.*t2359*t2390;
  t2837 = t2790*t2249;
  t2841 = t1845*t2812;
  t2851 = 0. + t2837 + t2841;
  t2868 = t2790*t2310;
  t2881 = t2183*t2812;
  t2894 = 0. + t2868 + t2881;
  t2991 = t2790*t2183;
  t2994 = -1.*t2310*t2812;
  t3016 = 0. + t2991 + t2994;
  t2808 = t1678*t2611;
  t2809 = t1281*t2623;
  t2810 = 0. + t2808 + t2809;
  t2791 = -1.*t1281*t2611;
  t2793 = t1678*t2623;
  t2805 = 0. + t2791 + t2793;
  t2770 = Cos(var1[4]);
  t2731 = 4.e-6*t617*t2541;
  t2743 = t1285*t2564;
  t2748 = t267*t2599;
  t2759 = 0. + t2731 + t2743 + t2748;
  t2766 = Sin(var1[4]);
  t2807 = t2790*t2805;
  t2813 = -1.*t2810*t2812;
  t2814 = 0. + t2807 + t2813;
  t3115 = Cos(var1[3]);
  t3088 = t2790*t2810;
  t3099 = t2805*t2812;
  t3110 = 0. + t3088 + t3099;
  t3064 = Sin(var1[3]);
  t3117 = t2770*t2759;
  t3126 = -1.*t2766*t2814;
  t3165 = 0. + t3117 + t3126;
  t3029 = t2790*t1845;
  t3032 = -1.*t2249*t2812;
  t3037 = 0. + t3029 + t3032;
  t2898 = t2862*t2894;
  t2914 = t2790*t2456;
  t2926 = -1.*t2482*t2812;
  t2928 = t2914 + t2926;
  t3284 = t1204*t2766;
  t3291 = t2770*t2928;
  t3295 = t3284 + t3291;
  t3028 = -1.*t2851*t2894;
  t3276 = t2359*t2766;
  t3280 = t2770*t3037;
  t3283 = 0. + t3276 + t3280;
  t3299 = t2390*t2766;
  t3304 = t2770*t3016;
  t3306 = 0. + t3299 + t3304;
  t3332 = t2770*t2390;
  t3338 = -1.*t2766*t3016;
  t3371 = 0. + t3332 + t3338;
  t3528 = t2541*t1987;
  t3531 = t2078*t2564;
  t3536 = t2122*t2599;
  t3541 = t3528 + t3531 + t3536;
  t3549 = -1.*t1055*t1987;
  t3551 = -1.*t1133*t2122;
  t3559 = t3549 + t3551;
  t3404 = t2770*t2359;
  t3411 = -1.*t2766*t3037;
  t3412 = 0. + t3404 + t3411;
  t3468 = -1.*t1204*t2390;
  t3457 = t2390*t2759;
  t2769 = t2759*t2766;
  t2824 = t2770*t2814;
  t2827 = 0. + t2769 + t2824;
  t3729 = -1.*t2862*t2894;
  t3309 = t1204*t2770;
  t3311 = -1.*t2766*t2928;
  t3313 = t3309 + t3311;
  t3772 = t2894*t3110;
  t4276 = t1987*t1599;
  t4297 = t1426*t2078;
  t4299 = t1635*t2122;
  t4301 = t4276 + t4297 + t4299;
  t4248 = -1.*t2541*t1987;
  t4255 = -1.*t2078*t2564;
  t4259 = -1.*t2122*t2599;
  t4263 = t4248 + t4255 + t4259;
  t4025 = t2359*t2390;
  t4012 = -1.*t2390*t2759;
  t4457 = t2851*t2894;
  t4478 = -1.*t2894*t3110;
  p_output1[0]=t2827*var2[0] + (0. + t3110*t3115 - 1.*t3064*t3165)*var2[1] + (0. + t3064*t3110 + t3115*t3165)*var2[2] + (t3283*(t2898 + t3295*t3306 + t3313*t3371) + t3295*(t3028 - 1.*t3283*t3306 - 1.*t3371*t3412))*var2[3] + (t2851*(t2489 + t2898 + t2928*t3016) + t2862*(t2395 + t3028 - 1.*t3016*t3037))*var2[4] + (t1204*(-1.*t1845*t2183 - 1.*t2249*t2310 + t2395) + t2359*(t2183*t2456 + t2310*t2482 + t2489))*var2[5] + (t2359*(t2132*t2422 + t2167*t2439 + t1204*t2501) + t1204*(-1.*t1669*t2132 - 1.*t1748*t2167 - 1.*t2359*t2501) - 0.15121*t2611 - 0.15121*t2623)*var2[9] + (1.e-6*t2541 - 0.038749*t2564 - 0.28121*t2599 - 1.*t1055*t2661 - 1.*t1599*t2672 + 4.e-6*(-1.*t1133*t2661 - 1.*t1635*t2672))*var2[10] - 1.9353204325022392e-7*var2[11];
  p_output1[1]=t3283*var2[0] + (0. + t2851*t3115 - 1.*t3064*t3412)*var2[1] + (0. + t2851*t3064 + t3115*t3412)*var2[2] + (t2827*(-1.*t3295*t3306 - 1.*t3313*t3371 + t3729) + t3295*(t2827*t3306 + t3165*t3371 + t3772))*var2[3] + (t3110*(-1.*t2928*t3016 + t3468 + t3729) + t2862*(t2814*t3016 + t3457 + t3772))*var2[4] + (t1204*(t2183*t2805 + t2310*t2810 + t3457) + t2759*(-1.*t2183*t2456 - 1.*t2310*t2482 + t3468))*var2[5] + (-0.15121*t1669 - 0.15121*t1748 + (-1.*t2132*t2422 - 1.*t2167*t2439 - 1.*t1204*t2501)*t2759 + t1204*(t2132*t2611 + t2167*t2623 + t2501*t2759))*var2[9] + (-0.038749*t1426 + 1.e-6*t1599 - 0.28121*t1635 - 1.*t1055*t3541 - 1.*t2541*t3559 + 4.e-6*(-1.*t1133*t3541 - 1.*t2599*t3559))*var2[10] + 0.29999998115510645*var2[11];
  p_output1[2]=t3295*var2[0] + (t2862*t3115 - 1.*t3064*t3313)*var2[1] + (t2862*t3064 + t3115*t3313)*var2[2] + (t2827*(t3283*t3306 + t3371*t3412 + t4457) + t3283*(-1.*t2827*t3306 - 1.*t3165*t3371 + t4478))*var2[3] + (t3110*(t3016*t3037 + t4025 + t4457) + t2851*(-1.*t2814*t3016 + t4012 + t4478))*var2[4] + (t2359*(-1.*t2183*t2805 - 1.*t2310*t2810 + t4012) + t2759*(t1845*t2183 + t2249*t2310 + t4025))*var2[5] + (-0.15121*t2422 - 0.15121*t2439 + (t1669*t2132 + t1748*t2167 + t2359*t2501)*t2759 + t2359*(-1.*t2132*t2611 - 1.*t2167*t2623 - 1.*t2501*t2759))*var2[9] + (1.e-6*t1055 - 0.28121*t1133 - 1.*t1599*t4263 - 1.*t2541*t4301 + 4.e-6*(-1.*t1635*t4263 - 1.*t2599*t4301))*var2[10] + 1.1914820871506078e-8*var2[11];
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
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
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

#include "dh_FrFoot_QuadrupleStance.hh"

namespace QuadrupleStance
{

void dh_FrFoot_QuadrupleStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
