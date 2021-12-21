/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:12:09 GMT+01:00
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
  double t25;
  double t107;
  double t299;
  double t802;
  double t128;
  double t608;
  double t883;
  double t812;
  double t853;
  double t888;
  double t1269;
  double t1286;
  double t1318;
  double t1363;
  double t595;
  double t582;
  double t855;
  double t909;
  double t935;
  double t604;
  double t1116;
  double t1170;
  double t1191;
  double t1330;
  double t234;
  double t1517;
  double t1769;
  double t1423;
  double t988;
  double t1993;
  double t1058;
  double t1574;
  double t2134;
  double t1519;
  double t1533;
  double t1562;
  double t1591;
  double t1634;
  double t1657;
  double t2114;
  double t1822;
  double t1918;
  double t1989;
  double t2002;
  double t2020;
  double t2024;
  double t2194;
  double t2205;
  double t2212;
  double t2221;
  double t2231;
  double t2239;
  double t1379;
  double t2278;
  double t1430;
  double t2475;
  double t2550;
  double t1710;
  double t2295;
  double t2932;
  double t2970;
  double t2840;
  double t3068;
  double t3079;
  double t2936;
  double t3039;
  double t2942;
  double t2949;
  double t2965;
  double t2971;
  double t2994;
  double t3000;
  double t3009;
  double t3016;
  double t3023;
  double t3088;
  double t3120;
  double t3126;
  double t3132;
  double t3136;
  double t3155;
  double t3161;
  double t3163;
  double t3030;
  double t3229;
  double t3237;
  double t3245;
  double t3246;
  double t3258;
  double t3259;
  double t3266;
  double t3283;
  double t2872;
  double t3352;
  double t3186;
  double t3414;
  double t3415;
  double t3420;
  double t3503;
  double t1255;
  double t1319;
  double t1391;
  double t1419;
  double t1457;
  double t1487;
  double t1494;
  double t3591;
  double t3600;
  double t3604;
  double t2090;
  double t2097;
  double t2124;
  double t2132;
  double t2143;
  double t2154;
  double t2165;
  double t1679;
  double t1698;
  double t1758;
  double t1760;
  double t1771;
  double t1777;
  double t1785;
  double t2658;
  double t3620;
  double t3623;
  double t3624;
  double t2748;
  double t3632;
  double t3636;
  double t3647;
  double t2683;
  double t2696;
  double t3654;
  double t3657;
  double t3663;
  double t2279;
  double t2319;
  double t2326;
  double t2299;
  double t2416;
  double t2433;
  double t2638;
  double t2564;
  double t3770;
  double t3467;
  double t3472;
  double t3475;
  double t3479;
  double t3489;
  double t3511;
  double t3526;
  double t3529;
  double t3530;
  double t3549;
  double t3561;
  double t3569;
  double t3571;
  double t3579;
  double t3581;
  double t3586;
  double t3587;
  double t3613;
  double t3630;
  double t3652;
  double t3664;
  double t3683;
  double t3684;
  double t3691;
  double t3692;
  double t3707;
  double t3708;
  double t3711;
  double t3715;
  double t3717;
  double t3722;
  double t3739;
  double t3740;
  double t3751;
  double t3755;
  double t3762;
  double t3449;
  double t3461;
  double t3417;
  double t3432;
  double t3871;
  double t3872;
  double t3879;
  double t3888;
  double t3889;
  double t3891;
  double t3910;
  double t3917;
  double t3920;
  double t3922;
  double t3931;
  double t3935;
  double t3936;
  double t3945;
  double t3976;
  double t3990;
  double t3993;
  double t3994;
  double t3824;
  double t3827;
  double t3838;
  double t3839;
  double t3846;
  double t3856;
  double t3860;
  double t4103;
  double t4117;
  double t4120;
  double t4124;
  double t4127;
  double t4128;
  double t4130;
  double t4139;
  double t4141;
  double t4145;
  double t4150;
  double t4152;
  double t4153;
  double t4158;
  double t4161;
  double t4166;
  double t4168;
  double t4169;
  double t4170;
  double t4231;
  double t4234;
  double t4245;
  double t4246;
  double t4253;
  double t4259;
  double t4264;
  double t4269;
  double t4273;
  double t4275;
  double t4278;
  double t4280;
  double t4282;
  double t4285;
  double t4290;
  double t4291;
  double t4296;
  double t4304;
  double t4313;
  double t4319;
  double t4322;
  double t4329;
  double t4330;
  double t4339;
  double t4341;
  double t4397;
  double t4402;
  double t4406;
  double t4412;
  double t4416;
  double t4418;
  double t4420;
  double t4430;
  double t4435;
  double t4440;
  double t4441;
  double t4449;
  double t4457;
  double t4464;
  double t4469;
  double t4479;
  double t4480;
  double t4483;
  double t4495;
  double t4497;
  double t4499;
  double t3775;
  double t3782;
  double t3807;
  double t4556;
  double t4558;
  double t4561;
  double t4572;
  double t4575;
  double t4580;
  double t4582;
  double t4594;
  double t4595;
  double t4605;
  double t4607;
  double t4608;
  double t4610;
  double t4615;
  double t4620;
  double t4621;
  double t141;
  double t170;
  double t387;
  double t423;
  double t433;
  double t556;
  double t597;
  double t603;
  double t706;
  double t747;
  double t766;
  double t798;
  double t1018;
  double t1045;
  double t1072;
  double t1085;
  double t1086;
  double t1099;
  double t4695;
  double t4696;
  double t4697;
  double t4701;
  double t4702;
  double t4709;
  double t4717;
  double t4724;
  double t4725;
  double t4727;
  double t4732;
  double t4736;
  double t4737;
  double t4738;
  double t4747;
  double t2854;
  double t2856;
  double t2890;
  double t2910;
  double t2915;
  double t2921;
  double t3032;
  double t3037;
  double t3040;
  double t3042;
  double t3055;
  double t3059;
  double t3178;
  double t3185;
  double t3202;
  double t3209;
  double t3214;
  double t3215;
  double t3291;
  double t4789;
  double t4790;
  double t4792;
  double t4798;
  double t4801;
  double t4802;
  double t4803;
  double t4804;
  double t3311;
  double t4810;
  double t4811;
  double t4815;
  double t4822;
  double t3339;
  double t3353;
  double t3369;
  double t3384;
  double t4890;
  double t4892;
  double t4893;
  double t4901;
  double t4903;
  double t4905;
  double t4911;
  double t4915;
  double t4916;
  double t4917;
  double t4923;
  double t4925;
  double t4928;
  double t4929;
  double t4931;
  double t4933;
  double t4936;
  double t4943;
  double t5007;
  double t5008;
  double t5011;
  double t5016;
  double t5017;
  double t5021;
  double t5024;
  double t5028;
  double t5032;
  double t5034;
  double t5035;
  double t5038;
  double t5040;
  double t5041;
  double t5044;
  double t5046;
  double t5047;
  double t5092;
  double t5094;
  double t5096;
  double t5099;
  double t5101;
  double t5103;
  double t5106;
  double t5108;
  double t5109;
  double t5111;
  double t5119;
  double t5121;
  double t5122;
  double t5142;
  double t5144;
  double t5148;
  double t5232;
  double t5234;
  double t5235;
  double t5238;
  double t5240;
  double t5241;
  double t5243;
  double t5249;
  double t5250;
  double t5253;
  double t5254;
  double t5258;
  double t5260;
  double t5261;
  double t5262;
  double t5297;
  double t5298;
  double t5301;
  double t5302;
  double t5304;
  double t5306;
  double t5308;
  double t5311;
  double t5314;
  double t5315;
  double t5316;
  double t5318;
  t25 = Cos(var1[13]);
  t107 = Sin(var1[13]);
  t299 = 4.e-6*t107;
  t802 = Cos(var1[4]);
  t128 = -2.8e-11*t107;
  t608 = 7.e-6*t107;
  t883 = Cos(var1[12]);
  t812 = Cos(var1[5]);
  t853 = Sin(var1[12]);
  t888 = Sin(var1[5]);
  t1269 = Cos(var1[14]);
  t1286 = -1.*t1269;
  t1318 = 1. + t1286;
  t1363 = Sin(var1[14]);
  t595 = -7.e-6*t25;
  t582 = Sin(var1[4]);
  t855 = -1.*t802*t812*t853;
  t909 = -1.*t883*t802*t888;
  t935 = t855 + t909;
  t604 = 4.e-6*t25;
  t1116 = t883*t802*t812;
  t1170 = -1.*t802*t853*t888;
  t1191 = t1116 + t1170;
  t1330 = 4.e-6*t1318;
  t234 = 7.e-6*t25;
  t1517 = -4.e-6*t107;
  t1769 = -2.8e-11*t1318;
  t1423 = 7.e-6*t1318;
  t988 = -1.*t25;
  t1993 = 2.8e-11*t107;
  t1058 = -4.e-6*t25;
  t1574 = -7.e-6*t107;
  t2134 = -4.e-6*t1363;
  t1519 = t595 + t1517;
  t1533 = t1519*t582;
  t1562 = -6.5e-11*t107*t935;
  t1591 = t604 + t1574;
  t1634 = t1591*t1191;
  t1657 = t1533 + t1562 + t1634;
  t2114 = -1.*t1363;
  t1822 = -1.000000000049*t107*t582;
  t1918 = t234 + t1517;
  t1989 = t1918*t935;
  t2002 = t25 + t1993;
  t2020 = t2002*t1191;
  t2024 = t1822 + t1989 + t2020;
  t2194 = t988 + t1993;
  t2205 = t2194*t582;
  t2212 = t1058 + t1574;
  t2221 = t2212*t935;
  t2231 = -1.000000000016*t107*t1191;
  t2239 = t2205 + t2221 + t2231;
  t1379 = -7.e-6*t1363;
  t2278 = -7.e-6*t1318;
  t1430 = 4.e-6*t1363;
  t2475 = -1. + t1269;
  t2550 = 4.e-6*t2475;
  t1710 = 7.e-6*t1363;
  t2295 = 2.8e-11*t1318;
  t2932 = 1. + t988;
  t2970 = -7.e-6*t2932;
  t2840 = -2.8e-11*t1363;
  t3068 = -1. + t25;
  t3079 = 4.e-6*t3068;
  t2936 = 2.8e-11*t2932;
  t3039 = 4.e-6*t1269;
  t2942 = -1.*t107;
  t2949 = t2936 + t2942;
  t2965 = t2949*t582;
  t2971 = t2970 + t1517;
  t2994 = t2971*t935;
  t3000 = -1.000000000016*t2932;
  t3009 = 1. + t3000;
  t3016 = t3009*t1191;
  t3023 = t2965 + t2994 + t3016;
  t3088 = t3079 + t1574;
  t3120 = t3088*t582;
  t3126 = -6.5e-11*t2932;
  t3132 = 1. + t3126;
  t3136 = t3132*t935;
  t3155 = t2970 + t299;
  t3161 = t3155*t1191;
  t3163 = t3120 + t3136 + t3161;
  t3030 = -7.e-6*t1269;
  t3229 = -1.000000000049*t2932;
  t3237 = 1. + t3229;
  t3245 = t3237*t582;
  t3246 = t3079 + t608;
  t3258 = t3246*t935;
  t3259 = t2936 + t107;
  t3266 = t3259*t1191;
  t3283 = t3245 + t3258 + t3266;
  t2872 = -4.e-6*t1269;
  t3352 = 2.8e-11*t1363;
  t3186 = 7.e-6*t1269;
  t3414 = -1.*t883;
  t3415 = 1. + t3414;
  t3420 = 0.15121*t853;
  t3503 = 7.e-6*t2932;
  t1255 = -2.598649999999999e-7*var1[14];
  t1319 = -2.3905277499999995e-16*t1318;
  t1391 = t1330 + t1379;
  t1419 = -0.038922999986*t1391;
  t1457 = t1423 + t1430;
  t1487 = -0.503149000008*t1457;
  t1494 = t1255 + t1319 + t1419 + t1487;
  t3591 = -1.*t883*t802*t812;
  t3600 = t802*t853*t888;
  t3604 = t3591 + t3600;
  t2090 = 1.8190549999999993e-12*var1[14];
  t2097 = -0.5031490000160505*t1318;
  t2124 = t1769 + t2114;
  t2132 = -0.038922999986*t2124;
  t2143 = t1423 + t2134;
  t2154 = -3.6777349999999994e-6*t2143;
  t2165 = t2090 + t2097 + t2132 + t2154;
  t1679 = 1.0394599999999997e-12*var1[14];
  t1698 = -0.03892299998790722*t1318;
  t1758 = t1330 + t1710;
  t1760 = -3.6777349999999994e-6*t1758;
  t1771 = t1769 + t1363;
  t1777 = -0.503149000008*t1771;
  t1785 = t1679 + t1698 + t1760 + t1777;
  t2658 = t2550 + t1710;
  t3620 = t3155*t935;
  t3623 = t3132*t3604;
  t3624 = t3620 + t3623;
  t2748 = t2295 + t1363;
  t3632 = t3009*t935;
  t3636 = t2971*t3604;
  t3647 = t3632 + t3636;
  t2683 = -1.000000000049*t1318;
  t2696 = 1. + t2683;
  t3654 = t3259*t935;
  t3657 = t3246*t3604;
  t3663 = t3654 + t3657;
  t2279 = t2278 + t2134;
  t2319 = -1.000000000016*t1318;
  t2326 = 1. + t2319;
  t2299 = t2295 + t2114;
  t2416 = -6.5e-11*t1318;
  t2433 = 1. + t2416;
  t2638 = t2278 + t1430;
  t2564 = t2550 + t1379;
  t3770 = 0.15121*t883;
  t3467 = 1.0248489999999998e-12*var1[13];
  t3472 = -0.28120900000849935*t2932;
  t3475 = -2.8e-11*t2932;
  t3479 = t3475 + t2942;
  t3489 = -0.038748999993*t3479;
  t3511 = t3503 + t1517;
  t3526 = -2.123459e-6*t3511;
  t3529 = t3467 + t3472 + t3489 + t3526;
  t3530 = t3529*t935;
  t3549 = -1.4640699999999997e-7*var1[13];
  t3561 = -1.38024835e-16*t2932;
  t3569 = 4.e-6*t2932;
  t3571 = t3569 + t1574;
  t3579 = -0.038748999993*t3571;
  t3581 = t3503 + t299;
  t3586 = -0.281209000004*t3581;
  t3587 = t3549 + t3561 + t3579 + t3586;
  t3613 = t3587*t3604;
  t3630 = t1494*t3624;
  t3652 = t2165*t3647;
  t3664 = t1785*t3663;
  t3683 = t2658*t3624;
  t3684 = t2748*t3647;
  t3691 = t2696*t3663;
  t3692 = t3683 + t3684 + t3691;
  t3707 = -0.038924*t3692;
  t3708 = t2279*t3624;
  t3711 = t2326*t3647;
  t3715 = t2299*t3663;
  t3717 = t3708 + t3711 + t3715;
  t3722 = -0.80315*t3717;
  t3739 = t2433*t3624;
  t3740 = t2638*t3647;
  t3751 = t2564*t3663;
  t3755 = t3739 + t3740 + t3751;
  t3762 = 0.148705*t3755;
  t3449 = -0.15121*t3415;
  t3461 = t3449 + t3420;
  t3417 = 0.15121*t3415;
  t3432 = t3417 + t3420;
  t3871 = t812*t853*t582;
  t3872 = t883*t582*t888;
  t3879 = t3871 + t3872;
  t3888 = -1.*t883*t812*t582;
  t3889 = t853*t582*t888;
  t3891 = t3888 + t3889;
  t3910 = t802*t2949;
  t3917 = t2971*t3879;
  t3920 = t3009*t3891;
  t3922 = t3910 + t3917 + t3920;
  t3931 = t802*t3088;
  t3935 = t3132*t3879;
  t3936 = t3155*t3891;
  t3945 = t3931 + t3935 + t3936;
  t3976 = t3237*t802;
  t3990 = t3246*t3879;
  t3993 = t3259*t3891;
  t3994 = t3976 + t3990 + t3993;
  t3824 = 5.856279999999999e-13*var1[13];
  t3827 = -0.0387489999948987*t2932;
  t3838 = t3569 + t608;
  t3839 = -2.123459e-6*t3838;
  t3846 = t3475 + t107;
  t3856 = -0.281209000004*t3846;
  t3860 = t3824 + t3827 + t3839 + t3856;
  t4103 = Sin(var1[3]);
  t4117 = -1.*t802*t812*t853*t4103;
  t4120 = -1.*t883*t802*t4103*t888;
  t4124 = t4117 + t4120;
  t4127 = t883*t802*t812*t4103;
  t4128 = -1.*t802*t853*t4103*t888;
  t4130 = t4127 + t4128;
  t4139 = t2949*t4103*t582;
  t4141 = t2971*t4124;
  t4145 = t3009*t4130;
  t4150 = t4139 + t4141 + t4145;
  t4152 = t3088*t4103*t582;
  t4153 = t3132*t4124;
  t4158 = t3155*t4130;
  t4161 = t4152 + t4153 + t4158;
  t4166 = t3237*t4103*t582;
  t4168 = t3246*t4124;
  t4169 = t3259*t4130;
  t4170 = t4166 + t4168 + t4169;
  t4231 = Cos(var1[3]);
  t4234 = t4231*t812*t582;
  t4245 = -1.*t4103*t888;
  t4246 = t4234 + t4245;
  t4253 = -1.*t812*t4103;
  t4259 = -1.*t4231*t582*t888;
  t4264 = t4253 + t4259;
  t4269 = -1.*t853*t4246;
  t4273 = t883*t4264;
  t4275 = t4269 + t4273;
  t4278 = t883*t4246;
  t4280 = t853*t4264;
  t4282 = t4278 + t4280;
  t4285 = -1.*t4231*t802*t2949;
  t4290 = t2971*t4275;
  t4291 = t3009*t4282;
  t4296 = t4285 + t4290 + t4291;
  t4304 = -1.*t4231*t802*t3088;
  t4313 = t3132*t4275;
  t4319 = t3155*t4282;
  t4322 = t4304 + t4313 + t4319;
  t4329 = -1.*t3237*t4231*t802;
  t4330 = t3246*t4275;
  t4339 = t3259*t4282;
  t4341 = t4329 + t4330 + t4339;
  t4397 = -1.*t812*t4103*t582;
  t4402 = -1.*t4231*t888;
  t4406 = t4397 + t4402;
  t4412 = t4231*t812;
  t4416 = -1.*t4103*t582*t888;
  t4418 = t4412 + t4416;
  t4420 = t853*t4406;
  t4430 = t883*t4418;
  t4435 = t4420 + t4430;
  t4440 = t883*t4406;
  t4441 = -1.*t853*t4418;
  t4449 = t4440 + t4441;
  t4457 = t3155*t4435;
  t4464 = t3132*t4449;
  t4469 = t4457 + t4464;
  t4479 = t3009*t4435;
  t4480 = t2971*t4449;
  t4483 = t4479 + t4480;
  t4495 = t3259*t4435;
  t4497 = t3246*t4449;
  t4499 = t4495 + t4497;
  t3775 = -0.15121*t853;
  t3782 = t3770 + t3775;
  t3807 = t3770 + t3420;
  t4556 = t812*t4103*t582;
  t4558 = t4231*t888;
  t4561 = t4556 + t4558;
  t4572 = -1.*t853*t4561;
  t4575 = t4572 + t4430;
  t4580 = -1.*t883*t4561;
  t4582 = t4580 + t4441;
  t4594 = t3155*t4575;
  t4595 = t3132*t4582;
  t4605 = t4594 + t4595;
  t4607 = t3009*t4575;
  t4608 = t2971*t4582;
  t4610 = t4607 + t4608;
  t4615 = t3259*t4575;
  t4620 = t3246*t4582;
  t4621 = t4615 + t4620;
  t141 = t25 + t128;
  t170 = -0.281209000004*t141;
  t387 = t234 + t299;
  t423 = -2.123459e-6*t387;
  t433 = -0.0387489999948987*t107;
  t556 = 5.856279999999999e-13 + t170 + t423 + t433;
  t597 = t595 + t299;
  t603 = -0.038748999993*t597;
  t706 = t604 + t608;
  t747 = -0.281209000004*t706;
  t766 = -1.38024835e-16*t107;
  t798 = -1.4640699999999997e-7 + t603 + t747 + t766;
  t1018 = t988 + t128;
  t1045 = -0.038748999993*t1018;
  t1072 = t1058 + t608;
  t1085 = -2.123459e-6*t1072;
  t1086 = -0.28120900000849935*t107;
  t1099 = 1.0248489999999998e-12 + t1045 + t1085 + t1086;
  t4695 = t883*t4561;
  t4696 = t853*t4418;
  t4697 = t4695 + t4696;
  t4701 = -1.*t802*t1519*t4103;
  t4702 = -6.5e-11*t107*t4575;
  t4709 = t1591*t4697;
  t4717 = t4701 + t4702 + t4709;
  t4724 = 1.000000000049*t802*t107*t4103;
  t4725 = t1918*t4575;
  t4727 = t2002*t4697;
  t4732 = t4724 + t4725 + t4727;
  t4736 = -1.*t802*t2194*t4103;
  t4737 = t2212*t4575;
  t4738 = -1.000000000016*t107*t4697;
  t4747 = t4736 + t4737 + t4738;
  t2854 = t1286 + t2840;
  t2856 = -0.038922999986*t2854;
  t2890 = t2872 + t1710;
  t2910 = -3.6777349999999994e-6*t2890;
  t2915 = -0.5031490000160505*t1363;
  t2921 = 1.8190549999999993e-12 + t2856 + t2910 + t2915;
  t3032 = t3030 + t1430;
  t3037 = -0.038922999986*t3032;
  t3040 = t3039 + t1710;
  t3042 = -0.503149000008*t3040;
  t3055 = -2.3905277499999995e-16*t1363;
  t3059 = -2.598649999999999e-7 + t3037 + t3042 + t3055;
  t3178 = t1269 + t2840;
  t3185 = -0.503149000008*t3178;
  t3202 = t3186 + t1430;
  t3209 = -3.6777349999999994e-6*t3202;
  t3214 = -0.03892299998790722*t1363;
  t3215 = 1.0394599999999997e-12 + t3185 + t3209 + t3214;
  t3291 = t3039 + t1379;
  t4789 = -1.*t802*t2949*t4103;
  t4790 = t2971*t4575;
  t4792 = t3009*t4697;
  t4798 = t4789 + t4790 + t4792;
  t4801 = -1.*t802*t3088*t4103;
  t4802 = t3132*t4575;
  t4803 = t3155*t4697;
  t4804 = t4801 + t4802 + t4803;
  t3311 = t3030 + t2134;
  t4810 = -1.*t3237*t802*t4103;
  t4811 = t3246*t4575;
  t4815 = t3259*t4697;
  t4822 = t4810 + t4811 + t4815;
  t3339 = t2872 + t1379;
  t3353 = t1286 + t3352;
  t3369 = t1269 + t3352;
  t3384 = t3186 + t2134;
  t4890 = t4231*t802*t812*t853;
  t4892 = t883*t4231*t802*t888;
  t4893 = t4890 + t4892;
  t4901 = -1.*t883*t4231*t802*t812;
  t4903 = t4231*t802*t853*t888;
  t4905 = t4901 + t4903;
  t4911 = -1.*t4231*t2949*t582;
  t4915 = t2971*t4893;
  t4916 = t3009*t4905;
  t4917 = t4911 + t4915 + t4916;
  t4923 = -1.*t4231*t3088*t582;
  t4925 = t3132*t4893;
  t4928 = t3155*t4905;
  t4929 = t4923 + t4925 + t4928;
  t4931 = -1.*t3237*t4231*t582;
  t4933 = t3246*t4893;
  t4936 = t3259*t4905;
  t4943 = t4931 + t4933 + t4936;
  t5007 = t812*t4103;
  t5008 = t4231*t582*t888;
  t5011 = t5007 + t5008;
  t5016 = t853*t4246;
  t5017 = t883*t5011;
  t5021 = t5016 + t5017;
  t5024 = -1.*t853*t5011;
  t5028 = t4278 + t5024;
  t5032 = t3155*t5021;
  t5034 = t3132*t5028;
  t5035 = t5032 + t5034;
  t5038 = t3009*t5021;
  t5040 = t2971*t5028;
  t5041 = t5038 + t5040;
  t5044 = t3259*t5021;
  t5046 = t3246*t5028;
  t5047 = t5044 + t5046;
  t5092 = -1.*t4231*t812*t582;
  t5094 = t4103*t888;
  t5096 = t5092 + t5094;
  t5099 = -1.*t853*t5096;
  t5101 = t5099 + t5017;
  t5103 = -1.*t883*t5096;
  t5106 = t5103 + t5024;
  t5108 = t3155*t5101;
  t5109 = t3132*t5106;
  t5111 = t5108 + t5109;
  t5119 = t3009*t5101;
  t5121 = t2971*t5106;
  t5122 = t5119 + t5121;
  t5142 = t3259*t5101;
  t5144 = t3246*t5106;
  t5148 = t5142 + t5144;
  t5232 = t883*t5096;
  t5234 = t853*t5011;
  t5235 = t5232 + t5234;
  t5238 = t4231*t802*t1519;
  t5240 = -6.5e-11*t107*t5101;
  t5241 = t1591*t5235;
  t5243 = t5238 + t5240 + t5241;
  t5249 = -1.000000000049*t4231*t802*t107;
  t5250 = t1918*t5101;
  t5253 = t2002*t5235;
  t5254 = t5249 + t5250 + t5253;
  t5258 = t4231*t802*t2194;
  t5260 = t2212*t5101;
  t5261 = -1.000000000016*t107*t5235;
  t5262 = t5258 + t5260 + t5261;
  t5297 = t4231*t802*t2949;
  t5298 = t2971*t5101;
  t5301 = t3009*t5235;
  t5302 = t5297 + t5298 + t5301;
  t5304 = t4231*t802*t3088;
  t5306 = t3132*t5101;
  t5308 = t3155*t5235;
  t5311 = t5304 + t5306 + t5308;
  t5314 = t3237*t4231*t802;
  t5315 = t3246*t5101;
  t5316 = t3259*t5235;
  t5318 = t5314 + t5315 + t5316;
  p_output1[0]=var2[0] + (t3587*t3879 + t3529*t3891 + t2165*t3922 + t1494*t3945 + t1785*t3994 - 0.80315*(t2326*t3922 + t2279*t3945 + t2299*t3994) + 0.148705*(t2638*t3922 + t2433*t3945 + t2564*t3994) - 0.038924*(t2748*t3922 + t2658*t3945 + t2696*t3994) + t3860*t802 - 1.*t3461*t582*t812 + t3432*t582*t888)*var2[4] + (t3530 + t3613 + t3630 + t3652 + t3664 + t3707 + t3722 + t3762 - 1.*t3432*t802*t812 - 1.*t3461*t802*t888)*var2[5] + (t3530 + t3613 + t3630 + t3652 + t3664 + t3707 + t3722 + t3762 + t3782*t802*t812 - 1.*t3807*t802*t888)*var2[12] + (t1099*t1191 + t1494*t1657 + t1785*t2024 + t2165*t2239 - 0.80315*(t1657*t2279 + t2024*t2299 + t2239*t2326) + 0.148705*(t1657*t2433 + t2024*t2564 + t2239*t2638) - 0.038924*(t1657*t2658 + t2024*t2696 + t2239*t2748) + t556*t582 + t798*t935)*var2[13] + (t2921*t3023 + t3059*t3163 + t3215*t3283 + 0.148705*(-6.5e-11*t1363*t3163 + t3023*t3291 + t3283*t3311) - 0.80315*(-1.000000000016*t1363*t3023 + t3163*t3339 + t3283*t3353) - 0.038924*(-1.000000000049*t1363*t3283 + t3023*t3369 + t3163*t3384))*var2[14];
  p_output1[1]=var2[1] + (t3461*t4246 + t3432*t4264 + t3587*t4275 + t3529*t4282 + t2165*t4296 + t1494*t4322 + t1785*t4341 - 0.80315*(t2326*t4296 + t2279*t4322 + t2299*t4341) + 0.148705*(t2638*t4296 + t2433*t4322 + t2564*t4341) - 0.038924*(t2748*t4296 + t2658*t4322 + t2696*t4341) - 1.*t3860*t4231*t802)*var2[3] + (t3587*t4124 + t3529*t4130 + t2165*t4150 + t1494*t4161 + t1785*t4170 - 0.80315*(t2326*t4150 + t2279*t4161 + t2299*t4170) + 0.148705*(t2638*t4150 + t2433*t4161 + t2564*t4170) - 0.038924*(t2748*t4150 + t2658*t4161 + t2696*t4170) + t3860*t4103*t582 + t3461*t4103*t802*t812 - 1.*t3432*t4103*t802*t888)*var2[4] + (t3432*t4406 + t3461*t4418 + t3529*t4435 + t3587*t4449 + t1494*t4469 + t2165*t4483 + t1785*t4499 - 0.80315*(t2279*t4469 + t2326*t4483 + t2299*t4499) + 0.148705*(t2433*t4469 + t2638*t4483 + t2564*t4499) - 0.038924*(t2658*t4469 + t2748*t4483 + t2696*t4499))*var2[5] + (t3807*t4418 + t3782*t4561 + t3529*t4575 + t3587*t4582 + t1494*t4605 + t2165*t4610 + t1785*t4621 - 0.80315*(t2279*t4605 + t2326*t4610 + t2299*t4621) + 0.148705*(t2433*t4605 + t2638*t4610 + t2564*t4621) - 0.038924*(t2658*t4605 + t2748*t4610 + t2696*t4621))*var2[12] + (t1099*t4697 + t1494*t4717 + t1785*t4732 + t2165*t4747 - 0.80315*(t2279*t4717 + t2299*t4732 + t2326*t4747) + 0.148705*(t2433*t4717 + t2564*t4732 + t2638*t4747) - 0.038924*(t2658*t4717 + t2696*t4732 + t2748*t4747) + t4575*t798 - 1.*t4103*t556*t802)*var2[13] + (t2921*t4798 + t3059*t4804 + t3215*t4822 - 0.038924*(t3369*t4798 + t3384*t4804 - 1.000000000049*t1363*t4822) + 0.148705*(t3291*t4798 - 6.5e-11*t1363*t4804 + t3311*t4822) - 0.80315*(-1.000000000016*t1363*t4798 + t3339*t4804 + t3353*t4822))*var2[14];
  p_output1[2]=var2[2] + (t3432*t4418 + t3461*t4561 + t3587*t4575 + t3529*t4697 + t2165*t4798 + t1494*t4804 + t1785*t4822 - 0.80315*(t2326*t4798 + t2279*t4804 + t2299*t4822) + 0.148705*(t2638*t4798 + t2433*t4804 + t2564*t4822) - 0.038924*(t2748*t4798 + t2658*t4804 + t2696*t4822) - 1.*t3860*t4103*t802)*var2[3] + (t3587*t4893 + t3529*t4905 + t2165*t4917 + t1494*t4929 + t1785*t4943 - 0.80315*(t2326*t4917 + t2279*t4929 + t2299*t4943) + 0.148705*(t2638*t4917 + t2433*t4929 + t2564*t4943) - 0.038924*(t2748*t4917 + t2658*t4929 + t2696*t4943) - 1.*t3860*t4231*t582 - 1.*t3461*t4231*t802*t812 + t3432*t4231*t802*t888)*var2[4] + (t3432*t4246 + t3461*t5011 + t3529*t5021 + t3587*t5028 + t1494*t5035 + t2165*t5041 + t1785*t5047 - 0.80315*(t2279*t5035 + t2326*t5041 + t2299*t5047) + 0.148705*(t2433*t5035 + t2638*t5041 + t2564*t5047) - 0.038924*(t2658*t5035 + t2748*t5041 + t2696*t5047))*var2[5] + (t3807*t5011 + t3782*t5096 + t3529*t5101 + t3587*t5106 + t1494*t5111 + t2165*t5122 + t1785*t5148 - 0.80315*(t2279*t5111 + t2326*t5122 + t2299*t5148) + 0.148705*(t2433*t5111 + t2638*t5122 + t2564*t5148) - 0.038924*(t2658*t5111 + t2748*t5122 + t2696*t5148))*var2[12] + (t1099*t5235 + t1494*t5243 + t1785*t5254 + t2165*t5262 - 0.80315*(t2279*t5243 + t2299*t5254 + t2326*t5262) + 0.148705*(t2433*t5243 + t2564*t5254 + t2638*t5262) - 0.038924*(t2658*t5243 + t2696*t5254 + t2748*t5262) + t5101*t798 + t4231*t556*t802)*var2[13] + (t2921*t5302 + t3059*t5311 + t3215*t5318 - 0.038924*(t3369*t5302 + t3384*t5311 - 1.000000000049*t1363*t5318) + 0.148705*(t3291*t5302 - 6.5e-11*t1363*t5311 + t3311*t5318) - 0.80315*(-1.000000000016*t1363*t5302 + t3339*t5311 + t3353*t5318))*var2[14];
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

#include "impact_velocity_RlFootParallelStance1.hh"

namespace ParallelStance1
{

void impact_velocity_RlFootParallelStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
