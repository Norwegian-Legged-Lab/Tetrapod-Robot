/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 17:52:02 GMT+01:00
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
  double t232;
  double t235;
  double t281;
  double t111;
  double t170;
  double t176;
  double t377;
  double t378;
  double t193;
  double t313;
  double t372;
  double t413;
  double t424;
  double t444;
  double t190;
  double t528;
  double t592;
  double t601;
  double t618;
  double t634;
  double t707;
  double t750;
  double t801;
  double t830;
  double t843;
  double t853;
  double t856;
  double t662;
  double t668;
  double t1016;
  double t979;
  double t1003;
  double t1068;
  double t1385;
  double t944;
  double t956;
  double t1644;
  double t1339;
  double t204;
  double t1456;
  double t1467;
  double t1526;
  double t1568;
  double t1332;
  double t1187;
  double t1659;
  double t1710;
  double t1712;
  double t1719;
  double t1274;
  double t1287;
  double t1511;
  double t1578;
  double t1580;
  double t1113;
  double t1183;
  double t1600;
  double t1628;
  double t1637;
  double t1674;
  double t1702;
  double t1379;
  double t1713;
  double t1721;
  double t1735;
  double t686;
  double t1789;
  double t1833;
  double t1837;
  double t1840;
  double t1841;
  double t1860;
  double t1893;
  double t1901;
  double t1919;
  double t1941;
  double t1953;
  double t1974;
  double t1978;
  double t2004;
  double t2020;
  double t2021;
  double t2030;
  double t2039;
  double t2050;
  double t2055;
  double t2063;
  double t2069;
  double t2094;
  double t2095;
  double t2105;
  double t2106;
  double t2119;
  double t2121;
  double t2134;
  double t2145;
  double t2152;
  double t2171;
  double t507;
  double t525;
  double t697;
  double t212;
  double t2246;
  double t1803;
  double t2189;
  double t2193;
  double t2211;
  double t2214;
  double t1243;
  double t1263;
  double t1301;
  double t1334;
  double t1403;
  double t1409;
  double t1775;
  double t1786;
  double t1794;
  double t1800;
  double t1813;
  double t1830;
  double t1954;
  double t2085;
  double t2173;
  double t2176;
  double t1265;
  double t1337;
  double t1412;
  double t1423;
  double t2216;
  double t2238;
  double t2253;
  double t2284;
  double t2298;
  double t2324;
  double t2336;
  double t2341;
  double t2350;
  double t2352;
  double t2387;
  double t2392;
  double t2416;
  double t2420;
  double t2429;
  double t2437;
  double t2443;
  double t2444;
  double t2445;
  double t2446;
  double t2595;
  double t2607;
  double t2609;
  double t2621;
  double t2629;
  double t2632;
  double t2635;
  double t2641;
  double t2354;
  double t1586;
  double t1709;
  double t1754;
  double t1760;
  double t2360;
  double t2361;
  double t2373;
  double t2386;
  double t2746;
  double t2726;
  double t2762;
  double t2783;
  double t2797;
  double t2519;
  double t2493;
  double t2499;
  double t2503;
  double t2506;
  double t2520;
  double t2528;
  double t2532;
  double t2534;
  double t2796;
  double t2811;
  double t2825;
  double t2831;
  double t2854;
  double t2856;
  double t2865;
  double t2868;
  double t473;
  double t635;
  double t903;
  double t920;
  double t968;
  double t1013;
  double t1069;
  double t1078;
  double t3117;
  double t3141;
  double t3151;
  double t3160;
  double t3118;
  double t3123;
  double t3134;
  double t3163;
  double t3106;
  double t3059;
  double t3061;
  double t3075;
  double t3077;
  double t3090;
  double t3139;
  double t3168;
  double t3174;
  double t3196;
  double t3187;
  double t3188;
  double t3189;
  double t3181;
  double t3204;
  double t3205;
  double t3206;
  double t2887;
  double t2901;
  double t2942;
  double t2976;
  double t2990;
  double t3003;
  double t2834;
  double t2842;
  double t2847;
  double t2743;
  double t2749;
  double t2758;
  double t3292;
  double t3297;
  double t3298;
  double t3279;
  double t3286;
  double t3288;
  double t3262;
  double t3265;
  double t3268;
  double t3299;
  double t3302;
  double t3305;
  double t3321;
  double t3322;
  double t3323;
  double t3312;
  double t3270;
  double t3274;
  double t3275;
  double t3370;
  double t3372;
  double t3373;
  double t3334;
  double t3350;
  double t3356;
  double t3366;
  double t3374;
  double t3383;
  double t3417;
  double t3454;
  double t3466;
  double t3470;
  double t3749;
  double t3762;
  double t3764;
  double t3765;
  double t3771;
  double t3775;
  double t3784;
  double t3787;
  double t3620;
  double t3652;
  double t3547;
  double t3551;
  double t3563;
  double t3098;
  double t3175;
  double t3176;
  double t3949;
  double t3430;
  double t3448;
  double t3449;
  double t3971;
  double t3696;
  double t4182;
  double t4186;
  double t4194;
  double t4195;
  double t4214;
  double t4215;
  double t4219;
  double t4228;
  double t4061;
  double t4093;
  double t4462;
  double t4496;
  t232 = Cos(var1[14]);
  t235 = -1.*t232;
  t281 = 1. + t235;
  t111 = Cos(var1[13]);
  t170 = -1.*t111;
  t176 = 1. + t170;
  t377 = Sin(var1[14]);
  t378 = 4.e-6*t377;
  t193 = Sin(var1[13]);
  t313 = 1.000000000016*t281;
  t372 = -7.e-6*t281;
  t413 = t372 + t378;
  t424 = -7.e-6*t413;
  t444 = -1. + t313 + t424;
  t190 = -7.e-6*t176;
  t528 = -6.5e-11*t281;
  t592 = 1. + t528;
  t601 = -7.e-6*t592;
  t618 = 7.e-6*t281;
  t634 = t601 + t618 + t378;
  t707 = -2.8e-11*t281;
  t750 = -1. + t232;
  t801 = 4.e-6*t750;
  t830 = -7.e-6*t377;
  t843 = t801 + t830;
  t853 = -7.e-6*t843;
  t856 = t707 + t853 + t377;
  t662 = -1. + t111;
  t668 = 4.e-6*t662;
  t1016 = 2.8e-11*t176;
  t979 = 4.e-6*t193;
  t1003 = t190 + t979;
  t1068 = t1016 + t193;
  t1385 = 2.8e-11*t281;
  t944 = -1.000000000016*t176;
  t956 = 1. + t944;
  t1644 = -1.*t377;
  t1339 = -1.*t193;
  t204 = -4.e-6*t193;
  t1456 = 4.e-6*t281;
  t1467 = t1456 + t830;
  t1526 = -4.e-6*t377;
  t1568 = t372 + t1526;
  t1332 = 7.e-6*t377;
  t1187 = -1.000000000049*t281;
  t1659 = t1385 + t1644;
  t1710 = -1.000000000016*t281;
  t1712 = 1. + t1710;
  t1719 = t707 + t1644;
  t1274 = -7.e-6*t193;
  t1287 = t668 + t1274;
  t1511 = 4.e-6*t1467;
  t1578 = -7.e-6*t1568;
  t1580 = 1. + t528 + t1511 + t1578;
  t1113 = -1.000000000049*t176;
  t1183 = 1. + t1113;
  t1600 = 1.000000000049*t281;
  t1628 = -1. + t1600;
  t1637 = 4.e-6*t1628;
  t1674 = -7.e-6*t1659;
  t1702 = t1637 + t801 + t1674 + t830;
  t1379 = t1016 + t1339;
  t1713 = -7.e-6*t1712;
  t1721 = 4.e-6*t1719;
  t1735 = t1713 + t372 + t1721 + t378;
  t686 = 7.e-6*t193;
  t1789 = -2.8e-11*t176;
  t1833 = -2.598649999999999e-7*var1[14];
  t1837 = 0.148705*t592;
  t1840 = -2.3905277499999995e-16*t281;
  t1841 = -0.038922999986*t1467;
  t1860 = -0.80315*t1568;
  t1893 = t618 + t378;
  t1901 = -0.503149000008*t1893;
  t1919 = t801 + t1332;
  t1941 = -0.038924*t1919;
  t1953 = t1833 + t1837 + t1840 + t1841 + t1860 + t1901 + t1941;
  t1974 = 1.0394599999999997e-12*var1[14];
  t1978 = 1. + t1187;
  t2004 = -0.038924*t1978;
  t2020 = -0.03892299998790722*t281;
  t2021 = -0.80315*t1659;
  t2030 = 0.148705*t843;
  t2039 = t1456 + t1332;
  t2050 = -3.6777349999999994e-6*t2039;
  t2055 = t707 + t377;
  t2063 = -0.503149000008*t2055;
  t2069 = t1974 + t2004 + t2020 + t2021 + t2030 + t2050 + t2063;
  t2094 = 1.8190549999999993e-12*var1[14];
  t2095 = -0.80315*t1712;
  t2105 = -0.5031490000160505*t281;
  t2106 = -0.038922999986*t1719;
  t2119 = t618 + t1526;
  t2121 = -3.6777349999999994e-6*t2119;
  t2134 = 0.148705*t413;
  t2145 = t1385 + t377;
  t2152 = -0.038924*t2145;
  t2171 = t2094 + t2095 + t2105 + t2106 + t2121 + t2134 + t2152;
  t507 = -6.5e-11*t176;
  t525 = 1. + t507;
  t697 = t668 + t686;
  t212 = t190 + t204;
  t2246 = 4.e-6*t176;
  t1803 = 7.e-6*t176;
  t2189 = t1287*t1580;
  t2193 = t1183*t1702;
  t2211 = t1379*t1735;
  t2214 = t2189 + t2193 + t2211;
  t1243 = 4.e-6*t843;
  t1263 = 1. + t1187 + t1243;
  t1301 = 4.e-6*t592;
  t1334 = t1301 + t801 + t1332;
  t1403 = 4.e-6*t413;
  t1409 = t1385 + t1403 + t377;
  t1775 = 1.0248489999999998e-12*var1[13];
  t1786 = -0.28120900000849935*t176;
  t1794 = t1789 + t1339;
  t1800 = -0.038748999993*t1794;
  t1813 = t1803 + t204;
  t1830 = -2.123459e-6*t1813;
  t1954 = t1003*t1953;
  t2085 = t1068*t2069;
  t2173 = t956*t2171;
  t2176 = t1775 + t1786 + t1800 + t1830 + t1954 + t2085 + t2173;
  t1265 = t1183*t1263;
  t1337 = t1287*t1334;
  t1412 = t1379*t1409;
  t1423 = t1265 + t1337 + t1412;
  t2216 = 5.856279999999999e-13*var1[13];
  t2238 = -0.0387489999948987*t176;
  t2253 = t2246 + t686;
  t2284 = -2.123459e-6*t2253;
  t2298 = t1789 + t193;
  t2324 = -0.281209000004*t2298;
  t2336 = t1287*t1953;
  t2341 = t1183*t2069;
  t2350 = t1379*t2171;
  t2352 = t2216 + t2238 + t2284 + t2324 + t2336 + t2341 + t2350;
  t2387 = -1.4640699999999997e-7*var1[13];
  t2392 = -1.38024835e-16*t176;
  t2416 = t2246 + t1274;
  t2420 = -0.038748999993*t2416;
  t2429 = t1803 + t979;
  t2437 = -0.281209000004*t2429;
  t2443 = t525*t1953;
  t2444 = t697*t2069;
  t2445 = t212*t2171;
  t2446 = t2387 + t2392 + t2420 + t2437 + t2443 + t2444 + t2445;
  t2595 = t1580*t1953;
  t2607 = t1702*t2069;
  t2609 = t1735*t2171;
  t2621 = t2595 + t2607 + t2609;
  t2629 = -1.*t1953*t1334;
  t2632 = -1.*t1263*t2069;
  t2635 = -1.*t1409*t2171;
  t2641 = t2629 + t2632 + t2635;
  t2354 = t2214*t2352;
  t1586 = t1003*t1580;
  t1709 = t1068*t1702;
  t1754 = t956*t1735;
  t1760 = t1586 + t1709 + t1754;
  t2360 = t525*t1580;
  t2361 = t697*t1702;
  t2373 = t212*t1735;
  t2386 = t2360 + t2361 + t2373;
  t2746 = Cos(var1[12]);
  t2726 = Sin(var1[12]);
  t2762 = -1.*t2746;
  t2783 = 1. + t2762;
  t2797 = 0.15121*t2726;
  t2519 = -1.*t1423*t2352;
  t2493 = t1068*t1263;
  t2499 = t1003*t1334;
  t2503 = t956*t1409;
  t2506 = t2493 + t2499 + t2503;
  t2520 = t697*t1263;
  t2528 = t525*t1334;
  t2532 = t212*t1409;
  t2534 = t2520 + t2528 + t2532;
  t2796 = 0.15121*t2783;
  t2811 = t2726*t2176;
  t2825 = t2746*t2446;
  t2831 = t2796 + t2797 + t2811 + t2825;
  t2854 = -0.15121*t2783;
  t2856 = t2746*t2176;
  t2865 = -1.*t2726*t2446;
  t2868 = t2854 + t2797 + t2856 + t2865;
  t473 = t212*t444;
  t635 = t525*t634;
  t903 = t697*t856;
  t920 = t473 + t635 + t903;
  t968 = t956*t444;
  t1013 = t1003*t634;
  t1069 = t1068*t856;
  t1078 = t968 + t1013 + t1069;
  t3117 = Cos(var1[5]);
  t3141 = t2746*t920;
  t3151 = t2726*t1078;
  t3160 = t3141 + t3151;
  t3118 = -1.*t2726*t920;
  t3123 = t2746*t1078;
  t3134 = t3118 + t3123;
  t3163 = Sin(var1[5]);
  t3106 = Cos(var1[4]);
  t3059 = t1379*t444;
  t3061 = t1287*t634;
  t3075 = t1183*t856;
  t3077 = t3059 + t3061 + t3075;
  t3090 = Sin(var1[4]);
  t3139 = t3117*t3134;
  t3168 = -1.*t3160*t3163;
  t3174 = t3139 + t3168;
  t3196 = Cos(var1[3]);
  t3187 = t3117*t3160;
  t3188 = t3134*t3163;
  t3189 = t3187 + t3188;
  t3181 = Sin(var1[3]);
  t3204 = t3106*t3077;
  t3205 = -1.*t3090*t3174;
  t3206 = t3204 + t3205;
  t2887 = t2726*t2506;
  t2901 = t2746*t2534;
  t2942 = t2887 + t2901;
  t2976 = t2746*t2506;
  t2990 = -1.*t2726*t2534;
  t3003 = t2976 + t2990;
  t2834 = t2746*t1760;
  t2842 = -1.*t2726*t2386;
  t2847 = t2834 + t2842;
  t2743 = t2726*t1760;
  t2749 = t2746*t2386;
  t2758 = t2743 + t2749;
  t3292 = t3117*t2758;
  t3297 = t2847*t3163;
  t3298 = t3292 + t3297;
  t3279 = t3117*t2868;
  t3286 = -1.*t2831*t3163;
  t3288 = t3279 + t3286;
  t3262 = t3117*t2942;
  t3265 = t3003*t3163;
  t3268 = t3262 + t3265;
  t3299 = t3117*t2831;
  t3302 = t2868*t3163;
  t3305 = t3299 + t3302;
  t3321 = t3117*t3003;
  t3322 = -1.*t2942*t3163;
  t3323 = t3321 + t3322;
  t3312 = t3298*t3305;
  t3270 = t3117*t2847;
  t3274 = -1.*t2758*t3163;
  t3275 = t3270 + t3274;
  t3370 = t2214*t3090;
  t3372 = t3106*t3275;
  t3373 = t3370 + t3372;
  t3334 = -1.*t3268*t3305;
  t3350 = t1423*t3090;
  t3356 = t3106*t3323;
  t3366 = t3350 + t3356;
  t3374 = t2352*t3090;
  t3383 = t3106*t3288;
  t3417 = t3374 + t3383;
  t3454 = t3106*t2352;
  t3466 = -1.*t3090*t3288;
  t3470 = t3454 + t3466;
  t3749 = t1953*t634;
  t3762 = t856*t2069;
  t3764 = t444*t2171;
  t3765 = t3749 + t3762 + t3764;
  t3771 = -1.*t1580*t1953;
  t3775 = -1.*t1702*t2069;
  t3784 = -1.*t1735*t2171;
  t3787 = t3771 + t3775 + t3784;
  t3620 = -1.*t2214*t2352;
  t3652 = t3077*t2352;
  t3547 = t3106*t1423;
  t3551 = -1.*t3090*t3323;
  t3563 = t3547 + t3551;
  t3098 = t3077*t3090;
  t3175 = t3106*t3174;
  t3176 = t3098 + t3175;
  t3949 = -1.*t3298*t3305;
  t3430 = t3106*t2214;
  t3448 = -1.*t3090*t3275;
  t3449 = t3430 + t3448;
  t3971 = t3189*t3305;
  t3696 = 6.5e-11*t281;
  t4182 = -1.*t1953*t634;
  t4186 = -1.*t856*t2069;
  t4194 = -1.*t444*t2171;
  t4195 = t4182 + t4186 + t4194;
  t4214 = t1953*t1334;
  t4215 = t1263*t2069;
  t4219 = t1409*t2171;
  t4228 = t4214 + t4215 + t4219;
  t4061 = -1.*t3077*t2352;
  t4093 = t1423*t2352;
  t4462 = -1.*t3189*t3305;
  t4496 = t3268*t3305;
  p_output1[0]=t3176*var2[0] + (t3189*t3196 - 1.*t3181*t3206)*var2[1] + (t3181*t3189 + t3196*t3206)*var2[2] + (t3366*(t3312 + t3373*t3417 + t3449*t3470) + t3373*(t3334 - 1.*t3366*t3417 - 1.*t3470*t3563))*var2[3] + (t3268*(t2354 + t3275*t3288 + t3312) + t3298*(t2519 - 1.*t3288*t3323 + t3334))*var2[4] + (t1423*(t2354 + t2758*t2831 + t2847*t2868) + t2214*(t2519 - 1.*t2831*t2942 - 1.*t2868*t3003))*var2[5] + (0.15121*t1078 + t1423*(t1760*t2176 + t2354 + t2386*t2446) + t2214*(-1.*t2176*t2506 + t2519 - 1.*t2446*t2534) + 0.15121*t920)*var2[12] + (t1334*t2621 + t1580*t2641 + 4.e-6*(-1.*t1263*t2621 - 1.*t1702*t2641) - 7.e-6*(t1409*t2621 + t1735*t2641) + 0.038749*t444 + 1.e-6*(t1526 + t372 + 7.e-6*t592) - 0.281209*t856)*var2[13] + 4.0519653002457196e-7*var2[14];
  p_output1[1]=t3366*var2[0] + (t3196*t3268 - 1.*t3181*t3563)*var2[1] + (t3181*t3268 + t3196*t3563)*var2[2] + (t3176*(-1.*t3373*t3417 - 1.*t3449*t3470 + t3949) + t3373*(t3176*t3417 + t3206*t3470 + t3971))*var2[3] + (t3189*(-1.*t3275*t3288 + t3620 + t3949) + t3298*(t3174*t3288 + t3652 + t3971))*var2[4] + (t3077*(-1.*t2758*t2831 - 1.*t2847*t2868 + t3620) + t2214*(t2868*t3134 + t2831*t3160 + t3652))*var2[5] + (0.15121*t2506 + 0.15121*t2534 + t3077*(-1.*t1760*t2176 - 1.*t2386*t2446 + t3620) + t2214*(t1078*t2176 + t3652 + t2446*t920))*var2[12] + (-0.281209*t1263 + 0.038749*t1409 + t1580*t3765 - 7.e-6*(t1735*t3765 + t3787*t444) + t3787*t634 + 1.e-6*(t1456 + 4.e-6*(-1. + t3696) + t830) + 4.e-6*(-1.*t1702*t3765 - 1.*t3787*t856))*var2[13] + 0.29999995910920463*var2[14];
  p_output1[2]=t3373*var2[0] + (t3196*t3298 - 1.*t3181*t3449)*var2[1] + (t3181*t3298 + t3196*t3449)*var2[2] + (t3366*(-1.*t3176*t3417 - 1.*t3206*t3470 + t4462) + t3176*(t3366*t3417 + t3470*t3563 + t4496))*var2[3] + (t3268*(-1.*t3174*t3288 + t4061 + t4462) + t3189*(t3288*t3323 + t4093 + t4496))*var2[4] + (t1423*(-1.*t2868*t3134 - 1.*t2831*t3160 + t4061) + t3077*(t2831*t2942 + t2868*t3003 + t4093))*var2[5] + (0.15121*t1760 + 0.15121*t2386 + t3077*(t2176*t2506 + t2446*t2534 + t4093) + t1423*(-1.*t1078*t2176 + t4061 - 1.*t2446*t920))*var2[12] + (-0.281209*t1702 + 0.038749*t1735 + 1.e-6*(-1. + 7.e-6*t1568 + 4.e-6*t1919 + t3696) + t1334*t4195 - 7.e-6*(t1409*t4195 + t4228*t444) + t4228*t634 + 4.e-6*(-1.*t1263*t4195 - 1.*t4228*t856))*var2[13] - 2.5986500000000035e-7*var2[14];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dh_RlFoot_QuadrupleStance.hh"

namespace QuadrupleStance
{

void dh_RlFoot_QuadrupleStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
