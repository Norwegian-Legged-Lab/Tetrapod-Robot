/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:32:54 GMT+01:00
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
  double t50;
  double t197;
  double t783;
  double t885;
  double t960;
  double t993;
  double t1174;
  double t1258;
  double t1190;
  double t1205;
  double t1307;
  double t324;
  double t1091;
  double t1223;
  double t1315;
  double t1325;
  double t961;
  double t1368;
  double t1383;
  double t1398;
  double t1462;
  double t569;
  double t1715;
  double t1138;
  double t1059;
  double t1133;
  double t1143;
  double t1145;
  double t1329;
  double t1341;
  double t1360;
  double t1413;
  double t1421;
  double t1628;
  double t1669;
  double t1679;
  double t1728;
  double t1741;
  double t1782;
  double t1784;
  double t1806;
  double t1822;
  double t1854;
  double t563;
  double t1934;
  double t1935;
  double t1939;
  double t1941;
  double t1943;
  double t1963;
  double t1965;
  double t1987;
  double t1993;
  double t2002;
  double t1515;
  double t2023;
  double t1442;
  double t1895;
  double t2042;
  double t1862;
  double t2129;
  double t2317;
  double t2513;
  double t2381;
  double t2408;
  double t2531;
  double t2540;
  double t2287;
  double t2518;
  double t2627;
  double t2659;
  double t2471;
  double t2564;
  double t2585;
  double t2594;
  double t2599;
  double t2600;
  double t2602;
  double t2653;
  double t2656;
  double t2658;
  double t2664;
  double t2670;
  double t2683;
  double t2734;
  double t2746;
  double t2757;
  double t2764;
  double t2779;
  double t2784;
  double t2813;
  double t2634;
  double t2878;
  double t2800;
  double t2982;
  double t2990;
  double t2995;
  double t3024;
  double t2506;
  double t2515;
  double t2522;
  double t2525;
  double t2549;
  double t2552;
  double t2559;
  double t3091;
  double t3093;
  double t3099;
  double t2622;
  double t2623;
  double t2635;
  double t2642;
  double t2646;
  double t2648;
  double t2652;
  double t2687;
  double t2690;
  double t2709;
  double t2714;
  double t2717;
  double t2725;
  double t2729;
  double t2802;
  double t3105;
  double t3106;
  double t3107;
  double t2824;
  double t3109;
  double t3110;
  double t3114;
  double t2831;
  double t2835;
  double t3117;
  double t3125;
  double t3130;
  double t2894;
  double t2902;
  double t2904;
  double t2914;
  double t2929;
  double t2930;
  double t2934;
  double t2947;
  double t3003;
  double t3018;
  double t3020;
  double t3031;
  double t3040;
  double t3043;
  double t3044;
  double t3045;
  double t3050;
  double t3056;
  double t3064;
  double t3066;
  double t3067;
  double t3076;
  double t3080;
  double t3082;
  double t3084;
  double t3085;
  double t3086;
  double t3101;
  double t3108;
  double t3116;
  double t3134;
  double t3146;
  double t3148;
  double t3160;
  double t3169;
  double t3171;
  double t3172;
  double t3177;
  double t3179;
  double t3180;
  double t3181;
  double t3185;
  double t3187;
  double t3188;
  double t3189;
  double t3195;
  double t3011;
  double t2996;
  double t2998;
  double t3245;
  double t3246;
  double t3249;
  double t3258;
  double t3259;
  double t3268;
  double t3284;
  double t3285;
  double t3289;
  double t3291;
  double t3299;
  double t3300;
  double t3302;
  double t3304;
  double t3314;
  double t3315;
  double t3324;
  double t3327;
  double t3222;
  double t3224;
  double t3225;
  double t3231;
  double t3233;
  double t3235;
  double t3236;
  double t3398;
  double t3415;
  double t3417;
  double t3418;
  double t3420;
  double t3421;
  double t3422;
  double t3426;
  double t3427;
  double t3429;
  double t3434;
  double t3439;
  double t3443;
  double t3445;
  double t3446;
  double t3451;
  double t3454;
  double t3455;
  double t3456;
  double t3511;
  double t3521;
  double t3524;
  double t3529;
  double t3532;
  double t3534;
  double t3536;
  double t3542;
  double t3548;
  double t3554;
  double t3561;
  double t3576;
  double t3580;
  double t3584;
  double t3585;
  double t3587;
  double t3590;
  double t3597;
  double t3609;
  double t3610;
  double t3613;
  double t3626;
  double t3628;
  double t3631;
  double t3634;
  double t3696;
  double t3702;
  double t3704;
  double t3711;
  double t3714;
  double t3715;
  double t3717;
  double t3718;
  double t3720;
  double t3723;
  double t3727;
  double t3728;
  double t3732;
  double t3733;
  double t3734;
  double t3739;
  double t3740;
  double t3747;
  double t3754;
  double t3755;
  double t3757;
  double t3205;
  double t3206;
  double t3211;
  double t3213;
  double t3809;
  double t3812;
  double t3813;
  double t3818;
  double t3821;
  double t3825;
  double t3827;
  double t3831;
  double t3833;
  double t3834;
  double t3840;
  double t3844;
  double t3846;
  double t3852;
  double t3853;
  double t3858;
  double t327;
  double t460;
  double t601;
  double t625;
  double t633;
  double t769;
  double t1470;
  double t1510;
  double t1521;
  double t1523;
  double t1549;
  double t1576;
  double t3907;
  double t3912;
  double t3914;
  double t1873;
  double t1882;
  double t1899;
  double t1904;
  double t1916;
  double t1928;
  double t3902;
  double t3905;
  double t3917;
  double t3918;
  double t2025;
  double t3927;
  double t3928;
  double t3935;
  double t3941;
  double t2045;
  double t3947;
  double t3950;
  double t3953;
  double t3957;
  double t2073;
  double t2157;
  double t2185;
  double t2204;
  double t2292;
  double t2315;
  double t2322;
  double t2358;
  double t2373;
  double t2379;
  double t2383;
  double t2403;
  double t2431;
  double t2439;
  double t2441;
  double t2444;
  double t2466;
  double t2469;
  double t2475;
  double t2488;
  double t2491;
  double t2497;
  double t3988;
  double t3990;
  double t3991;
  double t3992;
  double t3997;
  double t3998;
  double t4000;
  double t4001;
  double t4003;
  double t4005;
  double t4006;
  double t4007;
  double t4057;
  double t4064;
  double t4065;
  double t4068;
  double t4070;
  double t4071;
  double t4074;
  double t4077;
  double t4083;
  double t4085;
  double t4087;
  double t4088;
  double t4091;
  double t4093;
  double t4097;
  double t4099;
  double t4100;
  double t4103;
  double t4142;
  double t4146;
  double t4151;
  double t4159;
  double t4161;
  double t4167;
  double t4170;
  double t4171;
  double t4176;
  double t4177;
  double t4179;
  double t4185;
  double t4186;
  double t4188;
  double t4195;
  double t4198;
  double t4200;
  double t4236;
  double t4237;
  double t4238;
  double t4243;
  double t4244;
  double t4249;
  double t4251;
  double t4254;
  double t4256;
  double t4257;
  double t4260;
  double t4261;
  double t4262;
  double t4265;
  double t4266;
  double t4267;
  double t4324;
  double t4328;
  double t4329;
  double t4322;
  double t4323;
  double t4331;
  double t4332;
  double t4335;
  double t4336;
  double t4337;
  double t4338;
  double t4343;
  double t4345;
  double t4346;
  double t4349;
  double t4402;
  double t4405;
  double t4406;
  double t4408;
  double t4414;
  double t4415;
  double t4417;
  double t4420;
  double t4425;
  double t4426;
  double t4437;
  double t4440;
  t50 = Cos(var1[17]);
  t197 = Sin(var1[17]);
  t783 = Cos(var1[16]);
  t885 = -1.*t783;
  t960 = 1. + t885;
  t993 = Sin(var1[16]);
  t1174 = Cos(var1[4]);
  t1258 = Cos(var1[15]);
  t1190 = Cos(var1[5]);
  t1205 = Sin(var1[15]);
  t1307 = Sin(var1[5]);
  t324 = 2.8e-11*t197;
  t1091 = Sin(var1[4]);
  t1223 = -1.*t1174*t1190*t1205;
  t1315 = -1.*t1258*t1174*t1307;
  t1325 = t1223 + t1315;
  t961 = -2.8e-11*t960;
  t1368 = t1258*t1174*t1190;
  t1383 = -1.*t1174*t1205*t1307;
  t1398 = t1368 + t1383;
  t1462 = -4.e-6*t197;
  t569 = 7.e-6*t197;
  t1715 = 4.e-6*t960;
  t1138 = -7.e-6*t960;
  t1059 = t961 + t993;
  t1133 = t1059*t1091;
  t1143 = -4.e-6*t993;
  t1145 = t1138 + t1143;
  t1329 = t1145*t1325;
  t1341 = -1.000000000016*t960;
  t1360 = 1. + t1341;
  t1413 = t1360*t1398;
  t1421 = t1133 + t1329 + t1413;
  t1628 = -1.000000000049*t960;
  t1669 = 1. + t1628;
  t1679 = t1669*t1091;
  t1728 = -7.e-6*t993;
  t1741 = t1715 + t1728;
  t1782 = t1741*t1325;
  t1784 = -1.*t993;
  t1806 = t961 + t1784;
  t1822 = t1806*t1398;
  t1854 = t1679 + t1782 + t1822;
  t563 = -4.e-6*t50;
  t1934 = 7.e-6*t993;
  t1935 = t1715 + t1934;
  t1939 = t1935*t1091;
  t1941 = -6.5e-11*t960;
  t1943 = 1. + t1941;
  t1963 = t1943*t1325;
  t1965 = 4.e-6*t993;
  t1987 = t1138 + t1965;
  t1993 = t1987*t1398;
  t2002 = t1939 + t1963 + t1993;
  t1515 = -1.*t50;
  t2023 = -2.8e-11*t197;
  t1442 = -7.e-6*t50;
  t1895 = 4.e-6*t50;
  t2042 = -7.e-6*t197;
  t1862 = 7.e-6*t50;
  t2129 = 4.e-6*t197;
  t2317 = 2.8e-11*t993;
  t2513 = 1. + t1515;
  t2381 = 7.e-6*t783;
  t2408 = 4.e-6*t783;
  t2531 = -1. + t50;
  t2540 = 4.e-6*t2531;
  t2287 = -7.e-6*t783;
  t2518 = 7.e-6*t2513;
  t2627 = 2.8e-11*t2513;
  t2659 = -2.8e-11*t993;
  t2471 = -4.e-6*t783;
  t2564 = t2381 + t1965;
  t2585 = t2564*t1091;
  t2594 = -6.5e-11*t993*t1325;
  t2599 = t2408 + t1728;
  t2600 = t2599*t1398;
  t2602 = t2585 + t2594 + t2600;
  t2653 = -1.000000000049*t993*t1091;
  t2656 = t2287 + t1965;
  t2658 = t2656*t1325;
  t2664 = t885 + t2659;
  t2670 = t2664*t1398;
  t2683 = t2653 + t2658 + t2670;
  t2734 = t783 + t2659;
  t2746 = t2734*t1091;
  t2757 = t2471 + t1728;
  t2764 = t2757*t1325;
  t2779 = -1.000000000016*t993*t1398;
  t2784 = t2746 + t2764 + t2779;
  t2813 = -2.8e-11*t2513;
  t2634 = -1.*t197;
  t2878 = 4.e-6*t2513;
  t2800 = -7.e-6*t2513;
  t2982 = -1.*t1258;
  t2990 = 1. + t2982;
  t2995 = -0.15121*t2990;
  t3024 = 7.e-6*t960;
  t2506 = 2.826290000000002e-7*var1[17];
  t2515 = -2.18904205e-16*t2513;
  t2522 = t2518 + t2129;
  t2525 = -0.5031510000080001*t2522;
  t2549 = t2540 + t569;
  t2552 = -0.038575000014*t2549;
  t2559 = t2506 + t2515 + t2525 + t2552;
  t3091 = -1.*t1258*t1174*t1190;
  t3093 = t1174*t1205*t1307;
  t3099 = t3091 + t3093;
  t2622 = 1.1305160000000008e-12*var1[17];
  t2623 = -0.03857500001589017*t2513;
  t2635 = t2627 + t2634;
  t2642 = -0.5031510000080001*t2635;
  t2646 = t2540 + t2042;
  t2648 = -3.367757e-6*t2646;
  t2652 = t2622 + t2623 + t2642 + t2648;
  t2687 = -1.9784030000000015e-12*var1[17];
  t2690 = -0.5031510000160505*t2513;
  t2709 = t2518 + t1462;
  t2714 = -3.367757e-6*t2709;
  t2717 = t2627 + t197;
  t2725 = -0.038575000014*t2717;
  t2729 = t2687 + t2690 + t2714 + t2725;
  t2802 = t2800 + t1462;
  t3105 = t1987*t1325;
  t3106 = t1943*t3099;
  t3107 = t3105 + t3106;
  t2824 = t2813 + t197;
  t3109 = t1806*t1325;
  t3110 = t1741*t3099;
  t3114 = t3109 + t3110;
  t2831 = -1.000000000016*t2513;
  t2835 = 1. + t2831;
  t3117 = t1360*t1325;
  t3125 = t1145*t3099;
  t3130 = t3117 + t3125;
  t2894 = t2878 + t2042;
  t2902 = -1.000000000049*t2513;
  t2904 = 1. + t2902;
  t2914 = t2813 + t2634;
  t2929 = -6.5e-11*t2513;
  t2930 = 1. + t2929;
  t2934 = t2878 + t569;
  t2947 = t2800 + t2129;
  t3003 = -0.15121*t1205;
  t3018 = -2.7726089999999997e-12*var1[16];
  t3020 = -0.2812110000084994*t960;
  t3031 = t3024 + t1143;
  t3040 = -1.8134809999999998e-6*t3031;
  t3043 = 2.8e-11*t960;
  t3044 = t3043 + t993;
  t3045 = -0.038749000006999997*t3044;
  t3050 = t3018 + t3020 + t3040 + t3045;
  t3056 = t3050*t1325;
  t3064 = 3.9608699999999997e-7*var1[16];
  t3066 = -1.1787626499999999e-16*t960;
  t3067 = t3024 + t1965;
  t3076 = -0.281211000004*t3067;
  t3080 = -1. + t783;
  t3082 = 4.e-6*t3080;
  t3084 = t3082 + t1934;
  t3085 = -0.038749000006999997*t3084;
  t3086 = t3064 + t3066 + t3076 + t3085;
  t3101 = t3086*t3099;
  t3108 = t2559*t3107;
  t3116 = t2652*t3114;
  t3134 = t2729*t3130;
  t3146 = t2802*t3107;
  t3148 = t2824*t3114;
  t3160 = t2835*t3130;
  t3169 = t3146 + t3148 + t3160;
  t3171 = -0.80315*t3169;
  t3172 = t2894*t3107;
  t3177 = t2904*t3114;
  t3179 = t2914*t3130;
  t3180 = t3172 + t3177 + t3179;
  t3181 = -0.038576*t3180;
  t3185 = t2930*t3107;
  t3187 = t2934*t3114;
  t3188 = t2947*t3130;
  t3189 = t3185 + t3187 + t3188;
  t3195 = -0.148715*t3189;
  t3011 = t2995 + t3003;
  t2996 = 0.15121*t1205;
  t2998 = t2995 + t2996;
  t3245 = t1190*t1205*t1091;
  t3246 = t1258*t1091*t1307;
  t3249 = t3245 + t3246;
  t3258 = -1.*t1258*t1190*t1091;
  t3259 = t1205*t1091*t1307;
  t3268 = t3258 + t3259;
  t3284 = t1174*t1059;
  t3285 = t1145*t3249;
  t3289 = t1360*t3268;
  t3291 = t3284 + t3285 + t3289;
  t3299 = t1669*t1174;
  t3300 = t1741*t3249;
  t3302 = t1806*t3268;
  t3304 = t3299 + t3300 + t3302;
  t3314 = t1174*t1935;
  t3315 = t1943*t3249;
  t3324 = t1987*t3268;
  t3327 = t3314 + t3315 + t3324;
  t3222 = 1.5843479999999999e-12*var1[16];
  t3224 = -0.03874900000889869*t960;
  t3225 = t3043 + t1784;
  t3231 = -0.281211000004*t3225;
  t3233 = t3082 + t1728;
  t3235 = -1.8134809999999998e-6*t3233;
  t3236 = t3222 + t3224 + t3231 + t3235;
  t3398 = Sin(var1[3]);
  t3415 = -1.*t1174*t1190*t1205*t3398;
  t3417 = -1.*t1258*t1174*t3398*t1307;
  t3418 = t3415 + t3417;
  t3420 = t1258*t1174*t1190*t3398;
  t3421 = -1.*t1174*t1205*t3398*t1307;
  t3422 = t3420 + t3421;
  t3426 = t1059*t3398*t1091;
  t3427 = t1145*t3418;
  t3429 = t1360*t3422;
  t3434 = t3426 + t3427 + t3429;
  t3439 = t1669*t3398*t1091;
  t3443 = t1741*t3418;
  t3445 = t1806*t3422;
  t3446 = t3439 + t3443 + t3445;
  t3451 = t1935*t3398*t1091;
  t3454 = t1943*t3418;
  t3455 = t1987*t3422;
  t3456 = t3451 + t3454 + t3455;
  t3511 = Cos(var1[3]);
  t3521 = t3511*t1190*t1091;
  t3524 = -1.*t3398*t1307;
  t3529 = t3521 + t3524;
  t3532 = -1.*t1190*t3398;
  t3534 = -1.*t3511*t1091*t1307;
  t3536 = t3532 + t3534;
  t3542 = -1.*t1205*t3529;
  t3548 = t1258*t3536;
  t3554 = t3542 + t3548;
  t3561 = t1258*t3529;
  t3576 = t1205*t3536;
  t3580 = t3561 + t3576;
  t3584 = -1.*t3511*t1174*t1059;
  t3585 = t1145*t3554;
  t3587 = t1360*t3580;
  t3590 = t3584 + t3585 + t3587;
  t3597 = -1.*t1669*t3511*t1174;
  t3609 = t1741*t3554;
  t3610 = t1806*t3580;
  t3613 = t3597 + t3609 + t3610;
  t3626 = -1.*t3511*t1174*t1935;
  t3628 = t1943*t3554;
  t3631 = t1987*t3580;
  t3634 = t3626 + t3628 + t3631;
  t3696 = -1.*t1190*t3398*t1091;
  t3702 = -1.*t3511*t1307;
  t3704 = t3696 + t3702;
  t3711 = t3511*t1190;
  t3714 = -1.*t3398*t1091*t1307;
  t3715 = t3711 + t3714;
  t3717 = t1205*t3704;
  t3718 = t1258*t3715;
  t3720 = t3717 + t3718;
  t3723 = t1258*t3704;
  t3727 = -1.*t1205*t3715;
  t3728 = t3723 + t3727;
  t3732 = t1987*t3720;
  t3733 = t1943*t3728;
  t3734 = t3732 + t3733;
  t3739 = t1806*t3720;
  t3740 = t1741*t3728;
  t3747 = t3739 + t3740;
  t3754 = t1360*t3720;
  t3755 = t1145*t3728;
  t3757 = t3754 + t3755;
  t3205 = -0.15121*t1258;
  t3206 = t3205 + t3003;
  t3211 = 0.15121*t1258;
  t3213 = t3211 + t3003;
  t3809 = t1190*t3398*t1091;
  t3812 = t3511*t1307;
  t3813 = t3809 + t3812;
  t3818 = -1.*t1205*t3813;
  t3821 = t3818 + t3718;
  t3825 = -1.*t1258*t3813;
  t3827 = t3825 + t3727;
  t3831 = t1987*t3821;
  t3833 = t1943*t3827;
  t3834 = t3831 + t3833;
  t3840 = t1806*t3821;
  t3844 = t1741*t3827;
  t3846 = t3840 + t3844;
  t3852 = t1360*t3821;
  t3853 = t1145*t3827;
  t3858 = t3852 + t3853;
  t327 = t50 + t324;
  t460 = -0.038575000014*t327;
  t601 = t563 + t569;
  t625 = -3.367757e-6*t601;
  t633 = -0.5031510000160505*t197;
  t769 = -1.9784030000000015e-12 + t460 + t625 + t633;
  t1470 = t1442 + t1462;
  t1510 = -3.367757e-6*t1470;
  t1521 = t1515 + t324;
  t1523 = -0.5031510000080001*t1521;
  t1549 = -0.03857500001589017*t197;
  t1576 = 1.1305160000000008e-12 + t1510 + t1523 + t1549;
  t3907 = t1258*t3813;
  t3912 = t1205*t3715;
  t3914 = t3907 + t3912;
  t1873 = t1862 + t1462;
  t1882 = -0.038575000014*t1873;
  t1899 = t1895 + t569;
  t1904 = -0.5031510000080001*t1899;
  t1916 = -2.18904205e-16*t197;
  t1928 = 2.826290000000002e-7 + t1882 + t1904 + t1916;
  t3902 = -1.*t1174*t1059*t3398;
  t3905 = t1145*t3821;
  t3917 = t1360*t3914;
  t3918 = t3902 + t3905 + t3917;
  t2025 = t50 + t2023;
  t3927 = -1.*t1669*t1174*t3398;
  t3928 = t1741*t3821;
  t3935 = t1806*t3914;
  t3941 = t3927 + t3928 + t3935;
  t2045 = t563 + t2042;
  t3947 = -1.*t1174*t1935*t3398;
  t3950 = t1943*t3821;
  t3953 = t1987*t3914;
  t3957 = t3947 + t3950 + t3953;
  t2073 = t1515 + t2023;
  t2157 = t1442 + t2129;
  t2185 = t1895 + t2042;
  t2204 = t1862 + t2129;
  t2292 = t2287 + t1143;
  t2315 = -1.8134809999999998e-6*t2292;
  t2322 = t885 + t2317;
  t2358 = -0.281211000004*t2322;
  t2373 = -0.03874900000889869*t993;
  t2379 = 1.5843479999999999e-12 + t2315 + t2358 + t2373;
  t2383 = t2381 + t1143;
  t2403 = -0.038749000006999997*t2383;
  t2431 = t2408 + t1934;
  t2439 = -0.281211000004*t2431;
  t2441 = -1.1787626499999999e-16*t993;
  t2444 = 3.9608699999999997e-7 + t2403 + t2439 + t2441;
  t2466 = t783 + t2317;
  t2469 = -0.038749000006999997*t2466;
  t2475 = t2471 + t1934;
  t2488 = -1.8134809999999998e-6*t2475;
  t2491 = -0.2812110000084994*t993;
  t2497 = -2.7726089999999997e-12 + t2469 + t2488 + t2491;
  t3988 = -1.*t1174*t2564*t3398;
  t3990 = -6.5e-11*t993*t3821;
  t3991 = t2599*t3914;
  t3992 = t3988 + t3990 + t3991;
  t3997 = 1.000000000049*t1174*t993*t3398;
  t3998 = t2656*t3821;
  t4000 = t2664*t3914;
  t4001 = t3997 + t3998 + t4000;
  t4003 = -1.*t1174*t2734*t3398;
  t4005 = t2757*t3821;
  t4006 = -1.000000000016*t993*t3914;
  t4007 = t4003 + t4005 + t4006;
  t4057 = t3511*t1174*t1190*t1205;
  t4064 = t1258*t3511*t1174*t1307;
  t4065 = t4057 + t4064;
  t4068 = -1.*t1258*t3511*t1174*t1190;
  t4070 = t3511*t1174*t1205*t1307;
  t4071 = t4068 + t4070;
  t4074 = -1.*t3511*t1059*t1091;
  t4077 = t1145*t4065;
  t4083 = t1360*t4071;
  t4085 = t4074 + t4077 + t4083;
  t4087 = -1.*t1669*t3511*t1091;
  t4088 = t1741*t4065;
  t4091 = t1806*t4071;
  t4093 = t4087 + t4088 + t4091;
  t4097 = -1.*t3511*t1935*t1091;
  t4099 = t1943*t4065;
  t4100 = t1987*t4071;
  t4103 = t4097 + t4099 + t4100;
  t4142 = t1190*t3398;
  t4146 = t3511*t1091*t1307;
  t4151 = t4142 + t4146;
  t4159 = t1205*t3529;
  t4161 = t1258*t4151;
  t4167 = t4159 + t4161;
  t4170 = -1.*t1205*t4151;
  t4171 = t3561 + t4170;
  t4176 = t1987*t4167;
  t4177 = t1943*t4171;
  t4179 = t4176 + t4177;
  t4185 = t1806*t4167;
  t4186 = t1741*t4171;
  t4188 = t4185 + t4186;
  t4195 = t1360*t4167;
  t4198 = t1145*t4171;
  t4200 = t4195 + t4198;
  t4236 = -1.*t3511*t1190*t1091;
  t4237 = t3398*t1307;
  t4238 = t4236 + t4237;
  t4243 = -1.*t1205*t4238;
  t4244 = t4243 + t4161;
  t4249 = -1.*t1258*t4238;
  t4251 = t4249 + t4170;
  t4254 = t1987*t4244;
  t4256 = t1943*t4251;
  t4257 = t4254 + t4256;
  t4260 = t1806*t4244;
  t4261 = t1741*t4251;
  t4262 = t4260 + t4261;
  t4265 = t1360*t4244;
  t4266 = t1145*t4251;
  t4267 = t4265 + t4266;
  t4324 = t1258*t4238;
  t4328 = t1205*t4151;
  t4329 = t4324 + t4328;
  t4322 = t3511*t1174*t1059;
  t4323 = t1145*t4244;
  t4331 = t1360*t4329;
  t4332 = t4322 + t4323 + t4331;
  t4335 = t1669*t3511*t1174;
  t4336 = t1741*t4244;
  t4337 = t1806*t4329;
  t4338 = t4335 + t4336 + t4337;
  t4343 = t3511*t1174*t1935;
  t4345 = t1943*t4244;
  t4346 = t1987*t4329;
  t4349 = t4343 + t4345 + t4346;
  t4402 = t3511*t1174*t2564;
  t4405 = -6.5e-11*t993*t4244;
  t4406 = t2599*t4329;
  t4408 = t4402 + t4405 + t4406;
  t4414 = -1.000000000049*t3511*t1174*t993;
  t4415 = t2656*t4244;
  t4417 = t2664*t4329;
  t4420 = t4414 + t4415 + t4417;
  t4425 = t3511*t1174*t2734;
  t4426 = t2757*t4244;
  t4437 = -1.000000000016*t993*t4329;
  t4440 = t4425 + t4426 + t4437;
  p_output1[0]=var2[0] + (t1091*t1307*t2998 - 1.*t1091*t1190*t3011 + t1174*t3236 + t3086*t3249 + t3050*t3268 + t2729*t3291 + t2652*t3304 + t2559*t3327 - 0.80315*(t2835*t3291 + t2824*t3304 + t2802*t3327) - 0.038576*(t2914*t3291 + t2904*t3304 + t2894*t3327) - 0.148715*(t2947*t3291 + t2934*t3304 + t2930*t3327))*var2[4] + (-1.*t1174*t1190*t2998 - 1.*t1174*t1307*t3011 + t3056 + t3101 + t3108 + t3116 + t3134 + t3171 + t3181 + t3195)*var2[5] + (t3056 + t3101 + t3108 + t3116 + t3134 + t3171 + t3181 + t3195 + t1174*t1190*t3206 - 1.*t1174*t1307*t3213)*var2[15] + (t1091*t2379 + t1325*t2444 + t1398*t2497 + t2559*t2602 + t2652*t2683 + t2729*t2784 - 0.80315*(t2602*t2802 + t2683*t2824 + t2784*t2835) - 0.038576*(t2602*t2894 + t2683*t2904 + t2784*t2914) - 0.148715*(t2602*t2930 + t2683*t2934 + t2784*t2947))*var2[16] + (t1576*t1854 + t1928*t2002 - 0.80315*(-1.000000000016*t1421*t197 + t1854*t2025 + t2002*t2045) - 0.038576*(-1.000000000049*t1854*t197 + t1421*t2073 + t2002*t2157) - 0.148715*(-6.5e-11*t197*t2002 + t1421*t2185 + t1854*t2204) + t1421*t769)*var2[17];
  p_output1[1]=var2[1] + (-1.*t1174*t3236*t3511 + t3011*t3529 + t2998*t3536 + t3086*t3554 + t3050*t3580 + t2729*t3590 + t2652*t3613 + t2559*t3634 - 0.80315*(t2835*t3590 + t2824*t3613 + t2802*t3634) - 0.038576*(t2914*t3590 + t2904*t3613 + t2894*t3634) - 0.148715*(t2947*t3590 + t2934*t3613 + t2930*t3634))*var2[3] + (-1.*t1174*t1307*t2998*t3398 + t1174*t1190*t3011*t3398 + t1091*t3236*t3398 + t3086*t3418 + t3050*t3422 + t2729*t3434 + t2652*t3446 + t2559*t3456 - 0.80315*(t2835*t3434 + t2824*t3446 + t2802*t3456) - 0.038576*(t2914*t3434 + t2904*t3446 + t2894*t3456) - 0.148715*(t2947*t3434 + t2934*t3446 + t2930*t3456))*var2[4] + (t2998*t3704 + t3011*t3715 + t3050*t3720 + t3086*t3728 + t2559*t3734 + t2652*t3747 + t2729*t3757 - 0.80315*(t2802*t3734 + t2824*t3747 + t2835*t3757) - 0.038576*(t2894*t3734 + t2904*t3747 + t2914*t3757) - 0.148715*(t2930*t3734 + t2934*t3747 + t2947*t3757))*var2[5] + (t3213*t3715 + t3206*t3813 + t3050*t3821 + t3086*t3827 + t2559*t3834 + t2652*t3846 + t2729*t3858 - 0.80315*(t2802*t3834 + t2824*t3846 + t2835*t3858) - 0.038576*(t2894*t3834 + t2904*t3846 + t2914*t3858) - 0.148715*(t2930*t3834 + t2934*t3846 + t2947*t3858))*var2[15] + (-1.*t1174*t2379*t3398 + t2444*t3821 + t2497*t3914 + t2559*t3992 + t2652*t4001 + t2729*t4007 - 0.80315*(t2802*t3992 + t2824*t4001 + t2835*t4007) - 0.038576*(t2894*t3992 + t2904*t4001 + t2914*t4007) - 0.148715*(t2930*t3992 + t2934*t4001 + t2947*t4007))*var2[16] + (t1576*t3941 + t1928*t3957 - 0.148715*(t2185*t3918 + t2204*t3941 - 6.5e-11*t197*t3957) - 0.80315*(-1.000000000016*t197*t3918 + t2025*t3941 + t2045*t3957) - 0.038576*(t2073*t3918 - 1.000000000049*t197*t3941 + t2157*t3957) + t3918*t769)*var2[17];
  p_output1[2]=var2[2] + (-1.*t1174*t3236*t3398 + t2998*t3715 + t3011*t3813 + t3086*t3821 + t3050*t3914 + t2729*t3918 + t2652*t3941 + t2559*t3957 - 0.80315*(t2835*t3918 + t2824*t3941 + t2802*t3957) - 0.038576*(t2914*t3918 + t2904*t3941 + t2894*t3957) - 0.148715*(t2947*t3918 + t2934*t3941 + t2930*t3957))*var2[3] + (t1174*t1307*t2998*t3511 - 1.*t1174*t1190*t3011*t3511 - 1.*t1091*t3236*t3511 + t3086*t4065 + t3050*t4071 + t2729*t4085 + t2652*t4093 + t2559*t4103 - 0.80315*(t2835*t4085 + t2824*t4093 + t2802*t4103) - 0.038576*(t2914*t4085 + t2904*t4093 + t2894*t4103) - 0.148715*(t2947*t4085 + t2934*t4093 + t2930*t4103))*var2[4] + (t2998*t3529 + t3011*t4151 + t3050*t4167 + t3086*t4171 + t2559*t4179 + t2652*t4188 + t2729*t4200 - 0.80315*(t2802*t4179 + t2824*t4188 + t2835*t4200) - 0.038576*(t2894*t4179 + t2904*t4188 + t2914*t4200) - 0.148715*(t2930*t4179 + t2934*t4188 + t2947*t4200))*var2[5] + (t3213*t4151 + t3206*t4238 + t3050*t4244 + t3086*t4251 + t2559*t4257 + t2652*t4262 + t2729*t4267 - 0.80315*(t2802*t4257 + t2824*t4262 + t2835*t4267) - 0.038576*(t2894*t4257 + t2904*t4262 + t2914*t4267) - 0.148715*(t2930*t4257 + t2934*t4262 + t2947*t4267))*var2[15] + (t1174*t2379*t3511 + t2444*t4244 + t2497*t4329 + t2559*t4408 + t2652*t4420 + t2729*t4440 - 0.80315*(t2802*t4408 + t2824*t4420 + t2835*t4440) - 0.038576*(t2894*t4408 + t2904*t4420 + t2914*t4440) - 0.148715*(t2930*t4408 + t2934*t4420 + t2947*t4440))*var2[16] + (t1576*t4338 + t1928*t4349 - 0.148715*(t2185*t4332 + t2204*t4338 - 6.5e-11*t197*t4349) - 0.80315*(-1.000000000016*t197*t4332 + t2025*t4338 + t2045*t4349) - 0.038576*(t2073*t4332 - 1.000000000049*t197*t4338 + t2157*t4349) + t4332*t769)*var2[17];
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
