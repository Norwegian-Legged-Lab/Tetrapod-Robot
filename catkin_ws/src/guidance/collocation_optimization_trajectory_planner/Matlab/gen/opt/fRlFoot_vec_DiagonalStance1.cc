/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:09:03 GMT+01:00
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
  double t224;
  double t293;
  double t296;
  double t351;
  double t54;
  double t367;
  double t456;
  double t532;
  double t186;
  double t399;
  double t719;
  double t298;
  double t330;
  double t393;
  double t396;
  double t404;
  double t429;
  double t430;
  double t447;
  double t785;
  double t587;
  double t628;
  double t654;
  double t672;
  double t695;
  double t711;
  double t726;
  double t745;
  double t773;
  double t810;
  double t817;
  double t823;
  double t825;
  double t852;
  double t857;
  double t864;
  double t867;
  double t166;
  double t185;
  double t905;
  double t966;
  double t911;
  double t916;
  double t922;
  double t929;
  double t938;
  double t940;
  double t942;
  double t946;
  double t951;
  double t902;
  double t968;
  double t969;
  double t973;
  double t978;
  double t987;
  double t989;
  double t993;
  double t999;
  double t1007;
  double t1012;
  double t800;
  double t804;
  double t188;
  double t201;
  double t551;
  double t579;
  double t881;
  double t894;
  double t895;
  double t1126;
  double t1135;
  double t1176;
  double t1184;
  double t1223;
  double t1226;
  double t1232;
  double t1247;
  double t1288;
  double t1290;
  double t1303;
  double t1336;
  double t1343;
  double t1346;
  double t1365;
  double t1382;
  double t1396;
  double t1410;
  double t1412;
  double t1041;
  double t1474;
  double t1485;
  double t1497;
  double t1504;
  double t1506;
  double t1508;
  double t1526;
  double t1531;
  double t1554;
  double t1559;
  double t1561;
  double t1565;
  double t1569;
  double t1572;
  double t1580;
  double t1582;
  double t1030;
  double t1035;
  double t1038;
  double t962;
  double t1015;
  double t1023;
  double t449;
  double t778;
  double t869;
  double t876;
  double t1026;
  double t1051;
  double t1058;
  double t1643;
  double t1430;
  double t1440;
  double t1445;
  double t1380;
  double t1413;
  double t1414;
  double t1660;
  double t1194;
  double t1287;
  double t1307;
  double t1309;
  double t1422;
  double t1454;
  double t1456;
  double t1606;
  double t1610;
  double t1612;
  double t1568;
  double t1589;
  double t1600;
  double t1498;
  double t1513;
  double t1541;
  double t1542;
  double t1601;
  double t1623;
  double t1624;
  double t1645;
  double t1649;
  double t1653;
  double t1662;
  double t1674;
  double t1676;
  double t1701;
  double t1703;
  double t1707;
  double t1726;
  double t1727;
  double t1729;
  double t1763;
  double t1764;
  double t1771;
  double t1784;
  double t1789;
  double t1792;
  double t1335;
  double t1465;
  double t1466;
  double t1982;
  double t1995;
  double t2005;
  double t2011;
  double t2017;
  double t2028;
  double t2030;
  double t2035;
  double t2038;
  double t2039;
  double t2071;
  double t2087;
  double t2099;
  double t2111;
  double t2112;
  double t2118;
  double t2120;
  double t2121;
  double t2126;
  double t2129;
  double t2131;
  double t2133;
  double t2141;
  double t2150;
  double t2154;
  double t2156;
  double t2158;
  double t2161;
  double t2162;
  double t2165;
  double t2170;
  double t2171;
  double t1896;
  double t1897;
  double t1915;
  double t1922;
  double t1951;
  double t1955;
  double t1972;
  double t1976;
  double t1990;
  double t1991;
  double t2082;
  double t2139;
  double t2173;
  double t2177;
  double t2204;
  double t2207;
  double t2208;
  double t2212;
  double t2216;
  double t2225;
  double t2234;
  double t2235;
  double t2240;
  double t2249;
  double t2252;
  double t888;
  double t1062;
  double t1063;
  double t2275;
  double t2285;
  double t2296;
  double t2309;
  double t1909;
  double t2180;
  double t2261;
  double t2266;
  double t2323;
  double t2330;
  double t2331;
  double t2332;
  double t2333;
  double t2360;
  double t2362;
  double t2367;
  double t2385;
  double t2393;
  double t2395;
  double t2398;
  double t2404;
  double t2270;
  double t2310;
  double t2316;
  double t2394;
  double t2417;
  double t2420;
  double t2438;
  double t2439;
  double t2448;
  double t1547;
  double t1625;
  double t1627;
  double t2319;
  double t2465;
  double t2500;
  double t2524;
  double t2558;
  double t2564;
  double t2580;
  double t2592;
  double t2605;
  double t2613;
  double t2632;
  double t2640;
  double t2871;
  double t2878;
  double t2881;
  double t2882;
  double t2888;
  double t2890;
  double t2895;
  double t2897;
  double t2975;
  double t2979;
  double t2980;
  double t2987;
  double t2995;
  double t2997;
  double t3000;
  double t3011;
  double t2859;
  double t3074;
  double t3076;
  double t3080;
  double t3091;
  double t3102;
  double t3105;
  double t3106;
  double t3112;
  t224 = Cos(var1[14]);
  t293 = -1.*t224;
  t296 = 1. + t293;
  t351 = Sin(var1[14]);
  t54 = Cos(var1[13]);
  t367 = -7.e-6*t351;
  t456 = -1.*t54;
  t532 = 1. + t456;
  t186 = Sin(var1[13]);
  t399 = -7.e-6*t296;
  t719 = -1.*t351;
  t298 = -6.5e-11*t296;
  t330 = 4.e-6*t296;
  t393 = t330 + t367;
  t396 = 4.e-6*t393;
  t404 = -4.e-6*t351;
  t429 = t399 + t404;
  t430 = -7.e-6*t429;
  t447 = 1. + t298 + t396 + t430;
  t785 = 2.8e-11*t532;
  t587 = 1.000000000049*t296;
  t628 = -1. + t587;
  t654 = 4.e-6*t628;
  t672 = -1. + t224;
  t695 = 4.e-6*t672;
  t711 = 2.8e-11*t296;
  t726 = t711 + t719;
  t745 = -7.e-6*t726;
  t773 = t654 + t695 + t745 + t367;
  t810 = -1.000000000016*t296;
  t817 = 1. + t810;
  t823 = -7.e-6*t817;
  t825 = -2.8e-11*t296;
  t852 = t825 + t719;
  t857 = 4.e-6*t852;
  t864 = 4.e-6*t351;
  t867 = t823 + t399 + t857 + t864;
  t166 = -1. + t54;
  t185 = 4.e-6*t166;
  t905 = -7.e-6*t532;
  t966 = Sin(var1[12]);
  t911 = 4.e-6*t186;
  t916 = t905 + t911;
  t922 = t916*t447;
  t929 = t785 + t186;
  t938 = t929*t773;
  t940 = -1.000000000016*t532;
  t942 = 1. + t940;
  t946 = t942*t867;
  t951 = t922 + t938 + t946;
  t902 = Cos(var1[12]);
  t968 = -6.5e-11*t532;
  t969 = 1. + t968;
  t973 = t969*t447;
  t978 = 7.e-6*t186;
  t987 = t185 + t978;
  t989 = t987*t773;
  t993 = -4.e-6*t186;
  t999 = t905 + t993;
  t1007 = t999*t867;
  t1012 = t973 + t989 + t1007;
  t800 = -1.*t186;
  t804 = t785 + t800;
  t188 = -7.e-6*t186;
  t201 = t185 + t188;
  t551 = -1.000000000049*t532;
  t579 = 1. + t551;
  t881 = Sin(var1[4]);
  t894 = Cos(var1[4]);
  t895 = Cos(var1[5]);
  t1126 = 1.000000000016*t296;
  t1135 = t399 + t864;
  t1176 = -7.e-6*t1135;
  t1184 = -1. + t1126 + t1176;
  t1223 = 1. + t298;
  t1226 = -7.e-6*t1223;
  t1232 = 7.e-6*t296;
  t1247 = t1226 + t1232 + t864;
  t1288 = t695 + t367;
  t1290 = -7.e-6*t1288;
  t1303 = t825 + t1290 + t351;
  t1336 = t999*t1184;
  t1343 = t969*t1247;
  t1346 = t987*t1303;
  t1365 = t1336 + t1343 + t1346;
  t1382 = t942*t1184;
  t1396 = t916*t1247;
  t1410 = t929*t1303;
  t1412 = t1382 + t1396 + t1410;
  t1041 = Sin(var1[5]);
  t1474 = -1.000000000049*t296;
  t1485 = 4.e-6*t1288;
  t1497 = 1. + t1474 + t1485;
  t1504 = 4.e-6*t1223;
  t1506 = 7.e-6*t351;
  t1508 = t1504 + t695 + t1506;
  t1526 = 4.e-6*t1135;
  t1531 = t711 + t1526 + t351;
  t1554 = t929*t1497;
  t1559 = t916*t1508;
  t1561 = t942*t1531;
  t1565 = t1554 + t1559 + t1561;
  t1569 = t987*t1497;
  t1572 = t969*t1508;
  t1580 = t999*t1531;
  t1582 = t1569 + t1572 + t1580;
  t1030 = t966*t951;
  t1035 = t902*t1012;
  t1038 = t1030 + t1035;
  t962 = t902*t951;
  t1015 = -1.*t966*t1012;
  t1023 = t962 + t1015;
  t449 = t201*t447;
  t778 = t579*t773;
  t869 = t804*t867;
  t876 = t449 + t778 + t869;
  t1026 = t895*t1023;
  t1051 = -1.*t1038*t1041;
  t1058 = t1026 + t1051;
  t1643 = Cos(var1[3]);
  t1430 = t902*t1365;
  t1440 = t966*t1412;
  t1445 = t1430 + t1440;
  t1380 = -1.*t966*t1365;
  t1413 = t902*t1412;
  t1414 = t1380 + t1413;
  t1660 = Sin(var1[3]);
  t1194 = t804*t1184;
  t1287 = t201*t1247;
  t1307 = t579*t1303;
  t1309 = t1194 + t1287 + t1307;
  t1422 = t895*t1414;
  t1454 = -1.*t1445*t1041;
  t1456 = t1422 + t1454;
  t1606 = t966*t1565;
  t1610 = t902*t1582;
  t1612 = t1606 + t1610;
  t1568 = t902*t1565;
  t1589 = -1.*t966*t1582;
  t1600 = t1568 + t1589;
  t1498 = t579*t1497;
  t1513 = t201*t1508;
  t1541 = t804*t1531;
  t1542 = t1498 + t1513 + t1541;
  t1601 = t895*t1600;
  t1623 = -1.*t1612*t1041;
  t1624 = t1601 + t1623;
  t1645 = t895*t1038;
  t1649 = t1023*t1041;
  t1653 = t1645 + t1649;
  t1662 = t894*t876;
  t1674 = -1.*t881*t1058;
  t1676 = t1662 + t1674;
  t1701 = t895*t1445;
  t1703 = t1414*t1041;
  t1707 = t1701 + t1703;
  t1726 = t894*t1309;
  t1727 = -1.*t881*t1456;
  t1729 = t1726 + t1727;
  t1763 = t895*t1612;
  t1764 = t1600*t1041;
  t1771 = t1763 + t1764;
  t1784 = t894*t1542;
  t1789 = -1.*t881*t1624;
  t1792 = t1784 + t1789;
  t1335 = t1309*t881;
  t1465 = t894*t1456;
  t1466 = t1335 + t1465;
  t1982 = 7.e-6*t532;
  t1995 = -2.598649999999999e-7*var1[14];
  t2005 = 0.148705*t1223;
  t2011 = -2.3905277499999995e-16*t296;
  t2017 = -0.038922999986*t393;
  t2028 = -0.80315*t429;
  t2030 = t1232 + t864;
  t2035 = -0.503149000008*t2030;
  t2038 = t695 + t1506;
  t2039 = -0.038924*t2038;
  t2071 = t1995 + t2005 + t2011 + t2017 + t2028 + t2035 + t2039;
  t2087 = 1.0394599999999997e-12*var1[14];
  t2099 = 1. + t1474;
  t2111 = -0.038924*t2099;
  t2112 = -0.03892299998790722*t296;
  t2118 = -0.80315*t726;
  t2120 = 0.148705*t1288;
  t2121 = t330 + t1506;
  t2126 = -3.6777349999999994e-6*t2121;
  t2129 = t825 + t351;
  t2131 = -0.503149000008*t2129;
  t2133 = t2087 + t2111 + t2112 + t2118 + t2120 + t2126 + t2131;
  t2141 = 1.8190549999999993e-12*var1[14];
  t2150 = -0.80315*t817;
  t2154 = -0.5031490000160505*t296;
  t2156 = -0.038922999986*t852;
  t2158 = t1232 + t404;
  t2161 = -3.6777349999999994e-6*t2158;
  t2162 = 0.148705*t1135;
  t2165 = t711 + t351;
  t2170 = -0.038924*t2165;
  t2171 = t2141 + t2150 + t2154 + t2156 + t2161 + t2162 + t2170;
  t1896 = -1.*t902;
  t1897 = 1. + t1896;
  t1915 = 0.15121*t966;
  t1922 = 1.0248489999999998e-12*var1[13];
  t1951 = -0.28120900000849935*t532;
  t1955 = -2.8e-11*t532;
  t1972 = t1955 + t800;
  t1976 = -0.038748999993*t1972;
  t1990 = t1982 + t993;
  t1991 = -2.123459e-6*t1990;
  t2082 = t916*t2071;
  t2139 = t929*t2133;
  t2173 = t942*t2171;
  t2177 = t1922 + t1951 + t1976 + t1991 + t2082 + t2139 + t2173;
  t2204 = -1.4640699999999997e-7*var1[13];
  t2207 = -1.38024835e-16*t532;
  t2208 = 4.e-6*t532;
  t2212 = t2208 + t188;
  t2216 = -0.038748999993*t2212;
  t2225 = t1982 + t911;
  t2234 = -0.281209000004*t2225;
  t2235 = t969*t2071;
  t2240 = t987*t2133;
  t2249 = t999*t2171;
  t2252 = t2204 + t2207 + t2216 + t2234 + t2235 + t2240 + t2249;
  t888 = t876*t881;
  t1062 = t894*t1058;
  t1063 = t888 + t1062;
  t2275 = -0.15121*t1897;
  t2285 = t902*t2177;
  t2296 = -1.*t966*t2252;
  t2309 = t2275 + t1915 + t2285 + t2296;
  t1909 = 0.15121*t1897;
  t2180 = t966*t2177;
  t2261 = t902*t2252;
  t2266 = t1909 + t1915 + t2180 + t2261;
  t2323 = 5.856279999999999e-13*var1[13];
  t2330 = -0.0387489999948987*t532;
  t2331 = t2208 + t978;
  t2332 = -2.123459e-6*t2331;
  t2333 = t1955 + t186;
  t2360 = -0.281209000004*t2333;
  t2362 = t201*t2071;
  t2367 = t579*t2133;
  t2385 = t804*t2171;
  t2393 = t2323 + t2330 + t2332 + t2360 + t2362 + t2367 + t2385;
  t2395 = t895*t2309;
  t2398 = -1.*t2266*t1041;
  t2404 = t2395 + t2398;
  t2270 = t895*t2266;
  t2310 = t2309*t1041;
  t2316 = t2270 + t2310;
  t2394 = t2393*t881;
  t2417 = t894*t2404;
  t2420 = t2394 + t2417;
  t2438 = t894*t2393;
  t2439 = -1.*t881*t2404;
  t2448 = t2438 + t2439;
  t1547 = t1542*t881;
  t1625 = t894*t1624;
  t1627 = t1547 + t1625;
  t2319 = -1.*t1653*t2316;
  t2465 = t1707*t2316;
  t2500 = t1653*t2316;
  t2524 = -1.*t1771*t2316;
  t2558 = -1.*t1707*t2316;
  t2564 = t1771*t2316;
  t2580 = -1.*t876*t2393;
  t2592 = t1309*t2393;
  t2605 = t876*t2393;
  t2613 = -1.*t1542*t2393;
  t2632 = -1.*t1309*t2393;
  t2640 = t1542*t2393;
  t2871 = t2071*t1247;
  t2878 = t1303*t2133;
  t2881 = t1184*t2171;
  t2882 = t2871 + t2878 + t2881;
  t2888 = -1.*t447*t2071;
  t2890 = -1.*t773*t2133;
  t2895 = -1.*t867*t2171;
  t2897 = t2888 + t2890 + t2895;
  t2975 = t447*t2071;
  t2979 = t773*t2133;
  t2980 = t867*t2171;
  t2987 = t2975 + t2979 + t2980;
  t2995 = -1.*t2071*t1508;
  t2997 = -1.*t1497*t2133;
  t3000 = -1.*t1531*t2171;
  t3011 = t2995 + t2997 + t3000;
  t2859 = 6.5e-11*t296;
  t3074 = -1.*t2071*t1247;
  t3076 = -1.*t1303*t2133;
  t3080 = -1.*t1184*t2171;
  t3091 = t3074 + t3076 + t3080;
  t3102 = t2071*t1508;
  t3105 = t1497*t2133;
  t3106 = t1531*t2171;
  t3112 = t3102 + t3105 + t3106;
  p_output1[0]=t1466*var2[0] + t1627*var2[1] + t1063*var2[2];
  p_output1[1]=(t1643*t1707 - 1.*t1660*t1729)*var2[0] + (t1643*t1771 - 1.*t1660*t1792)*var2[1] + (t1643*t1653 - 1.*t1660*t1676)*var2[2];
  p_output1[2]=(t1660*t1707 + t1643*t1729)*var2[0] + (t1660*t1771 + t1643*t1792)*var2[1] + (t1653*t1660 + t1643*t1676)*var2[2];
  p_output1[3]=(t1627*(t1063*t2420 + t1676*t2448 + t2500) + t1063*(-1.*t1627*t2420 - 1.*t1792*t2448 + t2524))*var2[0] + (t1466*(t2319 - 1.*t1063*t2420 - 1.*t1676*t2448) + t1063*(t1466*t2420 + t1729*t2448 + t2465))*var2[1] + (t1627*(-1.*t1466*t2420 - 1.*t1729*t2448 + t2558) + t1466*(t1627*t2420 + t1792*t2448 + t2564))*var2[2];
  p_output1[4]=(t1771*(t1058*t2404 + t2500 + t2605) + t1653*(-1.*t1624*t2404 + t2524 + t2613))*var2[0] + (t1707*(t2319 - 1.*t1058*t2404 + t2580) + t1653*(t1456*t2404 + t2465 + t2592))*var2[1] + (t1771*(-1.*t1456*t2404 + t2558 + t2632) + t1707*(t1624*t2404 + t2564 + t2640))*var2[2];
  p_output1[5]=(t1542*(t1038*t2266 + t1023*t2309 + t2605) + (-1.*t1612*t2266 - 1.*t1600*t2309 + t2613)*t876)*var2[0] + (t1309*(-1.*t1038*t2266 - 1.*t1023*t2309 + t2580) + (t1445*t2266 + t1414*t2309 + t2592)*t876)*var2[1] + (t1542*(-1.*t1445*t2266 - 1.*t1414*t2309 + t2632) + t1309*(t1612*t2266 + t1600*t2309 + t2640))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.15121*t1365 + 0.15121*t1412 + (-1.*t1565*t2177 - 1.*t1582*t2252 + t2613)*t876 + t1542*(t1012*t2252 + t2605 + t2177*t951))*var2[0] + (0.15121*t1565 + 0.15121*t1582 + (t1412*t2177 + t1365*t2252 + t2592)*t876 + t1309*(-1.*t1012*t2252 + t2580 - 1.*t2177*t951))*var2[1] + (0.15121*t1012 + t1542*(-1.*t1412*t2177 - 1.*t1365*t2252 + t2632) + t1309*(t1565*t2177 + t1582*t2252 + t2640) + 0.15121*t951)*var2[2];
  p_output1[13]=(0.038749*t1184 - 0.281209*t1303 + t1508*t2987 + 1.e-6*(7.e-6*t1223 + t399 + t404) + t3011*t447 + 4.e-6*(-1.*t1497*t2987 - 1.*t3011*t773) - 7.e-6*(t1531*t2987 + t3011*t867))*var2[0] + (-0.281209*t1497 + 0.038749*t1531 + t1247*t2897 + 1.e-6*(4.e-6*(-1. + t2859) + t330 + t367) + t2882*t447 + 4.e-6*(-1.*t1303*t2897 - 1.*t2882*t773) - 7.e-6*(t1184*t2897 + t2882*t867))*var2[1] + (t1508*t3091 + t1247*t3112 - 7.e-6*(t1531*t3091 + t1184*t3112) + 4.e-6*(-1.*t1497*t3091 - 1.*t1303*t3112) + 1.e-6*(-1. + 4.e-6*t2038 + t2859 + 7.e-6*t429) - 0.281209*t773 + 0.038749*t867)*var2[2];
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

#include "fRlFoot_vec_DiagonalStance1.hh"

namespace DiagonalStance1
{

void fRlFoot_vec_DiagonalStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
