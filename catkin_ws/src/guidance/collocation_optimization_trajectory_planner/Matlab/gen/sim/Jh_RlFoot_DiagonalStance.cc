/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:10:35 GMT+01:00
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
static void output1(double *p_output1,const double *var1)
{
  double t346;
  double t404;
  double t412;
  double t31;
  double t237;
  double t463;
  double t513;
  double t94;
  double t108;
  double t427;
  double t438;
  double t540;
  double t553;
  double t564;
  double t779;
  double t817;
  double t822;
  double t826;
  double t827;
  double t662;
  double t669;
  double t984;
  double t989;
  double t993;
  double t1012;
  double t1016;
  double t1033;
  double t1047;
  double t1179;
  double t205;
  double t1330;
  double t1189;
  double t1235;
  double t1261;
  double t1273;
  double t1274;
  double t1280;
  double t1283;
  double t1289;
  double t1294;
  double t1315;
  double t1168;
  double t1354;
  double t1355;
  double t1371;
  double t1385;
  double t1387;
  double t1400;
  double t1431;
  double t1465;
  double t1478;
  double t927;
  double t946;
  double t739;
  double t774;
  double t294;
  double t336;
  double t1099;
  double t1142;
  double t1166;
  double t1688;
  double t1706;
  double t1712;
  double t1725;
  double t1757;
  double t1771;
  double t1795;
  double t1797;
  double t1807;
  double t1842;
  double t1860;
  double t1876;
  double t1885;
  double t1898;
  double t1913;
  double t1929;
  double t1938;
  double t1622;
  double t2158;
  double t2023;
  double t2052;
  double t2057;
  double t2104;
  double t2110;
  double t2127;
  double t2128;
  double t2138;
  double t2141;
  double t2143;
  double t2209;
  double t2228;
  double t2235;
  double t2255;
  double t2274;
  double t2303;
  double t2321;
  double t2355;
  double t2360;
  double t2404;
  double t2409;
  double t2410;
  double t2411;
  double t2429;
  double t2434;
  double t2452;
  double t2459;
  double t1544;
  double t1599;
  double t1620;
  double t1329;
  double t1502;
  double t1506;
  double t583;
  double t894;
  double t1049;
  double t1087;
  double t1513;
  double t1623;
  double t1628;
  double t2523;
  double t1997;
  double t1998;
  double t2002;
  double t1893;
  double t1954;
  double t1980;
  double t2558;
  double t1720;
  double t1776;
  double t1820;
  double t1827;
  double t1995;
  double t2003;
  double t2010;
  double t2476;
  double t2484;
  double t2486;
  double t2424;
  double t2468;
  double t2471;
  double t2136;
  double t2240;
  double t2363;
  double t2389;
  double t2473;
  double t2489;
  double t2492;
  double t2530;
  double t2537;
  double t2538;
  double t2565;
  double t2571;
  double t2581;
  double t2586;
  double t2591;
  double t2593;
  double t2596;
  double t2600;
  double t2603;
  double t2646;
  double t2650;
  double t2655;
  double t2693;
  double t2697;
  double t2709;
  double t1837;
  double t2015;
  double t2022;
  double t2766;
  double t2778;
  double t2779;
  double t2797;
  double t2804;
  double t2813;
  double t2815;
  double t2822;
  double t2827;
  double t2831;
  double t2834;
  double t2843;
  double t2845;
  double t2849;
  double t2854;
  double t2856;
  double t2861;
  double t2862;
  double t2863;
  double t2878;
  double t2879;
  double t2881;
  double t2891;
  double t2894;
  double t2895;
  double t2896;
  double t2897;
  double t2900;
  double t2905;
  double t2911;
  double t2913;
  double t2915;
  double t2741;
  double t2746;
  double t2754;
  double t2755;
  double t2758;
  double t2759;
  double t2762;
  double t2763;
  double t2768;
  double t2770;
  double t2835;
  double t2888;
  double t2916;
  double t2917;
  double t2923;
  double t2925;
  double t2933;
  double t2940;
  double t2945;
  double t2947;
  double t2949;
  double t2954;
  double t2956;
  double t2957;
  double t2964;
  double t2397;
  double t2497;
  double t2500;
  double t2971;
  double t2977;
  double t2978;
  double t2981;
  double t2747;
  double t2921;
  double t2966;
  double t2967;
  double t2994;
  double t2995;
  double t2997;
  double t3003;
  double t3012;
  double t3013;
  double t3020;
  double t3045;
  double t3055;
  double t3056;
  double t3075;
  double t3080;
  double t3086;
  double t2968;
  double t2985;
  double t2988;
  double t3062;
  double t3094;
  double t3096;
  double t3101;
  double t3103;
  double t3111;
  double t1117;
  double t1644;
  double t1656;
  double t2992;
  double t3139;
  double t3203;
  double t3217;
  double t3223;
  double t3236;
  double t3248;
  double t3253;
  double t3287;
  double t3295;
  double t3325;
  double t3347;
  double t3660;
  double t3667;
  double t3675;
  double t3680;
  double t3685;
  double t3686;
  double t3693;
  double t3694;
  double t3792;
  double t3796;
  double t3799;
  double t3801;
  double t3807;
  double t3810;
  double t3813;
  double t3819;
  double t3760;
  double t3886;
  double t3895;
  double t3897;
  double t3898;
  double t3902;
  double t3907;
  double t3909;
  double t3910;
  t346 = Cos(var1[14]);
  t404 = -1.*t346;
  t412 = 1. + t404;
  t31 = Cos(var1[13]);
  t237 = Sin(var1[13]);
  t463 = Sin(var1[14]);
  t513 = 4.e-6*t463;
  t94 = -1.*t31;
  t108 = 1. + t94;
  t427 = 1.000000000016*t412;
  t438 = -7.e-6*t412;
  t540 = t438 + t513;
  t553 = -7.e-6*t540;
  t564 = -1. + t427 + t553;
  t779 = -6.5e-11*t412;
  t817 = 1. + t779;
  t822 = -7.e-6*t817;
  t826 = 7.e-6*t412;
  t827 = t822 + t826 + t513;
  t662 = -1. + t31;
  t669 = 4.e-6*t662;
  t984 = -2.8e-11*t412;
  t989 = -1. + t346;
  t993 = 4.e-6*t989;
  t1012 = -7.e-6*t463;
  t1016 = t993 + t1012;
  t1033 = -7.e-6*t1016;
  t1047 = t984 + t1033 + t463;
  t1179 = -7.e-6*t108;
  t205 = 2.8e-11*t108;
  t1330 = Cos(var1[12]);
  t1189 = -4.e-6*t237;
  t1235 = t1179 + t1189;
  t1261 = t1235*t564;
  t1273 = -6.5e-11*t108;
  t1274 = 1. + t1273;
  t1280 = t1274*t827;
  t1283 = 7.e-6*t237;
  t1289 = t669 + t1283;
  t1294 = t1289*t1047;
  t1315 = t1261 + t1280 + t1294;
  t1168 = Sin(var1[12]);
  t1354 = -1.000000000016*t108;
  t1355 = 1. + t1354;
  t1371 = t1355*t564;
  t1385 = 4.e-6*t237;
  t1387 = t1179 + t1385;
  t1400 = t1387*t827;
  t1431 = t205 + t237;
  t1465 = t1431*t1047;
  t1478 = t1371 + t1400 + t1465;
  t927 = -1.000000000049*t108;
  t946 = 1. + t927;
  t739 = -7.e-6*t237;
  t774 = t669 + t739;
  t294 = -1.*t237;
  t336 = t205 + t294;
  t1099 = Sin(var1[4]);
  t1142 = Cos(var1[4]);
  t1166 = Cos(var1[5]);
  t1688 = -1.000000000049*t412;
  t1706 = 4.e-6*t1016;
  t1712 = 1. + t1688 + t1706;
  t1725 = 4.e-6*t817;
  t1757 = 7.e-6*t463;
  t1771 = t1725 + t993 + t1757;
  t1795 = 2.8e-11*t412;
  t1797 = 4.e-6*t540;
  t1807 = t1795 + t1797 + t463;
  t1842 = t1431*t1712;
  t1860 = t1387*t1771;
  t1876 = t1355*t1807;
  t1885 = t1842 + t1860 + t1876;
  t1898 = t1289*t1712;
  t1913 = t1274*t1771;
  t1929 = t1235*t1807;
  t1938 = t1898 + t1913 + t1929;
  t1622 = Sin(var1[5]);
  t2158 = -1.*t463;
  t2023 = 4.e-6*t412;
  t2052 = t2023 + t1012;
  t2057 = 4.e-6*t2052;
  t2104 = -4.e-6*t463;
  t2110 = t438 + t2104;
  t2127 = -7.e-6*t2110;
  t2128 = 1. + t779 + t2057 + t2127;
  t2138 = 1.000000000049*t412;
  t2141 = -1. + t2138;
  t2143 = 4.e-6*t2141;
  t2209 = t1795 + t2158;
  t2228 = -7.e-6*t2209;
  t2235 = t2143 + t993 + t2228 + t1012;
  t2255 = -1.000000000016*t412;
  t2274 = 1. + t2255;
  t2303 = -7.e-6*t2274;
  t2321 = t984 + t2158;
  t2355 = 4.e-6*t2321;
  t2360 = t2303 + t438 + t2355 + t513;
  t2404 = t1387*t2128;
  t2409 = t1431*t2235;
  t2410 = t1355*t2360;
  t2411 = t2404 + t2409 + t2410;
  t2429 = t1274*t2128;
  t2434 = t1289*t2235;
  t2452 = t1235*t2360;
  t2459 = t2429 + t2434 + t2452;
  t1544 = t1330*t1315;
  t1599 = t1168*t1478;
  t1620 = t1544 + t1599;
  t1329 = -1.*t1168*t1315;
  t1502 = t1330*t1478;
  t1506 = t1329 + t1502;
  t583 = t336*t564;
  t894 = t774*t827;
  t1049 = t946*t1047;
  t1087 = t583 + t894 + t1049;
  t1513 = t1166*t1506;
  t1623 = -1.*t1620*t1622;
  t1628 = t1513 + t1623;
  t2523 = Cos(var1[3]);
  t1997 = t1168*t1885;
  t1998 = t1330*t1938;
  t2002 = t1997 + t1998;
  t1893 = t1330*t1885;
  t1954 = -1.*t1168*t1938;
  t1980 = t1893 + t1954;
  t2558 = Sin(var1[3]);
  t1720 = t946*t1712;
  t1776 = t774*t1771;
  t1820 = t336*t1807;
  t1827 = t1720 + t1776 + t1820;
  t1995 = t1166*t1980;
  t2003 = -1.*t2002*t1622;
  t2010 = t1995 + t2003;
  t2476 = t1168*t2411;
  t2484 = t1330*t2459;
  t2486 = t2476 + t2484;
  t2424 = t1330*t2411;
  t2468 = -1.*t1168*t2459;
  t2471 = t2424 + t2468;
  t2136 = t774*t2128;
  t2240 = t946*t2235;
  t2363 = t336*t2360;
  t2389 = t2136 + t2240 + t2363;
  t2473 = t1166*t2471;
  t2489 = -1.*t2486*t1622;
  t2492 = t2473 + t2489;
  t2530 = t1166*t1620;
  t2537 = t1506*t1622;
  t2538 = t2530 + t2537;
  t2565 = t1142*t1087;
  t2571 = -1.*t1099*t1628;
  t2581 = t2565 + t2571;
  t2586 = t1166*t2002;
  t2591 = t1980*t1622;
  t2593 = t2586 + t2591;
  t2596 = t1142*t1827;
  t2600 = -1.*t1099*t2010;
  t2603 = t2596 + t2600;
  t2646 = t1166*t2486;
  t2650 = t2471*t1622;
  t2655 = t2646 + t2650;
  t2693 = t1142*t2389;
  t2697 = -1.*t1099*t2492;
  t2709 = t2693 + t2697;
  t1837 = t1827*t1099;
  t2015 = t1142*t2010;
  t2022 = t1837 + t2015;
  t2766 = 7.e-6*t108;
  t2778 = -2.598649999999999e-7*var1[14];
  t2779 = 0.148705*t817;
  t2797 = -2.3905277499999995e-16*t412;
  t2804 = -0.038922999986*t2052;
  t2813 = -0.80315*t2110;
  t2815 = t826 + t513;
  t2822 = -0.503149000008*t2815;
  t2827 = t993 + t1757;
  t2831 = -0.038924*t2827;
  t2834 = t2778 + t2779 + t2797 + t2804 + t2813 + t2822 + t2831;
  t2843 = 1.0394599999999997e-12*var1[14];
  t2845 = 1. + t1688;
  t2849 = -0.038924*t2845;
  t2854 = -0.03892299998790722*t412;
  t2856 = -0.80315*t2209;
  t2861 = 0.148705*t1016;
  t2862 = t2023 + t1757;
  t2863 = -3.6777349999999994e-6*t2862;
  t2878 = t984 + t463;
  t2879 = -0.503149000008*t2878;
  t2881 = t2843 + t2849 + t2854 + t2856 + t2861 + t2863 + t2879;
  t2891 = 1.8190549999999993e-12*var1[14];
  t2894 = -0.80315*t2274;
  t2895 = -0.5031490000160505*t412;
  t2896 = -0.038922999986*t2321;
  t2897 = t826 + t2104;
  t2900 = -3.6777349999999994e-6*t2897;
  t2905 = 0.148705*t540;
  t2911 = t1795 + t463;
  t2913 = -0.038924*t2911;
  t2915 = t2891 + t2894 + t2895 + t2896 + t2900 + t2905 + t2913;
  t2741 = -1.*t1330;
  t2746 = 1. + t2741;
  t2754 = 0.15121*t1168;
  t2755 = 1.0248489999999998e-12*var1[13];
  t2758 = -0.28120900000849935*t108;
  t2759 = -2.8e-11*t108;
  t2762 = t2759 + t294;
  t2763 = -0.038748999993*t2762;
  t2768 = t2766 + t1189;
  t2770 = -2.123459e-6*t2768;
  t2835 = t1387*t2834;
  t2888 = t1431*t2881;
  t2916 = t1355*t2915;
  t2917 = t2755 + t2758 + t2763 + t2770 + t2835 + t2888 + t2916;
  t2923 = -1.4640699999999997e-7*var1[13];
  t2925 = -1.38024835e-16*t108;
  t2933 = 4.e-6*t108;
  t2940 = t2933 + t739;
  t2945 = -0.038748999993*t2940;
  t2947 = t2766 + t1385;
  t2949 = -0.281209000004*t2947;
  t2954 = t1274*t2834;
  t2956 = t1289*t2881;
  t2957 = t1235*t2915;
  t2964 = t2923 + t2925 + t2945 + t2949 + t2954 + t2956 + t2957;
  t2397 = t2389*t1099;
  t2497 = t1142*t2492;
  t2500 = t2397 + t2497;
  t2971 = -0.15121*t2746;
  t2977 = t1330*t2917;
  t2978 = -1.*t1168*t2964;
  t2981 = t2971 + t2754 + t2977 + t2978;
  t2747 = 0.15121*t2746;
  t2921 = t1168*t2917;
  t2966 = t1330*t2964;
  t2967 = t2747 + t2754 + t2921 + t2966;
  t2994 = 5.856279999999999e-13*var1[13];
  t2995 = -0.0387489999948987*t108;
  t2997 = t2933 + t1283;
  t3003 = -2.123459e-6*t2997;
  t3012 = t2759 + t237;
  t3013 = -0.281209000004*t3012;
  t3020 = t774*t2834;
  t3045 = t946*t2881;
  t3055 = t336*t2915;
  t3056 = t2994 + t2995 + t3003 + t3013 + t3020 + t3045 + t3055;
  t3075 = t1166*t2981;
  t3080 = -1.*t2967*t1622;
  t3086 = t3075 + t3080;
  t2968 = t1166*t2967;
  t2985 = t2981*t1622;
  t2988 = t2968 + t2985;
  t3062 = t3056*t1099;
  t3094 = t1142*t3086;
  t3096 = t3062 + t3094;
  t3101 = t1142*t3056;
  t3103 = -1.*t1099*t3086;
  t3111 = t3101 + t3103;
  t1117 = t1087*t1099;
  t1644 = t1142*t1628;
  t1656 = t1117 + t1644;
  t2992 = t2655*t2988;
  t3139 = -1.*t2593*t2988;
  t3203 = -1.*t2655*t2988;
  t3217 = t2538*t2988;
  t3223 = -1.*t2538*t2988;
  t3236 = t2593*t2988;
  t3248 = t2389*t3056;
  t3253 = -1.*t1827*t3056;
  t3287 = -1.*t2389*t3056;
  t3295 = t1087*t3056;
  t3325 = -1.*t1087*t3056;
  t3347 = t1827*t3056;
  t3660 = t2128*t2834;
  t3667 = t2235*t2881;
  t3675 = t2360*t2915;
  t3680 = t3660 + t3667 + t3675;
  t3685 = -1.*t2834*t1771;
  t3686 = -1.*t1712*t2881;
  t3693 = -1.*t1807*t2915;
  t3694 = t3685 + t3686 + t3693;
  t3792 = t2834*t827;
  t3796 = t1047*t2881;
  t3799 = t564*t2915;
  t3801 = t3792 + t3796 + t3799;
  t3807 = -1.*t2128*t2834;
  t3810 = -1.*t2235*t2881;
  t3813 = -1.*t2360*t2915;
  t3819 = t3807 + t3810 + t3813;
  t3760 = 6.5e-11*t412;
  t3886 = -1.*t2834*t827;
  t3895 = -1.*t1047*t2881;
  t3897 = -1.*t564*t2915;
  t3898 = t3886 + t3895 + t3897;
  t3902 = t2834*t1771;
  t3907 = t1712*t2881;
  t3909 = t1807*t2915;
  t3910 = t3902 + t3907 + t3909;
  p_output1[0]=t1656;
  p_output1[1]=t2022;
  p_output1[2]=t2500;
  p_output1[3]=t2523*t2538 - 1.*t2558*t2581;
  p_output1[4]=t2523*t2593 - 1.*t2558*t2603;
  p_output1[5]=t2523*t2655 - 1.*t2558*t2709;
  p_output1[6]=t2538*t2558 + t2523*t2581;
  p_output1[7]=t2558*t2593 + t2523*t2603;
  p_output1[8]=t2558*t2655 + t2523*t2709;
  p_output1[9]=t2022*(t2992 + t2500*t3096 + t2709*t3111) + t2500*(-1.*t2022*t3096 - 1.*t2603*t3111 + t3139);
  p_output1[10]=t1656*(-1.*t2500*t3096 - 1.*t2709*t3111 + t3203) + t2500*(t1656*t3096 + t2581*t3111 + t3217);
  p_output1[11]=t2022*(-1.*t1656*t3096 - 1.*t2581*t3111 + t3223) + t1656*(t2022*t3096 + t2603*t3111 + t3236);
  p_output1[12]=t2593*(t2992 + t2492*t3086 + t3248) + t2655*(-1.*t2010*t3086 + t3139 + t3253);
  p_output1[13]=t2538*(-1.*t2492*t3086 + t3203 + t3287) + t2655*(t1628*t3086 + t3217 + t3295);
  p_output1[14]=t2593*(-1.*t1628*t3086 + t3223 + t3325) + t2538*(t2010*t3086 + t3236 + t3347);
  p_output1[15]=t1827*(t2486*t2967 + t2471*t2981 + t3248) + t2389*(-1.*t2002*t2967 - 1.*t1980*t2981 + t3253);
  p_output1[16]=t1087*(-1.*t2486*t2967 - 1.*t2471*t2981 + t3287) + t2389*(t1620*t2967 + t1506*t2981 + t3295);
  p_output1[17]=t1827*(-1.*t1620*t2967 - 1.*t1506*t2981 + t3325) + t1087*(t2002*t2967 + t1980*t2981 + t3347);
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
  p_output1[36]=0.15121*t1315 + 0.15121*t1478 + t1827*(t2411*t2917 + t2459*t2964 + t3248) + t2389*(-1.*t1885*t2917 - 1.*t1938*t2964 + t3253);
  p_output1[37]=0.15121*t1885 + 0.15121*t1938 + t1087*(-1.*t2411*t2917 - 1.*t2459*t2964 + t3287) + t2389*(t1478*t2917 + t1315*t2964 + t3295);
  p_output1[38]=0.15121*t2411 + 0.15121*t2459 + t1827*(-1.*t1478*t2917 - 1.*t1315*t2964 + t3325) + t1087*(t1885*t2917 + t1938*t2964 + t3347);
  p_output1[39]=-0.281209*t1047 + t1771*t3680 + t2128*t3694 + 4.e-6*(-1.*t1712*t3680 - 1.*t2235*t3694) - 7.e-6*(t1807*t3680 + t2360*t3694) + 0.038749*t564 + 1.e-6*(t2104 + t438 + 7.e-6*t817);
  p_output1[40]=-0.281209*t1712 + 0.038749*t1807 + 1.e-6*(t1012 + t2023 + 4.e-6*(-1. + t3760)) + t2128*t3801 + 4.e-6*(-1.*t2235*t3801 - 1.*t1047*t3819) - 7.e-6*(t2360*t3801 + t3819*t564) + t3819*t827;
  p_output1[41]=-0.281209*t2235 + 0.038749*t2360 + 1.e-6*(-1. + 7.e-6*t2110 + 4.e-6*t2827 + t3760) + t1771*t3898 + 4.e-6*(-1.*t1712*t3898 - 1.*t1047*t3910) - 7.e-6*(t1807*t3898 + t3910*t564) + t3910*t827;
  p_output1[42]=4.0519653002457196e-7;
  p_output1[43]=0.29999995910920463;
  p_output1[44]=-2.5986500000000035e-7;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_RlFoot_DiagonalStance.hh"

namespace SymFunction
{

void Jh_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
