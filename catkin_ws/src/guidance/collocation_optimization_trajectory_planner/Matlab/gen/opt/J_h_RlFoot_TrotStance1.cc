/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:16:11 GMT+01:00
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
  double t90;
  double t122;
  double t133;
  double t141;
  double t246;
  double t252;
  double t256;
  double t281;
  double t283;
  double t312;
  double t138;
  double t231;
  double t378;
  double t196;
  double t456;
  double t654;
  double t659;
  double t669;
  double t710;
  double t13;
  double t560;
  double t591;
  double t493;
  double t508;
  double t512;
  double t619;
  double t620;
  double t622;
  double t762;
  double t430;
  double t843;
  double t465;
  double t915;
  double t693;
  double t998;
  double t1003;
  double t151;
  double t813;
  double t819;
  double t828;
  double t856;
  double t857;
  double t859;
  double t867;
  double t871;
  double t872;
  double t1053;
  double t1010;
  double t1015;
  double t1025;
  double t1026;
  double t1033;
  double t1037;
  double t1045;
  double t1047;
  double t1065;
  double t1066;
  double t1077;
  double t1081;
  double t1082;
  double t1083;
  double t1101;
  double t1102;
  double t776;
  double t1110;
  double t722;
  double t1171;
  double t950;
  double t1116;
  double t1118;
  double t922;
  double t345;
  double t351;
  double t272;
  double t297;
  double t516;
  double t522;
  double t569;
  double t588;
  double t604;
  double t610;
  double t614;
  double t412;
  double t427;
  double t450;
  double t455;
  double t466;
  double t473;
  double t488;
  double t892;
  double t906;
  double t936;
  double t937;
  double t971;
  double t985;
  double t990;
  double t1256;
  double t1262;
  double t1268;
  double t1273;
  double t1276;
  double t1278;
  double t651;
  double t673;
  double t747;
  double t753;
  double t782;
  double t802;
  double t812;
  double t1051;
  double t1052;
  double t1057;
  double t1059;
  double t1062;
  double t1063;
  double t1064;
  double t1124;
  double t1281;
  double t1287;
  double t1292;
  double t1112;
  double t1296;
  double t1300;
  double t1302;
  double t1131;
  double t1138;
  double t1305;
  double t1306;
  double t1314;
  double t1172;
  double t1153;
  double t1158;
  double t1200;
  double t1220;
  double t1223;
  double t1217;
  double t1227;
  double t1404;
  double t1269;
  double t1280;
  double t1293;
  double t1304;
  double t1324;
  double t1325;
  double t1326;
  double t1327;
  double t1329;
  double t1330;
  double t1334;
  double t1354;
  double t1356;
  double t1369;
  double t1370;
  double t1373;
  double t1383;
  double t1390;
  double t1399;
  double t1401;
  double t1423;
  double t1468;
  double t1482;
  double t1556;
  double t1558;
  double t1559;
  double t1432;
  double t1612;
  double t1530;
  double t1574;
  double t1577;
  double t1580;
  double t1582;
  double t1584;
  double t1587;
  double t1598;
  double t1600;
  double t1605;
  double t1614;
  double t1621;
  double t1629;
  double t1634;
  double t1647;
  double t1648;
  double t1651;
  double t1659;
  double t1661;
  double t1716;
  double t1788;
  double t1746;
  double t1747;
  double t1756;
  double t1768;
  double t1798;
  double t1812;
  double t1813;
  double t1815;
  double t1776;
  double t1857;
  double t1858;
  double t1872;
  double t1874;
  double t1726;
  double t1925;
  double t1830;
  double t86;
  double t135;
  double t171;
  double t195;
  double t205;
  double t215;
  double t222;
  double t1958;
  double t1986;
  double t1977;
  double t1989;
  double t1990;
  double t1998;
  double t2003;
  double t2004;
  double t2009;
  double t2010;
  double t2012;
  double t2028;
  double t2031;
  double t2034;
  double t2037;
  double t2040;
  double t2059;
  double t2064;
  double t2068;
  double t2081;
  double t2083;
  double t2092;
  double t2099;
  double t2100;
  double t2103;
  double t2110;
  double t2237;
  double t2238;
  double t2240;
  double t2245;
  double t2249;
  double t2250;
  double t2262;
  double t2263;
  double t2264;
  double t2268;
  double t2289;
  double t2292;
  double t2293;
  double t2294;
  double t2309;
  double t2313;
  double t2328;
  double t2334;
  double t2418;
  double t2420;
  double t2423;
  double t2428;
  double t2434;
  double t2437;
  double t2447;
  double t2455;
  double t2456;
  double t2458;
  double t2459;
  double t2462;
  double t2465;
  double t2466;
  double t2468;
  double t2476;
  double t2479;
  double t2484;
  double t2491;
  double t2496;
  double t2498;
  double t1409;
  double t1410;
  double t1413;
  double t2585;
  double t2590;
  double t2592;
  double t2601;
  double t2606;
  double t2611;
  double t2612;
  double t2620;
  double t2623;
  double t2627;
  double t2649;
  double t2653;
  double t2655;
  double t2658;
  double t2663;
  double t2664;
  double t1424;
  double t1427;
  double t1437;
  double t1441;
  double t1454;
  double t1463;
  double t1476;
  double t1479;
  double t1486;
  double t1489;
  double t1490;
  double t1491;
  double t1501;
  double t1507;
  double t1534;
  double t1542;
  double t1553;
  double t1554;
  double t2763;
  double t2766;
  double t2778;
  double t2783;
  double t2784;
  double t2786;
  double t2789;
  double t2792;
  double t2797;
  double t2798;
  double t2799;
  double t2802;
  double t2803;
  double t2804;
  double t2806;
  double t1719;
  double t1723;
  double t1727;
  double t1730;
  double t1735;
  double t1744;
  double t1778;
  double t1783;
  double t1789;
  double t1793;
  double t1795;
  double t1797;
  double t1824;
  double t1828;
  double t1840;
  double t1848;
  double t1851;
  double t1855;
  double t1893;
  double t2883;
  double t2885;
  double t2894;
  double t2896;
  double t2898;
  double t2901;
  double t2902;
  double t2905;
  double t1913;
  double t2908;
  double t2910;
  double t2915;
  double t2917;
  double t1920;
  double t1927;
  double t1942;
  double t1944;
  double t3108;
  double t3115;
  double t3117;
  double t3125;
  double t3129;
  double t3130;
  double t3141;
  double t3151;
  double t3154;
  double t3155;
  double t3163;
  double t3193;
  double t3194;
  double t3197;
  double t3199;
  double t3204;
  double t3205;
  double t3207;
  double t3266;
  double t3267;
  double t3270;
  double t3274;
  double t3292;
  double t3293;
  double t3300;
  double t3302;
  double t3306;
  double t3307;
  double t3316;
  double t3334;
  double t3357;
  double t3366;
  double t3370;
  double t3373;
  double t3376;
  double t3439;
  double t3443;
  double t3445;
  double t3463;
  double t3464;
  double t3469;
  double t3471;
  double t3482;
  double t3483;
  double t3490;
  double t3509;
  double t3511;
  double t3516;
  double t3523;
  double t3524;
  double t3525;
  double t3612;
  double t3613;
  double t3616;
  double t3626;
  double t3629;
  double t3630;
  double t3631;
  double t3634;
  double t3635;
  double t3646;
  double t3650;
  double t3652;
  double t3655;
  double t3662;
  double t3683;
  double t3779;
  double t3783;
  double t3784;
  double t3786;
  double t3789;
  double t3791;
  double t3793;
  double t3794;
  double t3802;
  double t3803;
  double t3813;
  double t3818;
  t90 = Cos(var1[13]);
  t122 = -1.*t90;
  t133 = 1. + t122;
  t141 = Sin(var1[13]);
  t246 = Cos(var1[12]);
  t252 = -1.*t246;
  t256 = 1. + t252;
  t281 = Sin(var1[12]);
  t283 = 0.15121*t281;
  t312 = Sin(var1[4]);
  t138 = 4.e-6*t133;
  t231 = Cos(var1[5]);
  t378 = Sin(var1[5]);
  t196 = -2.8e-11*t133;
  t456 = 7.e-6*t133;
  t654 = Cos(var1[14]);
  t659 = -1.*t654;
  t669 = 1. + t659;
  t710 = Sin(var1[14]);
  t13 = Cos(var1[4]);
  t560 = -1.*t141;
  t591 = -4.e-6*t141;
  t493 = t231*t281*t312;
  t508 = t246*t312*t378;
  t512 = t493 + t508;
  t619 = -1.*t246*t231*t312;
  t620 = t281*t312*t378;
  t622 = t619 + t620;
  t762 = 7.e-6*t669;
  t430 = -7.e-6*t141;
  t843 = -7.e-6*t133;
  t465 = 4.e-6*t141;
  t915 = 4.e-6*t669;
  t693 = -2.8e-11*t669;
  t998 = -1. + t90;
  t1003 = 4.e-6*t998;
  t151 = 7.e-6*t141;
  t813 = 2.8e-11*t133;
  t819 = t813 + t560;
  t828 = t13*t819;
  t856 = t843 + t591;
  t857 = t856*t512;
  t859 = -1.000000000016*t133;
  t867 = 1. + t859;
  t871 = t867*t622;
  t872 = t828 + t857 + t871;
  t1053 = 7.e-6*t710;
  t1010 = t1003 + t430;
  t1015 = t13*t1010;
  t1025 = -6.5e-11*t133;
  t1026 = 1. + t1025;
  t1033 = t1026*t512;
  t1037 = t843 + t465;
  t1045 = t1037*t622;
  t1047 = t1015 + t1033 + t1045;
  t1065 = -1.000000000049*t133;
  t1066 = 1. + t1065;
  t1077 = t1066*t13;
  t1081 = t1003 + t151;
  t1082 = t1081*t512;
  t1083 = t813 + t141;
  t1101 = t1083*t622;
  t1102 = t1077 + t1082 + t1101;
  t776 = -4.e-6*t710;
  t1110 = 2.8e-11*t669;
  t722 = -1.*t710;
  t1171 = -7.e-6*t669;
  t950 = 4.e-6*t710;
  t1116 = -1. + t654;
  t1118 = 4.e-6*t1116;
  t922 = -7.e-6*t710;
  t345 = 0.15121*t256;
  t351 = t345 + t283;
  t272 = -0.15121*t256;
  t297 = t272 + t283;
  t516 = 1.0248489999999998e-12*var1[13];
  t522 = -0.28120900000849935*t133;
  t569 = t196 + t560;
  t588 = -0.038748999993*t569;
  t604 = t456 + t591;
  t610 = -2.123459e-6*t604;
  t614 = t516 + t522 + t588 + t610;
  t412 = -1.4640699999999997e-7*var1[13];
  t427 = -1.38024835e-16*t133;
  t450 = t138 + t430;
  t455 = -0.038748999993*t450;
  t466 = t456 + t465;
  t473 = -0.281209000004*t466;
  t488 = t412 + t427 + t455 + t473;
  t892 = -2.598649999999999e-7*var1[14];
  t906 = -2.3905277499999995e-16*t669;
  t936 = t915 + t922;
  t937 = -0.038922999986*t936;
  t971 = t762 + t950;
  t985 = -0.503149000008*t971;
  t990 = t892 + t906 + t937 + t985;
  t1256 = -1.*t13*t231*t281;
  t1262 = -1.*t246*t13*t378;
  t1268 = t1256 + t1262;
  t1273 = -1.*t246*t13*t231;
  t1276 = t13*t281*t378;
  t1278 = t1273 + t1276;
  t651 = 1.8190549999999993e-12*var1[14];
  t673 = -0.5031490000160505*t669;
  t747 = t693 + t722;
  t753 = -0.038922999986*t747;
  t782 = t762 + t776;
  t802 = -3.6777349999999994e-6*t782;
  t812 = t651 + t673 + t753 + t802;
  t1051 = 1.0394599999999997e-12*var1[14];
  t1052 = -0.03892299998790722*t669;
  t1057 = t915 + t1053;
  t1059 = -3.6777349999999994e-6*t1057;
  t1062 = t693 + t710;
  t1063 = -0.503149000008*t1062;
  t1064 = t1051 + t1052 + t1059 + t1063;
  t1124 = t1118 + t1053;
  t1281 = t1037*t1268;
  t1287 = t1026*t1278;
  t1292 = t1281 + t1287;
  t1112 = t1110 + t710;
  t1296 = t867*t1268;
  t1300 = t856*t1278;
  t1302 = t1296 + t1300;
  t1131 = -1.000000000049*t669;
  t1138 = 1. + t1131;
  t1305 = t1083*t1268;
  t1306 = t1081*t1278;
  t1314 = t1305 + t1306;
  t1172 = t1171 + t776;
  t1153 = -1.000000000016*t669;
  t1158 = 1. + t1153;
  t1200 = t1110 + t722;
  t1220 = -6.5e-11*t669;
  t1223 = 1. + t1220;
  t1217 = t1171 + t950;
  t1227 = t1118 + t922;
  t1404 = 0.15121*t246;
  t1269 = t614*t1268;
  t1280 = t488*t1278;
  t1293 = t990*t1292;
  t1304 = t812*t1302;
  t1324 = t1064*t1314;
  t1325 = t1124*t1292;
  t1326 = t1112*t1302;
  t1327 = t1138*t1314;
  t1329 = t1325 + t1326 + t1327;
  t1330 = -0.038924*t1329;
  t1334 = t1172*t1292;
  t1354 = t1158*t1302;
  t1356 = t1200*t1314;
  t1369 = t1334 + t1354 + t1356;
  t1370 = -0.80315*t1369;
  t1373 = t1223*t1292;
  t1383 = t1217*t1302;
  t1390 = t1227*t1314;
  t1399 = t1373 + t1383 + t1390;
  t1401 = 0.148705*t1399;
  t1423 = -2.8e-11*t141;
  t1468 = -7.e-6*t90;
  t1482 = 4.e-6*t90;
  t1556 = t246*t13*t231;
  t1558 = -1.*t13*t281*t378;
  t1559 = t1556 + t1558;
  t1432 = 7.e-6*t90;
  t1612 = 2.8e-11*t141;
  t1530 = -4.e-6*t90;
  t1574 = t1468 + t591;
  t1577 = t1574*t312;
  t1580 = -6.5e-11*t141*t1268;
  t1582 = t1482 + t430;
  t1584 = t1582*t1559;
  t1587 = t1577 + t1580 + t1584;
  t1598 = -1.000000000049*t141*t312;
  t1600 = t1432 + t591;
  t1605 = t1600*t1268;
  t1614 = t90 + t1612;
  t1621 = t1614*t1559;
  t1629 = t1598 + t1605 + t1621;
  t1634 = t122 + t1612;
  t1647 = t1634*t312;
  t1648 = t1530 + t430;
  t1651 = t1648*t1268;
  t1659 = -1.000000000016*t141*t1559;
  t1661 = t1647 + t1651 + t1659;
  t1716 = -2.8e-11*t710;
  t1788 = 4.e-6*t654;
  t1746 = t819*t312;
  t1747 = t856*t1268;
  t1756 = t867*t1559;
  t1768 = t1746 + t1747 + t1756;
  t1798 = t1010*t312;
  t1812 = t1026*t1268;
  t1813 = t1037*t1559;
  t1815 = t1798 + t1812 + t1813;
  t1776 = -7.e-6*t654;
  t1857 = t1066*t312;
  t1858 = t1081*t1268;
  t1872 = t1083*t1559;
  t1874 = t1857 + t1858 + t1872;
  t1726 = -4.e-6*t654;
  t1925 = 2.8e-11*t710;
  t1830 = 7.e-6*t654;
  t86 = 5.856279999999999e-13*var1[13];
  t135 = -0.0387489999948987*t133;
  t171 = t138 + t151;
  t195 = -2.123459e-6*t171;
  t205 = t196 + t141;
  t215 = -0.281209000004*t205;
  t222 = t86 + t135 + t195 + t215;
  t1958 = Cos(var1[3]);
  t1986 = Sin(var1[3]);
  t1977 = t1958*t231*t312;
  t1989 = -1.*t1986*t378;
  t1990 = t1977 + t1989;
  t1998 = -1.*t231*t1986;
  t2003 = -1.*t1958*t312*t378;
  t2004 = t1998 + t2003;
  t2009 = -1.*t281*t1990;
  t2010 = t246*t2004;
  t2012 = t2009 + t2010;
  t2028 = t246*t1990;
  t2031 = t281*t2004;
  t2034 = t2028 + t2031;
  t2037 = -1.*t1958*t13*t819;
  t2040 = t856*t2012;
  t2059 = t867*t2034;
  t2064 = t2037 + t2040 + t2059;
  t2068 = -1.*t1958*t13*t1010;
  t2081 = t1026*t2012;
  t2083 = t1037*t2034;
  t2092 = t2068 + t2081 + t2083;
  t2099 = -1.*t1066*t1958*t13;
  t2100 = t1081*t2012;
  t2103 = t1083*t2034;
  t2110 = t2099 + t2100 + t2103;
  t2237 = -1.*t13*t231*t281*t1986;
  t2238 = -1.*t246*t13*t1986*t378;
  t2240 = t2237 + t2238;
  t2245 = t246*t13*t231*t1986;
  t2249 = -1.*t13*t281*t1986*t378;
  t2250 = t2245 + t2249;
  t2262 = t819*t1986*t312;
  t2263 = t856*t2240;
  t2264 = t867*t2250;
  t2268 = t2262 + t2263 + t2264;
  t2289 = t1010*t1986*t312;
  t2292 = t1026*t2240;
  t2293 = t1037*t2250;
  t2294 = t2289 + t2292 + t2293;
  t2309 = t1066*t1986*t312;
  t2313 = t1081*t2240;
  t2328 = t1083*t2250;
  t2334 = t2309 + t2313 + t2328;
  t2418 = -1.*t231*t1986*t312;
  t2420 = -1.*t1958*t378;
  t2423 = t2418 + t2420;
  t2428 = t1958*t231;
  t2434 = -1.*t1986*t312*t378;
  t2437 = t2428 + t2434;
  t2447 = t281*t2423;
  t2455 = t246*t2437;
  t2456 = t2447 + t2455;
  t2458 = t246*t2423;
  t2459 = -1.*t281*t2437;
  t2462 = t2458 + t2459;
  t2465 = t1037*t2456;
  t2466 = t1026*t2462;
  t2468 = t2465 + t2466;
  t2476 = t867*t2456;
  t2479 = t856*t2462;
  t2484 = t2476 + t2479;
  t2491 = t1083*t2456;
  t2496 = t1081*t2462;
  t2498 = t2491 + t2496;
  t1409 = -0.15121*t281;
  t1410 = t1404 + t1409;
  t1413 = t1404 + t283;
  t2585 = t231*t1986*t312;
  t2590 = t1958*t378;
  t2592 = t2585 + t2590;
  t2601 = -1.*t281*t2592;
  t2606 = t2601 + t2455;
  t2611 = -1.*t246*t2592;
  t2612 = t2611 + t2459;
  t2620 = t1037*t2606;
  t2623 = t1026*t2612;
  t2627 = t2620 + t2623;
  t2649 = t867*t2606;
  t2653 = t856*t2612;
  t2655 = t2649 + t2653;
  t2658 = t1083*t2606;
  t2663 = t1081*t2612;
  t2664 = t2658 + t2663;
  t1424 = t90 + t1423;
  t1427 = -0.281209000004*t1424;
  t1437 = t1432 + t465;
  t1441 = -2.123459e-6*t1437;
  t1454 = -0.0387489999948987*t141;
  t1463 = 5.856279999999999e-13 + t1427 + t1441 + t1454;
  t1476 = t1468 + t465;
  t1479 = -0.038748999993*t1476;
  t1486 = t1482 + t151;
  t1489 = -0.281209000004*t1486;
  t1490 = -1.38024835e-16*t141;
  t1491 = -1.4640699999999997e-7 + t1479 + t1489 + t1490;
  t1501 = t122 + t1423;
  t1507 = -0.038748999993*t1501;
  t1534 = t1530 + t151;
  t1542 = -2.123459e-6*t1534;
  t1553 = -0.28120900000849935*t141;
  t1554 = 1.0248489999999998e-12 + t1507 + t1542 + t1553;
  t2763 = t246*t2592;
  t2766 = t281*t2437;
  t2778 = t2763 + t2766;
  t2783 = -1.*t13*t1574*t1986;
  t2784 = -6.5e-11*t141*t2606;
  t2786 = t1582*t2778;
  t2789 = t2783 + t2784 + t2786;
  t2792 = 1.000000000049*t13*t141*t1986;
  t2797 = t1600*t2606;
  t2798 = t1614*t2778;
  t2799 = t2792 + t2797 + t2798;
  t2802 = -1.*t13*t1634*t1986;
  t2803 = t1648*t2606;
  t2804 = -1.000000000016*t141*t2778;
  t2806 = t2802 + t2803 + t2804;
  t1719 = t659 + t1716;
  t1723 = -0.038922999986*t1719;
  t1727 = t1726 + t1053;
  t1730 = -3.6777349999999994e-6*t1727;
  t1735 = -0.5031490000160505*t710;
  t1744 = 1.8190549999999993e-12 + t1723 + t1730 + t1735;
  t1778 = t1776 + t950;
  t1783 = -0.038922999986*t1778;
  t1789 = t1788 + t1053;
  t1793 = -0.503149000008*t1789;
  t1795 = -2.3905277499999995e-16*t710;
  t1797 = -2.598649999999999e-7 + t1783 + t1793 + t1795;
  t1824 = t654 + t1716;
  t1828 = -0.503149000008*t1824;
  t1840 = t1830 + t950;
  t1848 = -3.6777349999999994e-6*t1840;
  t1851 = -0.03892299998790722*t710;
  t1855 = 1.0394599999999997e-12 + t1828 + t1848 + t1851;
  t1893 = t1788 + t922;
  t2883 = -1.*t13*t819*t1986;
  t2885 = t856*t2606;
  t2894 = t867*t2778;
  t2896 = t2883 + t2885 + t2894;
  t2898 = -1.*t13*t1010*t1986;
  t2901 = t1026*t2606;
  t2902 = t1037*t2778;
  t2905 = t2898 + t2901 + t2902;
  t1913 = t1776 + t776;
  t2908 = -1.*t1066*t13*t1986;
  t2910 = t1081*t2606;
  t2915 = t1083*t2778;
  t2917 = t2908 + t2910 + t2915;
  t1920 = t1726 + t922;
  t1927 = t659 + t1925;
  t1942 = t654 + t1925;
  t1944 = t1830 + t776;
  t3108 = t1958*t13*t231*t281;
  t3115 = t246*t1958*t13*t378;
  t3117 = t3108 + t3115;
  t3125 = -1.*t246*t1958*t13*t231;
  t3129 = t1958*t13*t281*t378;
  t3130 = t3125 + t3129;
  t3141 = -1.*t1958*t819*t312;
  t3151 = t856*t3117;
  t3154 = t867*t3130;
  t3155 = t3141 + t3151 + t3154;
  t3163 = -1.*t1958*t1010*t312;
  t3193 = t1026*t3117;
  t3194 = t1037*t3130;
  t3197 = t3163 + t3193 + t3194;
  t3199 = -1.*t1066*t1958*t312;
  t3204 = t1081*t3117;
  t3205 = t1083*t3130;
  t3207 = t3199 + t3204 + t3205;
  t3266 = t231*t1986;
  t3267 = t1958*t312*t378;
  t3270 = t3266 + t3267;
  t3274 = t281*t1990;
  t3292 = t246*t3270;
  t3293 = t3274 + t3292;
  t3300 = -1.*t281*t3270;
  t3302 = t2028 + t3300;
  t3306 = t1037*t3293;
  t3307 = t1026*t3302;
  t3316 = t3306 + t3307;
  t3334 = t867*t3293;
  t3357 = t856*t3302;
  t3366 = t3334 + t3357;
  t3370 = t1083*t3293;
  t3373 = t1081*t3302;
  t3376 = t3370 + t3373;
  t3439 = -1.*t1958*t231*t312;
  t3443 = t1986*t378;
  t3445 = t3439 + t3443;
  t3463 = -1.*t281*t3445;
  t3464 = t3463 + t3292;
  t3469 = -1.*t246*t3445;
  t3471 = t3469 + t3300;
  t3482 = t1037*t3464;
  t3483 = t1026*t3471;
  t3490 = t3482 + t3483;
  t3509 = t867*t3464;
  t3511 = t856*t3471;
  t3516 = t3509 + t3511;
  t3523 = t1083*t3464;
  t3524 = t1081*t3471;
  t3525 = t3523 + t3524;
  t3612 = t246*t3445;
  t3613 = t281*t3270;
  t3616 = t3612 + t3613;
  t3626 = t1958*t13*t1574;
  t3629 = -6.5e-11*t141*t3464;
  t3630 = t1582*t3616;
  t3631 = t3626 + t3629 + t3630;
  t3634 = -1.000000000049*t1958*t13*t141;
  t3635 = t1600*t3464;
  t3646 = t1614*t3616;
  t3650 = t3634 + t3635 + t3646;
  t3652 = t1958*t13*t1634;
  t3655 = t1648*t3464;
  t3662 = -1.000000000016*t141*t3616;
  t3683 = t3652 + t3655 + t3662;
  t3779 = t1958*t13*t819;
  t3783 = t856*t3464;
  t3784 = t867*t3616;
  t3786 = t3779 + t3783 + t3784;
  t3789 = t1958*t13*t1010;
  t3791 = t1026*t3464;
  t3793 = t1037*t3616;
  t3794 = t3789 + t3791 + t3793;
  t3802 = t1066*t1958*t13;
  t3803 = t1081*t3464;
  t3813 = t1083*t3616;
  t3818 = t3802 + t3803 + t3813;
  p_output1[0]=1.;
  p_output1[1]=t1064*t1102 + t13*t222 - 1.*t231*t297*t312 + t312*t351*t378 + t488*t512 + t614*t622 + t812*t872 - 0.038924*(t1047*t1124 + t1102*t1138 + t1112*t872) - 0.80315*(t1047*t1172 + t1102*t1200 + t1158*t872) + 0.148705*(t1047*t1223 + t1102*t1227 + t1217*t872) + t1047*t990;
  p_output1[2]=t1269 + t1280 + t1293 + t1304 + t1324 + t1330 + t1370 + t1401 - 1.*t13*t231*t351 - 1.*t13*t297*t378;
  p_output1[3]=t1269 + t1280 + t1293 + t1304 + t1324 + t1330 + t1370 + t1401 + t13*t1410*t231 - 1.*t13*t1413*t378;
  p_output1[4]=t1268*t1491 + t1554*t1559 + t1064*t1629 - 0.038924*(t1124*t1587 + t1138*t1629 + t1112*t1661) - 0.80315*(t1172*t1587 + t1200*t1629 + t1158*t1661) + 0.148705*(t1223*t1587 + t1227*t1629 + t1217*t1661) + t1463*t312 + t1661*t812 + t1587*t990;
  p_output1[5]=t1744*t1768 + t1797*t1815 + t1855*t1874 - 0.80315*(t1815*t1920 + t1874*t1927 - 1.000000000016*t1768*t710) + 0.148705*(t1768*t1893 + t1874*t1913 - 6.5e-11*t1815*t710) - 0.038924*(t1768*t1942 + t1815*t1944 - 1.000000000049*t1874*t710);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=t1064*t2110 - 0.038924*(t1112*t2064 + t1124*t2092 + t1138*t2110) - 0.80315*(t1158*t2064 + t1172*t2092 + t1200*t2110) + 0.148705*(t1217*t2064 + t1223*t2092 + t1227*t2110) - 1.*t13*t1958*t222 + t1990*t297 + t2004*t351 + t2012*t488 + t2034*t614 + t2064*t812 + t2092*t990;
  p_output1[9]=t1064*t2334 - 0.038924*(t1112*t2268 + t1124*t2294 + t1138*t2334) - 0.80315*(t1158*t2268 + t1172*t2294 + t1200*t2334) + 0.148705*(t1217*t2268 + t1223*t2294 + t1227*t2334) + t13*t1986*t231*t297 + t1986*t222*t312 - 1.*t13*t1986*t351*t378 + t2240*t488 + t2250*t614 + t2268*t812 + t2294*t990;
  p_output1[10]=t1064*t2498 - 0.038924*(t1124*t2468 + t1112*t2484 + t1138*t2498) - 0.80315*(t1172*t2468 + t1158*t2484 + t1200*t2498) + 0.148705*(t1223*t2468 + t1217*t2484 + t1227*t2498) + t2437*t297 + t2423*t351 + t2462*t488 + t2456*t614 + t2484*t812 + t2468*t990;
  p_output1[11]=t1413*t2437 + t1410*t2592 + t1064*t2664 - 0.038924*(t1124*t2627 + t1112*t2655 + t1138*t2664) - 0.80315*(t1172*t2627 + t1158*t2655 + t1200*t2664) + 0.148705*(t1223*t2627 + t1217*t2655 + t1227*t2664) + t2612*t488 + t2606*t614 + t2655*t812 + t2627*t990;
  p_output1[12]=-1.*t13*t1463*t1986 + t1491*t2606 + t1554*t2778 + t1064*t2799 - 0.038924*(t1124*t2789 + t1138*t2799 + t1112*t2806) - 0.80315*(t1172*t2789 + t1200*t2799 + t1158*t2806) + 0.148705*(t1223*t2789 + t1227*t2799 + t1217*t2806) + t2806*t812 + t2789*t990;
  p_output1[13]=t1744*t2896 + t1797*t2905 + t1855*t2917 - 0.80315*(t1920*t2905 + t1927*t2917 - 1.000000000016*t2896*t710) + 0.148705*(t1893*t2896 + t1913*t2917 - 6.5e-11*t2905*t710) - 0.038924*(t1942*t2896 + t1944*t2905 - 1.000000000049*t2917*t710);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=-1.*t13*t1986*t222 + t1064*t2917 - 0.038924*(t1112*t2896 + t1124*t2905 + t1138*t2917) - 0.80315*(t1158*t2896 + t1172*t2905 + t1200*t2917) + 0.148705*(t1217*t2896 + t1223*t2905 + t1227*t2917) + t2592*t297 + t2437*t351 + t2606*t488 + t2778*t614 + t2896*t812 + t2905*t990;
  p_output1[17]=-1.*t13*t1958*t231*t297 - 1.*t1958*t222*t312 + t1064*t3207 - 0.038924*(t1112*t3155 + t1124*t3197 + t1138*t3207) - 0.80315*(t1158*t3155 + t1172*t3197 + t1200*t3207) + 0.148705*(t1217*t3155 + t1223*t3197 + t1227*t3207) + t13*t1958*t351*t378 + t3117*t488 + t3130*t614 + t3155*t812 + t3197*t990;
  p_output1[18]=t297*t3270 + t1064*t3376 - 0.038924*(t1124*t3316 + t1112*t3366 + t1138*t3376) - 0.80315*(t1172*t3316 + t1158*t3366 + t1200*t3376) + 0.148705*(t1223*t3316 + t1217*t3366 + t1227*t3376) + t1990*t351 + t3302*t488 + t3293*t614 + t3366*t812 + t3316*t990;
  p_output1[19]=t1413*t3270 + t1410*t3445 + t1064*t3525 - 0.038924*(t1124*t3490 + t1112*t3516 + t1138*t3525) - 0.80315*(t1172*t3490 + t1158*t3516 + t1200*t3525) + 0.148705*(t1223*t3490 + t1217*t3516 + t1227*t3525) + t3471*t488 + t3464*t614 + t3516*t812 + t3490*t990;
  p_output1[20]=t13*t1463*t1958 + t1491*t3464 + t1554*t3616 + t1064*t3650 - 0.038924*(t1124*t3631 + t1138*t3650 + t1112*t3683) - 0.80315*(t1172*t3631 + t1200*t3650 + t1158*t3683) + 0.148705*(t1223*t3631 + t1227*t3650 + t1217*t3683) + t3683*t812 + t3631*t990;
  p_output1[21]=t1744*t3786 + t1797*t3794 + t1855*t3818 - 0.80315*(t1920*t3794 + t1927*t3818 - 1.000000000016*t3786*t710) + 0.148705*(t1893*t3786 + t1913*t3818 - 6.5e-11*t3794*t710) - 0.038924*(t1942*t3786 + t1944*t3794 - 1.000000000049*t3818*t710);
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

#include "J_h_RlFoot_TrotStance1.hh"

namespace TrotStance1
{

void J_h_RlFoot_TrotStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
