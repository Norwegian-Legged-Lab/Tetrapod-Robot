/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:18:53 GMT+01:00
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
  double t43;
  double t65;
  double t1305;
  double t1347;
  double t1356;
  double t1407;
  double t1547;
  double t1560;
  double t1580;
  double t1636;
  double t1511;
  double t275;
  double t282;
  double t631;
  double t638;
  double t691;
  double t765;
  double t829;
  double t932;
  double t963;
  double t997;
  double t1811;
  double t1394;
  double t1691;
  double t1703;
  double t1440;
  double t1901;
  double t1950;
  double t1616;
  double t2134;
  double t2141;
  double t2145;
  double t2154;
  double t2033;
  double t2045;
  double t1913;
  double t1925;
  double t1928;
  double t2058;
  double t2061;
  double t2068;
  double t2171;
  double t1878;
  double t2191;
  double t1902;
  double t2220;
  double t2150;
  double t2258;
  double t2260;
  double t1409;
  double t2185;
  double t2364;
  double t2369;
  double t2376;
  double t2383;
  double t2088;
  double t2009;
  double t2011;
  double t2020;
  double t2114;
  double t2119;
  double t2122;
  double t2403;
  double t1706;
  double t2408;
  double t1649;
  double t2381;
  double t2477;
  double t2480;
  double t2521;
  double t1993;
  double t2413;
  double t1962;
  double t2187;
  double t2189;
  double t2192;
  double t2193;
  double t2194;
  double t2198;
  double t2200;
  double t2205;
  double t2304;
  double t2261;
  double t2273;
  double t2274;
  double t2276;
  double t2278;
  double t2280;
  double t2281;
  double t2285;
  double t2338;
  double t2340;
  double t2342;
  double t2344;
  double t2351;
  double t2352;
  double t2354;
  double t2356;
  double t2172;
  double t2651;
  double t2163;
  double t2700;
  double t2251;
  double t2668;
  double t2669;
  double t2229;
  double t2568;
  double t2409;
  double t2412;
  double t2414;
  double t2420;
  double t2422;
  double t2430;
  double t2431;
  double t2450;
  double t2577;
  double t2512;
  double t2514;
  double t2518;
  double t2525;
  double t2530;
  double t2534;
  double t2536;
  double t2540;
  double t2595;
  double t2604;
  double t2605;
  double t2607;
  double t2609;
  double t2616;
  double t2621;
  double t2631;
  double t2467;
  double t2775;
  double t2486;
  double t2802;
  double t2758;
  double t2385;
  double t1130;
  double t1379;
  double t1412;
  double t1428;
  double t1482;
  double t1485;
  double t1493;
  double t1532;
  double t1590;
  double t1654;
  double t1683;
  double t1717;
  double t1723;
  double t1788;
  double t2875;
  double t633;
  double t713;
  double t1015;
  double t1049;
  double t2884;
  double t2887;
  double t2888;
  double t2889;
  double t1797;
  double t1807;
  double t1833;
  double t1840;
  double t2899;
  double t2900;
  double t2904;
  double t1848;
  double t1872;
  double t1886;
  double t1900;
  double t1906;
  double t1908;
  double t1912;
  double t1930;
  double t1943;
  double t1982;
  double t1985;
  double t1999;
  double t2005;
  double t2007;
  double t2028;
  double t2029;
  double t2037;
  double t2040;
  double t2047;
  double t2051;
  double t2053;
  double t2085;
  double t2087;
  double t2091;
  double t2094;
  double t2096;
  double t2099;
  double t2103;
  double t2130;
  double t2149;
  double t2165;
  double t2170;
  double t2173;
  double t2175;
  double t2177;
  double t2914;
  double t2918;
  double t2920;
  double t2941;
  double t2942;
  double t2943;
  double t2207;
  double t2215;
  double t2244;
  double t2246;
  double t2252;
  double t2255;
  double t2256;
  double t2297;
  double t2302;
  double t2305;
  double t2311;
  double t2319;
  double t2326;
  double t2335;
  double t2361;
  double t2380;
  double t2398;
  double t2400;
  double t2404;
  double t2405;
  double t2407;
  double t2923;
  double t2925;
  double t2929;
  double t2946;
  double t2947;
  double t2950;
  double t2459;
  double t2460;
  double t2471;
  double t2473;
  double t2487;
  double t2502;
  double t2503;
  double t2551;
  double t2556;
  double t2573;
  double t2574;
  double t2585;
  double t2590;
  double t2594;
  double t2658;
  double t2954;
  double t2955;
  double t2958;
  double t2965;
  double t2670;
  double t2970;
  double t2973;
  double t2974;
  double t2975;
  double t2678;
  double t2687;
  double t2986;
  double t2987;
  double t2994;
  double t2995;
  double t2696;
  double t2697;
  double t2714;
  double t2721;
  double t2731;
  double t2734;
  double t2735;
  double t2746;
  double t2765;
  double t3000;
  double t3001;
  double t3002;
  double t3003;
  double t2779;
  double t3009;
  double t3013;
  double t3016;
  double t3019;
  double t2787;
  double t2788;
  double t3023;
  double t3024;
  double t3028;
  double t3031;
  double t2807;
  double t2814;
  double t2818;
  double t2825;
  double t2831;
  double t2834;
  double t2838;
  double t2855;
  t43 = Cos(var1[4]);
  t65 = Cos(var1[5]);
  t1305 = Cos(var1[13]);
  t1347 = -1.*t1305;
  t1356 = 1. + t1347;
  t1407 = Sin(var1[13]);
  t1547 = Cos(var1[16]);
  t1560 = -1.*t1547;
  t1580 = 1. + t1560;
  t1636 = Sin(var1[16]);
  t1511 = Sin(var1[4]);
  t275 = Cos(var1[12]);
  t282 = -1.*t275;
  t631 = 1. + t282;
  t638 = Sin(var1[12]);
  t691 = 0.15121*t638;
  t765 = Cos(var1[15]);
  t829 = -1.*t765;
  t932 = 1. + t829;
  t963 = -0.15121*t932;
  t997 = Sin(var1[15]);
  t1811 = Sin(var1[5]);
  t1394 = 4.e-6*t1356;
  t1691 = -1. + t1547;
  t1703 = 4.e-6*t1691;
  t1440 = -2.8e-11*t1356;
  t1901 = 7.e-6*t1356;
  t1950 = 7.e-6*t1580;
  t1616 = 2.8e-11*t1580;
  t2134 = Cos(var1[14]);
  t2141 = -1.*t2134;
  t2145 = 1. + t2141;
  t2154 = Sin(var1[14]);
  t2033 = -1.*t1407;
  t2045 = -4.e-6*t1407;
  t1913 = -1.*t43*t65*t638;
  t1925 = -1.*t275*t43*t1811;
  t1928 = t1913 + t1925;
  t2058 = t275*t43*t65;
  t2061 = -1.*t43*t638*t1811;
  t2068 = t2058 + t2061;
  t2171 = 7.e-6*t2145;
  t1878 = -7.e-6*t1407;
  t2191 = -7.e-6*t1356;
  t1902 = 4.e-6*t1407;
  t2220 = 4.e-6*t2145;
  t2150 = -2.8e-11*t2145;
  t2258 = -1. + t1305;
  t2260 = 4.e-6*t2258;
  t1409 = 7.e-6*t1407;
  t2185 = 2.8e-11*t1356;
  t2364 = Cos(var1[17]);
  t2369 = -1.*t2364;
  t2376 = 1. + t2369;
  t2383 = Sin(var1[17]);
  t2088 = -4.e-6*t1636;
  t2009 = -1.*t43*t65*t997;
  t2011 = -1.*t765*t43*t1811;
  t2020 = t2009 + t2011;
  t2114 = t765*t43*t65;
  t2119 = -1.*t43*t997*t1811;
  t2122 = t2114 + t2119;
  t2403 = 2.8e-11*t2376;
  t1706 = -7.e-6*t1636;
  t2408 = -2.8e-11*t1580;
  t1649 = -1.*t1636;
  t2381 = 7.e-6*t2376;
  t2477 = -1. + t2364;
  t2480 = 4.e-6*t2477;
  t2521 = 4.e-6*t1580;
  t1993 = 7.e-6*t1636;
  t2413 = -7.e-6*t1580;
  t1962 = 4.e-6*t1636;
  t2187 = t2185 + t2033;
  t2189 = t2187*t1511;
  t2192 = t2191 + t2045;
  t2193 = t2192*t1928;
  t2194 = -1.000000000016*t1356;
  t2198 = 1. + t2194;
  t2200 = t2198*t2068;
  t2205 = t2189 + t2193 + t2200;
  t2304 = 7.e-6*t2154;
  t2261 = t2260 + t1878;
  t2273 = t2261*t1511;
  t2274 = -6.5e-11*t1356;
  t2276 = 1. + t2274;
  t2278 = t2276*t1928;
  t2280 = t2191 + t1902;
  t2281 = t2280*t2068;
  t2285 = t2273 + t2278 + t2281;
  t2338 = -1.000000000049*t1356;
  t2340 = 1. + t2338;
  t2342 = t2340*t1511;
  t2344 = t2260 + t1409;
  t2351 = t2344*t1928;
  t2352 = t2185 + t1407;
  t2354 = t2352*t2068;
  t2356 = t2342 + t2351 + t2354;
  t2172 = -4.e-6*t2154;
  t2651 = 2.8e-11*t2145;
  t2163 = -1.*t2154;
  t2700 = -7.e-6*t2145;
  t2251 = 4.e-6*t2154;
  t2668 = -1. + t2134;
  t2669 = 4.e-6*t2668;
  t2229 = -7.e-6*t2154;
  t2568 = 4.e-6*t2383;
  t2409 = t2408 + t1636;
  t2412 = t2409*t1511;
  t2414 = t2413 + t2088;
  t2420 = t2414*t2020;
  t2422 = -1.000000000016*t1580;
  t2430 = 1. + t2422;
  t2431 = t2430*t2122;
  t2450 = t2412 + t2420 + t2431;
  t2577 = 7.e-6*t2383;
  t2512 = -1.000000000049*t1580;
  t2514 = 1. + t2512;
  t2518 = t2514*t1511;
  t2525 = t2521 + t1706;
  t2530 = t2525*t2020;
  t2534 = t2408 + t1649;
  t2536 = t2534*t2122;
  t2540 = t2518 + t2530 + t2536;
  t2595 = t2521 + t1993;
  t2604 = t2595*t1511;
  t2605 = -6.5e-11*t1580;
  t2607 = 1. + t2605;
  t2609 = t2607*t2020;
  t2616 = t2413 + t1962;
  t2621 = t2616*t2122;
  t2631 = t2604 + t2609 + t2621;
  t2467 = -1.*t2383;
  t2775 = 4.e-6*t2376;
  t2486 = -7.e-6*t2383;
  t2802 = -2.8e-11*t2376;
  t2758 = -7.e-6*t2376;
  t2385 = -4.e-6*t2383;
  t1130 = 5.856279999999999e-13*var1[13];
  t1379 = -0.0387489999948987*t1356;
  t1412 = t1394 + t1409;
  t1428 = -2.123459e-6*t1412;
  t1482 = t1440 + t1407;
  t1485 = -0.281209000004*t1482;
  t1493 = t1130 + t1379 + t1428 + t1485;
  t1532 = 1.5843479999999999e-12*var1[16];
  t1590 = -0.03874900000889869*t1580;
  t1654 = t1616 + t1649;
  t1683 = -0.281211000004*t1654;
  t1717 = t1703 + t1706;
  t1723 = -1.8134809999999998e-6*t1717;
  t1788 = t1532 + t1590 + t1683 + t1723;
  t2875 = Sin(var1[3]);
  t633 = -0.15121*t631;
  t713 = t633 + t691;
  t1015 = -0.15121*t997;
  t1049 = t963 + t1015;
  t2884 = t65*t2875*t1511;
  t2887 = Cos(var1[3]);
  t2888 = t2887*t1811;
  t2889 = t2884 + t2888;
  t1797 = 0.15121*t631;
  t1807 = t1797 + t691;
  t1833 = 0.15121*t997;
  t1840 = t963 + t1833;
  t2899 = t2887*t65;
  t2900 = -1.*t2875*t1511*t1811;
  t2904 = t2899 + t2900;
  t1848 = -1.4640699999999997e-7*var1[13];
  t1872 = -1.38024835e-16*t1356;
  t1886 = t1394 + t1878;
  t1900 = -0.038748999993*t1886;
  t1906 = t1901 + t1902;
  t1908 = -0.281209000004*t1906;
  t1912 = t1848 + t1872 + t1900 + t1908;
  t1930 = 3.9608699999999997e-7*var1[16];
  t1943 = -1.1787626499999999e-16*t1580;
  t1982 = t1950 + t1962;
  t1985 = -0.281211000004*t1982;
  t1999 = t1703 + t1993;
  t2005 = -0.038749000006999997*t1999;
  t2007 = t1930 + t1943 + t1985 + t2005;
  t2028 = 1.0248489999999998e-12*var1[13];
  t2029 = -0.28120900000849935*t1356;
  t2037 = t1440 + t2033;
  t2040 = -0.038748999993*t2037;
  t2047 = t1901 + t2045;
  t2051 = -2.123459e-6*t2047;
  t2053 = t2028 + t2029 + t2040 + t2051;
  t2085 = -2.7726089999999997e-12*var1[16];
  t2087 = -0.2812110000084994*t1580;
  t2091 = t1950 + t2088;
  t2094 = -1.8134809999999998e-6*t2091;
  t2096 = t1616 + t1636;
  t2099 = -0.038749000006999997*t2096;
  t2103 = t2085 + t2087 + t2094 + t2099;
  t2130 = 1.8190549999999993e-12*var1[14];
  t2149 = -0.5031490000160505*t2145;
  t2165 = t2150 + t2163;
  t2170 = -0.038922999986*t2165;
  t2173 = t2171 + t2172;
  t2175 = -3.6777349999999994e-6*t2173;
  t2177 = t2130 + t2149 + t2170 + t2175;
  t2914 = -1.*t638*t2889;
  t2918 = t275*t2904;
  t2920 = t2914 + t2918;
  t2941 = t275*t2889;
  t2942 = t638*t2904;
  t2943 = t2941 + t2942;
  t2207 = -2.598649999999999e-7*var1[14];
  t2215 = -2.3905277499999995e-16*t2145;
  t2244 = t2220 + t2229;
  t2246 = -0.038922999986*t2244;
  t2252 = t2171 + t2251;
  t2255 = -0.503149000008*t2252;
  t2256 = t2207 + t2215 + t2246 + t2255;
  t2297 = 1.0394599999999997e-12*var1[14];
  t2302 = -0.03892299998790722*t2145;
  t2305 = t2220 + t2304;
  t2311 = -3.6777349999999994e-6*t2305;
  t2319 = t2150 + t2154;
  t2326 = -0.503149000008*t2319;
  t2335 = t2297 + t2302 + t2311 + t2326;
  t2361 = -1.9784030000000015e-12*var1[17];
  t2380 = -0.5031510000160505*t2376;
  t2398 = t2381 + t2385;
  t2400 = -3.367757e-6*t2398;
  t2404 = t2403 + t2383;
  t2405 = -0.038575000014*t2404;
  t2407 = t2361 + t2380 + t2400 + t2405;
  t2923 = -1.*t997*t2889;
  t2925 = t765*t2904;
  t2929 = t2923 + t2925;
  t2946 = t765*t2889;
  t2947 = t997*t2904;
  t2950 = t2946 + t2947;
  t2459 = 1.1305160000000008e-12*var1[17];
  t2460 = -0.03857500001589017*t2376;
  t2471 = t2403 + t2467;
  t2473 = -0.5031510000080001*t2471;
  t2487 = t2480 + t2486;
  t2502 = -3.367757e-6*t2487;
  t2503 = t2459 + t2460 + t2473 + t2502;
  t2551 = 2.826290000000002e-7*var1[17];
  t2556 = -2.18904205e-16*t2376;
  t2573 = t2381 + t2568;
  t2574 = -0.5031510000080001*t2573;
  t2585 = t2480 + t2577;
  t2590 = -0.038575000014*t2585;
  t2594 = t2551 + t2556 + t2574 + t2590;
  t2658 = t2651 + t2154;
  t2954 = -1.*t43*t2187*t2875;
  t2955 = t2192*t2920;
  t2958 = t2198*t2943;
  t2965 = t2954 + t2955 + t2958;
  t2670 = t2669 + t2304;
  t2970 = -1.*t43*t2261*t2875;
  t2973 = t2276*t2920;
  t2974 = t2280*t2943;
  t2975 = t2970 + t2973 + t2974;
  t2678 = -1.000000000049*t2145;
  t2687 = 1. + t2678;
  t2986 = -1.*t2340*t43*t2875;
  t2987 = t2344*t2920;
  t2994 = t2352*t2943;
  t2995 = t2986 + t2987 + t2994;
  t2696 = -1.000000000016*t2145;
  t2697 = 1. + t2696;
  t2714 = t2700 + t2172;
  t2721 = t2651 + t2163;
  t2731 = t2700 + t2251;
  t2734 = -6.5e-11*t2145;
  t2735 = 1. + t2734;
  t2746 = t2669 + t2229;
  t2765 = t2758 + t2568;
  t3000 = -1.*t43*t2409*t2875;
  t3001 = t2414*t2929;
  t3002 = t2430*t2950;
  t3003 = t3000 + t3001 + t3002;
  t2779 = t2775 + t2577;
  t3009 = -1.*t2514*t43*t2875;
  t3013 = t2525*t2929;
  t3016 = t2534*t2950;
  t3019 = t3009 + t3013 + t3016;
  t2787 = -6.5e-11*t2376;
  t2788 = 1. + t2787;
  t3023 = -1.*t43*t2595*t2875;
  t3024 = t2607*t2929;
  t3028 = t2616*t2950;
  t3031 = t3023 + t3024 + t3028;
  t2807 = t2802 + t2467;
  t2814 = -1.000000000049*t2376;
  t2818 = 1. + t2814;
  t2825 = t2775 + t2486;
  t2831 = -1.000000000016*t2376;
  t2834 = 1. + t2831;
  t2838 = t2802 + t2383;
  t2855 = t2758 + t2385;
  p_output1[0]=-1.*t1493*t1511 + t1511*t1788 - 1.*t1912*t1928 + t2007*t2020 - 1.*t2053*t2068 + t2103*t2122 - 1.*t2177*t2205 - 1.*t2256*t2285 - 1.*t2335*t2356 + t2407*t2450 + t2503*t2540 + t2594*t2631 + 0.038924*(t2205*t2658 + t2285*t2670 + t2356*t2687) + 0.80315*(t2205*t2697 + t2285*t2714 + t2356*t2721) - 0.148705*(t2205*t2731 + t2285*t2735 + t2356*t2746) - 0.148715*(t2450*t2765 + t2540*t2779 + t2631*t2788) - 0.038576*(t2450*t2807 + t2540*t2818 + t2631*t2825) - 0.80315*(t2450*t2834 + t2540*t2838 + t2631*t2855) + t1807*t1811*t43 - 1.*t1811*t1840*t43 + t1049*t43*t65 - 1.*t43*t65*t713;
  p_output1[1]=t1049*t2889 - 1.*t1807*t2904 + t1840*t2904 - 1.*t1912*t2920 + t2007*t2929 - 1.*t2053*t2943 + t2103*t2950 - 1.*t2177*t2965 - 1.*t2256*t2975 - 1.*t2335*t2995 + 0.038924*(t2658*t2965 + t2670*t2975 + t2687*t2995) + 0.80315*(t2697*t2965 + t2714*t2975 + t2721*t2995) - 0.148705*(t2731*t2965 + t2735*t2975 + t2746*t2995) + t2407*t3003 + t2503*t3019 + t2594*t3031 - 0.148715*(t2765*t3003 + t2779*t3019 + t2788*t3031) - 0.038576*(t2807*t3003 + t2818*t3019 + t2825*t3031) - 0.80315*(t2834*t3003 + t2838*t3019 + t2855*t3031) + t1493*t2875*t43 - 1.*t1788*t2875*t43 - 1.*t2889*t713;
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

#include "step_distance_DiagonalStance2.hh"

namespace TrotStance2
{

void step_distance_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
