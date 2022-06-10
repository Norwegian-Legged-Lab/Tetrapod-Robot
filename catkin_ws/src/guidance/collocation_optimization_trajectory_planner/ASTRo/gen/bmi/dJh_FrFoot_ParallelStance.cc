/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:49:28 GMT+02:00
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
  double t1213;
  double t1306;
  double t1483;
  double t1487;
  double t1489;
  double t1490;
  double t1510;
  double t1519;
  double t866;
  double t1010;
  double t1521;
  double t1588;
  double t1515;
  double t1534;
  double t1543;
  double t71;
  double t1589;
  double t1591;
  double t1603;
  double t1609;
  double t1610;
  double t1613;
  double t1615;
  double t1617;
  double t1618;
  double t1621;
  double t1774;
  double t1822;
  double t1826;
  double t1827;
  double t1830;
  double t1832;
  double t1834;
  double t1860;
  double t1869;
  double t1871;
  double t1872;
  double t1873;
  double t1874;
  double t1884;
  double t1890;
  double t1894;
  double t1896;
  double t1914;
  double t1919;
  double t1961;
  double t1965;
  double t1967;
  double t2000;
  double t2003;
  double t2005;
  double t2007;
  double t2009;
  double t2030;
  double t2033;
  double t2054;
  double t2058;
  double t2060;
  double t2061;
  double t2064;
  double t2069;
  double t1997;
  double t2010;
  double t2015;
  double t2019;
  double t2043;
  double t2074;
  double t2076;
  double t2078;
  double t2079;
  double t2084;
  double t2091;
  double t2095;
  double t2096;
  double t2097;
  double t2098;
  double t2103;
  double t2106;
  double t2109;
  double t2022;
  double t2100;
  double t2101;
  double t2141;
  double t2143;
  double t2145;
  double t1989;
  double t1992;
  double t1994;
  double t2122;
  double t2128;
  double t2135;
  double t2169;
  double t2172;
  double t2184;
  double t2226;
  double t2228;
  double t2229;
  double t2394;
  double t2398;
  double t2400;
  double t2137;
  double t2467;
  double t2468;
  double t2469;
  double t2202;
  double t2495;
  double t2496;
  double t2504;
  double t2139;
  double t2146;
  double t2148;
  double t2473;
  double t2474;
  double t2479;
  double t2480;
  double t2485;
  double t2492;
  double t2516;
  double t2204;
  double t2212;
  double t2213;
  double t2258;
  double t2290;
  double t2614;
  double t2619;
  double t2661;
  double t2663;
  double t2262;
  double t2263;
  double t2270;
  double t2291;
  double t2298;
  double t2303;
  double t2345;
  double t2369;
  double t2346;
  double t2348;
  double t2350;
  double t2530;
  double t2533;
  double t2837;
  double t2838;
  double t2870;
  double t2875;
  double t2371;
  double t2372;
  double t2375;
  double t2407;
  double t2411;
  double t2416;
  double t2425;
  double t2432;
  double t2433;
  double t2442;
  double t2448;
  double t2458;
  double t2460;
  double t2462;
  double t2463;
  double t2962;
  double t2972;
  double t2973;
  double t2953;
  double t2487;
  double t2982;
  double t2985;
  double t2986;
  double t2991;
  double t2994;
  double t2995;
  double t2509;
  double t2522;
  double t2523;
  double t2524;
  double t2525;
  double t2528;
  double t2999;
  double t2535;
  double t2536;
  double t3008;
  double t2562;
  double t2563;
  double t2566;
  double t2579;
  double t2583;
  double t2584;
  double t2585;
  double t2589;
  double t2592;
  double t2596;
  double t2601;
  double t2604;
  double t2617;
  double t2639;
  double t2646;
  double t2647;
  double t2648;
  double t2662;
  double t2669;
  double t2671;
  double t2677;
  double t2681;
  double t3105;
  double t2718;
  double t2731;
  double t3128;
  double t2773;
  double t2775;
  double t2784;
  double t2785;
  double t2792;
  double t2793;
  double t2795;
  double t2798;
  double t2801;
  double t2802;
  double t2803;
  double t2810;
  double t2812;
  double t2821;
  double t2823;
  double t2825;
  double t2841;
  double t2871;
  double t2884;
  double t2889;
  double t2896;
  double t2899;
  double t2911;
  double t3234;
  double t2918;
  double t2922;
  double t3250;
  double t2933;
  double t2936;
  double t2942;
  double t3323;
  double t3328;
  double t3329;
  double t3336;
  double t3339;
  double t3343;
  double t3350;
  double t3353;
  double t3356;
  double t3368;
  double t3369;
  double t3371;
  double t3392;
  double t3397;
  double t3398;
  double t3405;
  double t3406;
  double t3407;
  double t3404;
  double t3434;
  double t3437;
  double t3442;
  double t3448;
  double t3464;
  double t3499;
  double t3510;
  double t3511;
  double t3515;
  double t3519;
  double t3525;
  double t3631;
  double t3639;
  double t3717;
  double t3722;
  double t3672;
  double t3330;
  double t3344;
  double t3345;
  double t3774;
  double t3776;
  double t3789;
  double t1787;
  double t1811;
  double t1812;
  double t3899;
  double t3957;
  double t3963;
  double t3314;
  double t3315;
  double t3316;
  double t1937;
  double t1938;
  double t1939;
  double t4150;
  double t4151;
  double t4152;
  double t4153;
  double t4154;
  double t4155;
  double t4174;
  double t4186;
  double t4190;
  double t4225;
  double t4233;
  double t4236;
  double t4156;
  double t4280;
  double t4320;
  double t4387;
  double t4388;
  double t4390;
  double t4331;
  double t4338;
  double t4416;
  double t4417;
  double t4420;
  double t4429;
  double t4431;
  double t4432;
  double t4442;
  double t4445;
  double t4446;
  double t3621;
  double t3626;
  double t3644;
  double t3652;
  double t3666;
  double t3691;
  double t3708;
  double t3712;
  double t4508;
  double t4535;
  double t3756;
  double t3758;
  double t3763;
  double t4653;
  double t4675;
  double t4699;
  double t4464;
  double t4467;
  double t4468;
  double t3853;
  double t3854;
  double t3860;
  double t3861;
  double t3863;
  double t3865;
  double t3869;
  double t4819;
  double t4856;
  t1213 = Cos(var1[13]);
  t1306 = Cos(var1[14]);
  t1483 = t1213*t1306;
  t1487 = Sin(var1[13]);
  t1489 = Sin(var1[14]);
  t1490 = t1487*t1489;
  t1510 = t1483 + t1490;
  t1519 = Cos(var1[12]);
  t866 = Cos(var1[5]);
  t1010 = Sin(var1[12]);
  t1521 = Sin(var1[5]);
  t1588 = Cos(var1[3]);
  t1515 = t866*t1010*t1510;
  t1534 = t1519*t1510*t1521;
  t1543 = t1515 + t1534;
  t71 = Sin(var1[3]);
  t1589 = Cos(var1[4]);
  t1591 = -1.*t1306*t1487;
  t1603 = t1213*t1489;
  t1609 = t1591 + t1603;
  t1610 = t1589*t1609;
  t1613 = Sin(var1[4]);
  t1615 = t1519*t866*t1510;
  t1617 = -1.*t1010*t1510*t1521;
  t1618 = t1615 + t1617;
  t1621 = -1.*t1613*t1618;
  t1774 = t1610 + t1621;
  t1822 = -1.*t866*t1010;
  t1826 = -1.*t1519*t1521;
  t1827 = t1822 + t1826;
  t1830 = t1519*t866;
  t1832 = -1.*t1010*t1521;
  t1834 = t1830 + t1832;
  t1860 = t1306*t1487;
  t1869 = -1.*t1213*t1489;
  t1871 = t1860 + t1869;
  t1872 = t866*t1010*t1871;
  t1873 = t1519*t1871*t1521;
  t1874 = t1872 + t1873;
  t1884 = t1589*t1510;
  t1890 = t1519*t866*t1871;
  t1894 = -1.*t1010*t1871*t1521;
  t1896 = t1890 + t1894;
  t1914 = -1.*t1613*t1896;
  t1919 = t1884 + t1914;
  t1961 = -1.*t1609*t1613;
  t1965 = -1.*t1589*t1618;
  t1967 = t1961 + t1965;
  t2000 = -1.*t1306;
  t2003 = 1. + t2000;
  t2005 = 0.50321*t2003;
  t2007 = 0.19821*t1306;
  t2009 = t2005 + t2007;
  t2030 = -1.*t1519;
  t2033 = 1. + t2030;
  t2054 = -1.*t1213;
  t2058 = 1. + t2054;
  t2060 = 0.28121*t2058;
  t2061 = t1213*t2009;
  t2064 = -0.305*t1487*t1489;
  t2069 = t2060 + t2061 + t2064;
  t1997 = 0.28121*t1487;
  t2010 = -1.*t2009*t1487;
  t2015 = -0.305*t1213*t1489;
  t2019 = t1997 + t2010 + t2015;
  t2043 = 0.15121*t2033;
  t2074 = t1519*t2069;
  t2076 = t2043 + t2074;
  t2078 = t866*t2076;
  t2079 = -0.15121*t2033;
  t2084 = -0.15121*t1519;
  t2091 = -0.15121*t1010;
  t2095 = t1010*t2069;
  t2096 = t2079 + t2084 + t2091 + t2095;
  t2097 = -1.*t2096*t1521;
  t2098 = t2078 + t2097;
  t2103 = t2019*t1613;
  t2106 = t1589*t2098;
  t2109 = t2103 + t2106;
  t2022 = -1.*t2019*t1613;
  t2100 = -1.*t1589*t2098;
  t2101 = t2022 + t2100;
  t2141 = t1589*t2019;
  t2143 = -1.*t1613*t2098;
  t2145 = t2141 + t2143;
  t1989 = t1510*t1613;
  t1992 = t1589*t1896;
  t1994 = t1989 + t1992;
  t2122 = t866*t2096;
  t2128 = t2076*t1521;
  t2135 = t2122 + t2128;
  t2169 = -1.*t1510*t1613;
  t2172 = -1.*t1589*t1896;
  t2184 = t2169 + t2172;
  t2226 = t1609*t1613;
  t2228 = t1589*t1618;
  t2229 = t2226 + t2228;
  t2394 = -1.*t866*t1010*t1510;
  t2398 = -1.*t1519*t1510*t1521;
  t2400 = t2394 + t2398;
  t2137 = -1.*t1834*t2135;
  t2467 = -1.*t866*t2096;
  t2468 = -1.*t2076*t1521;
  t2469 = t2467 + t2468;
  t2202 = t1874*t2135;
  t2495 = -1.*t866*t1010*t1871;
  t2496 = -1.*t1519*t1871*t1521;
  t2504 = t2495 + t2496;
  t2139 = -1.*t1589*t1827*t2109;
  t2146 = t1613*t1827*t2145;
  t2148 = t2137 + t2139 + t2146;
  t2473 = -1.*t1827*t2135;
  t2474 = -1.*t1834*t2098;
  t2479 = -1.*t1519*t866;
  t2480 = t1010*t1521;
  t2485 = t2479 + t2480;
  t2492 = t1896*t2135;
  t2516 = t1874*t2098;
  t2204 = t1994*t2109;
  t2212 = t1919*t2145;
  t2213 = t2202 + t2204 + t2212;
  t2258 = -1.*t1874*t2135;
  t2290 = t1543*t2135;
  t2614 = -1.*t1896*t2135;
  t2619 = -1.*t1874*t2098;
  t2661 = t1618*t2135;
  t2663 = t1543*t2098;
  t2262 = -1.*t1994*t2109;
  t2263 = -1.*t1919*t2145;
  t2270 = t2258 + t2262 + t2263;
  t2291 = t2229*t2109;
  t2298 = t1774*t2145;
  t2303 = t2290 + t2291 + t2298;
  t2345 = t1834*t2135;
  t2369 = -1.*t1543*t2135;
  t2346 = t1589*t1827*t2109;
  t2348 = -1.*t1613*t1827*t2145;
  t2350 = t2345 + t2346 + t2348;
  t2530 = Power(t1589,2);
  t2533 = Power(t1613,2);
  t2837 = t1827*t2135;
  t2838 = t1834*t2098;
  t2870 = -1.*t1618*t2135;
  t2875 = -1.*t1543*t2098;
  t2371 = -1.*t2229*t2109;
  t2372 = -1.*t1774*t2145;
  t2375 = t2369 + t2371 + t2372;
  t2407 = var2[0]*t1589*t2400;
  t2411 = t71*t1613*t2400;
  t2416 = t1588*t1618;
  t2425 = t2411 + t2416;
  t2432 = var2[1]*t2425;
  t2433 = -1.*t1588*t1613*t2400;
  t2442 = t71*t1618;
  t2448 = t2433 + t2442;
  t2458 = var2[2]*t2448;
  t2460 = -1.*t1827*t2098;
  t2462 = t2137 + t2460;
  t2463 = t1896*t2462;
  t2962 = 0.15121*t1010;
  t2972 = -1.*t1010*t2069;
  t2973 = t2962 + t2972;
  t2953 = t2084 + t2074;
  t2487 = -1.*t2485*t2098;
  t2982 = t866*t2973;
  t2985 = -1.*t2953*t1521;
  t2986 = t2982 + t2985;
  t2991 = t866*t2953;
  t2994 = t2973*t1521;
  t2995 = t2991 + t2994;
  t2509 = t2504*t2098;
  t2522 = t2019*t1510;
  t2523 = t1896*t2098;
  t2524 = t2522 + t2202 + t2523;
  t2525 = t1827*t2524;
  t2528 = t1589*t2504*t2148;
  t2999 = -1.*t1834*t2995;
  t2535 = -1.*t1589*t2485*t2109;
  t2536 = t1613*t2485*t2145;
  t3008 = t1874*t2995;
  t2562 = t1589*t2504*t2109;
  t2563 = -1.*t1613*t2504*t2145;
  t2566 = t1589*t2485*t2213;
  t2579 = var2[0]*t1589*t2485;
  t2583 = t71*t1827;
  t2584 = -1.*t1588*t1613*t2485;
  t2585 = t2583 + t2584;
  t2589 = var2[2]*t2585;
  t2592 = t1588*t1827;
  t2596 = t71*t1613*t2485;
  t2601 = t2592 + t2596;
  t2604 = var2[1]*t2601;
  t2617 = -1.*t2504*t2098;
  t2639 = -1.*t2019*t1510;
  t2646 = -1.*t1896*t2098;
  t2647 = t2639 + t2258 + t2646;
  t2648 = t1618*t2647;
  t2662 = t2400*t2098;
  t2669 = t2019*t1609;
  t2671 = t1618*t2098;
  t2677 = t2669 + t2290 + t2671;
  t2681 = t1896*t2677;
  t3105 = -1.*t1874*t2995;
  t2718 = -1.*t1589*t2504*t2109;
  t2731 = t1613*t2504*t2145;
  t3128 = t1543*t2995;
  t2773 = t1589*t2400*t2109;
  t2775 = -1.*t1613*t2400*t2145;
  t2784 = t1589*t2400*t2270;
  t2785 = t1589*t2504*t2303;
  t2792 = var2[0]*t1589*t2504;
  t2793 = t71*t1613*t2504;
  t2795 = t1588*t1896;
  t2798 = t2793 + t2795;
  t2801 = var2[1]*t2798;
  t2802 = -1.*t1588*t1613*t2504;
  t2803 = t71*t1896;
  t2810 = t2802 + t2803;
  t2812 = var2[2]*t2810;
  t2821 = t1827*t2098;
  t2823 = t2345 + t2821;
  t2825 = t1618*t2823;
  t2841 = t2485*t2098;
  t2871 = -1.*t2400*t2098;
  t2884 = -1.*t2019*t1609;
  t2889 = -1.*t1618*t2098;
  t2896 = t2884 + t2369 + t2889;
  t2899 = t1827*t2896;
  t2911 = t1589*t2400*t2350;
  t3234 = t1834*t2995;
  t2918 = t1589*t2485*t2109;
  t2922 = -1.*t1613*t2485*t2145;
  t3250 = -1.*t1543*t2995;
  t2933 = -1.*t1589*t2400*t2109;
  t2936 = t1613*t2400*t2145;
  t2942 = t1589*t2485*t2375;
  t3323 = -1.*t1213*t1306;
  t3328 = -1.*t1487*t1489;
  t3329 = t3323 + t3328;
  t3336 = t1519*t866*t1609;
  t3339 = -1.*t1010*t1609*t1521;
  t3343 = t3336 + t3339;
  t3350 = t866*t1010*t1609;
  t3353 = t1519*t1609*t1521;
  t3356 = t3350 + t3353;
  t3368 = t1589*t3329;
  t3369 = -1.*t1613*t3343;
  t3371 = t3368 + t3369;
  t3392 = t866*t1010*t2019;
  t3397 = t1519*t2019*t1521;
  t3398 = t3392 + t3397;
  t3405 = t1519*t866*t2019;
  t3406 = -1.*t1010*t2019*t1521;
  t3407 = t3405 + t3406;
  t3404 = -1.*t1834*t3398;
  t3434 = 0.28121*t1213;
  t3437 = -1.*t1213*t2009;
  t3442 = 0.305*t1487*t1489;
  t3448 = t3434 + t3437 + t3442;
  t3464 = t1874*t3398;
  t3499 = t3448*t1613;
  t3510 = t1589*t3407;
  t3511 = t3499 + t3510;
  t3515 = t1589*t3448;
  t3519 = -1.*t1613*t3407;
  t3525 = t3515 + t3519;
  t3631 = t2019*t3329;
  t3639 = t1609*t3448;
  t3717 = Power(t1519,2);
  t3722 = Power(t1010,2);
  t3672 = -1.*t3448*t1510;
  t3330 = t3329*t1613;
  t3344 = t1589*t3343;
  t3345 = t3330 + t3344;
  t3774 = t3398*t1543;
  t3776 = t3356*t2135;
  t3789 = -1.*t1874*t3398;
  t1787 = t1588*t1543;
  t1811 = -1.*t71*t1774;
  t1812 = t1787 + t1811;
  t3899 = t1834*t3398;
  t3957 = -1.*t3398*t1543;
  t3963 = -1.*t3356*t2135;
  t3314 = t1010*t2076;
  t3315 = -1.*t1519*t2096;
  t3316 = t3314 + t3315;
  t1937 = t1588*t1874;
  t1938 = -1.*t71*t1919;
  t1939 = t1937 + t1938;
  t4150 = -0.305*t1306*t1487;
  t4151 = 0.305*t1213*t1489;
  t4152 = t4150 + t4151;
  t4153 = t866*t1010*t4152;
  t4154 = t1519*t4152*t1521;
  t4155 = t4153 + t4154;
  t4174 = t1519*t866*t4152;
  t4186 = -1.*t1010*t4152*t1521;
  t4190 = t4174 + t4186;
  t4225 = t866*t1010*t3329;
  t4233 = t1519*t3329*t1521;
  t4236 = t4225 + t4233;
  t4156 = -1.*t1834*t4155;
  t4280 = -0.305*t1213*t1306;
  t4320 = t4280 + t2064;
  t4387 = t1519*t866*t3329;
  t4388 = -1.*t1010*t3329*t1521;
  t4390 = t4387 + t4388;
  t4331 = t1874*t4155;
  t4338 = t4236*t2135;
  t4416 = t4320*t1613;
  t4417 = t1589*t4190;
  t4420 = t4416 + t4417;
  t4429 = t1589*t4320;
  t4431 = -1.*t1613*t4190;
  t4432 = t4429 + t4431;
  t4442 = t1871*t1613;
  t4445 = t1589*t4390;
  t4446 = t4442 + t4445;
  t3621 = -1.*t1871*t2069;
  t3626 = t3621 + t2639;
  t3644 = t2069*t1510;
  t3652 = t2669 + t3644;
  t3666 = -1.*t1871*t2019;
  t3691 = -1.*t1519*t1871*t2076;
  t3708 = -1.*t1010*t1871*t2096;
  t3712 = t2639 + t3691 + t3708;
  t4508 = t1609*t4320;
  t4535 = -1.*t4320*t1510;
  t3756 = t1519*t1510*t2076;
  t3758 = t1010*t1510*t2096;
  t3763 = t2669 + t3756 + t3758;
  t4653 = t4155*t1543;
  t4675 = -1.*t1874*t4155;
  t4699 = -1.*t4236*t2135;
  t4464 = t1589*t1871;
  t4467 = -1.*t1613*t4390;
  t4468 = t4464 + t4467;
  t3853 = -0.15121*t3329;
  t3854 = -0.15121*t1510;
  t3860 = t3853 + t3854;
  t3861 = var2[12]*t3860;
  t3863 = -1.*t1010*t2076;
  t3865 = t1519*t2096;
  t3869 = t3863 + t3865;
  t4819 = t1834*t4155;
  t4856 = -1.*t4155*t1543;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t1588*t1774 - 1.*t1543*t71)*var2[1] + t1812*var2[2];
  p_output1[10]=(t1588*t1613*t1827 - 1.*t1834*t71)*var2[1] + (t1588*t1834 + t1613*t1827*t71)*var2[2];
  p_output1[11]=(-1.*t1588*t1919 - 1.*t1874*t71)*var2[1] + t1939*var2[2];
  p_output1[12]=t1774*var2[0] - 1.*t1967*t71*var2[1] + t1588*t1967*var2[2] + (t1994*(t1613*t1827*t2101 + t1613*t1827*t2109) + t1919*t2148 + t1589*t1827*(t1919*t2101 + t1919*t2109 + t1994*t2145 + t2145*t2184) - 1.*t1613*t1827*t2213)*var2[3];
  p_output1[13]=-1.*t1613*t1827*var2[0] + t1589*t1827*t71*var2[1] - 1.*t1588*t1589*t1827*var2[2] + ((-1.*t1919*t2101 - 1.*t1919*t2109 - 1.*t1994*t2145 - 1.*t2145*t2184)*t2229 + t1994*(t1774*t2101 + t1774*t2109 + t1967*t2145 + t2145*t2229) + t1774*t2270 + t1919*t2303)*var2[3];
  p_output1[14]=t1919*var2[0] - 1.*t2184*t71*var2[1] + t1588*t2184*var2[2] + ((-1.*t1613*t1827*t2101 - 1.*t1613*t1827*t2109)*t2229 + t1589*t1827*(-1.*t1774*t2101 - 1.*t1774*t2109 - 1.*t1967*t2145 - 1.*t2145*t2229) + t1774*t2350 - 1.*t1613*t1827*t2375)*var2[3];
  p_output1[15]=t2407 + t2432 + t2458 + (t2528 + t1994*(t2473 + t2474 - 1.*t1827*t2469*t2530 - 1.*t1827*t2469*t2533 + t2535 + t2536) + t1589*t1827*(-1.*t1613*t1919*t2469 + t1589*t1994*t2469 + t2492 + t2516 + t2562 + t2563) + t2566)*var2[3] + (t2463 + t1874*(-1.*t1827*t2469 + t2473 + t2474 + t2487) + t1834*(t1896*t2469 + t2492 + t2509 + t2516) + t2525)*var2[4];
  p_output1[16]=t2579 + t2589 + t2604 + (t2229*(t1613*t1919*t2469 - 1.*t1589*t1994*t2469 + t2614 + t2619 + t2718 + t2731) + t1994*(-1.*t1613*t1774*t2469 + t1589*t2229*t2469 + t2661 + t2663 + t2773 + t2775) + t2784 + t2785)*var2[3] + (t1543*(-1.*t1896*t2469 + t2614 + t2617 + t2619) + t2648 + t1874*(t1618*t2469 + t2661 + t2662 + t2663) + t2681)*var2[4];
  p_output1[17]=t2792 + t2801 + t2812 + (t2911 + t2229*(t1827*t2469*t2530 + t1827*t2469*t2533 + t2837 + t2838 + t2918 + t2922) + t1589*t1827*(t1613*t1774*t2469 - 1.*t1589*t2229*t2469 + t2870 + t2875 + t2933 + t2936) + t2942)*var2[3] + (t2825 + t1543*(t1827*t2469 + t2837 + t2838 + t2841) + t1834*(-1.*t1618*t2469 + t2870 + t2871 + t2875) + t2899)*var2[4];
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t2407 + t2432 + t2458 + (t2528 + t2566 + t1994*(t2473 + t2535 + t2536 - 1.*t1827*t2530*t2986 - 1.*t1827*t2533*t2986 + t2999) + t1589*t1827*(t2492 + t2562 + t2563 - 1.*t1613*t1919*t2986 + t1589*t1994*t2986 + t3008))*var2[3] + (t2463 + t2525 + t1874*(t2473 + t2487 - 1.*t1827*t2986 + t2999) + t1834*(t2492 + t2509 + t1896*t2986 + t3008))*var2[4] + t1510*(t1519*t2076 + t1010*t2096 - 1.*t1519*t2953 + t1010*t2973)*var2[5];
  p_output1[37]=t2579 + t2589 + t2604 + (t2784 + t2785 + t2229*(t2614 + t2718 + t2731 + t1613*t1919*t2986 - 1.*t1589*t1994*t2986 + t3105) + t1994*(t2661 + t2773 + t2775 - 1.*t1613*t1774*t2986 + t1589*t2229*t2986 + t3128))*var2[3] + (t2648 + t2681 + t1543*(t2614 + t2617 - 1.*t1896*t2986 + t3105) + t1874*(t2661 + t2662 + t1618*t2986 + t3128))*var2[4] + (t1510*(-1.*t1010*t1510*t2076 + t1510*t1519*t2096 + t1010*t1510*t2953 + t1510*t1519*t2973) + t1609*(t1010*t1871*t2076 - 1.*t1519*t1871*t2096 - 1.*t1010*t1871*t2953 - 1.*t1519*t1871*t2973))*var2[5];
  p_output1[38]=t2792 + t2801 + t2812 + (t2911 + t2942 + t2229*(t2837 + t2918 + t2922 + t1827*t2530*t2986 + t1827*t2533*t2986 + t3234) + t1589*t1827*(t2870 + t2933 + t2936 + t1613*t1774*t2986 - 1.*t1589*t2229*t2986 + t3250))*var2[3] + (t2825 + t2899 + t1543*(t2837 + t2841 + t1827*t2986 + t3234) + t1834*(t2870 + t2871 - 1.*t1618*t2986 + t3250))*var2[4] + t1609*(-1.*t1519*t2076 - 1.*t1010*t2096 + t1519*t2953 - 1.*t1010*t2973)*var2[5];
  p_output1[39]=t3345*var2[0] + (t1588*t3356 - 1.*t3371*t71)*var2[1] + (t1588*t3371 + t3356*t71)*var2[2] + (t2148*t2229 + t1994*(t3404 - 1.*t1589*t1827*t3511 + t1613*t1827*t3525) + t1589*t1827*(t2290 + t2291 + t2298 + t3464 + t1994*t3511 + t1919*t3525))*var2[3] + (t1543*t2462 + t1874*(t3404 - 1.*t1827*t3407) + t1834*(t2290 + t2669 + t2671 + t1896*t3407 + t1510*t3448 + t3464))*var2[4] + t1609*t3316*var2[5];
  p_output1[40]=(t2229*t2303 + t2270*t3345 + t1994*(t2109*t3345 + t2145*t3371 + t2229*t3511 + t1774*t3525 + t3774 + t3776) + t2229*(t2369 + t2371 + t2372 - 1.*t1994*t3511 - 1.*t1919*t3525 + t3789))*var2[3] + (t1543*t2677 + t2647*t3356 + t1874*(t2098*t3343 + t1618*t3407 + t3631 + t3639 + t3774 + t3776) + t1543*(t2369 + t2884 + t2889 - 1.*t1896*t3407 + t3672 + t3789))*var2[4] + (t3329*t3712 + t1510*(t1519*t1609*t2076 + t1010*t1609*t2096 + t3631 + t3639 + t1510*t2019*t3717 + t1510*t2019*t3722) + t1609*(-1.*t1510*t1519*t2076 - 1.*t1010*t1510*t2096 + t2884 + t3672 - 1.*t1871*t2019*t3717 - 1.*t1871*t2019*t3722) + t1609*t3763)*var2[5] + (t3329*t3626 + t1510*(t1609*t2069 + t2522 + t3631 + t3639) + t1609*t3652 + t1609*(-1.*t1510*t2069 + t2884 + t3666 + t3672))*var2[12];
  p_output1[41]=t3861 + t2229*var2[0] + t1812*var2[1] + (t1588*t1774 + t1543*t71)*var2[2] + (t2350*t3345 + t2229*(t1589*t1827*t3511 - 1.*t1613*t1827*t3525 + t3899) + t1589*t1827*(-1.*t2109*t3345 - 1.*t2145*t3371 - 1.*t2229*t3511 - 1.*t1774*t3525 + t3957 + t3963))*var2[3] + (t2823*t3356 + t1543*(t1827*t3407 + t3899) + t1834*(-1.*t2019*t3329 - 1.*t2098*t3343 - 1.*t1618*t3407 - 1.*t1609*t3448 + t3957 + t3963))*var2[4] + t3329*t3869*var2[5];
  p_output1[42]=t1994*var2[0] + t1939*var2[1] + (t1588*t1919 + t1874*t71)*var2[2] + (t1994*(t4156 - 1.*t1589*t1827*t4420 + t1613*t1827*t4432) + t2148*t4446 + t1589*t1827*(t4331 + t4338 + t1994*t4420 + t1919*t4432 + t2109*t4446 + t2145*t4468))*var2[3] + (t1874*(t4156 - 1.*t1827*t4190) + t2462*t4236 + t1834*(t1871*t2019 + t1896*t4190 + t1510*t4320 + t4331 + t4338 + t2098*t4390))*var2[4] + t1871*t3316*var2[5] + (0.28121*t1306 - 0.305*Power(t1306,2) - 1.*t1306*t2009)*var2[13];
  p_output1[43]=(t1994*t2270 + t2303*t4446 + t1994*(t2202 + t2204 + t2212 + t2229*t4420 + t1774*t4432 + t4653) + t2229*(-1.*t1994*t4420 - 1.*t1919*t4432 - 1.*t2109*t4446 - 1.*t2145*t4468 + t4675 + t4699))*var2[3] + (t1874*t2647 + t2677*t4236 + t1874*(t2202 + t2522 + t2523 + t1618*t4190 + t4508 + t4653) + t1543*(t3666 - 1.*t1896*t4190 - 1.*t2098*t4390 + t4535 + t4675 + t4699))*var2[4] + (t1510*t3712 + t1871*t3763 + t1510*(t1519*t1871*t2076 + t1010*t1871*t2096 + t2522 + t1510*t3717*t4152 + t1510*t3722*t4152 + t4508) + t1609*(-1.*t1519*t2076*t3329 - 1.*t1010*t2096*t3329 + t3666 - 1.*t1871*t3717*t4152 - 1.*t1871*t3722*t4152 + t4535))*var2[5] + (t1510*t3626 + t1871*t3652 + t1510*(t1871*t2069 + t2522 + t1510*t4152 + t4508) + t1609*(-1.*t2069*t3329 + t3666 - 1.*t1871*t4152 + t4535))*var2[12];
  p_output1[44]=t3861 + t4446*var2[0] + (t1588*t4236 - 1.*t4468*t71)*var2[1] + (t1588*t4468 + t4236*t71)*var2[2] + (t1994*t2350 + t2229*(t1589*t1827*t4420 - 1.*t1613*t1827*t4432 + t4819) + t1589*t1827*(t2258 + t2262 + t2263 - 1.*t2229*t4420 - 1.*t1774*t4432 + t4856))*var2[3] + (t1874*t2823 + t1543*(t1827*t4190 + t4819) + t1834*(t2258 + t2639 + t2646 - 1.*t1618*t4190 - 1.*t1609*t4320 + t4856))*var2[4] + t1510*t3869*var2[5] + (-0.28121*t1489 + 0.305*t1306*t1489 + t1489*t2009)*var2[13];
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJh_FrFoot_ParallelStance.hh"

namespace SymFunction
{

void dJh_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
