/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:15:56 GMT+01:00
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
  double t31;
  double t41;
  double t976;
  double t996;
  double t1040;
  double t1091;
  double t1314;
  double t1424;
  double t1390;
  double t1392;
  double t1434;
  double t77;
  double t1204;
  double t1406;
  double t1436;
  double t1447;
  double t1088;
  double t1627;
  double t1649;
  double t1710;
  double t1757;
  double t492;
  double t1982;
  double t1266;
  double t1146;
  double t1209;
  double t1304;
  double t1307;
  double t1453;
  double t1544;
  double t1572;
  double t1714;
  double t1723;
  double t1968;
  double t1970;
  double t1979;
  double t2004;
  double t2016;
  double t2036;
  double t2049;
  double t2057;
  double t2098;
  double t2109;
  double t385;
  double t2185;
  double t2191;
  double t2206;
  double t2237;
  double t2243;
  double t2249;
  double t2252;
  double t2262;
  double t2266;
  double t2267;
  double t1850;
  double t2319;
  double t1749;
  double t2139;
  double t2362;
  double t2116;
  double t2454;
  double t2628;
  double t2769;
  double t2663;
  double t2682;
  double t2787;
  double t2796;
  double t2605;
  double t2775;
  double t2844;
  double t2886;
  double t2720;
  double t2810;
  double t2812;
  double t2819;
  double t2821;
  double t2823;
  double t2827;
  double t2875;
  double t2880;
  double t2883;
  double t2888;
  double t2889;
  double t2893;
  double t2940;
  double t2941;
  double t2942;
  double t2943;
  double t2953;
  double t2961;
  double t2979;
  double t2849;
  double t3017;
  double t2973;
  double t3089;
  double t3094;
  double t3095;
  double t3120;
  double t2763;
  double t2771;
  double t2776;
  double t2784;
  double t2801;
  double t2807;
  double t2809;
  double t3179;
  double t3183;
  double t3184;
  double t2834;
  double t2842;
  double t2854;
  double t2855;
  double t2857;
  double t2859;
  double t2864;
  double t2900;
  double t2911;
  double t2918;
  double t2919;
  double t2921;
  double t2927;
  double t2935;
  double t2974;
  double t3195;
  double t3197;
  double t3200;
  double t2987;
  double t3207;
  double t3208;
  double t3214;
  double t2992;
  double t2994;
  double t3216;
  double t3218;
  double t3220;
  double t3020;
  double t3029;
  double t3030;
  double t3036;
  double t3062;
  double t3066;
  double t3069;
  double t3074;
  double t3107;
  double t3116;
  double t3117;
  double t3121;
  double t3122;
  double t3128;
  double t3130;
  double t3135;
  double t3142;
  double t3147;
  double t3148;
  double t3151;
  double t3152;
  double t3153;
  double t3162;
  double t3169;
  double t3172;
  double t3174;
  double t3178;
  double t3189;
  double t3206;
  double t3215;
  double t3222;
  double t3224;
  double t3225;
  double t3230;
  double t3234;
  double t3236;
  double t3239;
  double t3243;
  double t3247;
  double t3248;
  double t3250;
  double t3253;
  double t3256;
  double t3258;
  double t3260;
  double t3263;
  double t3108;
  double t3099;
  double t3102;
  double t3365;
  double t3367;
  double t3371;
  double t3381;
  double t3385;
  double t3391;
  double t3397;
  double t3398;
  double t3399;
  double t3406;
  double t3409;
  double t3416;
  double t3418;
  double t3420;
  double t3428;
  double t3430;
  double t3431;
  double t3435;
  double t3307;
  double t3321;
  double t3324;
  double t3325;
  double t3332;
  double t3333;
  double t3341;
  double t3508;
  double t3533;
  double t3534;
  double t3539;
  double t3548;
  double t3551;
  double t3558;
  double t3562;
  double t3563;
  double t3572;
  double t3575;
  double t3580;
  double t3582;
  double t3589;
  double t3590;
  double t3592;
  double t3596;
  double t3603;
  double t3613;
  double t3664;
  double t3671;
  double t3672;
  double t3673;
  double t3676;
  double t3677;
  double t3681;
  double t3685;
  double t3686;
  double t3690;
  double t3695;
  double t3696;
  double t3698;
  double t3706;
  double t3707;
  double t3712;
  double t3717;
  double t3720;
  double t3721;
  double t3722;
  double t3723;
  double t3731;
  double t3732;
  double t3740;
  double t3744;
  double t3795;
  double t3796;
  double t3797;
  double t3803;
  double t3804;
  double t3807;
  double t3810;
  double t3814;
  double t3816;
  double t3821;
  double t3823;
  double t3828;
  double t3833;
  double t3835;
  double t3839;
  double t3851;
  double t3852;
  double t3854;
  double t3859;
  double t3860;
  double t3861;
  double t3278;
  double t3279;
  double t3285;
  double t3291;
  double t3919;
  double t3923;
  double t3924;
  double t3933;
  double t3934;
  double t3938;
  double t3941;
  double t3944;
  double t3945;
  double t3946;
  double t3948;
  double t3949;
  double t3952;
  double t3955;
  double t3956;
  double t3957;
  double t92;
  double t101;
  double t498;
  double t739;
  double t812;
  double t879;
  double t1822;
  double t1849;
  double t1858;
  double t1905;
  double t1945;
  double t1967;
  double t4004;
  double t4005;
  double t4012;
  double t2124;
  double t2128;
  double t2141;
  double t2160;
  double t2165;
  double t2179;
  double t3996;
  double t3998;
  double t4013;
  double t4015;
  double t2322;
  double t4019;
  double t4020;
  double t4021;
  double t4024;
  double t2378;
  double t4032;
  double t4033;
  double t4036;
  double t4039;
  double t2416;
  double t2469;
  double t2510;
  double t2546;
  double t2613;
  double t2618;
  double t2631;
  double t2636;
  double t2640;
  double t2653;
  double t2668;
  double t2676;
  double t2683;
  double t2686;
  double t2689;
  double t2694;
  double t2706;
  double t2718;
  double t2731;
  double t2733;
  double t2745;
  double t2749;
  double t4092;
  double t4094;
  double t4095;
  double t4097;
  double t4106;
  double t4108;
  double t4109;
  double t4110;
  double t4112;
  double t4114;
  double t4115;
  double t4116;
  double t4173;
  double t4178;
  double t4180;
  double t4189;
  double t4190;
  double t4192;
  double t4197;
  double t4201;
  double t4202;
  double t4209;
  double t4212;
  double t4214;
  double t4217;
  double t4218;
  double t4224;
  double t4227;
  double t4228;
  double t4230;
  double t4269;
  double t4273;
  double t4278;
  double t4285;
  double t4286;
  double t4287;
  double t4290;
  double t4292;
  double t4295;
  double t4296;
  double t4297;
  double t4301;
  double t4306;
  double t4310;
  double t4313;
  double t4314;
  double t4315;
  double t4352;
  double t4353;
  double t4354;
  double t4359;
  double t4365;
  double t4370;
  double t4375;
  double t4383;
  double t4385;
  double t4390;
  double t4397;
  double t4403;
  double t4404;
  double t4406;
  double t4412;
  double t4415;
  double t4456;
  double t4457;
  double t4458;
  double t4453;
  double t4455;
  double t4461;
  double t4462;
  double t4464;
  double t4465;
  double t4466;
  double t4467;
  double t4469;
  double t4471;
  double t4472;
  double t4477;
  double t4521;
  double t4523;
  double t4524;
  double t4526;
  double t4529;
  double t4530;
  double t4531;
  double t4532;
  double t4534;
  double t4536;
  double t4541;
  double t4542;
  t31 = Cos(var1[17]);
  t41 = Sin(var1[17]);
  t976 = Cos(var1[16]);
  t996 = -1.*t976;
  t1040 = 1. + t996;
  t1091 = Sin(var1[16]);
  t1314 = Cos(var1[4]);
  t1424 = Cos(var1[15]);
  t1390 = Cos(var1[5]);
  t1392 = Sin(var1[15]);
  t1434 = Sin(var1[5]);
  t77 = 2.8e-11*t41;
  t1204 = Sin(var1[4]);
  t1406 = -1.*t1314*t1390*t1392;
  t1436 = -1.*t1424*t1314*t1434;
  t1447 = t1406 + t1436;
  t1088 = -2.8e-11*t1040;
  t1627 = t1424*t1314*t1390;
  t1649 = -1.*t1314*t1392*t1434;
  t1710 = t1627 + t1649;
  t1757 = -4.e-6*t41;
  t492 = 7.e-6*t41;
  t1982 = 4.e-6*t1040;
  t1266 = -7.e-6*t1040;
  t1146 = t1088 + t1091;
  t1209 = t1146*t1204;
  t1304 = -4.e-6*t1091;
  t1307 = t1266 + t1304;
  t1453 = t1307*t1447;
  t1544 = -1.000000000016*t1040;
  t1572 = 1. + t1544;
  t1714 = t1572*t1710;
  t1723 = t1209 + t1453 + t1714;
  t1968 = -1.000000000049*t1040;
  t1970 = 1. + t1968;
  t1979 = t1970*t1204;
  t2004 = -7.e-6*t1091;
  t2016 = t1982 + t2004;
  t2036 = t2016*t1447;
  t2049 = -1.*t1091;
  t2057 = t1088 + t2049;
  t2098 = t2057*t1710;
  t2109 = t1979 + t2036 + t2098;
  t385 = -4.e-6*t31;
  t2185 = 7.e-6*t1091;
  t2191 = t1982 + t2185;
  t2206 = t2191*t1204;
  t2237 = -6.5e-11*t1040;
  t2243 = 1. + t2237;
  t2249 = t2243*t1447;
  t2252 = 4.e-6*t1091;
  t2262 = t1266 + t2252;
  t2266 = t2262*t1710;
  t2267 = t2206 + t2249 + t2266;
  t1850 = -1.*t31;
  t2319 = -2.8e-11*t41;
  t1749 = -7.e-6*t31;
  t2139 = 4.e-6*t31;
  t2362 = -7.e-6*t41;
  t2116 = 7.e-6*t31;
  t2454 = 4.e-6*t41;
  t2628 = 2.8e-11*t1091;
  t2769 = 1. + t1850;
  t2663 = 7.e-6*t976;
  t2682 = 4.e-6*t976;
  t2787 = -1. + t31;
  t2796 = 4.e-6*t2787;
  t2605 = -7.e-6*t976;
  t2775 = 7.e-6*t2769;
  t2844 = 2.8e-11*t2769;
  t2886 = -2.8e-11*t1091;
  t2720 = -4.e-6*t976;
  t2810 = t2663 + t2252;
  t2812 = t2810*t1204;
  t2819 = -6.5e-11*t1091*t1447;
  t2821 = t2682 + t2004;
  t2823 = t2821*t1710;
  t2827 = t2812 + t2819 + t2823;
  t2875 = -1.000000000049*t1091*t1204;
  t2880 = t2605 + t2252;
  t2883 = t2880*t1447;
  t2888 = t996 + t2886;
  t2889 = t2888*t1710;
  t2893 = t2875 + t2883 + t2889;
  t2940 = t976 + t2886;
  t2941 = t2940*t1204;
  t2942 = t2720 + t2004;
  t2943 = t2942*t1447;
  t2953 = -1.000000000016*t1091*t1710;
  t2961 = t2941 + t2943 + t2953;
  t2979 = -2.8e-11*t2769;
  t2849 = -1.*t41;
  t3017 = 4.e-6*t2769;
  t2973 = -7.e-6*t2769;
  t3089 = -1.*t1424;
  t3094 = 1. + t3089;
  t3095 = -0.15121*t3094;
  t3120 = 7.e-6*t1040;
  t2763 = 2.826290000000002e-7*var1[17];
  t2771 = -2.18904205e-16*t2769;
  t2776 = t2775 + t2454;
  t2784 = -0.5031510000080001*t2776;
  t2801 = t2796 + t492;
  t2807 = -0.038575000014*t2801;
  t2809 = t2763 + t2771 + t2784 + t2807;
  t3179 = -1.*t1424*t1314*t1390;
  t3183 = t1314*t1392*t1434;
  t3184 = t3179 + t3183;
  t2834 = 1.1305160000000008e-12*var1[17];
  t2842 = -0.03857500001589017*t2769;
  t2854 = t2844 + t2849;
  t2855 = -0.5031510000080001*t2854;
  t2857 = t2796 + t2362;
  t2859 = -3.367757e-6*t2857;
  t2864 = t2834 + t2842 + t2855 + t2859;
  t2900 = -1.9784030000000015e-12*var1[17];
  t2911 = -0.5031510000160505*t2769;
  t2918 = t2775 + t1757;
  t2919 = -3.367757e-6*t2918;
  t2921 = t2844 + t41;
  t2927 = -0.038575000014*t2921;
  t2935 = t2900 + t2911 + t2919 + t2927;
  t2974 = t2973 + t1757;
  t3195 = t2262*t1447;
  t3197 = t2243*t3184;
  t3200 = t3195 + t3197;
  t2987 = t2979 + t41;
  t3207 = t2057*t1447;
  t3208 = t2016*t3184;
  t3214 = t3207 + t3208;
  t2992 = -1.000000000016*t2769;
  t2994 = 1. + t2992;
  t3216 = t1572*t1447;
  t3218 = t1307*t3184;
  t3220 = t3216 + t3218;
  t3020 = t3017 + t2362;
  t3029 = -1.000000000049*t2769;
  t3030 = 1. + t3029;
  t3036 = t2979 + t2849;
  t3062 = -6.5e-11*t2769;
  t3066 = 1. + t3062;
  t3069 = t3017 + t492;
  t3074 = t2973 + t2454;
  t3107 = -0.15121*t1392;
  t3116 = -2.7726089999999997e-12*var1[16];
  t3117 = -0.2812110000084994*t1040;
  t3121 = t3120 + t1304;
  t3122 = -1.8134809999999998e-6*t3121;
  t3128 = 2.8e-11*t1040;
  t3130 = t3128 + t1091;
  t3135 = -0.038749000006999997*t3130;
  t3142 = t3116 + t3117 + t3122 + t3135;
  t3147 = t3142*t1447;
  t3148 = 3.9608699999999997e-7*var1[16];
  t3151 = -1.1787626499999999e-16*t1040;
  t3152 = t3120 + t2252;
  t3153 = -0.281211000004*t3152;
  t3162 = -1. + t976;
  t3169 = 4.e-6*t3162;
  t3172 = t3169 + t2185;
  t3174 = -0.038749000006999997*t3172;
  t3178 = t3148 + t3151 + t3153 + t3174;
  t3189 = t3178*t3184;
  t3206 = t2809*t3200;
  t3215 = t2864*t3214;
  t3222 = t2935*t3220;
  t3224 = t2974*t3200;
  t3225 = t2987*t3214;
  t3230 = t2994*t3220;
  t3234 = t3224 + t3225 + t3230;
  t3236 = -0.80315*t3234;
  t3239 = t3020*t3200;
  t3243 = t3030*t3214;
  t3247 = t3036*t3220;
  t3248 = t3239 + t3243 + t3247;
  t3250 = -0.038576*t3248;
  t3253 = t3066*t3200;
  t3256 = t3069*t3214;
  t3258 = t3074*t3220;
  t3260 = t3253 + t3256 + t3258;
  t3263 = -0.148715*t3260;
  t3108 = t3095 + t3107;
  t3099 = 0.15121*t1392;
  t3102 = t3095 + t3099;
  t3365 = t1390*t1392*t1204;
  t3367 = t1424*t1204*t1434;
  t3371 = t3365 + t3367;
  t3381 = -1.*t1424*t1390*t1204;
  t3385 = t1392*t1204*t1434;
  t3391 = t3381 + t3385;
  t3397 = t1314*t1146;
  t3398 = t1307*t3371;
  t3399 = t1572*t3391;
  t3406 = t3397 + t3398 + t3399;
  t3409 = t1970*t1314;
  t3416 = t2016*t3371;
  t3418 = t2057*t3391;
  t3420 = t3409 + t3416 + t3418;
  t3428 = t1314*t2191;
  t3430 = t2243*t3371;
  t3431 = t2262*t3391;
  t3435 = t3428 + t3430 + t3431;
  t3307 = 1.5843479999999999e-12*var1[16];
  t3321 = -0.03874900000889869*t1040;
  t3324 = t3128 + t2049;
  t3325 = -0.281211000004*t3324;
  t3332 = t3169 + t2004;
  t3333 = -1.8134809999999998e-6*t3332;
  t3341 = t3307 + t3321 + t3325 + t3333;
  t3508 = Sin(var1[3]);
  t3533 = -1.*t1314*t1390*t1392*t3508;
  t3534 = -1.*t1424*t1314*t3508*t1434;
  t3539 = t3533 + t3534;
  t3548 = t1424*t1314*t1390*t3508;
  t3551 = -1.*t1314*t1392*t3508*t1434;
  t3558 = t3548 + t3551;
  t3562 = t1146*t3508*t1204;
  t3563 = t1307*t3539;
  t3572 = t1572*t3558;
  t3575 = t3562 + t3563 + t3572;
  t3580 = t1970*t3508*t1204;
  t3582 = t2016*t3539;
  t3589 = t2057*t3558;
  t3590 = t3580 + t3582 + t3589;
  t3592 = t2191*t3508*t1204;
  t3596 = t2243*t3539;
  t3603 = t2262*t3558;
  t3613 = t3592 + t3596 + t3603;
  t3664 = Cos(var1[3]);
  t3671 = t3664*t1390*t1204;
  t3672 = -1.*t3508*t1434;
  t3673 = t3671 + t3672;
  t3676 = -1.*t1390*t3508;
  t3677 = -1.*t3664*t1204*t1434;
  t3681 = t3676 + t3677;
  t3685 = -1.*t1392*t3673;
  t3686 = t1424*t3681;
  t3690 = t3685 + t3686;
  t3695 = t1424*t3673;
  t3696 = t1392*t3681;
  t3698 = t3695 + t3696;
  t3706 = -1.*t3664*t1314*t1146;
  t3707 = t1307*t3690;
  t3712 = t1572*t3698;
  t3717 = t3706 + t3707 + t3712;
  t3720 = -1.*t1970*t3664*t1314;
  t3721 = t2016*t3690;
  t3722 = t2057*t3698;
  t3723 = t3720 + t3721 + t3722;
  t3731 = -1.*t3664*t1314*t2191;
  t3732 = t2243*t3690;
  t3740 = t2262*t3698;
  t3744 = t3731 + t3732 + t3740;
  t3795 = -1.*t1390*t3508*t1204;
  t3796 = -1.*t3664*t1434;
  t3797 = t3795 + t3796;
  t3803 = t3664*t1390;
  t3804 = -1.*t3508*t1204*t1434;
  t3807 = t3803 + t3804;
  t3810 = t1392*t3797;
  t3814 = t1424*t3807;
  t3816 = t3810 + t3814;
  t3821 = t1424*t3797;
  t3823 = -1.*t1392*t3807;
  t3828 = t3821 + t3823;
  t3833 = t2262*t3816;
  t3835 = t2243*t3828;
  t3839 = t3833 + t3835;
  t3851 = t2057*t3816;
  t3852 = t2016*t3828;
  t3854 = t3851 + t3852;
  t3859 = t1572*t3816;
  t3860 = t1307*t3828;
  t3861 = t3859 + t3860;
  t3278 = -0.15121*t1424;
  t3279 = t3278 + t3107;
  t3285 = 0.15121*t1424;
  t3291 = t3285 + t3107;
  t3919 = t1390*t3508*t1204;
  t3923 = t3664*t1434;
  t3924 = t3919 + t3923;
  t3933 = -1.*t1392*t3924;
  t3934 = t3933 + t3814;
  t3938 = -1.*t1424*t3924;
  t3941 = t3938 + t3823;
  t3944 = t2262*t3934;
  t3945 = t2243*t3941;
  t3946 = t3944 + t3945;
  t3948 = t2057*t3934;
  t3949 = t2016*t3941;
  t3952 = t3948 + t3949;
  t3955 = t1572*t3934;
  t3956 = t1307*t3941;
  t3957 = t3955 + t3956;
  t92 = t31 + t77;
  t101 = -0.038575000014*t92;
  t498 = t385 + t492;
  t739 = -3.367757e-6*t498;
  t812 = -0.5031510000160505*t41;
  t879 = -1.9784030000000015e-12 + t101 + t739 + t812;
  t1822 = t1749 + t1757;
  t1849 = -3.367757e-6*t1822;
  t1858 = t1850 + t77;
  t1905 = -0.5031510000080001*t1858;
  t1945 = -0.03857500001589017*t41;
  t1967 = 1.1305160000000008e-12 + t1849 + t1905 + t1945;
  t4004 = t1424*t3924;
  t4005 = t1392*t3807;
  t4012 = t4004 + t4005;
  t2124 = t2116 + t1757;
  t2128 = -0.038575000014*t2124;
  t2141 = t2139 + t492;
  t2160 = -0.5031510000080001*t2141;
  t2165 = -2.18904205e-16*t41;
  t2179 = 2.826290000000002e-7 + t2128 + t2160 + t2165;
  t3996 = -1.*t1314*t1146*t3508;
  t3998 = t1307*t3934;
  t4013 = t1572*t4012;
  t4015 = t3996 + t3998 + t4013;
  t2322 = t31 + t2319;
  t4019 = -1.*t1970*t1314*t3508;
  t4020 = t2016*t3934;
  t4021 = t2057*t4012;
  t4024 = t4019 + t4020 + t4021;
  t2378 = t385 + t2362;
  t4032 = -1.*t1314*t2191*t3508;
  t4033 = t2243*t3934;
  t4036 = t2262*t4012;
  t4039 = t4032 + t4033 + t4036;
  t2416 = t1850 + t2319;
  t2469 = t1749 + t2454;
  t2510 = t2139 + t2362;
  t2546 = t2116 + t2454;
  t2613 = t2605 + t1304;
  t2618 = -1.8134809999999998e-6*t2613;
  t2631 = t996 + t2628;
  t2636 = -0.281211000004*t2631;
  t2640 = -0.03874900000889869*t1091;
  t2653 = 1.5843479999999999e-12 + t2618 + t2636 + t2640;
  t2668 = t2663 + t1304;
  t2676 = -0.038749000006999997*t2668;
  t2683 = t2682 + t2185;
  t2686 = -0.281211000004*t2683;
  t2689 = -1.1787626499999999e-16*t1091;
  t2694 = 3.9608699999999997e-7 + t2676 + t2686 + t2689;
  t2706 = t976 + t2628;
  t2718 = -0.038749000006999997*t2706;
  t2731 = t2720 + t2185;
  t2733 = -1.8134809999999998e-6*t2731;
  t2745 = -0.2812110000084994*t1091;
  t2749 = -2.7726089999999997e-12 + t2718 + t2733 + t2745;
  t4092 = -1.*t1314*t2810*t3508;
  t4094 = -6.5e-11*t1091*t3934;
  t4095 = t2821*t4012;
  t4097 = t4092 + t4094 + t4095;
  t4106 = 1.000000000049*t1314*t1091*t3508;
  t4108 = t2880*t3934;
  t4109 = t2888*t4012;
  t4110 = t4106 + t4108 + t4109;
  t4112 = -1.*t1314*t2940*t3508;
  t4114 = t2942*t3934;
  t4115 = -1.000000000016*t1091*t4012;
  t4116 = t4112 + t4114 + t4115;
  t4173 = t3664*t1314*t1390*t1392;
  t4178 = t1424*t3664*t1314*t1434;
  t4180 = t4173 + t4178;
  t4189 = -1.*t1424*t3664*t1314*t1390;
  t4190 = t3664*t1314*t1392*t1434;
  t4192 = t4189 + t4190;
  t4197 = -1.*t3664*t1146*t1204;
  t4201 = t1307*t4180;
  t4202 = t1572*t4192;
  t4209 = t4197 + t4201 + t4202;
  t4212 = -1.*t1970*t3664*t1204;
  t4214 = t2016*t4180;
  t4217 = t2057*t4192;
  t4218 = t4212 + t4214 + t4217;
  t4224 = -1.*t3664*t2191*t1204;
  t4227 = t2243*t4180;
  t4228 = t2262*t4192;
  t4230 = t4224 + t4227 + t4228;
  t4269 = t1390*t3508;
  t4273 = t3664*t1204*t1434;
  t4278 = t4269 + t4273;
  t4285 = t1392*t3673;
  t4286 = t1424*t4278;
  t4287 = t4285 + t4286;
  t4290 = -1.*t1392*t4278;
  t4292 = t3695 + t4290;
  t4295 = t2262*t4287;
  t4296 = t2243*t4292;
  t4297 = t4295 + t4296;
  t4301 = t2057*t4287;
  t4306 = t2016*t4292;
  t4310 = t4301 + t4306;
  t4313 = t1572*t4287;
  t4314 = t1307*t4292;
  t4315 = t4313 + t4314;
  t4352 = -1.*t3664*t1390*t1204;
  t4353 = t3508*t1434;
  t4354 = t4352 + t4353;
  t4359 = -1.*t1392*t4354;
  t4365 = t4359 + t4286;
  t4370 = -1.*t1424*t4354;
  t4375 = t4370 + t4290;
  t4383 = t2262*t4365;
  t4385 = t2243*t4375;
  t4390 = t4383 + t4385;
  t4397 = t2057*t4365;
  t4403 = t2016*t4375;
  t4404 = t4397 + t4403;
  t4406 = t1572*t4365;
  t4412 = t1307*t4375;
  t4415 = t4406 + t4412;
  t4456 = t1424*t4354;
  t4457 = t1392*t4278;
  t4458 = t4456 + t4457;
  t4453 = t3664*t1314*t1146;
  t4455 = t1307*t4365;
  t4461 = t1572*t4458;
  t4462 = t4453 + t4455 + t4461;
  t4464 = t1970*t3664*t1314;
  t4465 = t2016*t4365;
  t4466 = t2057*t4458;
  t4467 = t4464 + t4465 + t4466;
  t4469 = t3664*t1314*t2191;
  t4471 = t2243*t4365;
  t4472 = t2262*t4458;
  t4477 = t4469 + t4471 + t4472;
  t4521 = t3664*t1314*t2810;
  t4523 = -6.5e-11*t1091*t4365;
  t4524 = t2821*t4458;
  t4526 = t4521 + t4523 + t4524;
  t4529 = -1.000000000049*t3664*t1314*t1091;
  t4530 = t2880*t4365;
  t4531 = t2888*t4458;
  t4532 = t4529 + t4530 + t4531;
  t4534 = t3664*t1314*t2940;
  t4536 = t2942*t4365;
  t4541 = -1.000000000016*t1091*t4458;
  t4542 = t4534 + t4536 + t4541;
  p_output1[0]=var2[0] + (t1204*t1434*t3102 - 1.*t1204*t1390*t3108 + t1314*t3341 + t3178*t3371 + t3142*t3391 + t2935*t3406 + t2864*t3420 + t2809*t3435 - 0.80315*(t2994*t3406 + t2987*t3420 + t2974*t3435) - 0.038576*(t3036*t3406 + t3030*t3420 + t3020*t3435) - 0.148715*(t3074*t3406 + t3069*t3420 + t3066*t3435))*var2[4] + (-1.*t1314*t1390*t3102 - 1.*t1314*t1434*t3108 + t3147 + t3189 + t3206 + t3215 + t3222 + t3236 + t3250 + t3263)*var2[5] + (t3147 + t3189 + t3206 + t3215 + t3222 + t3236 + t3250 + t3263 + t1314*t1390*t3279 - 1.*t1314*t1434*t3291)*var2[15] + (t1204*t2653 + t1447*t2694 + t1710*t2749 + t2809*t2827 + t2864*t2893 + t2935*t2961 - 0.80315*(t2827*t2974 + t2893*t2987 + t2961*t2994) - 0.038576*(t2827*t3020 + t2893*t3030 + t2961*t3036) - 0.148715*(t2827*t3066 + t2893*t3069 + t2961*t3074))*var2[16] + (t1967*t2109 + t2179*t2267 - 0.80315*(t2109*t2322 + t2267*t2378 - 1.000000000016*t1723*t41) - 0.038576*(t1723*t2416 + t2267*t2469 - 1.000000000049*t2109*t41) - 0.148715*(t1723*t2510 + t2109*t2546 - 6.5e-11*t2267*t41) + t1723*t879)*var2[17];
  p_output1[1]=var2[1] + (-1.*t1314*t3341*t3664 + t3108*t3673 + t3102*t3681 + t3178*t3690 + t3142*t3698 + t2935*t3717 + t2864*t3723 + t2809*t3744 - 0.80315*(t2994*t3717 + t2987*t3723 + t2974*t3744) - 0.038576*(t3036*t3717 + t3030*t3723 + t3020*t3744) - 0.148715*(t3074*t3717 + t3069*t3723 + t3066*t3744))*var2[3] + (-1.*t1314*t1434*t3102*t3508 + t1314*t1390*t3108*t3508 + t1204*t3341*t3508 + t3178*t3539 + t3142*t3558 + t2935*t3575 + t2864*t3590 + t2809*t3613 - 0.80315*(t2994*t3575 + t2987*t3590 + t2974*t3613) - 0.038576*(t3036*t3575 + t3030*t3590 + t3020*t3613) - 0.148715*(t3074*t3575 + t3069*t3590 + t3066*t3613))*var2[4] + (t3102*t3797 + t3108*t3807 + t3142*t3816 + t3178*t3828 + t2809*t3839 + t2864*t3854 + t2935*t3861 - 0.80315*(t2974*t3839 + t2987*t3854 + t2994*t3861) - 0.038576*(t3020*t3839 + t3030*t3854 + t3036*t3861) - 0.148715*(t3066*t3839 + t3069*t3854 + t3074*t3861))*var2[5] + (t3291*t3807 + t3279*t3924 + t3142*t3934 + t3178*t3941 + t2809*t3946 + t2864*t3952 + t2935*t3957 - 0.80315*(t2974*t3946 + t2987*t3952 + t2994*t3957) - 0.038576*(t3020*t3946 + t3030*t3952 + t3036*t3957) - 0.148715*(t3066*t3946 + t3069*t3952 + t3074*t3957))*var2[15] + (-1.*t1314*t2653*t3508 + t2694*t3934 + t2749*t4012 + t2809*t4097 + t2864*t4110 + t2935*t4116 - 0.80315*(t2974*t4097 + t2987*t4110 + t2994*t4116) - 0.038576*(t3020*t4097 + t3030*t4110 + t3036*t4116) - 0.148715*(t3066*t4097 + t3069*t4110 + t3074*t4116))*var2[16] + (t1967*t4024 + t2179*t4039 - 0.80315*(t2322*t4024 + t2378*t4039 - 1.000000000016*t4015*t41) - 0.038576*(t2416*t4015 + t2469*t4039 - 1.000000000049*t4024*t41) - 0.148715*(t2510*t4015 + t2546*t4024 - 6.5e-11*t4039*t41) + t4015*t879)*var2[17];
  p_output1[2]=var2[2] + (-1.*t1314*t3341*t3508 + t3102*t3807 + t3108*t3924 + t3178*t3934 + t3142*t4012 + t2935*t4015 + t2864*t4024 + t2809*t4039 - 0.80315*(t2994*t4015 + t2987*t4024 + t2974*t4039) - 0.038576*(t3036*t4015 + t3030*t4024 + t3020*t4039) - 0.148715*(t3074*t4015 + t3069*t4024 + t3066*t4039))*var2[3] + (t1314*t1434*t3102*t3664 - 1.*t1314*t1390*t3108*t3664 - 1.*t1204*t3341*t3664 + t3178*t4180 + t3142*t4192 + t2935*t4209 + t2864*t4218 + t2809*t4230 - 0.80315*(t2994*t4209 + t2987*t4218 + t2974*t4230) - 0.038576*(t3036*t4209 + t3030*t4218 + t3020*t4230) - 0.148715*(t3074*t4209 + t3069*t4218 + t3066*t4230))*var2[4] + (t3102*t3673 + t3108*t4278 + t3142*t4287 + t3178*t4292 + t2809*t4297 + t2864*t4310 + t2935*t4315 - 0.80315*(t2974*t4297 + t2987*t4310 + t2994*t4315) - 0.038576*(t3020*t4297 + t3030*t4310 + t3036*t4315) - 0.148715*(t3066*t4297 + t3069*t4310 + t3074*t4315))*var2[5] + (t3291*t4278 + t3279*t4354 + t3142*t4365 + t3178*t4375 + t2809*t4390 + t2864*t4404 + t2935*t4415 - 0.80315*(t2974*t4390 + t2987*t4404 + t2994*t4415) - 0.038576*(t3020*t4390 + t3030*t4404 + t3036*t4415) - 0.148715*(t3066*t4390 + t3069*t4404 + t3074*t4415))*var2[15] + (t1314*t2653*t3664 + t2694*t4365 + t2749*t4458 + t2809*t4526 + t2864*t4532 + t2935*t4542 - 0.80315*(t2974*t4526 + t2987*t4532 + t2994*t4542) - 0.038576*(t3020*t4526 + t3030*t4532 + t3036*t4542) - 0.148715*(t3066*t4526 + t3069*t4532 + t3074*t4542))*var2[16] + (t1967*t4467 + t2179*t4477 - 0.80315*(-1.000000000016*t41*t4462 + t2322*t4467 + t2378*t4477) - 0.038576*(t2416*t4462 - 1.000000000049*t41*t4467 + t2469*t4477) - 0.148715*(t2510*t4462 + t2546*t4467 - 6.5e-11*t41*t4477) + t4462*t879)*var2[17];
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

#include "impact_velocity_RrFootParallelStance2.hh"

namespace ParallelStance2
{

void impact_velocity_RrFootParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
