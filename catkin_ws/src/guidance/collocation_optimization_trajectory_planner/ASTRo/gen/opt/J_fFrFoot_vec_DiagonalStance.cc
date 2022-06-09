/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:52:36 GMT+02:00
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
  double t1148;
  double t2761;
  double t2302;
  double t2936;
  double t2943;
  double t2922;
  double t2968;
  double t2319;
  double t2997;
  double t2998;
  double t3011;
  double t2775;
  double t2862;
  double t2941;
  double t2977;
  double t2985;
  double t3128;
  double t3135;
  double t3151;
  double t3152;
  double t3155;
  double t3156;
  double t3158;
  double t3160;
  double t3161;
  double t3168;
  double t3176;
  double t3182;
  double t3183;
  double t3065;
  double t3068;
  double t3069;
  double t3094;
  double t3097;
  double t3099;
  double t3030;
  double t3033;
  double t3034;
  double t3185;
  double t3187;
  double t3188;
  double t3213;
  double t3215;
  double t3216;
  double t2699;
  double t2853;
  double t2855;
  double t3234;
  double t3239;
  double t3241;
  double t3286;
  double t3282;
  double t2988;
  double t3038;
  double t3040;
  double t3091;
  double t3101;
  double t3121;
  double t3399;
  double t3406;
  double t3407;
  double t3410;
  double t3411;
  double t3415;
  double t3417;
  double t3422;
  double t3423;
  double t3426;
  double t3431;
  double t3437;
  double t3438;
  double t3192;
  double t3199;
  double t3207;
  double t3333;
  double t3334;
  double t3338;
  double t3296;
  double t3306;
  double t3312;
  double t3255;
  double t3260;
  double t3261;
  double t3474;
  double t3479;
  double t3480;
  double t3287;
  double t3288;
  double t3290;
  double t3485;
  double t3490;
  double t3491;
  double t3525;
  double t3529;
  double t3530;
  double t3366;
  double t3374;
  double t3378;
  double t3385;
  double t3386;
  double t3390;
  double t3552;
  double t3553;
  double t3554;
  double t3558;
  double t3569;
  double t3570;
  double t3578;
  double t3579;
  double t3582;
  double t3583;
  double t3584;
  double t3589;
  double t3593;
  double t3441;
  double t3442;
  double t3445;
  double t3457;
  double t3458;
  double t3463;
  double t3498;
  double t3499;
  double t3500;
  double t3508;
  double t3513;
  double t3514;
  double t3609;
  double t3611;
  double t3615;
  double t3622;
  double t3623;
  double t3627;
  double t3664;
  double t3666;
  double t3667;
  double t3668;
  double t3669;
  double t3691;
  double t3699;
  double t3703;
  double t3705;
  double t3706;
  double t3708;
  double t3709;
  double t3715;
  double t3663;
  double t3675;
  double t3683;
  double t3684;
  double t3700;
  double t3719;
  double t3720;
  double t3722;
  double t3723;
  double t3727;
  double t3728;
  double t3729;
  double t3730;
  double t3733;
  double t3734;
  double t3744;
  double t3748;
  double t3750;
  double t3689;
  double t3735;
  double t3737;
  double t3777;
  double t3778;
  double t3781;
  double t3765;
  double t3766;
  double t3770;
  double t3773;
  double t3774;
  double t3782;
  double t3783;
  double t3993;
  double t3994;
  double t3995;
  double t3811;
  double t3812;
  double t3813;
  double t3815;
  double t3849;
  double t3852;
  double t3854;
  double t3856;
  double t3989;
  double t4001;
  double t3882;
  double t3890;
  double t3893;
  double t3894;
  double t3928;
  double t3931;
  double t3933;
  double t3934;
  double t3957;
  double t3964;
  double t3966;
  double t3967;
  double t3981;
  double t4014;
  double t4157;
  double t4158;
  double t4159;
  double t4160;
  double t4162;
  double t4164;
  double t4165;
  double t4027;
  double t4031;
  double t4045;
  double t4168;
  double t4170;
  double t4171;
  double t4062;
  double t4067;
  double t4071;
  double t4078;
  double t4082;
  double t4087;
  double t4089;
  double t4093;
  double t4102;
  double t4104;
  double t4111;
  double t4115;
  double t4121;
  double t4123;
  double t4127;
  double t4136;
  double t4137;
  double t4141;
  double t4143;
  double t4247;
  double t4248;
  double t4251;
  double t4253;
  double t4257;
  double t4258;
  double t4262;
  double t3190;
  double t3209;
  double t3210;
  double t4238;
  double t4239;
  double t4243;
  double t4254;
  double t4263;
  double t4264;
  double t4266;
  double t4267;
  double t4271;
  double t4368;
  double t4369;
  double t4377;
  double t4387;
  double t4388;
  double t4399;
  double t4400;
  double t4402;
  double t4382;
  double t4383;
  double t4384;
  double t4398;
  double t4404;
  double t4405;
  double t4407;
  double t4408;
  double t4409;
  double t3247;
  double t3265;
  double t3266;
  double t4025;
  double t4049;
  double t4085;
  double t4095;
  double t4116;
  double t4128;
  double t4527;
  double t4528;
  double t4529;
  double t4172;
  double t4531;
  double t4175;
  double t4535;
  double t4540;
  double t4541;
  double t4542;
  double t4543;
  double t4546;
  double t4547;
  double t4549;
  double t4189;
  double t4551;
  double t4195;
  double t4555;
  double t4559;
  double t4561;
  double t4562;
  double t4563;
  double t4209;
  double t4582;
  double t4588;
  double t4592;
  double t4593;
  double t4594;
  double t4217;
  double t4598;
  double t4611;
  double t4612;
  double t4613;
  double t4614;
  double t4244;
  double t4285;
  double t4286;
  double t4301;
  double t4302;
  double t4320;
  double t4335;
  double t4351;
  double t4385;
  double t4424;
  double t4438;
  double t4455;
  double t4456;
  double t4477;
  double t4491;
  double t4494;
  double t4725;
  double t4728;
  double t4952;
  double t4954;
  double t4746;
  double t4918;
  double t4919;
  double t4921;
  double t4932;
  double t4933;
  double t4934;
  double t4942;
  double t4943;
  double t4944;
  double t4834;
  double t4842;
  double t4845;
  double t4979;
  double t4980;
  double t4981;
  double t5023;
  double t5024;
  double t5031;
  double t5034;
  double t5036;
  double t5037;
  double t5048;
  double t5053;
  double t5099;
  double t5100;
  t1148 = Sin(var1[4]);
  t2761 = Cos(var1[12]);
  t2302 = Cos(var1[5]);
  t2936 = Cos(var1[14]);
  t2943 = Sin(var1[13]);
  t2922 = Cos(var1[13]);
  t2968 = Sin(var1[14]);
  t2319 = Sin(var1[12]);
  t2997 = t2936*t2943;
  t2998 = -1.*t2922*t2968;
  t3011 = t2997 + t2998;
  t2775 = Sin(var1[5]);
  t2862 = Cos(var1[4]);
  t2941 = t2922*t2936;
  t2977 = t2943*t2968;
  t2985 = t2941 + t2977;
  t3128 = -1.*t2761*t2302;
  t3135 = t2319*t2775;
  t3151 = t3128 + t3135;
  t3152 = var2[1]*t2862*t3151;
  t3155 = -1.*t2302*t2319*t3011;
  t3156 = -1.*t2761*t3011*t2775;
  t3158 = t3155 + t3156;
  t3160 = var2[2]*t2862*t3158;
  t3161 = -1.*t2302*t2319*t2985;
  t3168 = -1.*t2761*t2985*t2775;
  t3176 = t3161 + t3168;
  t3182 = var2[0]*t2862*t3176;
  t3183 = t3152 + t3160 + t3182;
  t3065 = -1.*t2936*t2943;
  t3068 = t2922*t2968;
  t3069 = t3065 + t3068;
  t3094 = t2761*t2302*t2985;
  t3097 = -1.*t2319*t2985*t2775;
  t3099 = t3094 + t3097;
  t3030 = t2761*t2302*t3011;
  t3033 = -1.*t2319*t3011*t2775;
  t3034 = t3030 + t3033;
  t3185 = -1.*t2922*t2936;
  t3187 = -1.*t2943*t2968;
  t3188 = t3185 + t3187;
  t3213 = t3069*t1148;
  t3215 = t2862*t3099;
  t3216 = t3213 + t3215;
  t2699 = -1.*t2302*t2319;
  t2853 = -1.*t2761*t2775;
  t2855 = t2699 + t2853;
  t3234 = t2985*t1148;
  t3239 = t2862*t3034;
  t3241 = t3234 + t3239;
  t3286 = Sin(var1[3]);
  t3282 = Cos(var1[3]);
  t2988 = t2862*t2985;
  t3038 = -1.*t1148*t3034;
  t3040 = t2988 + t3038;
  t3091 = t2862*t3069;
  t3101 = -1.*t1148*t3099;
  t3121 = t3091 + t3101;
  t3399 = t3282*t2855;
  t3406 = t3286*t1148*t3151;
  t3407 = t3399 + t3406;
  t3410 = var2[1]*t3407;
  t3411 = t3286*t1148*t3158;
  t3415 = t3282*t3034;
  t3417 = t3411 + t3415;
  t3422 = var2[2]*t3417;
  t3423 = t3286*t1148*t3176;
  t3426 = t3282*t3099;
  t3431 = t3423 + t3426;
  t3437 = var2[0]*t3431;
  t3438 = t3410 + t3422 + t3437;
  t3192 = t2761*t2302*t3069;
  t3199 = -1.*t2319*t3069*t2775;
  t3207 = t3192 + t3199;
  t3333 = t2302*t2319*t2985;
  t3334 = t2761*t2985*t2775;
  t3338 = t3333 + t3334;
  t3296 = t2302*t2319*t3011;
  t3306 = t2761*t3011*t2775;
  t3312 = t3296 + t3306;
  t3255 = t2761*t2302*t3188;
  t3260 = -1.*t2319*t3188*t2775;
  t3261 = t3255 + t3260;
  t3474 = t3282*t3338;
  t3479 = -1.*t3286*t3121;
  t3480 = t3474 + t3479;
  t3287 = t2761*t2302;
  t3288 = -1.*t2319*t2775;
  t3290 = t3287 + t3288;
  t3485 = t3282*t3312;
  t3490 = -1.*t3286*t3040;
  t3491 = t3485 + t3490;
  t3525 = t3286*t1148*t2855;
  t3529 = t3282*t3290;
  t3530 = t3525 + t3529;
  t3366 = -1.*t2985*t1148;
  t3374 = -1.*t2862*t3034;
  t3378 = t3366 + t3374;
  t3385 = -1.*t3069*t1148;
  t3386 = -1.*t2862*t3099;
  t3390 = t3385 + t3386;
  t3552 = t3286*t2855;
  t3553 = -1.*t3282*t1148*t3151;
  t3554 = t3552 + t3553;
  t3558 = var2[1]*t3554;
  t3569 = -1.*t3282*t1148*t3158;
  t3570 = t3286*t3034;
  t3578 = t3569 + t3570;
  t3579 = var2[2]*t3578;
  t3582 = -1.*t3282*t1148*t3176;
  t3583 = t3286*t3099;
  t3584 = t3582 + t3583;
  t3589 = var2[0]*t3584;
  t3593 = t3558 + t3579 + t3589;
  t3441 = t2302*t2319*t3069;
  t3442 = t2761*t3069*t2775;
  t3445 = t3441 + t3442;
  t3457 = t2862*t3188;
  t3458 = -1.*t1148*t3207;
  t3463 = t3457 + t3458;
  t3498 = t2302*t2319*t3188;
  t3499 = t2761*t3188*t2775;
  t3500 = t3498 + t3499;
  t3508 = t2862*t3011;
  t3513 = -1.*t1148*t3261;
  t3514 = t3508 + t3513;
  t3609 = t3286*t3338;
  t3611 = t3282*t3121;
  t3615 = t3609 + t3611;
  t3622 = t3286*t3312;
  t3623 = t3282*t3040;
  t3627 = t3622 + t3623;
  t3664 = -1.*t2936;
  t3666 = 1. + t3664;
  t3667 = 0.50321*t3666;
  t3668 = 0.19821*t2936;
  t3669 = t3667 + t3668;
  t3691 = -1.*t2761;
  t3699 = 1. + t3691;
  t3703 = -1.*t2922;
  t3705 = 1. + t3703;
  t3706 = 0.28121*t3705;
  t3708 = t2922*t3669;
  t3709 = -0.305*t2943*t2968;
  t3715 = t3706 + t3708 + t3709;
  t3663 = 0.28121*t2943;
  t3675 = -1.*t3669*t2943;
  t3683 = -0.305*t2922*t2968;
  t3684 = t3663 + t3675 + t3683;
  t3700 = 0.15121*t3699;
  t3719 = t2761*t3715;
  t3720 = t3700 + t3719;
  t3722 = t2302*t3720;
  t3723 = -0.15121*t3699;
  t3727 = -0.15121*t2761;
  t3728 = -0.15121*t2319;
  t3729 = t2319*t3715;
  t3730 = t3723 + t3727 + t3728 + t3729;
  t3733 = -1.*t3730*t2775;
  t3734 = t3722 + t3733;
  t3744 = t3684*t1148;
  t3748 = t2862*t3734;
  t3750 = t3744 + t3748;
  t3689 = -1.*t3684*t1148;
  t3735 = -1.*t2862*t3734;
  t3737 = t3689 + t3735;
  t3777 = t2862*t3684;
  t3778 = -1.*t1148*t3734;
  t3781 = t3777 + t3778;
  t3765 = t2302*t3730;
  t3766 = t3720*t2775;
  t3770 = t3765 + t3766;
  t3773 = -1.*t3290*t3770;
  t3774 = -1.*t2862*t2855*t3750;
  t3782 = t1148*t2855*t3781;
  t3783 = t3773 + t3774 + t3782;
  t3993 = -1.*t2302*t3730;
  t3994 = -1.*t3720*t2775;
  t3995 = t3993 + t3994;
  t3811 = t3312*t3770;
  t3812 = t3241*t3750;
  t3813 = t3040*t3781;
  t3815 = t3811 + t3812 + t3813;
  t3849 = t3290*t3770;
  t3852 = t2862*t2855*t3750;
  t3854 = -1.*t1148*t2855*t3781;
  t3856 = t3849 + t3852 + t3854;
  t3989 = Power(t2862,2);
  t4001 = Power(t1148,2);
  t3882 = -1.*t3338*t3770;
  t3890 = -1.*t3216*t3750;
  t3893 = -1.*t3121*t3781;
  t3894 = t3882 + t3890 + t3893;
  t3928 = -1.*t3312*t3770;
  t3931 = -1.*t3241*t3750;
  t3933 = -1.*t3040*t3781;
  t3934 = t3928 + t3931 + t3933;
  t3957 = t3338*t3770;
  t3964 = t3216*t3750;
  t3966 = t3121*t3781;
  t3967 = t3957 + t3964 + t3966;
  t3981 = t2862*t3158*t3783;
  t4014 = -1.*t2855*t3770;
  t4157 = 0.15121*t2319;
  t4158 = -1.*t2319*t3715;
  t4159 = t4157 + t4158;
  t4160 = t2302*t4159;
  t4162 = t3727 + t3719;
  t4164 = -1.*t4162*t2775;
  t4165 = t4160 + t4164;
  t4027 = -1.*t2862*t3151*t3750;
  t4031 = t1148*t3151*t3781;
  t4045 = t3034*t3770;
  t4168 = t2302*t4162;
  t4170 = t4159*t2775;
  t4171 = t4168 + t4170;
  t4062 = t2862*t3158*t3750;
  t4067 = -1.*t1148*t3158*t3781;
  t4071 = t2862*t3151*t3815;
  t4078 = t2862*t3176*t3856;
  t4082 = t2855*t3770;
  t4087 = t2862*t3151*t3750;
  t4089 = -1.*t1148*t3151*t3781;
  t4093 = -1.*t3099*t3770;
  t4102 = -1.*t2862*t3176*t3750;
  t4104 = t1148*t3176*t3781;
  t4111 = t2862*t3151*t3894;
  t4115 = -1.*t3034*t3770;
  t4121 = -1.*t2862*t3158*t3750;
  t4123 = t1148*t3158*t3781;
  t4127 = t3099*t3770;
  t4136 = t2862*t3176*t3750;
  t4137 = -1.*t1148*t3176*t3781;
  t4141 = t2862*t3176*t3934;
  t4143 = t2862*t3158*t3967;
  t4247 = 0.28121*t2922;
  t4248 = -1.*t2922*t3669;
  t4251 = 0.305*t2943*t2968;
  t4253 = t4247 + t4248 + t4251;
  t4257 = t2761*t2302*t3684;
  t4258 = -1.*t2319*t3684*t2775;
  t4262 = t4257 + t4258;
  t3190 = t3188*t1148;
  t3209 = t2862*t3207;
  t3210 = t3190 + t3209;
  t4238 = t2302*t2319*t3684;
  t4239 = t2761*t3684*t2775;
  t4243 = t4238 + t4239;
  t4254 = t4253*t1148;
  t4263 = t2862*t4262;
  t4264 = t4254 + t4263;
  t4266 = t2862*t4253;
  t4267 = -1.*t1148*t4262;
  t4271 = t4266 + t4267;
  t4368 = -0.305*t2936*t2943;
  t4369 = 0.305*t2922*t2968;
  t4377 = t4368 + t4369;
  t4387 = -0.305*t2922*t2936;
  t4388 = t4387 + t3709;
  t4399 = t2761*t2302*t4377;
  t4400 = -1.*t2319*t4377*t2775;
  t4402 = t4399 + t4400;
  t4382 = t2302*t2319*t4377;
  t4383 = t2761*t4377*t2775;
  t4384 = t4382 + t4383;
  t4398 = t4388*t1148;
  t4404 = t2862*t4402;
  t4405 = t4398 + t4404;
  t4407 = t2862*t4388;
  t4408 = -1.*t1148*t4402;
  t4409 = t4407 + t4408;
  t3247 = t3011*t1148;
  t3265 = t2862*t3261;
  t3266 = t3247 + t3265;
  t4025 = -1.*t3290*t3734;
  t4049 = t3312*t3734;
  t4085 = t3290*t3734;
  t4095 = -1.*t3338*t3734;
  t4116 = -1.*t3312*t3734;
  t4128 = t3338*t3734;
  t4527 = -1.*t2855*t3734;
  t4528 = t3773 + t4527;
  t4529 = t3034*t4528;
  t4172 = -1.*t3290*t4171;
  t4531 = -1.*t3151*t3734;
  t4175 = t3312*t4171;
  t4535 = t3158*t3734;
  t4540 = t3684*t2985;
  t4541 = t3034*t3734;
  t4542 = t4540 + t3811 + t4541;
  t4543 = t2855*t4542;
  t4546 = t2855*t3734;
  t4547 = t3849 + t4546;
  t4549 = t3099*t4547;
  t4189 = t3290*t4171;
  t4551 = t3151*t3734;
  t4195 = -1.*t3338*t4171;
  t4555 = -1.*t3176*t3734;
  t4559 = -1.*t3684*t3069;
  t4561 = -1.*t3099*t3734;
  t4562 = t4559 + t3882 + t4561;
  t4563 = t2855*t4562;
  t4209 = -1.*t3312*t4171;
  t4582 = -1.*t3158*t3734;
  t4588 = -1.*t3684*t2985;
  t4592 = -1.*t3034*t3734;
  t4593 = t4588 + t3928 + t4592;
  t4594 = t3099*t4593;
  t4217 = t3338*t4171;
  t4598 = t3176*t3734;
  t4611 = t3684*t3069;
  t4612 = t3099*t3734;
  t4613 = t4611 + t3957 + t4612;
  t4614 = t3034*t4613;
  t4244 = t3290*t4243;
  t4285 = -1.*t4243*t3338;
  t4286 = -1.*t3445*t3770;
  t4301 = t4243*t3338;
  t4302 = t3445*t3770;
  t4320 = -1.*t3312*t4243;
  t4335 = -1.*t3290*t4243;
  t4351 = t3312*t4243;
  t4385 = t3290*t4384;
  t4424 = -1.*t4384*t3338;
  t4438 = -1.*t3290*t4384;
  t4455 = t3312*t4384;
  t4456 = t3500*t3770;
  t4477 = t4384*t3338;
  t4491 = -1.*t3312*t4384;
  t4494 = -1.*t3500*t3770;
  t4725 = t3684*t3188;
  t4728 = t3069*t4253;
  t4952 = Power(t2761,2);
  t4954 = Power(t2319,2);
  t4746 = -1.*t4253*t2985;
  t4918 = t2319*t3720;
  t4919 = -1.*t2761*t3730;
  t4921 = t4918 + t4919;
  t4932 = -1.*t2319*t3720;
  t4933 = t2761*t3730;
  t4934 = t4932 + t4933;
  t4942 = -1.*t2761*t3011*t3720;
  t4943 = -1.*t2319*t3011*t3730;
  t4944 = t4588 + t4942 + t4943;
  t4834 = t3069*t4388;
  t4842 = -1.*t3011*t3684;
  t4845 = -1.*t4388*t2985;
  t4979 = t2761*t2985*t3720;
  t4980 = t2319*t2985*t3730;
  t4981 = t4611 + t4979 + t4980;
  t5023 = -0.15121*t3188;
  t5024 = -0.15121*t2985;
  t5031 = t5023 + t5024;
  t5034 = var2[2]*t5031;
  t5036 = -1.*t3011*t3715;
  t5037 = t5036 + t4588;
  t5048 = t3715*t2985;
  t5053 = t4611 + t5048;
  t5099 = 0.28121*t2936;
  t5100 = -1.*t3669*t2936;
  p_output1[0]=t3121*var2[0] - 1.*t1148*t2855*var2[1] + t3040*var2[2];
  p_output1[1]=t3183;
  p_output1[2]=t3183;
  p_output1[3]=t3210*var2[0] + t3216*var2[2];
  p_output1[4]=t3241*var2[0] + t3266*var2[2];
  p_output1[5]=t3216;
  p_output1[6]=t2855*t2862;
  p_output1[7]=t3241;
  p_output1[8]=(-1.*t3121*t3282 - 1.*t3286*t3338)*var2[0] + (t1148*t2855*t3282 - 1.*t3286*t3290)*var2[1] + (-1.*t3040*t3282 - 1.*t3286*t3312)*var2[2];
  p_output1[9]=-1.*t3286*t3390*var2[0] + t2855*t2862*t3286*var2[1] - 1.*t3286*t3378*var2[2];
  p_output1[10]=t3438;
  p_output1[11]=t3438;
  p_output1[12]=(t3282*t3445 - 1.*t3286*t3463)*var2[0] + t3480*var2[2];
  p_output1[13]=t3491*var2[0] + (t3282*t3500 - 1.*t3286*t3514)*var2[2];
  p_output1[14]=t3480;
  p_output1[15]=t3530;
  p_output1[16]=t3491;
  p_output1[17]=t3480*var2[0] + t3530*var2[1] + t3491*var2[2];
  p_output1[18]=t3282*t3390*var2[0] - 1.*t2855*t2862*t3282*var2[1] + t3282*t3378*var2[2];
  p_output1[19]=t3593;
  p_output1[20]=t3593;
  p_output1[21]=(t3286*t3445 + t3282*t3463)*var2[0] + t3615*var2[2];
  p_output1[22]=t3627*var2[0] + (t3286*t3500 + t3282*t3514)*var2[2];
  p_output1[23]=t3615;
  p_output1[24]=-1.*t1148*t2855*t3282 + t3286*t3290;
  p_output1[25]=t3627;
  p_output1[26]=(t3241*(t1148*t2855*t3737 + t1148*t2855*t3750) + t2855*t2862*(t3040*t3737 + t3040*t3750 + t3241*t3781 + t3378*t3781) + t3040*t3783 - 1.*t1148*t2855*t3815)*var2[0] + (t3216*(-1.*t3040*t3737 - 1.*t3040*t3750 - 1.*t3241*t3781 - 1.*t3378*t3781) + t3241*(t3121*t3737 + t3121*t3750 + t3216*t3781 + t3390*t3781) + t3121*t3934 + t3040*t3967)*var2[1] + (t3216*(-1.*t1148*t2855*t3737 - 1.*t1148*t2855*t3750) + t2855*t2862*(-1.*t3121*t3737 - 1.*t3121*t3750 - 1.*t3216*t3781 - 1.*t3390*t3781) + t3121*t3856 - 1.*t1148*t2855*t3894)*var2[2];
  p_output1[27]=(t3981 + t3241*(-1.*t2855*t3989*t3995 - 1.*t2855*t3995*t4001 + t4014 + t4025 + t4027 + t4031) + t2855*t2862*(-1.*t1148*t3040*t3995 + t2862*t3241*t3995 + t4045 + t4049 + t4062 + t4067) + t4071)*var2[0] + (t3216*(t1148*t3040*t3995 - 1.*t2862*t3241*t3995 + t4115 + t4116 + t4121 + t4123) + t3241*(-1.*t1148*t3121*t3995 + t2862*t3216*t3995 + t4127 + t4128 + t4136 + t4137) + t4141 + t4143)*var2[1] + (t4078 + t3216*(t2855*t3989*t3995 + t2855*t3995*t4001 + t4082 + t4085 + t4087 + t4089) + t2855*t2862*(t1148*t3121*t3995 - 1.*t2862*t3216*t3995 + t4093 + t4095 + t4102 + t4104) + t4111)*var2[2];
  p_output1[28]=(t3981 + t4071 + t3241*(t4014 + t4027 + t4031 - 1.*t2855*t3989*t4165 - 1.*t2855*t4001*t4165 + t4172) + t2855*t2862*(t4045 + t4062 + t4067 - 1.*t1148*t3040*t4165 + t2862*t3241*t4165 + t4175))*var2[0] + (t4141 + t4143 + t3216*(t4115 + t4121 + t4123 + t1148*t3040*t4165 - 1.*t2862*t3241*t4165 + t4209) + t3241*(t4127 + t4136 + t4137 - 1.*t1148*t3121*t4165 + t2862*t3216*t4165 + t4217))*var2[1] + (t4078 + t4111 + t3216*(t4082 + t4087 + t4089 + t2855*t3989*t4165 + t2855*t4001*t4165 + t4189) + t2855*t2862*(t4093 + t4102 + t4104 + t1148*t3121*t4165 - 1.*t2862*t3216*t4165 + t4195))*var2[2];
  p_output1[29]=(t3216*t3783 + t3241*(-1.*t2855*t2862*t4264 + t1148*t2855*t4271 + t4335) + t2855*t2862*(t3957 + t3964 + t3966 + t3241*t4264 + t3040*t4271 + t4351))*var2[0] + (t3210*t3934 + t3216*t3967 + t3241*(t3210*t3750 + t3463*t3781 + t3216*t4264 + t3121*t4271 + t4301 + t4302) + t3216*(t3882 + t3890 + t3893 - 1.*t3241*t4264 - 1.*t3040*t4271 + t4320))*var2[1] + (t3210*t3856 + t3216*(t4244 + t2855*t2862*t4264 - 1.*t1148*t2855*t4271) + t2855*t2862*(-1.*t3210*t3750 - 1.*t3463*t3781 - 1.*t3216*t4264 - 1.*t3121*t4271 + t4285 + t4286))*var2[2];
  p_output1[30]=(t3266*t3783 + t3241*(-1.*t2855*t2862*t4405 + t1148*t2855*t4409 + t4438) + t2855*t2862*(t3266*t3750 + t3514*t3781 + t3241*t4405 + t3040*t4409 + t4455 + t4456))*var2[0] + (t3241*t3934 + t3266*t3967 + t3241*(t3811 + t3812 + t3813 + t3216*t4405 + t3121*t4409 + t4477) + t3216*(-1.*t3266*t3750 - 1.*t3514*t3781 - 1.*t3241*t4405 - 1.*t3040*t4409 + t4491 + t4494))*var2[1] + (t3241*t3856 + t3216*(t4385 + t2855*t2862*t4405 - 1.*t1148*t2855*t4409) + t2855*t2862*(t3928 + t3931 + t3933 - 1.*t3216*t4405 - 1.*t3121*t4409 + t4424))*var2[2];
  p_output1[31]=t3241*t3783 + t2855*t2862*t3815;
  p_output1[32]=t3216*t3934 + t3241*t3967;
  p_output1[33]=t3216*t3856 + t2855*t2862*t3894;
  p_output1[34]=(t4529 + t3312*(-1.*t2855*t3995 + t4014 + t4025 + t4531) + t3290*(t3034*t3995 + t4045 + t4049 + t4535) + t4543)*var2[0] + (t3338*(-1.*t3034*t3995 + t4115 + t4116 + t4582) + t4594 + t3312*(t3099*t3995 + t4127 + t4128 + t4598) + t4614)*var2[1] + (t4549 + t3338*(t2855*t3995 + t4082 + t4085 + t4551) + t3290*(-1.*t3099*t3995 + t4093 + t4095 + t4555) + t4563)*var2[2];
  p_output1[35]=(t4529 + t3312*(t4014 - 1.*t2855*t4165 + t4172 + t4531) + t3290*(t4045 + t3034*t4165 + t4175 + t4535) + t4543)*var2[0] + (t3338*(t4115 - 1.*t3034*t4165 + t4209 + t4582) + t4594 + t3312*(t4127 + t3099*t4165 + t4217 + t4598) + t4614)*var2[1] + (t4549 + t3338*(t4082 + t2855*t4165 + t4189 + t4551) + t3290*(t4093 - 1.*t3099*t4165 + t4195 + t4555) + t4563)*var2[2];
  p_output1[36]=(t3312*(-1.*t2855*t4262 + t4335) + t3338*t4528 + t3290*(t3957 + t2985*t4253 + t3034*t4262 + t4351 + t4611 + t4612))*var2[0] + (t3445*t4593 + t3338*t4613 + t3312*(t3207*t3734 + t3099*t4262 + t4301 + t4302 + t4725 + t4728) + t3338*(t3882 - 1.*t3034*t4262 + t4320 + t4559 + t4561 + t4746))*var2[1] + (t3338*(t4244 + t2855*t4262) + t3290*(-1.*t3188*t3684 - 1.*t3207*t3734 - 1.*t3069*t4253 - 1.*t3099*t4262 + t4285 + t4286) + t3445*t4547)*var2[2];
  p_output1[37]=(t3312*(-1.*t2855*t4402 + t4438) + t3290*(t3011*t3684 + t3261*t3734 + t2985*t4388 + t3034*t4402 + t4455 + t4456) + t3500*t4528)*var2[0] + (t3312*t4593 + t3500*t4613 + t3312*(t3811 + t3099*t4402 + t4477 + t4540 + t4541 + t4834) + t3338*(-1.*t3261*t3734 - 1.*t3034*t4402 + t4491 + t4494 + t4842 + t4845))*var2[1] + (t3338*(t4385 + t2855*t4402) + t3312*t4547 + t3290*(t3928 - 1.*t3069*t4388 - 1.*t3099*t4402 + t4424 + t4588 + t4592))*var2[2];
  p_output1[38]=t3312*t4528 + t3290*t4542;
  p_output1[39]=t3338*t4593 + t3312*t4613;
  p_output1[40]=t3338*t4547 + t3290*t4562;
  p_output1[41]=t2985*(t2761*t3720 + t2319*t3730 + t2319*t4159 - 1.*t2761*t4162)*var2[0] + (t2985*(-1.*t2319*t2985*t3720 + t2761*t2985*t3730 + t2761*t2985*t4159 + t2319*t2985*t4162) + t3069*(t2319*t3011*t3720 - 1.*t2761*t3011*t3730 - 1.*t2761*t3011*t4159 - 1.*t2319*t3011*t4162))*var2[1] + t3069*(-1.*t2761*t3720 - 1.*t2319*t3730 - 1.*t2319*t4159 + t2761*t4162)*var2[2];
  p_output1[42]=t3069*t4921*var2[0] + (t3188*t4944 + t2985*(t2761*t3069*t3720 + t2319*t3069*t3730 + t4725 + t4728 + t2985*t3684*t4952 + t2985*t3684*t4954) + t3069*(-1.*t2761*t2985*t3720 - 1.*t2319*t2985*t3730 + t4559 + t4746 - 1.*t3011*t3684*t4952 - 1.*t3011*t3684*t4954) + t3069*t4981)*var2[1] + t3188*t4934*var2[2];
  p_output1[43]=t3011*t4921*var2[0] + (t2985*t4944 + t2985*(t2761*t3011*t3720 + t2319*t3011*t3730 + t4540 + t4834 + t2985*t4377*t4952 + t2985*t4377*t4954) + t3069*(-1.*t2761*t3188*t3720 - 1.*t2319*t3188*t3730 + t4842 + t4845 - 1.*t3011*t4377*t4952 - 1.*t3011*t4377*t4954) + t3011*t4981)*var2[1] + t2985*t4934*var2[2];
  p_output1[44]=t2985*t4921;
  p_output1[45]=t3069*t4944 + t2985*t4981;
  p_output1[46]=t3069*t4934;
  p_output1[47]=t5034 + (t2985*(t3069*t3715 + t4540 + t4725 + t4728) + t3069*(-1.*t2985*t3715 + t4559 + t4746 + t4842) + t3188*t5037 + t3069*t5053)*var2[1];
  p_output1[48]=t5034 + (t2985*(t3011*t3715 + t2985*t4377 + t4540 + t4834) + t3069*(-1.*t3188*t3715 - 1.*t3011*t4377 + t4842 + t4845) + t2985*t5037 + t3011*t5053)*var2[1];
  p_output1[49]=-0.15121 + t3069*t5037 + t2985*t5053;
  p_output1[50]=-0.15121*t3011 - 0.15121*t3069;
  p_output1[51]=(-0.305*Power(t2936,2) + t5099 + t5100)*var2[0] + (-0.28121*t2968 + 0.305*t2936*t2968 + t2968*t3669)*var2[2];
  p_output1[52]=0.28121*t2968 - 0.305*t2936*t2968 - 1.*t2968*t3669;
  p_output1[53]=0.305*Power(t2968,2) + t5099 + t5100;
  p_output1[54]=-0.305;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 55, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_fFrFoot_vec_DiagonalStance.hh"

namespace DiagonalStance
{

void J_fFrFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
