/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:11:21 GMT+01:00
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
  double t442;
  double t1829;
  double t1853;
  double t1860;
  double t1941;
  double t2042;
  double t2068;
  double t498;
  double t830;
  double t1182;
  double t1339;
  double t1665;
  double t2244;
  double t89;
  double t2307;
  double t2374;
  double t2379;
  double t2483;
  double t2490;
  double t2502;
  double t2522;
  double t2529;
  double t2534;
  double t2543;
  double t2730;
  double t2583;
  double t2586;
  double t2617;
  double t2623;
  double t2671;
  double t2697;
  double t2839;
  double t2844;
  double t2864;
  double t2870;
  double t2908;
  double t2919;
  double t2960;
  double t2962;
  double t2967;
  double t2973;
  double t2151;
  double t2168;
  double t1889;
  double t2051;
  double t2441;
  double t2447;
  double t2480;
  double t2249;
  double t2264;
  double t2273;
  double t2276;
  double t2300;
  double t2877;
  double t2878;
  double t2891;
  double t2896;
  double t2898;
  double t3158;
  double t3189;
  double t3192;
  double t3220;
  double t3222;
  double t3223;
  double t2728;
  double t2729;
  double t2762;
  double t2785;
  double t2792;
  double t2538;
  double t2551;
  double t2568;
  double t3233;
  double t3234;
  double t3238;
  double t3251;
  double t3259;
  double t3261;
  double t3061;
  double t3071;
  double t3266;
  double t3272;
  double t3281;
  double t3003;
  double t3005;
  double t3357;
  double t3198;
  double t3227;
  double t3244;
  double t3262;
  double t3298;
  double t3303;
  double t3304;
  double t3317;
  double t3321;
  double t3325;
  double t3326;
  double t3330;
  double t3331;
  double t3334;
  double t3335;
  double t3337;
  double t3338;
  double t3342;
  double t3343;
  double t3344;
  double t3476;
  double t3479;
  double t3516;
  double t3546;
  double t3547;
  double t3558;
  double t3563;
  double t3566;
  double t3569;
  double t3577;
  double t3590;
  double t3599;
  double t3601;
  double t3605;
  double t3696;
  double t3709;
  double t3729;
  double t3732;
  double t3742;
  double t3743;
  double t3759;
  double t3765;
  double t3767;
  double t3772;
  double t3774;
  double t363;
  double t1032;
  double t1243;
  double t1486;
  double t1579;
  double t3830;
  double t3851;
  double t3840;
  double t3853;
  double t3854;
  double t3859;
  double t3861;
  double t3862;
  double t3867;
  double t3878;
  double t3879;
  double t3886;
  double t3888;
  double t3889;
  double t3901;
  double t3905;
  double t3906;
  double t3908;
  double t3915;
  double t3919;
  double t3926;
  double t3932;
  double t3936;
  double t3944;
  double t3945;
  double t3946;
  double t4063;
  double t4073;
  double t4078;
  double t4083;
  double t4087;
  double t4095;
  double t4100;
  double t4101;
  double t4102;
  double t4104;
  double t4118;
  double t4125;
  double t4126;
  double t4131;
  double t4138;
  double t4140;
  double t4141;
  double t4142;
  double t4185;
  double t4186;
  double t4189;
  double t4191;
  double t4192;
  double t4193;
  double t4217;
  double t4225;
  double t4236;
  double t4242;
  double t4245;
  double t4248;
  double t4253;
  double t4254;
  double t4263;
  double t4269;
  double t4274;
  double t4276;
  double t4281;
  double t4289;
  double t4291;
  double t3369;
  double t3381;
  double t3392;
  double t4337;
  double t4340;
  double t4353;
  double t4367;
  double t4368;
  double t4374;
  double t4386;
  double t4392;
  double t4398;
  double t4400;
  double t4413;
  double t4414;
  double t4415;
  double t4417;
  double t4425;
  double t4428;
  double t3401;
  double t3406;
  double t3422;
  double t3425;
  double t3429;
  double t3462;
  double t3470;
  double t3471;
  double t4542;
  double t4545;
  double t4549;
  double t4551;
  double t4552;
  double t4555;
  double t4570;
  double t4571;
  double t4572;
  double t4574;
  double t4576;
  double t4581;
  double t4582;
  double t4597;
  double t3677;
  double t3680;
  double t3682;
  double t3736;
  double t3739;
  double t3762;
  double t3763;
  double t3764;
  double t4670;
  double t4674;
  double t4676;
  double t4678;
  double t4682;
  double t4693;
  double t4695;
  double t4698;
  double t4699;
  double t4701;
  double t4702;
  double t4712;
  double t4869;
  double t4870;
  double t4871;
  double t4873;
  double t4874;
  double t4876;
  double t4880;
  double t4883;
  double t4891;
  double t4893;
  double t4895;
  double t4896;
  double t4898;
  double t4907;
  double t4910;
  double t4911;
  double t4913;
  double t4915;
  double t4965;
  double t4971;
  double t4972;
  double t4982;
  double t4984;
  double t4992;
  double t5005;
  double t5007;
  double t5011;
  double t5014;
  double t5018;
  double t5027;
  double t5037;
  double t5042;
  double t5045;
  double t5047;
  double t5050;
  double t5127;
  double t5128;
  double t5131;
  double t5138;
  double t5140;
  double t5146;
  double t5147;
  double t5169;
  double t5171;
  double t5172;
  double t5174;
  double t5183;
  double t5185;
  double t5193;
  double t5197;
  double t5202;
  double t5271;
  double t5273;
  double t5277;
  double t5286;
  double t5293;
  double t5296;
  double t5299;
  double t5303;
  double t5304;
  double t5307;
  double t5309;
  double t5310;
  double t5324;
  double t5384;
  double t5385;
  double t5394;
  double t5402;
  double t5405;
  double t5407;
  double t5408;
  double t5425;
  double t5426;
  double t5446;
  double t5448;
  t442 = Cos(var1[10]);
  t1829 = Cos(var1[9]);
  t1853 = -1.*t1829;
  t1860 = 1. + t1853;
  t1941 = Sin(var1[9]);
  t2042 = -0.15121*t1941;
  t2068 = Sin(var1[4]);
  t498 = -1.*t442;
  t830 = 1. + t498;
  t1182 = -1. + t442;
  t1339 = Sin(var1[10]);
  t1665 = Cos(var1[5]);
  t2244 = Sin(var1[5]);
  t89 = Cos(var1[4]);
  t2307 = t1665*t1941*t2068;
  t2374 = t1829*t2068*t2244;
  t2379 = t2307 + t2374;
  t2483 = -1.*t1829*t1665*t2068;
  t2490 = t1941*t2068*t2244;
  t2502 = t2483 + t2490;
  t2522 = Cos(var1[11]);
  t2529 = -1.*t2522;
  t2534 = 1. + t2529;
  t2543 = Sin(var1[11]);
  t2730 = -1. + t2522;
  t2583 = t89*t1339;
  t2586 = -4.e-6*t1339*t2379;
  t2617 = -1.000000000016*t830;
  t2623 = 1. + t2617;
  t2671 = t2623*t2502;
  t2697 = t2583 + t2586 + t2671;
  t2839 = t442*t89;
  t2844 = 4.e-6*t830*t2379;
  t2864 = -1.*t1339*t2502;
  t2870 = t2839 + t2844 + t2864;
  t2908 = 4.e-6*t830*t89;
  t2919 = 1.6e-11*t1182;
  t2960 = 1. + t2919;
  t2962 = t2960*t2379;
  t2967 = 4.e-6*t1339*t2502;
  t2973 = t2908 + t2962 + t2967;
  t2151 = -0.15121*t1860;
  t2168 = t2151 + t2042;
  t1889 = 0.15121*t1860;
  t2051 = t1889 + t2042;
  t2441 = 0.281210000008499*t830;
  t2447 = -0.03874900000062*t1339;
  t2480 = t2441 + t2447;
  t2249 = -1.2484e-7*var1[10];
  t2264 = 2.479936e-18*t830;
  t2273 = -1.54996e-7*t1182;
  t2276 = 1.124840000016e-6*t1339;
  t2300 = t2249 + t2264 + t2273 + t2276;
  t2877 = -1.26e-8*var1[11];
  t2878 = 2.552896e-18*t2534;
  t2891 = -1.59556e-7*t2730;
  t2896 = 2.012600000032e-6*t2543;
  t2898 = t2877 + t2878 + t2891 + t2896;
  t3158 = -1.*t89*t1665*t1941;
  t3189 = -1.*t1829*t89*t2244;
  t3192 = t3158 + t3189;
  t3220 = -1.*t1829*t89*t1665;
  t3222 = t89*t1941*t2244;
  t3223 = t3220 + t3222;
  t2728 = -5.04e-14*var1[11];
  t2729 = -0.039889*t2534;
  t2762 = 6.38224e-13*t2730;
  t2785 = -0.503150000008*t2543;
  t2792 = t2728 + t2729 + t2762 + t2785;
  t2538 = 0.50315000001605*t2534;
  t2551 = -0.0398890000006382*t2543;
  t2568 = t2538 + t2551;
  t3233 = 4.e-6*t1339*t3192;
  t3234 = t2960*t3223;
  t3238 = t3233 + t3234;
  t3251 = -1.*t1339*t3192;
  t3259 = 4.e-6*t830*t3223;
  t3261 = t3251 + t3259;
  t3061 = -1.000000000016*t2534;
  t3071 = 1. + t3061;
  t3266 = t2623*t3192;
  t3272 = -4.e-6*t1339*t3223;
  t3281 = t3266 + t3272;
  t3003 = 1.6e-11*t2730;
  t3005 = 1. + t3003;
  t3357 = -0.15121*t1829;
  t3198 = t2480*t3192;
  t3227 = t2300*t3223;
  t3244 = t2898*t3238;
  t3262 = t2792*t3261;
  t3298 = t2568*t3281;
  t3303 = -4.e-6*t2543*t3238;
  t3304 = t2543*t3261;
  t3317 = t3071*t3281;
  t3321 = t3303 + t3304 + t3317;
  t3325 = 0.803147*t3321;
  t3326 = 4.e-6*t2534*t3238;
  t3330 = t2522*t3261;
  t3331 = -1.*t2543*t3281;
  t3334 = t3326 + t3330 + t3331;
  t3335 = -0.041195*t3334;
  t3337 = t3005*t3238;
  t3338 = 4.e-6*t2534*t3261;
  t3342 = 4.e-6*t2543*t3281;
  t3343 = t3337 + t3338 + t3342;
  t3344 = -0.14871*t3343;
  t3476 = t1829*t89*t1665;
  t3479 = -1.*t89*t1941*t2244;
  t3516 = t3476 + t3479;
  t3546 = -1.*t1339*t2068;
  t3547 = -1.*t442*t3516;
  t3558 = t3546 + t3233 + t3547;
  t3563 = 4.e-6*t1339*t2068;
  t3566 = -1.6e-11*t1339*t3192;
  t3569 = 4.e-6*t442*t3516;
  t3577 = t3563 + t3566 + t3569;
  t3590 = t442*t2068;
  t3599 = -4.e-6*t442*t3192;
  t3601 = -1.000000000016*t1339*t3516;
  t3605 = t3590 + t3599 + t3601;
  t3696 = t1339*t2068;
  t3709 = -4.e-6*t1339*t3192;
  t3729 = t2623*t3516;
  t3732 = t3696 + t3709 + t3729;
  t3742 = 4.e-6*t830*t3192;
  t3743 = -1.*t1339*t3516;
  t3759 = t3590 + t3742 + t3743;
  t3765 = 4.e-6*t830*t2068;
  t3767 = t2960*t3192;
  t3772 = 4.e-6*t1339*t3516;
  t3774 = t3765 + t3767 + t3772;
  t363 = -4.9936e-13*var1[10];
  t1032 = -0.038749*t830;
  t1243 = 6.19984e-13*t1182;
  t1486 = -0.281210000004*t1339;
  t1579 = t363 + t1032 + t1243 + t1486;
  t3830 = Cos(var1[3]);
  t3851 = Sin(var1[3]);
  t3840 = t3830*t1665*t2068;
  t3853 = -1.*t3851*t2244;
  t3854 = t3840 + t3853;
  t3859 = -1.*t1665*t3851;
  t3861 = -1.*t3830*t2068*t2244;
  t3862 = t3859 + t3861;
  t3867 = -1.*t1941*t3854;
  t3878 = t1829*t3862;
  t3879 = t3867 + t3878;
  t3886 = t1829*t3854;
  t3888 = t1941*t3862;
  t3889 = t3886 + t3888;
  t3901 = -1.*t3830*t89*t1339;
  t3905 = -4.e-6*t1339*t3879;
  t3906 = t2623*t3889;
  t3908 = t3901 + t3905 + t3906;
  t3915 = -1.*t442*t3830*t89;
  t3919 = 4.e-6*t830*t3879;
  t3926 = -1.*t1339*t3889;
  t3932 = t3915 + t3919 + t3926;
  t3936 = -4.e-6*t830*t3830*t89;
  t3944 = t2960*t3879;
  t3945 = 4.e-6*t1339*t3889;
  t3946 = t3936 + t3944 + t3945;
  t4063 = -1.*t89*t1665*t1941*t3851;
  t4073 = -1.*t1829*t89*t3851*t2244;
  t4078 = t4063 + t4073;
  t4083 = t1829*t89*t1665*t3851;
  t4087 = -1.*t89*t1941*t3851*t2244;
  t4095 = t4083 + t4087;
  t4100 = t1339*t3851*t2068;
  t4101 = -4.e-6*t1339*t4078;
  t4102 = t2623*t4095;
  t4104 = t4100 + t4101 + t4102;
  t4118 = t442*t3851*t2068;
  t4125 = 4.e-6*t830*t4078;
  t4126 = -1.*t1339*t4095;
  t4131 = t4118 + t4125 + t4126;
  t4138 = 4.e-6*t830*t3851*t2068;
  t4140 = t2960*t4078;
  t4141 = 4.e-6*t1339*t4095;
  t4142 = t4138 + t4140 + t4141;
  t4185 = -1.*t1665*t3851*t2068;
  t4186 = -1.*t3830*t2244;
  t4189 = t4185 + t4186;
  t4191 = t3830*t1665;
  t4192 = -1.*t3851*t2068*t2244;
  t4193 = t4191 + t4192;
  t4217 = t1941*t4189;
  t4225 = t1829*t4193;
  t4236 = t4217 + t4225;
  t4242 = t1829*t4189;
  t4245 = -1.*t1941*t4193;
  t4248 = t4242 + t4245;
  t4253 = 4.e-6*t1339*t4236;
  t4254 = t2960*t4248;
  t4263 = t4253 + t4254;
  t4269 = -1.*t1339*t4236;
  t4274 = 4.e-6*t830*t4248;
  t4276 = t4269 + t4274;
  t4281 = t2623*t4236;
  t4289 = -4.e-6*t1339*t4248;
  t4291 = t4281 + t4289;
  t3369 = 0.15121*t1941;
  t3381 = t3357 + t3369;
  t3392 = t3357 + t2042;
  t4337 = t1665*t3851*t2068;
  t4340 = t3830*t2244;
  t4353 = t4337 + t4340;
  t4367 = -1.*t1941*t4353;
  t4368 = t4367 + t4225;
  t4374 = -1.*t1829*t4353;
  t4386 = t4374 + t4245;
  t4392 = 4.e-6*t1339*t4368;
  t4398 = t2960*t4386;
  t4400 = t4392 + t4398;
  t4413 = -1.*t1339*t4368;
  t4414 = 4.e-6*t830*t4386;
  t4415 = t4413 + t4414;
  t4417 = t2623*t4368;
  t4425 = -4.e-6*t1339*t4386;
  t4428 = t4417 + t4425;
  t3401 = -0.281210000004*t442;
  t3406 = -4.9936e-13 + t3401 + t2447;
  t3422 = 1.124840000016e-6*t442;
  t3425 = 1.5499600000248e-7*t1339;
  t3429 = -1.2484e-7 + t3422 + t3425;
  t3462 = -0.03874900000062*t442;
  t3470 = 0.281210000008499*t1339;
  t3471 = t3462 + t3470;
  t4542 = t1829*t4353;
  t4545 = t1941*t4193;
  t4549 = t4542 + t4545;
  t4551 = t89*t1339*t3851;
  t4552 = -1.*t442*t4549;
  t4555 = t4551 + t4392 + t4552;
  t4570 = -4.e-6*t89*t1339*t3851;
  t4571 = -1.6e-11*t1339*t4368;
  t4572 = 4.e-6*t442*t4549;
  t4574 = t4570 + t4571 + t4572;
  t4576 = -1.*t442*t89*t3851;
  t4581 = -4.e-6*t442*t4368;
  t4582 = -1.000000000016*t1339*t4549;
  t4597 = t4576 + t4581 + t4582;
  t3677 = -0.0398890000006382*t2522;
  t3680 = 0.50315000001605*t2543;
  t3682 = t3677 + t3680;
  t3736 = -0.503150000008*t2522;
  t3739 = -5.04e-14 + t3736 + t2551;
  t3762 = 2.012600000032e-6*t2522;
  t3763 = 1.59556000002553e-7*t2543;
  t3764 = -1.26e-8 + t3762 + t3763;
  t4670 = -1.*t89*t1339*t3851;
  t4674 = -4.e-6*t1339*t4368;
  t4676 = t2623*t4549;
  t4678 = t4670 + t4674 + t4676;
  t4682 = 4.e-6*t830*t4368;
  t4693 = -1.*t1339*t4549;
  t4695 = t4576 + t4682 + t4693;
  t4698 = -4.e-6*t830*t89*t3851;
  t4699 = t2960*t4368;
  t4701 = 4.e-6*t1339*t4549;
  t4702 = t4698 + t4699 + t4701;
  t4712 = t2522*t4695;
  t4869 = t3830*t89*t1665*t1941;
  t4870 = t1829*t3830*t89*t2244;
  t4871 = t4869 + t4870;
  t4873 = -1.*t1829*t3830*t89*t1665;
  t4874 = t3830*t89*t1941*t2244;
  t4876 = t4873 + t4874;
  t4880 = -1.*t3830*t1339*t2068;
  t4883 = -4.e-6*t1339*t4871;
  t4891 = t2623*t4876;
  t4893 = t4880 + t4883 + t4891;
  t4895 = -1.*t442*t3830*t2068;
  t4896 = 4.e-6*t830*t4871;
  t4898 = -1.*t1339*t4876;
  t4907 = t4895 + t4896 + t4898;
  t4910 = -4.e-6*t830*t3830*t2068;
  t4911 = t2960*t4871;
  t4913 = 4.e-6*t1339*t4876;
  t4915 = t4910 + t4911 + t4913;
  t4965 = t1665*t3851;
  t4971 = t3830*t2068*t2244;
  t4972 = t4965 + t4971;
  t4982 = t1941*t3854;
  t4984 = t1829*t4972;
  t4992 = t4982 + t4984;
  t5005 = -1.*t1941*t4972;
  t5007 = t3886 + t5005;
  t5011 = 4.e-6*t1339*t4992;
  t5014 = t2960*t5007;
  t5018 = t5011 + t5014;
  t5027 = -1.*t1339*t4992;
  t5037 = 4.e-6*t830*t5007;
  t5042 = t5027 + t5037;
  t5045 = t2623*t4992;
  t5047 = -4.e-6*t1339*t5007;
  t5050 = t5045 + t5047;
  t5127 = -1.*t3830*t1665*t2068;
  t5128 = t3851*t2244;
  t5131 = t5127 + t5128;
  t5138 = -1.*t1941*t5131;
  t5140 = t5138 + t4984;
  t5146 = -1.*t1829*t5131;
  t5147 = t5146 + t5005;
  t5169 = 4.e-6*t1339*t5140;
  t5171 = t2960*t5147;
  t5172 = t5169 + t5171;
  t5174 = -1.*t1339*t5140;
  t5183 = 4.e-6*t830*t5147;
  t5185 = t5174 + t5183;
  t5193 = t2623*t5140;
  t5197 = -4.e-6*t1339*t5147;
  t5202 = t5193 + t5197;
  t5271 = t1829*t5131;
  t5273 = t1941*t4972;
  t5277 = t5271 + t5273;
  t5286 = -1.*t442*t5277;
  t5293 = t3901 + t5169 + t5286;
  t5296 = 4.e-6*t3830*t89*t1339;
  t5299 = -1.6e-11*t1339*t5140;
  t5303 = 4.e-6*t442*t5277;
  t5304 = t5296 + t5299 + t5303;
  t5307 = t442*t3830*t89;
  t5309 = -4.e-6*t442*t5140;
  t5310 = -1.000000000016*t1339*t5277;
  t5324 = t5307 + t5309 + t5310;
  t5384 = t3830*t89*t1339;
  t5385 = -4.e-6*t1339*t5140;
  t5394 = t2623*t5277;
  t5402 = t5384 + t5385 + t5394;
  t5405 = 4.e-6*t830*t5140;
  t5407 = -1.*t1339*t5277;
  t5408 = t5307 + t5405 + t5407;
  t5425 = 4.e-6*t830*t3830*t89;
  t5426 = t2960*t5140;
  t5446 = 4.e-6*t1339*t5277;
  t5448 = t5425 + t5426 + t5446;
  p_output1[0]=1.;
  p_output1[1]=-1.*t1665*t2051*t2068 + t2068*t2168*t2244 + t2300*t2379 + t2480*t2502 + t2568*t2697 + t2792*t2870 + t2898*t2973 - 0.041195*(-1.*t2543*t2697 + t2522*t2870 + 4.e-6*t2534*t2973) - 0.14871*(4.e-6*t2543*t2697 + 4.e-6*t2534*t2870 + t2973*t3005) + 0.803147*(t2543*t2870 - 4.e-6*t2543*t2973 + t2697*t3071) + t1579*t89;
  p_output1[2]=t3198 + t3227 + t3244 + t3262 + t3298 + t3325 + t3335 + t3344 - 1.*t1665*t2168*t89 - 1.*t2051*t2244*t89;
  p_output1[3]=t3198 + t3227 + t3244 + t3262 + t3298 + t3325 + t3335 + t3344 + t1665*t3381*t89 - 1.*t2244*t3392*t89;
  p_output1[4]=t2068*t3406 + t3192*t3429 + t3471*t3516 + t2792*t3558 + t2898*t3577 + t2568*t3605 - 0.041195*(t2522*t3558 + 4.e-6*t2534*t3577 - 1.*t2543*t3605) - 0.14871*(4.e-6*t2534*t3558 + t3005*t3577 + 4.e-6*t2543*t3605) + 0.803147*(t2543*t3558 - 4.e-6*t2543*t3577 + t3071*t3605);
  p_output1[5]=t3682*t3732 + t3739*t3759 + t3764*t3774 + 0.803147*(-1.000000000016*t2543*t3732 + t2522*t3759 - 4.e-6*t2522*t3774) - 0.14871*(4.e-6*t2522*t3732 + 4.e-6*t2543*t3759 - 1.6e-11*t2543*t3774) - 0.041195*(-1.*t2522*t3732 - 1.*t2543*t3759 + 4.e-6*t2543*t3774);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=t2051*t3854 + t2168*t3862 + t2300*t3879 + t2480*t3889 + t2568*t3908 + t2792*t3932 + t2898*t3946 - 0.041195*(-1.*t2543*t3908 + t2522*t3932 + 4.e-6*t2534*t3946) + 0.803147*(t3071*t3908 + t2543*t3932 - 4.e-6*t2543*t3946) - 0.14871*(4.e-6*t2543*t3908 + 4.e-6*t2534*t3932 + t3005*t3946) - 1.*t1579*t3830*t89;
  p_output1[9]=t1579*t2068*t3851 + t2300*t4078 + t2480*t4095 + t2568*t4104 + t2792*t4131 + t2898*t4142 - 0.041195*(-1.*t2543*t4104 + t2522*t4131 + 4.e-6*t2534*t4142) + 0.803147*(t3071*t4104 + t2543*t4131 - 4.e-6*t2543*t4142) - 0.14871*(4.e-6*t2543*t4104 + 4.e-6*t2534*t4131 + t3005*t4142) + t1665*t2051*t3851*t89 - 1.*t2168*t2244*t3851*t89;
  p_output1[10]=t2168*t4189 + t2051*t4193 + t2480*t4236 + t2300*t4248 + t2898*t4263 + t2792*t4276 + t2568*t4291 - 0.041195*(4.e-6*t2534*t4263 + t2522*t4276 - 1.*t2543*t4291) - 0.14871*(t3005*t4263 + 4.e-6*t2534*t4276 + 4.e-6*t2543*t4291) + 0.803147*(-4.e-6*t2543*t4263 + t2543*t4276 + t3071*t4291);
  p_output1[11]=t3392*t4193 + t3381*t4353 + t2480*t4368 + t2300*t4386 + t2898*t4400 + t2792*t4415 + t2568*t4428 - 0.041195*(4.e-6*t2534*t4400 + t2522*t4415 - 1.*t2543*t4428) - 0.14871*(t3005*t4400 + 4.e-6*t2534*t4415 + 4.e-6*t2543*t4428) + 0.803147*(-4.e-6*t2543*t4400 + t2543*t4415 + t3071*t4428);
  p_output1[12]=t3429*t4368 + t3471*t4549 + t2792*t4555 + t2898*t4574 + t2568*t4597 - 0.041195*(t2522*t4555 + 4.e-6*t2534*t4574 - 1.*t2543*t4597) - 0.14871*(4.e-6*t2534*t4555 + t3005*t4574 + 4.e-6*t2543*t4597) + 0.803147*(t2543*t4555 - 4.e-6*t2543*t4574 + t3071*t4597) - 1.*t3406*t3851*t89;
  p_output1[13]=t3682*t4678 + t3739*t4695 + t3764*t4702 - 0.14871*(4.e-6*t2522*t4678 + 4.e-6*t2543*t4695 - 1.6e-11*t2543*t4702) - 0.041195*(-1.*t2522*t4678 - 1.*t2543*t4695 + 4.e-6*t2543*t4702) + 0.803147*(-1.000000000016*t2543*t4678 - 4.e-6*t2522*t4702 + t4712);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=t2168*t4193 + t2051*t4353 + t2300*t4368 + t2480*t4549 + t2568*t4678 + t2792*t4695 + t2898*t4702 + 0.803147*(t3071*t4678 + t2543*t4695 - 4.e-6*t2543*t4702) - 0.14871*(4.e-6*t2543*t4678 + 4.e-6*t2534*t4695 + t3005*t4702) - 0.041195*(-1.*t2543*t4678 + 4.e-6*t2534*t4702 + t4712) - 1.*t1579*t3851*t89;
  p_output1[17]=-1.*t1579*t2068*t3830 + t2300*t4871 + t2480*t4876 + t2568*t4893 + t2792*t4907 + t2898*t4915 - 0.041195*(-1.*t2543*t4893 + t2522*t4907 + 4.e-6*t2534*t4915) + 0.803147*(t3071*t4893 + t2543*t4907 - 4.e-6*t2543*t4915) - 0.14871*(4.e-6*t2543*t4893 + 4.e-6*t2534*t4907 + t3005*t4915) - 1.*t1665*t2051*t3830*t89 + t2168*t2244*t3830*t89;
  p_output1[18]=t2168*t3854 + t2051*t4972 + t2480*t4992 + t2300*t5007 + t2898*t5018 + t2792*t5042 + t2568*t5050 - 0.041195*(4.e-6*t2534*t5018 + t2522*t5042 - 1.*t2543*t5050) - 0.14871*(t3005*t5018 + 4.e-6*t2534*t5042 + 4.e-6*t2543*t5050) + 0.803147*(-4.e-6*t2543*t5018 + t2543*t5042 + t3071*t5050);
  p_output1[19]=t3392*t4972 + t3381*t5131 + t2480*t5140 + t2300*t5147 + t2898*t5172 + t2792*t5185 + t2568*t5202 - 0.041195*(4.e-6*t2534*t5172 + t2522*t5185 - 1.*t2543*t5202) - 0.14871*(t3005*t5172 + 4.e-6*t2534*t5185 + 4.e-6*t2543*t5202) + 0.803147*(-4.e-6*t2543*t5172 + t2543*t5185 + t3071*t5202);
  p_output1[20]=t3429*t5140 + t3471*t5277 + t2792*t5293 + t2898*t5304 + t2568*t5324 - 0.041195*(t2522*t5293 + 4.e-6*t2534*t5304 - 1.*t2543*t5324) - 0.14871*(4.e-6*t2534*t5293 + t3005*t5304 + 4.e-6*t2543*t5324) + 0.803147*(t2543*t5293 - 4.e-6*t2543*t5304 + t3071*t5324) + t3406*t3830*t89;
  p_output1[21]=t3682*t5402 + t3739*t5408 + t3764*t5448 + 0.803147*(-1.000000000016*t2543*t5402 + t2522*t5408 - 4.e-6*t2522*t5448) - 0.14871*(4.e-6*t2522*t5402 + 4.e-6*t2543*t5408 - 1.6e-11*t2543*t5448) - 0.041195*(-1.*t2522*t5402 - 1.*t2543*t5408 + 4.e-6*t2543*t5448);
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

#include "J_h_FrFoot_ParallelStance1.hh"

namespace ParallelStance1
{

void J_h_FrFoot_ParallelStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
