/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:15:54 GMT+01:00
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
  double t6;
  double t79;
  double t1369;
  double t1379;
  double t1394;
  double t1440;
  double t1636;
  double t1638;
  double t1641;
  double t1653;
  double t1608;
  double t202;
  double t203;
  double t474;
  double t677;
  double t768;
  double t1120;
  double t1162;
  double t1214;
  double t1221;
  double t1255;
  double t1740;
  double t1438;
  double t1673;
  double t1679;
  double t1546;
  double t1811;
  double t1854;
  double t1652;
  double t2019;
  double t2021;
  double t2033;
  double t2045;
  double t1898;
  double t1930;
  double t1826;
  double t1828;
  double t1831;
  double t1956;
  double t1963;
  double t1965;
  double t2072;
  double t1789;
  double t2110;
  double t1820;
  double t2135;
  double t2039;
  double t2172;
  double t2176;
  double t1459;
  double t2106;
  double t2292;
  double t2295;
  double t2297;
  double t2310;
  double t1973;
  double t1882;
  double t1886;
  double t1888;
  double t1991;
  double t1995;
  double t1996;
  double t2328;
  double t1695;
  double t2338;
  double t1661;
  double t2305;
  double t2419;
  double t2426;
  double t2450;
  double t1872;
  double t2361;
  double t1856;
  double t2107;
  double t2109;
  double t2111;
  double t2114;
  double t2115;
  double t2117;
  double t2118;
  double t2121;
  double t2247;
  double t2178;
  double t2179;
  double t2182;
  double t2183;
  double t2184;
  double t2185;
  double t2191;
  double t2196;
  double t2255;
  double t2256;
  double t2257;
  double t2262;
  double t2263;
  double t2266;
  double t2267;
  double t2275;
  double t2077;
  double t2525;
  double t2046;
  double t2559;
  double t2147;
  double t2535;
  double t2537;
  double t2137;
  double t2476;
  double t2352;
  double t2353;
  double t2362;
  double t2365;
  double t2367;
  double t2373;
  double t2378;
  double t2379;
  double t2491;
  double t2441;
  double t2445;
  double t2448;
  double t2453;
  double t2454;
  double t2458;
  double t2459;
  double t2463;
  double t2500;
  double t2505;
  double t2508;
  double t2509;
  double t2510;
  double t2516;
  double t2520;
  double t2521;
  double t2398;
  double t2614;
  double t2434;
  double t2633;
  double t2609;
  double t2316;
  double t1314;
  double t1424;
  double t1483;
  double t1533;
  double t1551;
  double t1576;
  double t1600;
  double t1627;
  double t1649;
  double t1665;
  double t1671;
  double t1712;
  double t1714;
  double t1716;
  double t2681;
  double t484;
  double t1030;
  double t1269;
  double t1271;
  double t2686;
  double t2689;
  double t2690;
  double t2692;
  double t1729;
  double t1732;
  double t1742;
  double t1746;
  double t2696;
  double t2697;
  double t2700;
  double t1763;
  double t1770;
  double t1799;
  double t1808;
  double t1821;
  double t1822;
  double t1825;
  double t1843;
  double t1849;
  double t1860;
  double t1865;
  double t1874;
  double t1875;
  double t1880;
  double t1893;
  double t1895;
  double t1905;
  double t1909;
  double t1935;
  double t1945;
  double t1954;
  double t1968;
  double t1970;
  double t1976;
  double t1979;
  double t1982;
  double t1983;
  double t1985;
  double t2016;
  double t2034;
  double t2049;
  double t2057;
  double t2086;
  double t2098;
  double t2101;
  double t2705;
  double t2706;
  double t2708;
  double t2718;
  double t2720;
  double t2722;
  double t2128;
  double t2134;
  double t2139;
  double t2141;
  double t2148;
  double t2160;
  double t2169;
  double t2237;
  double t2243;
  double t2248;
  double t2249;
  double t2252;
  double t2253;
  double t2254;
  double t2281;
  double t2301;
  double t2319;
  double t2322;
  double t2329;
  double t2332;
  double t2333;
  double t2710;
  double t2711;
  double t2714;
  double t2731;
  double t2733;
  double t2734;
  double t2388;
  double t2392;
  double t2401;
  double t2408;
  double t2436;
  double t2437;
  double t2439;
  double t2471;
  double t2472;
  double t2481;
  double t2484;
  double t2492;
  double t2494;
  double t2496;
  double t2531;
  double t2737;
  double t2738;
  double t2741;
  double t2743;
  double t2544;
  double t2746;
  double t2748;
  double t2749;
  double t2752;
  double t2547;
  double t2549;
  double t2755;
  double t2757;
  double t2759;
  double t2761;
  double t2555;
  double t2556;
  double t2561;
  double t2567;
  double t2577;
  double t2589;
  double t2591;
  double t2599;
  double t2611;
  double t2764;
  double t2765;
  double t2769;
  double t2770;
  double t2615;
  double t2773;
  double t2775;
  double t2778;
  double t2782;
  double t2622;
  double t2623;
  double t2785;
  double t2787;
  double t2788;
  double t2791;
  double t2635;
  double t2638;
  double t2639;
  double t2641;
  double t2656;
  double t2660;
  double t2667;
  double t2669;
  t6 = Cos(var1[4]);
  t79 = Cos(var1[5]);
  t1369 = Cos(var1[13]);
  t1379 = -1.*t1369;
  t1394 = 1. + t1379;
  t1440 = Sin(var1[13]);
  t1636 = Cos(var1[16]);
  t1638 = -1.*t1636;
  t1641 = 1. + t1638;
  t1653 = Sin(var1[16]);
  t1608 = Sin(var1[4]);
  t202 = Cos(var1[12]);
  t203 = -1.*t202;
  t474 = 1. + t203;
  t677 = Sin(var1[12]);
  t768 = 0.15121*t677;
  t1120 = Cos(var1[15]);
  t1162 = -1.*t1120;
  t1214 = 1. + t1162;
  t1221 = -0.15121*t1214;
  t1255 = Sin(var1[15]);
  t1740 = Sin(var1[5]);
  t1438 = 4.e-6*t1394;
  t1673 = -1. + t1636;
  t1679 = 4.e-6*t1673;
  t1546 = -2.8e-11*t1394;
  t1811 = 7.e-6*t1394;
  t1854 = 7.e-6*t1641;
  t1652 = 2.8e-11*t1641;
  t2019 = Cos(var1[14]);
  t2021 = -1.*t2019;
  t2033 = 1. + t2021;
  t2045 = Sin(var1[14]);
  t1898 = -1.*t1440;
  t1930 = -4.e-6*t1440;
  t1826 = -1.*t6*t79*t677;
  t1828 = -1.*t202*t6*t1740;
  t1831 = t1826 + t1828;
  t1956 = t202*t6*t79;
  t1963 = -1.*t6*t677*t1740;
  t1965 = t1956 + t1963;
  t2072 = 7.e-6*t2033;
  t1789 = -7.e-6*t1440;
  t2110 = -7.e-6*t1394;
  t1820 = 4.e-6*t1440;
  t2135 = 4.e-6*t2033;
  t2039 = -2.8e-11*t2033;
  t2172 = -1. + t1369;
  t2176 = 4.e-6*t2172;
  t1459 = 7.e-6*t1440;
  t2106 = 2.8e-11*t1394;
  t2292 = Cos(var1[17]);
  t2295 = -1.*t2292;
  t2297 = 1. + t2295;
  t2310 = Sin(var1[17]);
  t1973 = -4.e-6*t1653;
  t1882 = -1.*t6*t79*t1255;
  t1886 = -1.*t1120*t6*t1740;
  t1888 = t1882 + t1886;
  t1991 = t1120*t6*t79;
  t1995 = -1.*t6*t1255*t1740;
  t1996 = t1991 + t1995;
  t2328 = 2.8e-11*t2297;
  t1695 = -7.e-6*t1653;
  t2338 = -2.8e-11*t1641;
  t1661 = -1.*t1653;
  t2305 = 7.e-6*t2297;
  t2419 = -1. + t2292;
  t2426 = 4.e-6*t2419;
  t2450 = 4.e-6*t1641;
  t1872 = 7.e-6*t1653;
  t2361 = -7.e-6*t1641;
  t1856 = 4.e-6*t1653;
  t2107 = t2106 + t1898;
  t2109 = t2107*t1608;
  t2111 = t2110 + t1930;
  t2114 = t2111*t1831;
  t2115 = -1.000000000016*t1394;
  t2117 = 1. + t2115;
  t2118 = t2117*t1965;
  t2121 = t2109 + t2114 + t2118;
  t2247 = 7.e-6*t2045;
  t2178 = t2176 + t1789;
  t2179 = t2178*t1608;
  t2182 = -6.5e-11*t1394;
  t2183 = 1. + t2182;
  t2184 = t2183*t1831;
  t2185 = t2110 + t1820;
  t2191 = t2185*t1965;
  t2196 = t2179 + t2184 + t2191;
  t2255 = -1.000000000049*t1394;
  t2256 = 1. + t2255;
  t2257 = t2256*t1608;
  t2262 = t2176 + t1459;
  t2263 = t2262*t1831;
  t2266 = t2106 + t1440;
  t2267 = t2266*t1965;
  t2275 = t2257 + t2263 + t2267;
  t2077 = -4.e-6*t2045;
  t2525 = 2.8e-11*t2033;
  t2046 = -1.*t2045;
  t2559 = -7.e-6*t2033;
  t2147 = 4.e-6*t2045;
  t2535 = -1. + t2019;
  t2537 = 4.e-6*t2535;
  t2137 = -7.e-6*t2045;
  t2476 = 4.e-6*t2310;
  t2352 = t2338 + t1653;
  t2353 = t2352*t1608;
  t2362 = t2361 + t1973;
  t2365 = t2362*t1888;
  t2367 = -1.000000000016*t1641;
  t2373 = 1. + t2367;
  t2378 = t2373*t1996;
  t2379 = t2353 + t2365 + t2378;
  t2491 = 7.e-6*t2310;
  t2441 = -1.000000000049*t1641;
  t2445 = 1. + t2441;
  t2448 = t2445*t1608;
  t2453 = t2450 + t1695;
  t2454 = t2453*t1888;
  t2458 = t2338 + t1661;
  t2459 = t2458*t1996;
  t2463 = t2448 + t2454 + t2459;
  t2500 = t2450 + t1872;
  t2505 = t2500*t1608;
  t2508 = -6.5e-11*t1641;
  t2509 = 1. + t2508;
  t2510 = t2509*t1888;
  t2516 = t2361 + t1856;
  t2520 = t2516*t1996;
  t2521 = t2505 + t2510 + t2520;
  t2398 = -1.*t2310;
  t2614 = 4.e-6*t2297;
  t2434 = -7.e-6*t2310;
  t2633 = -2.8e-11*t2297;
  t2609 = -7.e-6*t2297;
  t2316 = -4.e-6*t2310;
  t1314 = 5.856279999999999e-13*var1[13];
  t1424 = -0.0387489999948987*t1394;
  t1483 = t1438 + t1459;
  t1533 = -2.123459e-6*t1483;
  t1551 = t1546 + t1440;
  t1576 = -0.281209000004*t1551;
  t1600 = t1314 + t1424 + t1533 + t1576;
  t1627 = 1.5843479999999999e-12*var1[16];
  t1649 = -0.03874900000889869*t1641;
  t1665 = t1652 + t1661;
  t1671 = -0.281211000004*t1665;
  t1712 = t1679 + t1695;
  t1714 = -1.8134809999999998e-6*t1712;
  t1716 = t1627 + t1649 + t1671 + t1714;
  t2681 = Sin(var1[3]);
  t484 = -0.15121*t474;
  t1030 = t484 + t768;
  t1269 = -0.15121*t1255;
  t1271 = t1221 + t1269;
  t2686 = t79*t2681*t1608;
  t2689 = Cos(var1[3]);
  t2690 = t2689*t1740;
  t2692 = t2686 + t2690;
  t1729 = 0.15121*t474;
  t1732 = t1729 + t768;
  t1742 = 0.15121*t1255;
  t1746 = t1221 + t1742;
  t2696 = t2689*t79;
  t2697 = -1.*t2681*t1608*t1740;
  t2700 = t2696 + t2697;
  t1763 = -1.4640699999999997e-7*var1[13];
  t1770 = -1.38024835e-16*t1394;
  t1799 = t1438 + t1789;
  t1808 = -0.038748999993*t1799;
  t1821 = t1811 + t1820;
  t1822 = -0.281209000004*t1821;
  t1825 = t1763 + t1770 + t1808 + t1822;
  t1843 = 3.9608699999999997e-7*var1[16];
  t1849 = -1.1787626499999999e-16*t1641;
  t1860 = t1854 + t1856;
  t1865 = -0.281211000004*t1860;
  t1874 = t1679 + t1872;
  t1875 = -0.038749000006999997*t1874;
  t1880 = t1843 + t1849 + t1865 + t1875;
  t1893 = 1.0248489999999998e-12*var1[13];
  t1895 = -0.28120900000849935*t1394;
  t1905 = t1546 + t1898;
  t1909 = -0.038748999993*t1905;
  t1935 = t1811 + t1930;
  t1945 = -2.123459e-6*t1935;
  t1954 = t1893 + t1895 + t1909 + t1945;
  t1968 = -2.7726089999999997e-12*var1[16];
  t1970 = -0.2812110000084994*t1641;
  t1976 = t1854 + t1973;
  t1979 = -1.8134809999999998e-6*t1976;
  t1982 = t1652 + t1653;
  t1983 = -0.038749000006999997*t1982;
  t1985 = t1968 + t1970 + t1979 + t1983;
  t2016 = 1.8190549999999993e-12*var1[14];
  t2034 = -0.5031490000160505*t2033;
  t2049 = t2039 + t2046;
  t2057 = -0.038922999986*t2049;
  t2086 = t2072 + t2077;
  t2098 = -3.6777349999999994e-6*t2086;
  t2101 = t2016 + t2034 + t2057 + t2098;
  t2705 = -1.*t677*t2692;
  t2706 = t202*t2700;
  t2708 = t2705 + t2706;
  t2718 = t202*t2692;
  t2720 = t677*t2700;
  t2722 = t2718 + t2720;
  t2128 = -2.598649999999999e-7*var1[14];
  t2134 = -2.3905277499999995e-16*t2033;
  t2139 = t2135 + t2137;
  t2141 = -0.038922999986*t2139;
  t2148 = t2072 + t2147;
  t2160 = -0.503149000008*t2148;
  t2169 = t2128 + t2134 + t2141 + t2160;
  t2237 = 1.0394599999999997e-12*var1[14];
  t2243 = -0.03892299998790722*t2033;
  t2248 = t2135 + t2247;
  t2249 = -3.6777349999999994e-6*t2248;
  t2252 = t2039 + t2045;
  t2253 = -0.503149000008*t2252;
  t2254 = t2237 + t2243 + t2249 + t2253;
  t2281 = -1.9784030000000015e-12*var1[17];
  t2301 = -0.5031510000160505*t2297;
  t2319 = t2305 + t2316;
  t2322 = -3.367757e-6*t2319;
  t2329 = t2328 + t2310;
  t2332 = -0.038575000014*t2329;
  t2333 = t2281 + t2301 + t2322 + t2332;
  t2710 = -1.*t1255*t2692;
  t2711 = t1120*t2700;
  t2714 = t2710 + t2711;
  t2731 = t1120*t2692;
  t2733 = t1255*t2700;
  t2734 = t2731 + t2733;
  t2388 = 1.1305160000000008e-12*var1[17];
  t2392 = -0.03857500001589017*t2297;
  t2401 = t2328 + t2398;
  t2408 = -0.5031510000080001*t2401;
  t2436 = t2426 + t2434;
  t2437 = -3.367757e-6*t2436;
  t2439 = t2388 + t2392 + t2408 + t2437;
  t2471 = 2.826290000000002e-7*var1[17];
  t2472 = -2.18904205e-16*t2297;
  t2481 = t2305 + t2476;
  t2484 = -0.5031510000080001*t2481;
  t2492 = t2426 + t2491;
  t2494 = -0.038575000014*t2492;
  t2496 = t2471 + t2472 + t2484 + t2494;
  t2531 = t2525 + t2045;
  t2737 = -1.*t6*t2107*t2681;
  t2738 = t2111*t2708;
  t2741 = t2117*t2722;
  t2743 = t2737 + t2738 + t2741;
  t2544 = t2537 + t2247;
  t2746 = -1.*t6*t2178*t2681;
  t2748 = t2183*t2708;
  t2749 = t2185*t2722;
  t2752 = t2746 + t2748 + t2749;
  t2547 = -1.000000000049*t2033;
  t2549 = 1. + t2547;
  t2755 = -1.*t2256*t6*t2681;
  t2757 = t2262*t2708;
  t2759 = t2266*t2722;
  t2761 = t2755 + t2757 + t2759;
  t2555 = -1.000000000016*t2033;
  t2556 = 1. + t2555;
  t2561 = t2559 + t2077;
  t2567 = t2525 + t2046;
  t2577 = t2559 + t2147;
  t2589 = -6.5e-11*t2033;
  t2591 = 1. + t2589;
  t2599 = t2537 + t2137;
  t2611 = t2609 + t2476;
  t2764 = -1.*t6*t2352*t2681;
  t2765 = t2362*t2714;
  t2769 = t2373*t2734;
  t2770 = t2764 + t2765 + t2769;
  t2615 = t2614 + t2491;
  t2773 = -1.*t2445*t6*t2681;
  t2775 = t2453*t2714;
  t2778 = t2458*t2734;
  t2782 = t2773 + t2775 + t2778;
  t2622 = -6.5e-11*t2297;
  t2623 = 1. + t2622;
  t2785 = -1.*t6*t2500*t2681;
  t2787 = t2509*t2714;
  t2788 = t2516*t2734;
  t2791 = t2785 + t2787 + t2788;
  t2635 = t2633 + t2398;
  t2638 = -1.000000000049*t2297;
  t2639 = 1. + t2638;
  t2641 = t2614 + t2434;
  t2656 = -1.000000000016*t2297;
  t2660 = 1. + t2656;
  t2667 = t2633 + t2310;
  t2669 = t2609 + t2316;
  p_output1[0]=t1600*t1608 - 1.*t1608*t1716 + t1825*t1831 - 1.*t1880*t1888 + t1954*t1965 - 1.*t1985*t1996 + t2101*t2121 + t2169*t2196 + t2254*t2275 - 1.*t2333*t2379 - 1.*t2439*t2463 - 1.*t2496*t2521 - 0.038924*(t2121*t2531 + t2196*t2544 + t2275*t2549) - 0.80315*(t2121*t2556 + t2196*t2561 + t2275*t2567) + 0.148705*(t2121*t2577 + t2196*t2591 + t2275*t2599) + 0.148715*(t2379*t2611 + t2463*t2615 + t2521*t2623) + 0.038576*(t2379*t2635 + t2463*t2639 + t2521*t2641) + 0.80315*(t2379*t2660 + t2463*t2667 + t2521*t2669) - 1.*t1732*t1740*t6 + t1740*t1746*t6 + t1030*t6*t79 - 1.*t1271*t6*t79;
  p_output1[1]=t1030*t2692 - 1.*t1271*t2692 + t1732*t2700 - 1.*t1746*t2700 + t1825*t2708 - 1.*t1880*t2714 + t1954*t2722 - 1.*t1985*t2734 + t2101*t2743 + t2169*t2752 + t2254*t2761 - 0.038924*(t2531*t2743 + t2544*t2752 + t2549*t2761) - 0.80315*(t2556*t2743 + t2561*t2752 + t2567*t2761) + 0.148705*(t2577*t2743 + t2591*t2752 + t2599*t2761) - 1.*t2333*t2770 - 1.*t2439*t2782 - 1.*t2496*t2791 + 0.148715*(t2611*t2770 + t2615*t2782 + t2623*t2791) + 0.038576*(t2635*t2770 + t2639*t2782 + t2641*t2791) + 0.80315*(t2660*t2770 + t2667*t2782 + t2669*t2791) - 1.*t1600*t2681*t6 + t1716*t2681*t6;
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

#include "step_distance_ParallelStance2.hh"

namespace ParallelStance2
{

void step_distance_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
