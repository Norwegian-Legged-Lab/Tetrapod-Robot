/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 22:32:41 GMT+01:00
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
  double t1123;
  double t1126;
  double t1140;
  double t1254;
  double t307;
  double t1268;
  double t1593;
  double t1659;
  double t709;
  double t1459;
  double t1804;
  double t1169;
  double t1192;
  double t1379;
  double t1453;
  double t1484;
  double t1489;
  double t1540;
  double t1552;
  double t1846;
  double t1708;
  double t1738;
  double t1749;
  double t1755;
  double t1756;
  double t1781;
  double t1812;
  double t1821;
  double t1836;
  double t1872;
  double t1922;
  double t1931;
  double t1935;
  double t1936;
  double t1938;
  double t1945;
  double t1951;
  double t471;
  double t472;
  double t1985;
  double t2025;
  double t2001;
  double t2002;
  double t2010;
  double t2011;
  double t2016;
  double t2017;
  double t2018;
  double t2019;
  double t2022;
  double t1981;
  double t2033;
  double t2034;
  double t2035;
  double t2036;
  double t2037;
  double t2038;
  double t2039;
  double t2043;
  double t2044;
  double t2047;
  double t1861;
  double t1870;
  double t1109;
  double t1122;
  double t1675;
  double t1685;
  double t1958;
  double t1966;
  double t1976;
  double t2189;
  double t2195;
  double t2197;
  double t2203;
  double t2228;
  double t2229;
  double t2235;
  double t2240;
  double t2252;
  double t2258;
  double t2260;
  double t2283;
  double t2288;
  double t2289;
  double t2298;
  double t2307;
  double t2308;
  double t2314;
  double t2315;
  double t2072;
  double t2354;
  double t2360;
  double t2365;
  double t2372;
  double t2374;
  double t2378;
  double t2383;
  double t2385;
  double t2394;
  double t2397;
  double t2399;
  double t2401;
  double t2404;
  double t2409;
  double t2410;
  double t2411;
  double t2054;
  double t2055;
  double t2061;
  double t2024;
  double t2051;
  double t2052;
  double t1580;
  double t1839;
  double t1952;
  double t1957;
  double t2053;
  double t2128;
  double t2130;
  double t2440;
  double t2326;
  double t2331;
  double t2333;
  double t2299;
  double t2319;
  double t2320;
  double t2447;
  double t2208;
  double t2245;
  double t2267;
  double t2272;
  double t2325;
  double t2334;
  double t2335;
  double t2420;
  double t2421;
  double t2424;
  double t2403;
  double t2413;
  double t2414;
  double t2368;
  double t2379;
  double t2387;
  double t2390;
  double t2419;
  double t2427;
  double t2430;
  double t2441;
  double t2443;
  double t2444;
  double t2450;
  double t2451;
  double t2453;
  double t2460;
  double t2461;
  double t2463;
  double t2467;
  double t2469;
  double t2470;
  double t2477;
  double t2479;
  double t2480;
  double t2483;
  double t2490;
  double t2491;
  double t2274;
  double t2343;
  double t2349;
  double t2563;
  double t2571;
  double t2573;
  double t2574;
  double t2575;
  double t2580;
  double t2585;
  double t2592;
  double t2601;
  double t2608;
  double t2611;
  double t2618;
  double t2624;
  double t2628;
  double t2632;
  double t2634;
  double t2641;
  double t2642;
  double t2653;
  double t2654;
  double t2657;
  double t2658;
  double t2665;
  double t2666;
  double t2669;
  double t2670;
  double t2672;
  double t2673;
  double t2674;
  double t2676;
  double t2677;
  double t2681;
  double t2544;
  double t2547;
  double t2551;
  double t2553;
  double t2554;
  double t2557;
  double t2560;
  double t2561;
  double t2564;
  double t2567;
  double t2612;
  double t2662;
  double t2721;
  double t2728;
  double t2750;
  double t2757;
  double t2761;
  double t2762;
  double t2765;
  double t2769;
  double t2773;
  double t2790;
  double t2791;
  double t2799;
  double t2800;
  double t1963;
  double t2139;
  double t2177;
  double t2810;
  double t2811;
  double t2812;
  double t2814;
  double t2550;
  double t2736;
  double t2803;
  double t2804;
  double t2820;
  double t2824;
  double t2827;
  double t2830;
  double t2831;
  double t2832;
  double t2836;
  double t2840;
  double t2841;
  double t2842;
  double t2846;
  double t2851;
  double t2852;
  double t2807;
  double t2815;
  double t2816;
  double t2845;
  double t2853;
  double t2854;
  double t2856;
  double t2858;
  double t2859;
  double t2393;
  double t2431;
  double t2433;
  double t2819;
  double t2866;
  double t2877;
  double t2899;
  double t2924;
  double t2934;
  double t2946;
  double t2955;
  double t2963;
  double t2987;
  double t3014;
  double t3018;
  double t3196;
  double t3197;
  double t3198;
  double t3201;
  double t3204;
  double t3208;
  double t3209;
  double t3213;
  double t3252;
  double t3254;
  double t3255;
  double t3258;
  double t3264;
  double t3267;
  double t3269;
  double t3271;
  double t3182;
  double t3307;
  double t3308;
  double t3311;
  double t3317;
  double t3319;
  double t3320;
  double t3322;
  double t3323;
  t1123 = Cos(var1[14]);
  t1126 = -1.*t1123;
  t1140 = 1. + t1126;
  t1254 = Sin(var1[14]);
  t307 = Cos(var1[13]);
  t1268 = -7.e-6*t1254;
  t1593 = -1.*t307;
  t1659 = 1. + t1593;
  t709 = Sin(var1[13]);
  t1459 = -7.e-6*t1140;
  t1804 = -1.*t1254;
  t1169 = -6.5e-11*t1140;
  t1192 = 4.e-6*t1140;
  t1379 = t1192 + t1268;
  t1453 = 4.e-6*t1379;
  t1484 = -4.e-6*t1254;
  t1489 = t1459 + t1484;
  t1540 = -7.e-6*t1489;
  t1552 = 1. + t1169 + t1453 + t1540;
  t1846 = 2.8e-11*t1659;
  t1708 = 1.000000000049*t1140;
  t1738 = -1. + t1708;
  t1749 = 4.e-6*t1738;
  t1755 = -1. + t1123;
  t1756 = 4.e-6*t1755;
  t1781 = 2.8e-11*t1140;
  t1812 = t1781 + t1804;
  t1821 = -7.e-6*t1812;
  t1836 = t1749 + t1756 + t1821 + t1268;
  t1872 = -1.000000000016*t1140;
  t1922 = 1. + t1872;
  t1931 = -7.e-6*t1922;
  t1935 = -2.8e-11*t1140;
  t1936 = t1935 + t1804;
  t1938 = 4.e-6*t1936;
  t1945 = 4.e-6*t1254;
  t1951 = t1931 + t1459 + t1938 + t1945;
  t471 = -1. + t307;
  t472 = 4.e-6*t471;
  t1985 = -7.e-6*t1659;
  t2025 = Sin(var1[12]);
  t2001 = 4.e-6*t709;
  t2002 = t1985 + t2001;
  t2010 = t2002*t1552;
  t2011 = t1846 + t709;
  t2016 = t2011*t1836;
  t2017 = -1.000000000016*t1659;
  t2018 = 1. + t2017;
  t2019 = t2018*t1951;
  t2022 = t2010 + t2016 + t2019;
  t1981 = Cos(var1[12]);
  t2033 = -6.5e-11*t1659;
  t2034 = 1. + t2033;
  t2035 = t2034*t1552;
  t2036 = 7.e-6*t709;
  t2037 = t472 + t2036;
  t2038 = t2037*t1836;
  t2039 = -4.e-6*t709;
  t2043 = t1985 + t2039;
  t2044 = t2043*t1951;
  t2047 = t2035 + t2038 + t2044;
  t1861 = -1.*t709;
  t1870 = t1846 + t1861;
  t1109 = -7.e-6*t709;
  t1122 = t472 + t1109;
  t1675 = -1.000000000049*t1659;
  t1685 = 1. + t1675;
  t1958 = Sin(var1[4]);
  t1966 = Cos(var1[4]);
  t1976 = Cos(var1[5]);
  t2189 = 1.000000000016*t1140;
  t2195 = t1459 + t1945;
  t2197 = -7.e-6*t2195;
  t2203 = -1. + t2189 + t2197;
  t2228 = 1. + t1169;
  t2229 = -7.e-6*t2228;
  t2235 = 7.e-6*t1140;
  t2240 = t2229 + t2235 + t1945;
  t2252 = t1756 + t1268;
  t2258 = -7.e-6*t2252;
  t2260 = t1935 + t2258 + t1254;
  t2283 = t2043*t2203;
  t2288 = t2034*t2240;
  t2289 = t2037*t2260;
  t2298 = t2283 + t2288 + t2289;
  t2307 = t2018*t2203;
  t2308 = t2002*t2240;
  t2314 = t2011*t2260;
  t2315 = t2307 + t2308 + t2314;
  t2072 = Sin(var1[5]);
  t2354 = -1.000000000049*t1140;
  t2360 = 4.e-6*t2252;
  t2365 = 1. + t2354 + t2360;
  t2372 = 4.e-6*t2228;
  t2374 = 7.e-6*t1254;
  t2378 = t2372 + t1756 + t2374;
  t2383 = 4.e-6*t2195;
  t2385 = t1781 + t2383 + t1254;
  t2394 = t2011*t2365;
  t2397 = t2002*t2378;
  t2399 = t2018*t2385;
  t2401 = t2394 + t2397 + t2399;
  t2404 = t2037*t2365;
  t2409 = t2034*t2378;
  t2410 = t2043*t2385;
  t2411 = t2404 + t2409 + t2410;
  t2054 = t2025*t2022;
  t2055 = t1981*t2047;
  t2061 = t2054 + t2055;
  t2024 = t1981*t2022;
  t2051 = -1.*t2025*t2047;
  t2052 = t2024 + t2051;
  t1580 = t1122*t1552;
  t1839 = t1685*t1836;
  t1952 = t1870*t1951;
  t1957 = t1580 + t1839 + t1952;
  t2053 = t1976*t2052;
  t2128 = -1.*t2061*t2072;
  t2130 = t2053 + t2128;
  t2440 = Cos(var1[3]);
  t2326 = t1981*t2298;
  t2331 = t2025*t2315;
  t2333 = t2326 + t2331;
  t2299 = -1.*t2025*t2298;
  t2319 = t1981*t2315;
  t2320 = t2299 + t2319;
  t2447 = Sin(var1[3]);
  t2208 = t1870*t2203;
  t2245 = t1122*t2240;
  t2267 = t1685*t2260;
  t2272 = t2208 + t2245 + t2267;
  t2325 = t1976*t2320;
  t2334 = -1.*t2333*t2072;
  t2335 = t2325 + t2334;
  t2420 = t2025*t2401;
  t2421 = t1981*t2411;
  t2424 = t2420 + t2421;
  t2403 = t1981*t2401;
  t2413 = -1.*t2025*t2411;
  t2414 = t2403 + t2413;
  t2368 = t1685*t2365;
  t2379 = t1122*t2378;
  t2387 = t1870*t2385;
  t2390 = t2368 + t2379 + t2387;
  t2419 = t1976*t2414;
  t2427 = -1.*t2424*t2072;
  t2430 = t2419 + t2427;
  t2441 = t1976*t2061;
  t2443 = t2052*t2072;
  t2444 = t2441 + t2443;
  t2450 = t1966*t1957;
  t2451 = -1.*t1958*t2130;
  t2453 = t2450 + t2451;
  t2460 = t1976*t2333;
  t2461 = t2320*t2072;
  t2463 = t2460 + t2461;
  t2467 = t1966*t2272;
  t2469 = -1.*t1958*t2335;
  t2470 = t2467 + t2469;
  t2477 = t1976*t2424;
  t2479 = t2414*t2072;
  t2480 = t2477 + t2479;
  t2483 = t1966*t2390;
  t2490 = -1.*t1958*t2430;
  t2491 = t2483 + t2490;
  t2274 = t2272*t1958;
  t2343 = t1966*t2335;
  t2349 = t2274 + t2343;
  t2563 = 7.e-6*t1659;
  t2571 = -2.598649999999999e-7*var1[14];
  t2573 = 0.148705*t2228;
  t2574 = -2.3905277499999995e-16*t1140;
  t2575 = -0.038922999986*t1379;
  t2580 = -0.80315*t1489;
  t2585 = t2235 + t1945;
  t2592 = -0.503149000008*t2585;
  t2601 = t1756 + t2374;
  t2608 = -0.038924*t2601;
  t2611 = t2571 + t2573 + t2574 + t2575 + t2580 + t2592 + t2608;
  t2618 = 1.0394599999999997e-12*var1[14];
  t2624 = 1. + t2354;
  t2628 = -0.038924*t2624;
  t2632 = -0.03892299998790722*t1140;
  t2634 = -0.80315*t1812;
  t2641 = 0.148705*t2252;
  t2642 = t1192 + t2374;
  t2653 = -3.6777349999999994e-6*t2642;
  t2654 = t1935 + t1254;
  t2657 = -0.503149000008*t2654;
  t2658 = t2618 + t2628 + t2632 + t2634 + t2641 + t2653 + t2657;
  t2665 = 1.8190549999999993e-12*var1[14];
  t2666 = -0.80315*t1922;
  t2669 = -0.5031490000160505*t1140;
  t2670 = -0.038922999986*t1936;
  t2672 = t2235 + t1484;
  t2673 = -3.6777349999999994e-6*t2672;
  t2674 = 0.148705*t2195;
  t2676 = t1781 + t1254;
  t2677 = -0.038924*t2676;
  t2681 = t2665 + t2666 + t2669 + t2670 + t2673 + t2674 + t2677;
  t2544 = -1.*t1981;
  t2547 = 1. + t2544;
  t2551 = 0.15121*t2025;
  t2553 = 1.0248489999999998e-12*var1[13];
  t2554 = -0.28120900000849935*t1659;
  t2557 = -2.8e-11*t1659;
  t2560 = t2557 + t1861;
  t2561 = -0.038748999993*t2560;
  t2564 = t2563 + t2039;
  t2567 = -2.123459e-6*t2564;
  t2612 = t2002*t2611;
  t2662 = t2011*t2658;
  t2721 = t2018*t2681;
  t2728 = t2553 + t2554 + t2561 + t2567 + t2612 + t2662 + t2721;
  t2750 = -1.4640699999999997e-7*var1[13];
  t2757 = -1.38024835e-16*t1659;
  t2761 = 4.e-6*t1659;
  t2762 = t2761 + t1109;
  t2765 = -0.038748999993*t2762;
  t2769 = t2563 + t2001;
  t2773 = -0.281209000004*t2769;
  t2790 = t2034*t2611;
  t2791 = t2037*t2658;
  t2799 = t2043*t2681;
  t2800 = t2750 + t2757 + t2765 + t2773 + t2790 + t2791 + t2799;
  t1963 = t1957*t1958;
  t2139 = t1966*t2130;
  t2177 = t1963 + t2139;
  t2810 = -0.15121*t2547;
  t2811 = t1981*t2728;
  t2812 = -1.*t2025*t2800;
  t2814 = t2810 + t2551 + t2811 + t2812;
  t2550 = 0.15121*t2547;
  t2736 = t2025*t2728;
  t2803 = t1981*t2800;
  t2804 = t2550 + t2551 + t2736 + t2803;
  t2820 = 5.856279999999999e-13*var1[13];
  t2824 = -0.0387489999948987*t1659;
  t2827 = t2761 + t2036;
  t2830 = -2.123459e-6*t2827;
  t2831 = t2557 + t709;
  t2832 = -0.281209000004*t2831;
  t2836 = t1122*t2611;
  t2840 = t1685*t2658;
  t2841 = t1870*t2681;
  t2842 = t2820 + t2824 + t2830 + t2832 + t2836 + t2840 + t2841;
  t2846 = t1976*t2814;
  t2851 = -1.*t2804*t2072;
  t2852 = t2846 + t2851;
  t2807 = t1976*t2804;
  t2815 = t2814*t2072;
  t2816 = t2807 + t2815;
  t2845 = t2842*t1958;
  t2853 = t1966*t2852;
  t2854 = t2845 + t2853;
  t2856 = t1966*t2842;
  t2858 = -1.*t1958*t2852;
  t2859 = t2856 + t2858;
  t2393 = t2390*t1958;
  t2431 = t1966*t2430;
  t2433 = t2393 + t2431;
  t2819 = -1.*t2444*t2816;
  t2866 = t2463*t2816;
  t2877 = t2444*t2816;
  t2899 = -1.*t2480*t2816;
  t2924 = -1.*t2463*t2816;
  t2934 = t2480*t2816;
  t2946 = -1.*t1957*t2842;
  t2955 = t2272*t2842;
  t2963 = t1957*t2842;
  t2987 = -1.*t2390*t2842;
  t3014 = -1.*t2272*t2842;
  t3018 = t2390*t2842;
  t3196 = t2611*t2240;
  t3197 = t2260*t2658;
  t3198 = t2203*t2681;
  t3201 = t3196 + t3197 + t3198;
  t3204 = -1.*t1552*t2611;
  t3208 = -1.*t1836*t2658;
  t3209 = -1.*t1951*t2681;
  t3213 = t3204 + t3208 + t3209;
  t3252 = t1552*t2611;
  t3254 = t1836*t2658;
  t3255 = t1951*t2681;
  t3258 = t3252 + t3254 + t3255;
  t3264 = -1.*t2611*t2378;
  t3267 = -1.*t2365*t2658;
  t3269 = -1.*t2385*t2681;
  t3271 = t3264 + t3267 + t3269;
  t3182 = 6.5e-11*t1140;
  t3307 = -1.*t2611*t2240;
  t3308 = -1.*t2260*t2658;
  t3311 = -1.*t2203*t2681;
  t3317 = t3307 + t3308 + t3311;
  t3319 = t2611*t2378;
  t3320 = t2365*t2658;
  t3322 = t2385*t2681;
  t3323 = t3319 + t3320 + t3322;
  p_output1[0]=t2349*var2[0] + t2433*var2[1] + t2177*var2[2];
  p_output1[1]=(t2440*t2463 - 1.*t2447*t2470)*var2[0] + (t2440*t2480 - 1.*t2447*t2491)*var2[1] + (t2440*t2444 - 1.*t2447*t2453)*var2[2];
  p_output1[2]=(t2447*t2463 + t2440*t2470)*var2[0] + (t2447*t2480 + t2440*t2491)*var2[1] + (t2444*t2447 + t2440*t2453)*var2[2];
  p_output1[3]=(t2433*(t2177*t2854 + t2453*t2859 + t2877) + t2177*(-1.*t2433*t2854 - 1.*t2491*t2859 + t2899))*var2[0] + (t2349*(t2819 - 1.*t2177*t2854 - 1.*t2453*t2859) + t2177*(t2349*t2854 + t2470*t2859 + t2866))*var2[1] + (t2433*(-1.*t2349*t2854 - 1.*t2470*t2859 + t2924) + t2349*(t2433*t2854 + t2491*t2859 + t2934))*var2[2];
  p_output1[4]=(t2480*(t2130*t2852 + t2877 + t2963) + t2444*(-1.*t2430*t2852 + t2899 + t2987))*var2[0] + (t2463*(t2819 - 1.*t2130*t2852 + t2946) + t2444*(t2335*t2852 + t2866 + t2955))*var2[1] + (t2480*(-1.*t2335*t2852 + t2924 + t3014) + t2463*(t2430*t2852 + t2934 + t3018))*var2[2];
  p_output1[5]=(t2390*(t2061*t2804 + t2052*t2814 + t2963) + t1957*(-1.*t2424*t2804 - 1.*t2414*t2814 + t2987))*var2[0] + (t2272*(-1.*t2061*t2804 - 1.*t2052*t2814 + t2946) + t1957*(t2333*t2804 + t2320*t2814 + t2955))*var2[1] + (t2390*(-1.*t2333*t2804 - 1.*t2320*t2814 + t3014) + t2272*(t2424*t2804 + t2414*t2814 + t3018))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.15121*t2298 + 0.15121*t2315 + t2390*(t2022*t2728 + t2047*t2800 + t2963) + t1957*(-1.*t2401*t2728 - 1.*t2411*t2800 + t2987))*var2[0] + (0.15121*t2401 + 0.15121*t2411 + t2272*(-1.*t2022*t2728 - 1.*t2047*t2800 + t2946) + t1957*(t2315*t2728 + t2298*t2800 + t2955))*var2[1] + (0.15121*t2022 + 0.15121*t2047 + t2390*(-1.*t2315*t2728 - 1.*t2298*t2800 + t3014) + t2272*(t2401*t2728 + t2411*t2800 + t3018))*var2[2];
  p_output1[13]=(0.038749*t2203 + 1.e-6*(t1459 + t1484 + 7.e-6*t2228) - 0.281209*t2260 + t2378*t3258 + t1552*t3271 + 4.e-6*(-1.*t2365*t3258 - 1.*t1836*t3271) - 7.e-6*(t2385*t3258 + t1951*t3271))*var2[0] + (-0.281209*t2365 + 0.038749*t2385 + 1.e-6*(t1192 + t1268 + 4.e-6*(-1. + t3182)) + t1552*t3201 + t2240*t3213 - 7.e-6*(t1951*t3201 + t2203*t3213) + 4.e-6*(-1.*t1836*t3201 - 1.*t2260*t3213))*var2[1] + (-0.281209*t1836 + 0.038749*t1951 + 1.e-6*(-1. + 7.e-6*t1489 + 4.e-6*t2601 + t3182) + t2378*t3317 + t2240*t3323 - 7.e-6*(t2385*t3317 + t2203*t3323) + 4.e-6*(-1.*t2365*t3317 - 1.*t2260*t3323))*var2[2];
  p_output1[14]=4.0519653002457196e-7*var2[0] + 0.29999995910920463*var2[1] - 2.5986500000000035e-7*var2[2];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fRlFoot_vec_QuadrupleStance.hh"

namespace QuadrupleStance
{

void fRlFoot_vec_QuadrupleStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
