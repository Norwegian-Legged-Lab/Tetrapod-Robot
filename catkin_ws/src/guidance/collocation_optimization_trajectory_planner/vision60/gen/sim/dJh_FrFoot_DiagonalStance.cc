/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:04:24 GMT+02:00
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
  double t446;
  double t415;
  double t429;
  double t498;
  double t445;
  double t504;
  double t507;
  double t405;
  double t520;
  double t523;
  double t527;
  double t413;
  double t529;
  double t545;
  double t516;
  double t535;
  double t536;
  double t95;
  double t647;
  double t659;
  double t673;
  double t679;
  double t684;
  double t685;
  double t686;
  double t699;
  double t700;
  double t730;
  double t732;
  double t733;
  double t748;
  double t749;
  double t750;
  double t746;
  double t752;
  double t754;
  double t758;
  double t760;
  double t762;
  double t763;
  double t764;
  double t767;
  double t784;
  double t785;
  double t786;
  double t822;
  double t824;
  double t832;
  double t837;
  double t840;
  double t842;
  double t848;
  double t865;
  double t867;
  double t820;
  double t835;
  double t868;
  double t872;
  double t813;
  double t874;
  double t875;
  double t877;
  double t878;
  double t881;
  double t883;
  double t885;
  double t886;
  double t888;
  double t890;
  double t891;
  double t892;
  double t893;
  double t906;
  double t908;
  double t910;
  double t914;
  double t948;
  double t949;
  double t950;
  double t940;
  double t941;
  double t946;
  double t926;
  double t927;
  double t930;
  double t799;
  double t811;
  double t812;
  double t876;
  double t919;
  double t921;
  double t987;
  double t991;
  double t992;
  double t954;
  double t958;
  double t961;
  double t1068;
  double t1069;
  double t1072;
  double t1020;
  double t1026;
  double t1031;
  double t1229;
  double t1232;
  double t1235;
  double t1009;
  double t1047;
  double t1280;
  double t1282;
  double t1285;
  double t1289;
  double t1309;
  double t1313;
  double t1314;
  double t1015;
  double t1016;
  double t1017;
  double t1318;
  double t1322;
  double t1048;
  double t1049;
  double t1050;
  double t1083;
  double t1118;
  double t1409;
  double t1411;
  double t1085;
  double t1089;
  double t1091;
  double t1467;
  double t1472;
  double t1119;
  double t1125;
  double t1129;
  double t1163;
  double t1189;
  double t1545;
  double t1166;
  double t1169;
  double t1170;
  double t1573;
  double t1576;
  double t1197;
  double t1199;
  double t1207;
  double t1271;
  double t1295;
  double t1694;
  double t1696;
  double t1699;
  double t1707;
  double t1709;
  double t1802;
  double t1817;
  double t1819;
  double t1272;
  double t1277;
  double t1704;
  double t1715;
  double t1736;
  double t1739;
  double t1298;
  double t1306;
  double t1841;
  double t1842;
  double t1860;
  double t1877;
  double t1881;
  double t1902;
  double t1903;
  double t1914;
  double t1955;
  double t1957;
  double t1958;
  double t1965;
  double t1966;
  double t1969;
  double t1981;
  double t1984;
  double t1988;
  double t1426;
  double t1420;
  double t2002;
  double t2010;
  double t2015;
  double t2075;
  double t2077;
  double t1421;
  double t1423;
  double t2105;
  double t2107;
  double t1429;
  double t1463;
  double t2195;
  double t2199;
  double t1748;
  double t1776;
  double t1784;
  double t2211;
  double t2214;
  double t2021;
  double t2022;
  double t2024;
  double t1530;
  double t1586;
  double t1531;
  double t1537;
  double t2285;
  double t2288;
  double t1843;
  double t2298;
  double t2302;
  double t1600;
  double t1601;
  double t2341;
  double t2345;
  double t2353;
  double t2356;
  double t1681;
  double t1682;
  double t2417;
  double t2420;
  double t2421;
  double t2462;
  double t2463;
  double t772;
  double t776;
  double t778;
  double t2443;
  double t2447;
  double t2450;
  double t2453;
  double t2441;
  double t2457;
  double t2471;
  double t2512;
  double t2517;
  double t2518;
  double t2493;
  double t2494;
  double t2496;
  double t2505;
  double t2506;
  double t2507;
  double t2525;
  double t2526;
  double t2527;
  double t2519;
  double t2524;
  double t2529;
  double t2538;
  double t2539;
  double t2540;
  double t2543;
  double t2544;
  double t2547;
  double t2549;
  double t2558;
  double t2559;
  double t2090;
  double t2091;
  double t2093;
  double t2121;
  double t2136;
  double t2141;
  double t2473;
  double t1720;
  double t1728;
  double t2627;
  double t2630;
  double t2662;
  double t2647;
  double t2625;
  double t2632;
  double t2762;
  double t2770;
  double t2774;
  double t2575;
  double t2581;
  double t2583;
  double t2271;
  double t2272;
  double t2835;
  double t2885;
  double t2902;
  double t2964;
  double t2969;
  double t2973;
  double t2996;
  double t2998;
  double t2999;
  double t3010;
  double t3012;
  double t3013;
  double t3026;
  double t3028;
  double t3029;
  double t3036;
  double t3037;
  double t3040;
  double t2989;
  double t2992;
  double t3000;
  double t3070;
  double t3072;
  double t3074;
  double t3059;
  double t3060;
  double t3061;
  double t3078;
  double t3085;
  double t3107;
  double t3108;
  double t3109;
  double t3120;
  double t3121;
  double t3122;
  double t2307;
  double t2314;
  double t2682;
  double t2683;
  double t2714;
  double t2723;
  double t3175;
  double t3189;
  double t3203;
  double t3190;
  double t3196;
  double t3176;
  double t3241;
  double t3247;
  double t3008;
  double t3015;
  double t3016;
  double t3271;
  double t706;
  double t710;
  double t719;
  double t3370;
  double t3375;
  double t3437;
  double t3446;
  double t3457;
  t446 = Cos(var1[13]);
  t415 = Cos(var1[14]);
  t429 = Sin(var1[13]);
  t498 = Sin(var1[14]);
  t445 = t415*t429;
  t504 = -1.*t446*t498;
  t507 = t445 + t504;
  t405 = Cos(var1[5]);
  t520 = t446*t415;
  t523 = t429*t498;
  t527 = t520 + t523;
  t413 = Sin(var1[12]);
  t529 = Sin(var1[5]);
  t545 = Cos(var1[3]);
  t516 = -1.*t405*t413*t507;
  t535 = t527*t529;
  t536 = t516 + t535;
  t95 = Sin(var1[3]);
  t647 = Cos(var1[12]);
  t659 = Cos(var1[4]);
  t673 = t647*t659*t507;
  t679 = Sin(var1[4]);
  t684 = t405*t527;
  t685 = t413*t507*t529;
  t686 = t684 + t685;
  t699 = -1.*t679*t686;
  t700 = t673 + t699;
  t730 = t659*t413;
  t732 = t647*t679*t529;
  t733 = t730 + t732;
  t748 = -1.*t415*t429;
  t749 = t446*t498;
  t750 = t748 + t749;
  t746 = -1.*t405*t413*t527;
  t752 = t750*t529;
  t754 = t746 + t752;
  t758 = t647*t659*t527;
  t760 = t405*t750;
  t762 = t413*t527*t529;
  t763 = t760 + t762;
  t764 = -1.*t679*t763;
  t767 = t758 + t764;
  t784 = -1.*t647*t507*t679;
  t785 = -1.*t659*t686;
  t786 = t784 + t785;
  t822 = -0.0641*t415;
  t824 = -0.28*t498;
  t832 = t822 + t824;
  t837 = -1.*t415;
  t840 = 1. + t837;
  t842 = 0.075*t840;
  t848 = 0.355*t415;
  t865 = -0.0641*t498;
  t867 = t842 + t848 + t865;
  t820 = -0.325*t429;
  t835 = t446*t832;
  t868 = t429*t867;
  t872 = t820 + t835 + t868;
  t813 = -0.068*t413;
  t874 = t647*t872;
  t875 = t813 + t874;
  t877 = -1.*t446;
  t878 = 1. + t877;
  t881 = 0.325*t878;
  t883 = -1.*t429*t832;
  t885 = t446*t867;
  t886 = t881 + t883 + t885;
  t888 = t405*t886;
  t890 = -1.*t647;
  t891 = 1. + t890;
  t892 = -0.1575*t891;
  t893 = -0.2255*t647;
  t906 = -1.*t413*t872;
  t908 = t892 + t893 + t906;
  t910 = -1.*t908*t529;
  t914 = t888 + t910;
  t948 = t659*t875;
  t949 = -1.*t679*t914;
  t950 = t948 + t949;
  t940 = t413*t679;
  t941 = -1.*t647*t659*t529;
  t946 = t940 + t941;
  t926 = t875*t679;
  t927 = t659*t914;
  t930 = t926 + t927;
  t799 = t647*t527*t679;
  t811 = t659*t763;
  t812 = t799 + t811;
  t876 = -1.*t875*t679;
  t919 = -1.*t659*t914;
  t921 = t876 + t919;
  t987 = t405*t908;
  t991 = t886*t529;
  t992 = t987 + t991;
  t954 = -1.*t413*t679;
  t958 = t647*t659*t529;
  t961 = t954 + t958;
  t1068 = t647*t507*t679;
  t1069 = t659*t686;
  t1072 = t1068 + t1069;
  t1020 = -1.*t647*t527*t679;
  t1026 = -1.*t659*t763;
  t1031 = t1020 + t1026;
  t1229 = t405*t413*t507;
  t1232 = -1.*t527*t529;
  t1235 = t1229 + t1232;
  t1009 = -1.*t647*t405*t992;
  t1047 = t992*t754;
  t1280 = -1.*t405*t908;
  t1282 = -1.*t886*t529;
  t1285 = t1280 + t1282;
  t1289 = t647*t529*t992;
  t1309 = t405*t413*t527;
  t1313 = -1.*t750*t529;
  t1314 = t1309 + t1313;
  t1015 = -1.*t946*t930;
  t1016 = -1.*t733*t950;
  t1017 = t1009 + t1015 + t1016;
  t1318 = t914*t754;
  t1322 = t992*t763;
  t1048 = t930*t812;
  t1049 = t950*t767;
  t1050 = t1047 + t1048 + t1049;
  t1083 = t992*t536;
  t1118 = -1.*t992*t754;
  t1409 = t992*t686;
  t1411 = t914*t536;
  t1085 = t930*t1072;
  t1089 = t950*t700;
  t1091 = t1083 + t1085 + t1089;
  t1467 = -1.*t914*t754;
  t1472 = -1.*t992*t763;
  t1119 = -1.*t930*t812;
  t1125 = -1.*t950*t767;
  t1129 = t1118 + t1119 + t1125;
  t1163 = t647*t405*t992;
  t1189 = -1.*t992*t536;
  t1545 = -1.*t647*t529*t992;
  t1166 = t946*t930;
  t1169 = t733*t950;
  t1170 = t1163 + t1166 + t1169;
  t1573 = -1.*t992*t686;
  t1576 = -1.*t914*t536;
  t1197 = -1.*t930*t1072;
  t1199 = -1.*t950*t700;
  t1207 = t1189 + t1197 + t1199;
  t1271 = -1.*t413*t875;
  t1295 = t647*t875*t527;
  t1694 = 0.068*t413;
  t1696 = -1.*t647*t872;
  t1699 = t1694 + t1696;
  t1707 = -0.068*t647;
  t1709 = t1707 + t906;
  t1802 = -1.*t659*t413*t507;
  t1817 = -1.*t647*t507*t679*t529;
  t1819 = t1802 + t1817;
  t1272 = t647*t529*t914;
  t1277 = t1271 + t1272 + t1009;
  t1704 = -1.*t647*t875;
  t1715 = -1.*t413*t1709;
  t1736 = -1.*t413*t875*t527;
  t1739 = t647*t1709*t527;
  t1298 = t914*t763;
  t1306 = t1295 + t1047 + t1298;
  t1841 = Power(t405,2);
  t1842 = -1.*t647*t1841*t1699;
  t1860 = t405*t413*t992;
  t1877 = -1.*t647*t405*t527*t992;
  t1881 = t405*t1699*t754;
  t1902 = -1.*t413*t527*t679;
  t1903 = t647*t659*t527*t529;
  t1914 = t1902 + t1903;
  t1955 = t1709*t679;
  t1957 = -1.*t659*t1699*t529;
  t1958 = t1955 + t1957;
  t1965 = t659*t1709;
  t1966 = t1699*t679*t529;
  t1969 = t1965 + t1966;
  t1981 = t647*t679;
  t1984 = t659*t413*t529;
  t1988 = t1981 + t1984;
  t1426 = -1.*t647*t875*t527;
  t1420 = t647*t875*t507;
  t2002 = t647*t659;
  t2010 = -1.*t413*t679*t529;
  t2015 = t2002 + t2010;
  t2075 = -1.*t413*t875*t507;
  t2077 = t647*t1709*t507;
  t1421 = t914*t686;
  t1423 = t1420 + t1421 + t1083;
  t2105 = t413*t875*t527;
  t2107 = -1.*t647*t1709*t527;
  t1429 = -1.*t914*t763;
  t1463 = t1426 + t1118 + t1429;
  t2195 = -1.*t647*t405*t507*t992;
  t2199 = t405*t1699*t536;
  t1748 = -1.*t413*t507*t679;
  t1776 = t647*t659*t507*t529;
  t1784 = t1748 + t1776;
  t2211 = t647*t405*t527*t992;
  t2214 = -1.*t405*t1699*t754;
  t2021 = -1.*t659*t413*t527;
  t2022 = -1.*t647*t527*t679*t529;
  t2024 = t2021 + t2022;
  t1530 = t413*t875;
  t1586 = -1.*t647*t875*t507;
  t1531 = -1.*t647*t529*t914;
  t1537 = t1530 + t1531 + t1163;
  t2285 = t647*t875;
  t2288 = t413*t1709;
  t1843 = Power(t529,2);
  t2298 = t413*t875*t507;
  t2302 = -1.*t647*t1709*t507;
  t1600 = -1.*t914*t686;
  t1601 = t1586 + t1600 + t1189;
  t2341 = t647*t1841*t1699;
  t2345 = -1.*t405*t413*t992;
  t2353 = t647*t405*t507*t992;
  t2356 = -1.*t405*t1699*t536;
  t1681 = -1.*t647*t908;
  t1682 = t1271 + t1681;
  t2417 = -1.*t446*t415;
  t2420 = -1.*t429*t498;
  t2421 = t2417 + t2420;
  t2462 = -0.325*t446;
  t2463 = t2462 + t883 + t885;
  t772 = t545*t754;
  t776 = -1.*t95*t767;
  t778 = t772 + t776;
  t2443 = 0.325*t429;
  t2447 = -1.*t446*t832;
  t2450 = -1.*t429*t867;
  t2453 = t2443 + t2447 + t2450;
  t2441 = t647*t875*t750;
  t2457 = Power(t647,2);
  t2471 = t2457*t2463*t527;
  t2512 = -1.*t405*t413*t2463;
  t2517 = t2453*t529;
  t2518 = t2512 + t2517;
  t2493 = -1.*t405*t413*t750;
  t2494 = t2421*t529;
  t2496 = t2493 + t2494;
  t2505 = t405*t2453;
  t2506 = t413*t2463*t529;
  t2507 = t2505 + t2506;
  t2525 = t405*t2421;
  t2526 = t413*t750*t529;
  t2527 = t2525 + t2526;
  t2519 = -1.*t647*t405*t2518;
  t2524 = t2518*t754;
  t2529 = t992*t2496;
  t2538 = t647*t750*t679;
  t2539 = t659*t2527;
  t2540 = t2538 + t2539;
  t2543 = t647*t2463*t679;
  t2544 = t659*t2507;
  t2547 = t2543 + t2544;
  t2549 = t647*t659*t2463;
  t2558 = -1.*t679*t2507;
  t2559 = t2549 + t2558;
  t2090 = -1.*t886*t750;
  t2091 = t413*t908*t527;
  t2093 = t2090 + t1426 + t2091;
  t2121 = -1.*t413*t908*t507;
  t2136 = t886*t527;
  t2141 = t1420 + t2121 + t2136;
  t2473 = Power(t413,2);
  t1720 = t886*t750;
  t1728 = -1.*t413*t908*t527;
  t2627 = -1.*t2453*t750;
  t2630 = -1.*t886*t2421;
  t2662 = t2453*t527;
  t2647 = t2457*t2463*t507;
  t2625 = -1.*t647*t875*t750;
  t2632 = -1.*t2457*t2463*t527;
  t2762 = t2518*t536;
  t2770 = -1.*t2518*t754;
  t2774 = -1.*t992*t2496;
  t2575 = t647*t659*t750;
  t2581 = -1.*t679*t2527;
  t2583 = t2575 + t2581;
  t2271 = t647*t908;
  t2272 = t1530 + t2271;
  t2835 = -1.*t2457*t2463*t507;
  t2885 = t647*t405*t2518;
  t2902 = -1.*t2518*t536;
  t2964 = -0.28*t415;
  t2969 = 0.0641*t498;
  t2973 = t2964 + t2969;
  t2996 = t429*t832;
  t2998 = t446*t2973;
  t2999 = t2996 + t2998;
  t3010 = t405*t507;
  t3012 = t413*t2421*t529;
  t3013 = t3010 + t3012;
  t3026 = -1.*t405*t413*t2421;
  t3028 = t507*t529;
  t3029 = t3026 + t3028;
  t3036 = t647*t659*t2421;
  t3037 = -1.*t679*t3013;
  t3040 = t3036 + t3037;
  t2989 = -1.*t429*t2973;
  t2992 = t835 + t2989;
  t3000 = t2457*t2999*t527;
  t3070 = -1.*t405*t413*t2999;
  t3072 = t2992*t529;
  t3074 = t3070 + t3072;
  t3059 = t405*t2992;
  t3060 = t413*t2999*t529;
  t3061 = t3059 + t3060;
  t3078 = -1.*t647*t405*t3074;
  t3085 = t3074*t754;
  t3107 = t647*t2999*t679;
  t3108 = t659*t3061;
  t3109 = t3107 + t3108;
  t3120 = t647*t659*t2999;
  t3121 = -1.*t679*t3061;
  t3122 = t3120 + t3121;
  t2307 = t413*t908*t507;
  t2314 = -1.*t886*t527;
  t2682 = t872*t507;
  t2683 = t2682 + t2136;
  t2714 = -1.*t872*t527;
  t2723 = t2090 + t2714;
  t3175 = -1.*t2992*t750;
  t3189 = t886*t507;
  t3203 = t2992*t527;
  t3190 = t2457*t2999*t507;
  t3196 = t647*t875*t2421;
  t3176 = -1.*t2457*t2999*t527;
  t3241 = t992*t3029;
  t3247 = t3074*t536;
  t3008 = t647*t2421*t679;
  t3015 = t659*t3013;
  t3016 = t3008 + t3015;
  t3271 = -1.*t3074*t754;
  t706 = t545*t536;
  t710 = -1.*t95*t700;
  t719 = t706 + t710;
  t3370 = -1.*t2457*t2999*t507;
  t3375 = -1.*t647*t875*t2421;
  t3437 = t647*t405*t3074;
  t3446 = -1.*t992*t3029;
  t3457 = -1.*t3074*t536;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t545*t700 - 1.*t536*t95)*var2[1] + t719*var2[2];
  p_output1[10]=(-1.*t545*t733 - 1.*t405*t647*t95)*var2[1] + (t405*t545*t647 - 1.*t733*t95)*var2[2];
  p_output1[11]=(-1.*t545*t767 - 1.*t754*t95)*var2[1] + t778*var2[2];
  p_output1[12]=t700*var2[0] - 1.*t786*t95*var2[1] + t545*t786*var2[2] + (t1050*t733 + t1017*t767 + t946*(t767*t921 + t767*t930 + t1031*t950 + t812*t950) + t812*(-1.*t733*t921 - 1.*t733*t930 - 1.*t946*t950 - 1.*t950*t961))*var2[3];
  p_output1[13]=t733*var2[0] - 1.*t95*t961*var2[1] + t545*t961*var2[2] + (t1129*t700 + t1091*t767 + t812*(t700*t921 + t700*t930 + t1072*t950 + t786*t950) + t1072*(-1.*t767*t921 - 1.*t767*t930 - 1.*t1031*t950 - 1.*t812*t950))*var2[3];
  p_output1[14]=t767*var2[0] - 1.*t1031*t95*var2[1] + t1031*t545*var2[2] + (t1170*t700 + t1207*t733 + t946*(-1.*t700*t921 - 1.*t700*t930 - 1.*t1072*t950 - 1.*t786*t950) + t1072*(t733*t921 + t733*t930 + t946*t950 + t950*t961))*var2[3];
  p_output1[15]=t1235*t659*var2[0] + (t545*t686 + t1235*t679*t95)*var2[1] + (-1.*t1235*t545*t679 + t686*t95)*var2[2] + (t1017*t1314*t659 - 1.*t1050*t405*t647*t659 + t946*(t1318 + t1322 - 1.*t1285*t679*t767 + t1285*t659*t812 + t1314*t659*t930 - 1.*t1314*t679*t950) + t812*(t1289 + t1285*t679*t733 - 1.*t405*t647*t914 + t405*t647*t659*t930 - 1.*t1285*t659*t946 - 1.*t405*t647*t679*t950))*var2[3] + (-1.*t1306*t529*t647 + (t1289 + t1285*t529*t647)*t754 + t1277*t763 + t405*t647*(t1318 + t1322 + t1285*t763 + t1314*t914))*var2[4];
  p_output1[16]=-1.*t405*t647*t659*var2[0] + (-1.*t529*t545*t647 - 1.*t405*t647*t679*t95)*var2[1] + (t405*t545*t647*t679 - 1.*t529*t647*t95)*var2[2] + (t1129*t1235*t659 + t1091*t1314*t659 + t812*(t1409 + t1411 + t1072*t1285*t659 - 1.*t1285*t679*t700 + t1235*t659*t930 - 1.*t1235*t679*t950) + t1072*(t1467 + t1472 + t1285*t679*t767 - 1.*t1285*t659*t812 - 1.*t1314*t659*t930 + t1314*t679*t950))*var2[3] + (t1463*t686 + t1423*t763 + t754*(t1409 + t1411 + t1285*t686 + t1235*t914) + t536*(t1467 + t1472 - 1.*t1285*t763 - 1.*t1314*t914))*var2[4];
  p_output1[17]=t1314*t659*var2[0] + (t545*t763 + t1314*t679*t95)*var2[1] + (-1.*t1314*t545*t679 + t763*t95)*var2[2] + (t1170*t1235*t659 - 1.*t1207*t405*t647*t659 + t946*(t1573 + t1576 - 1.*t1072*t1285*t659 + t1285*t679*t700 - 1.*t1235*t659*t930 + t1235*t679*t950) + t1072*(t1545 - 1.*t1285*t679*t733 + t405*t647*t914 - 1.*t405*t647*t659*t930 + t1285*t659*t946 + t405*t647*t679*t950))*var2[3] + (-1.*t1601*t529*t647 + t536*(t1545 - 1.*t1285*t529*t647) + t1537*t686 + t405*t647*(t1573 + t1576 - 1.*t1285*t686 - 1.*t1235*t914))*var2[4];
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
  p_output1[36]=t1784*var2[0] + (-1.*t405*t507*t545*t647 - 1.*t1819*t95)*var2[1] + (t1819*t545 - 1.*t405*t507*t647*t95)*var2[2] + (t1017*t1914 + t1050*t1988 + t812*(t1842 + t1860 - 1.*t1969*t733 - 1.*t1988*t930 - 1.*t1958*t946 - 1.*t2015*t950) + t946*(t1877 + t1881 + t1969*t767 + t1958*t812 + t1914*t930 + t2024*t950))*var2[3] + (-1.*t1306*t405*t413 - 1.*t1277*t405*t527*t647 + t754*(t1704 + t1715 + t1842 + t1860 - 1.*t1699*t1843*t647 - 1.*t413*t529*t914) + t405*t647*(t1736 + t1739 + t1877 + t1881 - 1.*t1699*t529*t763 + t527*t529*t647*t914))*var2[4] + (-1.*t1682*t413*t527 + (t1295 + t1720 + t1728)*t647 + t527*t647*(t1704 + t1715 - 1.*t1699*t647 + t413*t908) + t413*(t1736 + t1739 - 1.*t1699*t413*t527 - 1.*t527*t647*t908))*var2[5];
  p_output1[37]=t1988*var2[0] + (-1.*t405*t413*t545 - 1.*t2015*t95)*var2[1] + (t2015*t545 - 1.*t405*t413*t95)*var2[2] + (t1129*t1784 + t1091*t1914 + t812*(t1072*t1958 + t2195 + t2199 + t1969*t700 + t1784*t930 + t1819*t950) + t1072*(t2211 + t2214 - 1.*t1969*t767 - 1.*t1958*t812 - 1.*t1914*t930 - 1.*t2024*t950))*var2[3] + (-1.*t1463*t405*t507*t647 - 1.*t1423*t405*t527*t647 + t754*(t2075 + t2077 + t2195 + t2199 - 1.*t1699*t529*t686 + t507*t529*t647*t914) + t536*(t2105 + t2107 + t2211 + t2214 + t1699*t529*t763 - 1.*t527*t529*t647*t914))*var2[4] + (-1.*t2093*t413*t507 - 1.*t2141*t413*t527 + t527*t647*(t2075 + t2077 - 1.*t1699*t413*t507 - 1.*t507*t647*t908) + t507*t647*(t2105 + t2107 + t1699*t413*t527 + t527*t647*t908))*var2[5];
  p_output1[38]=t1914*var2[0] + (-1.*t405*t527*t545*t647 - 1.*t2024*t95)*var2[1] + (t2024*t545 - 1.*t405*t527*t647*t95)*var2[2] + (t1170*t1784 + t1207*t1988 + t946*(-1.*t1072*t1958 + t2353 + t2356 - 1.*t1969*t700 - 1.*t1784*t930 - 1.*t1819*t950) + t1072*(t2341 + t2345 + t1969*t733 + t1988*t930 + t1958*t946 + t2015*t950))*var2[3] + (-1.*t1601*t405*t413 - 1.*t1537*t405*t507*t647 + t536*(t2285 + t2288 + t2341 + t2345 + t1699*t1843*t647 + t413*t529*t914) + t405*t647*(t2298 + t2302 + t2353 + t2356 + t1699*t529*t686 - 1.*t507*t529*t647*t914))*var2[4] + (-1.*t2272*t413*t507 + (t1586 + t2307 + t2314)*t647 + t507*t647*(t2285 + t2288 + t1699*t647 - 1.*t413*t908) + t413*(t2298 + t2302 + t1699*t413*t507 + t507*t647*t908))*var2[5];
  p_output1[39]=t812*var2[0] + t778*var2[1] + (t545*t767 + t754*t95)*var2[2] + (t1017*t2540 + t812*(t2519 - 1.*t2559*t733 - 1.*t2547*t946) + t946*(t2524 + t2529 + t2559*t767 + t2547*t812 + t2540*t930 + t2583*t950))*var2[3] + (t1277*t2496 + (t2519 - 1.*t2463*t413*t647 + t2507*t529*t647)*t754 + t405*t647*(t2441 + t2471 + t2524 + t2529 + t2507*t763 + t2527*t914))*var2[4] + (t1682*t647*t750 + t413*(t2441 + t2471 + t2463*t2473*t527 + t2453*t750 + t2421*t886 - 1.*t413*t750*t908))*var2[5] + (0.2255*t2421 + 0.1575*t527)*var2[12];
  p_output1[40]=(t1091*t2540 + t1129*t812 + (t1047 + t1048 + t1049 + t1072*t2547 + t2762 + t2559*t700)*t812 + t1072*(t2770 + t2774 - 1.*t2559*t767 - 1.*t2547*t812 - 1.*t2540*t930 - 1.*t2583*t950))*var2[3] + (t1423*t2496 + t1463*t754 + (t1047 + t1295 + t1298 + t2647 + t2762 + t2507*t686)*t754 + t536*(t2625 + t2632 + t2770 + t2774 - 1.*t2507*t763 - 1.*t2527*t914))*var2[4] + (t2093*t527*t647 + (t1295 + t1720 + t1728 + t2647 + t2662 + t2463*t2473*t507)*t527*t647 + t2141*t647*t750 + t507*t647*(t2625 + t2627 + t2630 + t2632 - 1.*t2463*t2473*t527 + t413*t750*t908))*var2[5] + (t2421*t2683 + t2723*t750 + t750*(t1720 + t2662 + t2463*t507 + t527*t872) + t527*(t2627 + t2630 - 1.*t2463*t527 - 1.*t750*t872))*var2[12];
  p_output1[41]=t2540*var2[0] + (t2496*t545 - 1.*t2583*t95)*var2[1] + (t2583*t545 + t2496*t95)*var2[2] + (t1170*t812 + (t1118 + t1119 + t1125 - 1.*t1072*t2547 + t2902 - 1.*t2559*t700)*t946 + t1072*(t2885 + t2559*t733 + t2547*t946))*var2[3] + (t536*(t2885 + t2463*t413*t647 - 1.*t2507*t529*t647) + t405*t647*(t1118 + t1426 + t1429 + t2835 + t2902 - 1.*t2507*t686) + t1537*t754)*var2[4] + (t413*(t1426 + t2090 + t2091 + t2835 - 1.*t2463*t2473*t507 - 1.*t2453*t527) + t2272*t527*t647)*var2[5] - 0.068*t750*var2[12];
  p_output1[42]=t3016*var2[0] + (t3029*t545 - 1.*t3040*t95)*var2[1] + (t3040*t545 + t3029*t95)*var2[2] + (t1017*t1072 + (t1083 + t1085 + t1089 + t3085 + t3122*t767 + t3109*t812)*t946 + t812*(t3078 - 1.*t3122*t733 - 1.*t3109*t946))*var2[3] + (t1277*t536 + (t3078 - 1.*t2999*t413*t647 + t3061*t529*t647)*t754 + t405*t647*(t1083 + t1420 + t1421 + t3000 + t3085 + t3061*t763))*var2[4] + (t1682*t507*t647 + t413*(t1420 + t2121 + t2136 + t3000 + t2473*t2999*t527 + t2992*t750))*var2[5] + (0.1575*t2421 + 0.2255*t527)*var2[12] + (0.325*t415 - 1.*t2973*t415 - 1.*t415*t867)*var2[13];
  p_output1[43]=(t1072*t1091 + t1129*t3016 + t1072*(t1189 + t1197 + t1199 + t3271 - 1.*t3122*t767 - 1.*t3109*t812) + t812*(t1072*t3109 + t3241 + t3247 + t3122*t700 + t3016*t930 + t3040*t950))*var2[3] + (t1463*t3029 + t1423*t536 + t536*(t1189 + t1586 + t1600 + t3176 + t3271 - 1.*t3061*t763) + t754*(t3190 + t3196 + t3241 + t3247 + t3061*t686 + t3013*t914))*var2[4] + (t2093*t2421*t647 + t2141*t507*t647 + t507*(t1586 + t2307 + t2314 + t3175 + t3176 - 1.*t2473*t2999*t527)*t647 + t527*t647*(t3189 + t3190 + t3196 + t3203 + t2473*t2999*t507 - 1.*t2421*t413*t908))*var2[5] + (t2723*t507 + t2683*t527 + t750*(t3189 + t3203 + t2999*t507 + t2421*t872) + t527*(t2314 + t3175 - 1.*t2999*t527 - 1.*t507*t872))*var2[12];
  p_output1[44]=t1072*var2[0] + t719*var2[1] + (t545*t700 + t536*t95)*var2[2] + (t1170*t3016 + t1072*(t3437 + t3122*t733 + t3109*t946) + t946*(-1.*t1072*t3109 + t3446 + t3457 - 1.*t3122*t700 - 1.*t3016*t930 - 1.*t3040*t950))*var2[3] + (t1537*t3029 + t536*(t3437 + t2999*t413*t647 - 1.*t3061*t529*t647) + t405*t647*(t3370 + t3375 + t3446 + t3457 - 1.*t3061*t686 - 1.*t3013*t914))*var2[4] + (t2272*t2421*t647 + t413*(t3370 + t3375 - 1.*t2473*t2999*t507 - 1.*t2992*t527 - 1.*t507*t886 + t2421*t413*t908))*var2[5] - 0.068*t507*var2[12] + (0.325*t498 - 1.*t2973*t498 - 1.*t498*t867)*var2[13];
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

#include "dJh_FrFoot_DiagonalStance.hh"

namespace SymFunction
{

void dJh_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
