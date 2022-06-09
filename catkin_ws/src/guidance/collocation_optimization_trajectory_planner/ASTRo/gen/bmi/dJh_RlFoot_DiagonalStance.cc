/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 17:58:26 GMT+02:00
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
  double t3005;
  double t3006;
  double t3014;
  double t3015;
  double t3034;
  double t3045;
  double t3046;
  double t3049;
  double t2964;
  double t3004;
  double t3052;
  double t3058;
  double t3048;
  double t3053;
  double t3054;
  double t2868;
  double t3059;
  double t3061;
  double t3109;
  double t3113;
  double t3114;
  double t3115;
  double t3118;
  double t3119;
  double t3121;
  double t3122;
  double t3123;
  double t3134;
  double t3136;
  double t3137;
  double t3139;
  double t3141;
  double t3142;
  double t3153;
  double t3154;
  double t3155;
  double t3158;
  double t3159;
  double t3161;
  double t3162;
  double t3166;
  double t3176;
  double t3180;
  double t3184;
  double t3185;
  double t3201;
  double t3206;
  double t3208;
  double t3222;
  double t3223;
  double t3224;
  double t3225;
  double t3226;
  double t3233;
  double t3235;
  double t3238;
  double t3241;
  double t3243;
  double t3245;
  double t3246;
  double t3247;
  double t3221;
  double t3227;
  double t3228;
  double t3229;
  double t3237;
  double t3248;
  double t3252;
  double t3254;
  double t3256;
  double t3257;
  double t3258;
  double t3259;
  double t3260;
  double t3261;
  double t3262;
  double t3266;
  double t3270;
  double t3271;
  double t3230;
  double t3263;
  double t3264;
  double t3283;
  double t3284;
  double t3285;
  double t3212;
  double t3216;
  double t3220;
  double t3277;
  double t3278;
  double t3279;
  double t3291;
  double t3292;
  double t3293;
  double t3317;
  double t3318;
  double t3319;
  double t3399;
  double t3403;
  double t3404;
  double t3281;
  double t3421;
  double t3422;
  double t3423;
  double t3298;
  double t3436;
  double t3437;
  double t3438;
  double t3282;
  double t3286;
  double t3287;
  double t3426;
  double t3431;
  double t3427;
  double t3428;
  double t3429;
  double t3435;
  double t3440;
  double t3299;
  double t3300;
  double t3301;
  double t3328;
  double t3339;
  double t3481;
  double t3483;
  double t3492;
  double t3494;
  double t3329;
  double t3330;
  double t3331;
  double t3340;
  double t3341;
  double t3342;
  double t3354;
  double t3385;
  double t3355;
  double t3356;
  double t3357;
  double t3452;
  double t3455;
  double t3534;
  double t3536;
  double t3540;
  double t3542;
  double t3386;
  double t3387;
  double t3388;
  double t3405;
  double t3406;
  double t3410;
  double t3411;
  double t3412;
  double t3413;
  double t3414;
  double t3415;
  double t3416;
  double t3417;
  double t3419;
  double t3420;
  double t3571;
  double t3572;
  double t3573;
  double t3569;
  double t3430;
  double t3578;
  double t3579;
  double t3580;
  double t3582;
  double t3583;
  double t3584;
  double t3439;
  double t3443;
  double t3444;
  double t3445;
  double t3446;
  double t3450;
  double t3585;
  double t3457;
  double t3458;
  double t3589;
  double t3463;
  double t3464;
  double t3467;
  double t3471;
  double t3472;
  double t3473;
  double t3474;
  double t3475;
  double t3476;
  double t3477;
  double t3478;
  double t3479;
  double t3482;
  double t3486;
  double t3487;
  double t3488;
  double t3489;
  double t3493;
  double t3498;
  double t3499;
  double t3500;
  double t3501;
  double t3620;
  double t3506;
  double t3507;
  double t3624;
  double t3512;
  double t3513;
  double t3516;
  double t3517;
  double t3521;
  double t3522;
  double t3523;
  double t3524;
  double t3525;
  double t3526;
  double t3527;
  double t3528;
  double t3529;
  double t3530;
  double t3531;
  double t3532;
  double t3535;
  double t3541;
  double t3545;
  double t3546;
  double t3547;
  double t3548;
  double t3551;
  double t3647;
  double t3554;
  double t3555;
  double t3651;
  double t3560;
  double t3561;
  double t3564;
  double t3667;
  double t3668;
  double t3669;
  double t3679;
  double t3680;
  double t3681;
  double t3685;
  double t3686;
  double t3687;
  double t3689;
  double t3690;
  double t3691;
  double t3699;
  double t3700;
  double t3701;
  double t3702;
  double t3703;
  double t3704;
  double t3705;
  double t3707;
  double t3708;
  double t3709;
  double t3706;
  double t3714;
  double t3715;
  double t3717;
  double t3723;
  double t3724;
  double t3725;
  double t3727;
  double t3728;
  double t3729;
  double t3744;
  double t3747;
  double t3760;
  double t3762;
  double t3755;
  double t3784;
  double t3786;
  double t3678;
  double t3682;
  double t3683;
  double t3791;
  double t3128;
  double t3130;
  double t3131;
  double t3823;
  double t3830;
  double t3832;
  double t3670;
  double t3671;
  double t3672;
  double t3673;
  double t3674;
  double t3675;
  double t3676;
  double t3189;
  double t3190;
  double t3198;
  double t3865;
  double t3866;
  double t3867;
  double t3868;
  double t3869;
  double t3871;
  double t3872;
  double t3873;
  double t3877;
  double t3878;
  double t3879;
  double t3870;
  double t3882;
  double t3883;
  double t3884;
  double t3889;
  double t3890;
  double t3891;
  double t3886;
  double t3888;
  double t3897;
  double t3898;
  double t3899;
  double t3901;
  double t3902;
  double t3903;
  double t3907;
  double t3908;
  double t3909;
  double t3741;
  double t3742;
  double t3750;
  double t3751;
  double t3768;
  double t3769;
  double t3770;
  double t3926;
  double t3778;
  double t3779;
  double t3780;
  double t3930;
  double t3932;
  double t3955;
  double t3960;
  double t3962;
  double t3914;
  double t3915;
  double t3916;
  double t3813;
  double t3814;
  double t3815;
  double t3998;
  double t4004;
  t3005 = Cos(var1[10]);
  t3006 = Cos(var1[11]);
  t3014 = -1.*t3005*t3006;
  t3015 = Sin(var1[10]);
  t3034 = Sin(var1[11]);
  t3045 = -1.*t3015*t3034;
  t3046 = t3014 + t3045;
  t3049 = Cos(var1[9]);
  t2964 = Cos(var1[5]);
  t3004 = Sin(var1[9]);
  t3052 = Sin(var1[5]);
  t3058 = Cos(var1[3]);
  t3048 = t2964*t3004*t3046;
  t3053 = t3049*t3046*t3052;
  t3054 = t3048 + t3053;
  t2868 = Sin(var1[3]);
  t3059 = Cos(var1[4]);
  t3061 = -1.*t3006*t3015;
  t3109 = t3005*t3034;
  t3113 = t3061 + t3109;
  t3114 = t3059*t3113;
  t3115 = Sin(var1[4]);
  t3118 = t3049*t2964*t3046;
  t3119 = -1.*t3004*t3046*t3052;
  t3121 = t3118 + t3119;
  t3122 = -1.*t3115*t3121;
  t3123 = t3114 + t3122;
  t3134 = t2964*t3004;
  t3136 = t3049*t3052;
  t3137 = t3134 + t3136;
  t3139 = -1.*t3049*t2964;
  t3141 = t3004*t3052;
  t3142 = t3139 + t3141;
  t3153 = t2964*t3004*t3113;
  t3154 = t3049*t3113*t3052;
  t3155 = t3153 + t3154;
  t3158 = t3005*t3006;
  t3159 = t3015*t3034;
  t3161 = t3158 + t3159;
  t3162 = t3059*t3161;
  t3166 = t3049*t2964*t3113;
  t3176 = -1.*t3004*t3113*t3052;
  t3180 = t3166 + t3176;
  t3184 = -1.*t3115*t3180;
  t3185 = t3162 + t3184;
  t3201 = -1.*t3113*t3115;
  t3206 = -1.*t3059*t3121;
  t3208 = t3201 + t3206;
  t3222 = -1.*t3006;
  t3223 = 1. + t3222;
  t3224 = -0.50321*t3223;
  t3225 = -0.19821*t3006;
  t3226 = t3224 + t3225;
  t3233 = -1.*t3049;
  t3235 = 1. + t3233;
  t3238 = -1.*t3005;
  t3241 = 1. + t3238;
  t3243 = -0.28121*t3241;
  t3245 = t3005*t3226;
  t3246 = 0.305*t3015*t3034;
  t3247 = t3243 + t3245 + t3246;
  t3221 = 0.28121*t3015;
  t3227 = t3226*t3015;
  t3228 = -0.305*t3005*t3034;
  t3229 = t3221 + t3227 + t3228;
  t3237 = -0.15121*t3235;
  t3248 = t3049*t3247;
  t3252 = t3237 + t3248;
  t3254 = t2964*t3252;
  t3256 = 0.15121*t3235;
  t3257 = 0.15121*t3049;
  t3258 = 0.15121*t3004;
  t3259 = t3004*t3247;
  t3260 = t3256 + t3257 + t3258 + t3259;
  t3261 = -1.*t3260*t3052;
  t3262 = t3254 + t3261;
  t3266 = t3229*t3115;
  t3270 = t3059*t3262;
  t3271 = t3266 + t3270;
  t3230 = -1.*t3229*t3115;
  t3263 = -1.*t3059*t3262;
  t3264 = t3230 + t3263;
  t3283 = t3059*t3229;
  t3284 = -1.*t3115*t3262;
  t3285 = t3283 + t3284;
  t3212 = t3161*t3115;
  t3216 = t3059*t3180;
  t3220 = t3212 + t3216;
  t3277 = t2964*t3260;
  t3278 = t3252*t3052;
  t3279 = t3277 + t3278;
  t3291 = -1.*t3161*t3115;
  t3292 = -1.*t3059*t3180;
  t3293 = t3291 + t3292;
  t3317 = t3113*t3115;
  t3318 = t3059*t3121;
  t3319 = t3317 + t3318;
  t3399 = -1.*t2964*t3004*t3046;
  t3403 = -1.*t3049*t3046*t3052;
  t3404 = t3399 + t3403;
  t3281 = -1.*t3142*t3279;
  t3421 = -1.*t2964*t3260;
  t3422 = -1.*t3252*t3052;
  t3423 = t3421 + t3422;
  t3298 = t3155*t3279;
  t3436 = -1.*t2964*t3004*t3113;
  t3437 = -1.*t3049*t3113*t3052;
  t3438 = t3436 + t3437;
  t3282 = -1.*t3059*t3137*t3271;
  t3286 = t3115*t3137*t3285;
  t3287 = t3281 + t3282 + t3286;
  t3426 = -1.*t3137*t3279;
  t3431 = -1.*t3142*t3262;
  t3427 = t3049*t2964;
  t3428 = -1.*t3004*t3052;
  t3429 = t3427 + t3428;
  t3435 = t3180*t3279;
  t3440 = t3155*t3262;
  t3299 = t3220*t3271;
  t3300 = t3185*t3285;
  t3301 = t3298 + t3299 + t3300;
  t3328 = -1.*t3155*t3279;
  t3339 = t3054*t3279;
  t3481 = -1.*t3180*t3279;
  t3483 = -1.*t3155*t3262;
  t3492 = t3121*t3279;
  t3494 = t3054*t3262;
  t3329 = -1.*t3220*t3271;
  t3330 = -1.*t3185*t3285;
  t3331 = t3328 + t3329 + t3330;
  t3340 = t3319*t3271;
  t3341 = t3123*t3285;
  t3342 = t3339 + t3340 + t3341;
  t3354 = t3142*t3279;
  t3385 = -1.*t3054*t3279;
  t3355 = t3059*t3137*t3271;
  t3356 = -1.*t3115*t3137*t3285;
  t3357 = t3354 + t3355 + t3356;
  t3452 = Power(t3059,2);
  t3455 = Power(t3115,2);
  t3534 = t3137*t3279;
  t3536 = t3142*t3262;
  t3540 = -1.*t3121*t3279;
  t3542 = -1.*t3054*t3262;
  t3386 = -1.*t3319*t3271;
  t3387 = -1.*t3123*t3285;
  t3388 = t3385 + t3386 + t3387;
  t3405 = var2[0]*t3059*t3404;
  t3406 = t2868*t3115*t3404;
  t3410 = t3058*t3121;
  t3411 = t3406 + t3410;
  t3412 = var2[1]*t3411;
  t3413 = -1.*t3058*t3115*t3404;
  t3414 = t2868*t3121;
  t3415 = t3413 + t3414;
  t3416 = var2[2]*t3415;
  t3417 = -1.*t3137*t3262;
  t3419 = t3281 + t3417;
  t3420 = t3180*t3419;
  t3571 = -0.15121*t3004;
  t3572 = -1.*t3004*t3247;
  t3573 = t3571 + t3572;
  t3569 = t3257 + t3248;
  t3430 = -1.*t3429*t3262;
  t3578 = t2964*t3573;
  t3579 = -1.*t3569*t3052;
  t3580 = t3578 + t3579;
  t3582 = t2964*t3569;
  t3583 = t3573*t3052;
  t3584 = t3582 + t3583;
  t3439 = t3438*t3262;
  t3443 = t3229*t3161;
  t3444 = t3180*t3262;
  t3445 = t3443 + t3298 + t3444;
  t3446 = t3137*t3445;
  t3450 = t3059*t3438*t3287;
  t3585 = -1.*t3142*t3584;
  t3457 = -1.*t3059*t3429*t3271;
  t3458 = t3115*t3429*t3285;
  t3589 = t3155*t3584;
  t3463 = t3059*t3438*t3271;
  t3464 = -1.*t3115*t3438*t3285;
  t3467 = t3059*t3429*t3301;
  t3471 = var2[0]*t3059*t3429;
  t3472 = t2868*t3137;
  t3473 = -1.*t3058*t3115*t3429;
  t3474 = t3472 + t3473;
  t3475 = var2[2]*t3474;
  t3476 = t3058*t3137;
  t3477 = t2868*t3115*t3429;
  t3478 = t3476 + t3477;
  t3479 = var2[1]*t3478;
  t3482 = -1.*t3438*t3262;
  t3486 = -1.*t3229*t3161;
  t3487 = -1.*t3180*t3262;
  t3488 = t3486 + t3328 + t3487;
  t3489 = t3121*t3488;
  t3493 = t3404*t3262;
  t3498 = t3229*t3113;
  t3499 = t3121*t3262;
  t3500 = t3498 + t3339 + t3499;
  t3501 = t3180*t3500;
  t3620 = -1.*t3155*t3584;
  t3506 = -1.*t3059*t3438*t3271;
  t3507 = t3115*t3438*t3285;
  t3624 = t3054*t3584;
  t3512 = t3059*t3404*t3271;
  t3513 = -1.*t3115*t3404*t3285;
  t3516 = t3059*t3404*t3331;
  t3517 = t3059*t3438*t3342;
  t3521 = var2[0]*t3059*t3438;
  t3522 = t2868*t3115*t3438;
  t3523 = t3058*t3180;
  t3524 = t3522 + t3523;
  t3525 = var2[1]*t3524;
  t3526 = -1.*t3058*t3115*t3438;
  t3527 = t2868*t3180;
  t3528 = t3526 + t3527;
  t3529 = var2[2]*t3528;
  t3530 = t3137*t3262;
  t3531 = t3354 + t3530;
  t3532 = t3121*t3531;
  t3535 = t3429*t3262;
  t3541 = -1.*t3404*t3262;
  t3545 = -1.*t3229*t3113;
  t3546 = -1.*t3121*t3262;
  t3547 = t3545 + t3385 + t3546;
  t3548 = t3137*t3547;
  t3551 = t3059*t3404*t3357;
  t3647 = t3142*t3584;
  t3554 = t3059*t3429*t3271;
  t3555 = -1.*t3115*t3429*t3285;
  t3651 = -1.*t3054*t3584;
  t3560 = -1.*t3059*t3404*t3271;
  t3561 = t3115*t3404*t3285;
  t3564 = t3059*t3429*t3388;
  t3667 = t3006*t3015;
  t3668 = -1.*t3005*t3034;
  t3669 = t3667 + t3668;
  t3679 = t3049*t2964*t3669;
  t3680 = -1.*t3004*t3669*t3052;
  t3681 = t3679 + t3680;
  t3685 = t2964*t3004*t3669;
  t3686 = t3049*t3669*t3052;
  t3687 = t3685 + t3686;
  t3689 = t3059*t3046;
  t3690 = -1.*t3115*t3681;
  t3691 = t3689 + t3690;
  t3699 = -0.28121*t3015;
  t3700 = -1.*t3226*t3015;
  t3701 = 0.305*t3005*t3034;
  t3702 = t3699 + t3700 + t3701;
  t3703 = t2964*t3004*t3702;
  t3704 = t3049*t3702*t3052;
  t3705 = t3703 + t3704;
  t3707 = t3049*t2964*t3702;
  t3708 = -1.*t3004*t3702*t3052;
  t3709 = t3707 + t3708;
  t3706 = -1.*t3142*t3705;
  t3714 = 0.28121*t3005;
  t3715 = t3714 + t3245 + t3246;
  t3717 = t3705*t3155;
  t3723 = t3715*t3115;
  t3724 = t3059*t3709;
  t3725 = t3723 + t3724;
  t3727 = t3059*t3715;
  t3728 = -1.*t3115*t3709;
  t3729 = t3727 + t3728;
  t3744 = t3229*t3046;
  t3747 = t3113*t3715;
  t3760 = Power(t3049,2);
  t3762 = Power(t3004,2);
  t3755 = -1.*t3715*t3161;
  t3784 = t3705*t3054;
  t3786 = t3687*t3279;
  t3678 = t3046*t3115;
  t3682 = t3059*t3681;
  t3683 = t3678 + t3682;
  t3791 = -1.*t3705*t3155;
  t3128 = t3058*t3054;
  t3130 = -1.*t2868*t3123;
  t3131 = t3128 + t3130;
  t3823 = t3142*t3705;
  t3830 = -1.*t3705*t3054;
  t3832 = -1.*t3687*t3279;
  t3670 = 0.15121*t3669;
  t3671 = 0.15121*t3113;
  t3672 = t3670 + t3671;
  t3673 = var2[9]*t3672;
  t3674 = -1.*t3004*t3252;
  t3675 = t3049*t3260;
  t3676 = t3674 + t3675;
  t3189 = t3058*t3155;
  t3190 = -1.*t2868*t3185;
  t3198 = t3189 + t3190;
  t3865 = 0.305*t3006*t3015;
  t3866 = t3865 + t3228;
  t3867 = t2964*t3004*t3866;
  t3868 = t3049*t3866*t3052;
  t3869 = t3867 + t3868;
  t3871 = t3049*t2964*t3866;
  t3872 = -1.*t3004*t3866*t3052;
  t3873 = t3871 + t3872;
  t3877 = t2964*t3004*t3161;
  t3878 = t3049*t3161*t3052;
  t3879 = t3877 + t3878;
  t3870 = -1.*t3142*t3869;
  t3882 = -0.305*t3005*t3006;
  t3883 = -0.305*t3015*t3034;
  t3884 = t3882 + t3883;
  t3889 = t3049*t2964*t3161;
  t3890 = -1.*t3004*t3161*t3052;
  t3891 = t3889 + t3890;
  t3886 = t3869*t3155;
  t3888 = t3879*t3279;
  t3897 = t3884*t3115;
  t3898 = t3059*t3873;
  t3899 = t3897 + t3898;
  t3901 = t3059*t3884;
  t3902 = -1.*t3115*t3873;
  t3903 = t3901 + t3902;
  t3907 = t3669*t3115;
  t3908 = t3059*t3891;
  t3909 = t3907 + t3908;
  t3741 = t3046*t3247;
  t3742 = t3498 + t3741;
  t3750 = -1.*t3113*t3247;
  t3751 = t3750 + t3486;
  t3768 = -1.*t3049*t3113*t3252;
  t3769 = -1.*t3004*t3113*t3260;
  t3770 = t3486 + t3768 + t3769;
  t3926 = t3113*t3884;
  t3778 = t3049*t3046*t3252;
  t3779 = t3004*t3046*t3260;
  t3780 = t3498 + t3778 + t3779;
  t3930 = -1.*t3669*t3229;
  t3932 = -1.*t3884*t3161;
  t3955 = t3869*t3054;
  t3960 = -1.*t3869*t3155;
  t3962 = -1.*t3879*t3279;
  t3914 = t3059*t3669;
  t3915 = -1.*t3115*t3891;
  t3916 = t3914 + t3915;
  t3813 = t3004*t3252;
  t3814 = -1.*t3049*t3260;
  t3815 = t3813 + t3814;
  t3998 = t3142*t3869;
  t4004 = -1.*t3869*t3054;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t2868*t3054 - 1.*t3058*t3123)*var2[1] + t3131*var2[2];
  p_output1[10]=(t3058*t3115*t3137 - 1.*t2868*t3142)*var2[1] + (t2868*t3115*t3137 + t3058*t3142)*var2[2];
  p_output1[11]=(-1.*t2868*t3155 - 1.*t3058*t3185)*var2[1] + t3198*var2[2];
  p_output1[12]=t3123*var2[0] - 1.*t2868*t3208*var2[1] + t3058*t3208*var2[2] + (t3220*(t3115*t3137*t3264 + t3115*t3137*t3271) + t3185*t3287 + t3059*t3137*(t3185*t3264 + t3185*t3271 + t3220*t3285 + t3285*t3293) - 1.*t3115*t3137*t3301)*var2[3];
  p_output1[13]=-1.*t3115*t3137*var2[0] + t2868*t3059*t3137*var2[1] - 1.*t3058*t3059*t3137*var2[2] + ((-1.*t3185*t3264 - 1.*t3185*t3271 - 1.*t3220*t3285 - 1.*t3285*t3293)*t3319 + t3220*(t3123*t3264 + t3123*t3271 + t3208*t3285 + t3285*t3319) + t3123*t3331 + t3185*t3342)*var2[3];
  p_output1[14]=t3185*var2[0] - 1.*t2868*t3293*var2[1] + t3058*t3293*var2[2] + ((-1.*t3115*t3137*t3264 - 1.*t3115*t3137*t3271)*t3319 + t3059*t3137*(-1.*t3123*t3264 - 1.*t3123*t3271 - 1.*t3208*t3285 - 1.*t3285*t3319) + t3123*t3357 - 1.*t3115*t3137*t3388)*var2[3];
  p_output1[15]=t3405 + t3412 + t3416 + (t3450 + t3220*(t3426 + t3431 - 1.*t3137*t3423*t3452 - 1.*t3137*t3423*t3455 + t3457 + t3458) + t3059*t3137*(-1.*t3115*t3185*t3423 + t3059*t3220*t3423 + t3435 + t3440 + t3463 + t3464) + t3467)*var2[3] + (t3420 + t3155*(-1.*t3137*t3423 + t3426 + t3430 + t3431) + t3142*(t3180*t3423 + t3435 + t3439 + t3440) + t3446)*var2[4];
  p_output1[16]=t3471 + t3475 + t3479 + (t3319*(t3115*t3185*t3423 - 1.*t3059*t3220*t3423 + t3481 + t3483 + t3506 + t3507) + t3220*(-1.*t3115*t3123*t3423 + t3059*t3319*t3423 + t3492 + t3494 + t3512 + t3513) + t3516 + t3517)*var2[3] + (t3054*(-1.*t3180*t3423 + t3481 + t3482 + t3483) + t3489 + t3155*(t3121*t3423 + t3492 + t3493 + t3494) + t3501)*var2[4];
  p_output1[17]=t3521 + t3525 + t3529 + (t3551 + t3319*(t3137*t3423*t3452 + t3137*t3423*t3455 + t3534 + t3536 + t3554 + t3555) + t3059*t3137*(t3115*t3123*t3423 - 1.*t3059*t3319*t3423 + t3540 + t3542 + t3560 + t3561) + t3564)*var2[3] + (t3532 + t3054*(t3137*t3423 + t3534 + t3535 + t3536) + t3142*(-1.*t3121*t3423 + t3540 + t3541 + t3542) + t3548)*var2[4];
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t3405 + t3412 + t3416 + (t3450 + t3467 + t3220*(t3426 + t3457 + t3458 - 1.*t3137*t3452*t3580 - 1.*t3137*t3455*t3580 + t3585) + t3059*t3137*(t3435 + t3463 + t3464 - 1.*t3115*t3185*t3580 + t3059*t3220*t3580 + t3589))*var2[3] + (t3420 + t3446 + t3155*(t3426 + t3430 - 1.*t3137*t3580 + t3585) + t3142*(t3435 + t3439 + t3180*t3580 + t3589))*var2[4] + t3161*(-1.*t3049*t3252 - 1.*t3004*t3260 + t3049*t3569 - 1.*t3004*t3573)*var2[5];
  p_output1[28]=t3471 + t3475 + t3479 + (t3516 + t3517 + t3319*(t3481 + t3506 + t3507 + t3115*t3185*t3580 - 1.*t3059*t3220*t3580 + t3620) + t3220*(t3492 + t3512 + t3513 - 1.*t3115*t3123*t3580 + t3059*t3319*t3580 + t3624))*var2[3] + (t3489 + t3501 + t3054*(t3481 + t3482 - 1.*t3180*t3580 + t3620) + t3155*(t3492 + t3493 + t3121*t3580 + t3624))*var2[4] + (t3161*(-1.*t3004*t3046*t3252 + t3046*t3049*t3260 + t3004*t3046*t3569 + t3046*t3049*t3573) + t3113*(t3004*t3113*t3252 - 1.*t3049*t3113*t3260 - 1.*t3004*t3113*t3569 - 1.*t3049*t3113*t3573))*var2[5];
  p_output1[29]=t3521 + t3525 + t3529 + (t3551 + t3564 + t3319*(t3534 + t3554 + t3555 + t3137*t3452*t3580 + t3137*t3455*t3580 + t3647) + t3059*t3137*(t3540 + t3560 + t3561 + t3115*t3123*t3580 - 1.*t3059*t3319*t3580 + t3651))*var2[3] + (t3532 + t3548 + t3054*(t3534 + t3535 + t3137*t3580 + t3647) + t3142*(t3540 + t3541 - 1.*t3121*t3580 + t3651))*var2[4] + t3113*(t3049*t3252 + t3004*t3260 - 1.*t3049*t3569 + t3004*t3573)*var2[5];
  p_output1[30]=t3673 + t3683*var2[0] + (t3058*t3687 - 1.*t2868*t3691)*var2[1] + (t2868*t3687 + t3058*t3691)*var2[2] + (t3287*t3319 + t3220*(t3706 - 1.*t3059*t3137*t3725 + t3115*t3137*t3729) + t3059*t3137*(t3339 + t3340 + t3341 + t3717 + t3220*t3725 + t3185*t3729))*var2[3] + (t3054*t3419 + t3155*(t3706 - 1.*t3137*t3709) + t3142*(t3339 + t3498 + t3499 + t3180*t3709 + t3161*t3715 + t3717))*var2[4] + t3113*t3676*var2[5];
  p_output1[31]=(t3319*t3342 + t3331*t3683 + t3220*(t3271*t3683 + t3285*t3691 + t3319*t3725 + t3123*t3729 + t3784 + t3786) + t3319*(t3385 + t3386 + t3387 - 1.*t3220*t3725 - 1.*t3185*t3729 + t3791))*var2[3] + (t3054*t3500 + t3488*t3687 + t3155*(t3262*t3681 + t3121*t3709 + t3744 + t3747 + t3784 + t3786) + t3054*(t3385 + t3545 + t3546 - 1.*t3180*t3709 + t3755 + t3791))*var2[4] + (t3161*(t3049*t3252*t3669 + t3004*t3260*t3669 + t3744 + t3747 + t3046*t3702*t3760 + t3046*t3702*t3762) + t3113*(-1.*t3046*t3049*t3252 - 1.*t3004*t3046*t3260 + t3545 + t3755 - 1.*t3113*t3702*t3760 - 1.*t3113*t3702*t3762) + t3046*t3770 + t3113*t3780)*var2[5] + (t3113*t3742 + t3161*(t3247*t3669 + t3046*t3702 + t3744 + t3747) + t3046*t3751 + t3113*(-1.*t3046*t3247 + t3545 - 1.*t3113*t3702 + t3755))*var2[9];
  p_output1[32]=t3319*var2[0] + t3131*var2[1] + (t2868*t3054 + t3058*t3123)*var2[2] + (t3357*t3683 + t3319*(t3059*t3137*t3725 - 1.*t3115*t3137*t3729 + t3823) + t3059*t3137*(-1.*t3271*t3683 - 1.*t3285*t3691 - 1.*t3319*t3725 - 1.*t3123*t3729 + t3830 + t3832))*var2[3] + (t3531*t3687 + t3054*(t3137*t3709 + t3823) + t3142*(-1.*t3046*t3229 - 1.*t3262*t3681 - 1.*t3121*t3709 - 1.*t3113*t3715 + t3830 + t3832))*var2[4] + t3046*t3815*var2[5];
  p_output1[33]=t3673 + t3220*var2[0] + t3198*var2[1] + (t2868*t3155 + t3058*t3185)*var2[2] + (t3220*(t3870 - 1.*t3059*t3137*t3899 + t3115*t3137*t3903) + t3287*t3909 + t3059*t3137*(t3886 + t3888 + t3220*t3899 + t3185*t3903 + t3271*t3909 + t3285*t3916))*var2[3] + (t3155*(t3870 - 1.*t3137*t3873) + t3419*t3879 + t3142*(t3229*t3669 + t3180*t3873 + t3161*t3884 + t3886 + t3888 + t3262*t3891))*var2[4] + t3669*t3676*var2[5] + (0.28121*t3006 - 0.305*Power(t3006,2) + t3006*t3226)*var2[10];
  p_output1[34]=(t3220*t3331 + t3342*t3909 + t3220*(t3298 + t3299 + t3300 + t3319*t3899 + t3123*t3903 + t3955) + t3319*(-1.*t3220*t3899 - 1.*t3185*t3903 - 1.*t3271*t3909 - 1.*t3285*t3916 + t3960 + t3962))*var2[3] + (t3155*t3488 + t3500*t3879 + t3155*(t3298 + t3443 + t3444 + t3121*t3873 + t3926 + t3955) + t3054*(-1.*t3180*t3873 - 1.*t3262*t3891 + t3930 + t3932 + t3960 + t3962))*var2[4] + (t3161*t3770 + t3669*t3780 + t3161*(t3049*t3113*t3252 + t3004*t3113*t3260 + t3443 + t3046*t3760*t3866 + t3046*t3762*t3866 + t3926) + t3113*(-1.*t3049*t3161*t3252 - 1.*t3004*t3161*t3260 - 1.*t3113*t3760*t3866 - 1.*t3113*t3762*t3866 + t3930 + t3932))*var2[5] + (t3669*t3742 + t3161*t3751 + t3161*(t3113*t3247 + t3443 + t3046*t3866 + t3926) + t3113*(-1.*t3161*t3247 - 1.*t3113*t3866 + t3930 + t3932))*var2[9];
  p_output1[35]=t3909*var2[0] + (t3058*t3879 - 1.*t2868*t3916)*var2[1] + (t2868*t3879 + t3058*t3916)*var2[2] + (t3220*t3357 + t3319*(t3059*t3137*t3899 - 1.*t3115*t3137*t3903 + t3998) + t3059*t3137*(t3328 + t3329 + t3330 - 1.*t3319*t3899 - 1.*t3123*t3903 + t4004))*var2[3] + (t3155*t3531 + t3054*(t3137*t3873 + t3998) + t3142*(t3328 + t3486 + t3487 - 1.*t3121*t3873 - 1.*t3113*t3884 + t4004))*var2[4] + t3161*t3815*var2[5] + (-0.28121*t3034 + 0.305*t3006*t3034 - 1.*t3034*t3226)*var2[10];
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
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

#include "dJh_RlFoot_DiagonalStance.hh"

namespace SymFunction
{

void dJh_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
