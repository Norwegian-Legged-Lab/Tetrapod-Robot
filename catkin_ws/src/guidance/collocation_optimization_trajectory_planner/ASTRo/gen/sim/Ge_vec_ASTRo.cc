/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:37:08 GMT+02:00
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
  double t39;
  double t67;
  double t1705;
  double t1721;
  double t1726;
  double t1937;
  double t1739;
  double t1742;
  double t1743;
  double t1950;
  double t1923;
  double t1954;
  double t1959;
  double t1963;
  double t1965;
  double t2111;
  double t2164;
  double t2168;
  double t2170;
  double t2180;
  double t2183;
  double t2396;
  double t2405;
  double t2406;
  double t2408;
  double t2409;
  double t1719;
  double t1736;
  double t1960;
  double t1961;
  double t1962;
  double t2115;
  double t2119;
  double t2124;
  double t2125;
  double t2130;
  double t2152;
  double t2159;
  double t2435;
  double t2436;
  double t2441;
  double t2176;
  double t2184;
  double t2188;
  double t2196;
  double t2204;
  double t2363;
  double t2364;
  double t2372;
  double t2373;
  double t2379;
  double t2381;
  double t2382;
  double t2454;
  double t2458;
  double t2410;
  double t2411;
  double t2412;
  double t2413;
  double t2414;
  double t2415;
  double t2419;
  double t2420;
  double t2421;
  double t2423;
  double t2424;
  double t2425;
  double t2635;
  double t2720;
  double t2437;
  double t2126;
  double t2442;
  double t2444;
  double t2445;
  double t2446;
  double t2447;
  double t2449;
  double t3015;
  double t3046;
  double t3048;
  double t3049;
  double t3052;
  double t2455;
  double t2374;
  double t2459;
  double t2556;
  double t2572;
  double t2575;
  double t2580;
  double t2594;
  double t3114;
  double t3121;
  double t3122;
  double t3123;
  double t3128;
  double t2693;
  double t2422;
  double t2786;
  double t2853;
  double t2858;
  double t2868;
  double t2964;
  double t3004;
  double t3142;
  double t3158;
  double t3159;
  double t3161;
  double t3162;
  double t3198;
  double t3201;
  double t3206;
  double t3208;
  double t3212;
  double t3216;
  double t3220;
  double t3221;
  double t3222;
  double t3223;
  double t3224;
  double t3225;
  double t3226;
  double t3227;
  double t3229;
  double t3230;
  double t3233;
  double t3243;
  double t3248;
  double t3228;
  double t3245;
  double t3246;
  double t3247;
  double t3252;
  double t3254;
  double t3256;
  double t3257;
  double t3261;
  double t3266;
  double t3270;
  double t3271;
  double t3277;
  double t3287;
  double t3291;
  double t3292;
  double t3293;
  double t3298;
  double t3300;
  double t3301;
  double t3317;
  double t3329;
  double t3330;
  double t3331;
  double t3339;
  double t3340;
  double t3342;
  double t3354;
  double t3355;
  double t3386;
  double t3387;
  double t3388;
  double t3399;
  double t3403;
  double t3405;
  double t3406;
  double t3410;
  double t3414;
  double t3299;
  double t3416;
  double t3028;
  double t3034;
  double t3417;
  double t3419;
  double t3420;
  double t3457;
  double t3458;
  double t3463;
  double t3426;
  double t3341;
  double t3428;
  double t3115;
  double t3118;
  double t3429;
  double t3430;
  double t3431;
  double t3477;
  double t3478;
  double t3479;
  double t3438;
  double t3404;
  double t3440;
  double t3153;
  double t3154;
  double t3443;
  double t3444;
  double t3445;
  double t3493;
  double t3494;
  double t3498;
  double t3516;
  double t3517;
  double t3521;
  double t3522;
  double t3523;
  double t3525;
  double t3526;
  double t3527;
  double t3524;
  double t3532;
  double t3534;
  double t3262;
  double t3263;
  double t3535;
  double t3536;
  double t3540;
  double t3547;
  double t3548;
  double t3551;
  double t3573;
  double t3578;
  double t3579;
  double t3582;
  double t3583;
  double t3584;
  double t3580;
  double t3585;
  double t3589;
  double t3620;
  double t3624;
  double t3651;
  double t3667;
  double t3668;
  double t3680;
  double t3681;
  double t3682;
  double t3678;
  double t3679;
  double t3686;
  double t3687;
  double t3689;
  double t3706;
  double t3707;
  double t3708;
  double t3704;
  double t3705;
  double t3715;
  double t3717;
  double t3723;
  double t3672;
  double t3669;
  double t3683;
  double t3701;
  double t3709;
  double t3729;
  double t3832;
  double t3841;
  double t3865;
  double t3866;
  double t3867;
  double t3869;
  double t3870;
  double t3871;
  double t3877;
  double t3872;
  double t3907;
  double t3908;
  double t3909;
  double t3901;
  double t3902;
  double t3903;
  double t3914;
  double t3915;
  double t3916;
  double t3926;
  double t3930;
  double t3944;
  double t3953;
  double t3962;
  double t3955;
  double t4053;
  double t4081;
  double t4087;
  double t4043;
  double t4112;
  double t4117;
  double t4122;
  double t4126;
  double t4137;
  double t4141;
  double t4142;
  double t4187;
  double t4191;
  double t4192;
  double t4207;
  double t4210;
  double t4212;
  double t4213;
  double t4215;
  double t4217;
  double t4218;
  double t4227;
  double t4229;
  double t4231;
  double t4237;
  double t4232;
  double t4260;
  double t4261;
  double t4262;
  double t4259;
  double t4263;
  double t4264;
  double t4265;
  double t4266;
  double t4270;
  double t4271;
  double t4272;
  double t4282;
  double t4283;
  double t4284;
  double t4297;
  double t4303;
  double t4304;
  double t4298;
  double t4299;
  double t4300;
  double t4301;
  double t4302;
  double t4310;
  double t4311;
  double t4305;
  double t4320;
  double t4364;
  double t4365;
  double t4366;
  double t4363;
  double t4374;
  double t4375;
  double t4376;
  double t4377;
  double t4385;
  double t4386;
  double t4387;
  double t4398;
  double t4399;
  double t4401;
  double t4420;
  double t4421;
  double t4412;
  double t4413;
  double t4414;
  double t4415;
  double t4418;
  double t4419;
  double t4427;
  double t4429;
  double t4424;
  double t4443;
  double t4459;
  double t4460;
  double t4461;
  double t4458;
  double t4463;
  double t4464;
  double t4465;
  double t4468;
  double t4476;
  double t4477;
  double t4482;
  double t4497;
  double t4498;
  double t4499;
  t39 = Cos(var1[9]);
  t67 = -1.*t39;
  t1705 = 1. + t67;
  t1721 = Sin(var1[9]);
  t1726 = 0.15121*t1721;
  t1937 = Cos(var1[3]);
  t1739 = Cos(var1[5]);
  t1742 = Sin(var1[3]);
  t1743 = Sin(var1[4]);
  t1950 = Sin(var1[5]);
  t1923 = t1739*t1742*t1743;
  t1954 = t1937*t1950;
  t1959 = t1923 + t1954;
  t1963 = t1937*t1739;
  t1965 = -1.*t1742*t1743*t1950;
  t2111 = t1963 + t1965;
  t2164 = Cos(var1[12]);
  t2168 = -1.*t2164;
  t2170 = 1. + t2168;
  t2180 = Sin(var1[12]);
  t2183 = -0.15121*t2180;
  t2396 = Cos(var1[15]);
  t2405 = -1.*t2396;
  t2406 = 1. + t2405;
  t2408 = -0.15121*t2406;
  t2409 = Sin(var1[15]);
  t1719 = -0.15121*t1705;
  t1736 = t1719 + t1726;
  t1960 = t1736*t1959;
  t1961 = 0.15121*t1705;
  t1962 = t1961 + t1726;
  t2115 = t1962*t2111;
  t2119 = -1.*t1721*t1959;
  t2124 = t39*t2111;
  t2125 = t2119 + t2124;
  t2130 = t39*t1959;
  t2152 = t1721*t2111;
  t2159 = t2130 + t2152;
  t2435 = Cos(var1[4]);
  t2436 = Sin(var1[10]);
  t2441 = Cos(var1[10]);
  t2176 = 0.15121*t2170;
  t2184 = t2176 + t2183;
  t2188 = t2184*t1959;
  t2196 = -0.15121*t2170;
  t2204 = t2196 + t2183;
  t2363 = t2204*t2111;
  t2364 = -1.*t2180*t1959;
  t2372 = t2164*t2111;
  t2373 = t2364 + t2372;
  t2379 = t2164*t1959;
  t2381 = t2180*t2111;
  t2382 = t2379 + t2381;
  t2454 = Sin(var1[13]);
  t2458 = Cos(var1[13]);
  t2410 = -0.15121*t2409;
  t2411 = t2408 + t2410;
  t2412 = t2411*t1959;
  t2413 = 0.15121*t2409;
  t2414 = t2408 + t2413;
  t2415 = t2414*t2111;
  t2419 = -1.*t2409*t1959;
  t2420 = t2396*t2111;
  t2421 = t2419 + t2420;
  t2423 = t2396*t1959;
  t2424 = t2409*t2111;
  t2425 = t2423 + t2424;
  t2635 = Sin(var1[16]);
  t2720 = Cos(var1[16]);
  t2437 = -0.28121*t2435*t2436*t1742;
  t2126 = 0.15121*t2125;
  t2442 = -1.*t2441;
  t2444 = 1. + t2442;
  t2445 = -0.28121*t2444*t2159;
  t2446 = -1.*t2435*t2436*t1742;
  t2447 = t2441*t2159;
  t2449 = t2446 + t2447;
  t3015 = Cos(var1[11]);
  t3046 = Sin(var1[11]);
  t3048 = -1.*t2441*t2435*t1742;
  t3049 = -1.*t2436*t2159;
  t3052 = t3048 + t3049;
  t2455 = -0.28121*t2435*t2454*t1742;
  t2374 = -0.15121*t2373;
  t2459 = -1.*t2458;
  t2556 = 1. + t2459;
  t2572 = 0.28121*t2556*t2382;
  t2575 = t2435*t2454*t1742;
  t2580 = t2458*t2382;
  t2594 = t2575 + t2580;
  t3114 = Cos(var1[14]);
  t3121 = Sin(var1[14]);
  t3122 = -1.*t2458*t2435*t1742;
  t3123 = t2454*t2382;
  t3128 = t3122 + t3123;
  t2693 = -0.28121*t2435*t2635*t1742;
  t2422 = -0.15121*t2421;
  t2786 = -1.*t2720;
  t2853 = 1. + t2786;
  t2858 = -0.28121*t2853*t2425;
  t2868 = -1.*t2435*t2635*t1742;
  t2964 = t2720*t2425;
  t3004 = t2868 + t2964;
  t3142 = Cos(var1[17]);
  t3158 = Sin(var1[17]);
  t3159 = -1.*t2720*t2435*t1742;
  t3161 = -1.*t2635*t2425;
  t3162 = t3159 + t3161;
  t3198 = Cos(var1[6]);
  t3201 = -1.*t3198;
  t3206 = 1. + t3201;
  t3208 = 0.15121*t3206;
  t3212 = Sin(var1[6]);
  t3216 = -0.15121*t3212;
  t3220 = t3208 + t3216;
  t3221 = t2111*t3220;
  t3222 = 0.15121*t3212;
  t3223 = t3208 + t3222;
  t3224 = t1959*t3223;
  t3225 = t3198*t2111;
  t3226 = -1.*t1959*t3212;
  t3227 = t3225 + t3226;
  t3229 = t3198*t1959;
  t3230 = t2111*t3212;
  t3233 = t3229 + t3230;
  t3243 = Cos(var1[7]);
  t3248 = Sin(var1[7]);
  t3228 = 0.15121*t3227;
  t3245 = -1.*t3243;
  t3246 = 1. + t3245;
  t3247 = 0.28121*t3246*t3233;
  t3252 = -0.28121*t2435*t1742*t3248;
  t3254 = t3243*t3233;
  t3256 = t2435*t1742*t3248;
  t3257 = t3254 + t3256;
  t3261 = Cos(var1[8]);
  t3266 = -1.*t2435*t3243*t1742;
  t3270 = t3233*t3248;
  t3271 = t3266 + t3270;
  t3277 = Sin(var1[8]);
  t3287 = -1.*t1937*t2435*t1739*t1736;
  t3291 = t1937*t2435*t1962*t1950;
  t3292 = t1937*t2435*t1739*t1721;
  t3293 = t39*t1937*t2435*t1950;
  t3298 = t3292 + t3293;
  t3300 = -1.*t39*t1937*t2435*t1739;
  t3301 = t1937*t2435*t1721*t1950;
  t3317 = t3300 + t3301;
  t3329 = -1.*t1937*t2435*t1739*t2184;
  t3330 = t1937*t2435*t2204*t1950;
  t3331 = t1937*t2435*t1739*t2180;
  t3339 = t2164*t1937*t2435*t1950;
  t3340 = t3331 + t3339;
  t3342 = -1.*t2164*t1937*t2435*t1739;
  t3354 = t1937*t2435*t2180*t1950;
  t3355 = t3342 + t3354;
  t3386 = -1.*t1937*t2435*t1739*t2411;
  t3387 = t1937*t2435*t2414*t1950;
  t3388 = t1937*t2435*t1739*t2409;
  t3399 = t2396*t1937*t2435*t1950;
  t3403 = t3388 + t3399;
  t3405 = -1.*t2396*t1937*t2435*t1739;
  t3406 = t1937*t2435*t2409*t1950;
  t3410 = t3405 + t3406;
  t3414 = -0.28121*t1937*t2436*t1743;
  t3299 = 0.15121*t3298;
  t3416 = -0.28121*t2444*t3317;
  t3028 = -1.*t3015;
  t3034 = 1. + t3028;
  t3417 = -1.*t1937*t2436*t1743;
  t3419 = t2441*t3317;
  t3420 = t3417 + t3419;
  t3457 = -1.*t2441*t1937*t1743;
  t3458 = -1.*t2436*t3317;
  t3463 = t3457 + t3458;
  t3426 = -0.28121*t1937*t2454*t1743;
  t3341 = -0.15121*t3340;
  t3428 = 0.28121*t2556*t3355;
  t3115 = -1.*t3114;
  t3118 = 1. + t3115;
  t3429 = t1937*t2454*t1743;
  t3430 = t2458*t3355;
  t3431 = t3429 + t3430;
  t3477 = -1.*t2458*t1937*t1743;
  t3478 = t2454*t3355;
  t3479 = t3477 + t3478;
  t3438 = -0.28121*t1937*t2635*t1743;
  t3404 = -0.15121*t3403;
  t3440 = -0.28121*t2853*t3410;
  t3153 = -1.*t3142;
  t3154 = 1. + t3153;
  t3443 = -1.*t1937*t2635*t1743;
  t3444 = t2720*t3410;
  t3445 = t3443 + t3444;
  t3493 = -1.*t2720*t1937*t1743;
  t3494 = -1.*t2635*t3410;
  t3498 = t3493 + t3494;
  t3516 = t1937*t2435*t1950*t3220;
  t3517 = -1.*t1937*t2435*t1739*t3223;
  t3521 = t1937*t2435*t3198*t1950;
  t3522 = t1937*t2435*t1739*t3212;
  t3523 = t3521 + t3522;
  t3525 = -1.*t1937*t2435*t1739*t3198;
  t3526 = t1937*t2435*t1950*t3212;
  t3527 = t3525 + t3526;
  t3524 = 0.15121*t3523;
  t3532 = 0.28121*t3246*t3527;
  t3534 = -0.28121*t1937*t1743*t3248;
  t3262 = -1.*t3261;
  t3263 = 1. + t3262;
  t3535 = t3243*t3527;
  t3536 = t1937*t1743*t3248;
  t3540 = t3535 + t3536;
  t3547 = -1.*t1937*t3243*t1743;
  t3548 = t3527*t3248;
  t3551 = t3547 + t3548;
  t3573 = t1937*t1739*t1743;
  t3578 = -1.*t1742*t1950;
  t3579 = t3573 + t3578;
  t3582 = t1739*t1742;
  t3583 = t1937*t1743*t1950;
  t3584 = t3582 + t3583;
  t3580 = t1962*t3579;
  t3585 = t1736*t3584;
  t3589 = t1721*t3579;
  t3620 = t39*t3584;
  t3624 = t3589 + t3620;
  t3651 = t39*t3579;
  t3667 = -1.*t1721*t3584;
  t3668 = t3651 + t3667;
  t3680 = t2180*t3579;
  t3681 = t2164*t3584;
  t3682 = t3680 + t3681;
  t3678 = t2204*t3579;
  t3679 = t2184*t3584;
  t3686 = t2164*t3579;
  t3687 = -1.*t2180*t3584;
  t3689 = t3686 + t3687;
  t3706 = t2409*t3579;
  t3707 = t2396*t3584;
  t3708 = t3706 + t3707;
  t3704 = t2414*t3579;
  t3705 = t2411*t3584;
  t3715 = t2396*t3579;
  t3717 = -1.*t2409*t3584;
  t3723 = t3715 + t3717;
  t3672 = -0.28121*t2444*t3624;
  t3669 = 0.15121*t3668;
  t3683 = 0.28121*t2556*t3682;
  t3701 = -0.15121*t3689;
  t3709 = -0.28121*t2853*t3708;
  t3729 = -0.15121*t3723;
  t3832 = t3579*t3220;
  t3841 = t3584*t3223;
  t3865 = t3198*t3584;
  t3866 = t3579*t3212;
  t3867 = t3865 + t3866;
  t3869 = t3198*t3579;
  t3870 = -1.*t3584*t3212;
  t3871 = t3869 + t3870;
  t3877 = 0.28121*t3246*t3867;
  t3872 = 0.15121*t3871;
  t3907 = -1.*t1937*t1739*t1743;
  t3908 = t1742*t1950;
  t3909 = t3907 + t3908;
  t3901 = -0.15121*t3198;
  t3902 = t3901 + t3222;
  t3903 = t3584*t3902;
  t3914 = 0.15121*t3198;
  t3915 = t3914 + t3222;
  t3916 = t3909*t3915;
  t3926 = -1.*t3909*t3212;
  t3930 = t3865 + t3926;
  t3944 = -1.*t3198*t3909;
  t3953 = t3944 + t3870;
  t3962 = 0.28121*t3246*t3930;
  t3955 = 0.15121*t3953;
  t4053 = t3198*t3909;
  t4081 = t3584*t3212;
  t4087 = t4053 + t4081;
  t4043 = 0.28121*t1937*t2435*t3243;
  t4112 = 0.28121*t4087*t3248;
  t4117 = -1.*t1937*t2435*t3243;
  t4122 = -1.*t4087*t3248;
  t4126 = t4117 + t4122;
  t4137 = t3243*t4087;
  t4141 = -1.*t1937*t2435*t3248;
  t4142 = t4137 + t4141;
  t4187 = t1937*t2435*t3243;
  t4191 = t4087*t3248;
  t4192 = t4187 + t4191;
  t4207 = 0.15121*t39;
  t4210 = -0.15121*t1721;
  t4212 = t4207 + t4210;
  t4213 = t4212*t3909;
  t4215 = t4207 + t1726;
  t4217 = t4215*t3584;
  t4218 = -1.*t1721*t3909;
  t4227 = t4218 + t3620;
  t4229 = -1.*t39*t3909;
  t4231 = t4229 + t3667;
  t4237 = -0.28121*t2444*t4227;
  t4232 = 0.15121*t4231;
  t4260 = t39*t3909;
  t4261 = t1721*t3584;
  t4262 = t4260 + t4261;
  t4259 = 0.28121*t2441*t1937*t2435;
  t4263 = -0.28121*t2436*t4262;
  t4264 = t2441*t1937*t2435;
  t4265 = -1.*t2436*t4262;
  t4266 = t4264 + t4265;
  t4270 = -1.*t1937*t2435*t2436;
  t4271 = -1.*t2441*t4262;
  t4272 = t4270 + t4271;
  t4282 = t1937*t2435*t2436;
  t4283 = t2441*t4262;
  t4284 = t4282 + t4283;
  t4297 = -0.15121*t2164;
  t4303 = -1.*t2180*t3909;
  t4304 = t4303 + t3681;
  t4298 = 0.15121*t2180;
  t4299 = t4297 + t4298;
  t4300 = t4299*t3909;
  t4301 = t4297 + t2183;
  t4302 = t4301*t3584;
  t4310 = -1.*t2164*t3909;
  t4311 = t4310 + t3687;
  t4305 = 0.28121*t2556*t4304;
  t4320 = -0.15121*t4311;
  t4364 = t2164*t3909;
  t4365 = t2180*t3584;
  t4366 = t4364 + t4365;
  t4363 = 0.28121*t2458*t1937*t2435;
  t4374 = 0.28121*t2454*t4366;
  t4375 = -1.*t2458*t1937*t2435;
  t4376 = -1.*t2454*t4366;
  t4377 = t4375 + t4376;
  t4385 = -1.*t1937*t2435*t2454;
  t4386 = t2458*t4366;
  t4387 = t4385 + t4386;
  t4398 = t2458*t1937*t2435;
  t4399 = t2454*t4366;
  t4401 = t4398 + t4399;
  t4420 = -1.*t2409*t3909;
  t4421 = t4420 + t3707;
  t4412 = -0.15121*t2396;
  t4413 = t4412 + t2410;
  t4414 = t4413*t3909;
  t4415 = 0.15121*t2396;
  t4418 = t4415 + t2410;
  t4419 = t4418*t3584;
  t4427 = -1.*t2396*t3909;
  t4429 = t4427 + t3717;
  t4424 = -0.28121*t2853*t4421;
  t4443 = -0.15121*t4429;
  t4459 = t2396*t3909;
  t4460 = t2409*t3584;
  t4461 = t4459 + t4460;
  t4458 = 0.28121*t2720*t1937*t2435;
  t4463 = -0.28121*t2635*t4461;
  t4464 = t2720*t1937*t2435;
  t4465 = -1.*t2635*t4461;
  t4468 = t4464 + t4465;
  t4476 = -1.*t1937*t2435*t2635;
  t4477 = -1.*t2720*t4461;
  t4482 = t4476 + t4477;
  t4497 = t1937*t2435*t2635;
  t4498 = t2720*t4461;
  t4499 = t4497 + t4498;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=-210.915;
  p_output1[3]=-11.5758*(t1960 + t2115 + t2126 - 0.15121*t2159) - 11.5758*(t2188 + t2363 + t2374 + 0.15121*t2382) - 11.5758*(t2412 + t2415 + t2422 - 0.15121*t2425) - 13.6359*(t1960 + t2115 + 0.18121*t2125 + t2437 + t2445 - 0.28121*t2449) - 13.6359*(t2188 + t2363 - 0.18121*t2373 + t2455 + t2572 + 0.28121*t2594) - 13.6359*(t2412 + t2415 - 0.18121*t2421 + t2693 + t2858 - 0.28121*t3004) - 2.7468000000000004*(t1960 + t2115 + t2126 + t2437 + t2445 - 0.50321*t2449*t3034 - 0.50321*t3046*t3052 - 0.50321*(t2449*t3015 - 1.*t3046*t3052)) - 2.7468000000000004*(t2188 + t2363 + t2374 + t2455 + t2572 + 0.50321*t2594*t3118 - 0.50321*t3121*t3128 + 0.50321*(t2594*t3114 + t3121*t3128)) - 2.7468000000000004*(t2412 + t2415 + t2422 + t2693 + t2858 - 0.50321*t3004*t3154 - 0.50321*t3158*t3162 - 0.50321*(t3004*t3142 - 1.*t3158*t3162)) - 11.5758*(t3221 + t3224 + t3228 + 0.15121*t3233) - 13.6359*(t3221 + t3224 + 0.18121*t3227 + t3247 + t3252 + 0.28121*t3257) - 2.7468000000000004*(t3221 + t3224 + t3228 + t3247 + t3252 + 0.50321*t3257*t3263 - 0.50321*t3271*t3277 + 0.50321*(t3257*t3261 + t3271*t3277));
  p_output1[4]=-11.5758*(t3287 + t3291 + t3299 - 0.15121*t3317) - 11.5758*(t3329 + t3330 + t3341 + 0.15121*t3355) - 11.5758*(t3386 + t3387 + t3404 - 0.15121*t3410) - 13.6359*(t3287 + t3291 + 0.18121*t3298 + t3414 + t3416 - 0.28121*t3420) - 13.6359*(t3329 + t3330 - 0.18121*t3340 + t3426 + t3428 + 0.28121*t3431) - 13.6359*(t3386 + t3387 - 0.18121*t3403 + t3438 + t3440 - 0.28121*t3445) - 2.7468000000000004*(t3287 + t3291 + t3299 + t3414 + t3416 - 0.50321*t3034*t3420 - 0.50321*t3046*t3463 - 0.50321*(t3015*t3420 - 1.*t3046*t3463)) - 2.7468000000000004*(t3329 + t3330 + t3341 + t3426 + t3428 + 0.50321*t3118*t3431 - 0.50321*t3121*t3479 + 0.50321*(t3114*t3431 + t3121*t3479)) - 2.7468000000000004*(t3386 + t3387 + t3404 + t3438 + t3440 - 0.50321*t3154*t3445 - 0.50321*t3158*t3498 - 0.50321*(t3142*t3445 - 1.*t3158*t3498)) - 11.5758*(t3516 + t3517 + t3524 + 0.15121*t3527) - 13.6359*(t3516 + t3517 + 0.18121*t3523 + t3532 + t3534 + 0.28121*t3540) - 2.7468000000000004*(t3516 + t3517 + t3524 + t3532 + t3534 + 0.50321*t3263*t3540 - 0.50321*t3277*t3551 + 0.50321*(t3261*t3540 + t3277*t3551));
  p_output1[5]=-11.5758*(t3580 + t3585 - 0.15121*t3624 + t3669) - 13.6359*(t3580 + t3585 - 0.28121*t2441*t3624 + 0.18121*t3668 + t3672) - 2.7468000000000004*(t3580 + t3585 - 0.50321*t2441*t3034*t3624 + 0.50321*t2436*t3046*t3624 - 0.50321*(t2441*t3015*t3624 + t2436*t3046*t3624) + t3669 + t3672) - 13.6359*(t3678 + t3679 + 0.28121*t2458*t3682 + t3683 - 0.18121*t3689) - 11.5758*(t3678 + t3679 + 0.15121*t3682 + t3701) - 2.7468000000000004*(t3678 + t3679 + 0.50321*t2458*t3118*t3682 - 0.50321*t2454*t3121*t3682 + 0.50321*(t2458*t3114*t3682 + t2454*t3121*t3682) + t3683 + t3701) - 13.6359*(t3704 + t3705 - 0.28121*t2720*t3708 + t3709 - 0.18121*t3723) - 11.5758*(t3704 + t3705 - 0.15121*t3708 + t3729) - 2.7468000000000004*(t3704 + t3705 - 0.50321*t2720*t3154*t3708 + 0.50321*t2635*t3158*t3708 - 0.50321*(t2720*t3142*t3708 + t2635*t3158*t3708) + t3709 + t3729) - 11.5758*(t3832 + t3841 + 0.15121*t3867 + t3872) - 13.6359*(t3832 + t3841 + 0.28121*t3243*t3867 + 0.18121*t3871 + t3877) - 2.7468000000000004*(t3832 + t3841 + 0.50321*t3243*t3263*t3867 - 0.50321*t3248*t3277*t3867 + 0.50321*(t3243*t3261*t3867 + t3248*t3277*t3867) + t3872 + t3877);
  p_output1[6]=-11.5758*(t3903 + t3916 + 0.15121*t3930 + t3955) - 13.6359*(t3903 + t3916 + 0.28121*t3243*t3930 + 0.18121*t3953 + t3962) - 2.7468000000000004*(t3903 + t3916 + 0.50321*t3243*t3263*t3930 - 0.50321*t3248*t3277*t3930 + 0.50321*(t3243*t3261*t3930 + t3248*t3277*t3930) + t3955 + t3962);
  p_output1[7]=-13.6359*(t4043 + t4112 + 0.28121*t4126) - 2.7468000000000004*(t4043 + t4112 + 0.50321*t3263*t4126 - 0.50321*t3277*t4142 + 0.50321*(t3261*t4126 + t3277*t4142));
  p_output1[8]=-2.7468000000000004*(0.50321*t3277*t4142 - 0.50321*t3261*t4192 + 0.50321*(-1.*t3277*t4142 + t3261*t4192));
  p_output1[9]=-11.5758*(t4213 + t4217 - 0.15121*t4227 + t4232) - 13.6359*(t4213 + t4217 - 0.28121*t2441*t4227 + 0.18121*t4231 + t4237) - 2.7468000000000004*(t4213 + t4217 - 0.50321*t2441*t3034*t4227 + 0.50321*t2436*t3046*t4227 - 0.50321*(t2441*t3015*t4227 + t2436*t3046*t4227) + t4232 + t4237);
  p_output1[10]=-13.6359*(t4259 + t4263 - 0.28121*t4266) - 2.7468000000000004*(t4259 + t4263 - 0.50321*t3034*t4266 - 0.50321*t3046*t4272 - 0.50321*(t3015*t4266 - 1.*t3046*t4272));
  p_output1[11]=-2.7468000000000004*(-0.50321*t3015*t4266 - 0.50321*t3046*t4284 - 0.50321*(-1.*t3015*t4266 - 1.*t3046*t4284));
  p_output1[12]=-13.6359*(t4300 + t4302 + 0.28121*t2458*t4304 + t4305 - 0.18121*t4311) - 11.5758*(t4300 + t4302 + 0.15121*t4304 + t4320) - 2.7468000000000004*(t4300 + t4302 + 0.50321*t2458*t3118*t4304 - 0.50321*t2454*t3121*t4304 + 0.50321*(t2458*t3114*t4304 + t2454*t3121*t4304) + t4305 + t4320);
  p_output1[13]=-13.6359*(t4363 + t4374 + 0.28121*t4377) - 2.7468000000000004*(t4363 + t4374 + 0.50321*t3118*t4377 - 0.50321*t3121*t4387 + 0.50321*(t3114*t4377 + t3121*t4387));
  p_output1[14]=-2.7468000000000004*(0.50321*t3121*t4387 - 0.50321*t3114*t4401 + 0.50321*(-1.*t3121*t4387 + t3114*t4401));
  p_output1[15]=-13.6359*(t4414 + t4419 - 0.28121*t2720*t4421 + t4424 - 0.18121*t4429) - 11.5758*(t4414 + t4419 - 0.15121*t4421 + t4443) - 2.7468000000000004*(t4414 + t4419 - 0.50321*t2720*t3154*t4421 + 0.50321*t2635*t3158*t4421 - 0.50321*(t2720*t3142*t4421 + t2635*t3158*t4421) + t4424 + t4443);
  p_output1[16]=-13.6359*(t4458 + t4463 - 0.28121*t4468) - 2.7468000000000004*(t4458 + t4463 - 0.50321*t3154*t4468 - 0.50321*t3158*t4482 - 0.50321*(t3142*t4468 - 1.*t3158*t4482));
  p_output1[17]=-2.7468000000000004*(-0.50321*t3142*t4468 - 0.50321*t3158*t4499 - 0.50321*(-1.*t3142*t4468 - 1.*t3158*t4499));
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
