/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:27:07 GMT+01:00
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
  double t191;
  double t204;
  double t244;
  double t347;
  double t446;
  double t486;
  double t490;
  double t502;
  double t506;
  double t517;
  double t336;
  double t443;
  double t576;
  double t391;
  double t641;
  double t838;
  double t856;
  double t857;
  double t883;
  double t9;
  double t753;
  double t785;
  double t688;
  double t699;
  double t700;
  double t813;
  double t814;
  double t818;
  double t940;
  double t615;
  double t987;
  double t664;
  double t1034;
  double t873;
  double t1134;
  double t1151;
  double t356;
  double t960;
  double t968;
  double t986;
  double t988;
  double t989;
  double t993;
  double t995;
  double t999;
  double t1012;
  double t1237;
  double t1159;
  double t1166;
  double t1167;
  double t1170;
  double t1181;
  double t1190;
  double t1207;
  double t1213;
  double t1258;
  double t1269;
  double t1274;
  double t1287;
  double t1289;
  double t1292;
  double t1294;
  double t1301;
  double t948;
  double t1304;
  double t900;
  double t1384;
  double t1069;
  double t1312;
  double t1324;
  double t1035;
  double t542;
  double t544;
  double t492;
  double t512;
  double t706;
  double t728;
  double t767;
  double t772;
  double t786;
  double t802;
  double t812;
  double t597;
  double t604;
  double t620;
  double t626;
  double t681;
  double t685;
  double t686;
  double t1031;
  double t1033;
  double t1055;
  double t1056;
  double t1094;
  double t1098;
  double t1122;
  double t1511;
  double t1515;
  double t1516;
  double t1526;
  double t1532;
  double t1540;
  double t835;
  double t868;
  double t929;
  double t930;
  double t950;
  double t951;
  double t954;
  double t1224;
  double t1230;
  double t1239;
  double t1245;
  double t1247;
  double t1251;
  double t1252;
  double t1325;
  double t1544;
  double t1547;
  double t1552;
  double t1308;
  double t1568;
  double t1572;
  double t1573;
  double t1330;
  double t1344;
  double t1585;
  double t1590;
  double t1604;
  double t1395;
  double t1372;
  double t1376;
  double t1413;
  double t1447;
  double t1460;
  double t1437;
  double t1464;
  double t1674;
  double t1519;
  double t1543;
  double t1562;
  double t1580;
  double t1612;
  double t1617;
  double t1618;
  double t1620;
  double t1624;
  double t1625;
  double t1637;
  double t1640;
  double t1645;
  double t1648;
  double t1654;
  double t1655;
  double t1656;
  double t1659;
  double t1663;
  double t1671;
  double t1698;
  double t1769;
  double t1783;
  double t1857;
  double t1858;
  double t1862;
  double t1723;
  double t1914;
  double t1832;
  double t1867;
  double t1877;
  double t1887;
  double t1890;
  double t1897;
  double t1899;
  double t1902;
  double t1903;
  double t1905;
  double t1916;
  double t1920;
  double t1925;
  double t1927;
  double t1929;
  double t1933;
  double t1940;
  double t1959;
  double t1963;
  double t2013;
  double t2095;
  double t2045;
  double t2052;
  double t2053;
  double t2055;
  double t2105;
  double t2106;
  double t2107;
  double t2111;
  double t2076;
  double t2130;
  double t2135;
  double t2137;
  double t2145;
  double t2026;
  double t2205;
  double t2118;
  double t180;
  double t270;
  double t360;
  double t379;
  double t399;
  double t408;
  double t422;
  double t2236;
  double t2243;
  double t2240;
  double t2244;
  double t2246;
  double t2256;
  double t2259;
  double t2262;
  double t2266;
  double t2268;
  double t2272;
  double t2275;
  double t2276;
  double t2277;
  double t2283;
  double t2287;
  double t2288;
  double t2289;
  double t2293;
  double t2294;
  double t2295;
  double t2297;
  double t2301;
  double t2316;
  double t2317;
  double t2323;
  double t2391;
  double t2395;
  double t2398;
  double t2403;
  double t2405;
  double t2406;
  double t2416;
  double t2428;
  double t2431;
  double t2441;
  double t2448;
  double t2449;
  double t2456;
  double t2461;
  double t2490;
  double t2492;
  double t2494;
  double t2495;
  double t2609;
  double t2610;
  double t2612;
  double t2627;
  double t2628;
  double t2630;
  double t2636;
  double t2642;
  double t2653;
  double t2656;
  double t2660;
  double t2662;
  double t2673;
  double t2681;
  double t2687;
  double t2706;
  double t2715;
  double t2719;
  double t2734;
  double t2742;
  double t2754;
  double t1677;
  double t1680;
  double t1683;
  double t2859;
  double t2860;
  double t2861;
  double t2867;
  double t2882;
  double t2887;
  double t2888;
  double t2898;
  double t2904;
  double t2911;
  double t2927;
  double t2929;
  double t2930;
  double t2939;
  double t2943;
  double t2948;
  double t1709;
  double t1715;
  double t1730;
  double t1745;
  double t1761;
  double t1762;
  double t1771;
  double t1772;
  double t1786;
  double t1796;
  double t1811;
  double t1818;
  double t1821;
  double t1823;
  double t1834;
  double t1835;
  double t1841;
  double t1850;
  double t3003;
  double t3008;
  double t3022;
  double t3028;
  double t3030;
  double t3034;
  double t3045;
  double t3072;
  double t3081;
  double t3082;
  double t3083;
  double t3088;
  double t3089;
  double t3091;
  double t3096;
  double t2018;
  double t2020;
  double t2030;
  double t2032;
  double t2037;
  double t2038;
  double t2077;
  double t2078;
  double t2096;
  double t2097;
  double t2101;
  double t2103;
  double t2114;
  double t2117;
  double t2119;
  double t2120;
  double t2121;
  double t2126;
  double t2152;
  double t3137;
  double t3140;
  double t3142;
  double t3143;
  double t3151;
  double t3153;
  double t3159;
  double t3169;
  double t2173;
  double t3175;
  double t3176;
  double t3177;
  double t3181;
  double t2181;
  double t2206;
  double t2216;
  double t2220;
  double t3363;
  double t3376;
  double t3378;
  double t3386;
  double t3387;
  double t3388;
  double t3408;
  double t3411;
  double t3412;
  double t3419;
  double t3425;
  double t3436;
  double t3441;
  double t3447;
  double t3466;
  double t3467;
  double t3472;
  double t3476;
  double t3555;
  double t3563;
  double t3564;
  double t3567;
  double t3570;
  double t3578;
  double t3589;
  double t3591;
  double t3607;
  double t3611;
  double t3617;
  double t3626;
  double t3627;
  double t3629;
  double t3632;
  double t3633;
  double t3635;
  double t3696;
  double t3697;
  double t3698;
  double t3714;
  double t3719;
  double t3724;
  double t3736;
  double t3748;
  double t3753;
  double t3754;
  double t3772;
  double t3780;
  double t3781;
  double t3788;
  double t3798;
  double t3801;
  double t3876;
  double t3879;
  double t3887;
  double t3890;
  double t3892;
  double t3896;
  double t3897;
  double t3908;
  double t3918;
  double t3932;
  double t3936;
  double t3946;
  double t3948;
  double t3949;
  double t3951;
  double t4048;
  double t4050;
  double t4053;
  double t4054;
  double t4075;
  double t4112;
  double t4115;
  double t4117;
  double t4120;
  double t4125;
  double t4131;
  double t4132;
  t191 = Cos(var1[13]);
  t204 = -1.*t191;
  t244 = 1. + t204;
  t347 = Sin(var1[13]);
  t446 = Cos(var1[12]);
  t486 = -1.*t446;
  t490 = 1. + t486;
  t502 = Sin(var1[12]);
  t506 = 0.15121*t502;
  t517 = Sin(var1[4]);
  t336 = 4.e-6*t244;
  t443 = Cos(var1[5]);
  t576 = Sin(var1[5]);
  t391 = -2.8e-11*t244;
  t641 = 7.e-6*t244;
  t838 = Cos(var1[14]);
  t856 = -1.*t838;
  t857 = 1. + t856;
  t883 = Sin(var1[14]);
  t9 = Cos(var1[4]);
  t753 = -1.*t347;
  t785 = -4.e-6*t347;
  t688 = t443*t502*t517;
  t699 = t446*t517*t576;
  t700 = t688 + t699;
  t813 = -1.*t446*t443*t517;
  t814 = t502*t517*t576;
  t818 = t813 + t814;
  t940 = 7.e-6*t857;
  t615 = -7.e-6*t347;
  t987 = -7.e-6*t244;
  t664 = 4.e-6*t347;
  t1034 = 4.e-6*t857;
  t873 = -2.8e-11*t857;
  t1134 = -1. + t191;
  t1151 = 4.e-6*t1134;
  t356 = 7.e-6*t347;
  t960 = 2.8e-11*t244;
  t968 = t960 + t753;
  t986 = t9*t968;
  t988 = t987 + t785;
  t989 = t988*t700;
  t993 = -1.000000000016*t244;
  t995 = 1. + t993;
  t999 = t995*t818;
  t1012 = t986 + t989 + t999;
  t1237 = 7.e-6*t883;
  t1159 = t1151 + t615;
  t1166 = t9*t1159;
  t1167 = -6.5e-11*t244;
  t1170 = 1. + t1167;
  t1181 = t1170*t700;
  t1190 = t987 + t664;
  t1207 = t1190*t818;
  t1213 = t1166 + t1181 + t1207;
  t1258 = -1.000000000049*t244;
  t1269 = 1. + t1258;
  t1274 = t1269*t9;
  t1287 = t1151 + t356;
  t1289 = t1287*t700;
  t1292 = t960 + t347;
  t1294 = t1292*t818;
  t1301 = t1274 + t1289 + t1294;
  t948 = -4.e-6*t883;
  t1304 = 2.8e-11*t857;
  t900 = -1.*t883;
  t1384 = -7.e-6*t857;
  t1069 = 4.e-6*t883;
  t1312 = -1. + t838;
  t1324 = 4.e-6*t1312;
  t1035 = -7.e-6*t883;
  t542 = 0.15121*t490;
  t544 = t542 + t506;
  t492 = -0.15121*t490;
  t512 = t492 + t506;
  t706 = 1.0248489999999998e-12*var1[13];
  t728 = -0.28120900000849935*t244;
  t767 = t391 + t753;
  t772 = -0.038748999993*t767;
  t786 = t641 + t785;
  t802 = -2.123459e-6*t786;
  t812 = t706 + t728 + t772 + t802;
  t597 = -1.4640699999999997e-7*var1[13];
  t604 = -1.38024835e-16*t244;
  t620 = t336 + t615;
  t626 = -0.038748999993*t620;
  t681 = t641 + t664;
  t685 = -0.281209000004*t681;
  t686 = t597 + t604 + t626 + t685;
  t1031 = -2.598649999999999e-7*var1[14];
  t1033 = -2.3905277499999995e-16*t857;
  t1055 = t1034 + t1035;
  t1056 = -0.038922999986*t1055;
  t1094 = t940 + t1069;
  t1098 = -0.503149000008*t1094;
  t1122 = t1031 + t1033 + t1056 + t1098;
  t1511 = -1.*t9*t443*t502;
  t1515 = -1.*t446*t9*t576;
  t1516 = t1511 + t1515;
  t1526 = -1.*t446*t9*t443;
  t1532 = t9*t502*t576;
  t1540 = t1526 + t1532;
  t835 = 1.8190549999999993e-12*var1[14];
  t868 = -0.5031490000160505*t857;
  t929 = t873 + t900;
  t930 = -0.038922999986*t929;
  t950 = t940 + t948;
  t951 = -3.6777349999999994e-6*t950;
  t954 = t835 + t868 + t930 + t951;
  t1224 = 1.0394599999999997e-12*var1[14];
  t1230 = -0.03892299998790722*t857;
  t1239 = t1034 + t1237;
  t1245 = -3.6777349999999994e-6*t1239;
  t1247 = t873 + t883;
  t1251 = -0.503149000008*t1247;
  t1252 = t1224 + t1230 + t1245 + t1251;
  t1325 = t1324 + t1237;
  t1544 = t1190*t1516;
  t1547 = t1170*t1540;
  t1552 = t1544 + t1547;
  t1308 = t1304 + t883;
  t1568 = t995*t1516;
  t1572 = t988*t1540;
  t1573 = t1568 + t1572;
  t1330 = -1.000000000049*t857;
  t1344 = 1. + t1330;
  t1585 = t1292*t1516;
  t1590 = t1287*t1540;
  t1604 = t1585 + t1590;
  t1395 = t1384 + t948;
  t1372 = -1.000000000016*t857;
  t1376 = 1. + t1372;
  t1413 = t1304 + t900;
  t1447 = -6.5e-11*t857;
  t1460 = 1. + t1447;
  t1437 = t1384 + t1069;
  t1464 = t1324 + t1035;
  t1674 = 0.15121*t446;
  t1519 = t812*t1516;
  t1543 = t686*t1540;
  t1562 = t1122*t1552;
  t1580 = t954*t1573;
  t1612 = t1252*t1604;
  t1617 = t1325*t1552;
  t1618 = t1308*t1573;
  t1620 = t1344*t1604;
  t1624 = t1617 + t1618 + t1620;
  t1625 = -0.038924*t1624;
  t1637 = t1395*t1552;
  t1640 = t1376*t1573;
  t1645 = t1413*t1604;
  t1648 = t1637 + t1640 + t1645;
  t1654 = -0.80315*t1648;
  t1655 = t1460*t1552;
  t1656 = t1437*t1573;
  t1659 = t1464*t1604;
  t1663 = t1655 + t1656 + t1659;
  t1671 = 0.148705*t1663;
  t1698 = -2.8e-11*t347;
  t1769 = -7.e-6*t191;
  t1783 = 4.e-6*t191;
  t1857 = t446*t9*t443;
  t1858 = -1.*t9*t502*t576;
  t1862 = t1857 + t1858;
  t1723 = 7.e-6*t191;
  t1914 = 2.8e-11*t347;
  t1832 = -4.e-6*t191;
  t1867 = t1769 + t785;
  t1877 = t1867*t517;
  t1887 = -6.5e-11*t347*t1516;
  t1890 = t1783 + t615;
  t1897 = t1890*t1862;
  t1899 = t1877 + t1887 + t1897;
  t1902 = -1.000000000049*t347*t517;
  t1903 = t1723 + t785;
  t1905 = t1903*t1516;
  t1916 = t191 + t1914;
  t1920 = t1916*t1862;
  t1925 = t1902 + t1905 + t1920;
  t1927 = t204 + t1914;
  t1929 = t1927*t517;
  t1933 = t1832 + t615;
  t1940 = t1933*t1516;
  t1959 = -1.000000000016*t347*t1862;
  t1963 = t1929 + t1940 + t1959;
  t2013 = -2.8e-11*t883;
  t2095 = 4.e-6*t838;
  t2045 = t968*t517;
  t2052 = t988*t1516;
  t2053 = t995*t1862;
  t2055 = t2045 + t2052 + t2053;
  t2105 = t1159*t517;
  t2106 = t1170*t1516;
  t2107 = t1190*t1862;
  t2111 = t2105 + t2106 + t2107;
  t2076 = -7.e-6*t838;
  t2130 = t1269*t517;
  t2135 = t1287*t1516;
  t2137 = t1292*t1862;
  t2145 = t2130 + t2135 + t2137;
  t2026 = -4.e-6*t838;
  t2205 = 2.8e-11*t883;
  t2118 = 7.e-6*t838;
  t180 = 5.856279999999999e-13*var1[13];
  t270 = -0.0387489999948987*t244;
  t360 = t336 + t356;
  t379 = -2.123459e-6*t360;
  t399 = t391 + t347;
  t408 = -0.281209000004*t399;
  t422 = t180 + t270 + t379 + t408;
  t2236 = Cos(var1[3]);
  t2243 = Sin(var1[3]);
  t2240 = t2236*t443*t517;
  t2244 = -1.*t2243*t576;
  t2246 = t2240 + t2244;
  t2256 = -1.*t443*t2243;
  t2259 = -1.*t2236*t517*t576;
  t2262 = t2256 + t2259;
  t2266 = -1.*t502*t2246;
  t2268 = t446*t2262;
  t2272 = t2266 + t2268;
  t2275 = t446*t2246;
  t2276 = t502*t2262;
  t2277 = t2275 + t2276;
  t2283 = -1.*t2236*t9*t968;
  t2287 = t988*t2272;
  t2288 = t995*t2277;
  t2289 = t2283 + t2287 + t2288;
  t2293 = -1.*t2236*t9*t1159;
  t2294 = t1170*t2272;
  t2295 = t1190*t2277;
  t2297 = t2293 + t2294 + t2295;
  t2301 = -1.*t1269*t2236*t9;
  t2316 = t1287*t2272;
  t2317 = t1292*t2277;
  t2323 = t2301 + t2316 + t2317;
  t2391 = -1.*t9*t443*t502*t2243;
  t2395 = -1.*t446*t9*t2243*t576;
  t2398 = t2391 + t2395;
  t2403 = t446*t9*t443*t2243;
  t2405 = -1.*t9*t502*t2243*t576;
  t2406 = t2403 + t2405;
  t2416 = t968*t2243*t517;
  t2428 = t988*t2398;
  t2431 = t995*t2406;
  t2441 = t2416 + t2428 + t2431;
  t2448 = t1159*t2243*t517;
  t2449 = t1170*t2398;
  t2456 = t1190*t2406;
  t2461 = t2448 + t2449 + t2456;
  t2490 = t1269*t2243*t517;
  t2492 = t1287*t2398;
  t2494 = t1292*t2406;
  t2495 = t2490 + t2492 + t2494;
  t2609 = -1.*t443*t2243*t517;
  t2610 = -1.*t2236*t576;
  t2612 = t2609 + t2610;
  t2627 = t2236*t443;
  t2628 = -1.*t2243*t517*t576;
  t2630 = t2627 + t2628;
  t2636 = t502*t2612;
  t2642 = t446*t2630;
  t2653 = t2636 + t2642;
  t2656 = t446*t2612;
  t2660 = -1.*t502*t2630;
  t2662 = t2656 + t2660;
  t2673 = t1190*t2653;
  t2681 = t1170*t2662;
  t2687 = t2673 + t2681;
  t2706 = t995*t2653;
  t2715 = t988*t2662;
  t2719 = t2706 + t2715;
  t2734 = t1292*t2653;
  t2742 = t1287*t2662;
  t2754 = t2734 + t2742;
  t1677 = -0.15121*t502;
  t1680 = t1674 + t1677;
  t1683 = t1674 + t506;
  t2859 = t443*t2243*t517;
  t2860 = t2236*t576;
  t2861 = t2859 + t2860;
  t2867 = -1.*t502*t2861;
  t2882 = t2867 + t2642;
  t2887 = -1.*t446*t2861;
  t2888 = t2887 + t2660;
  t2898 = t1190*t2882;
  t2904 = t1170*t2888;
  t2911 = t2898 + t2904;
  t2927 = t995*t2882;
  t2929 = t988*t2888;
  t2930 = t2927 + t2929;
  t2939 = t1292*t2882;
  t2943 = t1287*t2888;
  t2948 = t2939 + t2943;
  t1709 = t191 + t1698;
  t1715 = -0.281209000004*t1709;
  t1730 = t1723 + t664;
  t1745 = -2.123459e-6*t1730;
  t1761 = -0.0387489999948987*t347;
  t1762 = 5.856279999999999e-13 + t1715 + t1745 + t1761;
  t1771 = t1769 + t664;
  t1772 = -0.038748999993*t1771;
  t1786 = t1783 + t356;
  t1796 = -0.281209000004*t1786;
  t1811 = -1.38024835e-16*t347;
  t1818 = -1.4640699999999997e-7 + t1772 + t1796 + t1811;
  t1821 = t204 + t1698;
  t1823 = -0.038748999993*t1821;
  t1834 = t1832 + t356;
  t1835 = -2.123459e-6*t1834;
  t1841 = -0.28120900000849935*t347;
  t1850 = 1.0248489999999998e-12 + t1823 + t1835 + t1841;
  t3003 = t446*t2861;
  t3008 = t502*t2630;
  t3022 = t3003 + t3008;
  t3028 = -1.*t9*t1867*t2243;
  t3030 = -6.5e-11*t347*t2882;
  t3034 = t1890*t3022;
  t3045 = t3028 + t3030 + t3034;
  t3072 = 1.000000000049*t9*t347*t2243;
  t3081 = t1903*t2882;
  t3082 = t1916*t3022;
  t3083 = t3072 + t3081 + t3082;
  t3088 = -1.*t9*t1927*t2243;
  t3089 = t1933*t2882;
  t3091 = -1.000000000016*t347*t3022;
  t3096 = t3088 + t3089 + t3091;
  t2018 = t856 + t2013;
  t2020 = -0.038922999986*t2018;
  t2030 = t2026 + t1237;
  t2032 = -3.6777349999999994e-6*t2030;
  t2037 = -0.5031490000160505*t883;
  t2038 = 1.8190549999999993e-12 + t2020 + t2032 + t2037;
  t2077 = t2076 + t1069;
  t2078 = -0.038922999986*t2077;
  t2096 = t2095 + t1237;
  t2097 = -0.503149000008*t2096;
  t2101 = -2.3905277499999995e-16*t883;
  t2103 = -2.598649999999999e-7 + t2078 + t2097 + t2101;
  t2114 = t838 + t2013;
  t2117 = -0.503149000008*t2114;
  t2119 = t2118 + t1069;
  t2120 = -3.6777349999999994e-6*t2119;
  t2121 = -0.03892299998790722*t883;
  t2126 = 1.0394599999999997e-12 + t2117 + t2120 + t2121;
  t2152 = t2095 + t1035;
  t3137 = -1.*t9*t968*t2243;
  t3140 = t988*t2882;
  t3142 = t995*t3022;
  t3143 = t3137 + t3140 + t3142;
  t3151 = -1.*t9*t1159*t2243;
  t3153 = t1170*t2882;
  t3159 = t1190*t3022;
  t3169 = t3151 + t3153 + t3159;
  t2173 = t2076 + t948;
  t3175 = -1.*t1269*t9*t2243;
  t3176 = t1287*t2882;
  t3177 = t1292*t3022;
  t3181 = t3175 + t3176 + t3177;
  t2181 = t2026 + t1035;
  t2206 = t856 + t2205;
  t2216 = t838 + t2205;
  t2220 = t2118 + t948;
  t3363 = t2236*t9*t443*t502;
  t3376 = t446*t2236*t9*t576;
  t3378 = t3363 + t3376;
  t3386 = -1.*t446*t2236*t9*t443;
  t3387 = t2236*t9*t502*t576;
  t3388 = t3386 + t3387;
  t3408 = -1.*t2236*t968*t517;
  t3411 = t988*t3378;
  t3412 = t995*t3388;
  t3419 = t3408 + t3411 + t3412;
  t3425 = -1.*t2236*t1159*t517;
  t3436 = t1170*t3378;
  t3441 = t1190*t3388;
  t3447 = t3425 + t3436 + t3441;
  t3466 = -1.*t1269*t2236*t517;
  t3467 = t1287*t3378;
  t3472 = t1292*t3388;
  t3476 = t3466 + t3467 + t3472;
  t3555 = t443*t2243;
  t3563 = t2236*t517*t576;
  t3564 = t3555 + t3563;
  t3567 = t502*t2246;
  t3570 = t446*t3564;
  t3578 = t3567 + t3570;
  t3589 = -1.*t502*t3564;
  t3591 = t2275 + t3589;
  t3607 = t1190*t3578;
  t3611 = t1170*t3591;
  t3617 = t3607 + t3611;
  t3626 = t995*t3578;
  t3627 = t988*t3591;
  t3629 = t3626 + t3627;
  t3632 = t1292*t3578;
  t3633 = t1287*t3591;
  t3635 = t3632 + t3633;
  t3696 = -1.*t2236*t443*t517;
  t3697 = t2243*t576;
  t3698 = t3696 + t3697;
  t3714 = -1.*t502*t3698;
  t3719 = t3714 + t3570;
  t3724 = -1.*t446*t3698;
  t3736 = t3724 + t3589;
  t3748 = t1190*t3719;
  t3753 = t1170*t3736;
  t3754 = t3748 + t3753;
  t3772 = t995*t3719;
  t3780 = t988*t3736;
  t3781 = t3772 + t3780;
  t3788 = t1292*t3719;
  t3798 = t1287*t3736;
  t3801 = t3788 + t3798;
  t3876 = t446*t3698;
  t3879 = t502*t3564;
  t3887 = t3876 + t3879;
  t3890 = t2236*t9*t1867;
  t3892 = -6.5e-11*t347*t3719;
  t3896 = t1890*t3887;
  t3897 = t3890 + t3892 + t3896;
  t3908 = -1.000000000049*t2236*t9*t347;
  t3918 = t1903*t3719;
  t3932 = t1916*t3887;
  t3936 = t3908 + t3918 + t3932;
  t3946 = t2236*t9*t1927;
  t3948 = t1933*t3719;
  t3949 = -1.000000000016*t347*t3887;
  t3951 = t3946 + t3948 + t3949;
  t4048 = t2236*t9*t968;
  t4050 = t988*t3719;
  t4053 = t995*t3887;
  t4054 = t4048 + t4050 + t4053;
  t4075 = t2236*t9*t1159;
  t4112 = t1170*t3719;
  t4115 = t1190*t3887;
  t4117 = t4075 + t4112 + t4115;
  t4120 = t1269*t2236*t9;
  t4125 = t1287*t3719;
  t4131 = t1292*t3887;
  t4132 = t4120 + t4125 + t4131;
  p_output1[0]=1.;
  p_output1[1]=t1122*t1213 + t1252*t1301 - 0.038924*(t1012*t1308 + t1213*t1325 + t1301*t1344) - 0.80315*(t1012*t1376 + t1213*t1395 + t1301*t1413) + 0.148705*(t1012*t1437 + t1213*t1460 + t1301*t1464) - 1.*t443*t512*t517 + t517*t544*t576 + t686*t700 + t812*t818 + t422*t9 + t1012*t954;
  p_output1[2]=t1519 + t1543 + t1562 + t1580 + t1612 + t1625 + t1654 + t1671 - 1.*t443*t544*t9 - 1.*t512*t576*t9;
  p_output1[3]=t1519 + t1543 + t1562 + t1580 + t1612 + t1625 + t1654 + t1671 + t1680*t443*t9 - 1.*t1683*t576*t9;
  p_output1[4]=t1516*t1818 + t1850*t1862 + t1122*t1899 + t1252*t1925 - 0.038924*(t1325*t1899 + t1344*t1925 + t1308*t1963) - 0.80315*(t1395*t1899 + t1413*t1925 + t1376*t1963) + 0.148705*(t1460*t1899 + t1464*t1925 + t1437*t1963) + t1762*t517 + t1963*t954;
  p_output1[5]=t2038*t2055 + t2103*t2111 + t2126*t2145 - 0.80315*(t2111*t2181 + t2145*t2206 - 1.000000000016*t2055*t883) + 0.148705*(t2055*t2152 + t2145*t2173 - 6.5e-11*t2111*t883) - 0.038924*(t2055*t2216 + t2111*t2220 - 1.000000000049*t2145*t883);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=t1122*t2297 + t1252*t2323 - 0.038924*(t1308*t2289 + t1325*t2297 + t1344*t2323) - 0.80315*(t1376*t2289 + t1395*t2297 + t1413*t2323) + 0.148705*(t1437*t2289 + t1460*t2297 + t1464*t2323) + t2246*t512 + t2262*t544 + t2272*t686 + t2277*t812 - 1.*t2236*t422*t9 + t2289*t954;
  p_output1[9]=t1122*t2461 + t1252*t2495 - 0.038924*(t1308*t2441 + t1325*t2461 + t1344*t2495) - 0.80315*(t1376*t2441 + t1395*t2461 + t1413*t2495) + 0.148705*(t1437*t2441 + t1460*t2461 + t1464*t2495) + t2243*t422*t517 + t2398*t686 + t2406*t812 + t2243*t443*t512*t9 - 1.*t2243*t544*t576*t9 + t2441*t954;
  p_output1[10]=t1122*t2687 + t1252*t2754 - 0.038924*(t1325*t2687 + t1308*t2719 + t1344*t2754) - 0.80315*(t1395*t2687 + t1376*t2719 + t1413*t2754) + 0.148705*(t1460*t2687 + t1437*t2719 + t1464*t2754) + t2630*t512 + t2612*t544 + t2662*t686 + t2653*t812 + t2719*t954;
  p_output1[11]=t1683*t2630 + t1680*t2861 + t1122*t2911 + t1252*t2948 - 0.038924*(t1325*t2911 + t1308*t2930 + t1344*t2948) - 0.80315*(t1395*t2911 + t1376*t2930 + t1413*t2948) + 0.148705*(t1460*t2911 + t1437*t2930 + t1464*t2948) + t2888*t686 + t2882*t812 + t2930*t954;
  p_output1[12]=t1818*t2882 + t1850*t3022 + t1122*t3045 + t1252*t3083 - 0.038924*(t1325*t3045 + t1344*t3083 + t1308*t3096) - 0.80315*(t1395*t3045 + t1413*t3083 + t1376*t3096) + 0.148705*(t1460*t3045 + t1464*t3083 + t1437*t3096) - 1.*t1762*t2243*t9 + t3096*t954;
  p_output1[13]=t2038*t3143 + t2103*t3169 + t2126*t3181 - 0.80315*(t2181*t3169 + t2206*t3181 - 1.000000000016*t3143*t883) + 0.148705*(t2152*t3143 + t2173*t3181 - 6.5e-11*t3169*t883) - 0.038924*(t2216*t3143 + t2220*t3169 - 1.000000000049*t3181*t883);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=t1122*t3169 + t1252*t3181 - 0.038924*(t1308*t3143 + t1325*t3169 + t1344*t3181) - 0.80315*(t1376*t3143 + t1395*t3169 + t1413*t3181) + 0.148705*(t1437*t3143 + t1460*t3169 + t1464*t3181) + t2861*t512 + t2630*t544 + t2882*t686 + t3022*t812 - 1.*t2243*t422*t9 + t3143*t954;
  p_output1[17]=t1122*t3447 + t1252*t3476 - 0.038924*(t1308*t3419 + t1325*t3447 + t1344*t3476) - 0.80315*(t1376*t3419 + t1395*t3447 + t1413*t3476) + 0.148705*(t1437*t3419 + t1460*t3447 + t1464*t3476) - 1.*t2236*t422*t517 + t3378*t686 + t3388*t812 - 1.*t2236*t443*t512*t9 + t2236*t544*t576*t9 + t3419*t954;
  p_output1[18]=t1122*t3617 + t1252*t3635 - 0.038924*(t1325*t3617 + t1308*t3629 + t1344*t3635) - 0.80315*(t1395*t3617 + t1376*t3629 + t1413*t3635) + 0.148705*(t1460*t3617 + t1437*t3629 + t1464*t3635) + t3564*t512 + t2246*t544 + t3591*t686 + t3578*t812 + t3629*t954;
  p_output1[19]=t1683*t3564 + t1680*t3698 + t1122*t3754 + t1252*t3801 - 0.038924*(t1325*t3754 + t1308*t3781 + t1344*t3801) - 0.80315*(t1395*t3754 + t1376*t3781 + t1413*t3801) + 0.148705*(t1460*t3754 + t1437*t3781 + t1464*t3801) + t3736*t686 + t3719*t812 + t3781*t954;
  p_output1[20]=t1818*t3719 + t1850*t3887 + t1122*t3897 + t1252*t3936 - 0.038924*(t1325*t3897 + t1344*t3936 + t1308*t3951) - 0.80315*(t1395*t3897 + t1413*t3936 + t1376*t3951) + 0.148705*(t1460*t3897 + t1464*t3936 + t1437*t3951) + t1762*t2236*t9 + t3951*t954;
  p_output1[21]=t2038*t4054 + t2103*t4117 + t2126*t4132 - 0.80315*(t2181*t4117 + t2206*t4132 - 1.000000000016*t4054*t883) + 0.148705*(t2152*t4054 + t2173*t4132 - 6.5e-11*t4117*t883) - 0.038924*(t2216*t4054 + t2220*t4117 - 1.000000000049*t4132*t883);
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
