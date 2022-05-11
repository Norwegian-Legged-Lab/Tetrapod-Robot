/*
 * Automatically Generated from Mathematica.
 * Thu 28 Apr 2022 15:23:41 GMT+02:00
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
  double t3301;
  double t3275;
  double t3293;
  double t3305;
  double t3297;
  double t3306;
  double t3307;
  double t3272;
  double t3309;
  double t3310;
  double t3311;
  double t3274;
  double t3312;
  double t3364;
  double t3308;
  double t3313;
  double t3314;
  double t3252;
  double t3372;
  double t3373;
  double t3374;
  double t3378;
  double t3379;
  double t3383;
  double t3384;
  double t3385;
  double t3387;
  double t3399;
  double t3400;
  double t3401;
  double t3427;
  double t3428;
  double t3429;
  double t3426;
  double t3434;
  double t3438;
  double t3441;
  double t3442;
  double t3443;
  double t3444;
  double t3449;
  double t3450;
  double t3466;
  double t3470;
  double t3474;
  double t3494;
  double t3495;
  double t3496;
  double t3498;
  double t3500;
  double t3502;
  double t3503;
  double t3507;
  double t3508;
  double t3493;
  double t3497;
  double t3510;
  double t3512;
  double t3492;
  double t3513;
  double t3517;
  double t3519;
  double t3520;
  double t3521;
  double t3522;
  double t3523;
  double t3524;
  double t3525;
  double t3526;
  double t3527;
  double t3528;
  double t3529;
  double t3531;
  double t3533;
  double t3534;
  double t3535;
  double t3548;
  double t3549;
  double t3550;
  double t3545;
  double t3546;
  double t3547;
  double t3541;
  double t3542;
  double t3543;
  double t3485;
  double t3489;
  double t3490;
  double t3518;
  double t3536;
  double t3539;
  double t3558;
  double t3559;
  double t3560;
  double t3552;
  double t3553;
  double t3554;
  double t3597;
  double t3598;
  double t3599;
  double t3570;
  double t3571;
  double t3573;
  double t3682;
  double t3686;
  double t3690;
  double t3561;
  double t3583;
  double t3710;
  double t3712;
  double t3716;
  double t3718;
  double t3729;
  double t3730;
  double t3731;
  double t3564;
  double t3565;
  double t3567;
  double t3735;
  double t3737;
  double t3584;
  double t3585;
  double t3586;
  double t3607;
  double t3618;
  double t3774;
  double t3776;
  double t3608;
  double t3609;
  double t3610;
  double t3788;
  double t3790;
  double t3619;
  double t3620;
  double t3621;
  double t3648;
  double t3665;
  double t3837;
  double t3649;
  double t3650;
  double t3651;
  double t3853;
  double t3855;
  double t3670;
  double t3671;
  double t3676;
  double t3706;
  double t3901;
  double t3904;
  double t3906;
  double t3910;
  double t3911;
  double t3723;
  double t3936;
  double t3937;
  double t3938;
  double t3707;
  double t3708;
  double t3909;
  double t3912;
  double t3917;
  double t3918;
  double t3724;
  double t3725;
  double t3947;
  double t3948;
  double t3952;
  double t3956;
  double t3957;
  double t3966;
  double t3967;
  double t3968;
  double t3970;
  double t3971;
  double t3972;
  double t3974;
  double t3975;
  double t3976;
  double t3978;
  double t3980;
  double t3981;
  double t3783;
  double t3779;
  double t3984;
  double t3986;
  double t3987;
  double t4005;
  double t4006;
  double t3780;
  double t3781;
  double t4011;
  double t4012;
  double t3784;
  double t3785;
  double t4036;
  double t4038;
  double t3930;
  double t3931;
  double t3933;
  double t4043;
  double t4044;
  double t3992;
  double t3993;
  double t3994;
  double t3828;
  double t3858;
  double t3833;
  double t3834;
  double t4072;
  double t4073;
  double t3949;
  double t4078;
  double t4079;
  double t3859;
  double t3860;
  double t4099;
  double t4102;
  double t4106;
  double t4108;
  double t3896;
  double t3899;
  double t4131;
  double t4132;
  double t4133;
  double t4148;
  double t4149;
  double t3458;
  double t3459;
  double t3460;
  double t4141;
  double t4142;
  double t4143;
  double t4144;
  double t4139;
  double t4147;
  double t4150;
  double t4172;
  double t4173;
  double t4174;
  double t4163;
  double t4164;
  double t4165;
  double t4168;
  double t4169;
  double t4170;
  double t4179;
  double t4180;
  double t4181;
  double t4175;
  double t4178;
  double t4183;
  double t4189;
  double t4190;
  double t4191;
  double t4193;
  double t4194;
  double t4195;
  double t4197;
  double t4198;
  double t4199;
  double t4016;
  double t4017;
  double t4018;
  double t4020;
  double t4021;
  double t4022;
  double t4151;
  double t3922;
  double t3923;
  double t4219;
  double t4220;
  double t4227;
  double t4225;
  double t4217;
  double t4221;
  double t4251;
  double t4254;
  double t4256;
  double t4204;
  double t4205;
  double t4206;
  double t4068;
  double t4069;
  double t4279;
  double t4298;
  double t4302;
  double t4321;
  double t4322;
  double t4323;
  double t4335;
  double t4336;
  double t4337;
  double t4345;
  double t4346;
  double t4347;
  double t4351;
  double t4352;
  double t4353;
  double t4355;
  double t4356;
  double t4357;
  double t4332;
  double t4333;
  double t4338;
  double t4371;
  double t4372;
  double t4373;
  double t4367;
  double t4368;
  double t4369;
  double t4374;
  double t4377;
  double t4384;
  double t4385;
  double t4386;
  double t4388;
  double t4389;
  double t4390;
  double t4083;
  double t4084;
  double t4232;
  double t4233;
  double t4239;
  double t4240;
  double t4403;
  double t4408;
  double t4413;
  double t4409;
  double t4411;
  double t4404;
  double t4431;
  double t4434;
  double t4344;
  double t4348;
  double t4349;
  double t4438;
  double t3392;
  double t3393;
  double t3394;
  double t4467;
  double t4469;
  double t4485;
  double t4488;
  double t4491;
  t3301 = Cos(var1[10]);
  t3275 = Cos(var1[11]);
  t3293 = Sin(var1[10]);
  t3305 = Sin(var1[11]);
  t3297 = t3275*t3293;
  t3306 = -1.*t3301*t3305;
  t3307 = t3297 + t3306;
  t3272 = Cos(var1[5]);
  t3309 = t3301*t3275;
  t3310 = t3293*t3305;
  t3311 = t3309 + t3310;
  t3274 = Sin(var1[9]);
  t3312 = Sin(var1[5]);
  t3364 = Cos(var1[3]);
  t3308 = -1.*t3272*t3274*t3307;
  t3313 = t3311*t3312;
  t3314 = t3308 + t3313;
  t3252 = Sin(var1[3]);
  t3372 = Cos(var1[9]);
  t3373 = Cos(var1[4]);
  t3374 = t3372*t3373*t3307;
  t3378 = Sin(var1[4]);
  t3379 = t3272*t3311;
  t3383 = t3274*t3307*t3312;
  t3384 = t3379 + t3383;
  t3385 = -1.*t3378*t3384;
  t3387 = t3374 + t3385;
  t3399 = t3373*t3274;
  t3400 = t3372*t3378*t3312;
  t3401 = t3399 + t3400;
  t3427 = -1.*t3275*t3293;
  t3428 = t3301*t3305;
  t3429 = t3427 + t3428;
  t3426 = -1.*t3272*t3274*t3311;
  t3434 = t3429*t3312;
  t3438 = t3426 + t3434;
  t3441 = t3372*t3373*t3311;
  t3442 = t3272*t3429;
  t3443 = t3274*t3311*t3312;
  t3444 = t3442 + t3443;
  t3449 = -1.*t3378*t3444;
  t3450 = t3441 + t3449;
  t3466 = -1.*t3372*t3307*t3378;
  t3470 = -1.*t3373*t3384;
  t3474 = t3466 + t3470;
  t3494 = -0.0641*t3275;
  t3495 = -0.28*t3305;
  t3496 = t3494 + t3495;
  t3498 = -1.*t3275;
  t3500 = 1. + t3498;
  t3502 = -0.575*t3500;
  t3503 = -0.295*t3275;
  t3507 = -0.0641*t3305;
  t3508 = t3502 + t3503 + t3507;
  t3493 = 0.325*t3293;
  t3497 = t3301*t3496;
  t3510 = t3293*t3508;
  t3512 = t3493 + t3497 + t3510;
  t3492 = 0.068*t3274;
  t3513 = t3372*t3512;
  t3517 = t3492 + t3513;
  t3519 = -1.*t3301;
  t3520 = 1. + t3519;
  t3521 = -0.325*t3520;
  t3522 = -1.*t3293*t3496;
  t3523 = t3301*t3508;
  t3524 = t3521 + t3522 + t3523;
  t3525 = t3272*t3524;
  t3526 = -1.*t3372;
  t3527 = 1. + t3526;
  t3528 = 0.1575*t3527;
  t3529 = 0.2255*t3372;
  t3531 = -1.*t3274*t3512;
  t3533 = t3528 + t3529 + t3531;
  t3534 = -1.*t3533*t3312;
  t3535 = t3525 + t3534;
  t3548 = t3373*t3517;
  t3549 = -1.*t3378*t3535;
  t3550 = t3548 + t3549;
  t3545 = t3274*t3378;
  t3546 = -1.*t3372*t3373*t3312;
  t3547 = t3545 + t3546;
  t3541 = t3517*t3378;
  t3542 = t3373*t3535;
  t3543 = t3541 + t3542;
  t3485 = t3372*t3311*t3378;
  t3489 = t3373*t3444;
  t3490 = t3485 + t3489;
  t3518 = -1.*t3517*t3378;
  t3536 = -1.*t3373*t3535;
  t3539 = t3518 + t3536;
  t3558 = t3272*t3533;
  t3559 = t3524*t3312;
  t3560 = t3558 + t3559;
  t3552 = -1.*t3274*t3378;
  t3553 = t3372*t3373*t3312;
  t3554 = t3552 + t3553;
  t3597 = t3372*t3307*t3378;
  t3598 = t3373*t3384;
  t3599 = t3597 + t3598;
  t3570 = -1.*t3372*t3311*t3378;
  t3571 = -1.*t3373*t3444;
  t3573 = t3570 + t3571;
  t3682 = t3272*t3274*t3307;
  t3686 = -1.*t3311*t3312;
  t3690 = t3682 + t3686;
  t3561 = -1.*t3372*t3272*t3560;
  t3583 = t3560*t3438;
  t3710 = -1.*t3272*t3533;
  t3712 = -1.*t3524*t3312;
  t3716 = t3710 + t3712;
  t3718 = t3372*t3312*t3560;
  t3729 = t3272*t3274*t3311;
  t3730 = -1.*t3429*t3312;
  t3731 = t3729 + t3730;
  t3564 = -1.*t3547*t3543;
  t3565 = -1.*t3401*t3550;
  t3567 = t3561 + t3564 + t3565;
  t3735 = t3535*t3438;
  t3737 = t3560*t3444;
  t3584 = t3543*t3490;
  t3585 = t3550*t3450;
  t3586 = t3583 + t3584 + t3585;
  t3607 = t3560*t3314;
  t3618 = -1.*t3560*t3438;
  t3774 = t3560*t3384;
  t3776 = t3535*t3314;
  t3608 = t3543*t3599;
  t3609 = t3550*t3387;
  t3610 = t3607 + t3608 + t3609;
  t3788 = -1.*t3535*t3438;
  t3790 = -1.*t3560*t3444;
  t3619 = -1.*t3543*t3490;
  t3620 = -1.*t3550*t3450;
  t3621 = t3618 + t3619 + t3620;
  t3648 = t3372*t3272*t3560;
  t3665 = -1.*t3560*t3314;
  t3837 = -1.*t3372*t3312*t3560;
  t3649 = t3547*t3543;
  t3650 = t3401*t3550;
  t3651 = t3648 + t3649 + t3650;
  t3853 = -1.*t3560*t3384;
  t3855 = -1.*t3535*t3314;
  t3670 = -1.*t3543*t3599;
  t3671 = -1.*t3550*t3387;
  t3676 = t3665 + t3670 + t3671;
  t3706 = -1.*t3274*t3517;
  t3901 = -0.068*t3274;
  t3904 = -1.*t3372*t3512;
  t3906 = t3901 + t3904;
  t3910 = 0.068*t3372;
  t3911 = t3910 + t3531;
  t3723 = t3372*t3517*t3311;
  t3936 = -1.*t3373*t3274*t3307;
  t3937 = -1.*t3372*t3307*t3378*t3312;
  t3938 = t3936 + t3937;
  t3707 = t3372*t3312*t3535;
  t3708 = t3706 + t3707 + t3561;
  t3909 = -1.*t3372*t3517;
  t3912 = -1.*t3274*t3911;
  t3917 = -1.*t3274*t3517*t3311;
  t3918 = t3372*t3911*t3311;
  t3724 = t3535*t3444;
  t3725 = t3723 + t3583 + t3724;
  t3947 = Power(t3272,2);
  t3948 = -1.*t3372*t3947*t3906;
  t3952 = t3272*t3274*t3560;
  t3956 = -1.*t3372*t3272*t3311*t3560;
  t3957 = t3272*t3906*t3438;
  t3966 = -1.*t3274*t3311*t3378;
  t3967 = t3372*t3373*t3311*t3312;
  t3968 = t3966 + t3967;
  t3970 = t3911*t3378;
  t3971 = -1.*t3373*t3906*t3312;
  t3972 = t3970 + t3971;
  t3974 = t3373*t3911;
  t3975 = t3906*t3378*t3312;
  t3976 = t3974 + t3975;
  t3978 = t3372*t3378;
  t3980 = t3373*t3274*t3312;
  t3981 = t3978 + t3980;
  t3783 = -1.*t3372*t3517*t3311;
  t3779 = t3372*t3517*t3307;
  t3984 = t3372*t3373;
  t3986 = -1.*t3274*t3378*t3312;
  t3987 = t3984 + t3986;
  t4005 = -1.*t3274*t3517*t3307;
  t4006 = t3372*t3911*t3307;
  t3780 = t3535*t3384;
  t3781 = t3779 + t3780 + t3607;
  t4011 = t3274*t3517*t3311;
  t4012 = -1.*t3372*t3911*t3311;
  t3784 = -1.*t3535*t3444;
  t3785 = t3783 + t3618 + t3784;
  t4036 = -1.*t3372*t3272*t3307*t3560;
  t4038 = t3272*t3906*t3314;
  t3930 = -1.*t3274*t3307*t3378;
  t3931 = t3372*t3373*t3307*t3312;
  t3933 = t3930 + t3931;
  t4043 = t3372*t3272*t3311*t3560;
  t4044 = -1.*t3272*t3906*t3438;
  t3992 = -1.*t3373*t3274*t3311;
  t3993 = -1.*t3372*t3311*t3378*t3312;
  t3994 = t3992 + t3993;
  t3828 = t3274*t3517;
  t3858 = -1.*t3372*t3517*t3307;
  t3833 = -1.*t3372*t3312*t3535;
  t3834 = t3828 + t3833 + t3648;
  t4072 = t3372*t3517;
  t4073 = t3274*t3911;
  t3949 = Power(t3312,2);
  t4078 = t3274*t3517*t3307;
  t4079 = -1.*t3372*t3911*t3307;
  t3859 = -1.*t3535*t3384;
  t3860 = t3858 + t3859 + t3665;
  t4099 = t3372*t3947*t3906;
  t4102 = -1.*t3272*t3274*t3560;
  t4106 = t3372*t3272*t3307*t3560;
  t4108 = -1.*t3272*t3906*t3314;
  t3896 = -1.*t3372*t3533;
  t3899 = t3706 + t3896;
  t4131 = -1.*t3301*t3275;
  t4132 = -1.*t3293*t3305;
  t4133 = t4131 + t4132;
  t4148 = 0.325*t3301;
  t4149 = t4148 + t3522 + t3523;
  t3458 = t3364*t3438;
  t3459 = -1.*t3252*t3450;
  t3460 = t3458 + t3459;
  t4141 = -0.325*t3293;
  t4142 = -1.*t3301*t3496;
  t4143 = -1.*t3293*t3508;
  t4144 = t4141 + t4142 + t4143;
  t4139 = t3372*t3517*t3429;
  t4147 = Power(t3372,2);
  t4150 = t4147*t4149*t3311;
  t4172 = -1.*t3272*t3274*t4149;
  t4173 = t4144*t3312;
  t4174 = t4172 + t4173;
  t4163 = -1.*t3272*t3274*t3429;
  t4164 = t4133*t3312;
  t4165 = t4163 + t4164;
  t4168 = t3272*t4144;
  t4169 = t3274*t4149*t3312;
  t4170 = t4168 + t4169;
  t4179 = t3272*t4133;
  t4180 = t3274*t3429*t3312;
  t4181 = t4179 + t4180;
  t4175 = -1.*t3372*t3272*t4174;
  t4178 = t4174*t3438;
  t4183 = t3560*t4165;
  t4189 = t3372*t3429*t3378;
  t4190 = t3373*t4181;
  t4191 = t4189 + t4190;
  t4193 = t3372*t4149*t3378;
  t4194 = t3373*t4170;
  t4195 = t4193 + t4194;
  t4197 = t3372*t3373*t4149;
  t4198 = -1.*t3378*t4170;
  t4199 = t4197 + t4198;
  t4016 = -1.*t3524*t3429;
  t4017 = t3274*t3533*t3311;
  t4018 = t4016 + t3783 + t4017;
  t4020 = -1.*t3274*t3533*t3307;
  t4021 = t3524*t3311;
  t4022 = t3779 + t4020 + t4021;
  t4151 = Power(t3274,2);
  t3922 = t3524*t3429;
  t3923 = -1.*t3274*t3533*t3311;
  t4219 = -1.*t4144*t3429;
  t4220 = -1.*t3524*t4133;
  t4227 = t4144*t3311;
  t4225 = t4147*t4149*t3307;
  t4217 = -1.*t3372*t3517*t3429;
  t4221 = -1.*t4147*t4149*t3311;
  t4251 = t4174*t3314;
  t4254 = -1.*t4174*t3438;
  t4256 = -1.*t3560*t4165;
  t4204 = t3372*t3373*t3429;
  t4205 = -1.*t3378*t4181;
  t4206 = t4204 + t4205;
  t4068 = t3372*t3533;
  t4069 = t3828 + t4068;
  t4279 = -1.*t4147*t4149*t3307;
  t4298 = t3372*t3272*t4174;
  t4302 = -1.*t4174*t3314;
  t4321 = -0.28*t3275;
  t4322 = 0.0641*t3305;
  t4323 = t4321 + t4322;
  t4335 = t3293*t3496;
  t4336 = t3301*t4323;
  t4337 = t4335 + t4336;
  t4345 = t3272*t3307;
  t4346 = t3274*t4133*t3312;
  t4347 = t4345 + t4346;
  t4351 = -1.*t3272*t3274*t4133;
  t4352 = t3307*t3312;
  t4353 = t4351 + t4352;
  t4355 = t3372*t3373*t4133;
  t4356 = -1.*t3378*t4347;
  t4357 = t4355 + t4356;
  t4332 = -1.*t3293*t4323;
  t4333 = t3497 + t4332;
  t4338 = t4147*t4337*t3311;
  t4371 = -1.*t3272*t3274*t4337;
  t4372 = t4333*t3312;
  t4373 = t4371 + t4372;
  t4367 = t3272*t4333;
  t4368 = t3274*t4337*t3312;
  t4369 = t4367 + t4368;
  t4374 = -1.*t3372*t3272*t4373;
  t4377 = t4373*t3438;
  t4384 = t3372*t4337*t3378;
  t4385 = t3373*t4369;
  t4386 = t4384 + t4385;
  t4388 = t3372*t3373*t4337;
  t4389 = -1.*t3378*t4369;
  t4390 = t4388 + t4389;
  t4083 = t3274*t3533*t3307;
  t4084 = -1.*t3524*t3311;
  t4232 = t3512*t3307;
  t4233 = t4232 + t4021;
  t4239 = -1.*t3512*t3311;
  t4240 = t4016 + t4239;
  t4403 = -1.*t4333*t3429;
  t4408 = t3524*t3307;
  t4413 = t4333*t3311;
  t4409 = t4147*t4337*t3307;
  t4411 = t3372*t3517*t4133;
  t4404 = -1.*t4147*t4337*t3311;
  t4431 = t3560*t4353;
  t4434 = t4373*t3314;
  t4344 = t3372*t4133*t3378;
  t4348 = t3373*t4347;
  t4349 = t4344 + t4348;
  t4438 = -1.*t4373*t3438;
  t3392 = t3364*t3314;
  t3393 = -1.*t3252*t3387;
  t3394 = t3392 + t3393;
  t4467 = -1.*t4147*t4337*t3307;
  t4469 = -1.*t3372*t3517*t4133;
  t4485 = t3372*t3272*t4373;
  t4488 = -1.*t3560*t4353;
  t4491 = -1.*t4373*t3314;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t3252*t3314 - 1.*t3364*t3387)*var2[1] + t3394*var2[2];
  p_output1[10]=(-1.*t3252*t3272*t3372 - 1.*t3364*t3401)*var2[1] + (t3272*t3364*t3372 - 1.*t3252*t3401)*var2[2];
  p_output1[11]=(-1.*t3252*t3438 - 1.*t3364*t3450)*var2[1] + t3460*var2[2];
  p_output1[12]=t3387*var2[0] - 1.*t3252*t3474*var2[1] + t3364*t3474*var2[2] + (t3490*(-1.*t3401*t3539 - 1.*t3401*t3543 - 1.*t3547*t3550 - 1.*t3550*t3554) + t3450*t3567 + t3547*(t3450*t3539 + t3450*t3543 + t3490*t3550 + t3550*t3573) + t3401*t3586)*var2[3];
  p_output1[13]=t3401*var2[0] - 1.*t3252*t3554*var2[1] + t3364*t3554*var2[2] + ((-1.*t3450*t3539 - 1.*t3450*t3543 - 1.*t3490*t3550 - 1.*t3550*t3573)*t3599 + t3490*(t3387*t3539 + t3387*t3543 + t3474*t3550 + t3550*t3599) + t3450*t3610 + t3387*t3621)*var2[3];
  p_output1[14]=t3450*var2[0] - 1.*t3252*t3573*var2[1] + t3364*t3573*var2[2] + ((t3401*t3539 + t3401*t3543 + t3547*t3550 + t3550*t3554)*t3599 + t3547*(-1.*t3387*t3539 - 1.*t3387*t3543 - 1.*t3474*t3550 - 1.*t3550*t3599) + t3387*t3651 + t3401*t3676)*var2[3];
  p_output1[15]=t3373*t3690*var2[0] + (t3364*t3384 + t3252*t3378*t3690)*var2[1] + (t3252*t3384 - 1.*t3364*t3378*t3690)*var2[2] + (-1.*t3272*t3372*t3373*t3586 + t3490*(-1.*t3272*t3372*t3535 + t3272*t3372*t3373*t3543 - 1.*t3272*t3372*t3378*t3550 + t3378*t3401*t3716 - 1.*t3373*t3547*t3716 + t3718) + t3373*t3567*t3731 + t3547*(-1.*t3378*t3450*t3716 + t3373*t3490*t3716 + t3373*t3543*t3731 - 1.*t3378*t3550*t3731 + t3735 + t3737))*var2[3] + (t3444*t3708 + t3438*(t3312*t3372*t3716 + t3718) - 1.*t3312*t3372*t3725 + t3272*t3372*(t3444*t3716 + t3535*t3731 + t3735 + t3737))*var2[4];
  p_output1[16]=-1.*t3272*t3372*t3373*var2[0] + (-1.*t3312*t3364*t3372 - 1.*t3252*t3272*t3372*t3378)*var2[1] + (-1.*t3252*t3312*t3372 + t3272*t3364*t3372*t3378)*var2[2] + (t3373*t3621*t3690 + t3373*t3610*t3731 + t3490*(t3373*t3543*t3690 - 1.*t3378*t3550*t3690 - 1.*t3378*t3387*t3716 + t3373*t3599*t3716 + t3774 + t3776) + t3599*(t3378*t3450*t3716 - 1.*t3373*t3490*t3716 - 1.*t3373*t3543*t3731 + t3378*t3550*t3731 + t3788 + t3790))*var2[3] + (t3438*(t3535*t3690 + t3384*t3716 + t3774 + t3776) + t3444*t3781 + t3384*t3785 + t3314*(-1.*t3444*t3716 - 1.*t3535*t3731 + t3788 + t3790))*var2[4];
  p_output1[17]=t3373*t3731*var2[0] + (t3364*t3444 + t3252*t3378*t3731)*var2[1] + (t3252*t3444 - 1.*t3364*t3378*t3731)*var2[2] + (-1.*t3272*t3372*t3373*t3676 + t3373*t3651*t3690 + t3599*(t3272*t3372*t3535 - 1.*t3272*t3372*t3373*t3543 + t3272*t3372*t3378*t3550 - 1.*t3378*t3401*t3716 + t3373*t3547*t3716 + t3837) + t3547*(-1.*t3373*t3543*t3690 + t3378*t3550*t3690 + t3378*t3387*t3716 - 1.*t3373*t3599*t3716 + t3853 + t3855))*var2[3] + (t3384*t3834 + t3314*(-1.*t3312*t3372*t3716 + t3837) + t3272*t3372*(-1.*t3535*t3690 - 1.*t3384*t3716 + t3853 + t3855) - 1.*t3312*t3372*t3860)*var2[4];
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t3933*var2[0] + (-1.*t3272*t3307*t3364*t3372 - 1.*t3252*t3938)*var2[1] + (-1.*t3252*t3272*t3307*t3372 + t3364*t3938)*var2[2] + (t3567*t3968 + t3586*t3981 + t3490*(t3948 + t3952 - 1.*t3547*t3972 - 1.*t3401*t3976 - 1.*t3543*t3981 - 1.*t3550*t3987) + t3547*(t3956 + t3957 + t3543*t3968 + t3490*t3972 + t3450*t3976 + t3550*t3994))*var2[3] + (-1.*t3272*t3311*t3372*t3708 - 1.*t3272*t3274*t3725 + t3438*(-1.*t3274*t3312*t3535 + t3909 + t3912 + t3948 - 1.*t3372*t3906*t3949 + t3952) + t3272*t3372*(t3311*t3312*t3372*t3535 - 1.*t3312*t3444*t3906 + t3917 + t3918 + t3956 + t3957))*var2[4] + (-1.*t3274*t3311*t3899 + t3311*t3372*(t3274*t3533 - 1.*t3372*t3906 + t3909 + t3912) + t3274*(-1.*t3311*t3372*t3533 - 1.*t3274*t3311*t3906 + t3917 + t3918) + t3372*(t3723 + t3922 + t3923))*var2[5];
  p_output1[28]=t3981*var2[0] + (-1.*t3272*t3274*t3364 - 1.*t3252*t3987)*var2[1] + (-1.*t3252*t3272*t3274 + t3364*t3987)*var2[2] + (t3621*t3933 + t3610*t3968 + t3490*(t3543*t3933 + t3550*t3938 + t3599*t3972 + t3387*t3976 + t4036 + t4038) + t3599*(-1.*t3543*t3968 - 1.*t3490*t3972 - 1.*t3450*t3976 - 1.*t3550*t3994 + t4043 + t4044))*var2[3] + (-1.*t3272*t3311*t3372*t3781 - 1.*t3272*t3307*t3372*t3785 + t3438*(t3307*t3312*t3372*t3535 - 1.*t3312*t3384*t3906 + t4005 + t4006 + t4036 + t4038) + t3314*(-1.*t3311*t3312*t3372*t3535 + t3312*t3444*t3906 + t4011 + t4012 + t4043 + t4044))*var2[4] + (t3311*t3372*(-1.*t3307*t3372*t3533 - 1.*t3274*t3307*t3906 + t4005 + t4006) + t3307*t3372*(t3311*t3372*t3533 + t3274*t3311*t3906 + t4011 + t4012) - 1.*t3274*t3307*t4018 - 1.*t3274*t3311*t4022)*var2[5];
  p_output1[29]=t3968*var2[0] + (-1.*t3272*t3311*t3364*t3372 - 1.*t3252*t3994)*var2[1] + (-1.*t3252*t3272*t3311*t3372 + t3364*t3994)*var2[2] + (t3651*t3933 + t3676*t3981 + t3599*(t3547*t3972 + t3401*t3976 + t3543*t3981 + t3550*t3987 + t4099 + t4102) + t3547*(-1.*t3543*t3933 - 1.*t3550*t3938 - 1.*t3599*t3972 - 1.*t3387*t3976 + t4106 + t4108))*var2[3] + (-1.*t3272*t3307*t3372*t3834 - 1.*t3272*t3274*t3860 + t3314*(t3274*t3312*t3535 + t3372*t3906*t3949 + t4072 + t4073 + t4099 + t4102) + t3272*t3372*(-1.*t3307*t3312*t3372*t3535 + t3312*t3384*t3906 + t4078 + t4079 + t4106 + t4108))*var2[4] + (-1.*t3274*t3307*t4069 + t3307*t3372*(-1.*t3274*t3533 + t3372*t3906 + t4072 + t4073) + t3274*(t3307*t3372*t3533 + t3274*t3307*t3906 + t4078 + t4079) + t3372*(t3858 + t4083 + t4084))*var2[5];
  p_output1[30]=t3490*var2[0] + t3460*var2[1] + (t3252*t3438 + t3364*t3450)*var2[2] + (t3567*t4191 + t3490*(t4175 - 1.*t3547*t4195 - 1.*t3401*t4199) + t3547*(t4178 + t4183 + t3543*t4191 + t3490*t4195 + t3450*t4199 + t3550*t4206))*var2[3] + (t3708*t4165 + t3438*(-1.*t3274*t3372*t4149 + t3312*t3372*t4170 + t4175) + t3272*t3372*(t4139 + t4150 + t3444*t4170 + t4178 + t3535*t4181 + t4183))*var2[4] + (t3372*t3429*t3899 + t3274*(-1.*t3274*t3429*t3533 + t3524*t4133 + t4139 + t3429*t4144 + t4150 + t3311*t4149*t4151))*var2[5] + (-0.1575*t3311 - 0.2255*t4133)*var2[9];
  p_output1[31]=(t3490*t3621 + t3610*t4191 + t3490*(t3583 + t3584 + t3585 + t3599*t4195 + t3387*t4199 + t4251) + t3599*(-1.*t3543*t4191 - 1.*t3490*t4195 - 1.*t3450*t4199 - 1.*t3550*t4206 + t4254 + t4256))*var2[3] + (t3438*t3785 + t3781*t4165 + t3438*(t3583 + t3723 + t3724 + t3384*t4170 + t4225 + t4251) + t3314*(-1.*t3444*t4170 - 1.*t3535*t4181 + t4217 + t4221 + t4254 + t4256))*var2[4] + (t3311*t3372*t4018 + t3372*t3429*t4022 + t3307*t3372*(t3274*t3429*t3533 - 1.*t3311*t4149*t4151 + t4217 + t4219 + t4220 + t4221) + t3311*t3372*(t3723 + t3922 + t3923 + t3307*t4149*t4151 + t4225 + t4227))*var2[5] + (t3311*(-1.*t3429*t3512 - 1.*t3311*t4149 + t4219 + t4220) + t3429*(t3311*t3512 + t3922 + t3307*t4149 + t4227) + t4133*t4233 + t3429*t4240)*var2[9];
  p_output1[32]=t4191*var2[0] + (t3364*t4165 - 1.*t3252*t4206)*var2[1] + (t3252*t4165 + t3364*t4206)*var2[2] + (t3490*t3651 + t3599*(t3547*t4195 + t3401*t4199 + t4298) + t3547*(t3618 + t3619 + t3620 - 1.*t3599*t4195 - 1.*t3387*t4199 + t4302))*var2[3] + (t3438*t3834 + t3314*(t3274*t3372*t4149 - 1.*t3312*t3372*t4170 + t4298) + t3272*t3372*(t3618 + t3783 + t3784 - 1.*t3384*t4170 + t4279 + t4302))*var2[4] + (t3311*t3372*t4069 + t3274*(t3783 + t4016 + t4017 - 1.*t3311*t4144 - 1.*t3307*t4149*t4151 + t4279))*var2[5] + 0.068*t3429*var2[9];
  p_output1[33]=t4349*var2[0] + (t3364*t4353 - 1.*t3252*t4357)*var2[1] + (t3252*t4353 + t3364*t4357)*var2[2] + (t3567*t3599 + t3490*(t4374 - 1.*t3547*t4386 - 1.*t3401*t4390) + t3547*(t3607 + t3608 + t3609 + t4377 + t3490*t4386 + t3450*t4390))*var2[3] + (t3314*t3708 + t3438*(-1.*t3274*t3372*t4337 + t3312*t3372*t4369 + t4374) + t3272*t3372*(t3607 + t3779 + t3780 + t4338 + t3444*t4369 + t4377))*var2[4] + (t3307*t3372*t3899 + t3274*(t3779 + t4020 + t4021 + t3429*t4333 + t3311*t4151*t4337 + t4338))*var2[5] + (-0.2255*t3311 - 0.1575*t4133)*var2[9] + (-0.325*t3275 - 1.*t3275*t3508 - 1.*t3275*t4323)*var2[10];
  p_output1[34]=(t3599*t3610 + t3621*t4349 + t3490*(t3543*t4349 + t3550*t4357 + t3599*t4386 + t3387*t4390 + t4431 + t4434) + t3599*(t3665 + t3670 + t3671 - 1.*t3490*t4386 - 1.*t3450*t4390 + t4438))*var2[3] + (t3314*t3781 + t3785*t4353 + t3438*(t3535*t4347 + t3384*t4369 + t4409 + t4411 + t4431 + t4434) + t3314*(t3665 + t3858 + t3859 - 1.*t3444*t4369 + t4404 + t4438))*var2[4] + (t3307*t3372*t4022 + t3372*t4018*t4133 + t3307*t3372*(t3858 + t4083 + t4084 - 1.*t3311*t4151*t4337 + t4403 + t4404) + t3311*t3372*(-1.*t3274*t3533*t4133 + t3307*t4151*t4337 + t4408 + t4409 + t4411 + t4413))*var2[5] + (t3311*t4233 + t3307*t4240 + t3311*(-1.*t3307*t3512 + t4084 - 1.*t3311*t4337 + t4403) + t3429*(t3512*t4133 + t3307*t4337 + t4408 + t4413))*var2[9];
  p_output1[35]=t3599*var2[0] + t3394*var2[1] + (t3252*t3314 + t3364*t3387)*var2[2] + (t3651*t4349 + t3599*(t3547*t4386 + t3401*t4390 + t4485) + t3547*(-1.*t3543*t4349 - 1.*t3550*t4357 - 1.*t3599*t4386 - 1.*t3387*t4390 + t4488 + t4491))*var2[3] + (t3834*t4353 + t3314*(t3274*t3372*t4337 - 1.*t3312*t3372*t4369 + t4485) + t3272*t3372*(-1.*t3535*t4347 - 1.*t3384*t4369 + t4467 + t4469 + t4488 + t4491))*var2[4] + (t3372*t4069*t4133 + t3274*(-1.*t3307*t3524 + t3274*t3533*t4133 - 1.*t3311*t4333 - 1.*t3307*t4151*t4337 + t4467 + t4469))*var2[5] + 0.068*t3307*var2[9] + (-0.325*t3305 - 1.*t3305*t3508 - 1.*t3305*t4323)*var2[10];
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
