/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:30:16 GMT+01:00
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
  double t65;
  double t103;
  double t135;
  double t161;
  double t294;
  double t302;
  double t307;
  double t310;
  double t313;
  double t352;
  double t193;
  double t211;
  double t275;
  double t391;
  double t436;
  double t157;
  double t575;
  double t583;
  double t589;
  double t601;
  double t21;
  double t526;
  double t496;
  double t515;
  double t519;
  double t547;
  double t562;
  double t569;
  double t619;
  double t214;
  double t633;
  double t169;
  double t600;
  double t702;
  double t707;
  double t737;
  double t473;
  double t647;
  double t438;
  double t756;
  double t642;
  double t644;
  double t652;
  double t653;
  double t657;
  double t658;
  double t661;
  double t668;
  double t768;
  double t728;
  double t731;
  double t733;
  double t738;
  double t742;
  double t743;
  double t744;
  double t747;
  double t779;
  double t780;
  double t784;
  double t797;
  double t802;
  double t808;
  double t809;
  double t817;
  double t694;
  double t830;
  double t709;
  double t872;
  double t826;
  double t608;
  double t380;
  double t386;
  double t325;
  double t327;
  double t523;
  double t524;
  double t530;
  double t531;
  double t536;
  double t538;
  double t543;
  double t423;
  double t433;
  double t456;
  double t460;
  double t480;
  double t483;
  double t495;
  double t753;
  double t754;
  double t762;
  double t763;
  double t772;
  double t773;
  double t774;
  double t977;
  double t978;
  double t986;
  double t990;
  double t999;
  double t1001;
  double t679;
  double t688;
  double t695;
  double t696;
  double t714;
  double t721;
  double t722;
  double t572;
  double t597;
  double t614;
  double t617;
  double t620;
  double t625;
  double t628;
  double t934;
  double t1008;
  double t1010;
  double t1014;
  double t931;
  double t1020;
  double t1028;
  double t1039;
  double t925;
  double t929;
  double t1056;
  double t1057;
  double t1065;
  double t904;
  double t887;
  double t888;
  double t875;
  double t839;
  double t847;
  double t832;
  double t828;
  double t989;
  double t1004;
  double t1019;
  double t1054;
  double t1068;
  double t1070;
  double t1075;
  double t1079;
  double t1083;
  double t1084;
  double t1088;
  double t1089;
  double t1096;
  double t1101;
  double t1105;
  double t1106;
  double t1107;
  double t1108;
  double t1116;
  double t1118;
  double t1169;
  double t1189;
  double t1208;
  double t1251;
  double t1252;
  double t1254;
  double t1158;
  double t1313;
  double t1229;
  double t1259;
  double t1263;
  double t1267;
  double t1276;
  double t1288;
  double t1290;
  double t1298;
  double t1302;
  double t1309;
  double t1324;
  double t1330;
  double t1339;
  double t1343;
  double t1344;
  double t1348;
  double t1349;
  double t1352;
  double t1356;
  double t1458;
  double t1497;
  double t1498;
  double t1499;
  double t1501;
  double t1533;
  double t1538;
  double t1539;
  double t1543;
  double t1470;
  double t1582;
  double t1600;
  double t1606;
  double t1610;
  double t1623;
  double t1505;
  double t1566;
  double t1553;
  double t55;
  double t142;
  double t188;
  double t192;
  double t217;
  double t219;
  double t245;
  double t1728;
  double t1745;
  double t1742;
  double t1754;
  double t1761;
  double t1771;
  double t1778;
  double t1782;
  double t1790;
  double t1792;
  double t1799;
  double t1806;
  double t1807;
  double t1808;
  double t1823;
  double t1827;
  double t1832;
  double t1834;
  double t1848;
  double t1854;
  double t1855;
  double t1857;
  double t1864;
  double t1870;
  double t1882;
  double t1884;
  double t2000;
  double t2004;
  double t2006;
  double t2010;
  double t2011;
  double t2012;
  double t2022;
  double t2024;
  double t2031;
  double t2044;
  double t2048;
  double t2054;
  double t2057;
  double t2058;
  double t2068;
  double t2079;
  double t2082;
  double t2083;
  double t2165;
  double t2167;
  double t2171;
  double t2176;
  double t2182;
  double t2184;
  double t2187;
  double t2190;
  double t2191;
  double t2200;
  double t2204;
  double t2206;
  double t2215;
  double t2217;
  double t2223;
  double t2227;
  double t2233;
  double t2237;
  double t2254;
  double t2257;
  double t2259;
  double t1123;
  double t1130;
  double t1141;
  double t1143;
  double t2327;
  double t2331;
  double t2333;
  double t2352;
  double t2353;
  double t2366;
  double t2373;
  double t2387;
  double t2388;
  double t2389;
  double t2402;
  double t2407;
  double t2409;
  double t2418;
  double t2426;
  double t2427;
  double t1160;
  double t1163;
  double t1174;
  double t1175;
  double t1179;
  double t1183;
  double t1196;
  double t1199;
  double t1210;
  double t1211;
  double t1212;
  double t1214;
  double t1225;
  double t1226;
  double t1232;
  double t1234;
  double t1241;
  double t1250;
  double t2526;
  double t2528;
  double t2532;
  double t2542;
  double t2548;
  double t2549;
  double t2553;
  double t2568;
  double t2570;
  double t2571;
  double t2576;
  double t2582;
  double t2587;
  double t2588;
  double t2604;
  double t1463;
  double t1466;
  double t1471;
  double t1479;
  double t1485;
  double t1486;
  double t1510;
  double t1515;
  double t1518;
  double t1520;
  double t1525;
  double t1531;
  double t1561;
  double t1564;
  double t1569;
  double t1570;
  double t1574;
  double t1579;
  double t2725;
  double t2727;
  double t2730;
  double t2733;
  double t1627;
  double t2736;
  double t2739;
  double t2746;
  double t2749;
  double t1638;
  double t2755;
  double t2761;
  double t2783;
  double t2785;
  double t1650;
  double t1676;
  double t1688;
  double t1696;
  double t2980;
  double t2982;
  double t2985;
  double t2995;
  double t3003;
  double t3004;
  double t3029;
  double t3035;
  double t3047;
  double t3051;
  double t3060;
  double t3063;
  double t3064;
  double t3069;
  double t3073;
  double t3077;
  double t3088;
  double t3101;
  double t3201;
  double t3203;
  double t3208;
  double t3215;
  double t3216;
  double t3217;
  double t3236;
  double t3237;
  double t3250;
  double t3260;
  double t3274;
  double t3305;
  double t3308;
  double t3312;
  double t3323;
  double t3325;
  double t3329;
  double t3454;
  double t3455;
  double t3470;
  double t3484;
  double t3495;
  double t3501;
  double t3503;
  double t3506;
  double t3508;
  double t3515;
  double t3524;
  double t3533;
  double t3534;
  double t3539;
  double t3551;
  double t3552;
  double t3648;
  double t3651;
  double t3654;
  double t3693;
  double t3702;
  double t3717;
  double t3719;
  double t3726;
  double t3732;
  double t3733;
  double t3736;
  double t3740;
  double t3741;
  double t3773;
  double t3777;
  double t3856;
  double t3859;
  double t3866;
  double t3872;
  double t3874;
  double t3879;
  double t3880;
  double t3881;
  double t3892;
  double t3906;
  double t3915;
  double t3917;
  t65 = Cos(var1[16]);
  t103 = -1.*t65;
  t135 = 1. + t103;
  t161 = Sin(var1[16]);
  t294 = Cos(var1[15]);
  t302 = -1.*t294;
  t307 = 1. + t302;
  t310 = -0.15121*t307;
  t313 = Sin(var1[15]);
  t352 = Sin(var1[4]);
  t193 = -1. + t65;
  t211 = 4.e-6*t193;
  t275 = Cos(var1[5]);
  t391 = Sin(var1[5]);
  t436 = 7.e-6*t135;
  t157 = 2.8e-11*t135;
  t575 = Cos(var1[17]);
  t583 = -1.*t575;
  t589 = 1. + t583;
  t601 = Sin(var1[17]);
  t21 = Cos(var1[4]);
  t526 = -4.e-6*t161;
  t496 = t275*t313*t352;
  t515 = t294*t352*t391;
  t519 = t496 + t515;
  t547 = -1.*t294*t275*t352;
  t562 = t313*t352*t391;
  t569 = t547 + t562;
  t619 = 2.8e-11*t589;
  t214 = -7.e-6*t161;
  t633 = -2.8e-11*t135;
  t169 = -1.*t161;
  t600 = 7.e-6*t589;
  t702 = -1. + t575;
  t707 = 4.e-6*t702;
  t737 = 4.e-6*t135;
  t473 = 7.e-6*t161;
  t647 = -7.e-6*t135;
  t438 = 4.e-6*t161;
  t756 = 4.e-6*t601;
  t642 = t633 + t161;
  t644 = t21*t642;
  t652 = t647 + t526;
  t653 = t652*t519;
  t657 = -1.000000000016*t135;
  t658 = 1. + t657;
  t661 = t658*t569;
  t668 = t644 + t653 + t661;
  t768 = 7.e-6*t601;
  t728 = -1.000000000049*t135;
  t731 = 1. + t728;
  t733 = t731*t21;
  t738 = t737 + t214;
  t742 = t738*t519;
  t743 = t633 + t169;
  t744 = t743*t569;
  t747 = t733 + t742 + t744;
  t779 = t737 + t473;
  t780 = t21*t779;
  t784 = -6.5e-11*t135;
  t797 = 1. + t784;
  t802 = t797*t519;
  t808 = t647 + t438;
  t809 = t808*t569;
  t817 = t780 + t802 + t809;
  t694 = -1.*t601;
  t830 = 4.e-6*t589;
  t709 = -7.e-6*t601;
  t872 = -2.8e-11*t589;
  t826 = -7.e-6*t589;
  t608 = -4.e-6*t601;
  t380 = 0.15121*t313;
  t386 = t310 + t380;
  t325 = -0.15121*t313;
  t327 = t310 + t325;
  t523 = -2.7726089999999997e-12*var1[16];
  t524 = -0.2812110000084994*t135;
  t530 = t436 + t526;
  t531 = -1.8134809999999998e-6*t530;
  t536 = t157 + t161;
  t538 = -0.038749000006999997*t536;
  t543 = t523 + t524 + t531 + t538;
  t423 = 3.9608699999999997e-7*var1[16];
  t433 = -1.1787626499999999e-16*t135;
  t456 = t436 + t438;
  t460 = -0.281211000004*t456;
  t480 = t211 + t473;
  t483 = -0.038749000006999997*t480;
  t495 = t423 + t433 + t460 + t483;
  t753 = 2.826290000000002e-7*var1[17];
  t754 = -2.18904205e-16*t589;
  t762 = t600 + t756;
  t763 = -0.5031510000080001*t762;
  t772 = t707 + t768;
  t773 = -0.038575000014*t772;
  t774 = t753 + t754 + t763 + t773;
  t977 = -1.*t21*t275*t313;
  t978 = -1.*t294*t21*t391;
  t986 = t977 + t978;
  t990 = -1.*t294*t21*t275;
  t999 = t21*t313*t391;
  t1001 = t990 + t999;
  t679 = 1.1305160000000008e-12*var1[17];
  t688 = -0.03857500001589017*t589;
  t695 = t619 + t694;
  t696 = -0.5031510000080001*t695;
  t714 = t707 + t709;
  t721 = -3.367757e-6*t714;
  t722 = t679 + t688 + t696 + t721;
  t572 = -1.9784030000000015e-12*var1[17];
  t597 = -0.5031510000160505*t589;
  t614 = t600 + t608;
  t617 = -3.367757e-6*t614;
  t620 = t619 + t601;
  t625 = -0.038575000014*t620;
  t628 = t572 + t597 + t617 + t625;
  t934 = t826 + t608;
  t1008 = t808*t986;
  t1010 = t797*t1001;
  t1014 = t1008 + t1010;
  t931 = t872 + t601;
  t1020 = t743*t986;
  t1028 = t738*t1001;
  t1039 = t1020 + t1028;
  t925 = -1.000000000016*t589;
  t929 = 1. + t925;
  t1056 = t658*t986;
  t1057 = t652*t1001;
  t1065 = t1056 + t1057;
  t904 = t830 + t709;
  t887 = -1.000000000049*t589;
  t888 = 1. + t887;
  t875 = t872 + t694;
  t839 = -6.5e-11*t589;
  t847 = 1. + t839;
  t832 = t830 + t768;
  t828 = t826 + t756;
  t989 = t543*t986;
  t1004 = t495*t1001;
  t1019 = t774*t1014;
  t1054 = t722*t1039;
  t1068 = t628*t1065;
  t1070 = t934*t1014;
  t1075 = t931*t1039;
  t1079 = t929*t1065;
  t1083 = t1070 + t1075 + t1079;
  t1084 = -0.80315*t1083;
  t1088 = t904*t1014;
  t1089 = t888*t1039;
  t1096 = t875*t1065;
  t1101 = t1088 + t1089 + t1096;
  t1105 = -0.038576*t1101;
  t1106 = t847*t1014;
  t1107 = t832*t1039;
  t1108 = t828*t1065;
  t1116 = t1106 + t1107 + t1108;
  t1118 = -0.148715*t1116;
  t1169 = 2.8e-11*t161;
  t1189 = 7.e-6*t65;
  t1208 = 4.e-6*t65;
  t1251 = t294*t21*t275;
  t1252 = -1.*t21*t313*t391;
  t1254 = t1251 + t1252;
  t1158 = -7.e-6*t65;
  t1313 = -2.8e-11*t161;
  t1229 = -4.e-6*t65;
  t1259 = t1189 + t438;
  t1263 = t1259*t352;
  t1267 = -6.5e-11*t161*t986;
  t1276 = t1208 + t214;
  t1288 = t1276*t1254;
  t1290 = t1263 + t1267 + t1288;
  t1298 = -1.000000000049*t161*t352;
  t1302 = t1158 + t438;
  t1309 = t1302*t986;
  t1324 = t103 + t1313;
  t1330 = t1324*t1254;
  t1339 = t1298 + t1309 + t1330;
  t1343 = t65 + t1313;
  t1344 = t1343*t352;
  t1348 = t1229 + t214;
  t1349 = t1348*t986;
  t1352 = -1.000000000016*t161*t1254;
  t1356 = t1344 + t1349 + t1352;
  t1458 = 2.8e-11*t601;
  t1497 = t642*t352;
  t1498 = t652*t986;
  t1499 = t658*t1254;
  t1501 = t1497 + t1498 + t1499;
  t1533 = t731*t352;
  t1538 = t738*t986;
  t1539 = t743*t1254;
  t1543 = t1533 + t1538 + t1539;
  t1470 = -4.e-6*t575;
  t1582 = t779*t352;
  t1600 = t797*t986;
  t1606 = t808*t1254;
  t1610 = t1582 + t1600 + t1606;
  t1623 = -2.8e-11*t601;
  t1505 = -7.e-6*t575;
  t1566 = 4.e-6*t575;
  t1553 = 7.e-6*t575;
  t55 = 1.5843479999999999e-12*var1[16];
  t142 = -0.03874900000889869*t135;
  t188 = t157 + t169;
  t192 = -0.281211000004*t188;
  t217 = t211 + t214;
  t219 = -1.8134809999999998e-6*t217;
  t245 = t55 + t142 + t192 + t219;
  t1728 = Cos(var1[3]);
  t1745 = Sin(var1[3]);
  t1742 = t1728*t275*t352;
  t1754 = -1.*t1745*t391;
  t1761 = t1742 + t1754;
  t1771 = -1.*t275*t1745;
  t1778 = -1.*t1728*t352*t391;
  t1782 = t1771 + t1778;
  t1790 = -1.*t313*t1761;
  t1792 = t294*t1782;
  t1799 = t1790 + t1792;
  t1806 = t294*t1761;
  t1807 = t313*t1782;
  t1808 = t1806 + t1807;
  t1823 = -1.*t1728*t21*t642;
  t1827 = t652*t1799;
  t1832 = t658*t1808;
  t1834 = t1823 + t1827 + t1832;
  t1848 = -1.*t731*t1728*t21;
  t1854 = t738*t1799;
  t1855 = t743*t1808;
  t1857 = t1848 + t1854 + t1855;
  t1864 = -1.*t1728*t21*t779;
  t1870 = t797*t1799;
  t1882 = t808*t1808;
  t1884 = t1864 + t1870 + t1882;
  t2000 = -1.*t21*t275*t313*t1745;
  t2004 = -1.*t294*t21*t1745*t391;
  t2006 = t2000 + t2004;
  t2010 = t294*t21*t275*t1745;
  t2011 = -1.*t21*t313*t1745*t391;
  t2012 = t2010 + t2011;
  t2022 = t642*t1745*t352;
  t2024 = t652*t2006;
  t2031 = t658*t2012;
  t2044 = t2022 + t2024 + t2031;
  t2048 = t731*t1745*t352;
  t2054 = t738*t2006;
  t2057 = t743*t2012;
  t2058 = t2048 + t2054 + t2057;
  t2068 = t779*t1745*t352;
  t2079 = t797*t2006;
  t2082 = t808*t2012;
  t2083 = t2068 + t2079 + t2082;
  t2165 = -1.*t275*t1745*t352;
  t2167 = -1.*t1728*t391;
  t2171 = t2165 + t2167;
  t2176 = t1728*t275;
  t2182 = -1.*t1745*t352*t391;
  t2184 = t2176 + t2182;
  t2187 = t313*t2171;
  t2190 = t294*t2184;
  t2191 = t2187 + t2190;
  t2200 = t294*t2171;
  t2204 = -1.*t313*t2184;
  t2206 = t2200 + t2204;
  t2215 = t808*t2191;
  t2217 = t797*t2206;
  t2223 = t2215 + t2217;
  t2227 = t743*t2191;
  t2233 = t738*t2206;
  t2237 = t2227 + t2233;
  t2254 = t658*t2191;
  t2257 = t652*t2206;
  t2259 = t2254 + t2257;
  t1123 = -0.15121*t294;
  t1130 = t1123 + t325;
  t1141 = 0.15121*t294;
  t1143 = t1141 + t325;
  t2327 = t275*t1745*t352;
  t2331 = t1728*t391;
  t2333 = t2327 + t2331;
  t2352 = -1.*t313*t2333;
  t2353 = t2352 + t2190;
  t2366 = -1.*t294*t2333;
  t2373 = t2366 + t2204;
  t2387 = t808*t2353;
  t2388 = t797*t2373;
  t2389 = t2387 + t2388;
  t2402 = t743*t2353;
  t2407 = t738*t2373;
  t2409 = t2402 + t2407;
  t2418 = t658*t2353;
  t2426 = t652*t2373;
  t2427 = t2418 + t2426;
  t1160 = t1158 + t526;
  t1163 = -1.8134809999999998e-6*t1160;
  t1174 = t103 + t1169;
  t1175 = -0.281211000004*t1174;
  t1179 = -0.03874900000889869*t161;
  t1183 = 1.5843479999999999e-12 + t1163 + t1175 + t1179;
  t1196 = t1189 + t526;
  t1199 = -0.038749000006999997*t1196;
  t1210 = t1208 + t473;
  t1211 = -0.281211000004*t1210;
  t1212 = -1.1787626499999999e-16*t161;
  t1214 = 3.9608699999999997e-7 + t1199 + t1211 + t1212;
  t1225 = t65 + t1169;
  t1226 = -0.038749000006999997*t1225;
  t1232 = t1229 + t473;
  t1234 = -1.8134809999999998e-6*t1232;
  t1241 = -0.2812110000084994*t161;
  t1250 = -2.7726089999999997e-12 + t1226 + t1234 + t1241;
  t2526 = t294*t2333;
  t2528 = t313*t2184;
  t2532 = t2526 + t2528;
  t2542 = -1.*t21*t1259*t1745;
  t2548 = -6.5e-11*t161*t2353;
  t2549 = t1276*t2532;
  t2553 = t2542 + t2548 + t2549;
  t2568 = 1.000000000049*t21*t161*t1745;
  t2570 = t1302*t2353;
  t2571 = t1324*t2532;
  t2576 = t2568 + t2570 + t2571;
  t2582 = -1.*t21*t1343*t1745;
  t2587 = t1348*t2353;
  t2588 = -1.000000000016*t161*t2532;
  t2604 = t2582 + t2587 + t2588;
  t1463 = t575 + t1458;
  t1466 = -0.038575000014*t1463;
  t1471 = t1470 + t768;
  t1479 = -3.367757e-6*t1471;
  t1485 = -0.5031510000160505*t601;
  t1486 = -1.9784030000000015e-12 + t1466 + t1479 + t1485;
  t1510 = t1505 + t608;
  t1515 = -3.367757e-6*t1510;
  t1518 = t583 + t1458;
  t1520 = -0.5031510000080001*t1518;
  t1525 = -0.03857500001589017*t601;
  t1531 = 1.1305160000000008e-12 + t1515 + t1520 + t1525;
  t1561 = t1553 + t608;
  t1564 = -0.038575000014*t1561;
  t1569 = t1566 + t768;
  t1570 = -0.5031510000080001*t1569;
  t1574 = -2.18904205e-16*t601;
  t1579 = 2.826290000000002e-7 + t1564 + t1570 + t1574;
  t2725 = -1.*t21*t642*t1745;
  t2727 = t652*t2353;
  t2730 = t658*t2532;
  t2733 = t2725 + t2727 + t2730;
  t1627 = t575 + t1623;
  t2736 = -1.*t731*t21*t1745;
  t2739 = t738*t2353;
  t2746 = t743*t2532;
  t2749 = t2736 + t2739 + t2746;
  t1638 = t1470 + t709;
  t2755 = -1.*t21*t779*t1745;
  t2761 = t797*t2353;
  t2783 = t808*t2532;
  t2785 = t2755 + t2761 + t2783;
  t1650 = t583 + t1623;
  t1676 = t1505 + t756;
  t1688 = t1566 + t709;
  t1696 = t1553 + t756;
  t2980 = t1728*t21*t275*t313;
  t2982 = t294*t1728*t21*t391;
  t2985 = t2980 + t2982;
  t2995 = -1.*t294*t1728*t21*t275;
  t3003 = t1728*t21*t313*t391;
  t3004 = t2995 + t3003;
  t3029 = -1.*t1728*t642*t352;
  t3035 = t652*t2985;
  t3047 = t658*t3004;
  t3051 = t3029 + t3035 + t3047;
  t3060 = -1.*t731*t1728*t352;
  t3063 = t738*t2985;
  t3064 = t743*t3004;
  t3069 = t3060 + t3063 + t3064;
  t3073 = -1.*t1728*t779*t352;
  t3077 = t797*t2985;
  t3088 = t808*t3004;
  t3101 = t3073 + t3077 + t3088;
  t3201 = t275*t1745;
  t3203 = t1728*t352*t391;
  t3208 = t3201 + t3203;
  t3215 = t313*t1761;
  t3216 = t294*t3208;
  t3217 = t3215 + t3216;
  t3236 = -1.*t313*t3208;
  t3237 = t1806 + t3236;
  t3250 = t808*t3217;
  t3260 = t797*t3237;
  t3274 = t3250 + t3260;
  t3305 = t743*t3217;
  t3308 = t738*t3237;
  t3312 = t3305 + t3308;
  t3323 = t658*t3217;
  t3325 = t652*t3237;
  t3329 = t3323 + t3325;
  t3454 = -1.*t1728*t275*t352;
  t3455 = t1745*t391;
  t3470 = t3454 + t3455;
  t3484 = -1.*t313*t3470;
  t3495 = t3484 + t3216;
  t3501 = -1.*t294*t3470;
  t3503 = t3501 + t3236;
  t3506 = t808*t3495;
  t3508 = t797*t3503;
  t3515 = t3506 + t3508;
  t3524 = t743*t3495;
  t3533 = t738*t3503;
  t3534 = t3524 + t3533;
  t3539 = t658*t3495;
  t3551 = t652*t3503;
  t3552 = t3539 + t3551;
  t3648 = t294*t3470;
  t3651 = t313*t3208;
  t3654 = t3648 + t3651;
  t3693 = t1728*t21*t1259;
  t3702 = -6.5e-11*t161*t3495;
  t3717 = t1276*t3654;
  t3719 = t3693 + t3702 + t3717;
  t3726 = -1.000000000049*t1728*t21*t161;
  t3732 = t1302*t3495;
  t3733 = t1324*t3654;
  t3736 = t3726 + t3732 + t3733;
  t3740 = t1728*t21*t1343;
  t3741 = t1348*t3495;
  t3773 = -1.000000000016*t161*t3654;
  t3777 = t3740 + t3741 + t3773;
  t3856 = t1728*t21*t642;
  t3859 = t652*t3495;
  t3866 = t658*t3654;
  t3872 = t3856 + t3859 + t3866;
  t3874 = t731*t1728*t21;
  t3879 = t738*t3495;
  t3880 = t743*t3654;
  t3881 = t3874 + t3879 + t3880;
  t3892 = t1728*t21*t779;
  t3906 = t797*t3495;
  t3915 = t808*t3654;
  t3917 = t3892 + t3906 + t3915;
  p_output1[0]=1.;
  p_output1[1]=t21*t245 - 1.*t275*t327*t352 + t352*t386*t391 + t495*t519 + t543*t569 + t628*t668 + t722*t747 + t774*t817 - 0.148715*(t668*t828 + t747*t832 + t817*t847) - 0.038576*(t668*t875 + t747*t888 + t817*t904) - 0.80315*(t668*t929 + t747*t931 + t817*t934);
  p_output1[2]=t1004 + t1019 + t1054 + t1068 + t1084 + t1105 + t1118 - 1.*t21*t275*t386 - 1.*t21*t327*t391 + t989;
  p_output1[3]=t1004 + t1019 + t1054 + t1068 + t1084 + t1105 + t1118 + t1130*t21*t275 - 1.*t1143*t21*t391 + t989;
  p_output1[4]=t1250*t1254 + t1183*t352 + t1356*t628 + t1339*t722 + t1290*t774 - 0.148715*(t1356*t828 + t1339*t832 + t1290*t847) - 0.038576*(t1356*t875 + t1339*t888 + t1290*t904) - 0.80315*(t1356*t929 + t1339*t931 + t1290*t934) + t1214*t986;
  p_output1[5]=t1486*t1501 + t1531*t1543 + t1579*t1610 - 0.80315*(t1543*t1627 + t1610*t1638 - 1.000000000016*t1501*t601) - 0.038576*(t1501*t1650 + t1610*t1676 - 1.000000000049*t1543*t601) - 0.148715*(t1501*t1688 + t1543*t1696 - 6.5e-11*t1610*t601);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=-1.*t1728*t21*t245 + t1761*t327 + t1782*t386 + t1799*t495 + t1808*t543 + t1834*t628 + t1857*t722 + t1884*t774 - 0.148715*(t1834*t828 + t1857*t832 + t1884*t847) - 0.038576*(t1834*t875 + t1857*t888 + t1884*t904) - 0.80315*(t1834*t929 + t1857*t931 + t1884*t934);
  p_output1[9]=t1745*t21*t275*t327 + t1745*t245*t352 - 1.*t1745*t21*t386*t391 + t2006*t495 + t2012*t543 + t2044*t628 + t2058*t722 + t2083*t774 - 0.148715*(t2044*t828 + t2058*t832 + t2083*t847) - 0.038576*(t2044*t875 + t2058*t888 + t2083*t904) - 0.80315*(t2044*t929 + t2058*t931 + t2083*t934);
  p_output1[10]=t2184*t327 + t2171*t386 + t2206*t495 + t2191*t543 + t2259*t628 + t2237*t722 + t2223*t774 - 0.148715*(t2259*t828 + t2237*t832 + t2223*t847) - 0.038576*(t2259*t875 + t2237*t888 + t2223*t904) - 0.80315*(t2259*t929 + t2237*t931 + t2223*t934);
  p_output1[11]=t1143*t2184 + t1130*t2333 + t2373*t495 + t2353*t543 + t2427*t628 + t2409*t722 + t2389*t774 - 0.148715*(t2427*t828 + t2409*t832 + t2389*t847) - 0.038576*(t2427*t875 + t2409*t888 + t2389*t904) - 0.80315*(t2427*t929 + t2409*t931 + t2389*t934);
  p_output1[12]=-1.*t1183*t1745*t21 + t1214*t2353 + t1250*t2532 + t2604*t628 + t2576*t722 + t2553*t774 - 0.148715*(t2604*t828 + t2576*t832 + t2553*t847) - 0.038576*(t2604*t875 + t2576*t888 + t2553*t904) - 0.80315*(t2604*t929 + t2576*t931 + t2553*t934);
  p_output1[13]=t1486*t2733 + t1531*t2749 + t1579*t2785 - 0.80315*(t1627*t2749 + t1638*t2785 - 1.000000000016*t2733*t601) - 0.038576*(t1650*t2733 + t1676*t2785 - 1.000000000049*t2749*t601) - 0.148715*(t1688*t2733 + t1696*t2749 - 6.5e-11*t2785*t601);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=-1.*t1745*t21*t245 + t2333*t327 + t2184*t386 + t2353*t495 + t2532*t543 + t2733*t628 + t2749*t722 + t2785*t774 - 0.148715*(t2733*t828 + t2749*t832 + t2785*t847) - 0.038576*(t2733*t875 + t2749*t888 + t2785*t904) - 0.80315*(t2733*t929 + t2749*t931 + t2785*t934);
  p_output1[17]=-1.*t1728*t21*t275*t327 - 1.*t1728*t245*t352 + t1728*t21*t386*t391 + t2985*t495 + t3004*t543 + t3051*t628 + t3069*t722 + t3101*t774 - 0.148715*(t3051*t828 + t3069*t832 + t3101*t847) - 0.038576*(t3051*t875 + t3069*t888 + t3101*t904) - 0.80315*(t3051*t929 + t3069*t931 + t3101*t934);
  p_output1[18]=t3208*t327 + t1761*t386 + t3237*t495 + t3217*t543 + t3329*t628 + t3312*t722 + t3274*t774 - 0.148715*(t3329*t828 + t3312*t832 + t3274*t847) - 0.038576*(t3329*t875 + t3312*t888 + t3274*t904) - 0.80315*(t3329*t929 + t3312*t931 + t3274*t934);
  p_output1[19]=t1143*t3208 + t1130*t3470 + t3503*t495 + t3495*t543 + t3552*t628 + t3534*t722 + t3515*t774 - 0.148715*(t3552*t828 + t3534*t832 + t3515*t847) - 0.038576*(t3552*t875 + t3534*t888 + t3515*t904) - 0.80315*(t3552*t929 + t3534*t931 + t3515*t934);
  p_output1[20]=t1183*t1728*t21 + t1214*t3495 + t1250*t3654 + t3777*t628 + t3736*t722 + t3719*t774 - 0.148715*(t3777*t828 + t3736*t832 + t3719*t847) - 0.038576*(t3777*t875 + t3736*t888 + t3719*t904) - 0.80315*(t3777*t929 + t3736*t931 + t3719*t934);
  p_output1[21]=t1486*t3872 + t1531*t3881 + t1579*t3917 - 0.80315*(t1627*t3881 + t1638*t3917 - 1.000000000016*t3872*t601) - 0.038576*(t1650*t3872 + t1676*t3917 - 1.000000000049*t3881*t601) - 0.148715*(t1688*t3872 + t1696*t3881 - 6.5e-11*t3917*t601);
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

#include "J_h_RrFoot_ParallelStance.hh"

namespace ParallelStance
{

void J_h_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
