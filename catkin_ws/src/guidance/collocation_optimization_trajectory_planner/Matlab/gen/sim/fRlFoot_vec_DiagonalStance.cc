/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:10:48 GMT+01:00
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
  double t355;
  double t356;
  double t389;
  double t536;
  double t153;
  double t541;
  double t855;
  double t882;
  double t315;
  double t616;
  double t1135;
  double t402;
  double t474;
  double t582;
  double t610;
  double t658;
  double t677;
  double t696;
  double t814;
  double t1316;
  double t1002;
  double t1018;
  double t1026;
  double t1031;
  double t1081;
  double t1104;
  double t1189;
  double t1223;
  double t1242;
  double t1427;
  double t1434;
  double t1442;
  double t1481;
  double t1515;
  double t1583;
  double t1636;
  double t1645;
  double t183;
  double t296;
  double t1806;
  double t2050;
  double t1837;
  double t1844;
  double t1847;
  double t1867;
  double t1873;
  double t1934;
  double t1982;
  double t2033;
  double t2038;
  double t1798;
  double t2092;
  double t2096;
  double t2102;
  double t2120;
  double t2133;
  double t2135;
  double t2148;
  double t2150;
  double t2165;
  double t2195;
  double t1348;
  double t1380;
  double t325;
  double t349;
  double t884;
  double t979;
  double t1785;
  double t1794;
  double t1797;
  double t2294;
  double t2296;
  double t2311;
  double t2314;
  double t2327;
  double t2331;
  double t2340;
  double t2354;
  double t2385;
  double t2387;
  double t2388;
  double t2405;
  double t2407;
  double t2415;
  double t2421;
  double t2433;
  double t2438;
  double t2441;
  double t2445;
  double t2252;
  double t2633;
  double t2639;
  double t2670;
  double t2699;
  double t2704;
  double t2706;
  double t2727;
  double t2739;
  double t2787;
  double t2795;
  double t2798;
  double t2808;
  double t2816;
  double t2820;
  double t2828;
  double t2829;
  double t2221;
  double t2223;
  double t2225;
  double t2045;
  double t2198;
  double t2199;
  double t820;
  double t1285;
  double t1659;
  double t1704;
  double t2212;
  double t2270;
  double t2278;
  double t2875;
  double t2482;
  double t2491;
  double t2501;
  double t2428;
  double t2465;
  double t2466;
  double t2886;
  double t2323;
  double t2356;
  double t2397;
  double t2401;
  double t2476;
  double t2546;
  double t2554;
  double t2843;
  double t2846;
  double t2847;
  double t2814;
  double t2830;
  double t2836;
  double t2686;
  double t2707;
  double t2744;
  double t2773;
  double t2842;
  double t2853;
  double t2858;
  double t2877;
  double t2880;
  double t2882;
  double t2887;
  double t2891;
  double t2893;
  double t2908;
  double t2910;
  double t2922;
  double t2931;
  double t2938;
  double t2946;
  double t2975;
  double t2990;
  double t2998;
  double t3006;
  double t3011;
  double t3014;
  double t2403;
  double t2595;
  double t2611;
  double t3157;
  double t3169;
  double t3170;
  double t3177;
  double t3183;
  double t3184;
  double t3186;
  double t3187;
  double t3188;
  double t3191;
  double t3193;
  double t3195;
  double t3197;
  double t3200;
  double t3201;
  double t3206;
  double t3207;
  double t3233;
  double t3239;
  double t3241;
  double t3243;
  double t3257;
  double t3260;
  double t3261;
  double t3262;
  double t3265;
  double t3267;
  double t3270;
  double t3278;
  double t3280;
  double t3281;
  double t3284;
  double t3112;
  double t3115;
  double t3119;
  double t3122;
  double t3125;
  double t3126;
  double t3140;
  double t3148;
  double t3158;
  double t3160;
  double t3194;
  double t3258;
  double t3286;
  double t3298;
  double t3301;
  double t3306;
  double t3307;
  double t3310;
  double t3332;
  double t3333;
  double t3338;
  double t3343;
  double t3349;
  double t3351;
  double t3354;
  double t1786;
  double t2279;
  double t2280;
  double t3374;
  double t3376;
  double t3388;
  double t3390;
  double t3117;
  double t3299;
  double t3356;
  double t3358;
  double t3401;
  double t3403;
  double t3414;
  double t3416;
  double t3423;
  double t3425;
  double t3431;
  double t3436;
  double t3448;
  double t3459;
  double t3471;
  double t3484;
  double t3486;
  double t3371;
  double t3392;
  double t3394;
  double t3461;
  double t3489;
  double t3490;
  double t3493;
  double t3496;
  double t3500;
  double t2782;
  double t2859;
  double t2860;
  double t3396;
  double t3518;
  double t3534;
  double t3567;
  double t3600;
  double t3609;
  double t3640;
  double t3655;
  double t3671;
  double t3677;
  double t3703;
  double t3731;
  double t4010;
  double t4012;
  double t4013;
  double t4020;
  double t4026;
  double t4031;
  double t4039;
  double t4043;
  double t4095;
  double t4098;
  double t4099;
  double t4100;
  double t4104;
  double t4106;
  double t4107;
  double t4109;
  double t3986;
  double t4166;
  double t4167;
  double t4170;
  double t4172;
  double t4178;
  double t4179;
  double t4180;
  double t4181;
  t355 = Cos(var1[14]);
  t356 = -1.*t355;
  t389 = 1. + t356;
  t536 = Sin(var1[14]);
  t153 = Cos(var1[13]);
  t541 = -7.e-6*t536;
  t855 = -1.*t153;
  t882 = 1. + t855;
  t315 = Sin(var1[13]);
  t616 = -7.e-6*t389;
  t1135 = -1.*t536;
  t402 = -6.5e-11*t389;
  t474 = 4.e-6*t389;
  t582 = t474 + t541;
  t610 = 4.e-6*t582;
  t658 = -4.e-6*t536;
  t677 = t616 + t658;
  t696 = -7.e-6*t677;
  t814 = 1. + t402 + t610 + t696;
  t1316 = 2.8e-11*t882;
  t1002 = 1.000000000049*t389;
  t1018 = -1. + t1002;
  t1026 = 4.e-6*t1018;
  t1031 = -1. + t355;
  t1081 = 4.e-6*t1031;
  t1104 = 2.8e-11*t389;
  t1189 = t1104 + t1135;
  t1223 = -7.e-6*t1189;
  t1242 = t1026 + t1081 + t1223 + t541;
  t1427 = -1.000000000016*t389;
  t1434 = 1. + t1427;
  t1442 = -7.e-6*t1434;
  t1481 = -2.8e-11*t389;
  t1515 = t1481 + t1135;
  t1583 = 4.e-6*t1515;
  t1636 = 4.e-6*t536;
  t1645 = t1442 + t616 + t1583 + t1636;
  t183 = -1. + t153;
  t296 = 4.e-6*t183;
  t1806 = -7.e-6*t882;
  t2050 = Sin(var1[12]);
  t1837 = 4.e-6*t315;
  t1844 = t1806 + t1837;
  t1847 = t1844*t814;
  t1867 = t1316 + t315;
  t1873 = t1867*t1242;
  t1934 = -1.000000000016*t882;
  t1982 = 1. + t1934;
  t2033 = t1982*t1645;
  t2038 = t1847 + t1873 + t2033;
  t1798 = Cos(var1[12]);
  t2092 = -6.5e-11*t882;
  t2096 = 1. + t2092;
  t2102 = t2096*t814;
  t2120 = 7.e-6*t315;
  t2133 = t296 + t2120;
  t2135 = t2133*t1242;
  t2148 = -4.e-6*t315;
  t2150 = t1806 + t2148;
  t2165 = t2150*t1645;
  t2195 = t2102 + t2135 + t2165;
  t1348 = -1.*t315;
  t1380 = t1316 + t1348;
  t325 = -7.e-6*t315;
  t349 = t296 + t325;
  t884 = -1.000000000049*t882;
  t979 = 1. + t884;
  t1785 = Sin(var1[4]);
  t1794 = Cos(var1[4]);
  t1797 = Cos(var1[5]);
  t2294 = 1.000000000016*t389;
  t2296 = t616 + t1636;
  t2311 = -7.e-6*t2296;
  t2314 = -1. + t2294 + t2311;
  t2327 = 1. + t402;
  t2331 = -7.e-6*t2327;
  t2340 = 7.e-6*t389;
  t2354 = t2331 + t2340 + t1636;
  t2385 = t1081 + t541;
  t2387 = -7.e-6*t2385;
  t2388 = t1481 + t2387 + t536;
  t2405 = t2150*t2314;
  t2407 = t2096*t2354;
  t2415 = t2133*t2388;
  t2421 = t2405 + t2407 + t2415;
  t2433 = t1982*t2314;
  t2438 = t1844*t2354;
  t2441 = t1867*t2388;
  t2445 = t2433 + t2438 + t2441;
  t2252 = Sin(var1[5]);
  t2633 = -1.000000000049*t389;
  t2639 = 4.e-6*t2385;
  t2670 = 1. + t2633 + t2639;
  t2699 = 4.e-6*t2327;
  t2704 = 7.e-6*t536;
  t2706 = t2699 + t1081 + t2704;
  t2727 = 4.e-6*t2296;
  t2739 = t1104 + t2727 + t536;
  t2787 = t1867*t2670;
  t2795 = t1844*t2706;
  t2798 = t1982*t2739;
  t2808 = t2787 + t2795 + t2798;
  t2816 = t2133*t2670;
  t2820 = t2096*t2706;
  t2828 = t2150*t2739;
  t2829 = t2816 + t2820 + t2828;
  t2221 = t2050*t2038;
  t2223 = t1798*t2195;
  t2225 = t2221 + t2223;
  t2045 = t1798*t2038;
  t2198 = -1.*t2050*t2195;
  t2199 = t2045 + t2198;
  t820 = t349*t814;
  t1285 = t979*t1242;
  t1659 = t1380*t1645;
  t1704 = t820 + t1285 + t1659;
  t2212 = t1797*t2199;
  t2270 = -1.*t2225*t2252;
  t2278 = t2212 + t2270;
  t2875 = Cos(var1[3]);
  t2482 = t1798*t2421;
  t2491 = t2050*t2445;
  t2501 = t2482 + t2491;
  t2428 = -1.*t2050*t2421;
  t2465 = t1798*t2445;
  t2466 = t2428 + t2465;
  t2886 = Sin(var1[3]);
  t2323 = t1380*t2314;
  t2356 = t349*t2354;
  t2397 = t979*t2388;
  t2401 = t2323 + t2356 + t2397;
  t2476 = t1797*t2466;
  t2546 = -1.*t2501*t2252;
  t2554 = t2476 + t2546;
  t2843 = t2050*t2808;
  t2846 = t1798*t2829;
  t2847 = t2843 + t2846;
  t2814 = t1798*t2808;
  t2830 = -1.*t2050*t2829;
  t2836 = t2814 + t2830;
  t2686 = t979*t2670;
  t2707 = t349*t2706;
  t2744 = t1380*t2739;
  t2773 = t2686 + t2707 + t2744;
  t2842 = t1797*t2836;
  t2853 = -1.*t2847*t2252;
  t2858 = t2842 + t2853;
  t2877 = t1797*t2225;
  t2880 = t2199*t2252;
  t2882 = t2877 + t2880;
  t2887 = t1794*t1704;
  t2891 = -1.*t1785*t2278;
  t2893 = t2887 + t2891;
  t2908 = t1797*t2501;
  t2910 = t2466*t2252;
  t2922 = t2908 + t2910;
  t2931 = t1794*t2401;
  t2938 = -1.*t1785*t2554;
  t2946 = t2931 + t2938;
  t2975 = t1797*t2847;
  t2990 = t2836*t2252;
  t2998 = t2975 + t2990;
  t3006 = t1794*t2773;
  t3011 = -1.*t1785*t2858;
  t3014 = t3006 + t3011;
  t2403 = t2401*t1785;
  t2595 = t1794*t2554;
  t2611 = t2403 + t2595;
  t3157 = 7.e-6*t882;
  t3169 = -2.598649999999999e-7*var1[14];
  t3170 = 0.148705*t2327;
  t3177 = -2.3905277499999995e-16*t389;
  t3183 = -0.038922999986*t582;
  t3184 = -0.80315*t677;
  t3186 = t2340 + t1636;
  t3187 = -0.503149000008*t3186;
  t3188 = t1081 + t2704;
  t3191 = -0.038924*t3188;
  t3193 = t3169 + t3170 + t3177 + t3183 + t3184 + t3187 + t3191;
  t3195 = 1.0394599999999997e-12*var1[14];
  t3197 = 1. + t2633;
  t3200 = -0.038924*t3197;
  t3201 = -0.03892299998790722*t389;
  t3206 = -0.80315*t1189;
  t3207 = 0.148705*t2385;
  t3233 = t474 + t2704;
  t3239 = -3.6777349999999994e-6*t3233;
  t3241 = t1481 + t536;
  t3243 = -0.503149000008*t3241;
  t3257 = t3195 + t3200 + t3201 + t3206 + t3207 + t3239 + t3243;
  t3260 = 1.8190549999999993e-12*var1[14];
  t3261 = -0.80315*t1434;
  t3262 = -0.5031490000160505*t389;
  t3265 = -0.038922999986*t1515;
  t3267 = t2340 + t658;
  t3270 = -3.6777349999999994e-6*t3267;
  t3278 = 0.148705*t2296;
  t3280 = t1104 + t536;
  t3281 = -0.038924*t3280;
  t3284 = t3260 + t3261 + t3262 + t3265 + t3270 + t3278 + t3281;
  t3112 = -1.*t1798;
  t3115 = 1. + t3112;
  t3119 = 0.15121*t2050;
  t3122 = 1.0248489999999998e-12*var1[13];
  t3125 = -0.28120900000849935*t882;
  t3126 = -2.8e-11*t882;
  t3140 = t3126 + t1348;
  t3148 = -0.038748999993*t3140;
  t3158 = t3157 + t2148;
  t3160 = -2.123459e-6*t3158;
  t3194 = t1844*t3193;
  t3258 = t1867*t3257;
  t3286 = t1982*t3284;
  t3298 = t3122 + t3125 + t3148 + t3160 + t3194 + t3258 + t3286;
  t3301 = -1.4640699999999997e-7*var1[13];
  t3306 = -1.38024835e-16*t882;
  t3307 = 4.e-6*t882;
  t3310 = t3307 + t325;
  t3332 = -0.038748999993*t3310;
  t3333 = t3157 + t1837;
  t3338 = -0.281209000004*t3333;
  t3343 = t2096*t3193;
  t3349 = t2133*t3257;
  t3351 = t2150*t3284;
  t3354 = t3301 + t3306 + t3332 + t3338 + t3343 + t3349 + t3351;
  t1786 = t1704*t1785;
  t2279 = t1794*t2278;
  t2280 = t1786 + t2279;
  t3374 = -0.15121*t3115;
  t3376 = t1798*t3298;
  t3388 = -1.*t2050*t3354;
  t3390 = t3374 + t3119 + t3376 + t3388;
  t3117 = 0.15121*t3115;
  t3299 = t2050*t3298;
  t3356 = t1798*t3354;
  t3358 = t3117 + t3119 + t3299 + t3356;
  t3401 = 5.856279999999999e-13*var1[13];
  t3403 = -0.0387489999948987*t882;
  t3414 = t3307 + t2120;
  t3416 = -2.123459e-6*t3414;
  t3423 = t3126 + t315;
  t3425 = -0.281209000004*t3423;
  t3431 = t349*t3193;
  t3436 = t979*t3257;
  t3448 = t1380*t3284;
  t3459 = t3401 + t3403 + t3416 + t3425 + t3431 + t3436 + t3448;
  t3471 = t1797*t3390;
  t3484 = -1.*t3358*t2252;
  t3486 = t3471 + t3484;
  t3371 = t1797*t3358;
  t3392 = t3390*t2252;
  t3394 = t3371 + t3392;
  t3461 = t3459*t1785;
  t3489 = t1794*t3486;
  t3490 = t3461 + t3489;
  t3493 = t1794*t3459;
  t3496 = -1.*t1785*t3486;
  t3500 = t3493 + t3496;
  t2782 = t2773*t1785;
  t2859 = t1794*t2858;
  t2860 = t2782 + t2859;
  t3396 = -1.*t2882*t3394;
  t3518 = t2922*t3394;
  t3534 = t2882*t3394;
  t3567 = -1.*t2998*t3394;
  t3600 = -1.*t2922*t3394;
  t3609 = t2998*t3394;
  t3640 = -1.*t1704*t3459;
  t3655 = t2401*t3459;
  t3671 = t1704*t3459;
  t3677 = -1.*t2773*t3459;
  t3703 = -1.*t2401*t3459;
  t3731 = t2773*t3459;
  t4010 = t3193*t2354;
  t4012 = t2388*t3257;
  t4013 = t2314*t3284;
  t4020 = t4010 + t4012 + t4013;
  t4026 = -1.*t814*t3193;
  t4031 = -1.*t1242*t3257;
  t4039 = -1.*t1645*t3284;
  t4043 = t4026 + t4031 + t4039;
  t4095 = t814*t3193;
  t4098 = t1242*t3257;
  t4099 = t1645*t3284;
  t4100 = t4095 + t4098 + t4099;
  t4104 = -1.*t3193*t2706;
  t4106 = -1.*t2670*t3257;
  t4107 = -1.*t2739*t3284;
  t4109 = t4104 + t4106 + t4107;
  t3986 = 6.5e-11*t389;
  t4166 = -1.*t3193*t2354;
  t4167 = -1.*t2388*t3257;
  t4170 = -1.*t2314*t3284;
  t4172 = t4166 + t4167 + t4170;
  t4178 = t3193*t2706;
  t4179 = t2670*t3257;
  t4180 = t2739*t3284;
  t4181 = t4178 + t4179 + t4180;
  p_output1[0]=t2611*var2[0] + t2860*var2[1] + t2280*var2[2];
  p_output1[1]=(t2875*t2922 - 1.*t2886*t2946)*var2[0] + (t2875*t2998 - 1.*t2886*t3014)*var2[1] + (t2875*t2882 - 1.*t2886*t2893)*var2[2];
  p_output1[2]=(t2886*t2922 + t2875*t2946)*var2[0] + (t2886*t2998 + t2875*t3014)*var2[1] + (t2882*t2886 + t2875*t2893)*var2[2];
  p_output1[3]=(t2860*(t2280*t3490 + t2893*t3500 + t3534) + t2280*(-1.*t2860*t3490 - 1.*t3014*t3500 + t3567))*var2[0] + (t2611*(t3396 - 1.*t2280*t3490 - 1.*t2893*t3500) + t2280*(t2611*t3490 + t2946*t3500 + t3518))*var2[1] + (t2860*(-1.*t2611*t3490 - 1.*t2946*t3500 + t3600) + t2611*(t2860*t3490 + t3014*t3500 + t3609))*var2[2];
  p_output1[4]=(t2998*(t2278*t3486 + t3534 + t3671) + t2882*(-1.*t2858*t3486 + t3567 + t3677))*var2[0] + (t2922*(t3396 - 1.*t2278*t3486 + t3640) + t2882*(t2554*t3486 + t3518 + t3655))*var2[1] + (t2998*(-1.*t2554*t3486 + t3600 + t3703) + t2922*(t2858*t3486 + t3609 + t3731))*var2[2];
  p_output1[5]=(t2773*(t2225*t3358 + t2199*t3390 + t3671) + t1704*(-1.*t2847*t3358 - 1.*t2836*t3390 + t3677))*var2[0] + (t2401*(-1.*t2225*t3358 - 1.*t2199*t3390 + t3640) + t1704*(t2501*t3358 + t2466*t3390 + t3655))*var2[1] + (t2773*(-1.*t2501*t3358 - 1.*t2466*t3390 + t3703) + t2401*(t2847*t3358 + t2836*t3390 + t3731))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.15121*t2421 + 0.15121*t2445 + t2773*(t2038*t3298 + t2195*t3354 + t3671) + t1704*(-1.*t2808*t3298 - 1.*t2829*t3354 + t3677))*var2[0] + (0.15121*t2808 + 0.15121*t2829 + t2401*(-1.*t2038*t3298 - 1.*t2195*t3354 + t3640) + t1704*(t2445*t3298 + t2421*t3354 + t3655))*var2[1] + (0.15121*t2038 + 0.15121*t2195 + t2773*(-1.*t2445*t3298 - 1.*t2421*t3354 + t3703) + t2401*(t2808*t3298 + t2829*t3354 + t3731))*var2[2];
  p_output1[13]=(0.038749*t2314 - 0.281209*t2388 + t2706*t4100 + 4.e-6*(-1.*t2670*t4100 - 1.*t1242*t4109) - 7.e-6*(t2739*t4100 + t1645*t4109) + 1.e-6*(7.e-6*t2327 + t616 + t658) + t4109*t814)*var2[0] + (-0.281209*t2670 + 0.038749*t2739 + t2354*t4043 - 7.e-6*(t1645*t4020 + t2314*t4043) + 4.e-6*(-1.*t1242*t4020 - 1.*t2388*t4043) + 1.e-6*(4.e-6*(-1. + t3986) + t474 + t541) + t4020*t814)*var2[1] + (-0.281209*t1242 + 0.038749*t1645 + t2706*t4172 + t2354*t4181 - 7.e-6*(t2739*t4172 + t2314*t4181) + 4.e-6*(-1.*t2670*t4172 - 1.*t2388*t4181) + 1.e-6*(-1. + 4.e-6*t3188 + t3986 + 7.e-6*t677))*var2[2];
  p_output1[14]=4.0519653002457196e-7*var2[0] + 0.29999995910920463*var2[1] - 2.5986500000000035e-7*var2[2];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fRlFoot_vec_DiagonalStance.hh"

namespace SymFunction
{

void fRlFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
