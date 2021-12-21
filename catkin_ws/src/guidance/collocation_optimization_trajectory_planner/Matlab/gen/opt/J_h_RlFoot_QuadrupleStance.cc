/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 22:33:26 GMT+01:00
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
  double t83;
  double t88;
  double t100;
  double t126;
  double t179;
  double t180;
  double t181;
  double t189;
  double t195;
  double t214;
  double t122;
  double t167;
  double t285;
  double t146;
  double t344;
  double t494;
  double t503;
  double t504;
  double t548;
  double t35;
  double t435;
  double t446;
  double t392;
  double t398;
  double t413;
  double t477;
  double t479;
  double t485;
  double t583;
  double t325;
  double t617;
  double t346;
  double t681;
  double t537;
  double t738;
  double t741;
  double t127;
  double t601;
  double t610;
  double t616;
  double t621;
  double t623;
  double t625;
  double t631;
  double t636;
  double t641;
  double t785;
  double t746;
  double t751;
  double t753;
  double t758;
  double t760;
  double t770;
  double t773;
  double t775;
  double t811;
  double t814;
  double t817;
  double t818;
  double t819;
  double t822;
  double t830;
  double t833;
  double t593;
  double t841;
  double t562;
  double t900;
  double t707;
  double t851;
  double t860;
  double t688;
  double t248;
  double t259;
  double t188;
  double t196;
  double t423;
  double t430;
  double t439;
  double t444;
  double t447;
  double t466;
  double t468;
  double t303;
  double t308;
  double t331;
  double t336;
  double t350;
  double t351;
  double t384;
  double t651;
  double t673;
  double t693;
  double t695;
  double t715;
  double t716;
  double t731;
  double t969;
  double t973;
  double t974;
  double t981;
  double t982;
  double t985;
  double t487;
  double t521;
  double t566;
  double t567;
  double t595;
  double t597;
  double t598;
  double t777;
  double t782;
  double t790;
  double t792;
  double t799;
  double t802;
  double t807;
  double t871;
  double t992;
  double t993;
  double t995;
  double t843;
  double t1001;
  double t1007;
  double t1008;
  double t875;
  double t877;
  double t1023;
  double t1027;
  double t1039;
  double t901;
  double t891;
  double t896;
  double t914;
  double t927;
  double t936;
  double t920;
  double t939;
  double t1117;
  double t980;
  double t991;
  double t1000;
  double t1014;
  double t1044;
  double t1047;
  double t1048;
  double t1053;
  double t1057;
  double t1072;
  double t1073;
  double t1078;
  double t1084;
  double t1085;
  double t1087;
  double t1089;
  double t1105;
  double t1106;
  double t1107;
  double t1111;
  double t1167;
  double t1193;
  double t1205;
  double t1236;
  double t1237;
  double t1240;
  double t1183;
  double t1265;
  double t1227;
  double t1242;
  double t1245;
  double t1249;
  double t1251;
  double t1253;
  double t1256;
  double t1260;
  double t1263;
  double t1264;
  double t1268;
  double t1273;
  double t1277;
  double t1292;
  double t1293;
  double t1298;
  double t1302;
  double t1303;
  double t1305;
  double t1357;
  double t1419;
  double t1383;
  double t1385;
  double t1388;
  double t1392;
  double t1440;
  double t1442;
  double t1443;
  double t1444;
  double t1401;
  double t1462;
  double t1474;
  double t1480;
  double t1483;
  double t1365;
  double t1559;
  double t1455;
  double t37;
  double t118;
  double t133;
  double t145;
  double t148;
  double t155;
  double t157;
  double t1644;
  double t1658;
  double t1654;
  double t1664;
  double t1673;
  double t1682;
  double t1684;
  double t1692;
  double t1711;
  double t1712;
  double t1713;
  double t1731;
  double t1737;
  double t1745;
  double t1752;
  double t1754;
  double t1759;
  double t1760;
  double t1771;
  double t1774;
  double t1776;
  double t1785;
  double t1799;
  double t1807;
  double t1808;
  double t1809;
  double t1894;
  double t1905;
  double t1908;
  double t1916;
  double t1936;
  double t1938;
  double t1964;
  double t1966;
  double t1973;
  double t1975;
  double t1990;
  double t1991;
  double t1992;
  double t1993;
  double t2002;
  double t2013;
  double t2014;
  double t2015;
  double t2066;
  double t2067;
  double t2069;
  double t2079;
  double t2087;
  double t2088;
  double t2097;
  double t2101;
  double t2104;
  double t2106;
  double t2107;
  double t2108;
  double t2110;
  double t2118;
  double t2124;
  double t2130;
  double t2135;
  double t2140;
  double t2145;
  double t2149;
  double t2151;
  double t1119;
  double t1120;
  double t1138;
  double t2247;
  double t2252;
  double t2257;
  double t2269;
  double t2274;
  double t2287;
  double t2288;
  double t2306;
  double t2311;
  double t2312;
  double t2316;
  double t2319;
  double t2320;
  double t2322;
  double t2327;
  double t2328;
  double t1170;
  double t1178;
  double t1184;
  double t1189;
  double t1190;
  double t1191;
  double t1195;
  double t1196;
  double t1208;
  double t1209;
  double t1215;
  double t1216;
  double t1223;
  double t1226;
  double t1228;
  double t1230;
  double t1231;
  double t1234;
  double t2439;
  double t2440;
  double t2441;
  double t2451;
  double t2452;
  double t2456;
  double t2457;
  double t2475;
  double t2478;
  double t2480;
  double t2486;
  double t2490;
  double t2491;
  double t2492;
  double t2497;
  double t1361;
  double t1363;
  double t1366;
  double t1373;
  double t1376;
  double t1377;
  double t1405;
  double t1413;
  double t1425;
  double t1427;
  double t1428;
  double t1435;
  double t1451;
  double t1454;
  double t1457;
  double t1458;
  double t1460;
  double t1461;
  double t1491;
  double t2603;
  double t2604;
  double t2609;
  double t2612;
  double t2624;
  double t2625;
  double t2629;
  double t2639;
  double t1516;
  double t2643;
  double t2645;
  double t2648;
  double t2658;
  double t1545;
  double t1573;
  double t1602;
  double t1609;
  double t2814;
  double t2816;
  double t2819;
  double t2841;
  double t2843;
  double t2846;
  double t2853;
  double t2856;
  double t2862;
  double t2876;
  double t2889;
  double t2891;
  double t2899;
  double t2911;
  double t2921;
  double t2929;
  double t2930;
  double t2931;
  double t3083;
  double t3110;
  double t3111;
  double t3117;
  double t3131;
  double t3152;
  double t3166;
  double t3186;
  double t3195;
  double t3203;
  double t3233;
  double t3246;
  double t3252;
  double t3256;
  double t3265;
  double t3267;
  double t3268;
  double t3409;
  double t3410;
  double t3429;
  double t3457;
  double t3464;
  double t3509;
  double t3521;
  double t3539;
  double t3554;
  double t3557;
  double t3564;
  double t3567;
  double t3571;
  double t3578;
  double t3581;
  double t3585;
  double t3757;
  double t3761;
  double t3762;
  double t3769;
  double t3773;
  double t3805;
  double t3812;
  double t3819;
  double t3820;
  double t3822;
  double t3825;
  double t3833;
  double t3834;
  double t3843;
  double t3844;
  double t3966;
  double t3973;
  double t3977;
  double t3982;
  double t4004;
  double t4005;
  double t4008;
  double t4009;
  double t4022;
  double t4023;
  double t4024;
  double t4025;
  t83 = Cos(var1[13]);
  t88 = -1.*t83;
  t100 = 1. + t88;
  t126 = Sin(var1[13]);
  t179 = Cos(var1[12]);
  t180 = -1.*t179;
  t181 = 1. + t180;
  t189 = Sin(var1[12]);
  t195 = 0.15121*t189;
  t214 = Sin(var1[4]);
  t122 = 4.e-6*t100;
  t167 = Cos(var1[5]);
  t285 = Sin(var1[5]);
  t146 = -2.8e-11*t100;
  t344 = 7.e-6*t100;
  t494 = Cos(var1[14]);
  t503 = -1.*t494;
  t504 = 1. + t503;
  t548 = Sin(var1[14]);
  t35 = Cos(var1[4]);
  t435 = -1.*t126;
  t446 = -4.e-6*t126;
  t392 = t167*t189*t214;
  t398 = t179*t214*t285;
  t413 = t392 + t398;
  t477 = -1.*t179*t167*t214;
  t479 = t189*t214*t285;
  t485 = t477 + t479;
  t583 = 7.e-6*t504;
  t325 = -7.e-6*t126;
  t617 = -7.e-6*t100;
  t346 = 4.e-6*t126;
  t681 = 4.e-6*t504;
  t537 = -2.8e-11*t504;
  t738 = -1. + t83;
  t741 = 4.e-6*t738;
  t127 = 7.e-6*t126;
  t601 = 2.8e-11*t100;
  t610 = t601 + t435;
  t616 = t35*t610;
  t621 = t617 + t446;
  t623 = t621*t413;
  t625 = -1.000000000016*t100;
  t631 = 1. + t625;
  t636 = t631*t485;
  t641 = t616 + t623 + t636;
  t785 = 7.e-6*t548;
  t746 = t741 + t325;
  t751 = t35*t746;
  t753 = -6.5e-11*t100;
  t758 = 1. + t753;
  t760 = t758*t413;
  t770 = t617 + t346;
  t773 = t770*t485;
  t775 = t751 + t760 + t773;
  t811 = -1.000000000049*t100;
  t814 = 1. + t811;
  t817 = t814*t35;
  t818 = t741 + t127;
  t819 = t818*t413;
  t822 = t601 + t126;
  t830 = t822*t485;
  t833 = t817 + t819 + t830;
  t593 = -4.e-6*t548;
  t841 = 2.8e-11*t504;
  t562 = -1.*t548;
  t900 = -7.e-6*t504;
  t707 = 4.e-6*t548;
  t851 = -1. + t494;
  t860 = 4.e-6*t851;
  t688 = -7.e-6*t548;
  t248 = 0.15121*t181;
  t259 = t248 + t195;
  t188 = -0.15121*t181;
  t196 = t188 + t195;
  t423 = 1.0248489999999998e-12*var1[13];
  t430 = -0.28120900000849935*t100;
  t439 = t146 + t435;
  t444 = -0.038748999993*t439;
  t447 = t344 + t446;
  t466 = -2.123459e-6*t447;
  t468 = t423 + t430 + t444 + t466;
  t303 = -1.4640699999999997e-7*var1[13];
  t308 = -1.38024835e-16*t100;
  t331 = t122 + t325;
  t336 = -0.038748999993*t331;
  t350 = t344 + t346;
  t351 = -0.281209000004*t350;
  t384 = t303 + t308 + t336 + t351;
  t651 = -2.598649999999999e-7*var1[14];
  t673 = -2.3905277499999995e-16*t504;
  t693 = t681 + t688;
  t695 = -0.038922999986*t693;
  t715 = t583 + t707;
  t716 = -0.503149000008*t715;
  t731 = t651 + t673 + t695 + t716;
  t969 = -1.*t35*t167*t189;
  t973 = -1.*t179*t35*t285;
  t974 = t969 + t973;
  t981 = -1.*t179*t35*t167;
  t982 = t35*t189*t285;
  t985 = t981 + t982;
  t487 = 1.8190549999999993e-12*var1[14];
  t521 = -0.5031490000160505*t504;
  t566 = t537 + t562;
  t567 = -0.038922999986*t566;
  t595 = t583 + t593;
  t597 = -3.6777349999999994e-6*t595;
  t598 = t487 + t521 + t567 + t597;
  t777 = 1.0394599999999997e-12*var1[14];
  t782 = -0.03892299998790722*t504;
  t790 = t681 + t785;
  t792 = -3.6777349999999994e-6*t790;
  t799 = t537 + t548;
  t802 = -0.503149000008*t799;
  t807 = t777 + t782 + t792 + t802;
  t871 = t860 + t785;
  t992 = t770*t974;
  t993 = t758*t985;
  t995 = t992 + t993;
  t843 = t841 + t548;
  t1001 = t631*t974;
  t1007 = t621*t985;
  t1008 = t1001 + t1007;
  t875 = -1.000000000049*t504;
  t877 = 1. + t875;
  t1023 = t822*t974;
  t1027 = t818*t985;
  t1039 = t1023 + t1027;
  t901 = t900 + t593;
  t891 = -1.000000000016*t504;
  t896 = 1. + t891;
  t914 = t841 + t562;
  t927 = -6.5e-11*t504;
  t936 = 1. + t927;
  t920 = t900 + t707;
  t939 = t860 + t688;
  t1117 = 0.15121*t179;
  t980 = t468*t974;
  t991 = t384*t985;
  t1000 = t731*t995;
  t1014 = t598*t1008;
  t1044 = t807*t1039;
  t1047 = t871*t995;
  t1048 = t843*t1008;
  t1053 = t877*t1039;
  t1057 = t1047 + t1048 + t1053;
  t1072 = -0.038924*t1057;
  t1073 = t901*t995;
  t1078 = t896*t1008;
  t1084 = t914*t1039;
  t1085 = t1073 + t1078 + t1084;
  t1087 = -0.80315*t1085;
  t1089 = t936*t995;
  t1105 = t920*t1008;
  t1106 = t939*t1039;
  t1107 = t1089 + t1105 + t1106;
  t1111 = 0.148705*t1107;
  t1167 = -2.8e-11*t126;
  t1193 = -7.e-6*t83;
  t1205 = 4.e-6*t83;
  t1236 = t179*t35*t167;
  t1237 = -1.*t35*t189*t285;
  t1240 = t1236 + t1237;
  t1183 = 7.e-6*t83;
  t1265 = 2.8e-11*t126;
  t1227 = -4.e-6*t83;
  t1242 = t1193 + t446;
  t1245 = t1242*t214;
  t1249 = -6.5e-11*t126*t974;
  t1251 = t1205 + t325;
  t1253 = t1251*t1240;
  t1256 = t1245 + t1249 + t1253;
  t1260 = -1.000000000049*t126*t214;
  t1263 = t1183 + t446;
  t1264 = t1263*t974;
  t1268 = t83 + t1265;
  t1273 = t1268*t1240;
  t1277 = t1260 + t1264 + t1273;
  t1292 = t88 + t1265;
  t1293 = t1292*t214;
  t1298 = t1227 + t325;
  t1302 = t1298*t974;
  t1303 = -1.000000000016*t126*t1240;
  t1305 = t1293 + t1302 + t1303;
  t1357 = -2.8e-11*t548;
  t1419 = 4.e-6*t494;
  t1383 = t610*t214;
  t1385 = t621*t974;
  t1388 = t631*t1240;
  t1392 = t1383 + t1385 + t1388;
  t1440 = t746*t214;
  t1442 = t758*t974;
  t1443 = t770*t1240;
  t1444 = t1440 + t1442 + t1443;
  t1401 = -7.e-6*t494;
  t1462 = t814*t214;
  t1474 = t818*t974;
  t1480 = t822*t1240;
  t1483 = t1462 + t1474 + t1480;
  t1365 = -4.e-6*t494;
  t1559 = 2.8e-11*t548;
  t1455 = 7.e-6*t494;
  t37 = 5.856279999999999e-13*var1[13];
  t118 = -0.0387489999948987*t100;
  t133 = t122 + t127;
  t145 = -2.123459e-6*t133;
  t148 = t146 + t126;
  t155 = -0.281209000004*t148;
  t157 = t37 + t118 + t145 + t155;
  t1644 = Cos(var1[3]);
  t1658 = Sin(var1[3]);
  t1654 = t1644*t167*t214;
  t1664 = -1.*t1658*t285;
  t1673 = t1654 + t1664;
  t1682 = -1.*t167*t1658;
  t1684 = -1.*t1644*t214*t285;
  t1692 = t1682 + t1684;
  t1711 = -1.*t189*t1673;
  t1712 = t179*t1692;
  t1713 = t1711 + t1712;
  t1731 = t179*t1673;
  t1737 = t189*t1692;
  t1745 = t1731 + t1737;
  t1752 = -1.*t1644*t35*t610;
  t1754 = t621*t1713;
  t1759 = t631*t1745;
  t1760 = t1752 + t1754 + t1759;
  t1771 = -1.*t1644*t35*t746;
  t1774 = t758*t1713;
  t1776 = t770*t1745;
  t1785 = t1771 + t1774 + t1776;
  t1799 = -1.*t814*t1644*t35;
  t1807 = t818*t1713;
  t1808 = t822*t1745;
  t1809 = t1799 + t1807 + t1808;
  t1894 = -1.*t35*t167*t189*t1658;
  t1905 = -1.*t179*t35*t1658*t285;
  t1908 = t1894 + t1905;
  t1916 = t179*t35*t167*t1658;
  t1936 = -1.*t35*t189*t1658*t285;
  t1938 = t1916 + t1936;
  t1964 = t610*t1658*t214;
  t1966 = t621*t1908;
  t1973 = t631*t1938;
  t1975 = t1964 + t1966 + t1973;
  t1990 = t746*t1658*t214;
  t1991 = t758*t1908;
  t1992 = t770*t1938;
  t1993 = t1990 + t1991 + t1992;
  t2002 = t814*t1658*t214;
  t2013 = t818*t1908;
  t2014 = t822*t1938;
  t2015 = t2002 + t2013 + t2014;
  t2066 = -1.*t167*t1658*t214;
  t2067 = -1.*t1644*t285;
  t2069 = t2066 + t2067;
  t2079 = t1644*t167;
  t2087 = -1.*t1658*t214*t285;
  t2088 = t2079 + t2087;
  t2097 = t189*t2069;
  t2101 = t179*t2088;
  t2104 = t2097 + t2101;
  t2106 = t179*t2069;
  t2107 = -1.*t189*t2088;
  t2108 = t2106 + t2107;
  t2110 = t770*t2104;
  t2118 = t758*t2108;
  t2124 = t2110 + t2118;
  t2130 = t631*t2104;
  t2135 = t621*t2108;
  t2140 = t2130 + t2135;
  t2145 = t822*t2104;
  t2149 = t818*t2108;
  t2151 = t2145 + t2149;
  t1119 = -0.15121*t189;
  t1120 = t1117 + t1119;
  t1138 = t1117 + t195;
  t2247 = t167*t1658*t214;
  t2252 = t1644*t285;
  t2257 = t2247 + t2252;
  t2269 = -1.*t189*t2257;
  t2274 = t2269 + t2101;
  t2287 = -1.*t179*t2257;
  t2288 = t2287 + t2107;
  t2306 = t770*t2274;
  t2311 = t758*t2288;
  t2312 = t2306 + t2311;
  t2316 = t631*t2274;
  t2319 = t621*t2288;
  t2320 = t2316 + t2319;
  t2322 = t822*t2274;
  t2327 = t818*t2288;
  t2328 = t2322 + t2327;
  t1170 = t83 + t1167;
  t1178 = -0.281209000004*t1170;
  t1184 = t1183 + t346;
  t1189 = -2.123459e-6*t1184;
  t1190 = -0.0387489999948987*t126;
  t1191 = 5.856279999999999e-13 + t1178 + t1189 + t1190;
  t1195 = t1193 + t346;
  t1196 = -0.038748999993*t1195;
  t1208 = t1205 + t127;
  t1209 = -0.281209000004*t1208;
  t1215 = -1.38024835e-16*t126;
  t1216 = -1.4640699999999997e-7 + t1196 + t1209 + t1215;
  t1223 = t88 + t1167;
  t1226 = -0.038748999993*t1223;
  t1228 = t1227 + t127;
  t1230 = -2.123459e-6*t1228;
  t1231 = -0.28120900000849935*t126;
  t1234 = 1.0248489999999998e-12 + t1226 + t1230 + t1231;
  t2439 = t179*t2257;
  t2440 = t189*t2088;
  t2441 = t2439 + t2440;
  t2451 = -1.*t35*t1242*t1658;
  t2452 = -6.5e-11*t126*t2274;
  t2456 = t1251*t2441;
  t2457 = t2451 + t2452 + t2456;
  t2475 = 1.000000000049*t35*t126*t1658;
  t2478 = t1263*t2274;
  t2480 = t1268*t2441;
  t2486 = t2475 + t2478 + t2480;
  t2490 = -1.*t35*t1292*t1658;
  t2491 = t1298*t2274;
  t2492 = -1.000000000016*t126*t2441;
  t2497 = t2490 + t2491 + t2492;
  t1361 = t503 + t1357;
  t1363 = -0.038922999986*t1361;
  t1366 = t1365 + t785;
  t1373 = -3.6777349999999994e-6*t1366;
  t1376 = -0.5031490000160505*t548;
  t1377 = 1.8190549999999993e-12 + t1363 + t1373 + t1376;
  t1405 = t1401 + t707;
  t1413 = -0.038922999986*t1405;
  t1425 = t1419 + t785;
  t1427 = -0.503149000008*t1425;
  t1428 = -2.3905277499999995e-16*t548;
  t1435 = -2.598649999999999e-7 + t1413 + t1427 + t1428;
  t1451 = t494 + t1357;
  t1454 = -0.503149000008*t1451;
  t1457 = t1455 + t707;
  t1458 = -3.6777349999999994e-6*t1457;
  t1460 = -0.03892299998790722*t548;
  t1461 = 1.0394599999999997e-12 + t1454 + t1458 + t1460;
  t1491 = t1419 + t688;
  t2603 = -1.*t35*t610*t1658;
  t2604 = t621*t2274;
  t2609 = t631*t2441;
  t2612 = t2603 + t2604 + t2609;
  t2624 = -1.*t35*t746*t1658;
  t2625 = t758*t2274;
  t2629 = t770*t2441;
  t2639 = t2624 + t2625 + t2629;
  t1516 = t1401 + t593;
  t2643 = -1.*t814*t35*t1658;
  t2645 = t818*t2274;
  t2648 = t822*t2441;
  t2658 = t2643 + t2645 + t2648;
  t1545 = t1365 + t688;
  t1573 = t503 + t1559;
  t1602 = t494 + t1559;
  t1609 = t1455 + t593;
  t2814 = t1644*t35*t167*t189;
  t2816 = t179*t1644*t35*t285;
  t2819 = t2814 + t2816;
  t2841 = -1.*t179*t1644*t35*t167;
  t2843 = t1644*t35*t189*t285;
  t2846 = t2841 + t2843;
  t2853 = -1.*t1644*t610*t214;
  t2856 = t621*t2819;
  t2862 = t631*t2846;
  t2876 = t2853 + t2856 + t2862;
  t2889 = -1.*t1644*t746*t214;
  t2891 = t758*t2819;
  t2899 = t770*t2846;
  t2911 = t2889 + t2891 + t2899;
  t2921 = -1.*t814*t1644*t214;
  t2929 = t818*t2819;
  t2930 = t822*t2846;
  t2931 = t2921 + t2929 + t2930;
  t3083 = t167*t1658;
  t3110 = t1644*t214*t285;
  t3111 = t3083 + t3110;
  t3117 = t189*t1673;
  t3131 = t179*t3111;
  t3152 = t3117 + t3131;
  t3166 = -1.*t189*t3111;
  t3186 = t1731 + t3166;
  t3195 = t770*t3152;
  t3203 = t758*t3186;
  t3233 = t3195 + t3203;
  t3246 = t631*t3152;
  t3252 = t621*t3186;
  t3256 = t3246 + t3252;
  t3265 = t822*t3152;
  t3267 = t818*t3186;
  t3268 = t3265 + t3267;
  t3409 = -1.*t1644*t167*t214;
  t3410 = t1658*t285;
  t3429 = t3409 + t3410;
  t3457 = -1.*t189*t3429;
  t3464 = t3457 + t3131;
  t3509 = -1.*t179*t3429;
  t3521 = t3509 + t3166;
  t3539 = t770*t3464;
  t3554 = t758*t3521;
  t3557 = t3539 + t3554;
  t3564 = t631*t3464;
  t3567 = t621*t3521;
  t3571 = t3564 + t3567;
  t3578 = t822*t3464;
  t3581 = t818*t3521;
  t3585 = t3578 + t3581;
  t3757 = t179*t3429;
  t3761 = t189*t3111;
  t3762 = t3757 + t3761;
  t3769 = t1644*t35*t1242;
  t3773 = -6.5e-11*t126*t3464;
  t3805 = t1251*t3762;
  t3812 = t3769 + t3773 + t3805;
  t3819 = -1.000000000049*t1644*t35*t126;
  t3820 = t1263*t3464;
  t3822 = t1268*t3762;
  t3825 = t3819 + t3820 + t3822;
  t3833 = t1644*t35*t1292;
  t3834 = t1298*t3464;
  t3843 = -1.000000000016*t126*t3762;
  t3844 = t3833 + t3834 + t3843;
  t3966 = t1644*t35*t610;
  t3973 = t621*t3464;
  t3977 = t631*t3762;
  t3982 = t3966 + t3973 + t3977;
  t4004 = t1644*t35*t746;
  t4005 = t758*t3464;
  t4008 = t770*t3762;
  t4009 = t4004 + t4005 + t4008;
  t4022 = t814*t1644*t35;
  t4023 = t818*t3464;
  t4024 = t822*t3762;
  t4025 = t4022 + t4023 + t4024;
  p_output1[0]=1.;
  p_output1[1]=-1.*t167*t196*t214 + t214*t259*t285 + t157*t35 + t384*t413 + t468*t485 + t598*t641 + t731*t775 + t807*t833 - 0.038924*(t641*t843 + t775*t871 + t833*t877) - 0.80315*(t641*t896 + t775*t901 + t833*t914) + 0.148705*(t641*t920 + t775*t936 + t833*t939);
  p_output1[2]=t1000 + t1014 + t1044 + t1072 + t1087 + t1111 - 1.*t167*t259*t35 - 1.*t196*t285*t35 + t980 + t991;
  p_output1[3]=t1000 + t1014 + t1044 + t1072 + t1087 + t1111 + t1120*t167*t35 - 1.*t1138*t285*t35 + t980 + t991;
  p_output1[4]=t1234*t1240 + t1191*t214 + t1305*t598 + t1256*t731 + t1277*t807 - 0.038924*(t1305*t843 + t1256*t871 + t1277*t877) - 0.80315*(t1305*t896 + t1256*t901 + t1277*t914) + 0.148705*(t1305*t920 + t1256*t936 + t1277*t939) + t1216*t974;
  p_output1[5]=t1377*t1392 + t1435*t1444 + t1461*t1483 - 0.80315*(t1444*t1545 + t1483*t1573 - 1.000000000016*t1392*t548) + 0.148705*(t1392*t1491 + t1483*t1516 - 6.5e-11*t1444*t548) - 0.038924*(t1392*t1602 + t1444*t1609 - 1.000000000049*t1483*t548);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=t1673*t196 + t1692*t259 - 1.*t157*t1644*t35 + t1713*t384 + t1745*t468 + t1760*t598 + t1785*t731 + t1809*t807 - 0.038924*(t1760*t843 + t1785*t871 + t1809*t877) - 0.80315*(t1760*t896 + t1785*t901 + t1809*t914) + 0.148705*(t1760*t920 + t1785*t936 + t1809*t939);
  p_output1[9]=t157*t1658*t214 + t1658*t167*t196*t35 - 1.*t1658*t259*t285*t35 + t1908*t384 + t1938*t468 + t1975*t598 + t1993*t731 + t2015*t807 - 0.038924*(t1975*t843 + t1993*t871 + t2015*t877) - 0.80315*(t1975*t896 + t1993*t901 + t2015*t914) + 0.148705*(t1975*t920 + t1993*t936 + t2015*t939);
  p_output1[10]=t196*t2088 + t2069*t259 + t2108*t384 + t2104*t468 + t2140*t598 + t2124*t731 + t2151*t807 - 0.038924*(t2140*t843 + t2124*t871 + t2151*t877) - 0.80315*(t2140*t896 + t2124*t901 + t2151*t914) + 0.148705*(t2140*t920 + t2124*t936 + t2151*t939);
  p_output1[11]=t1138*t2088 + t1120*t2257 + t2288*t384 + t2274*t468 + t2320*t598 + t2312*t731 + t2328*t807 - 0.038924*(t2320*t843 + t2312*t871 + t2328*t877) - 0.80315*(t2320*t896 + t2312*t901 + t2328*t914) + 0.148705*(t2320*t920 + t2312*t936 + t2328*t939);
  p_output1[12]=t1216*t2274 + t1234*t2441 - 1.*t1191*t1658*t35 + t2497*t598 + t2457*t731 + t2486*t807 - 0.038924*(t2497*t843 + t2457*t871 + t2486*t877) - 0.80315*(t2497*t896 + t2457*t901 + t2486*t914) + 0.148705*(t2497*t920 + t2457*t936 + t2486*t939);
  p_output1[13]=t1377*t2612 + t1435*t2639 + t1461*t2658 - 0.80315*(t1545*t2639 + t1573*t2658 - 1.000000000016*t2612*t548) + 0.148705*(t1491*t2612 + t1516*t2658 - 6.5e-11*t2639*t548) - 0.038924*(t1602*t2612 + t1609*t2639 - 1.000000000049*t2658*t548);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=t196*t2257 + t2088*t259 - 1.*t157*t1658*t35 + t2274*t384 + t2441*t468 + t2612*t598 + t2639*t731 + t2658*t807 - 0.038924*(t2612*t843 + t2639*t871 + t2658*t877) - 0.80315*(t2612*t896 + t2639*t901 + t2658*t914) + 0.148705*(t2612*t920 + t2639*t936 + t2658*t939);
  p_output1[17]=-1.*t157*t1644*t214 - 1.*t1644*t167*t196*t35 + t1644*t259*t285*t35 + t2819*t384 + t2846*t468 + t2876*t598 + t2911*t731 + t2931*t807 - 0.038924*(t2876*t843 + t2911*t871 + t2931*t877) - 0.80315*(t2876*t896 + t2911*t901 + t2931*t914) + 0.148705*(t2876*t920 + t2911*t936 + t2931*t939);
  p_output1[18]=t1673*t259 + t196*t3111 + t3186*t384 + t3152*t468 + t3256*t598 + t3233*t731 + t3268*t807 - 0.038924*(t3256*t843 + t3233*t871 + t3268*t877) - 0.80315*(t3256*t896 + t3233*t901 + t3268*t914) + 0.148705*(t3256*t920 + t3233*t936 + t3268*t939);
  p_output1[19]=t1138*t3111 + t1120*t3429 + t3521*t384 + t3464*t468 + t3571*t598 + t3557*t731 + t3585*t807 - 0.038924*(t3571*t843 + t3557*t871 + t3585*t877) - 0.80315*(t3571*t896 + t3557*t901 + t3585*t914) + 0.148705*(t3571*t920 + t3557*t936 + t3585*t939);
  p_output1[20]=t1216*t3464 + t1191*t1644*t35 + t1234*t3762 + t3844*t598 + t3812*t731 + t3825*t807 - 0.038924*(t3844*t843 + t3812*t871 + t3825*t877) - 0.80315*(t3844*t896 + t3812*t901 + t3825*t914) + 0.148705*(t3844*t920 + t3812*t936 + t3825*t939);
  p_output1[21]=t1377*t3982 + t1435*t4009 + t1461*t4025 - 0.80315*(t1545*t4009 + t1573*t4025 - 1.000000000016*t3982*t548) + 0.148705*(t1491*t3982 + t1516*t4025 - 6.5e-11*t4009*t548) - 0.038924*(t1602*t3982 + t1609*t4009 - 1.000000000049*t4025*t548);
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

#include "J_h_RlFoot_QuadrupleStance.hh"

namespace QuadrupleStance
{

void J_h_RlFoot_QuadrupleStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
