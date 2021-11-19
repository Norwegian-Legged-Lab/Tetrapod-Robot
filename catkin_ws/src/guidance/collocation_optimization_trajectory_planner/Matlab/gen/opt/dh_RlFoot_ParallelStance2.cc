/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:32:20 GMT+01:00
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
  double t220;
  double t253;
  double t314;
  double t84;
  double t101;
  double t132;
  double t367;
  double t369;
  double t165;
  double t337;
  double t339;
  double t408;
  double t419;
  double t433;
  double t142;
  double t483;
  double t496;
  double t500;
  double t514;
  double t516;
  double t1117;
  double t1128;
  double t1137;
  double t1183;
  double t1203;
  double t1219;
  double t1230;
  double t721;
  double t729;
  double t1484;
  double t1343;
  double t1383;
  double t1529;
  double t2178;
  double t1306;
  double t1310;
  double t2443;
  double t2102;
  double t168;
  double t2340;
  double t2365;
  double t2397;
  double t2402;
  double t2062;
  double t1819;
  double t2454;
  double t2688;
  double t2704;
  double t2723;
  double t1880;
  double t2020;
  double t2387;
  double t2404;
  double t2406;
  double t1803;
  double t1815;
  double t2426;
  double t2430;
  double t2432;
  double t2461;
  double t2462;
  double t2147;
  double t2715;
  double t2750;
  double t2759;
  double t972;
  double t2801;
  double t2863;
  double t2865;
  double t2870;
  double t2890;
  double t2931;
  double t2980;
  double t2992;
  double t3010;
  double t3023;
  double t3025;
  double t3039;
  double t3050;
  double t3072;
  double t3083;
  double t3098;
  double t3101;
  double t3112;
  double t3158;
  double t3172;
  double t3175;
  double t3183;
  double t3229;
  double t3247;
  double t3250;
  double t3259;
  double t3268;
  double t3278;
  double t3279;
  double t3286;
  double t3313;
  double t3321;
  double t472;
  double t482;
  double t1076;
  double t175;
  double t3607;
  double t2828;
  double t3453;
  double t3542;
  double t3546;
  double t3593;
  double t1820;
  double t1836;
  double t2059;
  double t2084;
  double t2218;
  double t2277;
  double t2792;
  double t2796;
  double t2804;
  double t2818;
  double t2844;
  double t2852;
  double t3037;
  double t3214;
  double t3335;
  double t3339;
  double t1846;
  double t2099;
  double t2283;
  double t2285;
  double t3595;
  double t3603;
  double t3618;
  double t3628;
  double t3636;
  double t3638;
  double t3642;
  double t3648;
  double t3661;
  double t3662;
  double t3750;
  double t3768;
  double t3771;
  double t3831;
  double t3832;
  double t3841;
  double t3857;
  double t3861;
  double t3878;
  double t3898;
  double t4268;
  double t4298;
  double t4338;
  double t4350;
  double t4365;
  double t4383;
  double t4393;
  double t4407;
  double t3678;
  double t2411;
  double t2604;
  double t2774;
  double t2791;
  double t3685;
  double t3696;
  double t3698;
  double t3738;
  double t4929;
  double t4839;
  double t5067;
  double t5185;
  double t5312;
  double t4094;
  double t3972;
  double t3993;
  double t4056;
  double t4061;
  double t4105;
  double t4120;
  double t4158;
  double t4164;
  double t5200;
  double t5322;
  double t5372;
  double t5373;
  double t5509;
  double t5517;
  double t5519;
  double t5584;
  double t438;
  double t580;
  double t1234;
  double t1243;
  double t1320;
  double t1400;
  double t1691;
  double t1776;
  double t5976;
  double t5990;
  double t5992;
  double t5995;
  double t5977;
  double t5980;
  double t5984;
  double t5999;
  double t5966;
  double t5933;
  double t5937;
  double t5945;
  double t5962;
  double t5963;
  double t5987;
  double t6010;
  double t6012;
  double t6461;
  double t6157;
  double t6159;
  double t6247;
  double t6136;
  double t6505;
  double t6528;
  double t6573;
  double t5640;
  double t5658;
  double t5687;
  double t5703;
  double t5808;
  double t5819;
  double t5417;
  double t5451;
  double t5470;
  double t4849;
  double t5018;
  double t5022;
  double t7279;
  double t7285;
  double t7286;
  double t7263;
  double t7267;
  double t7268;
  double t6932;
  double t6957;
  double t7119;
  double t7288;
  double t7289;
  double t7290;
  double t7294;
  double t7295;
  double t7298;
  double t7291;
  double t7236;
  double t7255;
  double t7256;
  double t7533;
  double t7549;
  double t7571;
  double t7301;
  double t7368;
  double t7385;
  double t7482;
  double t7622;
  double t7659;
  double t7812;
  double t7844;
  double t7851;
  double t7857;
  double t8282;
  double t8284;
  double t8295;
  double t8306;
  double t8320;
  double t8323;
  double t8324;
  double t8327;
  double t8220;
  double t8243;
  double t7923;
  double t7931;
  double t7959;
  double t5965;
  double t6076;
  double t6105;
  double t8652;
  double t7841;
  double t7842;
  double t7843;
  double t8659;
  double t8263;
  double t8789;
  double t8790;
  double t8793;
  double t8795;
  double t8801;
  double t8805;
  double t8807;
  double t8813;
  double t8740;
  double t8756;
  double t9193;
  double t9238;
  t220 = Cos(var1[14]);
  t253 = -1.*t220;
  t314 = 1. + t253;
  t84 = Cos(var1[13]);
  t101 = -1.*t84;
  t132 = 1. + t101;
  t367 = Sin(var1[14]);
  t369 = 4.e-6*t367;
  t165 = Sin(var1[13]);
  t337 = 1.000000000016*t314;
  t339 = -7.e-6*t314;
  t408 = t339 + t369;
  t419 = -7.e-6*t408;
  t433 = -1. + t337 + t419;
  t142 = -7.e-6*t132;
  t483 = -6.5e-11*t314;
  t496 = 1. + t483;
  t500 = -7.e-6*t496;
  t514 = 7.e-6*t314;
  t516 = t500 + t514 + t369;
  t1117 = -2.8e-11*t314;
  t1128 = -1. + t220;
  t1137 = 4.e-6*t1128;
  t1183 = -7.e-6*t367;
  t1203 = t1137 + t1183;
  t1219 = -7.e-6*t1203;
  t1230 = t1117 + t1219 + t367;
  t721 = -1. + t84;
  t729 = 4.e-6*t721;
  t1484 = 2.8e-11*t132;
  t1343 = 4.e-6*t165;
  t1383 = t142 + t1343;
  t1529 = t1484 + t165;
  t2178 = 2.8e-11*t314;
  t1306 = -1.000000000016*t132;
  t1310 = 1. + t1306;
  t2443 = -1.*t367;
  t2102 = -1.*t165;
  t168 = -4.e-6*t165;
  t2340 = 4.e-6*t314;
  t2365 = t2340 + t1183;
  t2397 = -4.e-6*t367;
  t2402 = t339 + t2397;
  t2062 = 7.e-6*t367;
  t1819 = -1.000000000049*t314;
  t2454 = t2178 + t2443;
  t2688 = -1.000000000016*t314;
  t2704 = 1. + t2688;
  t2723 = t1117 + t2443;
  t1880 = -7.e-6*t165;
  t2020 = t729 + t1880;
  t2387 = 4.e-6*t2365;
  t2404 = -7.e-6*t2402;
  t2406 = 1. + t483 + t2387 + t2404;
  t1803 = -1.000000000049*t132;
  t1815 = 1. + t1803;
  t2426 = 1.000000000049*t314;
  t2430 = -1. + t2426;
  t2432 = 4.e-6*t2430;
  t2461 = -7.e-6*t2454;
  t2462 = t2432 + t1137 + t2461 + t1183;
  t2147 = t1484 + t2102;
  t2715 = -7.e-6*t2704;
  t2750 = 4.e-6*t2723;
  t2759 = t2715 + t339 + t2750 + t369;
  t972 = 7.e-6*t165;
  t2801 = -2.8e-11*t132;
  t2863 = -2.598649999999999e-7*var1[14];
  t2865 = 0.148705*t496;
  t2870 = -2.3905277499999995e-16*t314;
  t2890 = -0.038922999986*t2365;
  t2931 = -0.80315*t2402;
  t2980 = t514 + t369;
  t2992 = -0.503149000008*t2980;
  t3010 = t1137 + t2062;
  t3023 = -0.038924*t3010;
  t3025 = t2863 + t2865 + t2870 + t2890 + t2931 + t2992 + t3023;
  t3039 = 1.0394599999999997e-12*var1[14];
  t3050 = 1. + t1819;
  t3072 = -0.038924*t3050;
  t3083 = -0.03892299998790722*t314;
  t3098 = -0.80315*t2454;
  t3101 = 0.148705*t1203;
  t3112 = t2340 + t2062;
  t3158 = -3.6777349999999994e-6*t3112;
  t3172 = t1117 + t367;
  t3175 = -0.503149000008*t3172;
  t3183 = t3039 + t3072 + t3083 + t3098 + t3101 + t3158 + t3175;
  t3229 = 1.8190549999999993e-12*var1[14];
  t3247 = -0.80315*t2704;
  t3250 = -0.5031490000160505*t314;
  t3259 = -0.038922999986*t2723;
  t3268 = t514 + t2397;
  t3278 = -3.6777349999999994e-6*t3268;
  t3279 = 0.148705*t408;
  t3286 = t2178 + t367;
  t3313 = -0.038924*t3286;
  t3321 = t3229 + t3247 + t3250 + t3259 + t3278 + t3279 + t3313;
  t472 = -6.5e-11*t132;
  t482 = 1. + t472;
  t1076 = t729 + t972;
  t175 = t142 + t168;
  t3607 = 4.e-6*t132;
  t2828 = 7.e-6*t132;
  t3453 = t2020*t2406;
  t3542 = t1815*t2462;
  t3546 = t2147*t2759;
  t3593 = t3453 + t3542 + t3546;
  t1820 = 4.e-6*t1203;
  t1836 = 1. + t1819 + t1820;
  t2059 = 4.e-6*t496;
  t2084 = t2059 + t1137 + t2062;
  t2218 = 4.e-6*t408;
  t2277 = t2178 + t2218 + t367;
  t2792 = 1.0248489999999998e-12*var1[13];
  t2796 = -0.28120900000849935*t132;
  t2804 = t2801 + t2102;
  t2818 = -0.038748999993*t2804;
  t2844 = t2828 + t168;
  t2852 = -2.123459e-6*t2844;
  t3037 = t1383*t3025;
  t3214 = t1529*t3183;
  t3335 = t1310*t3321;
  t3339 = t2792 + t2796 + t2818 + t2852 + t3037 + t3214 + t3335;
  t1846 = t1815*t1836;
  t2099 = t2020*t2084;
  t2283 = t2147*t2277;
  t2285 = t1846 + t2099 + t2283;
  t3595 = 5.856279999999999e-13*var1[13];
  t3603 = -0.0387489999948987*t132;
  t3618 = t3607 + t972;
  t3628 = -2.123459e-6*t3618;
  t3636 = t2801 + t165;
  t3638 = -0.281209000004*t3636;
  t3642 = t2020*t3025;
  t3648 = t1815*t3183;
  t3661 = t2147*t3321;
  t3662 = t3595 + t3603 + t3628 + t3638 + t3642 + t3648 + t3661;
  t3750 = -1.4640699999999997e-7*var1[13];
  t3768 = -1.38024835e-16*t132;
  t3771 = t3607 + t1880;
  t3831 = -0.038748999993*t3771;
  t3832 = t2828 + t1343;
  t3841 = -0.281209000004*t3832;
  t3857 = t482*t3025;
  t3861 = t1076*t3183;
  t3878 = t175*t3321;
  t3898 = t3750 + t3768 + t3831 + t3841 + t3857 + t3861 + t3878;
  t4268 = t2406*t3025;
  t4298 = t2462*t3183;
  t4338 = t2759*t3321;
  t4350 = t4268 + t4298 + t4338;
  t4365 = -1.*t3025*t2084;
  t4383 = -1.*t1836*t3183;
  t4393 = -1.*t2277*t3321;
  t4407 = t4365 + t4383 + t4393;
  t3678 = t3593*t3662;
  t2411 = t1383*t2406;
  t2604 = t1529*t2462;
  t2774 = t1310*t2759;
  t2791 = t2411 + t2604 + t2774;
  t3685 = t482*t2406;
  t3696 = t1076*t2462;
  t3698 = t175*t2759;
  t3738 = t3685 + t3696 + t3698;
  t4929 = Cos(var1[12]);
  t4839 = Sin(var1[12]);
  t5067 = -1.*t4929;
  t5185 = 1. + t5067;
  t5312 = 0.15121*t4839;
  t4094 = -1.*t2285*t3662;
  t3972 = t1529*t1836;
  t3993 = t1383*t2084;
  t4056 = t1310*t2277;
  t4061 = t3972 + t3993 + t4056;
  t4105 = t1076*t1836;
  t4120 = t482*t2084;
  t4158 = t175*t2277;
  t4164 = t4105 + t4120 + t4158;
  t5200 = 0.15121*t5185;
  t5322 = t4839*t3339;
  t5372 = t4929*t3898;
  t5373 = t5200 + t5312 + t5322 + t5372;
  t5509 = -0.15121*t5185;
  t5517 = t4929*t3339;
  t5519 = -1.*t4839*t3898;
  t5584 = t5509 + t5312 + t5517 + t5519;
  t438 = t175*t433;
  t580 = t482*t516;
  t1234 = t1076*t1230;
  t1243 = t438 + t580 + t1234;
  t1320 = t1310*t433;
  t1400 = t1383*t516;
  t1691 = t1529*t1230;
  t1776 = t1320 + t1400 + t1691;
  t5976 = Cos(var1[5]);
  t5990 = t4929*t1243;
  t5992 = t4839*t1776;
  t5995 = t5990 + t5992;
  t5977 = -1.*t4839*t1243;
  t5980 = t4929*t1776;
  t5984 = t5977 + t5980;
  t5999 = Sin(var1[5]);
  t5966 = Cos(var1[4]);
  t5933 = t2147*t433;
  t5937 = t2020*t516;
  t5945 = t1815*t1230;
  t5962 = t5933 + t5937 + t5945;
  t5963 = Sin(var1[4]);
  t5987 = t5976*t5984;
  t6010 = -1.*t5995*t5999;
  t6012 = t5987 + t6010;
  t6461 = Cos(var1[3]);
  t6157 = t5976*t5995;
  t6159 = t5984*t5999;
  t6247 = t6157 + t6159;
  t6136 = Sin(var1[3]);
  t6505 = t5966*t5962;
  t6528 = -1.*t5963*t6012;
  t6573 = t6505 + t6528;
  t5640 = t4839*t4061;
  t5658 = t4929*t4164;
  t5687 = t5640 + t5658;
  t5703 = t4929*t4061;
  t5808 = -1.*t4839*t4164;
  t5819 = t5703 + t5808;
  t5417 = t4929*t2791;
  t5451 = -1.*t4839*t3738;
  t5470 = t5417 + t5451;
  t4849 = t4839*t2791;
  t5018 = t4929*t3738;
  t5022 = t4849 + t5018;
  t7279 = t5976*t5022;
  t7285 = t5470*t5999;
  t7286 = t7279 + t7285;
  t7263 = t5976*t5584;
  t7267 = -1.*t5373*t5999;
  t7268 = t7263 + t7267;
  t6932 = t5976*t5687;
  t6957 = t5819*t5999;
  t7119 = t6932 + t6957;
  t7288 = t5976*t5373;
  t7289 = t5584*t5999;
  t7290 = t7288 + t7289;
  t7294 = t5976*t5819;
  t7295 = -1.*t5687*t5999;
  t7298 = t7294 + t7295;
  t7291 = t7286*t7290;
  t7236 = t5976*t5470;
  t7255 = -1.*t5022*t5999;
  t7256 = t7236 + t7255;
  t7533 = t3593*t5963;
  t7549 = t5966*t7256;
  t7571 = t7533 + t7549;
  t7301 = -1.*t7119*t7290;
  t7368 = t2285*t5963;
  t7385 = t5966*t7298;
  t7482 = t7368 + t7385;
  t7622 = t3662*t5963;
  t7659 = t5966*t7268;
  t7812 = t7622 + t7659;
  t7844 = t5966*t3662;
  t7851 = -1.*t5963*t7268;
  t7857 = t7844 + t7851;
  t8282 = t3025*t516;
  t8284 = t1230*t3183;
  t8295 = t433*t3321;
  t8306 = t8282 + t8284 + t8295;
  t8320 = -1.*t2406*t3025;
  t8323 = -1.*t2462*t3183;
  t8324 = -1.*t2759*t3321;
  t8327 = t8320 + t8323 + t8324;
  t8220 = -1.*t3593*t3662;
  t8243 = t5962*t3662;
  t7923 = t5966*t2285;
  t7931 = -1.*t5963*t7298;
  t7959 = t7923 + t7931;
  t5965 = t5962*t5963;
  t6076 = t5966*t6012;
  t6105 = t5965 + t6076;
  t8652 = -1.*t7286*t7290;
  t7841 = t5966*t3593;
  t7842 = -1.*t5963*t7256;
  t7843 = t7841 + t7842;
  t8659 = t6247*t7290;
  t8263 = 6.5e-11*t314;
  t8789 = -1.*t3025*t516;
  t8790 = -1.*t1230*t3183;
  t8793 = -1.*t433*t3321;
  t8795 = t8789 + t8790 + t8793;
  t8801 = t3025*t2084;
  t8805 = t1836*t3183;
  t8807 = t2277*t3321;
  t8813 = t8801 + t8805 + t8807;
  t8740 = -1.*t5962*t3662;
  t8756 = t2285*t3662;
  t9193 = -1.*t6247*t7290;
  t9238 = t7119*t7290;
  p_output1[0]=t6105*var2[0] + (t6247*t6461 - 1.*t6136*t6573)*var2[1] + (t6136*t6247 + t6461*t6573)*var2[2] + (t7482*(t7291 + t7571*t7812 + t7843*t7857) + t7571*(t7301 - 1.*t7482*t7812 - 1.*t7857*t7959))*var2[3] + (t7119*(t3678 + t7256*t7268 + t7291) + t7286*(t4094 - 1.*t7268*t7298 + t7301))*var2[4] + (t2285*(t3678 + t5022*t5373 + t5470*t5584) + t3593*(t4094 - 1.*t5373*t5687 - 1.*t5584*t5819))*var2[5] + (0.15121*t1243 + 0.15121*t1776 + t2285*(t2791*t3339 + t3678 + t3738*t3898) + t3593*(-1.*t3339*t4061 + t4094 - 1.*t3898*t4164))*var2[12] + (-0.281209*t1230 + 0.038749*t433 + t2084*t4350 + t2406*t4407 + 4.e-6*(-1.*t1836*t4350 - 1.*t2462*t4407) - 7.e-6*(t2277*t4350 + t2759*t4407) + 1.e-6*(t2397 + t339 + 7.e-6*t496))*var2[13] + 4.0519653002457196e-7*var2[14];
  p_output1[1]=t7482*var2[0] + (t6461*t7119 - 1.*t6136*t7959)*var2[1] + (t6136*t7119 + t6461*t7959)*var2[2] + (t6105*(-1.*t7571*t7812 - 1.*t7843*t7857 + t8652) + t7571*(t6105*t7812 + t6573*t7857 + t8659))*var2[3] + (t6247*(-1.*t7256*t7268 + t8220 + t8652) + t7286*(t6012*t7268 + t8243 + t8659))*var2[4] + (t5962*(-1.*t5022*t5373 - 1.*t5470*t5584 + t8220) + t3593*(t5584*t5984 + t5373*t5995 + t8243))*var2[5] + (0.15121*t4061 + 0.15121*t4164 + t5962*(-1.*t2791*t3339 - 1.*t3738*t3898 + t8220) + t3593*(t1776*t3339 + t1243*t3898 + t8243))*var2[12] + (-0.281209*t1836 + 0.038749*t2277 + 1.e-6*(t1183 + t2340 + 4.e-6*(-1. + t8263)) + t2406*t8306 + t516*t8327 + 4.e-6*(-1.*t2462*t8306 - 1.*t1230*t8327) - 7.e-6*(t2759*t8306 + t433*t8327))*var2[13] + 0.29999995910920463*var2[14];
  p_output1[2]=t7571*var2[0] + (t6461*t7286 - 1.*t6136*t7843)*var2[1] + (t6136*t7286 + t6461*t7843)*var2[2] + (t7482*(-1.*t6105*t7812 - 1.*t6573*t7857 + t9193) + t6105*(t7482*t7812 + t7857*t7959 + t9238))*var2[3] + (t7119*(-1.*t6012*t7268 + t8740 + t9193) + t6247*(t7268*t7298 + t8756 + t9238))*var2[4] + (t2285*(-1.*t5584*t5984 - 1.*t5373*t5995 + t8740) + t5962*(t5373*t5687 + t5584*t5819 + t8756))*var2[5] + (0.15121*t2791 + 0.15121*t3738 + t2285*(-1.*t1776*t3339 - 1.*t1243*t3898 + t8740) + t5962*(t3339*t4061 + t3898*t4164 + t8756))*var2[12] + (-0.281209*t2462 + 0.038749*t2759 + 1.e-6*(-1. + 7.e-6*t2402 + 4.e-6*t3010 + t8263) + t2084*t8795 + t516*t8813 + 4.e-6*(-1.*t1836*t8795 - 1.*t1230*t8813) - 7.e-6*(t2277*t8795 + t433*t8813))*var2[13] - 2.5986500000000035e-7*var2[14];
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

#include "dh_RlFoot_ParallelStance2.hh"

namespace ParallelStance2
{

void dh_RlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
