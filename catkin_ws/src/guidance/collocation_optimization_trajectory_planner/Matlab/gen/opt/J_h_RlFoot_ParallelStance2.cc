/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:15:17 GMT+01:00
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
  double t65;
  double t88;
  double t103;
  double t121;
  double t283;
  double t288;
  double t289;
  double t314;
  double t317;
  double t328;
  double t115;
  double t256;
  double t383;
  double t189;
  double t467;
  double t798;
  double t810;
  double t814;
  double t884;
  double t15;
  double t658;
  double t688;
  double t523;
  double t537;
  double t543;
  double t721;
  double t733;
  double t754;
  double t961;
  double t423;
  double t1007;
  double t471;
  double t1057;
  double t844;
  double t1132;
  double t1137;
  double t156;
  double t988;
  double t998;
  double t1002;
  double t1010;
  double t1011;
  double t1012;
  double t1013;
  double t1016;
  double t1019;
  double t1364;
  double t1147;
  double t1162;
  double t1180;
  double t1193;
  double t1209;
  double t1213;
  double t1252;
  double t1259;
  double t1440;
  double t1441;
  double t1528;
  double t1531;
  double t1540;
  double t1579;
  double t1605;
  double t1638;
  double t969;
  double t1742;
  double t907;
  double t2157;
  double t1113;
  double t1820;
  double t1882;
  double t1075;
  double t357;
  double t372;
  double t306;
  double t322;
  double t566;
  double t622;
  double t668;
  double t673;
  double t689;
  double t703;
  double t712;
  double t408;
  double t411;
  double t425;
  double t451;
  double t499;
  double t519;
  double t520;
  double t1029;
  double t1033;
  double t1109;
  double t1112;
  double t1116;
  double t1117;
  double t1124;
  double t2451;
  double t2452;
  double t2492;
  double t2501;
  double t2510;
  double t2511;
  double t794;
  double t833;
  double t920;
  double t934;
  double t979;
  double t985;
  double t986;
  double t1337;
  double t1354;
  double t1372;
  double t1384;
  double t1400;
  double t1414;
  double t1438;
  double t1901;
  double t2521;
  double t2529;
  double t2538;
  double t1802;
  double t2575;
  double t2590;
  double t2606;
  double t1965;
  double t1996;
  double t2641;
  double t2648;
  double t2654;
  double t2166;
  double t2064;
  double t2138;
  double t2212;
  double t2286;
  double t2310;
  double t2271;
  double t2328;
  double t2843;
  double t2494;
  double t2512;
  double t2547;
  double t2615;
  double t2659;
  double t2663;
  double t2704;
  double t2707;
  double t2709;
  double t2721;
  double t2730;
  double t2731;
  double t2733;
  double t2744;
  double t2767;
  double t2769;
  double t2774;
  double t2795;
  double t2809;
  double t2816;
  double t2900;
  double t3000;
  double t3066;
  double t3200;
  double t3207;
  double t3229;
  double t2920;
  double t3304;
  double t3151;
  double t3241;
  double t3256;
  double t3257;
  double t3264;
  double t3272;
  double t3276;
  double t3281;
  double t3286;
  double t3301;
  double t3328;
  double t3329;
  double t3334;
  double t3346;
  double t3357;
  double t3375;
  double t3381;
  double t3385;
  double t3392;
  double t3495;
  double t3540;
  double t3514;
  double t3516;
  double t3517;
  double t3519;
  double t3550;
  double t3552;
  double t3584;
  double t3602;
  double t3536;
  double t3641;
  double t3643;
  double t3652;
  double t3653;
  double t3503;
  double t3727;
  double t3613;
  double t61;
  double t109;
  double t186;
  double t188;
  double t203;
  double t208;
  double t226;
  double t3785;
  double t3815;
  double t3810;
  double t3826;
  double t3839;
  double t3844;
  double t3848;
  double t3851;
  double t3856;
  double t3859;
  double t3860;
  double t3869;
  double t3872;
  double t3875;
  double t3878;
  double t3879;
  double t3885;
  double t3886;
  double t3889;
  double t3894;
  double t3898;
  double t3900;
  double t3935;
  double t3960;
  double t3968;
  double t3979;
  double t4099;
  double t4119;
  double t4124;
  double t4128;
  double t4137;
  double t4146;
  double t4150;
  double t4159;
  double t4161;
  double t4162;
  double t4180;
  double t4186;
  double t4197;
  double t4200;
  double t4208;
  double t4214;
  double t4221;
  double t4238;
  double t4330;
  double t4338;
  double t4356;
  double t4367;
  double t4368;
  double t4370;
  double t4377;
  double t4382;
  double t4385;
  double t4388;
  double t4390;
  double t4392;
  double t4394;
  double t4396;
  double t4404;
  double t4410;
  double t4421;
  double t4432;
  double t4449;
  double t4460;
  double t4464;
  double t2853;
  double t2855;
  double t2890;
  double t4709;
  double t4710;
  double t4713;
  double t4725;
  double t4729;
  double t4736;
  double t4741;
  double t4779;
  double t4780;
  double t4788;
  double t4792;
  double t4796;
  double t4797;
  double t4804;
  double t4810;
  double t4824;
  double t2913;
  double t2914;
  double t2936;
  double t2939;
  double t2986;
  double t2991;
  double t3005;
  double t3014;
  double t3076;
  double t3092;
  double t3102;
  double t3106;
  double t3112;
  double t3128;
  double t3153;
  double t3165;
  double t3176;
  double t3199;
  double t4976;
  double t4977;
  double t4987;
  double t4993;
  double t4994;
  double t4998;
  double t4999;
  double t5006;
  double t5013;
  double t5064;
  double t5071;
  double t5079;
  double t5080;
  double t5083;
  double t5132;
  double t3496;
  double t3501;
  double t3504;
  double t3505;
  double t3510;
  double t3512;
  double t3537;
  double t3538;
  double t3541;
  double t3542;
  double t3543;
  double t3548;
  double t3608;
  double t3610;
  double t3620;
  double t3622;
  double t3623;
  double t3634;
  double t3655;
  double t5450;
  double t5455;
  double t5456;
  double t5464;
  double t5543;
  double t5599;
  double t5600;
  double t5601;
  double t3695;
  double t5633;
  double t5641;
  double t5653;
  double t5656;
  double t3717;
  double t3731;
  double t3744;
  double t3756;
  double t7113;
  double t7115;
  double t7127;
  double t7132;
  double t7145;
  double t7146;
  double t7163;
  double t7164;
  double t7168;
  double t7170;
  double t7172;
  double t7173;
  double t7180;
  double t7181;
  double t7183;
  double t7184;
  double t7185;
  double t7186;
  double t7586;
  double t7645;
  double t7681;
  double t7740;
  double t7768;
  double t7790;
  double t7830;
  double t7852;
  double t7905;
  double t7907;
  double t7908;
  double t7915;
  double t7934;
  double t7959;
  double t7989;
  double t7991;
  double t7996;
  double t8296;
  double t8297;
  double t8298;
  double t8302;
  double t8303;
  double t8306;
  double t8308;
  double t8312;
  double t8315;
  double t8320;
  double t8327;
  double t8330;
  double t8331;
  double t8337;
  double t8338;
  double t8341;
  double t8375;
  double t8377;
  double t8379;
  double t8381;
  double t8382;
  double t8383;
  double t8386;
  double t8388;
  double t8389;
  double t8393;
  double t8394;
  double t8473;
  double t8474;
  double t8516;
  double t8541;
  double t8723;
  double t8732;
  double t8735;
  double t8736;
  double t8738;
  double t8739;
  double t8740;
  double t8741;
  double t8744;
  double t8745;
  double t8747;
  double t8751;
  t65 = Cos(var1[13]);
  t88 = -1.*t65;
  t103 = 1. + t88;
  t121 = Sin(var1[13]);
  t283 = Cos(var1[12]);
  t288 = -1.*t283;
  t289 = 1. + t288;
  t314 = Sin(var1[12]);
  t317 = 0.15121*t314;
  t328 = Sin(var1[4]);
  t115 = 4.e-6*t103;
  t256 = Cos(var1[5]);
  t383 = Sin(var1[5]);
  t189 = -2.8e-11*t103;
  t467 = 7.e-6*t103;
  t798 = Cos(var1[14]);
  t810 = -1.*t798;
  t814 = 1. + t810;
  t884 = Sin(var1[14]);
  t15 = Cos(var1[4]);
  t658 = -1.*t121;
  t688 = -4.e-6*t121;
  t523 = t256*t314*t328;
  t537 = t283*t328*t383;
  t543 = t523 + t537;
  t721 = -1.*t283*t256*t328;
  t733 = t314*t328*t383;
  t754 = t721 + t733;
  t961 = 7.e-6*t814;
  t423 = -7.e-6*t121;
  t1007 = -7.e-6*t103;
  t471 = 4.e-6*t121;
  t1057 = 4.e-6*t814;
  t844 = -2.8e-11*t814;
  t1132 = -1. + t65;
  t1137 = 4.e-6*t1132;
  t156 = 7.e-6*t121;
  t988 = 2.8e-11*t103;
  t998 = t988 + t658;
  t1002 = t15*t998;
  t1010 = t1007 + t688;
  t1011 = t1010*t543;
  t1012 = -1.000000000016*t103;
  t1013 = 1. + t1012;
  t1016 = t1013*t754;
  t1019 = t1002 + t1011 + t1016;
  t1364 = 7.e-6*t884;
  t1147 = t1137 + t423;
  t1162 = t15*t1147;
  t1180 = -6.5e-11*t103;
  t1193 = 1. + t1180;
  t1209 = t1193*t543;
  t1213 = t1007 + t471;
  t1252 = t1213*t754;
  t1259 = t1162 + t1209 + t1252;
  t1440 = -1.000000000049*t103;
  t1441 = 1. + t1440;
  t1528 = t1441*t15;
  t1531 = t1137 + t156;
  t1540 = t1531*t543;
  t1579 = t988 + t121;
  t1605 = t1579*t754;
  t1638 = t1528 + t1540 + t1605;
  t969 = -4.e-6*t884;
  t1742 = 2.8e-11*t814;
  t907 = -1.*t884;
  t2157 = -7.e-6*t814;
  t1113 = 4.e-6*t884;
  t1820 = -1. + t798;
  t1882 = 4.e-6*t1820;
  t1075 = -7.e-6*t884;
  t357 = 0.15121*t289;
  t372 = t357 + t317;
  t306 = -0.15121*t289;
  t322 = t306 + t317;
  t566 = 1.0248489999999998e-12*var1[13];
  t622 = -0.28120900000849935*t103;
  t668 = t189 + t658;
  t673 = -0.038748999993*t668;
  t689 = t467 + t688;
  t703 = -2.123459e-6*t689;
  t712 = t566 + t622 + t673 + t703;
  t408 = -1.4640699999999997e-7*var1[13];
  t411 = -1.38024835e-16*t103;
  t425 = t115 + t423;
  t451 = -0.038748999993*t425;
  t499 = t467 + t471;
  t519 = -0.281209000004*t499;
  t520 = t408 + t411 + t451 + t519;
  t1029 = -2.598649999999999e-7*var1[14];
  t1033 = -2.3905277499999995e-16*t814;
  t1109 = t1057 + t1075;
  t1112 = -0.038922999986*t1109;
  t1116 = t961 + t1113;
  t1117 = -0.503149000008*t1116;
  t1124 = t1029 + t1033 + t1112 + t1117;
  t2451 = -1.*t15*t256*t314;
  t2452 = -1.*t283*t15*t383;
  t2492 = t2451 + t2452;
  t2501 = -1.*t283*t15*t256;
  t2510 = t15*t314*t383;
  t2511 = t2501 + t2510;
  t794 = 1.8190549999999993e-12*var1[14];
  t833 = -0.5031490000160505*t814;
  t920 = t844 + t907;
  t934 = -0.038922999986*t920;
  t979 = t961 + t969;
  t985 = -3.6777349999999994e-6*t979;
  t986 = t794 + t833 + t934 + t985;
  t1337 = 1.0394599999999997e-12*var1[14];
  t1354 = -0.03892299998790722*t814;
  t1372 = t1057 + t1364;
  t1384 = -3.6777349999999994e-6*t1372;
  t1400 = t844 + t884;
  t1414 = -0.503149000008*t1400;
  t1438 = t1337 + t1354 + t1384 + t1414;
  t1901 = t1882 + t1364;
  t2521 = t1213*t2492;
  t2529 = t1193*t2511;
  t2538 = t2521 + t2529;
  t1802 = t1742 + t884;
  t2575 = t1013*t2492;
  t2590 = t1010*t2511;
  t2606 = t2575 + t2590;
  t1965 = -1.000000000049*t814;
  t1996 = 1. + t1965;
  t2641 = t1579*t2492;
  t2648 = t1531*t2511;
  t2654 = t2641 + t2648;
  t2166 = t2157 + t969;
  t2064 = -1.000000000016*t814;
  t2138 = 1. + t2064;
  t2212 = t1742 + t907;
  t2286 = -6.5e-11*t814;
  t2310 = 1. + t2286;
  t2271 = t2157 + t1113;
  t2328 = t1882 + t1075;
  t2843 = 0.15121*t283;
  t2494 = t712*t2492;
  t2512 = t520*t2511;
  t2547 = t1124*t2538;
  t2615 = t986*t2606;
  t2659 = t1438*t2654;
  t2663 = t1901*t2538;
  t2704 = t1802*t2606;
  t2707 = t1996*t2654;
  t2709 = t2663 + t2704 + t2707;
  t2721 = -0.038924*t2709;
  t2730 = t2166*t2538;
  t2731 = t2138*t2606;
  t2733 = t2212*t2654;
  t2744 = t2730 + t2731 + t2733;
  t2767 = -0.80315*t2744;
  t2769 = t2310*t2538;
  t2774 = t2271*t2606;
  t2795 = t2328*t2654;
  t2809 = t2769 + t2774 + t2795;
  t2816 = 0.148705*t2809;
  t2900 = -2.8e-11*t121;
  t3000 = -7.e-6*t65;
  t3066 = 4.e-6*t65;
  t3200 = t283*t15*t256;
  t3207 = -1.*t15*t314*t383;
  t3229 = t3200 + t3207;
  t2920 = 7.e-6*t65;
  t3304 = 2.8e-11*t121;
  t3151 = -4.e-6*t65;
  t3241 = t3000 + t688;
  t3256 = t3241*t328;
  t3257 = -6.5e-11*t121*t2492;
  t3264 = t3066 + t423;
  t3272 = t3264*t3229;
  t3276 = t3256 + t3257 + t3272;
  t3281 = -1.000000000049*t121*t328;
  t3286 = t2920 + t688;
  t3301 = t3286*t2492;
  t3328 = t65 + t3304;
  t3329 = t3328*t3229;
  t3334 = t3281 + t3301 + t3329;
  t3346 = t88 + t3304;
  t3357 = t3346*t328;
  t3375 = t3151 + t423;
  t3381 = t3375*t2492;
  t3385 = -1.000000000016*t121*t3229;
  t3392 = t3357 + t3381 + t3385;
  t3495 = -2.8e-11*t884;
  t3540 = 4.e-6*t798;
  t3514 = t998*t328;
  t3516 = t1010*t2492;
  t3517 = t1013*t3229;
  t3519 = t3514 + t3516 + t3517;
  t3550 = t1147*t328;
  t3552 = t1193*t2492;
  t3584 = t1213*t3229;
  t3602 = t3550 + t3552 + t3584;
  t3536 = -7.e-6*t798;
  t3641 = t1441*t328;
  t3643 = t1531*t2492;
  t3652 = t1579*t3229;
  t3653 = t3641 + t3643 + t3652;
  t3503 = -4.e-6*t798;
  t3727 = 2.8e-11*t884;
  t3613 = 7.e-6*t798;
  t61 = 5.856279999999999e-13*var1[13];
  t109 = -0.0387489999948987*t103;
  t186 = t115 + t156;
  t188 = -2.123459e-6*t186;
  t203 = t189 + t121;
  t208 = -0.281209000004*t203;
  t226 = t61 + t109 + t188 + t208;
  t3785 = Cos(var1[3]);
  t3815 = Sin(var1[3]);
  t3810 = t3785*t256*t328;
  t3826 = -1.*t3815*t383;
  t3839 = t3810 + t3826;
  t3844 = -1.*t256*t3815;
  t3848 = -1.*t3785*t328*t383;
  t3851 = t3844 + t3848;
  t3856 = -1.*t314*t3839;
  t3859 = t283*t3851;
  t3860 = t3856 + t3859;
  t3869 = t283*t3839;
  t3872 = t314*t3851;
  t3875 = t3869 + t3872;
  t3878 = -1.*t3785*t15*t998;
  t3879 = t1010*t3860;
  t3885 = t1013*t3875;
  t3886 = t3878 + t3879 + t3885;
  t3889 = -1.*t3785*t15*t1147;
  t3894 = t1193*t3860;
  t3898 = t1213*t3875;
  t3900 = t3889 + t3894 + t3898;
  t3935 = -1.*t1441*t3785*t15;
  t3960 = t1531*t3860;
  t3968 = t1579*t3875;
  t3979 = t3935 + t3960 + t3968;
  t4099 = -1.*t15*t256*t314*t3815;
  t4119 = -1.*t283*t15*t3815*t383;
  t4124 = t4099 + t4119;
  t4128 = t283*t15*t256*t3815;
  t4137 = -1.*t15*t314*t3815*t383;
  t4146 = t4128 + t4137;
  t4150 = t998*t3815*t328;
  t4159 = t1010*t4124;
  t4161 = t1013*t4146;
  t4162 = t4150 + t4159 + t4161;
  t4180 = t1147*t3815*t328;
  t4186 = t1193*t4124;
  t4197 = t1213*t4146;
  t4200 = t4180 + t4186 + t4197;
  t4208 = t1441*t3815*t328;
  t4214 = t1531*t4124;
  t4221 = t1579*t4146;
  t4238 = t4208 + t4214 + t4221;
  t4330 = -1.*t256*t3815*t328;
  t4338 = -1.*t3785*t383;
  t4356 = t4330 + t4338;
  t4367 = t3785*t256;
  t4368 = -1.*t3815*t328*t383;
  t4370 = t4367 + t4368;
  t4377 = t314*t4356;
  t4382 = t283*t4370;
  t4385 = t4377 + t4382;
  t4388 = t283*t4356;
  t4390 = -1.*t314*t4370;
  t4392 = t4388 + t4390;
  t4394 = t1213*t4385;
  t4396 = t1193*t4392;
  t4404 = t4394 + t4396;
  t4410 = t1013*t4385;
  t4421 = t1010*t4392;
  t4432 = t4410 + t4421;
  t4449 = t1579*t4385;
  t4460 = t1531*t4392;
  t4464 = t4449 + t4460;
  t2853 = -0.15121*t314;
  t2855 = t2843 + t2853;
  t2890 = t2843 + t317;
  t4709 = t256*t3815*t328;
  t4710 = t3785*t383;
  t4713 = t4709 + t4710;
  t4725 = -1.*t314*t4713;
  t4729 = t4725 + t4382;
  t4736 = -1.*t283*t4713;
  t4741 = t4736 + t4390;
  t4779 = t1213*t4729;
  t4780 = t1193*t4741;
  t4788 = t4779 + t4780;
  t4792 = t1013*t4729;
  t4796 = t1010*t4741;
  t4797 = t4792 + t4796;
  t4804 = t1579*t4729;
  t4810 = t1531*t4741;
  t4824 = t4804 + t4810;
  t2913 = t65 + t2900;
  t2914 = -0.281209000004*t2913;
  t2936 = t2920 + t471;
  t2939 = -2.123459e-6*t2936;
  t2986 = -0.0387489999948987*t121;
  t2991 = 5.856279999999999e-13 + t2914 + t2939 + t2986;
  t3005 = t3000 + t471;
  t3014 = -0.038748999993*t3005;
  t3076 = t3066 + t156;
  t3092 = -0.281209000004*t3076;
  t3102 = -1.38024835e-16*t121;
  t3106 = -1.4640699999999997e-7 + t3014 + t3092 + t3102;
  t3112 = t88 + t2900;
  t3128 = -0.038748999993*t3112;
  t3153 = t3151 + t156;
  t3165 = -2.123459e-6*t3153;
  t3176 = -0.28120900000849935*t121;
  t3199 = 1.0248489999999998e-12 + t3128 + t3165 + t3176;
  t4976 = t283*t4713;
  t4977 = t314*t4370;
  t4987 = t4976 + t4977;
  t4993 = -1.*t15*t3241*t3815;
  t4994 = -6.5e-11*t121*t4729;
  t4998 = t3264*t4987;
  t4999 = t4993 + t4994 + t4998;
  t5006 = 1.000000000049*t15*t121*t3815;
  t5013 = t3286*t4729;
  t5064 = t3328*t4987;
  t5071 = t5006 + t5013 + t5064;
  t5079 = -1.*t15*t3346*t3815;
  t5080 = t3375*t4729;
  t5083 = -1.000000000016*t121*t4987;
  t5132 = t5079 + t5080 + t5083;
  t3496 = t810 + t3495;
  t3501 = -0.038922999986*t3496;
  t3504 = t3503 + t1364;
  t3505 = -3.6777349999999994e-6*t3504;
  t3510 = -0.5031490000160505*t884;
  t3512 = 1.8190549999999993e-12 + t3501 + t3505 + t3510;
  t3537 = t3536 + t1113;
  t3538 = -0.038922999986*t3537;
  t3541 = t3540 + t1364;
  t3542 = -0.503149000008*t3541;
  t3543 = -2.3905277499999995e-16*t884;
  t3548 = -2.598649999999999e-7 + t3538 + t3542 + t3543;
  t3608 = t798 + t3495;
  t3610 = -0.503149000008*t3608;
  t3620 = t3613 + t1113;
  t3622 = -3.6777349999999994e-6*t3620;
  t3623 = -0.03892299998790722*t884;
  t3634 = 1.0394599999999997e-12 + t3610 + t3622 + t3623;
  t3655 = t3540 + t1075;
  t5450 = -1.*t15*t998*t3815;
  t5455 = t1010*t4729;
  t5456 = t1013*t4987;
  t5464 = t5450 + t5455 + t5456;
  t5543 = -1.*t15*t1147*t3815;
  t5599 = t1193*t4729;
  t5600 = t1213*t4987;
  t5601 = t5543 + t5599 + t5600;
  t3695 = t3536 + t969;
  t5633 = -1.*t1441*t15*t3815;
  t5641 = t1531*t4729;
  t5653 = t1579*t4987;
  t5656 = t5633 + t5641 + t5653;
  t3717 = t3503 + t1075;
  t3731 = t810 + t3727;
  t3744 = t798 + t3727;
  t3756 = t3613 + t969;
  t7113 = t3785*t15*t256*t314;
  t7115 = t283*t3785*t15*t383;
  t7127 = t7113 + t7115;
  t7132 = -1.*t283*t3785*t15*t256;
  t7145 = t3785*t15*t314*t383;
  t7146 = t7132 + t7145;
  t7163 = -1.*t3785*t998*t328;
  t7164 = t1010*t7127;
  t7168 = t1013*t7146;
  t7170 = t7163 + t7164 + t7168;
  t7172 = -1.*t3785*t1147*t328;
  t7173 = t1193*t7127;
  t7180 = t1213*t7146;
  t7181 = t7172 + t7173 + t7180;
  t7183 = -1.*t1441*t3785*t328;
  t7184 = t1531*t7127;
  t7185 = t1579*t7146;
  t7186 = t7183 + t7184 + t7185;
  t7586 = t256*t3815;
  t7645 = t3785*t328*t383;
  t7681 = t7586 + t7645;
  t7740 = t314*t3839;
  t7768 = t283*t7681;
  t7790 = t7740 + t7768;
  t7830 = -1.*t314*t7681;
  t7852 = t3869 + t7830;
  t7905 = t1213*t7790;
  t7907 = t1193*t7852;
  t7908 = t7905 + t7907;
  t7915 = t1013*t7790;
  t7934 = t1010*t7852;
  t7959 = t7915 + t7934;
  t7989 = t1579*t7790;
  t7991 = t1531*t7852;
  t7996 = t7989 + t7991;
  t8296 = -1.*t3785*t256*t328;
  t8297 = t3815*t383;
  t8298 = t8296 + t8297;
  t8302 = -1.*t314*t8298;
  t8303 = t8302 + t7768;
  t8306 = -1.*t283*t8298;
  t8308 = t8306 + t7830;
  t8312 = t1213*t8303;
  t8315 = t1193*t8308;
  t8320 = t8312 + t8315;
  t8327 = t1013*t8303;
  t8330 = t1010*t8308;
  t8331 = t8327 + t8330;
  t8337 = t1579*t8303;
  t8338 = t1531*t8308;
  t8341 = t8337 + t8338;
  t8375 = t283*t8298;
  t8377 = t314*t7681;
  t8379 = t8375 + t8377;
  t8381 = t3785*t15*t3241;
  t8382 = -6.5e-11*t121*t8303;
  t8383 = t3264*t8379;
  t8386 = t8381 + t8382 + t8383;
  t8388 = -1.000000000049*t3785*t15*t121;
  t8389 = t3286*t8303;
  t8393 = t3328*t8379;
  t8394 = t8388 + t8389 + t8393;
  t8473 = t3785*t15*t3346;
  t8474 = t3375*t8303;
  t8516 = -1.000000000016*t121*t8379;
  t8541 = t8473 + t8474 + t8516;
  t8723 = t3785*t15*t998;
  t8732 = t1010*t8303;
  t8735 = t1013*t8379;
  t8736 = t8723 + t8732 + t8735;
  t8738 = t3785*t15*t1147;
  t8739 = t1193*t8303;
  t8740 = t1213*t8379;
  t8741 = t8738 + t8739 + t8740;
  t8744 = t1441*t3785*t15;
  t8745 = t1531*t8303;
  t8747 = t1579*t8379;
  t8751 = t8744 + t8745 + t8747;
  p_output1[0]=1.;
  p_output1[1]=t1124*t1259 + t1438*t1638 - 0.038924*(t1019*t1802 + t1259*t1901 + t1638*t1996) - 0.80315*(t1019*t2138 + t1259*t2166 + t1638*t2212) + t15*t226 + 0.148705*(t1019*t2271 + t1259*t2310 + t1638*t2328) - 1.*t256*t322*t328 + t328*t372*t383 + t520*t543 + t712*t754 + t1019*t986;
  p_output1[2]=t2494 + t2512 + t2547 + t2615 + t2659 + t2721 + t2767 + t2816 - 1.*t15*t256*t372 - 1.*t15*t322*t383;
  p_output1[3]=t2494 + t2512 + t2547 + t2615 + t2659 + t2721 + t2767 + t2816 + t15*t256*t2855 - 1.*t15*t2890*t383;
  p_output1[4]=t2492*t3106 + t3199*t3229 + t1124*t3276 + t2991*t328 + t1438*t3334 - 0.038924*(t1901*t3276 + t1996*t3334 + t1802*t3392) - 0.80315*(t2166*t3276 + t2212*t3334 + t2138*t3392) + 0.148705*(t2310*t3276 + t2328*t3334 + t2271*t3392) + t3392*t986;
  p_output1[5]=t3512*t3519 + t3548*t3602 + t3634*t3653 - 0.80315*(t3602*t3717 + t3653*t3731 - 1.000000000016*t3519*t884) + 0.148705*(t3519*t3655 + t3653*t3695 - 6.5e-11*t3602*t884) - 0.038924*(t3519*t3744 + t3602*t3756 - 1.000000000049*t3653*t884);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=-1.*t15*t226*t3785 + t322*t3839 + t372*t3851 + t1124*t3900 + t1438*t3979 - 0.038924*(t1802*t3886 + t1901*t3900 + t1996*t3979) - 0.80315*(t2138*t3886 + t2166*t3900 + t2212*t3979) + 0.148705*(t2271*t3886 + t2310*t3900 + t2328*t3979) + t3860*t520 + t3875*t712 + t3886*t986;
  p_output1[9]=t15*t256*t322*t3815 + t226*t328*t3815 - 1.*t15*t372*t3815*t383 + t1124*t4200 + t1438*t4238 - 0.038924*(t1802*t4162 + t1901*t4200 + t1996*t4238) - 0.80315*(t2138*t4162 + t2166*t4200 + t2212*t4238) + 0.148705*(t2271*t4162 + t2310*t4200 + t2328*t4238) + t4124*t520 + t4146*t712 + t4162*t986;
  p_output1[10]=t372*t4356 + t322*t4370 + t1124*t4404 + t1438*t4464 - 0.038924*(t1901*t4404 + t1802*t4432 + t1996*t4464) - 0.80315*(t2166*t4404 + t2138*t4432 + t2212*t4464) + 0.148705*(t2310*t4404 + t2271*t4432 + t2328*t4464) + t4392*t520 + t4385*t712 + t4432*t986;
  p_output1[11]=t2890*t4370 + t2855*t4713 + t1124*t4788 + t1438*t4824 - 0.038924*(t1901*t4788 + t1802*t4797 + t1996*t4824) - 0.80315*(t2166*t4788 + t2138*t4797 + t2212*t4824) + 0.148705*(t2310*t4788 + t2271*t4797 + t2328*t4824) + t4741*t520 + t4729*t712 + t4797*t986;
  p_output1[12]=-1.*t15*t2991*t3815 + t3106*t4729 + t3199*t4987 + t1124*t4999 + t1438*t5071 - 0.038924*(t1901*t4999 + t1996*t5071 + t1802*t5132) - 0.80315*(t2166*t4999 + t2212*t5071 + t2138*t5132) + 0.148705*(t2310*t4999 + t2328*t5071 + t2271*t5132) + t5132*t986;
  p_output1[13]=t3512*t5464 + t3548*t5601 + t3634*t5656 - 0.80315*(t3717*t5601 + t3731*t5656 - 1.000000000016*t5464*t884) + 0.148705*(t3655*t5464 + t3695*t5656 - 6.5e-11*t5601*t884) - 0.038924*(t3744*t5464 + t3756*t5601 - 1.000000000049*t5656*t884);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=-1.*t15*t226*t3815 + t372*t4370 + t322*t4713 + t4729*t520 + t1124*t5601 + t1438*t5656 - 0.038924*(t1802*t5464 + t1901*t5601 + t1996*t5656) - 0.80315*(t2138*t5464 + t2166*t5601 + t2212*t5656) + 0.148705*(t2271*t5464 + t2310*t5601 + t2328*t5656) + t4987*t712 + t5464*t986;
  p_output1[17]=-1.*t15*t256*t322*t3785 - 1.*t226*t328*t3785 + t15*t372*t3785*t383 + t520*t7127 + t712*t7146 + t1124*t7181 + t1438*t7186 - 0.038924*(t1802*t7170 + t1901*t7181 + t1996*t7186) - 0.80315*(t2138*t7170 + t2166*t7181 + t2212*t7186) + 0.148705*(t2271*t7170 + t2310*t7181 + t2328*t7186) + t7170*t986;
  p_output1[18]=t372*t3839 + t322*t7681 + t712*t7790 + t520*t7852 + t1124*t7908 + t1438*t7996 - 0.038924*(t1901*t7908 + t1802*t7959 + t1996*t7996) - 0.80315*(t2166*t7908 + t2138*t7959 + t2212*t7996) + 0.148705*(t2310*t7908 + t2271*t7959 + t2328*t7996) + t7959*t986;
  p_output1[19]=t2890*t7681 + t2855*t8298 + t712*t8303 + t520*t8308 + t1124*t8320 + t1438*t8341 - 0.038924*(t1901*t8320 + t1802*t8331 + t1996*t8341) - 0.80315*(t2166*t8320 + t2138*t8331 + t2212*t8341) + 0.148705*(t2310*t8320 + t2271*t8331 + t2328*t8341) + t8331*t986;
  p_output1[20]=t15*t2991*t3785 + t3106*t8303 + t3199*t8379 + t1124*t8386 + t1438*t8394 - 0.038924*(t1901*t8386 + t1996*t8394 + t1802*t8541) - 0.80315*(t2166*t8386 + t2212*t8394 + t2138*t8541) + 0.148705*(t2310*t8386 + t2328*t8394 + t2271*t8541) + t8541*t986;
  p_output1[21]=t3512*t8736 + t3548*t8741 + t3634*t8751 - 0.80315*(t3717*t8741 + t3731*t8751 - 1.000000000016*t8736*t884) + 0.148705*(t3655*t8736 + t3695*t8751 - 6.5e-11*t8741*t884) - 0.038924*(t3744*t8736 + t3756*t8741 - 1.000000000049*t8751*t884);
  p_output1[22]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 23, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_RlFoot_ParallelStance2.hh"

namespace ParallelStance2
{

void J_h_RlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
