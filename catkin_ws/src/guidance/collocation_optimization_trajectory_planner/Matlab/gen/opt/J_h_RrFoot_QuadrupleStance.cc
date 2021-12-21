/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 22:33:36 GMT+01:00
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
  double t101;
  double t102;
  double t125;
  double t200;
  double t352;
  double t353;
  double t356;
  double t360;
  double t372;
  double t419;
  double t269;
  double t272;
  double t349;
  double t466;
  double t527;
  double t171;
  double t846;
  double t849;
  double t850;
  double t885;
  double t20;
  double t690;
  double t589;
  double t603;
  double t642;
  double t749;
  double t761;
  double t773;
  double t930;
  double t273;
  double t981;
  double t224;
  double t876;
  double t1132;
  double t1134;
  double t1169;
  double t568;
  double t1028;
  double t528;
  double t1205;
  double t999;
  double t1019;
  double t1029;
  double t1032;
  double t1039;
  double t1047;
  double t1064;
  double t1068;
  double t1212;
  double t1153;
  double t1155;
  double t1163;
  double t1172;
  double t1179;
  double t1185;
  double t1186;
  double t1197;
  double t1226;
  double t1228;
  double t1244;
  double t1265;
  double t1267;
  double t1271;
  double t1278;
  double t1307;
  double t1113;
  double t1343;
  double t1137;
  double t1407;
  double t1320;
  double t905;
  double t443;
  double t464;
  double t386;
  double t391;
  double t667;
  double t676;
  double t694;
  double t714;
  double t723;
  double t726;
  double t745;
  double t490;
  double t523;
  double t550;
  double t551;
  double t575;
  double t580;
  double t587;
  double t1201;
  double t1204;
  double t1206;
  double t1210;
  double t1220;
  double t1221;
  double t1225;
  double t1543;
  double t1546;
  double t1547;
  double t1562;
  double t1566;
  double t1567;
  double t1090;
  double t1091;
  double t1125;
  double t1130;
  double t1142;
  double t1148;
  double t1151;
  double t801;
  double t856;
  double t906;
  double t917;
  double t953;
  double t970;
  double t973;
  double t1511;
  double t1579;
  double t1581;
  double t1583;
  double t1508;
  double t1600;
  double t1601;
  double t1603;
  double t1499;
  double t1500;
  double t1613;
  double t1615;
  double t1624;
  double t1474;
  double t1425;
  double t1453;
  double t1419;
  double t1374;
  double t1384;
  double t1350;
  double t1334;
  double t1557;
  double t1569;
  double t1592;
  double t1611;
  double t1629;
  double t1634;
  double t1636;
  double t1640;
  double t1641;
  double t1653;
  double t1655;
  double t1661;
  double t1675;
  double t1680;
  double t1682;
  double t1689;
  double t1694;
  double t1699;
  double t1703;
  double t1705;
  double t1753;
  double t1779;
  double t1789;
  double t1863;
  double t1870;
  double t1876;
  double t1735;
  double t1925;
  double t1843;
  double t1880;
  double t1883;
  double t1890;
  double t1891;
  double t1901;
  double t1902;
  double t1913;
  double t1917;
  double t1921;
  double t1926;
  double t1927;
  double t1930;
  double t1932;
  double t1934;
  double t1937;
  double t1943;
  double t1950;
  double t1951;
  double t2049;
  double t2074;
  double t2076;
  double t2080;
  double t2082;
  double t2105;
  double t2121;
  double t2129;
  double t2131;
  double t2054;
  double t2172;
  double t2179;
  double t2180;
  double t2181;
  double t2188;
  double t2091;
  double t2154;
  double t2136;
  double t21;
  double t161;
  double t230;
  double t256;
  double t296;
  double t312;
  double t320;
  double t2247;
  double t2263;
  double t2261;
  double t2269;
  double t2275;
  double t2285;
  double t2289;
  double t2295;
  double t2300;
  double t2301;
  double t2305;
  double t2316;
  double t2317;
  double t2323;
  double t2332;
  double t2343;
  double t2344;
  double t2347;
  double t2354;
  double t2355;
  double t2360;
  double t2363;
  double t2369;
  double t2371;
  double t2377;
  double t2379;
  double t2494;
  double t2510;
  double t2512;
  double t2523;
  double t2530;
  double t2533;
  double t2549;
  double t2551;
  double t2566;
  double t2569;
  double t2581;
  double t2582;
  double t2586;
  double t2592;
  double t2600;
  double t2601;
  double t2606;
  double t2609;
  double t2694;
  double t2697;
  double t2701;
  double t2706;
  double t2709;
  double t2721;
  double t2723;
  double t2724;
  double t2727;
  double t2729;
  double t2730;
  double t2735;
  double t2744;
  double t2746;
  double t2747;
  double t2772;
  double t2774;
  double t2777;
  double t2784;
  double t2787;
  double t2790;
  double t1712;
  double t1718;
  double t1720;
  double t1728;
  double t2852;
  double t2858;
  double t2861;
  double t2871;
  double t2881;
  double t2894;
  double t2903;
  double t2906;
  double t2916;
  double t2926;
  double t2934;
  double t2940;
  double t2942;
  double t2949;
  double t2951;
  double t2955;
  double t1740;
  double t1748;
  double t1755;
  double t1756;
  double t1761;
  double t1762;
  double t1783;
  double t1784;
  double t1793;
  double t1807;
  double t1814;
  double t1819;
  double t1830;
  double t1839;
  double t1849;
  double t1855;
  double t1856;
  double t1857;
  double t3028;
  double t3031;
  double t3034;
  double t3044;
  double t3048;
  double t3060;
  double t3061;
  double t3071;
  double t3073;
  double t3076;
  double t3088;
  double t3101;
  double t3106;
  double t3107;
  double t3110;
  double t2050;
  double t2052;
  double t2058;
  double t2064;
  double t2072;
  double t2073;
  double t2093;
  double t2094;
  double t2096;
  double t2098;
  double t2099;
  double t2103;
  double t2148;
  double t2150;
  double t2158;
  double t2162;
  double t2164;
  double t2170;
  double t3190;
  double t3198;
  double t3201;
  double t3203;
  double t2189;
  double t3213;
  double t3217;
  double t3218;
  double t3221;
  double t2198;
  double t3224;
  double t3238;
  double t3241;
  double t3243;
  double t2208;
  double t2215;
  double t2225;
  double t2227;
  double t3441;
  double t3445;
  double t3449;
  double t3454;
  double t3456;
  double t3457;
  double t3466;
  double t3467;
  double t3468;
  double t3469;
  double t3480;
  double t3482;
  double t3485;
  double t3487;
  double t3495;
  double t3497;
  double t3499;
  double t3500;
  double t3548;
  double t3552;
  double t3554;
  double t3567;
  double t3569;
  double t3570;
  double t3576;
  double t3577;
  double t3582;
  double t3583;
  double t3596;
  double t3603;
  double t3604;
  double t3610;
  double t3624;
  double t3629;
  double t3631;
  double t3683;
  double t3686;
  double t3688;
  double t3710;
  double t3712;
  double t3714;
  double t3718;
  double t3751;
  double t3754;
  double t3755;
  double t3760;
  double t3763;
  double t3764;
  double t3775;
  double t3780;
  double t3782;
  double t3909;
  double t3911;
  double t3913;
  double t3916;
  double t3917;
  double t3918;
  double t3919;
  double t3921;
  double t3922;
  double t3924;
  double t3925;
  double t3929;
  double t3930;
  double t3931;
  double t3935;
  double t3969;
  double t3970;
  double t3977;
  double t3978;
  double t3984;
  double t3986;
  double t3987;
  double t3993;
  double t3997;
  double t4003;
  double t4004;
  double t4006;
  t101 = Cos(var1[16]);
  t102 = -1.*t101;
  t125 = 1. + t102;
  t200 = Sin(var1[16]);
  t352 = Cos(var1[15]);
  t353 = -1.*t352;
  t356 = 1. + t353;
  t360 = -0.15121*t356;
  t372 = Sin(var1[15]);
  t419 = Sin(var1[4]);
  t269 = -1. + t101;
  t272 = 4.e-6*t269;
  t349 = Cos(var1[5]);
  t466 = Sin(var1[5]);
  t527 = 7.e-6*t125;
  t171 = 2.8e-11*t125;
  t846 = Cos(var1[17]);
  t849 = -1.*t846;
  t850 = 1. + t849;
  t885 = Sin(var1[17]);
  t20 = Cos(var1[4]);
  t690 = -4.e-6*t200;
  t589 = t349*t372*t419;
  t603 = t352*t419*t466;
  t642 = t589 + t603;
  t749 = -1.*t352*t349*t419;
  t761 = t372*t419*t466;
  t773 = t749 + t761;
  t930 = 2.8e-11*t850;
  t273 = -7.e-6*t200;
  t981 = -2.8e-11*t125;
  t224 = -1.*t200;
  t876 = 7.e-6*t850;
  t1132 = -1. + t846;
  t1134 = 4.e-6*t1132;
  t1169 = 4.e-6*t125;
  t568 = 7.e-6*t200;
  t1028 = -7.e-6*t125;
  t528 = 4.e-6*t200;
  t1205 = 4.e-6*t885;
  t999 = t981 + t200;
  t1019 = t20*t999;
  t1029 = t1028 + t690;
  t1032 = t1029*t642;
  t1039 = -1.000000000016*t125;
  t1047 = 1. + t1039;
  t1064 = t1047*t773;
  t1068 = t1019 + t1032 + t1064;
  t1212 = 7.e-6*t885;
  t1153 = -1.000000000049*t125;
  t1155 = 1. + t1153;
  t1163 = t1155*t20;
  t1172 = t1169 + t273;
  t1179 = t1172*t642;
  t1185 = t981 + t224;
  t1186 = t1185*t773;
  t1197 = t1163 + t1179 + t1186;
  t1226 = t1169 + t568;
  t1228 = t20*t1226;
  t1244 = -6.5e-11*t125;
  t1265 = 1. + t1244;
  t1267 = t1265*t642;
  t1271 = t1028 + t528;
  t1278 = t1271*t773;
  t1307 = t1228 + t1267 + t1278;
  t1113 = -1.*t885;
  t1343 = 4.e-6*t850;
  t1137 = -7.e-6*t885;
  t1407 = -2.8e-11*t850;
  t1320 = -7.e-6*t850;
  t905 = -4.e-6*t885;
  t443 = 0.15121*t372;
  t464 = t360 + t443;
  t386 = -0.15121*t372;
  t391 = t360 + t386;
  t667 = -2.7726089999999997e-12*var1[16];
  t676 = -0.2812110000084994*t125;
  t694 = t527 + t690;
  t714 = -1.8134809999999998e-6*t694;
  t723 = t171 + t200;
  t726 = -0.038749000006999997*t723;
  t745 = t667 + t676 + t714 + t726;
  t490 = 3.9608699999999997e-7*var1[16];
  t523 = -1.1787626499999999e-16*t125;
  t550 = t527 + t528;
  t551 = -0.281211000004*t550;
  t575 = t272 + t568;
  t580 = -0.038749000006999997*t575;
  t587 = t490 + t523 + t551 + t580;
  t1201 = 2.826290000000002e-7*var1[17];
  t1204 = -2.18904205e-16*t850;
  t1206 = t876 + t1205;
  t1210 = -0.5031510000080001*t1206;
  t1220 = t1134 + t1212;
  t1221 = -0.038575000014*t1220;
  t1225 = t1201 + t1204 + t1210 + t1221;
  t1543 = -1.*t20*t349*t372;
  t1546 = -1.*t352*t20*t466;
  t1547 = t1543 + t1546;
  t1562 = -1.*t352*t20*t349;
  t1566 = t20*t372*t466;
  t1567 = t1562 + t1566;
  t1090 = 1.1305160000000008e-12*var1[17];
  t1091 = -0.03857500001589017*t850;
  t1125 = t930 + t1113;
  t1130 = -0.5031510000080001*t1125;
  t1142 = t1134 + t1137;
  t1148 = -3.367757e-6*t1142;
  t1151 = t1090 + t1091 + t1130 + t1148;
  t801 = -1.9784030000000015e-12*var1[17];
  t856 = -0.5031510000160505*t850;
  t906 = t876 + t905;
  t917 = -3.367757e-6*t906;
  t953 = t930 + t885;
  t970 = -0.038575000014*t953;
  t973 = t801 + t856 + t917 + t970;
  t1511 = t1320 + t905;
  t1579 = t1271*t1547;
  t1581 = t1265*t1567;
  t1583 = t1579 + t1581;
  t1508 = t1407 + t885;
  t1600 = t1185*t1547;
  t1601 = t1172*t1567;
  t1603 = t1600 + t1601;
  t1499 = -1.000000000016*t850;
  t1500 = 1. + t1499;
  t1613 = t1047*t1547;
  t1615 = t1029*t1567;
  t1624 = t1613 + t1615;
  t1474 = t1343 + t1137;
  t1425 = -1.000000000049*t850;
  t1453 = 1. + t1425;
  t1419 = t1407 + t1113;
  t1374 = -6.5e-11*t850;
  t1384 = 1. + t1374;
  t1350 = t1343 + t1212;
  t1334 = t1320 + t1205;
  t1557 = t745*t1547;
  t1569 = t587*t1567;
  t1592 = t1225*t1583;
  t1611 = t1151*t1603;
  t1629 = t973*t1624;
  t1634 = t1511*t1583;
  t1636 = t1508*t1603;
  t1640 = t1500*t1624;
  t1641 = t1634 + t1636 + t1640;
  t1653 = -0.80315*t1641;
  t1655 = t1474*t1583;
  t1661 = t1453*t1603;
  t1675 = t1419*t1624;
  t1680 = t1655 + t1661 + t1675;
  t1682 = -0.038576*t1680;
  t1689 = t1384*t1583;
  t1694 = t1350*t1603;
  t1699 = t1334*t1624;
  t1703 = t1689 + t1694 + t1699;
  t1705 = -0.148715*t1703;
  t1753 = 2.8e-11*t200;
  t1779 = 7.e-6*t101;
  t1789 = 4.e-6*t101;
  t1863 = t352*t20*t349;
  t1870 = -1.*t20*t372*t466;
  t1876 = t1863 + t1870;
  t1735 = -7.e-6*t101;
  t1925 = -2.8e-11*t200;
  t1843 = -4.e-6*t101;
  t1880 = t1779 + t528;
  t1883 = t1880*t419;
  t1890 = -6.5e-11*t200*t1547;
  t1891 = t1789 + t273;
  t1901 = t1891*t1876;
  t1902 = t1883 + t1890 + t1901;
  t1913 = -1.000000000049*t200*t419;
  t1917 = t1735 + t528;
  t1921 = t1917*t1547;
  t1926 = t102 + t1925;
  t1927 = t1926*t1876;
  t1930 = t1913 + t1921 + t1927;
  t1932 = t101 + t1925;
  t1934 = t1932*t419;
  t1937 = t1843 + t273;
  t1943 = t1937*t1547;
  t1950 = -1.000000000016*t200*t1876;
  t1951 = t1934 + t1943 + t1950;
  t2049 = 2.8e-11*t885;
  t2074 = t999*t419;
  t2076 = t1029*t1547;
  t2080 = t1047*t1876;
  t2082 = t2074 + t2076 + t2080;
  t2105 = t1155*t419;
  t2121 = t1172*t1547;
  t2129 = t1185*t1876;
  t2131 = t2105 + t2121 + t2129;
  t2054 = -4.e-6*t846;
  t2172 = t1226*t419;
  t2179 = t1265*t1547;
  t2180 = t1271*t1876;
  t2181 = t2172 + t2179 + t2180;
  t2188 = -2.8e-11*t885;
  t2091 = -7.e-6*t846;
  t2154 = 4.e-6*t846;
  t2136 = 7.e-6*t846;
  t21 = 1.5843479999999999e-12*var1[16];
  t161 = -0.03874900000889869*t125;
  t230 = t171 + t224;
  t256 = -0.281211000004*t230;
  t296 = t272 + t273;
  t312 = -1.8134809999999998e-6*t296;
  t320 = t21 + t161 + t256 + t312;
  t2247 = Cos(var1[3]);
  t2263 = Sin(var1[3]);
  t2261 = t2247*t349*t419;
  t2269 = -1.*t2263*t466;
  t2275 = t2261 + t2269;
  t2285 = -1.*t349*t2263;
  t2289 = -1.*t2247*t419*t466;
  t2295 = t2285 + t2289;
  t2300 = -1.*t372*t2275;
  t2301 = t352*t2295;
  t2305 = t2300 + t2301;
  t2316 = t352*t2275;
  t2317 = t372*t2295;
  t2323 = t2316 + t2317;
  t2332 = -1.*t2247*t20*t999;
  t2343 = t1029*t2305;
  t2344 = t1047*t2323;
  t2347 = t2332 + t2343 + t2344;
  t2354 = -1.*t1155*t2247*t20;
  t2355 = t1172*t2305;
  t2360 = t1185*t2323;
  t2363 = t2354 + t2355 + t2360;
  t2369 = -1.*t2247*t20*t1226;
  t2371 = t1265*t2305;
  t2377 = t1271*t2323;
  t2379 = t2369 + t2371 + t2377;
  t2494 = -1.*t20*t349*t372*t2263;
  t2510 = -1.*t352*t20*t2263*t466;
  t2512 = t2494 + t2510;
  t2523 = t352*t20*t349*t2263;
  t2530 = -1.*t20*t372*t2263*t466;
  t2533 = t2523 + t2530;
  t2549 = t999*t2263*t419;
  t2551 = t1029*t2512;
  t2566 = t1047*t2533;
  t2569 = t2549 + t2551 + t2566;
  t2581 = t1155*t2263*t419;
  t2582 = t1172*t2512;
  t2586 = t1185*t2533;
  t2592 = t2581 + t2582 + t2586;
  t2600 = t1226*t2263*t419;
  t2601 = t1265*t2512;
  t2606 = t1271*t2533;
  t2609 = t2600 + t2601 + t2606;
  t2694 = -1.*t349*t2263*t419;
  t2697 = -1.*t2247*t466;
  t2701 = t2694 + t2697;
  t2706 = t2247*t349;
  t2709 = -1.*t2263*t419*t466;
  t2721 = t2706 + t2709;
  t2723 = t372*t2701;
  t2724 = t352*t2721;
  t2727 = t2723 + t2724;
  t2729 = t352*t2701;
  t2730 = -1.*t372*t2721;
  t2735 = t2729 + t2730;
  t2744 = t1271*t2727;
  t2746 = t1265*t2735;
  t2747 = t2744 + t2746;
  t2772 = t1185*t2727;
  t2774 = t1172*t2735;
  t2777 = t2772 + t2774;
  t2784 = t1047*t2727;
  t2787 = t1029*t2735;
  t2790 = t2784 + t2787;
  t1712 = -0.15121*t352;
  t1718 = t1712 + t386;
  t1720 = 0.15121*t352;
  t1728 = t1720 + t386;
  t2852 = t349*t2263*t419;
  t2858 = t2247*t466;
  t2861 = t2852 + t2858;
  t2871 = -1.*t372*t2861;
  t2881 = t2871 + t2724;
  t2894 = -1.*t352*t2861;
  t2903 = t2894 + t2730;
  t2906 = t1271*t2881;
  t2916 = t1265*t2903;
  t2926 = t2906 + t2916;
  t2934 = t1185*t2881;
  t2940 = t1172*t2903;
  t2942 = t2934 + t2940;
  t2949 = t1047*t2881;
  t2951 = t1029*t2903;
  t2955 = t2949 + t2951;
  t1740 = t1735 + t690;
  t1748 = -1.8134809999999998e-6*t1740;
  t1755 = t102 + t1753;
  t1756 = -0.281211000004*t1755;
  t1761 = -0.03874900000889869*t200;
  t1762 = 1.5843479999999999e-12 + t1748 + t1756 + t1761;
  t1783 = t1779 + t690;
  t1784 = -0.038749000006999997*t1783;
  t1793 = t1789 + t568;
  t1807 = -0.281211000004*t1793;
  t1814 = -1.1787626499999999e-16*t200;
  t1819 = 3.9608699999999997e-7 + t1784 + t1807 + t1814;
  t1830 = t101 + t1753;
  t1839 = -0.038749000006999997*t1830;
  t1849 = t1843 + t568;
  t1855 = -1.8134809999999998e-6*t1849;
  t1856 = -0.2812110000084994*t200;
  t1857 = -2.7726089999999997e-12 + t1839 + t1855 + t1856;
  t3028 = t352*t2861;
  t3031 = t372*t2721;
  t3034 = t3028 + t3031;
  t3044 = -1.*t20*t1880*t2263;
  t3048 = -6.5e-11*t200*t2881;
  t3060 = t1891*t3034;
  t3061 = t3044 + t3048 + t3060;
  t3071 = 1.000000000049*t20*t200*t2263;
  t3073 = t1917*t2881;
  t3076 = t1926*t3034;
  t3088 = t3071 + t3073 + t3076;
  t3101 = -1.*t20*t1932*t2263;
  t3106 = t1937*t2881;
  t3107 = -1.000000000016*t200*t3034;
  t3110 = t3101 + t3106 + t3107;
  t2050 = t846 + t2049;
  t2052 = -0.038575000014*t2050;
  t2058 = t2054 + t1212;
  t2064 = -3.367757e-6*t2058;
  t2072 = -0.5031510000160505*t885;
  t2073 = -1.9784030000000015e-12 + t2052 + t2064 + t2072;
  t2093 = t2091 + t905;
  t2094 = -3.367757e-6*t2093;
  t2096 = t849 + t2049;
  t2098 = -0.5031510000080001*t2096;
  t2099 = -0.03857500001589017*t885;
  t2103 = 1.1305160000000008e-12 + t2094 + t2098 + t2099;
  t2148 = t2136 + t905;
  t2150 = -0.038575000014*t2148;
  t2158 = t2154 + t1212;
  t2162 = -0.5031510000080001*t2158;
  t2164 = -2.18904205e-16*t885;
  t2170 = 2.826290000000002e-7 + t2150 + t2162 + t2164;
  t3190 = -1.*t20*t999*t2263;
  t3198 = t1029*t2881;
  t3201 = t1047*t3034;
  t3203 = t3190 + t3198 + t3201;
  t2189 = t846 + t2188;
  t3213 = -1.*t1155*t20*t2263;
  t3217 = t1172*t2881;
  t3218 = t1185*t3034;
  t3221 = t3213 + t3217 + t3218;
  t2198 = t2054 + t1137;
  t3224 = -1.*t20*t1226*t2263;
  t3238 = t1265*t2881;
  t3241 = t1271*t3034;
  t3243 = t3224 + t3238 + t3241;
  t2208 = t849 + t2188;
  t2215 = t2091 + t1205;
  t2225 = t2154 + t1137;
  t2227 = t2136 + t1205;
  t3441 = t2247*t20*t349*t372;
  t3445 = t352*t2247*t20*t466;
  t3449 = t3441 + t3445;
  t3454 = -1.*t352*t2247*t20*t349;
  t3456 = t2247*t20*t372*t466;
  t3457 = t3454 + t3456;
  t3466 = -1.*t2247*t999*t419;
  t3467 = t1029*t3449;
  t3468 = t1047*t3457;
  t3469 = t3466 + t3467 + t3468;
  t3480 = -1.*t1155*t2247*t419;
  t3482 = t1172*t3449;
  t3485 = t1185*t3457;
  t3487 = t3480 + t3482 + t3485;
  t3495 = -1.*t2247*t1226*t419;
  t3497 = t1265*t3449;
  t3499 = t1271*t3457;
  t3500 = t3495 + t3497 + t3499;
  t3548 = t349*t2263;
  t3552 = t2247*t419*t466;
  t3554 = t3548 + t3552;
  t3567 = t372*t2275;
  t3569 = t352*t3554;
  t3570 = t3567 + t3569;
  t3576 = -1.*t372*t3554;
  t3577 = t2316 + t3576;
  t3582 = t1271*t3570;
  t3583 = t1265*t3577;
  t3596 = t3582 + t3583;
  t3603 = t1185*t3570;
  t3604 = t1172*t3577;
  t3610 = t3603 + t3604;
  t3624 = t1047*t3570;
  t3629 = t1029*t3577;
  t3631 = t3624 + t3629;
  t3683 = -1.*t2247*t349*t419;
  t3686 = t2263*t466;
  t3688 = t3683 + t3686;
  t3710 = -1.*t372*t3688;
  t3712 = t3710 + t3569;
  t3714 = -1.*t352*t3688;
  t3718 = t3714 + t3576;
  t3751 = t1271*t3712;
  t3754 = t1265*t3718;
  t3755 = t3751 + t3754;
  t3760 = t1185*t3712;
  t3763 = t1172*t3718;
  t3764 = t3760 + t3763;
  t3775 = t1047*t3712;
  t3780 = t1029*t3718;
  t3782 = t3775 + t3780;
  t3909 = t352*t3688;
  t3911 = t372*t3554;
  t3913 = t3909 + t3911;
  t3916 = t2247*t20*t1880;
  t3917 = -6.5e-11*t200*t3712;
  t3918 = t1891*t3913;
  t3919 = t3916 + t3917 + t3918;
  t3921 = -1.000000000049*t2247*t20*t200;
  t3922 = t1917*t3712;
  t3924 = t1926*t3913;
  t3925 = t3921 + t3922 + t3924;
  t3929 = t2247*t20*t1932;
  t3930 = t1937*t3712;
  t3931 = -1.000000000016*t200*t3913;
  t3935 = t3929 + t3930 + t3931;
  t3969 = t2247*t20*t999;
  t3970 = t1029*t3712;
  t3977 = t1047*t3913;
  t3978 = t3969 + t3970 + t3977;
  t3984 = t1155*t2247*t20;
  t3986 = t1172*t3712;
  t3987 = t1185*t3913;
  t3993 = t3984 + t3986 + t3987;
  t3997 = t2247*t20*t1226;
  t4003 = t1265*t3712;
  t4004 = t1271*t3913;
  t4006 = t3997 + t4003 + t4004;
  p_output1[0]=1.;
  p_output1[1]=t1151*t1197 + t1225*t1307 - 0.148715*(t1068*t1334 + t1197*t1350 + t1307*t1384) - 0.038576*(t1068*t1419 + t1197*t1453 + t1307*t1474) - 0.80315*(t1068*t1500 + t1197*t1508 + t1307*t1511) + t20*t320 - 1.*t349*t391*t419 + t419*t464*t466 + t587*t642 + t745*t773 + t1068*t973;
  p_output1[2]=t1557 + t1569 + t1592 + t1611 + t1629 + t1653 + t1682 + t1705 - 1.*t20*t349*t464 - 1.*t20*t391*t466;
  p_output1[3]=t1557 + t1569 + t1592 + t1611 + t1629 + t1653 + t1682 + t1705 + t1718*t20*t349 - 1.*t1728*t20*t466;
  p_output1[4]=t1547*t1819 + t1857*t1876 + t1225*t1902 + t1151*t1930 - 0.148715*(t1384*t1902 + t1350*t1930 + t1334*t1951) - 0.038576*(t1474*t1902 + t1453*t1930 + t1419*t1951) - 0.80315*(t1511*t1902 + t1508*t1930 + t1500*t1951) + t1762*t419 + t1951*t973;
  p_output1[5]=t2073*t2082 + t2103*t2131 + t2170*t2181 - 0.80315*(t2131*t2189 + t2181*t2198 - 1.000000000016*t2082*t885) - 0.038576*(t2082*t2208 + t2181*t2215 - 1.000000000049*t2131*t885) - 0.148715*(t2082*t2225 + t2131*t2227 - 6.5e-11*t2181*t885);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=t1151*t2363 + t1225*t2379 - 0.148715*(t1334*t2347 + t1350*t2363 + t1384*t2379) - 0.038576*(t1419*t2347 + t1453*t2363 + t1474*t2379) - 0.80315*(t1500*t2347 + t1508*t2363 + t1511*t2379) - 1.*t20*t2247*t320 + t2275*t391 + t2295*t464 + t2305*t587 + t2323*t745 + t2347*t973;
  p_output1[9]=t1151*t2592 + t1225*t2609 - 0.148715*(t1334*t2569 + t1350*t2592 + t1384*t2609) - 0.038576*(t1419*t2569 + t1453*t2592 + t1474*t2609) - 0.80315*(t1500*t2569 + t1508*t2592 + t1511*t2609) + t20*t2263*t349*t391 + t2263*t320*t419 - 1.*t20*t2263*t464*t466 + t2512*t587 + t2533*t745 + t2569*t973;
  p_output1[10]=t1225*t2747 + t1151*t2777 - 0.148715*(t1384*t2747 + t1350*t2777 + t1334*t2790) - 0.038576*(t1474*t2747 + t1453*t2777 + t1419*t2790) - 0.80315*(t1511*t2747 + t1508*t2777 + t1500*t2790) + t2721*t391 + t2701*t464 + t2735*t587 + t2727*t745 + t2790*t973;
  p_output1[11]=t1728*t2721 + t1718*t2861 + t1225*t2926 + t1151*t2942 - 0.148715*(t1384*t2926 + t1350*t2942 + t1334*t2955) - 0.038576*(t1474*t2926 + t1453*t2942 + t1419*t2955) - 0.80315*(t1511*t2926 + t1508*t2942 + t1500*t2955) + t2903*t587 + t2881*t745 + t2955*t973;
  p_output1[12]=-1.*t1762*t20*t2263 + t1819*t2881 + t1857*t3034 + t1225*t3061 + t1151*t3088 - 0.148715*(t1384*t3061 + t1350*t3088 + t1334*t3110) - 0.038576*(t1474*t3061 + t1453*t3088 + t1419*t3110) - 0.80315*(t1511*t3061 + t1508*t3088 + t1500*t3110) + t3110*t973;
  p_output1[13]=t2073*t3203 + t2103*t3221 + t2170*t3243 - 0.80315*(t2189*t3221 + t2198*t3243 - 1.000000000016*t3203*t885) - 0.038576*(t2208*t3203 + t2215*t3243 - 1.000000000049*t3221*t885) - 0.148715*(t2225*t3203 + t2227*t3221 - 6.5e-11*t3243*t885);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=-1.*t20*t2263*t320 + t1151*t3221 + t1225*t3243 - 0.148715*(t1334*t3203 + t1350*t3221 + t1384*t3243) - 0.038576*(t1419*t3203 + t1453*t3221 + t1474*t3243) - 0.80315*(t1500*t3203 + t1508*t3221 + t1511*t3243) + t2861*t391 + t2721*t464 + t2881*t587 + t3034*t745 + t3203*t973;
  p_output1[17]=t1151*t3487 + t1225*t3500 - 0.148715*(t1334*t3469 + t1350*t3487 + t1384*t3500) - 0.038576*(t1419*t3469 + t1453*t3487 + t1474*t3500) - 0.80315*(t1500*t3469 + t1508*t3487 + t1511*t3500) - 1.*t20*t2247*t349*t391 - 1.*t2247*t320*t419 + t20*t2247*t464*t466 + t3449*t587 + t3457*t745 + t3469*t973;
  p_output1[18]=t1225*t3596 + t1151*t3610 - 0.148715*(t1384*t3596 + t1350*t3610 + t1334*t3631) - 0.038576*(t1474*t3596 + t1453*t3610 + t1419*t3631) - 0.80315*(t1511*t3596 + t1508*t3610 + t1500*t3631) + t3554*t391 + t2275*t464 + t3577*t587 + t3570*t745 + t3631*t973;
  p_output1[19]=t1728*t3554 + t1718*t3688 + t1225*t3755 + t1151*t3764 - 0.148715*(t1384*t3755 + t1350*t3764 + t1334*t3782) - 0.038576*(t1474*t3755 + t1453*t3764 + t1419*t3782) - 0.80315*(t1511*t3755 + t1508*t3764 + t1500*t3782) + t3718*t587 + t3712*t745 + t3782*t973;
  p_output1[20]=t1762*t20*t2247 + t1819*t3712 + t1857*t3913 + t1225*t3919 + t1151*t3925 - 0.148715*(t1384*t3919 + t1350*t3925 + t1334*t3935) - 0.038576*(t1474*t3919 + t1453*t3925 + t1419*t3935) - 0.80315*(t1511*t3919 + t1508*t3925 + t1500*t3935) + t3935*t973;
  p_output1[21]=t2073*t3978 + t2103*t3993 + t2170*t4006 - 0.80315*(t2189*t3993 + t2198*t4006 - 1.000000000016*t3978*t885) - 0.038576*(t2208*t3978 + t2215*t4006 - 1.000000000049*t3993*t885) - 0.148715*(t2225*t3978 + t2227*t3993 - 6.5e-11*t4006*t885);
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

#include "J_h_RrFoot_QuadrupleStance.hh"

namespace QuadrupleStance
{

void J_h_RrFoot_QuadrupleStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
