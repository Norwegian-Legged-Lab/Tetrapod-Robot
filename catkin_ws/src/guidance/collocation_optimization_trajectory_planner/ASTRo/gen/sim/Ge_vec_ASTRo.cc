/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:03:35 GMT+02:00
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
  double t26;
  double t27;
  double t33;
  double t73;
  double t81;
  double t134;
  double t101;
  double t104;
  double t117;
  double t182;
  double t125;
  double t221;
  double t229;
  double t308;
  double t324;
  double t352;
  double t458;
  double t503;
  double t504;
  double t535;
  double t538;
  double t602;
  double t604;
  double t609;
  double t612;
  double t613;
  double t37;
  double t96;
  double t257;
  double t271;
  double t293;
  double t369;
  double t388;
  double t419;
  double t421;
  double t424;
  double t434;
  double t442;
  double t717;
  double t718;
  double t746;
  double t534;
  double t539;
  double t546;
  double t558;
  double t559;
  double t563;
  double t564;
  double t571;
  double t574;
  double t576;
  double t580;
  double t586;
  double t781;
  double t792;
  double t617;
  double t618;
  double t630;
  double t642;
  double t643;
  double t644;
  double t645;
  double t662;
  double t674;
  double t683;
  double t693;
  double t702;
  double t824;
  double t830;
  double t719;
  double t422;
  double t757;
  double t758;
  double t760;
  double t764;
  double t765;
  double t768;
  double t847;
  double t851;
  double t852;
  double t853;
  double t854;
  double t787;
  double t575;
  double t793;
  double t797;
  double t801;
  double t806;
  double t811;
  double t819;
  double t862;
  double t867;
  double t868;
  double t869;
  double t873;
  double t828;
  double t682;
  double t831;
  double t835;
  double t840;
  double t841;
  double t842;
  double t843;
  double t913;
  double t923;
  double t925;
  double t926;
  double t927;
  double t954;
  double t955;
  double t960;
  double t964;
  double t965;
  double t970;
  double t971;
  double t972;
  double t989;
  double t990;
  double t992;
  double t995;
  double t997;
  double t1007;
  double t1086;
  double t1097;
  double t1111;
  double t1146;
  double t1169;
  double t1039;
  double t1153;
  double t1154;
  double t1164;
  double t1188;
  double t1203;
  double t1218;
  double t1247;
  double t1290;
  double t1310;
  double t1313;
  double t1317;
  double t1318;
  double t1463;
  double t1470;
  double t1480;
  double t1485;
  double t1493;
  double t1496;
  double t1501;
  double t1503;
  double t1540;
  double t1570;
  double t1596;
  double t1625;
  double t1628;
  double t1635;
  double t1651;
  double t1688;
  double t1724;
  double t1738;
  double t1740;
  double t1750;
  double t1763;
  double t1825;
  double t1850;
  double t1886;
  double t1942;
  double t1494;
  double t1957;
  double t848;
  double t849;
  double t1958;
  double t1995;
  double t2014;
  double t2224;
  double t2232;
  double t2273;
  double t2056;
  double t1634;
  double t2063;
  double t863;
  double t864;
  double t2066;
  double t2080;
  double t2104;
  double t2324;
  double t2329;
  double t2335;
  double t2134;
  double t1808;
  double t2157;
  double t917;
  double t921;
  double t2158;
  double t2161;
  double t2163;
  double t2405;
  double t2426;
  double t2428;
  double t2501;
  double t2503;
  double t2515;
  double t2531;
  double t2545;
  double t2572;
  double t2594;
  double t2598;
  double t2559;
  double t2624;
  double t2626;
  double t1294;
  double t1301;
  double t2631;
  double t2633;
  double t2645;
  double t2682;
  double t2683;
  double t2684;
  double t2726;
  double t2729;
  double t2733;
  double t2743;
  double t2747;
  double t2749;
  double t2738;
  double t2752;
  double t2768;
  double t2774;
  double t2778;
  double t2788;
  double t2791;
  double t2797;
  double t2877;
  double t2886;
  double t2891;
  double t2873;
  double t2874;
  double t2915;
  double t2921;
  double t2935;
  double t3025;
  double t3048;
  double t3049;
  double t2997;
  double t3018;
  double t3080;
  double t3099;
  double t3110;
  double t2830;
  double t2799;
  double t2900;
  double t2957;
  double t3062;
  double t3164;
  double t3408;
  double t3414;
  double t3417;
  double t3421;
  double t3444;
  double t3462;
  double t3469;
  double t3472;
  double t3489;
  double t3473;
  double t3645;
  double t3653;
  double t3655;
  double t3607;
  double t3618;
  double t3633;
  double t3656;
  double t3659;
  double t3661;
  double t3663;
  double t3667;
  double t3685;
  double t3695;
  double t3729;
  double t3696;
  double t3823;
  double t3831;
  double t3837;
  double t3820;
  double t3839;
  double t3842;
  double t3845;
  double t3849;
  double t3910;
  double t3920;
  double t3921;
  double t4027;
  double t4029;
  double t4071;
  double t4162;
  double t4164;
  double t4177;
  double t4210;
  double t4226;
  double t4234;
  double t4256;
  double t4258;
  double t4297;
  double t4309;
  double t4355;
  double t4325;
  double t4614;
  double t4639;
  double t4642;
  double t4608;
  double t4654;
  double t4673;
  double t4674;
  double t4679;
  double t4716;
  double t4719;
  double t4720;
  double t4847;
  double t4851;
  double t4853;
  double t4916;
  double t4971;
  double t4972;
  double t4917;
  double t4932;
  double t4935;
  double t4938;
  double t4956;
  double t4992;
  double t4993;
  double t4985;
  double t5022;
  double t5099;
  double t5106;
  double t5107;
  double t5092;
  double t5108;
  double t5110;
  double t5113;
  double t5114;
  double t5128;
  double t5133;
  double t5134;
  double t5201;
  double t5204;
  double t5205;
  double t5316;
  double t5317;
  double t5258;
  double t5278;
  double t5302;
  double t5304;
  double t5309;
  double t5311;
  double t5341;
  double t5367;
  double t5320;
  double t5413;
  double t5563;
  double t5564;
  double t5567;
  double t5562;
  double t5570;
  double t5574;
  double t5588;
  double t5590;
  double t5613;
  double t5615;
  double t5663;
  double t5771;
  double t5780;
  double t5791;
  t26 = Cos(var1[9]);
  t27 = -1.*t26;
  t33 = 1. + t27;
  t73 = Sin(var1[9]);
  t81 = 0.15121*t73;
  t134 = Cos(var1[3]);
  t101 = Cos(var1[5]);
  t104 = Sin(var1[3]);
  t117 = Sin(var1[4]);
  t182 = Sin(var1[5]);
  t125 = t101*t104*t117;
  t221 = t134*t182;
  t229 = t125 + t221;
  t308 = t134*t101;
  t324 = -1.*t104*t117*t182;
  t352 = t308 + t324;
  t458 = Cos(var1[12]);
  t503 = -1.*t458;
  t504 = 1. + t503;
  t535 = Sin(var1[12]);
  t538 = -0.15121*t535;
  t602 = Cos(var1[15]);
  t604 = -1.*t602;
  t609 = 1. + t604;
  t612 = -0.15121*t609;
  t613 = Sin(var1[15]);
  t37 = -0.15121*t33;
  t96 = t37 + t81;
  t257 = t96*t229;
  t271 = 0.15121*t33;
  t293 = t271 + t81;
  t369 = t293*t352;
  t388 = -1.*t73*t229;
  t419 = t26*t352;
  t421 = t388 + t419;
  t424 = t26*t229;
  t434 = t73*t352;
  t442 = t424 + t434;
  t717 = Cos(var1[4]);
  t718 = Sin(var1[10]);
  t746 = Cos(var1[10]);
  t534 = 0.15121*t504;
  t539 = t534 + t538;
  t546 = t539*t229;
  t558 = -0.15121*t504;
  t559 = t558 + t538;
  t563 = t559*t352;
  t564 = -1.*t535*t229;
  t571 = t458*t352;
  t574 = t564 + t571;
  t576 = t458*t229;
  t580 = t535*t352;
  t586 = t576 + t580;
  t781 = Sin(var1[13]);
  t792 = Cos(var1[13]);
  t617 = -0.15121*t613;
  t618 = t612 + t617;
  t630 = t618*t229;
  t642 = 0.15121*t613;
  t643 = t612 + t642;
  t644 = t643*t352;
  t645 = -1.*t613*t229;
  t662 = t602*t352;
  t674 = t645 + t662;
  t683 = t602*t229;
  t693 = t613*t352;
  t702 = t683 + t693;
  t824 = Sin(var1[16]);
  t830 = Cos(var1[16]);
  t719 = -0.28121*t717*t718*t104;
  t422 = 0.15121*t421;
  t757 = -1.*t746;
  t758 = 1. + t757;
  t760 = -0.28121*t758*t442;
  t764 = -1.*t717*t718*t104;
  t765 = t746*t442;
  t768 = t764 + t765;
  t847 = Cos(var1[11]);
  t851 = Sin(var1[11]);
  t852 = -1.*t746*t717*t104;
  t853 = -1.*t718*t442;
  t854 = t852 + t853;
  t787 = -0.28121*t717*t781*t104;
  t575 = -0.15121*t574;
  t793 = -1.*t792;
  t797 = 1. + t793;
  t801 = 0.28121*t797*t586;
  t806 = t717*t781*t104;
  t811 = t792*t586;
  t819 = t806 + t811;
  t862 = Cos(var1[14]);
  t867 = Sin(var1[14]);
  t868 = -1.*t792*t717*t104;
  t869 = t781*t586;
  t873 = t868 + t869;
  t828 = -0.28121*t717*t824*t104;
  t682 = -0.15121*t674;
  t831 = -1.*t830;
  t835 = 1. + t831;
  t840 = -0.28121*t835*t702;
  t841 = -1.*t717*t824*t104;
  t842 = t830*t702;
  t843 = t841 + t842;
  t913 = Cos(var1[17]);
  t923 = Sin(var1[17]);
  t925 = -1.*t830*t717*t104;
  t926 = -1.*t824*t702;
  t927 = t925 + t926;
  t954 = Cos(var1[6]);
  t955 = -1.*t954;
  t960 = 1. + t955;
  t964 = 0.15121*t960;
  t965 = Sin(var1[6]);
  t970 = -0.15121*t965;
  t971 = t964 + t970;
  t972 = t352*t971;
  t989 = 0.15121*t965;
  t990 = t964 + t989;
  t992 = t229*t990;
  t995 = t954*t352;
  t997 = -1.*t229*t965;
  t1007 = t995 + t997;
  t1086 = t954*t229;
  t1097 = t352*t965;
  t1111 = t1086 + t1097;
  t1146 = Cos(var1[7]);
  t1169 = Sin(var1[7]);
  t1039 = 0.15121*t1007;
  t1153 = -1.*t1146;
  t1154 = 1. + t1153;
  t1164 = 0.28121*t1154*t1111;
  t1188 = -0.28121*t717*t104*t1169;
  t1203 = t1146*t1111;
  t1218 = t717*t104*t1169;
  t1247 = t1203 + t1218;
  t1290 = Cos(var1[8]);
  t1310 = -1.*t717*t1146*t104;
  t1313 = t1111*t1169;
  t1317 = t1310 + t1313;
  t1318 = Sin(var1[8]);
  t1463 = -1.*t134*t717*t101*t96;
  t1470 = t134*t717*t293*t182;
  t1480 = t134*t717*t101*t73;
  t1485 = t26*t134*t717*t182;
  t1493 = t1480 + t1485;
  t1496 = -1.*t26*t134*t717*t101;
  t1501 = t134*t717*t73*t182;
  t1503 = t1496 + t1501;
  t1540 = -1.*t134*t717*t101*t539;
  t1570 = t134*t717*t559*t182;
  t1596 = t134*t717*t101*t535;
  t1625 = t458*t134*t717*t182;
  t1628 = t1596 + t1625;
  t1635 = -1.*t458*t134*t717*t101;
  t1651 = t134*t717*t535*t182;
  t1688 = t1635 + t1651;
  t1724 = -1.*t134*t717*t101*t618;
  t1738 = t134*t717*t643*t182;
  t1740 = t134*t717*t101*t613;
  t1750 = t602*t134*t717*t182;
  t1763 = t1740 + t1750;
  t1825 = -1.*t602*t134*t717*t101;
  t1850 = t134*t717*t613*t182;
  t1886 = t1825 + t1850;
  t1942 = -0.28121*t134*t718*t117;
  t1494 = 0.15121*t1493;
  t1957 = -0.28121*t758*t1503;
  t848 = -1.*t847;
  t849 = 1. + t848;
  t1958 = -1.*t134*t718*t117;
  t1995 = t746*t1503;
  t2014 = t1958 + t1995;
  t2224 = -1.*t746*t134*t117;
  t2232 = -1.*t718*t1503;
  t2273 = t2224 + t2232;
  t2056 = -0.28121*t134*t781*t117;
  t1634 = -0.15121*t1628;
  t2063 = 0.28121*t797*t1688;
  t863 = -1.*t862;
  t864 = 1. + t863;
  t2066 = t134*t781*t117;
  t2080 = t792*t1688;
  t2104 = t2066 + t2080;
  t2324 = -1.*t792*t134*t117;
  t2329 = t781*t1688;
  t2335 = t2324 + t2329;
  t2134 = -0.28121*t134*t824*t117;
  t1808 = -0.15121*t1763;
  t2157 = -0.28121*t835*t1886;
  t917 = -1.*t913;
  t921 = 1. + t917;
  t2158 = -1.*t134*t824*t117;
  t2161 = t830*t1886;
  t2163 = t2158 + t2161;
  t2405 = -1.*t830*t134*t117;
  t2426 = -1.*t824*t1886;
  t2428 = t2405 + t2426;
  t2501 = t134*t717*t182*t971;
  t2503 = -1.*t134*t717*t101*t990;
  t2515 = t134*t717*t954*t182;
  t2531 = t134*t717*t101*t965;
  t2545 = t2515 + t2531;
  t2572 = -1.*t134*t717*t101*t954;
  t2594 = t134*t717*t182*t965;
  t2598 = t2572 + t2594;
  t2559 = 0.15121*t2545;
  t2624 = 0.28121*t1154*t2598;
  t2626 = -0.28121*t134*t117*t1169;
  t1294 = -1.*t1290;
  t1301 = 1. + t1294;
  t2631 = t1146*t2598;
  t2633 = t134*t117*t1169;
  t2645 = t2631 + t2633;
  t2682 = -1.*t134*t1146*t117;
  t2683 = t2598*t1169;
  t2684 = t2682 + t2683;
  t2726 = t134*t101*t117;
  t2729 = -1.*t104*t182;
  t2733 = t2726 + t2729;
  t2743 = t101*t104;
  t2747 = t134*t117*t182;
  t2749 = t2743 + t2747;
  t2738 = t293*t2733;
  t2752 = t96*t2749;
  t2768 = t73*t2733;
  t2774 = t26*t2749;
  t2778 = t2768 + t2774;
  t2788 = t26*t2733;
  t2791 = -1.*t73*t2749;
  t2797 = t2788 + t2791;
  t2877 = t535*t2733;
  t2886 = t458*t2749;
  t2891 = t2877 + t2886;
  t2873 = t559*t2733;
  t2874 = t539*t2749;
  t2915 = t458*t2733;
  t2921 = -1.*t535*t2749;
  t2935 = t2915 + t2921;
  t3025 = t613*t2733;
  t3048 = t602*t2749;
  t3049 = t3025 + t3048;
  t2997 = t643*t2733;
  t3018 = t618*t2749;
  t3080 = t602*t2733;
  t3099 = -1.*t613*t2749;
  t3110 = t3080 + t3099;
  t2830 = -0.28121*t758*t2778;
  t2799 = 0.15121*t2797;
  t2900 = 0.28121*t797*t2891;
  t2957 = -0.15121*t2935;
  t3062 = -0.28121*t835*t3049;
  t3164 = -0.15121*t3110;
  t3408 = t2733*t971;
  t3414 = t2749*t990;
  t3417 = t954*t2749;
  t3421 = t2733*t965;
  t3444 = t3417 + t3421;
  t3462 = t954*t2733;
  t3469 = -1.*t2749*t965;
  t3472 = t3462 + t3469;
  t3489 = 0.28121*t1154*t3444;
  t3473 = 0.15121*t3472;
  t3645 = -1.*t134*t101*t117;
  t3653 = t104*t182;
  t3655 = t3645 + t3653;
  t3607 = -0.15121*t954;
  t3618 = t3607 + t989;
  t3633 = t2749*t3618;
  t3656 = 0.15121*t954;
  t3659 = t3656 + t989;
  t3661 = t3655*t3659;
  t3663 = -1.*t3655*t965;
  t3667 = t3417 + t3663;
  t3685 = -1.*t954*t3655;
  t3695 = t3685 + t3469;
  t3729 = 0.28121*t1154*t3667;
  t3696 = 0.15121*t3695;
  t3823 = t954*t3655;
  t3831 = t2749*t965;
  t3837 = t3823 + t3831;
  t3820 = 0.28121*t134*t717*t1146;
  t3839 = 0.28121*t3837*t1169;
  t3842 = -1.*t134*t717*t1146;
  t3845 = -1.*t3837*t1169;
  t3849 = t3842 + t3845;
  t3910 = t1146*t3837;
  t3920 = -1.*t134*t717*t1169;
  t3921 = t3910 + t3920;
  t4027 = t134*t717*t1146;
  t4029 = t3837*t1169;
  t4071 = t4027 + t4029;
  t4162 = 0.15121*t26;
  t4164 = -0.15121*t73;
  t4177 = t4162 + t4164;
  t4210 = t4177*t3655;
  t4226 = t4162 + t81;
  t4234 = t4226*t2749;
  t4256 = -1.*t73*t3655;
  t4258 = t4256 + t2774;
  t4297 = -1.*t26*t3655;
  t4309 = t4297 + t2791;
  t4355 = -0.28121*t758*t4258;
  t4325 = 0.15121*t4309;
  t4614 = t26*t3655;
  t4639 = t73*t2749;
  t4642 = t4614 + t4639;
  t4608 = 0.28121*t746*t134*t717;
  t4654 = -0.28121*t718*t4642;
  t4673 = t746*t134*t717;
  t4674 = -1.*t718*t4642;
  t4679 = t4673 + t4674;
  t4716 = -1.*t134*t717*t718;
  t4719 = -1.*t746*t4642;
  t4720 = t4716 + t4719;
  t4847 = t134*t717*t718;
  t4851 = t746*t4642;
  t4853 = t4847 + t4851;
  t4916 = -0.15121*t458;
  t4971 = -1.*t535*t3655;
  t4972 = t4971 + t2886;
  t4917 = 0.15121*t535;
  t4932 = t4916 + t4917;
  t4935 = t4932*t3655;
  t4938 = t4916 + t538;
  t4956 = t4938*t2749;
  t4992 = -1.*t458*t3655;
  t4993 = t4992 + t2921;
  t4985 = 0.28121*t797*t4972;
  t5022 = -0.15121*t4993;
  t5099 = t458*t3655;
  t5106 = t535*t2749;
  t5107 = t5099 + t5106;
  t5092 = 0.28121*t792*t134*t717;
  t5108 = 0.28121*t781*t5107;
  t5110 = -1.*t792*t134*t717;
  t5113 = -1.*t781*t5107;
  t5114 = t5110 + t5113;
  t5128 = -1.*t134*t717*t781;
  t5133 = t792*t5107;
  t5134 = t5128 + t5133;
  t5201 = t792*t134*t717;
  t5204 = t781*t5107;
  t5205 = t5201 + t5204;
  t5316 = -1.*t613*t3655;
  t5317 = t5316 + t3048;
  t5258 = -0.15121*t602;
  t5278 = t5258 + t617;
  t5302 = t5278*t3655;
  t5304 = 0.15121*t602;
  t5309 = t5304 + t617;
  t5311 = t5309*t2749;
  t5341 = -1.*t602*t3655;
  t5367 = t5341 + t3099;
  t5320 = -0.28121*t835*t5317;
  t5413 = -0.15121*t5367;
  t5563 = t602*t3655;
  t5564 = t613*t2749;
  t5567 = t5563 + t5564;
  t5562 = 0.28121*t830*t134*t717;
  t5570 = -0.28121*t824*t5567;
  t5574 = t830*t134*t717;
  t5588 = -1.*t824*t5567;
  t5590 = t5574 + t5588;
  t5613 = -1.*t134*t717*t824;
  t5615 = -1.*t830*t5567;
  t5663 = t5613 + t5615;
  t5771 = t134*t717*t824;
  t5780 = t830*t5567;
  t5791 = t5771 + t5780;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=-210.915;
  p_output1[3]=-11.5758*(t257 + t369 + t422 - 0.15121*t442) - 11.5758*(t546 + t563 + t575 + 0.15121*t586) - 11.5758*(t630 + t644 + t682 - 0.15121*t702) - 13.6359*(t257 + t369 + 0.18121*t421 + t719 + t760 - 0.28121*t768) - 13.6359*(t546 + t563 - 0.18121*t574 + t787 + t801 + 0.28121*t819) - 13.6359*(t630 + t644 - 0.18121*t674 + t828 + t840 - 0.28121*t843) - 2.7468000000000004*(t257 + t369 + t422 + t719 + t760 - 0.50321*t768*t849 - 0.50321*t851*t854 - 0.50321*(t768*t847 - 1.*t851*t854)) - 2.7468000000000004*(t546 + t563 + t575 + t787 + t801 + 0.50321*t819*t864 - 0.50321*t867*t873 + 0.50321*(t819*t862 + t867*t873)) - 2.7468000000000004*(t630 + t644 + t682 + t828 + t840 - 0.50321*t843*t921 - 0.50321*t923*t927 - 0.50321*(t843*t913 - 1.*t923*t927)) - 11.5758*(t1039 + 0.15121*t1111 + t972 + t992) - 13.6359*(0.18121*t1007 + t1164 + t1188 + 0.28121*t1247 + t972 + t992) - 2.7468000000000004*(t1039 + t1164 + t1188 + 0.50321*t1247*t1301 - 0.50321*t1317*t1318 + 0.50321*(t1247*t1290 + t1317*t1318) + t972 + t992);
  p_output1[4]=-11.5758*(t1463 + t1470 + t1494 - 0.15121*t1503) - 11.5758*(t1540 + t1570 + t1634 + 0.15121*t1688) - 11.5758*(t1724 + t1738 + t1808 - 0.15121*t1886) - 13.6359*(t1463 + t1470 + 0.18121*t1493 + t1942 + t1957 - 0.28121*t2014) - 13.6359*(t1540 + t1570 - 0.18121*t1628 + t2056 + t2063 + 0.28121*t2104) - 13.6359*(t1724 + t1738 - 0.18121*t1763 + t2134 + t2157 - 0.28121*t2163) - 11.5758*(t2501 + t2503 + t2559 + 0.15121*t2598) - 13.6359*(t2501 + t2503 + 0.18121*t2545 + t2624 + t2626 + 0.28121*t2645) - 2.7468000000000004*(t2501 + t2503 + t2559 + t2624 + t2626 + 0.50321*t1301*t2645 - 0.50321*t1318*t2684 + 0.50321*(t1290*t2645 + t1318*t2684)) - 2.7468000000000004*(t1463 + t1470 + t1494 + t1942 + t1957 - 0.50321*t2014*t849 - 0.50321*t2273*t851 - 0.50321*(t2014*t847 - 1.*t2273*t851)) - 2.7468000000000004*(t1540 + t1570 + t1634 + t2056 + t2063 + 0.50321*t2104*t864 - 0.50321*t2335*t867 + 0.50321*(t2104*t862 + t2335*t867)) - 2.7468000000000004*(t1724 + t1738 + t1808 + t2134 + t2157 - 0.50321*t2163*t921 - 0.50321*t2428*t923 - 0.50321*(t2163*t913 - 1.*t2428*t923));
  p_output1[5]=-11.5758*(t2738 + t2752 - 0.15121*t2778 + t2799) - 11.5758*(t2873 + t2874 + 0.15121*t2891 + t2957) - 11.5758*(t2997 + t3018 - 0.15121*t3049 + t3164) - 11.5758*(t3408 + t3414 + 0.15121*t3444 + t3473) - 13.6359*(t3408 + t3414 + 0.28121*t1146*t3444 + 0.18121*t3472 + t3489) - 2.7468000000000004*(t3408 + t3414 + 0.50321*t1146*t1301*t3444 - 0.50321*t1169*t1318*t3444 + 0.50321*(t1146*t1290*t3444 + t1169*t1318*t3444) + t3473 + t3489) - 13.6359*(t2738 + t2752 + 0.18121*t2797 + t2830 - 0.28121*t2778*t746) - 13.6359*(t2873 + t2874 + t2900 - 0.18121*t2935 + 0.28121*t2891*t792) - 13.6359*(t2997 + t3018 + t3062 - 0.18121*t3110 - 0.28121*t3049*t830) - 2.7468000000000004*(t2738 + t2752 + t2799 + t2830 - 0.50321*t2778*t746*t849 + 0.50321*t2778*t718*t851 - 0.50321*(t2778*t746*t847 + t2778*t718*t851)) - 2.7468000000000004*(t2873 + t2874 + t2900 + t2957 + 0.50321*t2891*t792*t864 - 0.50321*t2891*t781*t867 + 0.50321*(t2891*t792*t862 + t2891*t781*t867)) - 2.7468000000000004*(t2997 + t3018 + t3062 + t3164 - 0.50321*t3049*t830*t921 + 0.50321*t3049*t824*t923 - 0.50321*(t3049*t830*t913 + t3049*t824*t923));
  p_output1[6]=-11.5758*(t3633 + t3661 + 0.15121*t3667 + t3696) - 13.6359*(t3633 + t3661 + 0.28121*t1146*t3667 + 0.18121*t3695 + t3729) - 2.7468000000000004*(t3633 + t3661 + 0.50321*t1146*t1301*t3667 - 0.50321*t1169*t1318*t3667 + 0.50321*(t1146*t1290*t3667 + t1169*t1318*t3667) + t3696 + t3729);
  p_output1[7]=-13.6359*(t3820 + t3839 + 0.28121*t3849) - 2.7468000000000004*(t3820 + t3839 + 0.50321*t1301*t3849 - 0.50321*t1318*t3921 + 0.50321*(t1290*t3849 + t1318*t3921));
  p_output1[8]=-2.7468000000000004*(0.50321*t1318*t3921 - 0.50321*t1290*t4071 + 0.50321*(-1.*t1318*t3921 + t1290*t4071));
  p_output1[9]=-11.5758*(t4210 + t4234 - 0.15121*t4258 + t4325) - 13.6359*(t4210 + t4234 + 0.18121*t4309 + t4355 - 0.28121*t4258*t746) - 2.7468000000000004*(t4210 + t4234 + t4325 + t4355 - 0.50321*t4258*t746*t849 + 0.50321*t4258*t718*t851 - 0.50321*(t4258*t746*t847 + t4258*t718*t851));
  p_output1[10]=-13.6359*(t4608 + t4654 - 0.28121*t4679) - 2.7468000000000004*(t4608 + t4654 - 0.50321*t4679*t849 - 0.50321*t4720*t851 - 0.50321*(t4679*t847 - 1.*t4720*t851));
  p_output1[11]=-2.7468000000000004*(-0.50321*t4679*t847 - 0.50321*t4853*t851 - 0.50321*(-1.*t4679*t847 - 1.*t4853*t851));
  p_output1[12]=-11.5758*(t4935 + t4956 + 0.15121*t4972 + t5022) - 13.6359*(t4935 + t4956 + t4985 - 0.18121*t4993 + 0.28121*t4972*t792) - 2.7468000000000004*(t4935 + t4956 + t4985 + t5022 + 0.50321*t4972*t792*t864 - 0.50321*t4972*t781*t867 + 0.50321*(t4972*t792*t862 + t4972*t781*t867));
  p_output1[13]=-13.6359*(t5092 + t5108 + 0.28121*t5114) - 2.7468000000000004*(t5092 + t5108 + 0.50321*t5114*t864 - 0.50321*t5134*t867 + 0.50321*(t5114*t862 + t5134*t867));
  p_output1[14]=-2.7468000000000004*(-0.50321*t5205*t862 + 0.50321*t5134*t867 + 0.50321*(t5205*t862 - 1.*t5134*t867));
  p_output1[15]=-11.5758*(t5302 + t5311 - 0.15121*t5317 + t5413) - 13.6359*(t5302 + t5311 + t5320 - 0.18121*t5367 - 0.28121*t5317*t830) - 2.7468000000000004*(t5302 + t5311 + t5320 + t5413 - 0.50321*t5317*t830*t921 + 0.50321*t5317*t824*t923 - 0.50321*(t5317*t830*t913 + t5317*t824*t923));
  p_output1[16]=-13.6359*(t5562 + t5570 - 0.28121*t5590) - 2.7468000000000004*(t5562 + t5570 - 0.50321*t5590*t921 - 0.50321*t5663*t923 - 0.50321*(t5590*t913 - 1.*t5663*t923));
  p_output1[17]=-2.7468000000000004*(-0.50321*t5590*t913 - 0.50321*t5791*t923 - 0.50321*(-1.*t5590*t913 - 1.*t5791*t923));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ge_vec_ASTRo.hh"

namespace SymFunction
{

void Ge_vec_ASTRo_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
