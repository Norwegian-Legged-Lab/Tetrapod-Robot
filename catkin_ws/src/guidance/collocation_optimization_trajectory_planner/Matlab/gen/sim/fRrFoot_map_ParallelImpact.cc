/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:11:05 GMT+01:00
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
static void output1(double *p_output1,const double *var1)
{
  double t526;
  double t585;
  double t608;
  double t94;
  double t96;
  double t218;
  double t680;
  double t321;
  double t745;
  double t626;
  double t675;
  double t768;
  double t776;
  double t789;
  double t1141;
  double t878;
  double t897;
  double t957;
  double t1023;
  double t1057;
  double t1084;
  double t1113;
  double t1361;
  double t1413;
  double t1433;
  double t1439;
  double t1479;
  double t292;
  double t1814;
  double t2043;
  double t1817;
  double t1835;
  double t1863;
  double t1887;
  double t1891;
  double t1919;
  double t1952;
  double t1976;
  double t1992;
  double t2008;
  double t1805;
  double t2055;
  double t2074;
  double t2078;
  double t2100;
  double t2108;
  double t2129;
  double t2132;
  double t2155;
  double t2184;
  double t2199;
  double t1751;
  double t2333;
  double t2334;
  double t2348;
  double t2034;
  double t2201;
  double t2225;
  double t2354;
  double t1736;
  double t483;
  double t793;
  double t865;
  double t869;
  double t1140;
  double t1155;
  double t1347;
  double t1533;
  double t1552;
  double t1639;
  double t2243;
  double t2366;
  double t2377;
  double t2574;
  double t2477;
  double t2495;
  double t2501;
  double t2455;
  double t2637;
  double t2744;
  double t2750;
  double t2937;
  double t2955;
  double t2878;
  double t2877;
  double t2881;
  double t2888;
  double t2981;
  double t2996;
  double t3000;
  double t3035;
  double t3051;
  double t3070;
  double t3080;
  double t3114;
  double t3120;
  double t3124;
  double t3130;
  double t3152;
  double t3155;
  double t3167;
  double t3173;
  double t3199;
  double t3226;
  double t3267;
  double t3274;
  double t3278;
  double t3279;
  double t3293;
  double t3312;
  double t3313;
  double t3330;
  double t3392;
  double t3411;
  double t3413;
  double t3416;
  double t3429;
  double t3433;
  double t3412;
  double t3422;
  double t3440;
  double t3445;
  double t3456;
  double t3465;
  double t3470;
  double t3475;
  double t3584;
  double t3625;
  double t3627;
  double t3629;
  double t3635;
  double t3637;
  double t3638;
  double t3644;
  double t3648;
  double t3664;
  double t3668;
  double t3686;
  double t3687;
  double t3693;
  double t3700;
  double t3701;
  double t3707;
  double t3734;
  double t3741;
  double t3750;
  double t3759;
  double t3760;
  double t3770;
  double t3777;
  double t3791;
  double t3793;
  double t3800;
  double t3804;
  double t3805;
  double t3806;
  double t3809;
  double t3810;
  double t3812;
  double t3524;
  double t3526;
  double t3529;
  double t3545;
  double t3577;
  double t3598;
  double t3604;
  double t3607;
  double t3608;
  double t3612;
  double t3669;
  double t3775;
  double t3819;
  double t3821;
  double t3824;
  double t3827;
  double t3828;
  double t3829;
  double t3831;
  double t3833;
  double t3835;
  double t3838;
  double t3845;
  double t3849;
  double t3851;
  double t3858;
  double t3496;
  double t3498;
  double t3501;
  double t3448;
  double t3485;
  double t3491;
  double t3868;
  double t3871;
  double t3882;
  double t3883;
  double t3536;
  double t3822;
  double t3859;
  double t3861;
  double t3896;
  double t3898;
  double t3905;
  double t3915;
  double t3923;
  double t3927;
  double t3930;
  double t3937;
  double t3940;
  double t3941;
  double t3942;
  double t3944;
  double t3953;
  double t3954;
  double t3958;
  double t3960;
  double t3962;
  double t3975;
  double t3977;
  double t3982;
  double t3916;
  double t3932;
  double t3933;
  double t3862;
  double t3887;
  double t3889;
  double t3356;
  double t3368;
  double t3373;
  double t3292;
  double t3332;
  double t3334;
  double t3966;
  double t3994;
  double t3995;
  double t3006;
  double t3151;
  double t3229;
  double t3231;
  double t3250;
  double t3352;
  double t3382;
  double t3383;
  double t3390;
  double t3391;
  double t4016;
  double t4023;
  double t4028;
  double t4037;
  double t4039;
  double t4044;
  double t3495;
  double t3504;
  double t3507;
  double t3894;
  double t4049;
  double t4083;
  double t4098;
  double t4227;
  double t4228;
  double t4229;
  double t4232;
  double t4241;
  double t4243;
  double t4244;
  double t4248;
  double t4006;
  double t4013;
  double t4014;
  double t1657;
  double t2381;
  double t2418;
  double t4054;
  double t4055;
  double t4057;
  double t4325;
  double t4338;
  double t4360;
  double t4366;
  double t4454;
  double t4456;
  double t4458;
  double t4460;
  double t4473;
  double t4474;
  double t4480;
  double t4482;
  double t4565;
  double t4593;
  double t4623;
  double t4633;
  double t4721;
  double t4722;
  double t4725;
  double t4729;
  double t4733;
  double t4743;
  double t4751;
  double t4756;
  t526 = Cos(var1[17]);
  t585 = -1.*t526;
  t608 = 1. + t585;
  t94 = Cos(var1[16]);
  t96 = -1.*t94;
  t218 = 1. + t96;
  t680 = Sin(var1[17]);
  t321 = Sin(var1[16]);
  t745 = 4.e-6*t680;
  t626 = 1.000000000016*t608;
  t675 = -7.e-6*t608;
  t768 = t675 + t745;
  t776 = -7.e-6*t768;
  t789 = -1. + t626 + t776;
  t1141 = 4.e-6*t218;
  t878 = 2.8e-11*t608;
  t897 = 4.e-6*t608;
  t957 = 7.e-6*t680;
  t1023 = t897 + t957;
  t1057 = -7.e-6*t1023;
  t1084 = -1.*t680;
  t1113 = t878 + t1057 + t1084;
  t1361 = -6.5e-11*t608;
  t1413 = 1. + t1361;
  t1433 = -7.e-6*t1413;
  t1439 = 7.e-6*t608;
  t1479 = t1433 + t1439 + t745;
  t292 = -2.8e-11*t218;
  t1814 = -7.e-6*t218;
  t2043 = Cos(var1[15]);
  t1817 = -4.e-6*t321;
  t1835 = t1814 + t1817;
  t1863 = t1835*t789;
  t1887 = -7.e-6*t321;
  t1891 = t1141 + t1887;
  t1919 = t1891*t1113;
  t1952 = -6.5e-11*t218;
  t1976 = 1. + t1952;
  t1992 = t1976*t1479;
  t2008 = t1863 + t1919 + t1992;
  t1805 = Sin(var1[15]);
  t2055 = -1.000000000016*t218;
  t2074 = 1. + t2055;
  t2078 = t2074*t789;
  t2100 = -1.*t321;
  t2108 = t292 + t2100;
  t2129 = t2108*t1113;
  t2132 = 4.e-6*t321;
  t2155 = t1814 + t2132;
  t2184 = t2155*t1479;
  t2199 = t2078 + t2129 + t2184;
  t1751 = Cos(var1[5]);
  t2333 = t2043*t2008;
  t2334 = t1805*t2199;
  t2348 = t2333 + t2334;
  t2034 = -1.*t1805*t2008;
  t2201 = t2043*t2199;
  t2225 = t2034 + t2201;
  t2354 = Sin(var1[5]);
  t1736 = Cos(var1[4]);
  t483 = t292 + t321;
  t793 = t483*t789;
  t865 = -1.000000000049*t218;
  t869 = 1. + t865;
  t1140 = t869*t1113;
  t1155 = 7.e-6*t321;
  t1347 = t1141 + t1155;
  t1533 = t1347*t1479;
  t1552 = t793 + t1140 + t1533;
  t1639 = Sin(var1[4]);
  t2243 = t1751*t2225;
  t2366 = -1.*t2348*t2354;
  t2377 = t2243 + t2366;
  t2574 = Sin(var1[3]);
  t2477 = t1751*t2348;
  t2495 = t2225*t2354;
  t2501 = t2477 + t2495;
  t2455 = Cos(var1[3]);
  t2637 = t1736*t1552;
  t2744 = -1.*t1639*t2377;
  t2750 = t2637 + t2744;
  t2937 = -1. + t526;
  t2955 = 4.e-6*t2937;
  t2878 = -4.e-6*t680;
  t2877 = 6.5e-11*t608;
  t2881 = t675 + t2878;
  t2888 = 7.e-6*t2881;
  t2981 = t2955 + t957;
  t2996 = 4.e-6*t2981;
  t3000 = -1. + t2877 + t2888 + t2996;
  t3035 = 1.000000000049*t608;
  t3051 = -1. + t3035;
  t3070 = 4.e-6*t3051;
  t3080 = -7.e-6*t680;
  t3114 = -2.8e-11*t608;
  t3120 = t3114 + t680;
  t3124 = 7.e-6*t3120;
  t3130 = t3070 + t2955 + t3080 + t3124;
  t3152 = -1.000000000016*t608;
  t3155 = 1. + t3152;
  t3167 = 7.e-6*t3155;
  t3173 = t878 + t680;
  t3199 = 4.e-6*t3173;
  t3226 = t3167 + t1439 + t2878 + t3199;
  t3267 = t2155*t3000;
  t3274 = t2108*t3130;
  t3278 = t2074*t3226;
  t3279 = t3267 + t3274 + t3278;
  t3293 = t1976*t3000;
  t3312 = t1891*t3130;
  t3313 = t1835*t3226;
  t3330 = t3293 + t3312 + t3313;
  t3392 = 4.e-6*t1023;
  t3411 = -1. + t3035 + t3392;
  t3413 = 4.e-6*t1413;
  t3416 = t3413 + t2955 + t957;
  t3429 = 4.e-6*t768;
  t3433 = t878 + t3429 + t680;
  t3412 = t2108*t3411;
  t3422 = t2155*t3416;
  t3440 = t2074*t3433;
  t3445 = t3412 + t3422 + t3440;
  t3456 = t1891*t3411;
  t3465 = t1976*t3416;
  t3470 = t1835*t3433;
  t3475 = t3456 + t3465 + t3470;
  t3584 = 7.e-6*t218;
  t3625 = 2.826290000000002e-7*var1[17];
  t3627 = -0.148715*t1413;
  t3629 = -2.18904205e-16*t608;
  t3635 = t897 + t3080;
  t3637 = -0.038576*t3635;
  t3638 = -0.80315*t2881;
  t3644 = t1439 + t745;
  t3648 = -0.5031510000080001*t3644;
  t3664 = -0.038575000014*t2981;
  t3668 = t3625 + t3627 + t3629 + t3637 + t3638 + t3648 + t3664;
  t3686 = 1.1305160000000008e-12*var1[17];
  t3687 = -1.000000000049*t608;
  t3693 = 1. + t3687;
  t3700 = -0.038576*t3693;
  t3701 = -0.03857500001589017*t608;
  t3707 = t878 + t1084;
  t3734 = -0.5031510000080001*t3707;
  t3741 = t2955 + t3080;
  t3750 = -3.367757e-6*t3741;
  t3759 = -0.148715*t1023;
  t3760 = -0.80315*t3120;
  t3770 = t3686 + t3700 + t3701 + t3734 + t3750 + t3759 + t3760;
  t3777 = -1.9784030000000015e-12*var1[17];
  t3791 = -0.80315*t3155;
  t3793 = -0.5031510000160505*t608;
  t3800 = t3114 + t1084;
  t3804 = -0.038576*t3800;
  t3805 = t1439 + t2878;
  t3806 = -3.367757e-6*t3805;
  t3809 = -0.148715*t768;
  t3810 = -0.038575000014*t3173;
  t3812 = t3777 + t3791 + t3793 + t3804 + t3806 + t3809 + t3810;
  t3524 = -1.*t2043;
  t3526 = 1. + t3524;
  t3529 = -0.15121*t3526;
  t3545 = -2.7726089999999997e-12*var1[16];
  t3577 = -0.2812110000084994*t218;
  t3598 = t3584 + t1817;
  t3604 = -1.8134809999999998e-6*t3598;
  t3607 = 2.8e-11*t218;
  t3608 = t3607 + t321;
  t3612 = -0.038749000006999997*t3608;
  t3669 = t2155*t3668;
  t3775 = t2108*t3770;
  t3819 = t2074*t3812;
  t3821 = t3545 + t3577 + t3604 + t3612 + t3669 + t3775 + t3819;
  t3824 = 3.9608699999999997e-7*var1[16];
  t3827 = -1.1787626499999999e-16*t218;
  t3828 = t3584 + t2132;
  t3829 = -0.281211000004*t3828;
  t3831 = -1. + t94;
  t3833 = 4.e-6*t3831;
  t3835 = t3833 + t1155;
  t3838 = -0.038749000006999997*t3835;
  t3845 = t1976*t3668;
  t3849 = t1891*t3770;
  t3851 = t1835*t3812;
  t3858 = t3824 + t3827 + t3829 + t3838 + t3845 + t3849 + t3851;
  t3496 = t2043*t3445;
  t3498 = -1.*t1805*t3475;
  t3501 = t3496 + t3498;
  t3448 = t1805*t3445;
  t3485 = t2043*t3475;
  t3491 = t3448 + t3485;
  t3868 = -0.15121*t1805;
  t3871 = t2043*t3821;
  t3882 = -1.*t1805*t3858;
  t3883 = t3529 + t3868 + t3871 + t3882;
  t3536 = 0.15121*t1805;
  t3822 = t1805*t3821;
  t3859 = t2043*t3858;
  t3861 = t3529 + t3536 + t3822 + t3859;
  t3896 = t869*t3411;
  t3898 = t1347*t3416;
  t3905 = t483*t3433;
  t3915 = t3896 + t3898 + t3905;
  t3923 = t1751*t3501;
  t3927 = -1.*t3491*t2354;
  t3930 = t3923 + t3927;
  t3937 = 1.5843479999999999e-12*var1[16];
  t3940 = -0.03874900000889869*t218;
  t3941 = t3607 + t2100;
  t3942 = -0.281211000004*t3941;
  t3944 = t3833 + t1887;
  t3953 = -1.8134809999999998e-6*t3944;
  t3954 = t1347*t3668;
  t3958 = t869*t3770;
  t3960 = t483*t3812;
  t3962 = t3937 + t3940 + t3942 + t3953 + t3954 + t3958 + t3960;
  t3975 = t1751*t3883;
  t3977 = -1.*t3861*t2354;
  t3982 = t3975 + t3977;
  t3916 = t3915*t1639;
  t3932 = t1736*t3930;
  t3933 = t3916 + t3932;
  t3862 = t1751*t3861;
  t3887 = t3883*t2354;
  t3889 = t3862 + t3887;
  t3356 = t1805*t3279;
  t3368 = t2043*t3330;
  t3373 = t3356 + t3368;
  t3292 = t2043*t3279;
  t3332 = -1.*t1805*t3330;
  t3334 = t3292 + t3332;
  t3966 = t3962*t1639;
  t3994 = t1736*t3982;
  t3995 = t3966 + t3994;
  t3006 = t1347*t3000;
  t3151 = t869*t3130;
  t3229 = t483*t3226;
  t3231 = t3006 + t3151 + t3229;
  t3250 = t3231*t1639;
  t3352 = t1751*t3334;
  t3382 = -1.*t3373*t2354;
  t3383 = t3352 + t3382;
  t3390 = t1736*t3383;
  t3391 = t3250 + t3390;
  t4016 = t1736*t3962;
  t4023 = -1.*t1639*t3982;
  t4028 = t4016 + t4023;
  t4037 = t1751*t3373;
  t4039 = t3334*t2354;
  t4044 = t4037 + t4039;
  t3495 = t1751*t3491;
  t3504 = t3501*t2354;
  t3507 = t3495 + t3504;
  t3894 = -1.*t3507*t3889;
  t4049 = t3889*t4044;
  t4083 = -1.*t3915*t3962;
  t4098 = t3962*t3231;
  t4227 = -1.*t3668*t3416;
  t4228 = -1.*t3411*t3770;
  t4229 = -1.*t3433*t3812;
  t4232 = t4227 + t4228 + t4229;
  t4241 = t3668*t3000;
  t4243 = t3770*t3130;
  t4244 = t3812*t3226;
  t4248 = t4241 + t4243 + t4244;
  t4006 = t1736*t3915;
  t4013 = -1.*t1639*t3930;
  t4014 = t4006 + t4013;
  t1657 = t1552*t1639;
  t2381 = t1736*t2377;
  t2418 = t1657 + t2381;
  t4054 = t1736*t3231;
  t4055 = -1.*t1639*t3383;
  t4057 = t4054 + t4055;
  t4325 = t2501*t3889;
  t4338 = -1.*t3889*t4044;
  t4360 = t1552*t3962;
  t4366 = -1.*t3962*t3231;
  t4454 = t3668*t1479;
  t4456 = t1113*t3770;
  t4458 = t789*t3812;
  t4460 = t4454 + t4456 + t4458;
  t4473 = -1.*t3668*t3000;
  t4474 = -1.*t3770*t3130;
  t4480 = -1.*t3812*t3226;
  t4482 = t4473 + t4474 + t4480;
  t4565 = -1.*t2501*t3889;
  t4593 = t3507*t3889;
  t4623 = -1.*t1552*t3962;
  t4633 = t3915*t3962;
  t4721 = -1.*t3668*t1479;
  t4722 = -1.*t1113*t3770;
  t4725 = -1.*t789*t3812;
  t4729 = t4721 + t4722 + t4725;
  t4733 = t3668*t3416;
  t4743 = t3411*t3770;
  t4751 = t3433*t3812;
  t4756 = t4733 + t4743 + t4751;
  p_output1[0]=t2418;
  p_output1[1]=t2455*t2501 - 1.*t2574*t2750;
  p_output1[2]=t2501*t2574 + t2455*t2750;
  p_output1[3]=t3391*(t3894 - 1.*t3933*t3995 - 1.*t4014*t4028) + t3933*(t3391*t3995 + t4049 + t4028*t4057);
  p_output1[4]=t4044*(t3894 - 1.*t3930*t3982 + t4083) + t3507*(t3383*t3982 + t4049 + t4098);
  p_output1[5]=t3231*(-1.*t3491*t3861 - 1.*t3501*t3883 + t4083) + t3915*(t3373*t3861 + t3334*t3883 + t4098);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0.15121*t2008 - 0.15121*t2199 + t3231*(-1.*t3445*t3821 - 1.*t3475*t3858 + t4083) + t3915*(t3279*t3821 + t3330*t3858 + t4098);
  p_output1[16]=0.281211*t1113 - 1.*t3000*t4232 - 1.*t3416*t4248 + 4.e-6*(-1.*t3130*t4232 - 1.*t3411*t4248) + 7.e-6*(t3226*t4232 + t3433*t4248) + 1.e-6*(7.e-6*t1413 + t2878 + t675) - 0.038749*t789;
  p_output1[17]=-4.051285074010787e-7;
  p_output1[18]=t3933;
  p_output1[19]=t2455*t3507 - 1.*t2574*t4014;
  p_output1[20]=t2574*t3507 + t2455*t4014;
  p_output1[21]=t3391*(t2418*t3995 + t2750*t4028 + t4325) + t2418*(-1.*t3391*t3995 - 1.*t4028*t4057 + t4338);
  p_output1[22]=t4044*(t2377*t3982 + t4325 + t4360) + t2501*(-1.*t3383*t3982 + t4338 + t4366);
  p_output1[23]=t3231*(t2348*t3861 + t2225*t3883 + t4360) + t1552*(-1.*t3373*t3861 - 1.*t3334*t3883 + t4366);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=-0.15121*t3445 + 0.15121*t3475 + t3231*(t2199*t3821 + t2008*t3858 + t4360) + t1552*(-1.*t3279*t3821 - 1.*t3330*t3858 + t4366);
  p_output1[34]=0.281211*t3411 - 0.038749*t3433 - 1.*t3000*t4460 - 1.*t1479*t4482 + 4.e-6*(-1.*t3130*t4460 - 1.*t1113*t4482) + 7.e-6*(t3226*t4460 + t4482*t789) + 1.e-6*(4.e-6*(-1. + t2877) + t3080 + t897);
  p_output1[35]=0.3000000410492048;
  p_output1[36]=t3391;
  p_output1[37]=t2455*t4044 - 1.*t2574*t4057;
  p_output1[38]=t2574*t4044 + t2455*t4057;
  p_output1[39]=t3933*(-1.*t2418*t3995 - 1.*t2750*t4028 + t4565) + t2418*(t3933*t3995 + t4014*t4028 + t4593);
  p_output1[40]=t3507*(-1.*t2377*t3982 + t4565 + t4623) + t2501*(t3930*t3982 + t4593 + t4633);
  p_output1[41]=t3915*(-1.*t2348*t3861 - 1.*t2225*t3883 + t4623) + t1552*(t3491*t3861 + t3501*t3883 + t4633);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=-0.15121*t3279 + 0.15121*t3330 + t3915*(-1.*t2199*t3821 - 1.*t2008*t3858 + t4623) + t1552*(t3445*t3821 + t3475*t3858 + t4633);
  p_output1[52]=0.281211*t3130 - 0.038749*t3226 + 1.e-6*(1. + t1361 - 7.e-6*t2881 + 4.e-6*t3635) - 1.*t3416*t4729 - 1.*t1479*t4756 + 4.e-6*(-1.*t3411*t4729 - 1.*t1113*t4756) + 7.e-6*(t3433*t4729 + t4756*t789);
  p_output1[53]=-2.826290000000002e-7;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fRrFoot_map_ParallelImpact.hh"

namespace SymFunction
{

void fRrFoot_map_ParallelImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
