/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 14:40:31 GMT+02:00
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
  double t2668;
  double t2456;
  double t2660;
  double t2673;
  double t2664;
  double t2674;
  double t2675;
  double t2446;
  double t2677;
  double t2678;
  double t2679;
  double t2454;
  double t2681;
  double t2749;
  double t2676;
  double t2682;
  double t2683;
  double t2422;
  double t2758;
  double t2878;
  double t2880;
  double t2889;
  double t2891;
  double t2892;
  double t2894;
  double t2895;
  double t2900;
  double t2917;
  double t2918;
  double t2919;
  double t2946;
  double t2947;
  double t2948;
  double t2941;
  double t2950;
  double t2951;
  double t2957;
  double t2960;
  double t2961;
  double t2962;
  double t2965;
  double t2970;
  double t3038;
  double t3044;
  double t3047;
  double t3064;
  double t3065;
  double t3066;
  double t3069;
  double t3070;
  double t3071;
  double t3072;
  double t3073;
  double t3074;
  double t3063;
  double t3067;
  double t3075;
  double t3081;
  double t3062;
  double t3084;
  double t3085;
  double t3088;
  double t3089;
  double t3093;
  double t3094;
  double t3098;
  double t3099;
  double t3100;
  double t3101;
  double t3102;
  double t3103;
  double t3104;
  double t3105;
  double t3109;
  double t3111;
  double t3112;
  double t3126;
  double t3127;
  double t3128;
  double t3123;
  double t3124;
  double t3125;
  double t3119;
  double t3120;
  double t3121;
  double t3055;
  double t3056;
  double t3057;
  double t3086;
  double t3113;
  double t3114;
  double t3139;
  double t3143;
  double t3144;
  double t3131;
  double t3132;
  double t3133;
  double t3181;
  double t3182;
  double t3183;
  double t3153;
  double t3154;
  double t3155;
  double t3253;
  double t3254;
  double t3255;
  double t3145;
  double t3166;
  double t3269;
  double t3270;
  double t3271;
  double t3273;
  double t3280;
  double t3281;
  double t3282;
  double t3146;
  double t3147;
  double t3151;
  double t3284;
  double t3286;
  double t3167;
  double t3168;
  double t3169;
  double t3190;
  double t3209;
  double t3319;
  double t3321;
  double t3191;
  double t3194;
  double t3198;
  double t3333;
  double t3335;
  double t3210;
  double t3211;
  double t3212;
  double t3233;
  double t3245;
  double t3371;
  double t3234;
  double t3235;
  double t3236;
  double t3375;
  double t3377;
  double t3246;
  double t3247;
  double t3248;
  double t3265;
  double t3276;
  double t3407;
  double t3408;
  double t3409;
  double t3413;
  double t3414;
  double t3435;
  double t3436;
  double t3437;
  double t3266;
  double t3267;
  double t3411;
  double t3415;
  double t3423;
  double t3425;
  double t3277;
  double t3278;
  double t3446;
  double t3447;
  double t3451;
  double t3455;
  double t3456;
  double t3463;
  double t3464;
  double t3465;
  double t3467;
  double t3468;
  double t3469;
  double t3471;
  double t3472;
  double t3473;
  double t3475;
  double t3476;
  double t3477;
  double t3328;
  double t3324;
  double t3479;
  double t3480;
  double t3481;
  double t3499;
  double t3501;
  double t3325;
  double t3326;
  double t3509;
  double t3511;
  double t3329;
  double t3330;
  double t3530;
  double t3532;
  double t3430;
  double t3431;
  double t3432;
  double t3537;
  double t3538;
  double t3486;
  double t3487;
  double t3488;
  double t3366;
  double t3380;
  double t3367;
  double t3368;
  double t3566;
  double t3568;
  double t3448;
  double t3572;
  double t3574;
  double t3381;
  double t3382;
  double t3593;
  double t3596;
  double t3600;
  double t3602;
  double t3404;
  double t3405;
  double t3625;
  double t3626;
  double t3627;
  double t3642;
  double t3643;
  double t3031;
  double t3032;
  double t3033;
  double t3635;
  double t3636;
  double t3637;
  double t3638;
  double t3633;
  double t3641;
  double t3644;
  double t3666;
  double t3667;
  double t3668;
  double t3657;
  double t3658;
  double t3659;
  double t3662;
  double t3663;
  double t3664;
  double t3673;
  double t3674;
  double t3675;
  double t3669;
  double t3672;
  double t3677;
  double t3683;
  double t3684;
  double t3685;
  double t3687;
  double t3688;
  double t3689;
  double t3691;
  double t3692;
  double t3693;
  double t3504;
  double t3505;
  double t3506;
  double t3514;
  double t3515;
  double t3516;
  double t3645;
  double t3418;
  double t3419;
  double t3713;
  double t3714;
  double t3721;
  double t3719;
  double t3711;
  double t3715;
  double t3745;
  double t3748;
  double t3750;
  double t3698;
  double t3699;
  double t3700;
  double t3562;
  double t3563;
  double t3773;
  double t3792;
  double t3796;
  double t3815;
  double t3816;
  double t3817;
  double t3829;
  double t3830;
  double t3831;
  double t3839;
  double t3840;
  double t3841;
  double t3845;
  double t3846;
  double t3847;
  double t3849;
  double t3850;
  double t3851;
  double t3826;
  double t3827;
  double t3832;
  double t3865;
  double t3866;
  double t3867;
  double t3861;
  double t3862;
  double t3863;
  double t3868;
  double t3871;
  double t3878;
  double t3879;
  double t3880;
  double t3882;
  double t3883;
  double t3884;
  double t3577;
  double t3578;
  double t3726;
  double t3727;
  double t3733;
  double t3734;
  double t3897;
  double t3902;
  double t3907;
  double t3903;
  double t3905;
  double t3898;
  double t3925;
  double t3928;
  double t3838;
  double t3842;
  double t3843;
  double t3932;
  double t2906;
  double t2907;
  double t2911;
  double t3961;
  double t3963;
  double t3979;
  double t3982;
  double t3985;
  t2668 = Cos(var1[13]);
  t2456 = Cos(var1[14]);
  t2660 = Sin(var1[13]);
  t2673 = Sin(var1[14]);
  t2664 = t2456*t2660;
  t2674 = -1.*t2668*t2673;
  t2675 = t2664 + t2674;
  t2446 = Cos(var1[5]);
  t2677 = t2668*t2456;
  t2678 = t2660*t2673;
  t2679 = t2677 + t2678;
  t2454 = Sin(var1[12]);
  t2681 = Sin(var1[5]);
  t2749 = Cos(var1[3]);
  t2676 = -1.*t2446*t2454*t2675;
  t2682 = t2679*t2681;
  t2683 = t2676 + t2682;
  t2422 = Sin(var1[3]);
  t2758 = Cos(var1[12]);
  t2878 = Cos(var1[4]);
  t2880 = t2758*t2878*t2675;
  t2889 = Sin(var1[4]);
  t2891 = t2446*t2679;
  t2892 = t2454*t2675*t2681;
  t2894 = t2891 + t2892;
  t2895 = -1.*t2889*t2894;
  t2900 = t2880 + t2895;
  t2917 = t2878*t2454;
  t2918 = t2758*t2889*t2681;
  t2919 = t2917 + t2918;
  t2946 = -1.*t2456*t2660;
  t2947 = t2668*t2673;
  t2948 = t2946 + t2947;
  t2941 = -1.*t2446*t2454*t2679;
  t2950 = t2948*t2681;
  t2951 = t2941 + t2950;
  t2957 = t2758*t2878*t2679;
  t2960 = t2446*t2948;
  t2961 = t2454*t2679*t2681;
  t2962 = t2960 + t2961;
  t2965 = -1.*t2889*t2962;
  t2970 = t2957 + t2965;
  t3038 = -1.*t2758*t2675*t2889;
  t3044 = -1.*t2878*t2894;
  t3047 = t3038 + t3044;
  t3064 = -0.0641*t2456;
  t3065 = -0.28*t2673;
  t3066 = t3064 + t3065;
  t3069 = -1.*t2456;
  t3070 = 1. + t3069;
  t3071 = 0.075*t3070;
  t3072 = 0.355*t2456;
  t3073 = -0.0641*t2673;
  t3074 = t3071 + t3072 + t3073;
  t3063 = -0.325*t2660;
  t3067 = t2668*t3066;
  t3075 = t2660*t3074;
  t3081 = t3063 + t3067 + t3075;
  t3062 = -0.068*t2454;
  t3084 = t2758*t3081;
  t3085 = t3062 + t3084;
  t3088 = -1.*t2668;
  t3089 = 1. + t3088;
  t3093 = 0.325*t3089;
  t3094 = -1.*t2660*t3066;
  t3098 = t2668*t3074;
  t3099 = t3093 + t3094 + t3098;
  t3100 = t2446*t3099;
  t3101 = -1.*t2758;
  t3102 = 1. + t3101;
  t3103 = -0.1575*t3102;
  t3104 = -0.2255*t2758;
  t3105 = -1.*t2454*t3081;
  t3109 = t3103 + t3104 + t3105;
  t3111 = -1.*t3109*t2681;
  t3112 = t3100 + t3111;
  t3126 = t2878*t3085;
  t3127 = -1.*t2889*t3112;
  t3128 = t3126 + t3127;
  t3123 = t2454*t2889;
  t3124 = -1.*t2758*t2878*t2681;
  t3125 = t3123 + t3124;
  t3119 = t3085*t2889;
  t3120 = t2878*t3112;
  t3121 = t3119 + t3120;
  t3055 = t2758*t2679*t2889;
  t3056 = t2878*t2962;
  t3057 = t3055 + t3056;
  t3086 = -1.*t3085*t2889;
  t3113 = -1.*t2878*t3112;
  t3114 = t3086 + t3113;
  t3139 = t2446*t3109;
  t3143 = t3099*t2681;
  t3144 = t3139 + t3143;
  t3131 = -1.*t2454*t2889;
  t3132 = t2758*t2878*t2681;
  t3133 = t3131 + t3132;
  t3181 = t2758*t2675*t2889;
  t3182 = t2878*t2894;
  t3183 = t3181 + t3182;
  t3153 = -1.*t2758*t2679*t2889;
  t3154 = -1.*t2878*t2962;
  t3155 = t3153 + t3154;
  t3253 = t2446*t2454*t2675;
  t3254 = -1.*t2679*t2681;
  t3255 = t3253 + t3254;
  t3145 = -1.*t2758*t2446*t3144;
  t3166 = t3144*t2951;
  t3269 = -1.*t2446*t3109;
  t3270 = -1.*t3099*t2681;
  t3271 = t3269 + t3270;
  t3273 = t2758*t2681*t3144;
  t3280 = t2446*t2454*t2679;
  t3281 = -1.*t2948*t2681;
  t3282 = t3280 + t3281;
  t3146 = -1.*t3125*t3121;
  t3147 = -1.*t2919*t3128;
  t3151 = t3145 + t3146 + t3147;
  t3284 = t3112*t2951;
  t3286 = t3144*t2962;
  t3167 = t3121*t3057;
  t3168 = t3128*t2970;
  t3169 = t3166 + t3167 + t3168;
  t3190 = t3144*t2683;
  t3209 = -1.*t3144*t2951;
  t3319 = t3144*t2894;
  t3321 = t3112*t2683;
  t3191 = t3121*t3183;
  t3194 = t3128*t2900;
  t3198 = t3190 + t3191 + t3194;
  t3333 = -1.*t3112*t2951;
  t3335 = -1.*t3144*t2962;
  t3210 = -1.*t3121*t3057;
  t3211 = -1.*t3128*t2970;
  t3212 = t3209 + t3210 + t3211;
  t3233 = t2758*t2446*t3144;
  t3245 = -1.*t3144*t2683;
  t3371 = -1.*t2758*t2681*t3144;
  t3234 = t3125*t3121;
  t3235 = t2919*t3128;
  t3236 = t3233 + t3234 + t3235;
  t3375 = -1.*t3144*t2894;
  t3377 = -1.*t3112*t2683;
  t3246 = -1.*t3121*t3183;
  t3247 = -1.*t3128*t2900;
  t3248 = t3245 + t3246 + t3247;
  t3265 = -1.*t2454*t3085;
  t3276 = t2758*t3085*t2679;
  t3407 = 0.068*t2454;
  t3408 = -1.*t2758*t3081;
  t3409 = t3407 + t3408;
  t3413 = -0.068*t2758;
  t3414 = t3413 + t3105;
  t3435 = -1.*t2878*t2454*t2675;
  t3436 = -1.*t2758*t2675*t2889*t2681;
  t3437 = t3435 + t3436;
  t3266 = t2758*t2681*t3112;
  t3267 = t3265 + t3266 + t3145;
  t3411 = -1.*t2758*t3085;
  t3415 = -1.*t2454*t3414;
  t3423 = -1.*t2454*t3085*t2679;
  t3425 = t2758*t3414*t2679;
  t3277 = t3112*t2962;
  t3278 = t3276 + t3166 + t3277;
  t3446 = Power(t2446,2);
  t3447 = -1.*t2758*t3446*t3409;
  t3451 = t2446*t2454*t3144;
  t3455 = -1.*t2758*t2446*t2679*t3144;
  t3456 = t2446*t3409*t2951;
  t3463 = -1.*t2454*t2679*t2889;
  t3464 = t2758*t2878*t2679*t2681;
  t3465 = t3463 + t3464;
  t3467 = t3414*t2889;
  t3468 = -1.*t2878*t3409*t2681;
  t3469 = t3467 + t3468;
  t3471 = t2878*t3414;
  t3472 = t3409*t2889*t2681;
  t3473 = t3471 + t3472;
  t3475 = t2758*t2889;
  t3476 = t2878*t2454*t2681;
  t3477 = t3475 + t3476;
  t3328 = -1.*t2758*t3085*t2679;
  t3324 = t2758*t3085*t2675;
  t3479 = t2758*t2878;
  t3480 = -1.*t2454*t2889*t2681;
  t3481 = t3479 + t3480;
  t3499 = -1.*t2454*t3085*t2675;
  t3501 = t2758*t3414*t2675;
  t3325 = t3112*t2894;
  t3326 = t3324 + t3325 + t3190;
  t3509 = t2454*t3085*t2679;
  t3511 = -1.*t2758*t3414*t2679;
  t3329 = -1.*t3112*t2962;
  t3330 = t3328 + t3209 + t3329;
  t3530 = -1.*t2758*t2446*t2675*t3144;
  t3532 = t2446*t3409*t2683;
  t3430 = -1.*t2454*t2675*t2889;
  t3431 = t2758*t2878*t2675*t2681;
  t3432 = t3430 + t3431;
  t3537 = t2758*t2446*t2679*t3144;
  t3538 = -1.*t2446*t3409*t2951;
  t3486 = -1.*t2878*t2454*t2679;
  t3487 = -1.*t2758*t2679*t2889*t2681;
  t3488 = t3486 + t3487;
  t3366 = t2454*t3085;
  t3380 = -1.*t2758*t3085*t2675;
  t3367 = -1.*t2758*t2681*t3112;
  t3368 = t3366 + t3367 + t3233;
  t3566 = t2758*t3085;
  t3568 = t2454*t3414;
  t3448 = Power(t2681,2);
  t3572 = t2454*t3085*t2675;
  t3574 = -1.*t2758*t3414*t2675;
  t3381 = -1.*t3112*t2894;
  t3382 = t3380 + t3381 + t3245;
  t3593 = t2758*t3446*t3409;
  t3596 = -1.*t2446*t2454*t3144;
  t3600 = t2758*t2446*t2675*t3144;
  t3602 = -1.*t2446*t3409*t2683;
  t3404 = -1.*t2758*t3109;
  t3405 = t3265 + t3404;
  t3625 = -1.*t2668*t2456;
  t3626 = -1.*t2660*t2673;
  t3627 = t3625 + t3626;
  t3642 = -0.325*t2668;
  t3643 = t3642 + t3094 + t3098;
  t3031 = t2749*t2951;
  t3032 = -1.*t2422*t2970;
  t3033 = t3031 + t3032;
  t3635 = 0.325*t2660;
  t3636 = -1.*t2668*t3066;
  t3637 = -1.*t2660*t3074;
  t3638 = t3635 + t3636 + t3637;
  t3633 = t2758*t3085*t2948;
  t3641 = Power(t2758,2);
  t3644 = t3641*t3643*t2679;
  t3666 = -1.*t2446*t2454*t3643;
  t3667 = t3638*t2681;
  t3668 = t3666 + t3667;
  t3657 = -1.*t2446*t2454*t2948;
  t3658 = t3627*t2681;
  t3659 = t3657 + t3658;
  t3662 = t2446*t3638;
  t3663 = t2454*t3643*t2681;
  t3664 = t3662 + t3663;
  t3673 = t2446*t3627;
  t3674 = t2454*t2948*t2681;
  t3675 = t3673 + t3674;
  t3669 = -1.*t2758*t2446*t3668;
  t3672 = t3668*t2951;
  t3677 = t3144*t3659;
  t3683 = t2758*t2948*t2889;
  t3684 = t2878*t3675;
  t3685 = t3683 + t3684;
  t3687 = t2758*t3643*t2889;
  t3688 = t2878*t3664;
  t3689 = t3687 + t3688;
  t3691 = t2758*t2878*t3643;
  t3692 = -1.*t2889*t3664;
  t3693 = t3691 + t3692;
  t3504 = -1.*t3099*t2948;
  t3505 = t2454*t3109*t2679;
  t3506 = t3504 + t3328 + t3505;
  t3514 = -1.*t2454*t3109*t2675;
  t3515 = t3099*t2679;
  t3516 = t3324 + t3514 + t3515;
  t3645 = Power(t2454,2);
  t3418 = t3099*t2948;
  t3419 = -1.*t2454*t3109*t2679;
  t3713 = -1.*t3638*t2948;
  t3714 = -1.*t3099*t3627;
  t3721 = t3638*t2679;
  t3719 = t3641*t3643*t2675;
  t3711 = -1.*t2758*t3085*t2948;
  t3715 = -1.*t3641*t3643*t2679;
  t3745 = t3668*t2683;
  t3748 = -1.*t3668*t2951;
  t3750 = -1.*t3144*t3659;
  t3698 = t2758*t2878*t2948;
  t3699 = -1.*t2889*t3675;
  t3700 = t3698 + t3699;
  t3562 = t2758*t3109;
  t3563 = t3366 + t3562;
  t3773 = -1.*t3641*t3643*t2675;
  t3792 = t2758*t2446*t3668;
  t3796 = -1.*t3668*t2683;
  t3815 = -0.28*t2456;
  t3816 = 0.0641*t2673;
  t3817 = t3815 + t3816;
  t3829 = t2660*t3066;
  t3830 = t2668*t3817;
  t3831 = t3829 + t3830;
  t3839 = t2446*t2675;
  t3840 = t2454*t3627*t2681;
  t3841 = t3839 + t3840;
  t3845 = -1.*t2446*t2454*t3627;
  t3846 = t2675*t2681;
  t3847 = t3845 + t3846;
  t3849 = t2758*t2878*t3627;
  t3850 = -1.*t2889*t3841;
  t3851 = t3849 + t3850;
  t3826 = -1.*t2660*t3817;
  t3827 = t3067 + t3826;
  t3832 = t3641*t3831*t2679;
  t3865 = -1.*t2446*t2454*t3831;
  t3866 = t3827*t2681;
  t3867 = t3865 + t3866;
  t3861 = t2446*t3827;
  t3862 = t2454*t3831*t2681;
  t3863 = t3861 + t3862;
  t3868 = -1.*t2758*t2446*t3867;
  t3871 = t3867*t2951;
  t3878 = t2758*t3831*t2889;
  t3879 = t2878*t3863;
  t3880 = t3878 + t3879;
  t3882 = t2758*t2878*t3831;
  t3883 = -1.*t2889*t3863;
  t3884 = t3882 + t3883;
  t3577 = t2454*t3109*t2675;
  t3578 = -1.*t3099*t2679;
  t3726 = t3081*t2675;
  t3727 = t3726 + t3515;
  t3733 = -1.*t3081*t2679;
  t3734 = t3504 + t3733;
  t3897 = -1.*t3827*t2948;
  t3902 = t3099*t2675;
  t3907 = t3827*t2679;
  t3903 = t3641*t3831*t2675;
  t3905 = t2758*t3085*t3627;
  t3898 = -1.*t3641*t3831*t2679;
  t3925 = t3144*t3847;
  t3928 = t3867*t2683;
  t3838 = t2758*t3627*t2889;
  t3842 = t2878*t3841;
  t3843 = t3838 + t3842;
  t3932 = -1.*t3867*t2951;
  t2906 = t2749*t2683;
  t2907 = -1.*t2422*t2900;
  t2911 = t2906 + t2907;
  t3961 = -1.*t3641*t3831*t2675;
  t3963 = -1.*t2758*t3085*t3627;
  t3979 = t2758*t2446*t3867;
  t3982 = -1.*t3144*t3847;
  t3985 = -1.*t3867*t2683;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t2422*t2683 - 1.*t2749*t2900)*var2[1] + t2911*var2[2];
  p_output1[10]=(-1.*t2422*t2446*t2758 - 1.*t2749*t2919)*var2[1] + (t2446*t2749*t2758 - 1.*t2422*t2919)*var2[2];
  p_output1[11]=(-1.*t2422*t2951 - 1.*t2749*t2970)*var2[1] + t3033*var2[2];
  p_output1[12]=t2900*var2[0] - 1.*t2422*t3047*var2[1] + t2749*t3047*var2[2] + (t3057*(-1.*t2919*t3114 - 1.*t2919*t3121 - 1.*t3125*t3128 - 1.*t3128*t3133) + t2970*t3151 + t3125*(t2970*t3114 + t2970*t3121 + t3057*t3128 + t3128*t3155) + t2919*t3169)*var2[3];
  p_output1[13]=t2919*var2[0] - 1.*t2422*t3133*var2[1] + t2749*t3133*var2[2] + ((-1.*t2970*t3114 - 1.*t2970*t3121 - 1.*t3057*t3128 - 1.*t3128*t3155)*t3183 + t3057*(t2900*t3114 + t2900*t3121 + t3047*t3128 + t3128*t3183) + t2970*t3198 + t2900*t3212)*var2[3];
  p_output1[14]=t2970*var2[0] - 1.*t2422*t3155*var2[1] + t2749*t3155*var2[2] + ((t2919*t3114 + t2919*t3121 + t3125*t3128 + t3128*t3133)*t3183 + t3125*(-1.*t2900*t3114 - 1.*t2900*t3121 - 1.*t3047*t3128 - 1.*t3128*t3183) + t2900*t3236 + t2919*t3248)*var2[3];
  p_output1[15]=t2878*t3255*var2[0] + (t2749*t2894 + t2422*t2889*t3255)*var2[1] + (t2422*t2894 - 1.*t2749*t2889*t3255)*var2[2] + (-1.*t2446*t2758*t2878*t3169 + t3057*(-1.*t2446*t2758*t3112 + t2446*t2758*t2878*t3121 - 1.*t2446*t2758*t2889*t3128 + t2889*t2919*t3271 - 1.*t2878*t3125*t3271 + t3273) + t2878*t3151*t3282 + t3125*(-1.*t2889*t2970*t3271 + t2878*t3057*t3271 + t2878*t3121*t3282 - 1.*t2889*t3128*t3282 + t3284 + t3286))*var2[3] + (t2962*t3267 + t2951*(t2681*t2758*t3271 + t3273) - 1.*t2681*t2758*t3278 + t2446*t2758*(t2962*t3271 + t3112*t3282 + t3284 + t3286))*var2[4];
  p_output1[16]=-1.*t2446*t2758*t2878*var2[0] + (-1.*t2681*t2749*t2758 - 1.*t2422*t2446*t2758*t2889)*var2[1] + (-1.*t2422*t2681*t2758 + t2446*t2749*t2758*t2889)*var2[2] + (t2878*t3212*t3255 + t2878*t3198*t3282 + t3057*(t2878*t3121*t3255 - 1.*t2889*t3128*t3255 - 1.*t2889*t2900*t3271 + t2878*t3183*t3271 + t3319 + t3321) + t3183*(t2889*t2970*t3271 - 1.*t2878*t3057*t3271 - 1.*t2878*t3121*t3282 + t2889*t3128*t3282 + t3333 + t3335))*var2[3] + (t2951*(t3112*t3255 + t2894*t3271 + t3319 + t3321) + t2962*t3326 + t2894*t3330 + t2683*(-1.*t2962*t3271 - 1.*t3112*t3282 + t3333 + t3335))*var2[4];
  p_output1[17]=t2878*t3282*var2[0] + (t2749*t2962 + t2422*t2889*t3282)*var2[1] + (t2422*t2962 - 1.*t2749*t2889*t3282)*var2[2] + (-1.*t2446*t2758*t2878*t3248 + t2878*t3236*t3255 + t3183*(t2446*t2758*t3112 - 1.*t2446*t2758*t2878*t3121 + t2446*t2758*t2889*t3128 - 1.*t2889*t2919*t3271 + t2878*t3125*t3271 + t3371) + t3125*(-1.*t2878*t3121*t3255 + t2889*t3128*t3255 + t2889*t2900*t3271 - 1.*t2878*t3183*t3271 + t3375 + t3377))*var2[3] + (t2894*t3368 + t2683*(-1.*t2681*t2758*t3271 + t3371) + t2446*t2758*(-1.*t3112*t3255 - 1.*t2894*t3271 + t3375 + t3377) - 1.*t2681*t2758*t3382)*var2[4];
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
  p_output1[36]=t3432*var2[0] + (-1.*t2446*t2675*t2749*t2758 - 1.*t2422*t3437)*var2[1] + (-1.*t2422*t2446*t2675*t2758 + t2749*t3437)*var2[2] + (t3151*t3465 + t3169*t3477 + t3057*(t3447 + t3451 - 1.*t3125*t3469 - 1.*t2919*t3473 - 1.*t3121*t3477 - 1.*t3128*t3481) + t3125*(t3455 + t3456 + t3121*t3465 + t3057*t3469 + t2970*t3473 + t3128*t3488))*var2[3] + (-1.*t2446*t2679*t2758*t3267 - 1.*t2446*t2454*t3278 + t2951*(-1.*t2454*t2681*t3112 + t3411 + t3415 + t3447 - 1.*t2758*t3409*t3448 + t3451) + t2446*t2758*(t2679*t2681*t2758*t3112 - 1.*t2681*t2962*t3409 + t3423 + t3425 + t3455 + t3456))*var2[4] + (-1.*t2454*t2679*t3405 + t2679*t2758*(t2454*t3109 - 1.*t2758*t3409 + t3411 + t3415) + t2758*(t3276 + t3418 + t3419) + t2454*(-1.*t2679*t2758*t3109 - 1.*t2454*t2679*t3409 + t3423 + t3425))*var2[5];
  p_output1[37]=t3477*var2[0] + (-1.*t2446*t2454*t2749 - 1.*t2422*t3481)*var2[1] + (-1.*t2422*t2446*t2454 + t2749*t3481)*var2[2] + (t3212*t3432 + t3198*t3465 + t3057*(t3121*t3432 + t3128*t3437 + t3183*t3469 + t2900*t3473 + t3530 + t3532) + t3183*(-1.*t3121*t3465 - 1.*t3057*t3469 - 1.*t2970*t3473 - 1.*t3128*t3488 + t3537 + t3538))*var2[3] + (-1.*t2446*t2679*t2758*t3326 - 1.*t2446*t2675*t2758*t3330 + t2951*(t2675*t2681*t2758*t3112 - 1.*t2681*t2894*t3409 + t3499 + t3501 + t3530 + t3532) + t2683*(-1.*t2679*t2681*t2758*t3112 + t2681*t2962*t3409 + t3509 + t3511 + t3537 + t3538))*var2[4] + (t2679*t2758*(-1.*t2675*t2758*t3109 - 1.*t2454*t2675*t3409 + t3499 + t3501) - 1.*t2454*t2675*t3506 + t2675*t2758*(t2679*t2758*t3109 + t2454*t2679*t3409 + t3509 + t3511) - 1.*t2454*t2679*t3516)*var2[5];
  p_output1[38]=t3465*var2[0] + (-1.*t2446*t2679*t2749*t2758 - 1.*t2422*t3488)*var2[1] + (-1.*t2422*t2446*t2679*t2758 + t2749*t3488)*var2[2] + (t3236*t3432 + t3248*t3477 + t3183*(t3125*t3469 + t2919*t3473 + t3121*t3477 + t3128*t3481 + t3593 + t3596) + t3125*(-1.*t3121*t3432 - 1.*t3128*t3437 - 1.*t3183*t3469 - 1.*t2900*t3473 + t3600 + t3602))*var2[3] + (-1.*t2446*t2675*t2758*t3368 - 1.*t2446*t2454*t3382 + t2683*(t2454*t2681*t3112 + t2758*t3409*t3448 + t3566 + t3568 + t3593 + t3596) + t2446*t2758*(-1.*t2675*t2681*t2758*t3112 + t2681*t2894*t3409 + t3572 + t3574 + t3600 + t3602))*var2[4] + (-1.*t2454*t2675*t3563 + t2675*t2758*(-1.*t2454*t3109 + t2758*t3409 + t3566 + t3568) + t2454*(t2675*t2758*t3109 + t2454*t2675*t3409 + t3572 + t3574) + t2758*(t3380 + t3577 + t3578))*var2[5];
  p_output1[39]=t3057*var2[0] + t3033*var2[1] + (t2422*t2951 + t2749*t2970)*var2[2] + (t3151*t3685 + t3057*(t3669 - 1.*t3125*t3689 - 1.*t2919*t3693) + t3125*(t3672 + t3677 + t3121*t3685 + t3057*t3689 + t2970*t3693 + t3128*t3700))*var2[3] + (t3267*t3659 + t2951*(-1.*t2454*t2758*t3643 + t2681*t2758*t3664 + t3669) + t2446*t2758*(t3633 + t3644 + t2962*t3664 + t3672 + t3112*t3675 + t3677))*var2[4] + (t2758*t2948*t3405 + t2454*(-1.*t2454*t2948*t3109 + t3099*t3627 + t3633 + t2948*t3638 + t3644 + t2679*t3643*t3645))*var2[5] + (0.1575*t2679 + 0.2255*t3627)*var2[12];
  p_output1[40]=(t3057*t3212 + t3198*t3685 + t3057*(t3166 + t3167 + t3168 + t3183*t3689 + t2900*t3693 + t3745) + t3183*(-1.*t3121*t3685 - 1.*t3057*t3689 - 1.*t2970*t3693 - 1.*t3128*t3700 + t3748 + t3750))*var2[3] + (t2951*t3330 + t3326*t3659 + t2951*(t3166 + t3276 + t3277 + t2894*t3664 + t3719 + t3745) + t2683*(-1.*t2962*t3664 - 1.*t3112*t3675 + t3711 + t3715 + t3748 + t3750))*var2[4] + (t2679*t2758*t3506 + t2758*t2948*t3516 + t2675*t2758*(t2454*t2948*t3109 - 1.*t2679*t3643*t3645 + t3711 + t3713 + t3714 + t3715) + t2679*t2758*(t3276 + t3418 + t3419 + t2675*t3643*t3645 + t3719 + t3721))*var2[5] + (t2679*(-1.*t2948*t3081 - 1.*t2679*t3643 + t3713 + t3714) + t2948*(t2679*t3081 + t3418 + t2675*t3643 + t3721) + t3627*t3727 + t2948*t3734)*var2[12];
  p_output1[41]=t3685*var2[0] + (t2749*t3659 - 1.*t2422*t3700)*var2[1] + (t2422*t3659 + t2749*t3700)*var2[2] + (t3057*t3236 + t3183*(t3125*t3689 + t2919*t3693 + t3792) + t3125*(t3209 + t3210 + t3211 - 1.*t3183*t3689 - 1.*t2900*t3693 + t3796))*var2[3] + (t2951*t3368 + t2683*(t2454*t2758*t3643 - 1.*t2681*t2758*t3664 + t3792) + t2446*t2758*(t3209 + t3328 + t3329 - 1.*t2894*t3664 + t3773 + t3796))*var2[4] + (t2679*t2758*t3563 + t2454*(t3328 + t3504 + t3505 - 1.*t2679*t3638 - 1.*t2675*t3643*t3645 + t3773))*var2[5] - 0.068*t2948*var2[12];
  p_output1[42]=t3843*var2[0] + (t2749*t3847 - 1.*t2422*t3851)*var2[1] + (t2422*t3847 + t2749*t3851)*var2[2] + (t3151*t3183 + t3057*(t3868 - 1.*t3125*t3880 - 1.*t2919*t3884) + t3125*(t3190 + t3191 + t3194 + t3871 + t3057*t3880 + t2970*t3884))*var2[3] + (t2683*t3267 + t2951*(-1.*t2454*t2758*t3831 + t2681*t2758*t3863 + t3868) + t2446*t2758*(t3190 + t3324 + t3325 + t3832 + t2962*t3863 + t3871))*var2[4] + (t2675*t2758*t3405 + t2454*(t3324 + t3514 + t3515 + t2948*t3827 + t2679*t3645*t3831 + t3832))*var2[5] + (0.2255*t2679 + 0.1575*t3627)*var2[12] + (0.325*t2456 - 1.*t2456*t3074 - 1.*t2456*t3817)*var2[13];
  p_output1[43]=(t3183*t3198 + t3212*t3843 + t3057*(t3121*t3843 + t3128*t3851 + t3183*t3880 + t2900*t3884 + t3925 + t3928) + t3183*(t3245 + t3246 + t3247 - 1.*t3057*t3880 - 1.*t2970*t3884 + t3932))*var2[3] + (t2683*t3326 + t3330*t3847 + t2951*(t3112*t3841 + t2894*t3863 + t3903 + t3905 + t3925 + t3928) + t2683*(t3245 + t3380 + t3381 - 1.*t2962*t3863 + t3898 + t3932))*var2[4] + (t2675*t2758*t3516 + t2758*t3506*t3627 + t2675*t2758*(t3380 + t3577 + t3578 - 1.*t2679*t3645*t3831 + t3897 + t3898) + t2679*t2758*(-1.*t2454*t3109*t3627 + t2675*t3645*t3831 + t3902 + t3903 + t3905 + t3907))*var2[5] + (t2679*t3727 + t2675*t3734 + t2679*(-1.*t2675*t3081 + t3578 - 1.*t2679*t3831 + t3897) + t2948*(t3081*t3627 + t2675*t3831 + t3902 + t3907))*var2[12];
  p_output1[44]=t3183*var2[0] + t2911*var2[1] + (t2422*t2683 + t2749*t2900)*var2[2] + (t3236*t3843 + t3183*(t3125*t3880 + t2919*t3884 + t3979) + t3125*(-1.*t3121*t3843 - 1.*t3128*t3851 - 1.*t3183*t3880 - 1.*t2900*t3884 + t3982 + t3985))*var2[3] + (t3368*t3847 + t2683*(t2454*t2758*t3831 - 1.*t2681*t2758*t3863 + t3979) + t2446*t2758*(-1.*t3112*t3841 - 1.*t2894*t3863 + t3961 + t3963 + t3982 + t3985))*var2[4] + (t2758*t3563*t3627 + t2454*(-1.*t2675*t3099 + t2454*t3109*t3627 - 1.*t2679*t3827 - 1.*t2675*t3645*t3831 + t3961 + t3963))*var2[5] - 0.068*t2675*var2[12] + (0.325*t2673 - 1.*t2673*t3074 - 1.*t2673*t3817)*var2[13];
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
