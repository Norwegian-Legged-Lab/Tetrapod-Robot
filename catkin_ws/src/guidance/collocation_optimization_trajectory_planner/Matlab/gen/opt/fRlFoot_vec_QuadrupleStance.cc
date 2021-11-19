/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 17:51:13 GMT+01:00
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
  double t760;
  double t971;
  double t991;
  double t1146;
  double t45;
  double t1209;
  double t1998;
  double t2227;
  double t161;
  double t1735;
  double t2352;
  double t1008;
  double t1105;
  double t1688;
  double t1725;
  double t1773;
  double t1797;
  double t1879;
  double t1892;
  double t2408;
  double t2270;
  double t2278;
  double t2300;
  double t2313;
  double t2323;
  double t2333;
  double t2379;
  double t2393;
  double t2400;
  double t2450;
  double t2461;
  double t2470;
  double t2479;
  double t2501;
  double t2522;
  double t2527;
  double t2570;
  double t60;
  double t118;
  double t2693;
  double t2777;
  double t2696;
  double t2724;
  double t2729;
  double t2744;
  double t2747;
  double t2755;
  double t2763;
  double t2772;
  double t2773;
  double t2687;
  double t2784;
  double t2786;
  double t2798;
  double t2799;
  double t2800;
  double t2811;
  double t2820;
  double t2828;
  double t2893;
  double t2894;
  double t2429;
  double t2445;
  double t631;
  double t710;
  double t2237;
  double t2253;
  double t2617;
  double t2662;
  double t2681;
  double t2961;
  double t2963;
  double t2967;
  double t3044;
  double t3078;
  double t3123;
  double t3124;
  double t3130;
  double t3171;
  double t3186;
  double t3191;
  double t3281;
  double t3293;
  double t3297;
  double t3299;
  double t3326;
  double t3333;
  double t3343;
  double t3346;
  double t2936;
  double t3425;
  double t3440;
  double t3449;
  double t3464;
  double t3468;
  double t3478;
  double t3494;
  double t3513;
  double t3537;
  double t3540;
  double t3546;
  double t3560;
  double t3592;
  double t3618;
  double t3620;
  double t3637;
  double t2923;
  double t2925;
  double t2933;
  double t2776;
  double t2897;
  double t2900;
  double t1905;
  double t2407;
  double t2587;
  double t2614;
  double t2913;
  double t2937;
  double t2938;
  double t3708;
  double t3358;
  double t3380;
  double t3386;
  double t3317;
  double t3351;
  double t3353;
  double t3738;
  double t3048;
  double t3156;
  double t3202;
  double t3219;
  double t3356;
  double t3395;
  double t3398;
  double t3664;
  double t3674;
  double t3675;
  double t3569;
  double t3644;
  double t3645;
  double t3450;
  double t3493;
  double t3517;
  double t3525;
  double t3651;
  double t3678;
  double t3690;
  double t3711;
  double t3718;
  double t3719;
  double t3746;
  double t3752;
  double t3753;
  double t3777;
  double t3787;
  double t3802;
  double t3835;
  double t3846;
  double t3848;
  double t3878;
  double t3880;
  double t3888;
  double t3896;
  double t3898;
  double t3909;
  double t3280;
  double t3408;
  double t3409;
  double t4175;
  double t4200;
  double t4202;
  double t4205;
  double t4206;
  double t4212;
  double t4223;
  double t4224;
  double t4225;
  double t4226;
  double t4230;
  double t4245;
  double t4249;
  double t4254;
  double t4259;
  double t4265;
  double t4269;
  double t4283;
  double t4285;
  double t4309;
  double t4315;
  double t4317;
  double t4334;
  double t4348;
  double t4354;
  double t4373;
  double t4375;
  double t4388;
  double t4407;
  double t4418;
  double t4438;
  double t4448;
  double t4083;
  double t4119;
  double t4145;
  double t4161;
  double t4162;
  double t4169;
  double t4171;
  double t4173;
  double t4194;
  double t4196;
  double t4239;
  double t4319;
  double t4472;
  double t4526;
  double t4552;
  double t4554;
  double t4601;
  double t4604;
  double t4609;
  double t4630;
  double t4638;
  double t4652;
  double t4660;
  double t4671;
  double t4673;
  double t2631;
  double t2946;
  double t2947;
  double t4743;
  double t4771;
  double t4785;
  double t4786;
  double t4132;
  double t4538;
  double t4674;
  double t4687;
  double t4819;
  double t4835;
  double t4841;
  double t4842;
  double t4907;
  double t4909;
  double t4919;
  double t4944;
  double t4947;
  double t4949;
  double t4957;
  double t4958;
  double t4959;
  double t4700;
  double t4787;
  double t4797;
  double t4950;
  double t4961;
  double t4963;
  double t4969;
  double t4972;
  double t4985;
  double t3532;
  double t3692;
  double t3696;
  double t4811;
  double t4995;
  double t5017;
  double t5031;
  double t5063;
  double t5103;
  double t5135;
  double t5146;
  double t5159;
  double t5186;
  double t5200;
  double t5220;
  double t5639;
  double t5642;
  double t5644;
  double t5658;
  double t5689;
  double t5691;
  double t5694;
  double t5701;
  double t5793;
  double t5821;
  double t5837;
  double t5847;
  double t5857;
  double t5859;
  double t5892;
  double t5900;
  double t5606;
  double t6006;
  double t6007;
  double t6008;
  double t6013;
  double t6023;
  double t6026;
  double t6027;
  double t6029;
  t760 = Cos(var1[14]);
  t971 = -1.*t760;
  t991 = 1. + t971;
  t1146 = Sin(var1[14]);
  t45 = Cos(var1[13]);
  t1209 = -7.e-6*t1146;
  t1998 = -1.*t45;
  t2227 = 1. + t1998;
  t161 = Sin(var1[13]);
  t1735 = -7.e-6*t991;
  t2352 = -1.*t1146;
  t1008 = -6.5e-11*t991;
  t1105 = 4.e-6*t991;
  t1688 = t1105 + t1209;
  t1725 = 4.e-6*t1688;
  t1773 = -4.e-6*t1146;
  t1797 = t1735 + t1773;
  t1879 = -7.e-6*t1797;
  t1892 = 1. + t1008 + t1725 + t1879;
  t2408 = 2.8e-11*t2227;
  t2270 = 1.000000000049*t991;
  t2278 = -1. + t2270;
  t2300 = 4.e-6*t2278;
  t2313 = -1. + t760;
  t2323 = 4.e-6*t2313;
  t2333 = 2.8e-11*t991;
  t2379 = t2333 + t2352;
  t2393 = -7.e-6*t2379;
  t2400 = t2300 + t2323 + t2393 + t1209;
  t2450 = -1.000000000016*t991;
  t2461 = 1. + t2450;
  t2470 = -7.e-6*t2461;
  t2479 = -2.8e-11*t991;
  t2501 = t2479 + t2352;
  t2522 = 4.e-6*t2501;
  t2527 = 4.e-6*t1146;
  t2570 = t2470 + t1735 + t2522 + t2527;
  t60 = -1. + t45;
  t118 = 4.e-6*t60;
  t2693 = -7.e-6*t2227;
  t2777 = Sin(var1[12]);
  t2696 = 4.e-6*t161;
  t2724 = t2693 + t2696;
  t2729 = t2724*t1892;
  t2744 = t2408 + t161;
  t2747 = t2744*t2400;
  t2755 = -1.000000000016*t2227;
  t2763 = 1. + t2755;
  t2772 = t2763*t2570;
  t2773 = t2729 + t2747 + t2772;
  t2687 = Cos(var1[12]);
  t2784 = -6.5e-11*t2227;
  t2786 = 1. + t2784;
  t2798 = t2786*t1892;
  t2799 = 7.e-6*t161;
  t2800 = t118 + t2799;
  t2811 = t2800*t2400;
  t2820 = -4.e-6*t161;
  t2828 = t2693 + t2820;
  t2893 = t2828*t2570;
  t2894 = t2798 + t2811 + t2893;
  t2429 = -1.*t161;
  t2445 = t2408 + t2429;
  t631 = -7.e-6*t161;
  t710 = t118 + t631;
  t2237 = -1.000000000049*t2227;
  t2253 = 1. + t2237;
  t2617 = Sin(var1[4]);
  t2662 = Cos(var1[4]);
  t2681 = Cos(var1[5]);
  t2961 = 1.000000000016*t991;
  t2963 = t1735 + t2527;
  t2967 = -7.e-6*t2963;
  t3044 = -1. + t2961 + t2967;
  t3078 = 1. + t1008;
  t3123 = -7.e-6*t3078;
  t3124 = 7.e-6*t991;
  t3130 = t3123 + t3124 + t2527;
  t3171 = t2323 + t1209;
  t3186 = -7.e-6*t3171;
  t3191 = t2479 + t3186 + t1146;
  t3281 = t2828*t3044;
  t3293 = t2786*t3130;
  t3297 = t2800*t3191;
  t3299 = t3281 + t3293 + t3297;
  t3326 = t2763*t3044;
  t3333 = t2724*t3130;
  t3343 = t2744*t3191;
  t3346 = t3326 + t3333 + t3343;
  t2936 = Sin(var1[5]);
  t3425 = -1.000000000049*t991;
  t3440 = 4.e-6*t3171;
  t3449 = 1. + t3425 + t3440;
  t3464 = 4.e-6*t3078;
  t3468 = 7.e-6*t1146;
  t3478 = t3464 + t2323 + t3468;
  t3494 = 4.e-6*t2963;
  t3513 = t2333 + t3494 + t1146;
  t3537 = t2744*t3449;
  t3540 = t2724*t3478;
  t3546 = t2763*t3513;
  t3560 = t3537 + t3540 + t3546;
  t3592 = t2800*t3449;
  t3618 = t2786*t3478;
  t3620 = t2828*t3513;
  t3637 = t3592 + t3618 + t3620;
  t2923 = t2777*t2773;
  t2925 = t2687*t2894;
  t2933 = t2923 + t2925;
  t2776 = t2687*t2773;
  t2897 = -1.*t2777*t2894;
  t2900 = t2776 + t2897;
  t1905 = t710*t1892;
  t2407 = t2253*t2400;
  t2587 = t2445*t2570;
  t2614 = t1905 + t2407 + t2587;
  t2913 = t2681*t2900;
  t2937 = -1.*t2933*t2936;
  t2938 = t2913 + t2937;
  t3708 = Cos(var1[3]);
  t3358 = t2687*t3299;
  t3380 = t2777*t3346;
  t3386 = t3358 + t3380;
  t3317 = -1.*t2777*t3299;
  t3351 = t2687*t3346;
  t3353 = t3317 + t3351;
  t3738 = Sin(var1[3]);
  t3048 = t2445*t3044;
  t3156 = t710*t3130;
  t3202 = t2253*t3191;
  t3219 = t3048 + t3156 + t3202;
  t3356 = t2681*t3353;
  t3395 = -1.*t3386*t2936;
  t3398 = t3356 + t3395;
  t3664 = t2777*t3560;
  t3674 = t2687*t3637;
  t3675 = t3664 + t3674;
  t3569 = t2687*t3560;
  t3644 = -1.*t2777*t3637;
  t3645 = t3569 + t3644;
  t3450 = t2253*t3449;
  t3493 = t710*t3478;
  t3517 = t2445*t3513;
  t3525 = t3450 + t3493 + t3517;
  t3651 = t2681*t3645;
  t3678 = -1.*t3675*t2936;
  t3690 = t3651 + t3678;
  t3711 = t2681*t2933;
  t3718 = t2900*t2936;
  t3719 = t3711 + t3718;
  t3746 = t2662*t2614;
  t3752 = -1.*t2617*t2938;
  t3753 = t3746 + t3752;
  t3777 = t2681*t3386;
  t3787 = t3353*t2936;
  t3802 = t3777 + t3787;
  t3835 = t2662*t3219;
  t3846 = -1.*t2617*t3398;
  t3848 = t3835 + t3846;
  t3878 = t2681*t3675;
  t3880 = t3645*t2936;
  t3888 = t3878 + t3880;
  t3896 = t2662*t3525;
  t3898 = -1.*t2617*t3690;
  t3909 = t3896 + t3898;
  t3280 = t3219*t2617;
  t3408 = t2662*t3398;
  t3409 = t3280 + t3408;
  t4175 = 7.e-6*t2227;
  t4200 = -2.598649999999999e-7*var1[14];
  t4202 = 0.148705*t3078;
  t4205 = -2.3905277499999995e-16*t991;
  t4206 = -0.038922999986*t1688;
  t4212 = -0.80315*t1797;
  t4223 = t3124 + t2527;
  t4224 = -0.503149000008*t4223;
  t4225 = t2323 + t3468;
  t4226 = -0.038924*t4225;
  t4230 = t4200 + t4202 + t4205 + t4206 + t4212 + t4224 + t4226;
  t4245 = 1.0394599999999997e-12*var1[14];
  t4249 = 1. + t3425;
  t4254 = -0.038924*t4249;
  t4259 = -0.03892299998790722*t991;
  t4265 = -0.80315*t2379;
  t4269 = 0.148705*t3171;
  t4283 = t1105 + t3468;
  t4285 = -3.6777349999999994e-6*t4283;
  t4309 = t2479 + t1146;
  t4315 = -0.503149000008*t4309;
  t4317 = t4245 + t4254 + t4259 + t4265 + t4269 + t4285 + t4315;
  t4334 = 1.8190549999999993e-12*var1[14];
  t4348 = -0.80315*t2461;
  t4354 = -0.5031490000160505*t991;
  t4373 = -0.038922999986*t2501;
  t4375 = t3124 + t1773;
  t4388 = -3.6777349999999994e-6*t4375;
  t4407 = 0.148705*t2963;
  t4418 = t2333 + t1146;
  t4438 = -0.038924*t4418;
  t4448 = t4334 + t4348 + t4354 + t4373 + t4388 + t4407 + t4438;
  t4083 = -1.*t2687;
  t4119 = 1. + t4083;
  t4145 = 0.15121*t2777;
  t4161 = 1.0248489999999998e-12*var1[13];
  t4162 = -0.28120900000849935*t2227;
  t4169 = -2.8e-11*t2227;
  t4171 = t4169 + t2429;
  t4173 = -0.038748999993*t4171;
  t4194 = t4175 + t2820;
  t4196 = -2.123459e-6*t4194;
  t4239 = t2724*t4230;
  t4319 = t2744*t4317;
  t4472 = t2763*t4448;
  t4526 = t4161 + t4162 + t4173 + t4196 + t4239 + t4319 + t4472;
  t4552 = -1.4640699999999997e-7*var1[13];
  t4554 = -1.38024835e-16*t2227;
  t4601 = 4.e-6*t2227;
  t4604 = t4601 + t631;
  t4609 = -0.038748999993*t4604;
  t4630 = t4175 + t2696;
  t4638 = -0.281209000004*t4630;
  t4652 = t2786*t4230;
  t4660 = t2800*t4317;
  t4671 = t2828*t4448;
  t4673 = t4552 + t4554 + t4609 + t4638 + t4652 + t4660 + t4671;
  t2631 = t2614*t2617;
  t2946 = t2662*t2938;
  t2947 = t2631 + t2946;
  t4743 = -0.15121*t4119;
  t4771 = t2687*t4526;
  t4785 = -1.*t2777*t4673;
  t4786 = t4743 + t4145 + t4771 + t4785;
  t4132 = 0.15121*t4119;
  t4538 = t2777*t4526;
  t4674 = t2687*t4673;
  t4687 = t4132 + t4145 + t4538 + t4674;
  t4819 = 5.856279999999999e-13*var1[13];
  t4835 = -0.0387489999948987*t2227;
  t4841 = t4601 + t2799;
  t4842 = -2.123459e-6*t4841;
  t4907 = t4169 + t161;
  t4909 = -0.281209000004*t4907;
  t4919 = t710*t4230;
  t4944 = t2253*t4317;
  t4947 = t2445*t4448;
  t4949 = t4819 + t4835 + t4842 + t4909 + t4919 + t4944 + t4947;
  t4957 = t2681*t4786;
  t4958 = -1.*t4687*t2936;
  t4959 = t4957 + t4958;
  t4700 = t2681*t4687;
  t4787 = t4786*t2936;
  t4797 = t4700 + t4787;
  t4950 = t4949*t2617;
  t4961 = t2662*t4959;
  t4963 = t4950 + t4961;
  t4969 = t2662*t4949;
  t4972 = -1.*t2617*t4959;
  t4985 = t4969 + t4972;
  t3532 = t3525*t2617;
  t3692 = t2662*t3690;
  t3696 = t3532 + t3692;
  t4811 = -1.*t3719*t4797;
  t4995 = t3802*t4797;
  t5017 = t3719*t4797;
  t5031 = -1.*t3888*t4797;
  t5063 = -1.*t3802*t4797;
  t5103 = t3888*t4797;
  t5135 = -1.*t2614*t4949;
  t5146 = t3219*t4949;
  t5159 = t2614*t4949;
  t5186 = -1.*t3525*t4949;
  t5200 = -1.*t3219*t4949;
  t5220 = t3525*t4949;
  t5639 = t4230*t3130;
  t5642 = t3191*t4317;
  t5644 = t3044*t4448;
  t5658 = t5639 + t5642 + t5644;
  t5689 = -1.*t1892*t4230;
  t5691 = -1.*t2400*t4317;
  t5694 = -1.*t2570*t4448;
  t5701 = t5689 + t5691 + t5694;
  t5793 = t1892*t4230;
  t5821 = t2400*t4317;
  t5837 = t2570*t4448;
  t5847 = t5793 + t5821 + t5837;
  t5857 = -1.*t4230*t3478;
  t5859 = -1.*t3449*t4317;
  t5892 = -1.*t3513*t4448;
  t5900 = t5857 + t5859 + t5892;
  t5606 = 6.5e-11*t991;
  t6006 = -1.*t4230*t3130;
  t6007 = -1.*t3191*t4317;
  t6008 = -1.*t3044*t4448;
  t6013 = t6006 + t6007 + t6008;
  t6023 = t4230*t3478;
  t6026 = t3449*t4317;
  t6027 = t3513*t4448;
  t6029 = t6023 + t6026 + t6027;
  p_output1[0]=t3409*var2[0] + t3696*var2[1] + t2947*var2[2];
  p_output1[1]=(t3708*t3802 - 1.*t3738*t3848)*var2[0] + (t3708*t3888 - 1.*t3738*t3909)*var2[1] + (t3708*t3719 - 1.*t3738*t3753)*var2[2];
  p_output1[2]=(t3738*t3802 + t3708*t3848)*var2[0] + (t3738*t3888 + t3708*t3909)*var2[1] + (t3719*t3738 + t3708*t3753)*var2[2];
  p_output1[3]=(t3696*(t2947*t4963 + t3753*t4985 + t5017) + t2947*(-1.*t3696*t4963 - 1.*t3909*t4985 + t5031))*var2[0] + (t3409*(t4811 - 1.*t2947*t4963 - 1.*t3753*t4985) + t2947*(t3409*t4963 + t3848*t4985 + t4995))*var2[1] + (t3696*(-1.*t3409*t4963 - 1.*t3848*t4985 + t5063) + t3409*(t3696*t4963 + t3909*t4985 + t5103))*var2[2];
  p_output1[4]=(t3888*(t2938*t4959 + t5017 + t5159) + t3719*(-1.*t3690*t4959 + t5031 + t5186))*var2[0] + (t3802*(t4811 - 1.*t2938*t4959 + t5135) + t3719*(t3398*t4959 + t4995 + t5146))*var2[1] + (t3888*(-1.*t3398*t4959 + t5063 + t5200) + t3802*(t3690*t4959 + t5103 + t5220))*var2[2];
  p_output1[5]=(t3525*(t2933*t4687 + t2900*t4786 + t5159) + t2614*(-1.*t3675*t4687 - 1.*t3645*t4786 + t5186))*var2[0] + (t3219*(-1.*t2933*t4687 - 1.*t2900*t4786 + t5135) + t2614*(t3386*t4687 + t3353*t4786 + t5146))*var2[1] + (t3525*(-1.*t3386*t4687 - 1.*t3353*t4786 + t5200) + t3219*(t3675*t4687 + t3645*t4786 + t5220))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.15121*t3299 + 0.15121*t3346 + t3525*(t2773*t4526 + t2894*t4673 + t5159) + t2614*(-1.*t3560*t4526 - 1.*t3637*t4673 + t5186))*var2[0] + (0.15121*t3560 + 0.15121*t3637 + t3219*(-1.*t2773*t4526 - 1.*t2894*t4673 + t5135) + t2614*(t3346*t4526 + t3299*t4673 + t5146))*var2[1] + (0.15121*t2773 + 0.15121*t2894 + t3525*(-1.*t3346*t4526 - 1.*t3299*t4673 + t5200) + t3219*(t3560*t4526 + t3637*t4673 + t5220))*var2[2];
  p_output1[13]=(0.038749*t3044 + 1.e-6*(t1735 + t1773 + 7.e-6*t3078) - 0.281209*t3191 + t3478*t5847 + t1892*t5900 + 4.e-6*(-1.*t3449*t5847 - 1.*t2400*t5900) - 7.e-6*(t3513*t5847 + t2570*t5900))*var2[0] + (-0.281209*t3449 + 0.038749*t3513 + 1.e-6*(t1105 + t1209 + 4.e-6*(-1. + t5606)) + t1892*t5658 + t3130*t5701 - 7.e-6*(t2570*t5658 + t3044*t5701) + 4.e-6*(-1.*t2400*t5658 - 1.*t3191*t5701))*var2[1] + (-0.281209*t2400 + 0.038749*t2570 + 1.e-6*(-1. + 7.e-6*t1797 + 4.e-6*t4225 + t5606) + t3478*t6013 + t3130*t6029 - 7.e-6*(t3513*t6013 + t3044*t6029) + 4.e-6*(-1.*t3449*t6013 - 1.*t3191*t6029))*var2[2];
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

#include "fRlFoot_vec_QuadrupleStance.hh"

namespace QuadrupleStance
{

void fRlFoot_vec_QuadrupleStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
