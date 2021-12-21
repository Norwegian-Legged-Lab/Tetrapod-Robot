/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:09:37 GMT+01:00
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
  double t115;
  double t116;
  double t139;
  double t173;
  double t262;
  double t277;
  double t287;
  double t310;
  double t314;
  double t323;
  double t152;
  double t256;
  double t392;
  double t208;
  double t449;
  double t627;
  double t631;
  double t634;
  double t670;
  double t17;
  double t546;
  double t565;
  double t471;
  double t483;
  double t484;
  double t580;
  double t588;
  double t590;
  double t724;
  double t422;
  double t822;
  double t450;
  double t913;
  double t650;
  double t940;
  double t942;
  double t174;
  double t770;
  double t789;
  double t818;
  double t824;
  double t828;
  double t831;
  double t859;
  double t873;
  double t882;
  double t1020;
  double t945;
  double t954;
  double t965;
  double t970;
  double t978;
  double t979;
  double t980;
  double t989;
  double t1047;
  double t1052;
  double t1056;
  double t1057;
  double t1060;
  double t1066;
  double t1071;
  double t1078;
  double t734;
  double t1084;
  double t704;
  double t1191;
  double t929;
  double t1107;
  double t1110;
  double t917;
  double t341;
  double t359;
  double t300;
  double t318;
  double t500;
  double t521;
  double t548;
  double t551;
  double t568;
  double t569;
  double t578;
  double t407;
  double t408;
  double t424;
  double t436;
  double t458;
  double t462;
  double t466;
  double t894;
  double t903;
  double t923;
  double t924;
  double t933;
  double t934;
  double t935;
  double t1281;
  double t1282;
  double t1283;
  double t1285;
  double t1287;
  double t1290;
  double t608;
  double t642;
  double t710;
  double t719;
  double t736;
  double t752;
  double t762;
  double t1007;
  double t1017;
  double t1021;
  double t1032;
  double t1035;
  double t1043;
  double t1044;
  double t1124;
  double t1297;
  double t1307;
  double t1313;
  double t1095;
  double t1322;
  double t1324;
  double t1327;
  double t1138;
  double t1140;
  double t1331;
  double t1337;
  double t1343;
  double t1206;
  double t1170;
  double t1172;
  double t1212;
  double t1249;
  double t1253;
  double t1239;
  double t1257;
  double t1419;
  double t1284;
  double t1295;
  double t1321;
  double t1329;
  double t1345;
  double t1351;
  double t1359;
  double t1363;
  double t1365;
  double t1370;
  double t1372;
  double t1380;
  double t1382;
  double t1383;
  double t1391;
  double t1392;
  double t1408;
  double t1409;
  double t1410;
  double t1411;
  double t1439;
  double t1486;
  double t1496;
  double t1564;
  double t1571;
  double t1576;
  double t1460;
  double t1609;
  double t1535;
  double t1582;
  double t1588;
  double t1589;
  double t1592;
  double t1596;
  double t1598;
  double t1602;
  double t1603;
  double t1604;
  double t1614;
  double t1621;
  double t1626;
  double t1636;
  double t1651;
  double t1655;
  double t1656;
  double t1657;
  double t1667;
  double t1759;
  double t1843;
  double t1784;
  double t1793;
  double t1798;
  double t1801;
  double t1876;
  double t1882;
  double t1885;
  double t1886;
  double t1822;
  double t1907;
  double t1908;
  double t1913;
  double t1915;
  double t1766;
  double t1963;
  double t1892;
  double t20;
  double t150;
  double t176;
  double t192;
  double t217;
  double t222;
  double t229;
  double t2012;
  double t2018;
  double t2017;
  double t2022;
  double t2024;
  double t2036;
  double t2037;
  double t2040;
  double t2054;
  double t2055;
  double t2061;
  double t2068;
  double t2070;
  double t2072;
  double t2081;
  double t2091;
  double t2096;
  double t2099;
  double t2111;
  double t2118;
  double t2119;
  double t2122;
  double t2143;
  double t2158;
  double t2159;
  double t2160;
  double t2215;
  double t2218;
  double t2219;
  double t2236;
  double t2243;
  double t2245;
  double t2249;
  double t2254;
  double t2257;
  double t2260;
  double t2263;
  double t2269;
  double t2272;
  double t2275;
  double t2282;
  double t2283;
  double t2289;
  double t2293;
  double t2391;
  double t2395;
  double t2396;
  double t2403;
  double t2405;
  double t2407;
  double t2413;
  double t2414;
  double t2421;
  double t2425;
  double t2427;
  double t2429;
  double t2433;
  double t2438;
  double t2442;
  double t2450;
  double t2457;
  double t2458;
  double t2463;
  double t2470;
  double t2471;
  double t1421;
  double t1424;
  double t1428;
  double t2552;
  double t2554;
  double t2563;
  double t2588;
  double t2593;
  double t2601;
  double t2603;
  double t2628;
  double t2630;
  double t2631;
  double t2645;
  double t2646;
  double t2650;
  double t2654;
  double t2655;
  double t2657;
  double t1443;
  double t1454;
  double t1463;
  double t1464;
  double t1473;
  double t1478;
  double t1490;
  double t1491;
  double t1502;
  double t1505;
  double t1509;
  double t1514;
  double t1532;
  double t1533;
  double t1536;
  double t1546;
  double t1548;
  double t1554;
  double t2713;
  double t2714;
  double t2719;
  double t2721;
  double t2722;
  double t2723;
  double t2724;
  double t2731;
  double t2736;
  double t2738;
  double t2749;
  double t2754;
  double t2755;
  double t2759;
  double t2761;
  double t1760;
  double t1764;
  double t1767;
  double t1770;
  double t1779;
  double t1781;
  double t1827;
  double t1836;
  double t1846;
  double t1865;
  double t1869;
  double t1871;
  double t1889;
  double t1890;
  double t1898;
  double t1900;
  double t1902;
  double t1903;
  double t1918;
  double t2837;
  double t2840;
  double t2841;
  double t2846;
  double t2862;
  double t2864;
  double t2872;
  double t2873;
  double t1926;
  double t2884;
  double t2889;
  double t2890;
  double t2891;
  double t1945;
  double t1966;
  double t1976;
  double t1980;
  double t3078;
  double t3079;
  double t3080;
  double t3083;
  double t3086;
  double t3089;
  double t3102;
  double t3104;
  double t3105;
  double t3107;
  double t3115;
  double t3131;
  double t3132;
  double t3140;
  double t3151;
  double t3154;
  double t3160;
  double t3161;
  double t3243;
  double t3246;
  double t3248;
  double t3252;
  double t3253;
  double t3259;
  double t3281;
  double t3282;
  double t3298;
  double t3300;
  double t3309;
  double t3313;
  double t3318;
  double t3320;
  double t3340;
  double t3341;
  double t3352;
  double t3432;
  double t3434;
  double t3435;
  double t3446;
  double t3447;
  double t3461;
  double t3463;
  double t3478;
  double t3483;
  double t3486;
  double t3493;
  double t3498;
  double t3501;
  double t3512;
  double t3517;
  double t3519;
  double t3597;
  double t3599;
  double t3601;
  double t3610;
  double t3618;
  double t3622;
  double t3623;
  double t3635;
  double t3649;
  double t3653;
  double t3654;
  double t3671;
  double t3673;
  double t3677;
  double t3679;
  double t3768;
  double t3769;
  double t3773;
  double t3779;
  double t3782;
  double t3794;
  double t3805;
  double t3806;
  double t3811;
  double t3816;
  double t3819;
  double t3822;
  t115 = Cos(var1[13]);
  t116 = -1.*t115;
  t139 = 1. + t116;
  t173 = Sin(var1[13]);
  t262 = Cos(var1[12]);
  t277 = -1.*t262;
  t287 = 1. + t277;
  t310 = Sin(var1[12]);
  t314 = 0.15121*t310;
  t323 = Sin(var1[4]);
  t152 = 4.e-6*t139;
  t256 = Cos(var1[5]);
  t392 = Sin(var1[5]);
  t208 = -2.8e-11*t139;
  t449 = 7.e-6*t139;
  t627 = Cos(var1[14]);
  t631 = -1.*t627;
  t634 = 1. + t631;
  t670 = Sin(var1[14]);
  t17 = Cos(var1[4]);
  t546 = -1.*t173;
  t565 = -4.e-6*t173;
  t471 = t256*t310*t323;
  t483 = t262*t323*t392;
  t484 = t471 + t483;
  t580 = -1.*t262*t256*t323;
  t588 = t310*t323*t392;
  t590 = t580 + t588;
  t724 = 7.e-6*t634;
  t422 = -7.e-6*t173;
  t822 = -7.e-6*t139;
  t450 = 4.e-6*t173;
  t913 = 4.e-6*t634;
  t650 = -2.8e-11*t634;
  t940 = -1. + t115;
  t942 = 4.e-6*t940;
  t174 = 7.e-6*t173;
  t770 = 2.8e-11*t139;
  t789 = t770 + t546;
  t818 = t17*t789;
  t824 = t822 + t565;
  t828 = t824*t484;
  t831 = -1.000000000016*t139;
  t859 = 1. + t831;
  t873 = t859*t590;
  t882 = t818 + t828 + t873;
  t1020 = 7.e-6*t670;
  t945 = t942 + t422;
  t954 = t17*t945;
  t965 = -6.5e-11*t139;
  t970 = 1. + t965;
  t978 = t970*t484;
  t979 = t822 + t450;
  t980 = t979*t590;
  t989 = t954 + t978 + t980;
  t1047 = -1.000000000049*t139;
  t1052 = 1. + t1047;
  t1056 = t1052*t17;
  t1057 = t942 + t174;
  t1060 = t1057*t484;
  t1066 = t770 + t173;
  t1071 = t1066*t590;
  t1078 = t1056 + t1060 + t1071;
  t734 = -4.e-6*t670;
  t1084 = 2.8e-11*t634;
  t704 = -1.*t670;
  t1191 = -7.e-6*t634;
  t929 = 4.e-6*t670;
  t1107 = -1. + t627;
  t1110 = 4.e-6*t1107;
  t917 = -7.e-6*t670;
  t341 = 0.15121*t287;
  t359 = t341 + t314;
  t300 = -0.15121*t287;
  t318 = t300 + t314;
  t500 = 1.0248489999999998e-12*var1[13];
  t521 = -0.28120900000849935*t139;
  t548 = t208 + t546;
  t551 = -0.038748999993*t548;
  t568 = t449 + t565;
  t569 = -2.123459e-6*t568;
  t578 = t500 + t521 + t551 + t569;
  t407 = -1.4640699999999997e-7*var1[13];
  t408 = -1.38024835e-16*t139;
  t424 = t152 + t422;
  t436 = -0.038748999993*t424;
  t458 = t449 + t450;
  t462 = -0.281209000004*t458;
  t466 = t407 + t408 + t436 + t462;
  t894 = -2.598649999999999e-7*var1[14];
  t903 = -2.3905277499999995e-16*t634;
  t923 = t913 + t917;
  t924 = -0.038922999986*t923;
  t933 = t724 + t929;
  t934 = -0.503149000008*t933;
  t935 = t894 + t903 + t924 + t934;
  t1281 = -1.*t17*t256*t310;
  t1282 = -1.*t262*t17*t392;
  t1283 = t1281 + t1282;
  t1285 = -1.*t262*t17*t256;
  t1287 = t17*t310*t392;
  t1290 = t1285 + t1287;
  t608 = 1.8190549999999993e-12*var1[14];
  t642 = -0.5031490000160505*t634;
  t710 = t650 + t704;
  t719 = -0.038922999986*t710;
  t736 = t724 + t734;
  t752 = -3.6777349999999994e-6*t736;
  t762 = t608 + t642 + t719 + t752;
  t1007 = 1.0394599999999997e-12*var1[14];
  t1017 = -0.03892299998790722*t634;
  t1021 = t913 + t1020;
  t1032 = -3.6777349999999994e-6*t1021;
  t1035 = t650 + t670;
  t1043 = -0.503149000008*t1035;
  t1044 = t1007 + t1017 + t1032 + t1043;
  t1124 = t1110 + t1020;
  t1297 = t979*t1283;
  t1307 = t970*t1290;
  t1313 = t1297 + t1307;
  t1095 = t1084 + t670;
  t1322 = t859*t1283;
  t1324 = t824*t1290;
  t1327 = t1322 + t1324;
  t1138 = -1.000000000049*t634;
  t1140 = 1. + t1138;
  t1331 = t1066*t1283;
  t1337 = t1057*t1290;
  t1343 = t1331 + t1337;
  t1206 = t1191 + t734;
  t1170 = -1.000000000016*t634;
  t1172 = 1. + t1170;
  t1212 = t1084 + t704;
  t1249 = -6.5e-11*t634;
  t1253 = 1. + t1249;
  t1239 = t1191 + t929;
  t1257 = t1110 + t917;
  t1419 = 0.15121*t262;
  t1284 = t578*t1283;
  t1295 = t466*t1290;
  t1321 = t935*t1313;
  t1329 = t762*t1327;
  t1345 = t1044*t1343;
  t1351 = t1124*t1313;
  t1359 = t1095*t1327;
  t1363 = t1140*t1343;
  t1365 = t1351 + t1359 + t1363;
  t1370 = -0.038924*t1365;
  t1372 = t1206*t1313;
  t1380 = t1172*t1327;
  t1382 = t1212*t1343;
  t1383 = t1372 + t1380 + t1382;
  t1391 = -0.80315*t1383;
  t1392 = t1253*t1313;
  t1408 = t1239*t1327;
  t1409 = t1257*t1343;
  t1410 = t1392 + t1408 + t1409;
  t1411 = 0.148705*t1410;
  t1439 = -2.8e-11*t173;
  t1486 = -7.e-6*t115;
  t1496 = 4.e-6*t115;
  t1564 = t262*t17*t256;
  t1571 = -1.*t17*t310*t392;
  t1576 = t1564 + t1571;
  t1460 = 7.e-6*t115;
  t1609 = 2.8e-11*t173;
  t1535 = -4.e-6*t115;
  t1582 = t1486 + t565;
  t1588 = t1582*t323;
  t1589 = -6.5e-11*t173*t1283;
  t1592 = t1496 + t422;
  t1596 = t1592*t1576;
  t1598 = t1588 + t1589 + t1596;
  t1602 = -1.000000000049*t173*t323;
  t1603 = t1460 + t565;
  t1604 = t1603*t1283;
  t1614 = t115 + t1609;
  t1621 = t1614*t1576;
  t1626 = t1602 + t1604 + t1621;
  t1636 = t116 + t1609;
  t1651 = t1636*t323;
  t1655 = t1535 + t422;
  t1656 = t1655*t1283;
  t1657 = -1.000000000016*t173*t1576;
  t1667 = t1651 + t1656 + t1657;
  t1759 = -2.8e-11*t670;
  t1843 = 4.e-6*t627;
  t1784 = t789*t323;
  t1793 = t824*t1283;
  t1798 = t859*t1576;
  t1801 = t1784 + t1793 + t1798;
  t1876 = t945*t323;
  t1882 = t970*t1283;
  t1885 = t979*t1576;
  t1886 = t1876 + t1882 + t1885;
  t1822 = -7.e-6*t627;
  t1907 = t1052*t323;
  t1908 = t1057*t1283;
  t1913 = t1066*t1576;
  t1915 = t1907 + t1908 + t1913;
  t1766 = -4.e-6*t627;
  t1963 = 2.8e-11*t670;
  t1892 = 7.e-6*t627;
  t20 = 5.856279999999999e-13*var1[13];
  t150 = -0.0387489999948987*t139;
  t176 = t152 + t174;
  t192 = -2.123459e-6*t176;
  t217 = t208 + t173;
  t222 = -0.281209000004*t217;
  t229 = t20 + t150 + t192 + t222;
  t2012 = Cos(var1[3]);
  t2018 = Sin(var1[3]);
  t2017 = t2012*t256*t323;
  t2022 = -1.*t2018*t392;
  t2024 = t2017 + t2022;
  t2036 = -1.*t256*t2018;
  t2037 = -1.*t2012*t323*t392;
  t2040 = t2036 + t2037;
  t2054 = -1.*t310*t2024;
  t2055 = t262*t2040;
  t2061 = t2054 + t2055;
  t2068 = t262*t2024;
  t2070 = t310*t2040;
  t2072 = t2068 + t2070;
  t2081 = -1.*t2012*t17*t789;
  t2091 = t824*t2061;
  t2096 = t859*t2072;
  t2099 = t2081 + t2091 + t2096;
  t2111 = -1.*t2012*t17*t945;
  t2118 = t970*t2061;
  t2119 = t979*t2072;
  t2122 = t2111 + t2118 + t2119;
  t2143 = -1.*t1052*t2012*t17;
  t2158 = t1057*t2061;
  t2159 = t1066*t2072;
  t2160 = t2143 + t2158 + t2159;
  t2215 = -1.*t17*t256*t310*t2018;
  t2218 = -1.*t262*t17*t2018*t392;
  t2219 = t2215 + t2218;
  t2236 = t262*t17*t256*t2018;
  t2243 = -1.*t17*t310*t2018*t392;
  t2245 = t2236 + t2243;
  t2249 = t789*t2018*t323;
  t2254 = t824*t2219;
  t2257 = t859*t2245;
  t2260 = t2249 + t2254 + t2257;
  t2263 = t945*t2018*t323;
  t2269 = t970*t2219;
  t2272 = t979*t2245;
  t2275 = t2263 + t2269 + t2272;
  t2282 = t1052*t2018*t323;
  t2283 = t1057*t2219;
  t2289 = t1066*t2245;
  t2293 = t2282 + t2283 + t2289;
  t2391 = -1.*t256*t2018*t323;
  t2395 = -1.*t2012*t392;
  t2396 = t2391 + t2395;
  t2403 = t2012*t256;
  t2405 = -1.*t2018*t323*t392;
  t2407 = t2403 + t2405;
  t2413 = t310*t2396;
  t2414 = t262*t2407;
  t2421 = t2413 + t2414;
  t2425 = t262*t2396;
  t2427 = -1.*t310*t2407;
  t2429 = t2425 + t2427;
  t2433 = t979*t2421;
  t2438 = t970*t2429;
  t2442 = t2433 + t2438;
  t2450 = t859*t2421;
  t2457 = t824*t2429;
  t2458 = t2450 + t2457;
  t2463 = t1066*t2421;
  t2470 = t1057*t2429;
  t2471 = t2463 + t2470;
  t1421 = -0.15121*t310;
  t1424 = t1419 + t1421;
  t1428 = t1419 + t314;
  t2552 = t256*t2018*t323;
  t2554 = t2012*t392;
  t2563 = t2552 + t2554;
  t2588 = -1.*t310*t2563;
  t2593 = t2588 + t2414;
  t2601 = -1.*t262*t2563;
  t2603 = t2601 + t2427;
  t2628 = t979*t2593;
  t2630 = t970*t2603;
  t2631 = t2628 + t2630;
  t2645 = t859*t2593;
  t2646 = t824*t2603;
  t2650 = t2645 + t2646;
  t2654 = t1066*t2593;
  t2655 = t1057*t2603;
  t2657 = t2654 + t2655;
  t1443 = t115 + t1439;
  t1454 = -0.281209000004*t1443;
  t1463 = t1460 + t450;
  t1464 = -2.123459e-6*t1463;
  t1473 = -0.0387489999948987*t173;
  t1478 = 5.856279999999999e-13 + t1454 + t1464 + t1473;
  t1490 = t1486 + t450;
  t1491 = -0.038748999993*t1490;
  t1502 = t1496 + t174;
  t1505 = -0.281209000004*t1502;
  t1509 = -1.38024835e-16*t173;
  t1514 = -1.4640699999999997e-7 + t1491 + t1505 + t1509;
  t1532 = t116 + t1439;
  t1533 = -0.038748999993*t1532;
  t1536 = t1535 + t174;
  t1546 = -2.123459e-6*t1536;
  t1548 = -0.28120900000849935*t173;
  t1554 = 1.0248489999999998e-12 + t1533 + t1546 + t1548;
  t2713 = t262*t2563;
  t2714 = t310*t2407;
  t2719 = t2713 + t2714;
  t2721 = -1.*t17*t1582*t2018;
  t2722 = -6.5e-11*t173*t2593;
  t2723 = t1592*t2719;
  t2724 = t2721 + t2722 + t2723;
  t2731 = 1.000000000049*t17*t173*t2018;
  t2736 = t1603*t2593;
  t2738 = t1614*t2719;
  t2749 = t2731 + t2736 + t2738;
  t2754 = -1.*t17*t1636*t2018;
  t2755 = t1655*t2593;
  t2759 = -1.000000000016*t173*t2719;
  t2761 = t2754 + t2755 + t2759;
  t1760 = t631 + t1759;
  t1764 = -0.038922999986*t1760;
  t1767 = t1766 + t1020;
  t1770 = -3.6777349999999994e-6*t1767;
  t1779 = -0.5031490000160505*t670;
  t1781 = 1.8190549999999993e-12 + t1764 + t1770 + t1779;
  t1827 = t1822 + t929;
  t1836 = -0.038922999986*t1827;
  t1846 = t1843 + t1020;
  t1865 = -0.503149000008*t1846;
  t1869 = -2.3905277499999995e-16*t670;
  t1871 = -2.598649999999999e-7 + t1836 + t1865 + t1869;
  t1889 = t627 + t1759;
  t1890 = -0.503149000008*t1889;
  t1898 = t1892 + t929;
  t1900 = -3.6777349999999994e-6*t1898;
  t1902 = -0.03892299998790722*t670;
  t1903 = 1.0394599999999997e-12 + t1890 + t1900 + t1902;
  t1918 = t1843 + t917;
  t2837 = -1.*t17*t789*t2018;
  t2840 = t824*t2593;
  t2841 = t859*t2719;
  t2846 = t2837 + t2840 + t2841;
  t2862 = -1.*t17*t945*t2018;
  t2864 = t970*t2593;
  t2872 = t979*t2719;
  t2873 = t2862 + t2864 + t2872;
  t1926 = t1822 + t734;
  t2884 = -1.*t1052*t17*t2018;
  t2889 = t1057*t2593;
  t2890 = t1066*t2719;
  t2891 = t2884 + t2889 + t2890;
  t1945 = t1766 + t917;
  t1966 = t631 + t1963;
  t1976 = t627 + t1963;
  t1980 = t1892 + t734;
  t3078 = t2012*t17*t256*t310;
  t3079 = t262*t2012*t17*t392;
  t3080 = t3078 + t3079;
  t3083 = -1.*t262*t2012*t17*t256;
  t3086 = t2012*t17*t310*t392;
  t3089 = t3083 + t3086;
  t3102 = -1.*t2012*t789*t323;
  t3104 = t824*t3080;
  t3105 = t859*t3089;
  t3107 = t3102 + t3104 + t3105;
  t3115 = -1.*t2012*t945*t323;
  t3131 = t970*t3080;
  t3132 = t979*t3089;
  t3140 = t3115 + t3131 + t3132;
  t3151 = -1.*t1052*t2012*t323;
  t3154 = t1057*t3080;
  t3160 = t1066*t3089;
  t3161 = t3151 + t3154 + t3160;
  t3243 = t256*t2018;
  t3246 = t2012*t323*t392;
  t3248 = t3243 + t3246;
  t3252 = t310*t2024;
  t3253 = t262*t3248;
  t3259 = t3252 + t3253;
  t3281 = -1.*t310*t3248;
  t3282 = t2068 + t3281;
  t3298 = t979*t3259;
  t3300 = t970*t3282;
  t3309 = t3298 + t3300;
  t3313 = t859*t3259;
  t3318 = t824*t3282;
  t3320 = t3313 + t3318;
  t3340 = t1066*t3259;
  t3341 = t1057*t3282;
  t3352 = t3340 + t3341;
  t3432 = -1.*t2012*t256*t323;
  t3434 = t2018*t392;
  t3435 = t3432 + t3434;
  t3446 = -1.*t310*t3435;
  t3447 = t3446 + t3253;
  t3461 = -1.*t262*t3435;
  t3463 = t3461 + t3281;
  t3478 = t979*t3447;
  t3483 = t970*t3463;
  t3486 = t3478 + t3483;
  t3493 = t859*t3447;
  t3498 = t824*t3463;
  t3501 = t3493 + t3498;
  t3512 = t1066*t3447;
  t3517 = t1057*t3463;
  t3519 = t3512 + t3517;
  t3597 = t262*t3435;
  t3599 = t310*t3248;
  t3601 = t3597 + t3599;
  t3610 = t2012*t17*t1582;
  t3618 = -6.5e-11*t173*t3447;
  t3622 = t1592*t3601;
  t3623 = t3610 + t3618 + t3622;
  t3635 = -1.000000000049*t2012*t17*t173;
  t3649 = t1603*t3447;
  t3653 = t1614*t3601;
  t3654 = t3635 + t3649 + t3653;
  t3671 = t2012*t17*t1636;
  t3673 = t1655*t3447;
  t3677 = -1.000000000016*t173*t3601;
  t3679 = t3671 + t3673 + t3677;
  t3768 = t2012*t17*t789;
  t3769 = t824*t3447;
  t3773 = t859*t3601;
  t3779 = t3768 + t3769 + t3773;
  t3782 = t2012*t17*t945;
  t3794 = t970*t3447;
  t3805 = t979*t3601;
  t3806 = t3782 + t3794 + t3805;
  t3811 = t1052*t2012*t17;
  t3816 = t1057*t3447;
  t3819 = t1066*t3601;
  t3822 = t3811 + t3816 + t3819;
  p_output1[0]=1.;
  p_output1[1]=t1044*t1078 + t17*t229 - 1.*t256*t318*t323 + t323*t359*t392 + t466*t484 + t578*t590 + t762*t882 + t935*t989 - 0.038924*(t1078*t1140 + t1095*t882 + t1124*t989) - 0.80315*(t1078*t1212 + t1172*t882 + t1206*t989) + 0.148705*(t1078*t1257 + t1239*t882 + t1253*t989);
  p_output1[2]=t1284 + t1295 + t1321 + t1329 + t1345 + t1370 + t1391 + t1411 - 1.*t17*t256*t359 - 1.*t17*t318*t392;
  p_output1[3]=t1284 + t1295 + t1321 + t1329 + t1345 + t1370 + t1391 + t1411 + t1424*t17*t256 - 1.*t1428*t17*t392;
  p_output1[4]=t1283*t1514 + t1554*t1576 + t1044*t1626 - 0.038924*(t1124*t1598 + t1140*t1626 + t1095*t1667) - 0.80315*(t1206*t1598 + t1212*t1626 + t1172*t1667) + 0.148705*(t1253*t1598 + t1257*t1626 + t1239*t1667) + t1478*t323 + t1667*t762 + t1598*t935;
  p_output1[5]=t1781*t1801 + t1871*t1886 + t1903*t1915 - 0.80315*(t1886*t1945 + t1915*t1966 - 1.000000000016*t1801*t670) + 0.148705*(t1801*t1918 + t1915*t1926 - 6.5e-11*t1886*t670) - 0.038924*(t1801*t1976 + t1886*t1980 - 1.000000000049*t1915*t670);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=t1044*t2160 - 0.038924*(t1095*t2099 + t1124*t2122 + t1140*t2160) - 0.80315*(t1172*t2099 + t1206*t2122 + t1212*t2160) + 0.148705*(t1239*t2099 + t1253*t2122 + t1257*t2160) - 1.*t17*t2012*t229 + t2024*t318 + t2040*t359 + t2061*t466 + t2072*t578 + t2099*t762 + t2122*t935;
  p_output1[9]=t1044*t2293 - 0.038924*(t1095*t2260 + t1124*t2275 + t1140*t2293) - 0.80315*(t1172*t2260 + t1206*t2275 + t1212*t2293) + 0.148705*(t1239*t2260 + t1253*t2275 + t1257*t2293) + t17*t2018*t256*t318 + t2018*t229*t323 - 1.*t17*t2018*t359*t392 + t2219*t466 + t2245*t578 + t2260*t762 + t2275*t935;
  p_output1[10]=t1044*t2471 - 0.038924*(t1124*t2442 + t1095*t2458 + t1140*t2471) - 0.80315*(t1206*t2442 + t1172*t2458 + t1212*t2471) + 0.148705*(t1253*t2442 + t1239*t2458 + t1257*t2471) + t2407*t318 + t2396*t359 + t2429*t466 + t2421*t578 + t2458*t762 + t2442*t935;
  p_output1[11]=t1428*t2407 + t1424*t2563 + t1044*t2657 - 0.038924*(t1124*t2631 + t1095*t2650 + t1140*t2657) - 0.80315*(t1206*t2631 + t1172*t2650 + t1212*t2657) + 0.148705*(t1253*t2631 + t1239*t2650 + t1257*t2657) + t2603*t466 + t2593*t578 + t2650*t762 + t2631*t935;
  p_output1[12]=-1.*t1478*t17*t2018 + t1514*t2593 + t1554*t2719 + t1044*t2749 - 0.038924*(t1124*t2724 + t1140*t2749 + t1095*t2761) - 0.80315*(t1206*t2724 + t1212*t2749 + t1172*t2761) + 0.148705*(t1253*t2724 + t1257*t2749 + t1239*t2761) + t2761*t762 + t2724*t935;
  p_output1[13]=t1781*t2846 + t1871*t2873 + t1903*t2891 - 0.80315*(t1945*t2873 + t1966*t2891 - 1.000000000016*t2846*t670) + 0.148705*(t1918*t2846 + t1926*t2891 - 6.5e-11*t2873*t670) - 0.038924*(t1976*t2846 + t1980*t2873 - 1.000000000049*t2891*t670);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=-1.*t17*t2018*t229 + t1044*t2891 - 0.038924*(t1095*t2846 + t1124*t2873 + t1140*t2891) - 0.80315*(t1172*t2846 + t1206*t2873 + t1212*t2891) + 0.148705*(t1239*t2846 + t1253*t2873 + t1257*t2891) + t2563*t318 + t2407*t359 + t2593*t466 + t2719*t578 + t2846*t762 + t2873*t935;
  p_output1[17]=t1044*t3161 - 0.038924*(t1095*t3107 + t1124*t3140 + t1140*t3161) - 0.80315*(t1172*t3107 + t1206*t3140 + t1212*t3161) + 0.148705*(t1239*t3107 + t1253*t3140 + t1257*t3161) - 1.*t17*t2012*t256*t318 - 1.*t2012*t229*t323 + t17*t2012*t359*t392 + t3080*t466 + t3089*t578 + t3107*t762 + t3140*t935;
  p_output1[18]=t318*t3248 + t1044*t3352 - 0.038924*(t1124*t3309 + t1095*t3320 + t1140*t3352) - 0.80315*(t1206*t3309 + t1172*t3320 + t1212*t3352) + 0.148705*(t1253*t3309 + t1239*t3320 + t1257*t3352) + t2024*t359 + t3282*t466 + t3259*t578 + t3320*t762 + t3309*t935;
  p_output1[19]=t1428*t3248 + t1424*t3435 + t1044*t3519 - 0.038924*(t1124*t3486 + t1095*t3501 + t1140*t3519) - 0.80315*(t1206*t3486 + t1172*t3501 + t1212*t3519) + 0.148705*(t1253*t3486 + t1239*t3501 + t1257*t3519) + t3463*t466 + t3447*t578 + t3501*t762 + t3486*t935;
  p_output1[20]=t1478*t17*t2012 + t1514*t3447 + t1554*t3601 + t1044*t3654 - 0.038924*(t1124*t3623 + t1140*t3654 + t1095*t3679) - 0.80315*(t1206*t3623 + t1212*t3654 + t1172*t3679) + 0.148705*(t1253*t3623 + t1257*t3654 + t1239*t3679) + t3679*t762 + t3623*t935;
  p_output1[21]=t1781*t3779 + t1871*t3806 + t1903*t3822 - 0.80315*(t1945*t3806 + t1966*t3822 - 1.000000000016*t3779*t670) + 0.148705*(t1918*t3779 + t1926*t3822 - 6.5e-11*t3806*t670) - 0.038924*(t1976*t3779 + t1980*t3806 - 1.000000000049*t3822*t670);
  p_output1[22]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 23, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_RlFoot_DiagonalStance1.hh"

namespace DiagonalStance1
{

void J_h_RlFoot_DiagonalStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
