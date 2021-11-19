/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:27:08 GMT+01:00
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
  double t408;
  double t428;
  double t527;
  double t180;
  double t211;
  double t267;
  double t604;
  double t620;
  double t360;
  double t596;
  double t597;
  double t626;
  double t681;
  double t685;
  double t270;
  double t706;
  double t728;
  double t767;
  double t772;
  double t786;
  double t835;
  double t868;
  double t921;
  double t925;
  double t929;
  double t930;
  double t950;
  double t802;
  double t806;
  double t1056;
  double t1031;
  double t1033;
  double t1094;
  double t1292;
  double t989;
  double t999;
  double t1461;
  double t1287;
  double t379;
  double t1326;
  double t1348;
  double t1357;
  double t1377;
  double t1247;
  double t1190;
  double t1487;
  double t1506;
  double t1507;
  double t1537;
  double t1230;
  double t1239;
  double t1349;
  double t1396;
  double t1418;
  double t1173;
  double t1181;
  double t1424;
  double t1432;
  double t1442;
  double t1497;
  double t1499;
  double t1289;
  double t1532;
  double t1540;
  double t1544;
  double t814;
  double t1573;
  double t1620;
  double t1637;
  double t1640;
  double t1645;
  double t1655;
  double t1656;
  double t1659;
  double t1672;
  double t1681;
  double t1696;
  double t1709;
  double t1715;
  double t1730;
  double t1745;
  double t1761;
  double t1763;
  double t1771;
  double t1772;
  double t1786;
  double t1796;
  double t1811;
  double t1821;
  double t1823;
  double t1834;
  double t1835;
  double t1841;
  double t1857;
  double t1865;
  double t1869;
  double t1877;
  double t1890;
  double t699;
  double t705;
  double t830;
  double t399;
  double t1940;
  double t1604;
  double t1905;
  double t1916;
  double t1920;
  double t1926;
  double t1207;
  double t1222;
  double t1245;
  double t1251;
  double t1294;
  double t1297;
  double t1568;
  double t1572;
  double t1585;
  double t1590;
  double t1617;
  double t1618;
  double t1697;
  double t1820;
  double t1897;
  double t1900;
  double t1224;
  double t1274;
  double t1302;
  double t1310;
  double t1929;
  double t1933;
  double t1967;
  double t1969;
  double t1970;
  double t1973;
  double t1976;
  double t1977;
  double t1979;
  double t1980;
  double t2002;
  double t2003;
  double t2004;
  double t2012;
  double t2018;
  double t2020;
  double t2022;
  double t2030;
  double t2032;
  double t2037;
  double t2146;
  double t2149;
  double t2162;
  double t2170;
  double t2177;
  double t2179;
  double t2180;
  double t2183;
  double t1981;
  double t1422;
  double t1504;
  double t1547;
  double t1552;
  double t1984;
  double t1988;
  double t1993;
  double t1996;
  double t2250;
  double t2237;
  double t2273;
  double t2275;
  double t2279;
  double t2096;
  double t2058;
  double t2064;
  double t2067;
  double t2077;
  double t2097;
  double t2101;
  double t2105;
  double t2106;
  double t2276;
  double t2287;
  double t2288;
  double t2290;
  double t2316;
  double t2317;
  double t2325;
  double t2333;
  double t688;
  double t791;
  double t951;
  double t986;
  double t1030;
  double t1055;
  double t1098;
  double t1119;
  double t2428;
  double t2456;
  double t2476;
  double t2490;
  double t2431;
  double t2446;
  double t2448;
  double t2492;
  double t2416;
  double t2384;
  double t2385;
  double t2389;
  double t2399;
  double t2403;
  double t2449;
  double t2494;
  double t2504;
  double t2572;
  double t2526;
  double t2528;
  double t2559;
  double t2516;
  double t2576;
  double t2582;
  double t2584;
  double t2355;
  double t2356;
  double t2357;
  double t2361;
  double t2365;
  double t2367;
  double t2295;
  double t2300;
  double t2302;
  double t2240;
  double t2264;
  double t2268;
  double t2715;
  double t2727;
  double t2734;
  double t2673;
  double t2681;
  double t2689;
  double t2632;
  double t2636;
  double t2642;
  double t2742;
  double t2755;
  double t2759;
  double t2778;
  double t2787;
  double t2794;
  double t2763;
  double t2655;
  double t2656;
  double t2663;
  double t2851;
  double t2858;
  double t2859;
  double t2828;
  double t2839;
  double t2846;
  double t2848;
  double t2860;
  double t2863;
  double t2865;
  double t2904;
  double t2913;
  double t2927;
  double t3104;
  double t3109;
  double t3110;
  double t3112;
  double t3115;
  double t3117;
  double t3119;
  double t3123;
  double t2973;
  double t3000;
  double t2951;
  double t2952;
  double t2953;
  double t2410;
  double t2507;
  double t2509;
  double t3242;
  double t2886;
  double t2894;
  double t2898;
  double t3263;
  double t3081;
  double t3423;
  double t3436;
  double t3441;
  double t3450;
  double t3472;
  double t3483;
  double t3488;
  double t3491;
  double t3334;
  double t3348;
  double t3645;
  double t3664;
  t408 = Cos(var1[14]);
  t428 = -1.*t408;
  t527 = 1. + t428;
  t180 = Cos(var1[13]);
  t211 = -1.*t180;
  t267 = 1. + t211;
  t604 = Sin(var1[14]);
  t620 = 4.e-6*t604;
  t360 = Sin(var1[13]);
  t596 = 1.000000000016*t527;
  t597 = -7.e-6*t527;
  t626 = t597 + t620;
  t681 = -7.e-6*t626;
  t685 = -1. + t596 + t681;
  t270 = -7.e-6*t267;
  t706 = -6.5e-11*t527;
  t728 = 1. + t706;
  t767 = -7.e-6*t728;
  t772 = 7.e-6*t527;
  t786 = t767 + t772 + t620;
  t835 = -2.8e-11*t527;
  t868 = -1. + t408;
  t921 = 4.e-6*t868;
  t925 = -7.e-6*t604;
  t929 = t921 + t925;
  t930 = -7.e-6*t929;
  t950 = t835 + t930 + t604;
  t802 = -1. + t180;
  t806 = 4.e-6*t802;
  t1056 = 2.8e-11*t267;
  t1031 = 4.e-6*t360;
  t1033 = t270 + t1031;
  t1094 = t1056 + t360;
  t1292 = 2.8e-11*t527;
  t989 = -1.000000000016*t267;
  t999 = 1. + t989;
  t1461 = -1.*t604;
  t1287 = -1.*t360;
  t379 = -4.e-6*t360;
  t1326 = 4.e-6*t527;
  t1348 = t1326 + t925;
  t1357 = -4.e-6*t604;
  t1377 = t597 + t1357;
  t1247 = 7.e-6*t604;
  t1190 = -1.000000000049*t527;
  t1487 = t1292 + t1461;
  t1506 = -1.000000000016*t527;
  t1507 = 1. + t1506;
  t1537 = t835 + t1461;
  t1230 = -7.e-6*t360;
  t1239 = t806 + t1230;
  t1349 = 4.e-6*t1348;
  t1396 = -7.e-6*t1377;
  t1418 = 1. + t706 + t1349 + t1396;
  t1173 = -1.000000000049*t267;
  t1181 = 1. + t1173;
  t1424 = 1.000000000049*t527;
  t1432 = -1. + t1424;
  t1442 = 4.e-6*t1432;
  t1497 = -7.e-6*t1487;
  t1499 = t1442 + t921 + t1497 + t925;
  t1289 = t1056 + t1287;
  t1532 = -7.e-6*t1507;
  t1540 = 4.e-6*t1537;
  t1544 = t1532 + t597 + t1540 + t620;
  t814 = 7.e-6*t360;
  t1573 = -2.8e-11*t267;
  t1620 = -2.598649999999999e-7*var1[14];
  t1637 = 0.148705*t728;
  t1640 = -2.3905277499999995e-16*t527;
  t1645 = -0.038922999986*t1348;
  t1655 = -0.80315*t1377;
  t1656 = t772 + t620;
  t1659 = -0.503149000008*t1656;
  t1672 = t921 + t1247;
  t1681 = -0.038924*t1672;
  t1696 = t1620 + t1637 + t1640 + t1645 + t1655 + t1659 + t1681;
  t1709 = 1.0394599999999997e-12*var1[14];
  t1715 = 1. + t1190;
  t1730 = -0.038924*t1715;
  t1745 = -0.03892299998790722*t527;
  t1761 = -0.80315*t1487;
  t1763 = 0.148705*t929;
  t1771 = t1326 + t1247;
  t1772 = -3.6777349999999994e-6*t1771;
  t1786 = t835 + t604;
  t1796 = -0.503149000008*t1786;
  t1811 = t1709 + t1730 + t1745 + t1761 + t1763 + t1772 + t1796;
  t1821 = 1.8190549999999993e-12*var1[14];
  t1823 = -0.80315*t1507;
  t1834 = -0.5031490000160505*t527;
  t1835 = -0.038922999986*t1537;
  t1841 = t772 + t1357;
  t1857 = -3.6777349999999994e-6*t1841;
  t1865 = 0.148705*t626;
  t1869 = t1292 + t604;
  t1877 = -0.038924*t1869;
  t1890 = t1821 + t1823 + t1834 + t1835 + t1857 + t1865 + t1877;
  t699 = -6.5e-11*t267;
  t705 = 1. + t699;
  t830 = t806 + t814;
  t399 = t270 + t379;
  t1940 = 4.e-6*t267;
  t1604 = 7.e-6*t267;
  t1905 = t1239*t1418;
  t1916 = t1181*t1499;
  t1920 = t1289*t1544;
  t1926 = t1905 + t1916 + t1920;
  t1207 = 4.e-6*t929;
  t1222 = 1. + t1190 + t1207;
  t1245 = 4.e-6*t728;
  t1251 = t1245 + t921 + t1247;
  t1294 = 4.e-6*t626;
  t1297 = t1292 + t1294 + t604;
  t1568 = 1.0248489999999998e-12*var1[13];
  t1572 = -0.28120900000849935*t267;
  t1585 = t1573 + t1287;
  t1590 = -0.038748999993*t1585;
  t1617 = t1604 + t379;
  t1618 = -2.123459e-6*t1617;
  t1697 = t1033*t1696;
  t1820 = t1094*t1811;
  t1897 = t999*t1890;
  t1900 = t1568 + t1572 + t1590 + t1618 + t1697 + t1820 + t1897;
  t1224 = t1181*t1222;
  t1274 = t1239*t1251;
  t1302 = t1289*t1297;
  t1310 = t1224 + t1274 + t1302;
  t1929 = 5.856279999999999e-13*var1[13];
  t1933 = -0.0387489999948987*t267;
  t1967 = t1940 + t814;
  t1969 = -2.123459e-6*t1967;
  t1970 = t1573 + t360;
  t1973 = -0.281209000004*t1970;
  t1976 = t1239*t1696;
  t1977 = t1181*t1811;
  t1979 = t1289*t1890;
  t1980 = t1929 + t1933 + t1969 + t1973 + t1976 + t1977 + t1979;
  t2002 = -1.4640699999999997e-7*var1[13];
  t2003 = -1.38024835e-16*t267;
  t2004 = t1940 + t1230;
  t2012 = -0.038748999993*t2004;
  t2018 = t1604 + t1031;
  t2020 = -0.281209000004*t2018;
  t2022 = t705*t1696;
  t2030 = t830*t1811;
  t2032 = t399*t1890;
  t2037 = t2002 + t2003 + t2012 + t2020 + t2022 + t2030 + t2032;
  t2146 = t1418*t1696;
  t2149 = t1499*t1811;
  t2162 = t1544*t1890;
  t2170 = t2146 + t2149 + t2162;
  t2177 = -1.*t1696*t1251;
  t2179 = -1.*t1222*t1811;
  t2180 = -1.*t1297*t1890;
  t2183 = t2177 + t2179 + t2180;
  t1981 = t1926*t1980;
  t1422 = t1033*t1418;
  t1504 = t1094*t1499;
  t1547 = t999*t1544;
  t1552 = t1422 + t1504 + t1547;
  t1984 = t705*t1418;
  t1988 = t830*t1499;
  t1993 = t399*t1544;
  t1996 = t1984 + t1988 + t1993;
  t2250 = Cos(var1[12]);
  t2237 = Sin(var1[12]);
  t2273 = -1.*t2250;
  t2275 = 1. + t2273;
  t2279 = 0.15121*t2237;
  t2096 = -1.*t1310*t1980;
  t2058 = t1094*t1222;
  t2064 = t1033*t1251;
  t2067 = t999*t1297;
  t2077 = t2058 + t2064 + t2067;
  t2097 = t830*t1222;
  t2101 = t705*t1251;
  t2105 = t399*t1297;
  t2106 = t2097 + t2101 + t2105;
  t2276 = 0.15121*t2275;
  t2287 = t2237*t1900;
  t2288 = t2250*t2037;
  t2290 = t2276 + t2279 + t2287 + t2288;
  t2316 = -0.15121*t2275;
  t2317 = t2250*t1900;
  t2325 = -1.*t2237*t2037;
  t2333 = t2316 + t2279 + t2317 + t2325;
  t688 = t399*t685;
  t791 = t705*t786;
  t951 = t830*t950;
  t986 = t688 + t791 + t951;
  t1030 = t999*t685;
  t1055 = t1033*t786;
  t1098 = t1094*t950;
  t1119 = t1030 + t1055 + t1098;
  t2428 = Cos(var1[5]);
  t2456 = t2250*t986;
  t2476 = t2237*t1119;
  t2490 = t2456 + t2476;
  t2431 = -1.*t2237*t986;
  t2446 = t2250*t1119;
  t2448 = t2431 + t2446;
  t2492 = Sin(var1[5]);
  t2416 = Cos(var1[4]);
  t2384 = t1289*t685;
  t2385 = t1239*t786;
  t2389 = t1181*t950;
  t2399 = t2384 + t2385 + t2389;
  t2403 = Sin(var1[4]);
  t2449 = t2428*t2448;
  t2494 = -1.*t2490*t2492;
  t2504 = t2449 + t2494;
  t2572 = Cos(var1[3]);
  t2526 = t2428*t2490;
  t2528 = t2448*t2492;
  t2559 = t2526 + t2528;
  t2516 = Sin(var1[3]);
  t2576 = t2416*t2399;
  t2582 = -1.*t2403*t2504;
  t2584 = t2576 + t2582;
  t2355 = t2237*t2077;
  t2356 = t2250*t2106;
  t2357 = t2355 + t2356;
  t2361 = t2250*t2077;
  t2365 = -1.*t2237*t2106;
  t2367 = t2361 + t2365;
  t2295 = t2250*t1552;
  t2300 = -1.*t2237*t1996;
  t2302 = t2295 + t2300;
  t2240 = t2237*t1552;
  t2264 = t2250*t1996;
  t2268 = t2240 + t2264;
  t2715 = t2428*t2268;
  t2727 = t2302*t2492;
  t2734 = t2715 + t2727;
  t2673 = t2428*t2333;
  t2681 = -1.*t2290*t2492;
  t2689 = t2673 + t2681;
  t2632 = t2428*t2357;
  t2636 = t2367*t2492;
  t2642 = t2632 + t2636;
  t2742 = t2428*t2290;
  t2755 = t2333*t2492;
  t2759 = t2742 + t2755;
  t2778 = t2428*t2367;
  t2787 = -1.*t2357*t2492;
  t2794 = t2778 + t2787;
  t2763 = t2734*t2759;
  t2655 = t2428*t2302;
  t2656 = -1.*t2268*t2492;
  t2663 = t2655 + t2656;
  t2851 = t1926*t2403;
  t2858 = t2416*t2663;
  t2859 = t2851 + t2858;
  t2828 = -1.*t2642*t2759;
  t2839 = t1310*t2403;
  t2846 = t2416*t2794;
  t2848 = t2839 + t2846;
  t2860 = t1980*t2403;
  t2863 = t2416*t2689;
  t2865 = t2860 + t2863;
  t2904 = t2416*t1980;
  t2913 = -1.*t2403*t2689;
  t2927 = t2904 + t2913;
  t3104 = t1696*t786;
  t3109 = t950*t1811;
  t3110 = t685*t1890;
  t3112 = t3104 + t3109 + t3110;
  t3115 = -1.*t1418*t1696;
  t3117 = -1.*t1499*t1811;
  t3119 = -1.*t1544*t1890;
  t3123 = t3115 + t3117 + t3119;
  t2973 = -1.*t1926*t1980;
  t3000 = t2399*t1980;
  t2951 = t2416*t1310;
  t2952 = -1.*t2403*t2794;
  t2953 = t2951 + t2952;
  t2410 = t2399*t2403;
  t2507 = t2416*t2504;
  t2509 = t2410 + t2507;
  t3242 = -1.*t2734*t2759;
  t2886 = t2416*t1926;
  t2894 = -1.*t2403*t2663;
  t2898 = t2886 + t2894;
  t3263 = t2559*t2759;
  t3081 = 6.5e-11*t527;
  t3423 = -1.*t1696*t786;
  t3436 = -1.*t950*t1811;
  t3441 = -1.*t685*t1890;
  t3450 = t3423 + t3436 + t3441;
  t3472 = t1696*t1251;
  t3483 = t1222*t1811;
  t3488 = t1297*t1890;
  t3491 = t3472 + t3483 + t3488;
  t3334 = -1.*t2399*t1980;
  t3348 = t1310*t1980;
  t3645 = -1.*t2559*t2759;
  t3664 = t2642*t2759;
  p_output1[0]=t2509*var2[0] + (t2559*t2572 - 1.*t2516*t2584)*var2[1] + (t2516*t2559 + t2572*t2584)*var2[2] + (t2848*(t2763 + t2859*t2865 + t2898*t2927) + t2859*(t2828 - 1.*t2848*t2865 - 1.*t2927*t2953))*var2[3] + (t2642*(t1981 + t2663*t2689 + t2763) + t2734*(t2096 - 1.*t2689*t2794 + t2828))*var2[4] + (t1310*(t1981 + t2268*t2290 + t2302*t2333) + t1926*(t2096 - 1.*t2290*t2357 - 1.*t2333*t2367))*var2[5] + (0.15121*t1119 + t1310*(t1552*t1900 + t1981 + t1996*t2037) + t1926*(-1.*t1900*t2077 + t2096 - 1.*t2037*t2106) + 0.15121*t986)*var2[12] + (t1251*t2170 + t1418*t2183 + 4.e-6*(-1.*t1222*t2170 - 1.*t1499*t2183) - 7.e-6*(t1297*t2170 + t1544*t2183) + 0.038749*t685 + 1.e-6*(t1357 + t597 + 7.e-6*t728) - 0.281209*t950)*var2[13] + 4.0519653002457196e-7*var2[14];
  p_output1[1]=t2848*var2[0] + (t2572*t2642 - 1.*t2516*t2953)*var2[1] + (t2516*t2642 + t2572*t2953)*var2[2] + (t2509*(-1.*t2859*t2865 - 1.*t2898*t2927 + t3242) + t2859*(t2509*t2865 + t2584*t2927 + t3263))*var2[3] + (t2559*(-1.*t2663*t2689 + t2973 + t3242) + t2734*(t2504*t2689 + t3000 + t3263))*var2[4] + (t2399*(-1.*t2268*t2290 - 1.*t2302*t2333 + t2973) + t1926*(t2333*t2448 + t2290*t2490 + t3000))*var2[5] + (0.15121*t2077 + 0.15121*t2106 + t2399*(-1.*t1552*t1900 - 1.*t1996*t2037 + t2973) + t1926*(t1119*t1900 + t3000 + t2037*t986))*var2[12] + (-0.281209*t1222 + 0.038749*t1297 + t1418*t3112 - 7.e-6*(t1544*t3112 + t3123*t685) + t3123*t786 + 1.e-6*(t1326 + 4.e-6*(-1. + t3081) + t925) + 4.e-6*(-1.*t1499*t3112 - 1.*t3123*t950))*var2[13] + 0.29999995910920463*var2[14];
  p_output1[2]=t2859*var2[0] + (t2572*t2734 - 1.*t2516*t2898)*var2[1] + (t2516*t2734 + t2572*t2898)*var2[2] + (t2848*(-1.*t2509*t2865 - 1.*t2584*t2927 + t3645) + t2509*(t2848*t2865 + t2927*t2953 + t3664))*var2[3] + (t2642*(-1.*t2504*t2689 + t3334 + t3645) + t2559*(t2689*t2794 + t3348 + t3664))*var2[4] + (t1310*(-1.*t2333*t2448 - 1.*t2290*t2490 + t3334) + t2399*(t2290*t2357 + t2333*t2367 + t3348))*var2[5] + (0.15121*t1552 + 0.15121*t1996 + t2399*(t1900*t2077 + t2037*t2106 + t3348) + t1310*(-1.*t1119*t1900 + t3334 - 1.*t2037*t986))*var2[12] + (-0.281209*t1499 + 0.038749*t1544 + 1.e-6*(-1. + 7.e-6*t1377 + 4.e-6*t1672 + t3081) + t1251*t3450 - 7.e-6*(t1297*t3450 + t3491*t685) + t3491*t786 + 4.e-6*(-1.*t1222*t3450 - 1.*t3491*t950))*var2[13] - 2.5986500000000035e-7*var2[14];
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

#include "dh_RlFoot_DiagonalStance1.hh"

namespace DiagonalStance1
{

void dh_RlFoot_DiagonalStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
