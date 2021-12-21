/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 22:33:37 GMT+01:00
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
  double t256;
  double t296;
  double t312;
  double t30;
  double t61;
  double t62;
  double t161;
  double t420;
  double t482;
  double t324;
  double t377;
  double t487;
  double t490;
  double t523;
  double t580;
  double t589;
  double t603;
  double t661;
  double t667;
  double t676;
  double t694;
  double t149;
  double t761;
  double t766;
  double t795;
  double t801;
  double t816;
  double t550;
  double t1172;
  double t1179;
  double t955;
  double t1142;
  double t970;
  double t976;
  double t1206;
  double t1029;
  double t1032;
  double t917;
  double t923;
  double t172;
  double t1221;
  double t1148;
  double t1185;
  double t1228;
  double t1267;
  double t1342;
  double t1372;
  double t1400;
  double t551;
  double t575;
  double t1490;
  double t1496;
  double t723;
  double t726;
  double t1510;
  double t1519;
  double t230;
  double t1531;
  double t1533;
  double t1576;
  double t1091;
  double t1603;
  double t1613;
  double t1615;
  double t1624;
  double t1626;
  double t1634;
  double t1636;
  double t1640;
  double t1655;
  double t1661;
  double t1689;
  double t1694;
  double t1699;
  double t1708;
  double t1719;
  double t1732;
  double t1733;
  double t1740;
  double t1748;
  double t1755;
  double t1756;
  double t1761;
  double t1783;
  double t1784;
  double t1793;
  double t1807;
  double t1814;
  double t1824;
  double t1829;
  double t1830;
  double t1839;
  double t1849;
  double t1201;
  double t1204;
  double t1125;
  double t1311;
  double t1583;
  double t1927;
  double t1931;
  double t1998;
  double t1999;
  double t2000;
  double t2001;
  double t1566;
  double t1567;
  double t1579;
  double t1581;
  double t1600;
  double t1601;
  double t1675;
  double t1773;
  double t1855;
  double t1856;
  double t1130;
  double t1163;
  double t1186;
  double t1196;
  double t1210;
  double t1220;
  double t1271;
  double t1276;
  double t1391;
  double t1406;
  double t1423;
  double t1905;
  double t1917;
  double t1921;
  double t1926;
  double t1934;
  double t1937;
  double t1943;
  double t1968;
  double t1970;
  double t1971;
  double t2003;
  double t2005;
  double t2007;
  double t2011;
  double t2018;
  double t2020;
  double t2022;
  double t2037;
  double t2038;
  double t2050;
  double t1200;
  double t1278;
  double t1456;
  double t1486;
  double t2172;
  double t2179;
  double t2180;
  double t2184;
  double t2190;
  double t2200;
  double t2203;
  double t2206;
  double t2052;
  double t1501;
  double t1521;
  double t1535;
  double t1538;
  double t1877;
  double t1883;
  double t1891;
  double t1901;
  double t2261;
  double t2246;
  double t2298;
  double t2301;
  double t2309;
  double t2105;
  double t2316;
  double t2317;
  double t2327;
  double t2343;
  double t2072;
  double t2074;
  double t2076;
  double t2080;
  double t2093;
  double t2094;
  double t2096;
  double t2098;
  double t2365;
  double t2371;
  double t2377;
  double t2383;
  double t534;
  double t714;
  double t845;
  double t856;
  double t953;
  double t1019;
  double t1064;
  double t1074;
  double t2509;
  double t2551;
  double t2566;
  double t2579;
  double t2514;
  double t2523;
  double t2538;
  double t2581;
  double t2504;
  double t2474;
  double t2478;
  double t2481;
  double t2482;
  double t2488;
  double t2549;
  double t2582;
  double t2584;
  double t2615;
  double t2606;
  double t2611;
  double t2613;
  double t2601;
  double t2622;
  double t2627;
  double t2631;
  double t2399;
  double t2410;
  double t2414;
  double t2430;
  double t2446;
  double t2458;
  double t2348;
  double t2355;
  double t2360;
  double t2259;
  double t2278;
  double t2280;
  double t2729;
  double t2739;
  double t2744;
  double t2722;
  double t2723;
  double t2724;
  double t2746;
  double t2751;
  double t2772;
  double t2678;
  double t2685;
  double t2688;
  double t2787;
  double t2795;
  double t2798;
  double t2774;
  double t2689;
  double t2702;
  double t2706;
  double t2832;
  double t2834;
  double t2839;
  double t2808;
  double t2843;
  double t2849;
  double t2850;
  double t2829;
  double t2830;
  double t2831;
  double t2892;
  double t2905;
  double t2906;
  double t3076;
  double t3093;
  double t3106;
  double t3126;
  double t3131;
  double t3134;
  double t3136;
  double t3137;
  double t2992;
  double t3006;
  double t2858;
  double t2863;
  double t2869;
  double t3288;
  double t2493;
  double t2586;
  double t2594;
  double t3307;
  double t2940;
  double t2946;
  double t2949;
  double t3467;
  double t3468;
  double t3476;
  double t3482;
  double t3490;
  double t3497;
  double t3499;
  double t3508;
  double t3403;
  double t3419;
  double t3580;
  double t3603;
  t256 = Cos(var1[17]);
  t296 = -1.*t256;
  t312 = 1. + t296;
  t30 = Cos(var1[16]);
  t61 = -1.*t30;
  t62 = 1. + t61;
  t161 = Sin(var1[16]);
  t420 = Sin(var1[17]);
  t482 = 4.e-6*t420;
  t324 = 1.000000000016*t312;
  t377 = -7.e-6*t312;
  t487 = t377 + t482;
  t490 = -7.e-6*t487;
  t523 = -1. + t324 + t490;
  t580 = 2.8e-11*t312;
  t589 = 4.e-6*t312;
  t603 = 7.e-6*t420;
  t661 = t589 + t603;
  t667 = -7.e-6*t661;
  t676 = -1.*t420;
  t694 = t580 + t667 + t676;
  t149 = -7.e-6*t62;
  t761 = -6.5e-11*t312;
  t766 = 1. + t761;
  t795 = -7.e-6*t766;
  t801 = 7.e-6*t312;
  t816 = t795 + t801 + t482;
  t550 = 4.e-6*t62;
  t1172 = -1. + t256;
  t1179 = 4.e-6*t1172;
  t955 = -2.8e-11*t62;
  t1142 = -4.e-6*t420;
  t970 = -1.*t161;
  t976 = t955 + t970;
  t1206 = 1.000000000049*t312;
  t1029 = 4.e-6*t161;
  t1032 = t149 + t1029;
  t917 = -1.000000000016*t62;
  t923 = 1. + t917;
  t172 = -4.e-6*t161;
  t1221 = -7.e-6*t420;
  t1148 = t377 + t1142;
  t1185 = t1179 + t603;
  t1228 = -2.8e-11*t312;
  t1267 = t1228 + t420;
  t1342 = -1.000000000016*t312;
  t1372 = 1. + t1342;
  t1400 = t580 + t420;
  t551 = -7.e-6*t161;
  t575 = t550 + t551;
  t1490 = 4.e-6*t661;
  t1496 = -1. + t1206 + t1490;
  t723 = -6.5e-11*t62;
  t726 = 1. + t723;
  t1510 = 4.e-6*t766;
  t1519 = t1510 + t1179 + t603;
  t230 = t149 + t172;
  t1531 = 4.e-6*t487;
  t1533 = t580 + t1531 + t420;
  t1576 = 7.e-6*t62;
  t1091 = 7.e-6*t161;
  t1603 = 2.826290000000002e-7*var1[17];
  t1613 = -0.148715*t766;
  t1615 = -2.18904205e-16*t312;
  t1624 = t589 + t1221;
  t1626 = -0.038576*t1624;
  t1634 = -0.80315*t1148;
  t1636 = t801 + t482;
  t1640 = -0.5031510000080001*t1636;
  t1655 = -0.038575000014*t1185;
  t1661 = t1603 + t1613 + t1615 + t1626 + t1634 + t1640 + t1655;
  t1689 = 1.1305160000000008e-12*var1[17];
  t1694 = -1.000000000049*t312;
  t1699 = 1. + t1694;
  t1708 = -0.038576*t1699;
  t1719 = -0.03857500001589017*t312;
  t1732 = t580 + t676;
  t1733 = -0.5031510000080001*t1732;
  t1740 = t1179 + t1221;
  t1748 = -3.367757e-6*t1740;
  t1755 = -0.148715*t661;
  t1756 = -0.80315*t1267;
  t1761 = t1689 + t1708 + t1719 + t1733 + t1748 + t1755 + t1756;
  t1783 = -1.9784030000000015e-12*var1[17];
  t1784 = -0.80315*t1372;
  t1793 = -0.5031510000160505*t312;
  t1807 = t1228 + t676;
  t1814 = -0.038576*t1807;
  t1824 = t801 + t1142;
  t1829 = -3.367757e-6*t1824;
  t1830 = -0.148715*t487;
  t1839 = -0.038575000014*t1400;
  t1849 = t1783 + t1784 + t1793 + t1814 + t1829 + t1830 + t1839;
  t1201 = -1.000000000049*t62;
  t1204 = 1. + t1201;
  t1125 = t550 + t1091;
  t1311 = t955 + t161;
  t1583 = 2.8e-11*t62;
  t1927 = -1. + t30;
  t1931 = 4.e-6*t1927;
  t1998 = t1204*t1496;
  t1999 = t1125*t1519;
  t2000 = t1311*t1533;
  t2001 = t1998 + t1999 + t2000;
  t1566 = -2.7726089999999997e-12*var1[16];
  t1567 = -0.2812110000084994*t62;
  t1579 = t1576 + t172;
  t1581 = -1.8134809999999998e-6*t1579;
  t1600 = t1583 + t161;
  t1601 = -0.038749000006999997*t1600;
  t1675 = t1032*t1661;
  t1773 = t976*t1761;
  t1855 = t923*t1849;
  t1856 = t1566 + t1567 + t1581 + t1601 + t1675 + t1773 + t1855;
  t1130 = 6.5e-11*t312;
  t1163 = 7.e-6*t1148;
  t1186 = 4.e-6*t1185;
  t1196 = -1. + t1130 + t1163 + t1186;
  t1210 = -1. + t1206;
  t1220 = 4.e-6*t1210;
  t1271 = 7.e-6*t1267;
  t1276 = t1220 + t1179 + t1221 + t1271;
  t1391 = 7.e-6*t1372;
  t1406 = 4.e-6*t1400;
  t1423 = t1391 + t801 + t1142 + t1406;
  t1905 = 3.9608699999999997e-7*var1[16];
  t1917 = -1.1787626499999999e-16*t62;
  t1921 = t1576 + t1029;
  t1926 = -0.281211000004*t1921;
  t1934 = t1931 + t1091;
  t1937 = -0.038749000006999997*t1934;
  t1943 = t726*t1661;
  t1968 = t575*t1761;
  t1970 = t230*t1849;
  t1971 = t1905 + t1917 + t1926 + t1937 + t1943 + t1968 + t1970;
  t2003 = 1.5843479999999999e-12*var1[16];
  t2005 = -0.03874900000889869*t62;
  t2007 = t1583 + t970;
  t2011 = -0.281211000004*t2007;
  t2018 = t1931 + t551;
  t2020 = -1.8134809999999998e-6*t2018;
  t2022 = t1125*t1661;
  t2037 = t1204*t1761;
  t2038 = t1311*t1849;
  t2050 = t2003 + t2005 + t2011 + t2020 + t2022 + t2037 + t2038;
  t1200 = t1125*t1196;
  t1278 = t1204*t1276;
  t1456 = t1311*t1423;
  t1486 = t1200 + t1278 + t1456;
  t2172 = -1.*t1661*t1519;
  t2179 = -1.*t1496*t1761;
  t2180 = -1.*t1533*t1849;
  t2184 = t2172 + t2179 + t2180;
  t2190 = t1661*t1196;
  t2200 = t1761*t1276;
  t2203 = t1849*t1423;
  t2206 = t2190 + t2200 + t2203;
  t2052 = -1.*t2001*t2050;
  t1501 = t976*t1496;
  t1521 = t1032*t1519;
  t1535 = t923*t1533;
  t1538 = t1501 + t1521 + t1535;
  t1877 = t575*t1496;
  t1883 = t726*t1519;
  t1891 = t230*t1533;
  t1901 = t1877 + t1883 + t1891;
  t2261 = Cos(var1[15]);
  t2246 = Sin(var1[15]);
  t2298 = -1.*t2261;
  t2301 = 1. + t2298;
  t2309 = -0.15121*t2301;
  t2105 = t2050*t1486;
  t2316 = 0.15121*t2246;
  t2317 = t2246*t1856;
  t2327 = t2261*t1971;
  t2343 = t2309 + t2316 + t2317 + t2327;
  t2072 = t1032*t1196;
  t2074 = t976*t1276;
  t2076 = t923*t1423;
  t2080 = t2072 + t2074 + t2076;
  t2093 = t726*t1196;
  t2094 = t575*t1276;
  t2096 = t230*t1423;
  t2098 = t2093 + t2094 + t2096;
  t2365 = -0.15121*t2246;
  t2371 = t2261*t1856;
  t2377 = -1.*t2246*t1971;
  t2383 = t2309 + t2365 + t2371 + t2377;
  t534 = t230*t523;
  t714 = t575*t694;
  t845 = t726*t816;
  t856 = t534 + t714 + t845;
  t953 = t923*t523;
  t1019 = t976*t694;
  t1064 = t1032*t816;
  t1074 = t953 + t1019 + t1064;
  t2509 = Cos(var1[5]);
  t2551 = t2261*t856;
  t2566 = t2246*t1074;
  t2579 = t2551 + t2566;
  t2514 = -1.*t2246*t856;
  t2523 = t2261*t1074;
  t2538 = t2514 + t2523;
  t2581 = Sin(var1[5]);
  t2504 = Cos(var1[4]);
  t2474 = t1311*t523;
  t2478 = t1204*t694;
  t2481 = t1125*t816;
  t2482 = t2474 + t2478 + t2481;
  t2488 = Sin(var1[4]);
  t2549 = t2509*t2538;
  t2582 = -1.*t2579*t2581;
  t2584 = t2549 + t2582;
  t2615 = Cos(var1[3]);
  t2606 = t2509*t2579;
  t2611 = t2538*t2581;
  t2613 = t2606 + t2611;
  t2601 = Sin(var1[3]);
  t2622 = t2504*t2482;
  t2627 = -1.*t2488*t2584;
  t2631 = t2622 + t2627;
  t2399 = t2246*t2080;
  t2410 = t2261*t2098;
  t2414 = t2399 + t2410;
  t2430 = t2261*t2080;
  t2446 = -1.*t2246*t2098;
  t2458 = t2430 + t2446;
  t2348 = t2261*t1538;
  t2355 = -1.*t2246*t1901;
  t2360 = t2348 + t2355;
  t2259 = t2246*t1538;
  t2278 = t2261*t1901;
  t2280 = t2259 + t2278;
  t2729 = t2509*t2280;
  t2739 = t2360*t2581;
  t2744 = t2729 + t2739;
  t2722 = t2509*t2383;
  t2723 = -1.*t2343*t2581;
  t2724 = t2722 + t2723;
  t2746 = t2509*t2343;
  t2751 = t2383*t2581;
  t2772 = t2746 + t2751;
  t2678 = t2509*t2414;
  t2685 = t2458*t2581;
  t2688 = t2678 + t2685;
  t2787 = t2509*t2458;
  t2795 = -1.*t2414*t2581;
  t2798 = t2787 + t2795;
  t2774 = -1.*t2744*t2772;
  t2689 = t2509*t2360;
  t2702 = -1.*t2280*t2581;
  t2706 = t2689 + t2702;
  t2832 = t2001*t2488;
  t2834 = t2504*t2706;
  t2839 = t2832 + t2834;
  t2808 = t2772*t2688;
  t2843 = t2050*t2488;
  t2849 = t2504*t2724;
  t2850 = t2843 + t2849;
  t2829 = t1486*t2488;
  t2830 = t2504*t2798;
  t2831 = t2829 + t2830;
  t2892 = t2504*t2050;
  t2905 = -1.*t2488*t2724;
  t2906 = t2892 + t2905;
  t3076 = t1661*t816;
  t3093 = t694*t1761;
  t3106 = t523*t1849;
  t3126 = t3076 + t3093 + t3106;
  t3131 = -1.*t1661*t1196;
  t3134 = -1.*t1761*t1276;
  t3136 = -1.*t1849*t1423;
  t3137 = t3131 + t3134 + t3136;
  t2992 = t2482*t2050;
  t3006 = -1.*t2050*t1486;
  t2858 = t2504*t2001;
  t2863 = -1.*t2488*t2706;
  t2869 = t2858 + t2863;
  t3288 = t2613*t2772;
  t2493 = t2482*t2488;
  t2586 = t2504*t2584;
  t2594 = t2493 + t2586;
  t3307 = -1.*t2772*t2688;
  t2940 = t2504*t1486;
  t2946 = -1.*t2488*t2798;
  t2949 = t2940 + t2946;
  t3467 = -1.*t1661*t816;
  t3468 = -1.*t694*t1761;
  t3476 = -1.*t523*t1849;
  t3482 = t3467 + t3468 + t3476;
  t3490 = t1661*t1519;
  t3497 = t1496*t1761;
  t3499 = t1533*t1849;
  t3508 = t3490 + t3497 + t3499;
  t3403 = -1.*t2482*t2050;
  t3419 = t2001*t2050;
  t3580 = -1.*t2613*t2772;
  t3603 = t2744*t2772;
  p_output1[0]=t2594*var2[0] + (t2613*t2615 - 1.*t2601*t2631)*var2[1] + (t2601*t2613 + t2615*t2631)*var2[2] + (t2831*(t2774 - 1.*t2839*t2850 - 1.*t2869*t2906) + t2839*(t2808 + t2831*t2850 + t2906*t2949))*var2[3] + (t2688*(t2052 - 1.*t2706*t2724 + t2774) + t2744*(t2105 + t2724*t2798 + t2808))*var2[4] + (t1486*(t2052 - 1.*t2280*t2343 - 1.*t2360*t2383) + t2001*(t2105 + t2343*t2414 + t2383*t2458))*var2[5] + (-0.15121*t1074 + t1486*(-1.*t1538*t1856 - 1.*t1901*t1971 + t2052) + t2001*(t1856*t2080 + t1971*t2098 + t2105) + 0.15121*t856)*var2[15] + (-1.*t1196*t2184 - 1.*t1519*t2206 + 4.e-6*(-1.*t1276*t2184 - 1.*t1496*t2206) + 7.e-6*(t1423*t2184 + t1533*t2206) - 0.038749*t523 + 0.281211*t694 + 1.e-6*(t1142 + t377 + 7.e-6*t766))*var2[16] - 4.051285074010787e-7*var2[17];
  p_output1[1]=t2839*var2[0] + (t2615*t2744 - 1.*t2601*t2869)*var2[1] + (t2601*t2744 + t2615*t2869)*var2[2] + (t2831*(t2594*t2850 + t2631*t2906 + t3288) + t2594*(-1.*t2831*t2850 - 1.*t2906*t2949 + t3307))*var2[3] + (t2688*(t2584*t2724 + t2992 + t3288) + t2613*(-1.*t2724*t2798 + t3006 + t3307))*var2[4] + (t1486*(t2383*t2538 + t2343*t2579 + t2992) + t2482*(-1.*t2343*t2414 - 1.*t2383*t2458 + t3006))*var2[5] + (-0.15121*t1538 + 0.15121*t1901 + t2482*(-1.*t1856*t2080 - 1.*t1971*t2098 + t3006) + t1486*(t1074*t1856 + t2992 + t1971*t856))*var2[15] + (0.281211*t1496 - 0.038749*t1533 - 1.*t1196*t3126 + 7.e-6*(t1423*t3126 + t3137*t523) + 1.e-6*(4.e-6*(-1. + t1130) + t1221 + t589) + 4.e-6*(-1.*t1276*t3126 - 1.*t3137*t694) - 1.*t3137*t816)*var2[16] + 0.3000000410492048*var2[17];
  p_output1[2]=t2831*var2[0] + (t2615*t2688 - 1.*t2601*t2949)*var2[1] + (t2601*t2688 + t2615*t2949)*var2[2] + (t2839*(-1.*t2594*t2850 - 1.*t2631*t2906 + t3580) + t2594*(t2839*t2850 + t2869*t2906 + t3603))*var2[3] + (t2744*(-1.*t2584*t2724 + t3403 + t3580) + t2613*(t2706*t2724 + t3419 + t3603))*var2[4] + (t2001*(-1.*t2383*t2538 - 1.*t2343*t2579 + t3403) + t2482*(t2280*t2343 + t2360*t2383 + t3419))*var2[5] + (-0.15121*t2080 + 0.15121*t2098 + t2482*(t1538*t1856 + t1901*t1971 + t3419) + t2001*(-1.*t1074*t1856 + t3403 - 1.*t1971*t856))*var2[15] + (0.281211*t1276 - 0.038749*t1423 - 1.*t1519*t3482 + 7.e-6*(t1533*t3482 + t3508*t523) + 4.e-6*(-1.*t1496*t3482 - 1.*t3508*t694) + 1.e-6*(1. - 7.e-6*t1148 + 4.e-6*t1624 + t761) - 1.*t3508*t816)*var2[16] - 2.826290000000002e-7*var2[17];
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

#include "dh_RrFoot_QuadrupleStance.hh"

namespace QuadrupleStance
{

void dh_RrFoot_QuadrupleStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
