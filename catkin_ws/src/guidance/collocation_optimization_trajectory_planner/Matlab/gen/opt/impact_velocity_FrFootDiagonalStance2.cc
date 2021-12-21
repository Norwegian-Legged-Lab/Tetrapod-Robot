/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 12:55:36 GMT+01:00
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
  double t10;
  double t99;
  double t376;
  double t413;
  double t384;
  double t398;
  double t431;
  double t884;
  double t205;
  double t409;
  double t468;
  double t511;
  double t596;
  double t613;
  double t629;
  double t893;
  double t915;
  double t943;
  double t1041;
  double t1178;
  double t1207;
  double t1211;
  double t1225;
  double t1325;
  double t1344;
  double t1388;
  double t1401;
  double t1498;
  double t1551;
  double t1592;
  double t1662;
  double t1485;
  double t2284;
  double t2290;
  double t2261;
  double t2278;
  double t2295;
  double t2297;
  double t2302;
  double t2315;
  double t2355;
  double t2379;
  double t2383;
  double t2400;
  double t2407;
  double t2414;
  double t2444;
  double t2453;
  double t2454;
  double t2457;
  double t2709;
  double t2710;
  double t2746;
  double t179;
  double t1242;
  double t1244;
  double t1260;
  double t1316;
  double t1319;
  double t2881;
  double t2906;
  double t2911;
  double t855;
  double t920;
  double t1024;
  double t1101;
  double t1176;
  double t1445;
  double t1486;
  double t2929;
  double t2948;
  double t2954;
  double t2961;
  double t2962;
  double t1755;
  double t1781;
  double t2966;
  double t2970;
  double t2972;
  double t2133;
  double t2157;
  double t3122;
  double t2804;
  double t2811;
  double t2819;
  double t2829;
  double t2833;
  double t2840;
  double t2878;
  double t2880;
  double t2918;
  double t2951;
  double t2964;
  double t2976;
  double t2991;
  double t3004;
  double t3014;
  double t3015;
  double t3025;
  double t3029;
  double t3038;
  double t3039;
  double t3054;
  double t3064;
  double t3066;
  double t3073;
  double t3075;
  double t3090;
  double t3093;
  double t2777;
  double t2796;
  double t2719;
  double t2750;
  double t3199;
  double t3200;
  double t3203;
  double t3211;
  double t3213;
  double t3214;
  double t3221;
  double t3228;
  double t3229;
  double t3235;
  double t3243;
  double t3246;
  double t3249;
  double t3254;
  double t3282;
  double t3283;
  double t3287;
  double t3288;
  double t3157;
  double t3169;
  double t3175;
  double t3190;
  double t3192;
  double t3414;
  double t3432;
  double t3437;
  double t3442;
  double t3445;
  double t3446;
  double t3447;
  double t3451;
  double t3456;
  double t3470;
  double t3492;
  double t3503;
  double t3515;
  double t3516;
  double t3522;
  double t3530;
  double t3532;
  double t3537;
  double t3539;
  double t3621;
  double t3624;
  double t3633;
  double t3636;
  double t3646;
  double t3647;
  double t3649;
  double t3669;
  double t3671;
  double t3674;
  double t3682;
  double t3688;
  double t3693;
  double t3701;
  double t3702;
  double t3712;
  double t3722;
  double t3727;
  double t3729;
  double t3731;
  double t3732;
  double t3737;
  double t3738;
  double t3740;
  double t3749;
  double t3830;
  double t3831;
  double t3833;
  double t3837;
  double t3839;
  double t3840;
  double t3846;
  double t3850;
  double t3857;
  double t3863;
  double t3866;
  double t3867;
  double t3871;
  double t3874;
  double t3878;
  double t3882;
  double t3883;
  double t3884;
  double t3887;
  double t3889;
  double t3890;
  double t3129;
  double t3134;
  double t3140;
  double t3969;
  double t3972;
  double t3975;
  double t3980;
  double t3981;
  double t3983;
  double t3985;
  double t3996;
  double t3999;
  double t4005;
  double t4012;
  double t4014;
  double t4015;
  double t4020;
  double t4023;
  double t4024;
  double t26;
  double t190;
  double t251;
  double t348;
  double t361;
  double t518;
  double t573;
  double t579;
  double t4108;
  double t4113;
  double t4117;
  double t4120;
  double t4126;
  double t4127;
  double t4132;
  double t4134;
  double t4136;
  double t4138;
  double t4143;
  double t4146;
  double t4147;
  double t4148;
  double t2227;
  double t2248;
  double t2257;
  double t2330;
  double t2345;
  double t2388;
  double t2395;
  double t2396;
  double t4212;
  double t4215;
  double t4220;
  double t4223;
  double t4228;
  double t4230;
  double t4231;
  double t4241;
  double t4244;
  double t4250;
  double t4257;
  double t4315;
  double t4316;
  double t4319;
  double t4324;
  double t4330;
  double t4337;
  double t4347;
  double t4348;
  double t4349;
  double t4354;
  double t4360;
  double t4362;
  double t4366;
  double t4369;
  double t4379;
  double t4380;
  double t4383;
  double t4385;
  double t4431;
  double t4433;
  double t4434;
  double t4440;
  double t4441;
  double t4445;
  double t4452;
  double t4453;
  double t4456;
  double t4457;
  double t4461;
  double t4466;
  double t4468;
  double t4470;
  double t4476;
  double t4477;
  double t4478;
  double t4512;
  double t4514;
  double t4515;
  double t4523;
  double t4533;
  double t4540;
  double t4541;
  double t4545;
  double t4547;
  double t4552;
  double t4557;
  double t4559;
  double t4562;
  double t4565;
  double t4566;
  double t4567;
  double t4617;
  double t4618;
  double t4619;
  double t4624;
  double t4625;
  double t4631;
  double t4634;
  double t4635;
  double t4638;
  double t4642;
  double t4643;
  double t4644;
  double t4645;
  double t4700;
  double t4704;
  double t4705;
  double t4708;
  double t4720;
  double t4721;
  double t4725;
  double t4727;
  double t4729;
  double t4730;
  double t4732;
  double t4260;
  t10 = Cos(var1[10]);
  t99 = Sin(var1[10]);
  t376 = Cos(var1[4]);
  t413 = Cos(var1[9]);
  t384 = Cos(var1[5]);
  t398 = Sin(var1[9]);
  t431 = Sin(var1[5]);
  t884 = Cos(var1[11]);
  t205 = Sin(var1[4]);
  t409 = -1.*t376*t384*t398;
  t468 = -1.*t413*t376*t431;
  t511 = t409 + t468;
  t596 = t413*t376*t384;
  t613 = -1.*t376*t398*t431;
  t629 = t596 + t613;
  t893 = -1.*t884;
  t915 = 1. + t893;
  t943 = -1. + t884;
  t1041 = Sin(var1[11]);
  t1178 = -1.*t99*t205;
  t1207 = 4.e-6*t99*t511;
  t1211 = -1.*t10*t629;
  t1225 = t1178 + t1207 + t1211;
  t1325 = 4.e-6*t99*t205;
  t1344 = -1.6e-11*t99*t511;
  t1388 = 4.e-6*t10*t629;
  t1401 = t1325 + t1344 + t1388;
  t1498 = t10*t205;
  t1551 = -4.e-6*t10*t511;
  t1592 = -1.000000000016*t99*t629;
  t1662 = t1498 + t1551 + t1592;
  t1485 = -0.0398890000006382*t1041;
  t2284 = -1.*t10;
  t2290 = 1. + t2284;
  t2261 = t99*t205;
  t2278 = -4.e-6*t99*t511;
  t2295 = -1.000000000016*t2290;
  t2297 = 1. + t2295;
  t2302 = t2297*t629;
  t2315 = t2261 + t2278 + t2302;
  t2355 = 4.e-6*t2290*t511;
  t2379 = -1.*t99*t629;
  t2383 = t1498 + t2355 + t2379;
  t2400 = 4.e-6*t2290*t205;
  t2407 = -1. + t10;
  t2414 = 1.6e-11*t2407;
  t2444 = 1. + t2414;
  t2453 = t2444*t511;
  t2454 = 4.e-6*t99*t629;
  t2457 = t2400 + t2453 + t2454;
  t2709 = -1.*t413;
  t2710 = 1. + t2709;
  t2746 = -0.15121*t398;
  t179 = -0.03874900000062*t99;
  t1242 = -1.26e-8*var1[11];
  t1244 = 2.552896e-18*t915;
  t1260 = -1.59556e-7*t943;
  t1316 = 2.012600000032e-6*t1041;
  t1319 = t1242 + t1244 + t1260 + t1316;
  t2881 = -1.*t413*t376*t384;
  t2906 = t376*t398*t431;
  t2911 = t2881 + t2906;
  t855 = -5.04e-14*var1[11];
  t920 = -0.039889*t915;
  t1024 = 6.38224e-13*t943;
  t1101 = -0.503150000008*t1041;
  t1176 = t855 + t920 + t1024 + t1101;
  t1445 = 0.50315000001605*t915;
  t1486 = t1445 + t1485;
  t2929 = t2444*t2911;
  t2948 = t1207 + t2929;
  t2954 = -1.*t99*t511;
  t2961 = 4.e-6*t2290*t2911;
  t2962 = t2954 + t2961;
  t1755 = -1.000000000016*t915;
  t1781 = 1. + t1755;
  t2966 = t2297*t511;
  t2970 = -4.e-6*t99*t2911;
  t2972 = t2966 + t2970;
  t2133 = 1.6e-11*t943;
  t2157 = 1. + t2133;
  t3122 = -0.15121*t413;
  t2804 = 0.281210000008499*t2290;
  t2811 = t2804 + t179;
  t2819 = t2811*t511;
  t2829 = -1.2484e-7*var1[10];
  t2833 = 2.479936e-18*t2290;
  t2840 = -1.54996e-7*t2407;
  t2878 = 1.124840000016e-6*t99;
  t2880 = t2829 + t2833 + t2840 + t2878;
  t2918 = t2880*t2911;
  t2951 = t1319*t2948;
  t2964 = t1176*t2962;
  t2976 = t1486*t2972;
  t2991 = -4.e-6*t1041*t2948;
  t3004 = t1041*t2962;
  t3014 = t1781*t2972;
  t3015 = t2991 + t3004 + t3014;
  t3025 = 0.803147*t3015;
  t3029 = 4.e-6*t915*t2948;
  t3038 = t884*t2962;
  t3039 = -1.*t1041*t2972;
  t3054 = t3029 + t3038 + t3039;
  t3064 = -0.041195*t3054;
  t3066 = t2157*t2948;
  t3073 = 4.e-6*t915*t2962;
  t3075 = 4.e-6*t1041*t2972;
  t3090 = t3066 + t3073 + t3075;
  t3093 = -0.14871*t3090;
  t2777 = 0.15121*t2710;
  t2796 = t2777 + t2746;
  t2719 = -0.15121*t2710;
  t2750 = t2719 + t2746;
  t3199 = t384*t398*t205;
  t3200 = t413*t205*t431;
  t3203 = t3199 + t3200;
  t3211 = -1.*t413*t384*t205;
  t3213 = t398*t205*t431;
  t3214 = t3211 + t3213;
  t3221 = t376*t99;
  t3228 = -4.e-6*t99*t3203;
  t3229 = t2297*t3214;
  t3235 = t3221 + t3228 + t3229;
  t3243 = t10*t376;
  t3246 = 4.e-6*t2290*t3203;
  t3249 = -1.*t99*t3214;
  t3254 = t3243 + t3246 + t3249;
  t3282 = 4.e-6*t2290*t376;
  t3283 = t2444*t3203;
  t3287 = 4.e-6*t99*t3214;
  t3288 = t3282 + t3283 + t3287;
  t3157 = -4.9936e-13*var1[10];
  t3169 = -0.038749*t2290;
  t3175 = 6.19984e-13*t2407;
  t3190 = -0.281210000004*t99;
  t3192 = t3157 + t3169 + t3175 + t3190;
  t3414 = Sin(var1[3]);
  t3432 = -1.*t376*t384*t398*t3414;
  t3437 = -1.*t413*t376*t3414*t431;
  t3442 = t3432 + t3437;
  t3445 = t413*t376*t384*t3414;
  t3446 = -1.*t376*t398*t3414*t431;
  t3447 = t3445 + t3446;
  t3451 = t99*t3414*t205;
  t3456 = -4.e-6*t99*t3442;
  t3470 = t2297*t3447;
  t3492 = t3451 + t3456 + t3470;
  t3503 = t10*t3414*t205;
  t3515 = 4.e-6*t2290*t3442;
  t3516 = -1.*t99*t3447;
  t3522 = t3503 + t3515 + t3516;
  t3530 = 4.e-6*t2290*t3414*t205;
  t3532 = t2444*t3442;
  t3537 = 4.e-6*t99*t3447;
  t3539 = t3530 + t3532 + t3537;
  t3621 = Cos(var1[3]);
  t3624 = t3621*t384*t205;
  t3633 = -1.*t3414*t431;
  t3636 = t3624 + t3633;
  t3646 = -1.*t384*t3414;
  t3647 = -1.*t3621*t205*t431;
  t3649 = t3646 + t3647;
  t3669 = -1.*t398*t3636;
  t3671 = t413*t3649;
  t3674 = t3669 + t3671;
  t3682 = t413*t3636;
  t3688 = t398*t3649;
  t3693 = t3682 + t3688;
  t3701 = -1.*t3621*t376*t99;
  t3702 = -4.e-6*t99*t3674;
  t3712 = t2297*t3693;
  t3722 = t3701 + t3702 + t3712;
  t3727 = -1.*t10*t3621*t376;
  t3729 = 4.e-6*t2290*t3674;
  t3731 = -1.*t99*t3693;
  t3732 = t3727 + t3729 + t3731;
  t3737 = -4.e-6*t2290*t3621*t376;
  t3738 = t2444*t3674;
  t3740 = 4.e-6*t99*t3693;
  t3749 = t3737 + t3738 + t3740;
  t3830 = -1.*t384*t3414*t205;
  t3831 = -1.*t3621*t431;
  t3833 = t3830 + t3831;
  t3837 = t3621*t384;
  t3839 = -1.*t3414*t205*t431;
  t3840 = t3837 + t3839;
  t3846 = t398*t3833;
  t3850 = t413*t3840;
  t3857 = t3846 + t3850;
  t3863 = t413*t3833;
  t3866 = -1.*t398*t3840;
  t3867 = t3863 + t3866;
  t3871 = 4.e-6*t99*t3857;
  t3874 = t2444*t3867;
  t3878 = t3871 + t3874;
  t3882 = -1.*t99*t3857;
  t3883 = 4.e-6*t2290*t3867;
  t3884 = t3882 + t3883;
  t3887 = t2297*t3857;
  t3889 = -4.e-6*t99*t3867;
  t3890 = t3887 + t3889;
  t3129 = 0.15121*t398;
  t3134 = t3122 + t3129;
  t3140 = t3122 + t2746;
  t3969 = t384*t3414*t205;
  t3972 = t3621*t431;
  t3975 = t3969 + t3972;
  t3980 = -1.*t398*t3975;
  t3981 = t3980 + t3850;
  t3983 = -1.*t413*t3975;
  t3985 = t3983 + t3866;
  t3996 = 4.e-6*t99*t3981;
  t3999 = t2444*t3985;
  t4005 = t3996 + t3999;
  t4012 = -1.*t99*t3981;
  t4014 = 4.e-6*t2290*t3985;
  t4015 = t4012 + t4014;
  t4020 = t2297*t3981;
  t4023 = -4.e-6*t99*t3985;
  t4024 = t4020 + t4023;
  t26 = -0.281210000004*t10;
  t190 = -4.9936e-13 + t26 + t179;
  t251 = 1.124840000016e-6*t10;
  t348 = 1.5499600000248e-7*t99;
  t361 = -1.2484e-7 + t251 + t348;
  t518 = -0.03874900000062*t10;
  t573 = 0.281210000008499*t99;
  t579 = t518 + t573;
  t4108 = t413*t3975;
  t4113 = t398*t3840;
  t4117 = t4108 + t4113;
  t4120 = t376*t99*t3414;
  t4126 = -1.*t10*t4117;
  t4127 = t4120 + t3996 + t4126;
  t4132 = -4.e-6*t376*t99*t3414;
  t4134 = -1.6e-11*t99*t3981;
  t4136 = 4.e-6*t10*t4117;
  t4138 = t4132 + t4134 + t4136;
  t4143 = -1.*t10*t376*t3414;
  t4146 = -4.e-6*t10*t3981;
  t4147 = -1.000000000016*t99*t4117;
  t4148 = t4143 + t4146 + t4147;
  t2227 = -0.0398890000006382*t884;
  t2248 = 0.50315000001605*t1041;
  t2257 = t2227 + t2248;
  t2330 = -0.503150000008*t884;
  t2345 = -5.04e-14 + t2330 + t1485;
  t2388 = 2.012600000032e-6*t884;
  t2395 = 1.59556000002553e-7*t1041;
  t2396 = -1.26e-8 + t2388 + t2395;
  t4212 = -1.*t376*t99*t3414;
  t4215 = -4.e-6*t99*t3981;
  t4220 = t2297*t4117;
  t4223 = t4212 + t4215 + t4220;
  t4228 = 4.e-6*t2290*t3981;
  t4230 = -1.*t99*t4117;
  t4231 = t4143 + t4228 + t4230;
  t4241 = -4.e-6*t2290*t376*t3414;
  t4244 = t2444*t3981;
  t4250 = 4.e-6*t99*t4117;
  t4257 = t4241 + t4244 + t4250;
  t4315 = t3621*t376*t384*t398;
  t4316 = t413*t3621*t376*t431;
  t4319 = t4315 + t4316;
  t4324 = -1.*t413*t3621*t376*t384;
  t4330 = t3621*t376*t398*t431;
  t4337 = t4324 + t4330;
  t4347 = -1.*t3621*t99*t205;
  t4348 = -4.e-6*t99*t4319;
  t4349 = t2297*t4337;
  t4354 = t4347 + t4348 + t4349;
  t4360 = -1.*t10*t3621*t205;
  t4362 = 4.e-6*t2290*t4319;
  t4366 = -1.*t99*t4337;
  t4369 = t4360 + t4362 + t4366;
  t4379 = -4.e-6*t2290*t3621*t205;
  t4380 = t2444*t4319;
  t4383 = 4.e-6*t99*t4337;
  t4385 = t4379 + t4380 + t4383;
  t4431 = t384*t3414;
  t4433 = t3621*t205*t431;
  t4434 = t4431 + t4433;
  t4440 = t398*t3636;
  t4441 = t413*t4434;
  t4445 = t4440 + t4441;
  t4452 = -1.*t398*t4434;
  t4453 = t3682 + t4452;
  t4456 = 4.e-6*t99*t4445;
  t4457 = t2444*t4453;
  t4461 = t4456 + t4457;
  t4466 = -1.*t99*t4445;
  t4468 = 4.e-6*t2290*t4453;
  t4470 = t4466 + t4468;
  t4476 = t2297*t4445;
  t4477 = -4.e-6*t99*t4453;
  t4478 = t4476 + t4477;
  t4512 = -1.*t3621*t384*t205;
  t4514 = t3414*t431;
  t4515 = t4512 + t4514;
  t4523 = -1.*t398*t4515;
  t4533 = t4523 + t4441;
  t4540 = -1.*t413*t4515;
  t4541 = t4540 + t4452;
  t4545 = 4.e-6*t99*t4533;
  t4547 = t2444*t4541;
  t4552 = t4545 + t4547;
  t4557 = -1.*t99*t4533;
  t4559 = 4.e-6*t2290*t4541;
  t4562 = t4557 + t4559;
  t4565 = t2297*t4533;
  t4566 = -4.e-6*t99*t4541;
  t4567 = t4565 + t4566;
  t4617 = t413*t4515;
  t4618 = t398*t4434;
  t4619 = t4617 + t4618;
  t4624 = -1.*t10*t4619;
  t4625 = t3701 + t4545 + t4624;
  t4631 = 4.e-6*t3621*t376*t99;
  t4634 = -1.6e-11*t99*t4533;
  t4635 = 4.e-6*t10*t4619;
  t4638 = t4631 + t4634 + t4635;
  t4642 = t10*t3621*t376;
  t4643 = -4.e-6*t10*t4533;
  t4644 = -1.000000000016*t99*t4619;
  t4645 = t4642 + t4643 + t4644;
  t4700 = t3621*t376*t99;
  t4704 = -4.e-6*t99*t4533;
  t4705 = t2297*t4619;
  t4708 = t4700 + t4704 + t4705;
  t4720 = 4.e-6*t2290*t4533;
  t4721 = -1.*t99*t4619;
  t4725 = t4642 + t4720 + t4721;
  t4727 = 4.e-6*t2290*t3621*t376;
  t4729 = t2444*t4533;
  t4730 = 4.e-6*t99*t4619;
  t4732 = t4727 + t4729 + t4730;
  t4260 = t884*t4231;
  p_output1[0]=var2[0] + (t2880*t3203 + t2811*t3214 + t1486*t3235 + t1176*t3254 + t1319*t3288 + 0.803147*(t1781*t3235 + t1041*t3254 - 4.e-6*t1041*t3288) + t3192*t376 - 1.*t205*t2796*t384 + t205*t2750*t431 - 0.14871*(4.e-6*t1041*t3235 + t2157*t3288 + 4.e-6*t3254*t915) - 0.041195*(-1.*t1041*t3235 + t3254*t884 + 4.e-6*t3288*t915))*var2[4] + (t2819 + t2918 + t2951 + t2964 + t2976 + t3025 + t3064 + t3093 - 1.*t2750*t376*t384 - 1.*t2796*t376*t431)*var2[5] + (t2819 + t2918 + t2951 + t2964 + t2976 + t3025 + t3064 + t3093 + t3134*t376*t384 - 1.*t3140*t376*t431)*var2[9] + (t1176*t1225 + t1319*t1401 + t1486*t1662 + 0.803147*(t1041*t1225 - 4.e-6*t1041*t1401 + t1662*t1781) + t190*t205 + t361*t511 + t579*t629 - 0.14871*(4.e-6*t1041*t1662 + t1401*t2157 + 4.e-6*t1225*t915) - 0.041195*(-1.*t1041*t1662 + t1225*t884 + 4.e-6*t1401*t915))*var2[10] + (t2257*t2315 + t2345*t2383 + t2396*t2457 - 0.041195*(-1.*t1041*t2383 + 4.e-6*t1041*t2457 - 1.*t2315*t884) - 0.14871*(4.e-6*t1041*t2383 - 1.6e-11*t1041*t2457 + 4.e-6*t2315*t884) + 0.803147*(-1.000000000016*t1041*t2315 + t2383*t884 - 4.e-6*t2457*t884))*var2[11];
  p_output1[1]=var2[1] + (t2796*t3636 + t2750*t3649 + t2880*t3674 + t2811*t3693 + t1486*t3722 + t1176*t3732 + t1319*t3749 + 0.803147*(t1781*t3722 + t1041*t3732 - 4.e-6*t1041*t3749) - 1.*t3192*t3621*t376 - 0.14871*(4.e-6*t1041*t3722 + t2157*t3749 + 4.e-6*t3732*t915) - 0.041195*(-1.*t1041*t3722 + t3732*t884 + 4.e-6*t3749*t915))*var2[3] + (t205*t3192*t3414 + t2880*t3442 + t2811*t3447 + t1486*t3492 + t1176*t3522 + t1319*t3539 + 0.803147*(t1781*t3492 + t1041*t3522 - 4.e-6*t1041*t3539) + t2796*t3414*t376*t384 - 1.*t2750*t3414*t376*t431 - 0.14871*(4.e-6*t1041*t3492 + t2157*t3539 + 4.e-6*t3522*t915) - 0.041195*(-1.*t1041*t3492 + t3522*t884 + 4.e-6*t3539*t915))*var2[4] + (t2750*t3833 + t2796*t3840 + t2811*t3857 + t2880*t3867 + t1319*t3878 + t1176*t3884 + t1486*t3890 + 0.803147*(-4.e-6*t1041*t3878 + t1041*t3884 + t1781*t3890) - 0.041195*(-1.*t1041*t3890 + t3884*t884 + 4.e-6*t3878*t915) - 0.14871*(t2157*t3878 + 4.e-6*t1041*t3890 + 4.e-6*t3884*t915))*var2[5] + (t3140*t3840 + t3134*t3975 + t2811*t3981 + t2880*t3985 + t1319*t4005 + t1176*t4015 + t1486*t4024 + 0.803147*(-4.e-6*t1041*t4005 + t1041*t4015 + t1781*t4024) - 0.041195*(-1.*t1041*t4024 + t4015*t884 + 4.e-6*t4005*t915) - 0.14871*(t2157*t4005 + 4.e-6*t1041*t4024 + 4.e-6*t4015*t915))*var2[9] + (-1.*t190*t3414*t376 + t361*t3981 + t1176*t4127 + t1319*t4138 + t1486*t4148 + 0.803147*(t1041*t4127 - 4.e-6*t1041*t4138 + t1781*t4148) + t4117*t579 - 0.14871*(t2157*t4138 + 4.e-6*t1041*t4148 + 4.e-6*t4127*t915) - 0.041195*(-1.*t1041*t4148 + t4127*t884 + 4.e-6*t4138*t915))*var2[10] + (t2257*t4223 + t2345*t4231 + t2396*t4257 - 0.041195*(-1.*t1041*t4231 + 4.e-6*t1041*t4257 - 1.*t4223*t884) - 0.14871*(4.e-6*t1041*t4231 - 1.6e-11*t1041*t4257 + 4.e-6*t4223*t884) + 0.803147*(-1.000000000016*t1041*t4223 + t4260 - 4.e-6*t4257*t884))*var2[11];
  p_output1[2]=var2[2] + (-1.*t3192*t3414*t376 + t2750*t3840 + t2796*t3975 + t2880*t3981 + t2811*t4117 + t1486*t4223 + t1176*t4231 + t1319*t4257 + 0.803147*(t1781*t4223 + t1041*t4231 - 4.e-6*t1041*t4257) - 0.14871*(4.e-6*t1041*t4223 + t2157*t4257 + 4.e-6*t4231*t915) - 0.041195*(-1.*t1041*t4223 + t4260 + 4.e-6*t4257*t915))*var2[3] + (-1.*t205*t3192*t3621 - 1.*t2796*t3621*t376*t384 + t2750*t3621*t376*t431 + t2880*t4319 + t2811*t4337 + t1486*t4354 + t1176*t4369 + t1319*t4385 + 0.803147*(t1781*t4354 + t1041*t4369 - 4.e-6*t1041*t4385) - 0.14871*(4.e-6*t1041*t4354 + t2157*t4385 + 4.e-6*t4369*t915) - 0.041195*(-1.*t1041*t4354 + t4369*t884 + 4.e-6*t4385*t915))*var2[4] + (t2750*t3636 + t2796*t4434 + t2811*t4445 + t2880*t4453 + t1319*t4461 + t1176*t4470 + t1486*t4478 + 0.803147*(-4.e-6*t1041*t4461 + t1041*t4470 + t1781*t4478) - 0.041195*(-1.*t1041*t4478 + t4470*t884 + 4.e-6*t4461*t915) - 0.14871*(t2157*t4461 + 4.e-6*t1041*t4478 + 4.e-6*t4470*t915))*var2[5] + (t3140*t4434 + t3134*t4515 + t2811*t4533 + t2880*t4541 + t1319*t4552 + t1176*t4562 + t1486*t4567 + 0.803147*(-4.e-6*t1041*t4552 + t1041*t4562 + t1781*t4567) - 0.041195*(-1.*t1041*t4567 + t4562*t884 + 4.e-6*t4552*t915) - 0.14871*(t2157*t4552 + 4.e-6*t1041*t4567 + 4.e-6*t4562*t915))*var2[9] + (t190*t3621*t376 + t361*t4533 + t1176*t4625 + t1319*t4638 + t1486*t4645 + 0.803147*(t1041*t4625 - 4.e-6*t1041*t4638 + t1781*t4645) + t4619*t579 - 0.14871*(t2157*t4638 + 4.e-6*t1041*t4645 + 4.e-6*t4625*t915) - 0.041195*(-1.*t1041*t4645 + t4625*t884 + 4.e-6*t4638*t915))*var2[10] + (t2257*t4708 + t2345*t4725 + t2396*t4732 - 0.041195*(-1.*t1041*t4725 + 4.e-6*t1041*t4732 - 1.*t4708*t884) - 0.14871*(4.e-6*t1041*t4725 - 1.6e-11*t1041*t4732 + 4.e-6*t4708*t884) + 0.803147*(-1.000000000016*t1041*t4708 + t4725*t884 - 4.e-6*t4732*t884))*var2[11];
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

#include "impact_velocity_FrFootDiagonalStance2.hh"

namespace TrotStance2
{

void impact_velocity_FrFootDiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
