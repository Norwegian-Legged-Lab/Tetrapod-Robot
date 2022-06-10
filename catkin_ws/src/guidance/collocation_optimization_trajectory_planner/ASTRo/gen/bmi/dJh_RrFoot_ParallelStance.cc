/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:49:30 GMT+02:00
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
  double t414;
  double t1829;
  double t1893;
  double t2170;
  double t2323;
  double t2326;
  double t2344;
  double t2376;
  double t378;
  double t390;
  double t2437;
  double t2532;
  double t2360;
  double t2471;
  double t2491;
  double t377;
  double t2534;
  double t2540;
  double t2542;
  double t2548;
  double t2555;
  double t2564;
  double t2565;
  double t2569;
  double t2570;
  double t2881;
  double t2916;
  double t2952;
  double t2955;
  double t2974;
  double t2980;
  double t2981;
  double t2987;
  double t3016;
  double t3017;
  double t3018;
  double t3023;
  double t3026;
  double t3027;
  double t3031;
  double t3032;
  double t3034;
  double t3037;
  double t3043;
  double t3045;
  double t3076;
  double t3083;
  double t3084;
  double t3134;
  double t3138;
  double t3140;
  double t3141;
  double t3146;
  double t3168;
  double t3169;
  double t3176;
  double t3177;
  double t3179;
  double t3198;
  double t3204;
  double t3207;
  double t3212;
  double t3130;
  double t3156;
  double t3158;
  double t3161;
  double t3214;
  double t3223;
  double t3228;
  double t3238;
  double t3242;
  double t3248;
  double t3251;
  double t3254;
  double t3256;
  double t3273;
  double t3279;
  double t3282;
  double t3162;
  double t3264;
  double t3269;
  double t3321;
  double t3332;
  double t3338;
  double t3116;
  double t3122;
  double t3126;
  double t3296;
  double t3300;
  double t3307;
  double t3379;
  double t3381;
  double t3384;
  double t3526;
  double t3530;
  double t3531;
  double t3818;
  double t3820;
  double t3824;
  double t3310;
  double t3880;
  double t3886;
  double t3894;
  double t3411;
  double t3975;
  double t3980;
  double t3981;
  double t3312;
  double t3340;
  double t3347;
  double t3903;
  double t3941;
  double t3925;
  double t3926;
  double t3929;
  double t3972;
  double t3991;
  double t3421;
  double t3455;
  double t3468;
  double t3614;
  double t3675;
  double t4399;
  double t4421;
  double t4458;
  double t4475;
  double t3615;
  double t3620;
  double t3630;
  double t3683;
  double t3684;
  double t3704;
  double t3750;
  double t3795;
  double t3755;
  double t3764;
  double t3767;
  double t4097;
  double t4109;
  double t4672;
  double t4703;
  double t4718;
  double t4728;
  double t3805;
  double t3806;
  double t3807;
  double t3825;
  double t3827;
  double t3831;
  double t3835;
  double t3841;
  double t3845;
  double t3847;
  double t3850;
  double t3852;
  double t3870;
  double t3871;
  double t3872;
  double t4818;
  double t4823;
  double t4829;
  double t4808;
  double t4809;
  double t3939;
  double t4859;
  double t4861;
  double t4862;
  double t4872;
  double t4873;
  double t4874;
  double t3987;
  double t4050;
  double t4052;
  double t4058;
  double t4062;
  double t4079;
  double t4876;
  double t4111;
  double t4112;
  double t4897;
  double t4132;
  double t4133;
  double t4138;
  double t4194;
  double t4196;
  double t4199;
  double t4257;
  double t4260;
  double t4326;
  double t4335;
  double t4391;
  double t4396;
  double t4407;
  double t4441;
  double t4448;
  double t4451;
  double t4456;
  double t4472;
  double t4494;
  double t4496;
  double t4499;
  double t4506;
  double t5068;
  double t4523;
  double t4528;
  double t5080;
  double t4575;
  double t4581;
  double t4584;
  double t4596;
  double t4605;
  double t4620;
  double t4622;
  double t4626;
  double t4627;
  double t4629;
  double t4631;
  double t4634;
  double t4635;
  double t4643;
  double t4652;
  double t4662;
  double t4688;
  double t4721;
  double t4740;
  double t4741;
  double t4742;
  double t4745;
  double t4757;
  double t5207;
  double t4765;
  double t4770;
  double t5213;
  double t4792;
  double t4793;
  double t4797;
  double t5263;
  double t5266;
  double t5269;
  double t5313;
  double t5314;
  double t5324;
  double t5332;
  double t5335;
  double t5337;
  double t5349;
  double t5353;
  double t5363;
  double t5394;
  double t5400;
  double t5401;
  double t5412;
  double t5416;
  double t5417;
  double t5420;
  double t5431;
  double t5432;
  double t5443;
  double t5424;
  double t5459;
  double t5462;
  double t5467;
  double t5481;
  double t5484;
  double t5485;
  double t5488;
  double t5489;
  double t5490;
  double t5525;
  double t5532;
  double t5580;
  double t5597;
  double t5559;
  double t5681;
  double t5685;
  double t5312;
  double t5325;
  double t5326;
  double t5701;
  double t2931;
  double t2937;
  double t2940;
  double t5815;
  double t5870;
  double t5877;
  double t5281;
  double t5288;
  double t5291;
  double t5295;
  double t5298;
  double t5300;
  double t5307;
  double t3063;
  double t3064;
  double t3068;
  double t5947;
  double t5948;
  double t5952;
  double t5954;
  double t5959;
  double t5963;
  double t5965;
  double t5970;
  double t5977;
  double t5981;
  double t5986;
  double t5962;
  double t5990;
  double t5991;
  double t5992;
  double t6000;
  double t6002;
  double t6004;
  double t5996;
  double t5998;
  double t6017;
  double t6018;
  double t6019;
  double t6022;
  double t6031;
  double t6032;
  double t6040;
  double t6042;
  double t6044;
  double t5521;
  double t5522;
  double t5543;
  double t5545;
  double t5612;
  double t5621;
  double t5622;
  double t6095;
  double t5662;
  double t5664;
  double t5665;
  double t6107;
  double t6112;
  double t6185;
  double t6208;
  double t6212;
  double t6061;
  double t6062;
  double t6063;
  double t5783;
  double t5789;
  double t5796;
  double t6308;
  double t6339;
  t414 = Cos(var1[16]);
  t1829 = Cos(var1[17]);
  t1893 = -1.*t414*t1829;
  t2170 = Sin(var1[16]);
  t2323 = Sin(var1[17]);
  t2326 = -1.*t2170*t2323;
  t2344 = t1893 + t2326;
  t2376 = Cos(var1[15]);
  t378 = Cos(var1[5]);
  t390 = Sin(var1[15]);
  t2437 = Sin(var1[5]);
  t2532 = Cos(var1[3]);
  t2360 = t378*t390*t2344;
  t2471 = t2376*t2344*t2437;
  t2491 = t2360 + t2471;
  t377 = Sin(var1[3]);
  t2534 = Cos(var1[4]);
  t2540 = -1.*t1829*t2170;
  t2542 = t414*t2323;
  t2548 = t2540 + t2542;
  t2555 = t2534*t2548;
  t2564 = Sin(var1[4]);
  t2565 = t2376*t378*t2344;
  t2569 = -1.*t390*t2344*t2437;
  t2570 = t2565 + t2569;
  t2881 = -1.*t2564*t2570;
  t2916 = t2555 + t2881;
  t2952 = t378*t390;
  t2955 = t2376*t2437;
  t2974 = t2952 + t2955;
  t2980 = -1.*t2376*t378;
  t2981 = t390*t2437;
  t2987 = t2980 + t2981;
  t3016 = t378*t390*t2548;
  t3017 = t2376*t2548*t2437;
  t3018 = t3016 + t3017;
  t3023 = t414*t1829;
  t3026 = t2170*t2323;
  t3027 = t3023 + t3026;
  t3031 = t2534*t3027;
  t3032 = t2376*t378*t2548;
  t3034 = -1.*t390*t2548*t2437;
  t3037 = t3032 + t3034;
  t3043 = -1.*t2564*t3037;
  t3045 = t3031 + t3043;
  t3076 = -1.*t2548*t2564;
  t3083 = -1.*t2534*t2570;
  t3084 = t3076 + t3083;
  t3134 = -1.*t1829;
  t3138 = 1. + t3134;
  t3140 = -0.50321*t3138;
  t3141 = -0.19821*t1829;
  t3146 = t3140 + t3141;
  t3168 = -1.*t2376;
  t3169 = 1. + t3168;
  t3176 = -0.15121*t3169;
  t3177 = -1.*t414;
  t3179 = 1. + t3177;
  t3198 = -0.28121*t3179;
  t3204 = t414*t3146;
  t3207 = 0.305*t2170*t2323;
  t3212 = t3198 + t3204 + t3207;
  t3130 = 0.28121*t2170;
  t3156 = t3146*t2170;
  t3158 = -0.305*t414*t2323;
  t3161 = t3130 + t3156 + t3158;
  t3214 = t2376*t3212;
  t3223 = t3176 + t3214;
  t3228 = t378*t3223;
  t3238 = -0.15121*t2376;
  t3242 = 0.15121*t390;
  t3248 = t390*t3212;
  t3251 = t3176 + t3238 + t3242 + t3248;
  t3254 = -1.*t3251*t2437;
  t3256 = t3228 + t3254;
  t3273 = t3161*t2564;
  t3279 = t2534*t3256;
  t3282 = t3273 + t3279;
  t3162 = -1.*t3161*t2564;
  t3264 = -1.*t2534*t3256;
  t3269 = t3162 + t3264;
  t3321 = t2534*t3161;
  t3332 = -1.*t2564*t3256;
  t3338 = t3321 + t3332;
  t3116 = t3027*t2564;
  t3122 = t2534*t3037;
  t3126 = t3116 + t3122;
  t3296 = t378*t3251;
  t3300 = t3223*t2437;
  t3307 = t3296 + t3300;
  t3379 = -1.*t3027*t2564;
  t3381 = -1.*t2534*t3037;
  t3384 = t3379 + t3381;
  t3526 = t2548*t2564;
  t3530 = t2534*t2570;
  t3531 = t3526 + t3530;
  t3818 = -1.*t378*t390*t2344;
  t3820 = -1.*t2376*t2344*t2437;
  t3824 = t3818 + t3820;
  t3310 = -1.*t2987*t3307;
  t3880 = -1.*t378*t3251;
  t3886 = -1.*t3223*t2437;
  t3894 = t3880 + t3886;
  t3411 = t3018*t3307;
  t3975 = -1.*t378*t390*t2548;
  t3980 = -1.*t2376*t2548*t2437;
  t3981 = t3975 + t3980;
  t3312 = -1.*t2534*t2974*t3282;
  t3340 = t2564*t2974*t3338;
  t3347 = t3310 + t3312 + t3340;
  t3903 = -1.*t2974*t3307;
  t3941 = -1.*t2987*t3256;
  t3925 = t2376*t378;
  t3926 = -1.*t390*t2437;
  t3929 = t3925 + t3926;
  t3972 = t3037*t3307;
  t3991 = t3018*t3256;
  t3421 = t3126*t3282;
  t3455 = t3045*t3338;
  t3468 = t3411 + t3421 + t3455;
  t3614 = -1.*t3018*t3307;
  t3675 = t2491*t3307;
  t4399 = -1.*t3037*t3307;
  t4421 = -1.*t3018*t3256;
  t4458 = t2570*t3307;
  t4475 = t2491*t3256;
  t3615 = -1.*t3126*t3282;
  t3620 = -1.*t3045*t3338;
  t3630 = t3614 + t3615 + t3620;
  t3683 = t3531*t3282;
  t3684 = t2916*t3338;
  t3704 = t3675 + t3683 + t3684;
  t3750 = t2987*t3307;
  t3795 = -1.*t2491*t3307;
  t3755 = t2534*t2974*t3282;
  t3764 = -1.*t2564*t2974*t3338;
  t3767 = t3750 + t3755 + t3764;
  t4097 = Power(t2534,2);
  t4109 = Power(t2564,2);
  t4672 = t2974*t3307;
  t4703 = t2987*t3256;
  t4718 = -1.*t2570*t3307;
  t4728 = -1.*t2491*t3256;
  t3805 = -1.*t3531*t3282;
  t3806 = -1.*t2916*t3338;
  t3807 = t3795 + t3805 + t3806;
  t3825 = var2[0]*t2534*t3824;
  t3827 = t377*t2564*t3824;
  t3831 = t2532*t2570;
  t3835 = t3827 + t3831;
  t3841 = var2[1]*t3835;
  t3845 = -1.*t2532*t2564*t3824;
  t3847 = t377*t2570;
  t3850 = t3845 + t3847;
  t3852 = var2[2]*t3850;
  t3870 = -1.*t2974*t3256;
  t3871 = t3310 + t3870;
  t3872 = t3037*t3871;
  t4818 = -0.15121*t390;
  t4823 = -1.*t390*t3212;
  t4829 = t4818 + t4823;
  t4808 = 0.15121*t2376;
  t4809 = t4808 + t3214;
  t3939 = -1.*t3929*t3256;
  t4859 = t378*t4829;
  t4861 = -1.*t4809*t2437;
  t4862 = t4859 + t4861;
  t4872 = t378*t4809;
  t4873 = t4829*t2437;
  t4874 = t4872 + t4873;
  t3987 = t3981*t3256;
  t4050 = t3161*t3027;
  t4052 = t3037*t3256;
  t4058 = t4050 + t3411 + t4052;
  t4062 = t2974*t4058;
  t4079 = t2534*t3981*t3347;
  t4876 = -1.*t2987*t4874;
  t4111 = -1.*t2534*t3929*t3282;
  t4112 = t2564*t3929*t3338;
  t4897 = t3018*t4874;
  t4132 = t2534*t3981*t3282;
  t4133 = -1.*t2564*t3981*t3338;
  t4138 = t2534*t3929*t3468;
  t4194 = var2[0]*t2534*t3929;
  t4196 = t377*t2974;
  t4199 = -1.*t2532*t2564*t3929;
  t4257 = t4196 + t4199;
  t4260 = var2[2]*t4257;
  t4326 = t2532*t2974;
  t4335 = t377*t2564*t3929;
  t4391 = t4326 + t4335;
  t4396 = var2[1]*t4391;
  t4407 = -1.*t3981*t3256;
  t4441 = -1.*t3161*t3027;
  t4448 = -1.*t3037*t3256;
  t4451 = t4441 + t3614 + t4448;
  t4456 = t2570*t4451;
  t4472 = t3824*t3256;
  t4494 = t3161*t2548;
  t4496 = t2570*t3256;
  t4499 = t4494 + t3675 + t4496;
  t4506 = t3037*t4499;
  t5068 = -1.*t3018*t4874;
  t4523 = -1.*t2534*t3981*t3282;
  t4528 = t2564*t3981*t3338;
  t5080 = t2491*t4874;
  t4575 = t2534*t3824*t3282;
  t4581 = -1.*t2564*t3824*t3338;
  t4584 = t2534*t3824*t3630;
  t4596 = t2534*t3981*t3704;
  t4605 = var2[0]*t2534*t3981;
  t4620 = t377*t2564*t3981;
  t4622 = t2532*t3037;
  t4626 = t4620 + t4622;
  t4627 = var2[1]*t4626;
  t4629 = -1.*t2532*t2564*t3981;
  t4631 = t377*t3037;
  t4634 = t4629 + t4631;
  t4635 = var2[2]*t4634;
  t4643 = t2974*t3256;
  t4652 = t3750 + t4643;
  t4662 = t2570*t4652;
  t4688 = t3929*t3256;
  t4721 = -1.*t3824*t3256;
  t4740 = -1.*t3161*t2548;
  t4741 = -1.*t2570*t3256;
  t4742 = t4740 + t3795 + t4741;
  t4745 = t2974*t4742;
  t4757 = t2534*t3824*t3767;
  t5207 = t2987*t4874;
  t4765 = t2534*t3929*t3282;
  t4770 = -1.*t2564*t3929*t3338;
  t5213 = -1.*t2491*t4874;
  t4792 = -1.*t2534*t3824*t3282;
  t4793 = t2564*t3824*t3338;
  t4797 = t2534*t3929*t3807;
  t5263 = t1829*t2170;
  t5266 = -1.*t414*t2323;
  t5269 = t5263 + t5266;
  t5313 = t2376*t378*t5269;
  t5314 = -1.*t390*t5269*t2437;
  t5324 = t5313 + t5314;
  t5332 = t378*t390*t5269;
  t5335 = t2376*t5269*t2437;
  t5337 = t5332 + t5335;
  t5349 = t2534*t2344;
  t5353 = -1.*t2564*t5324;
  t5363 = t5349 + t5353;
  t5394 = -0.28121*t2170;
  t5400 = -1.*t3146*t2170;
  t5401 = 0.305*t414*t2323;
  t5412 = t5394 + t5400 + t5401;
  t5416 = t378*t390*t5412;
  t5417 = t2376*t5412*t2437;
  t5420 = t5416 + t5417;
  t5431 = t2376*t378*t5412;
  t5432 = -1.*t390*t5412*t2437;
  t5443 = t5431 + t5432;
  t5424 = -1.*t2987*t5420;
  t5459 = 0.28121*t414;
  t5462 = t5459 + t3204 + t3207;
  t5467 = t5420*t3018;
  t5481 = t5462*t2564;
  t5484 = t2534*t5443;
  t5485 = t5481 + t5484;
  t5488 = t2534*t5462;
  t5489 = -1.*t2564*t5443;
  t5490 = t5488 + t5489;
  t5525 = t3161*t2344;
  t5532 = t2548*t5462;
  t5580 = Power(t2376,2);
  t5597 = Power(t390,2);
  t5559 = -1.*t5462*t3027;
  t5681 = t5420*t2491;
  t5685 = t5337*t3307;
  t5312 = t2344*t2564;
  t5325 = t2534*t5324;
  t5326 = t5312 + t5325;
  t5701 = -1.*t5420*t3018;
  t2931 = t2532*t2491;
  t2937 = -1.*t377*t2916;
  t2940 = t2931 + t2937;
  t5815 = t2987*t5420;
  t5870 = -1.*t5420*t2491;
  t5877 = -1.*t5337*t3307;
  t5281 = -0.15121*t5269;
  t5288 = -0.15121*t2548;
  t5291 = t5281 + t5288;
  t5295 = var2[15]*t5291;
  t5298 = -1.*t390*t3223;
  t5300 = t2376*t3251;
  t5307 = t5298 + t5300;
  t3063 = t2532*t3018;
  t3064 = -1.*t377*t3045;
  t3068 = t3063 + t3064;
  t5947 = 0.305*t1829*t2170;
  t5948 = t5947 + t3158;
  t5952 = t378*t390*t5948;
  t5954 = t2376*t5948*t2437;
  t5959 = t5952 + t5954;
  t5963 = t2376*t378*t5948;
  t5965 = -1.*t390*t5948*t2437;
  t5970 = t5963 + t5965;
  t5977 = t378*t390*t3027;
  t5981 = t2376*t3027*t2437;
  t5986 = t5977 + t5981;
  t5962 = -1.*t2987*t5959;
  t5990 = -0.305*t414*t1829;
  t5991 = -0.305*t2170*t2323;
  t5992 = t5990 + t5991;
  t6000 = t2376*t378*t3027;
  t6002 = -1.*t390*t3027*t2437;
  t6004 = t6000 + t6002;
  t5996 = t5959*t3018;
  t5998 = t5986*t3307;
  t6017 = t5992*t2564;
  t6018 = t2534*t5970;
  t6019 = t6017 + t6018;
  t6022 = t2534*t5992;
  t6031 = -1.*t2564*t5970;
  t6032 = t6022 + t6031;
  t6040 = t5269*t2564;
  t6042 = t2534*t6004;
  t6044 = t6040 + t6042;
  t5521 = t2344*t3212;
  t5522 = t4494 + t5521;
  t5543 = -1.*t2548*t3212;
  t5545 = t5543 + t4441;
  t5612 = -1.*t2376*t2548*t3223;
  t5621 = -1.*t390*t2548*t3251;
  t5622 = t4441 + t5612 + t5621;
  t6095 = t2548*t5992;
  t5662 = t2376*t2344*t3223;
  t5664 = t390*t2344*t3251;
  t5665 = t4494 + t5662 + t5664;
  t6107 = -1.*t5269*t3161;
  t6112 = -1.*t5992*t3027;
  t6185 = t5959*t2491;
  t6208 = -1.*t5959*t3018;
  t6212 = -1.*t5986*t3307;
  t6061 = t2534*t5269;
  t6062 = -1.*t2564*t6004;
  t6063 = t6061 + t6062;
  t5783 = t390*t3223;
  t5789 = -1.*t2376*t3251;
  t5796 = t5783 + t5789;
  t6308 = t2987*t5959;
  t6339 = -1.*t5959*t2491;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t2532*t2916 - 1.*t2491*t377)*var2[1] + t2940*var2[2];
  p_output1[10]=(t2532*t2564*t2974 - 1.*t2987*t377)*var2[1] + (t2532*t2987 + t2564*t2974*t377)*var2[2];
  p_output1[11]=(-1.*t2532*t3045 - 1.*t3018*t377)*var2[1] + t3068*var2[2];
  p_output1[12]=t2916*var2[0] - 1.*t3084*t377*var2[1] + t2532*t3084*var2[2] + (t3126*(t2564*t2974*t3269 + t2564*t2974*t3282) + t3045*t3347 + t2534*t2974*(t3045*t3269 + t3045*t3282 + t3126*t3338 + t3338*t3384) - 1.*t2564*t2974*t3468)*var2[3];
  p_output1[13]=-1.*t2564*t2974*var2[0] + t2534*t2974*t377*var2[1] - 1.*t2532*t2534*t2974*var2[2] + ((-1.*t3045*t3269 - 1.*t3045*t3282 - 1.*t3126*t3338 - 1.*t3338*t3384)*t3531 + t3126*(t2916*t3269 + t2916*t3282 + t3084*t3338 + t3338*t3531) + t2916*t3630 + t3045*t3704)*var2[3];
  p_output1[14]=t3045*var2[0] - 1.*t3384*t377*var2[1] + t2532*t3384*var2[2] + ((-1.*t2564*t2974*t3269 - 1.*t2564*t2974*t3282)*t3531 + t2534*t2974*(-1.*t2916*t3269 - 1.*t2916*t3282 - 1.*t3084*t3338 - 1.*t3338*t3531) + t2916*t3767 - 1.*t2564*t2974*t3807)*var2[3];
  p_output1[15]=t3825 + t3841 + t3852 + (t4079 + t3126*(t3903 + t3941 - 1.*t2974*t3894*t4097 - 1.*t2974*t3894*t4109 + t4111 + t4112) + t2534*t2974*(-1.*t2564*t3045*t3894 + t2534*t3126*t3894 + t3972 + t3991 + t4132 + t4133) + t4138)*var2[3] + (t3872 + t3018*(-1.*t2974*t3894 + t3903 + t3939 + t3941) + t2987*(t3037*t3894 + t3972 + t3987 + t3991) + t4062)*var2[4];
  p_output1[16]=t4194 + t4260 + t4396 + (t3531*(t2564*t3045*t3894 - 1.*t2534*t3126*t3894 + t4399 + t4421 + t4523 + t4528) + t3126*(-1.*t2564*t2916*t3894 + t2534*t3531*t3894 + t4458 + t4475 + t4575 + t4581) + t4584 + t4596)*var2[3] + (t2491*(-1.*t3037*t3894 + t4399 + t4407 + t4421) + t4456 + t3018*(t2570*t3894 + t4458 + t4472 + t4475) + t4506)*var2[4];
  p_output1[17]=t4605 + t4627 + t4635 + (t4757 + t3531*(t2974*t3894*t4097 + t2974*t3894*t4109 + t4672 + t4703 + t4765 + t4770) + t2534*t2974*(t2564*t2916*t3894 - 1.*t2534*t3531*t3894 + t4718 + t4728 + t4792 + t4793) + t4797)*var2[3] + (t4662 + t2491*(t2974*t3894 + t4672 + t4688 + t4703) + t2987*(-1.*t2570*t3894 + t4718 + t4721 + t4728) + t4745)*var2[4];
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
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=t3825 + t3841 + t3852 + (t4079 + t4138 + t3126*(t3903 + t4111 + t4112 - 1.*t2974*t4097*t4862 - 1.*t2974*t4109*t4862 + t4876) + t2534*t2974*(t3972 + t4132 + t4133 - 1.*t2564*t3045*t4862 + t2534*t3126*t4862 + t4897))*var2[3] + (t3872 + t4062 + t3018*(t3903 + t3939 - 1.*t2974*t4862 + t4876) + t2987*(t3972 + t3987 + t3037*t4862 + t4897))*var2[4] + t3027*(-1.*t2376*t3223 - 1.*t3251*t390 + t2376*t4809 - 1.*t390*t4829)*var2[5];
  p_output1[46]=t4194 + t4260 + t4396 + (t4584 + t4596 + t3531*(t4399 + t4523 + t4528 + t2564*t3045*t4862 - 1.*t2534*t3126*t4862 + t5068) + t3126*(t4458 + t4575 + t4581 - 1.*t2564*t2916*t4862 + t2534*t3531*t4862 + t5080))*var2[3] + (t4456 + t4506 + t2491*(t4399 + t4407 - 1.*t3037*t4862 + t5068) + t3018*(t4458 + t4472 + t2570*t4862 + t5080))*var2[4] + (t3027*(t2344*t2376*t3251 - 1.*t2344*t3223*t390 + t2344*t390*t4809 + t2344*t2376*t4829) + t2548*(-1.*t2376*t2548*t3251 + t2548*t3223*t390 - 1.*t2548*t390*t4809 - 1.*t2376*t2548*t4829))*var2[5];
  p_output1[47]=t4605 + t4627 + t4635 + (t4757 + t4797 + t3531*(t4672 + t4765 + t4770 + t2974*t4097*t4862 + t2974*t4109*t4862 + t5207) + t2534*t2974*(t4718 + t4792 + t4793 + t2564*t2916*t4862 - 1.*t2534*t3531*t4862 + t5213))*var2[3] + (t4662 + t4745 + t2491*(t4672 + t4688 + t2974*t4862 + t5207) + t2987*(t4718 + t4721 - 1.*t2570*t4862 + t5213))*var2[4] + t2548*(t2376*t3223 + t3251*t390 - 1.*t2376*t4809 + t390*t4829)*var2[5];
  p_output1[48]=t5295 + t5326*var2[0] + (t2532*t5337 - 1.*t377*t5363)*var2[1] + (t377*t5337 + t2532*t5363)*var2[2] + (t3347*t3531 + t3126*(t5424 - 1.*t2534*t2974*t5485 + t2564*t2974*t5490) + t2534*t2974*(t3675 + t3683 + t3684 + t5467 + t3126*t5485 + t3045*t5490))*var2[3] + (t2491*t3871 + t3018*(t5424 - 1.*t2974*t5443) + t2987*(t3675 + t4494 + t4496 + t3037*t5443 + t3027*t5462 + t5467))*var2[4] + t2548*t5307*var2[5];
  p_output1[49]=(t3531*t3704 + t3630*t5326 + t3126*(t3282*t5326 + t3338*t5363 + t3531*t5485 + t2916*t5490 + t5681 + t5685) + t3531*(t3795 + t3805 + t3806 - 1.*t3126*t5485 - 1.*t3045*t5490 + t5701))*var2[3] + (t2491*t4499 + t4451*t5337 + t3018*(t3256*t5324 + t2570*t5443 + t5525 + t5532 + t5681 + t5685) + t2491*(t3795 + t4740 + t4741 - 1.*t3037*t5443 + t5559 + t5701))*var2[4] + (t3027*(t2376*t3223*t5269 + t3251*t390*t5269 + t5525 + t5532 + t2344*t5412*t5580 + t2344*t5412*t5597) + t2548*(-1.*t2344*t2376*t3223 - 1.*t2344*t3251*t390 + t4740 + t5559 - 1.*t2548*t5412*t5580 - 1.*t2548*t5412*t5597) + t2344*t5622 + t2548*t5665)*var2[5] + (t2548*t5522 + t3027*(t3212*t5269 + t2344*t5412 + t5525 + t5532) + t2344*t5545 + t2548*(-1.*t2344*t3212 + t4740 - 1.*t2548*t5412 + t5559))*var2[15];
  p_output1[50]=t3531*var2[0] + t2940*var2[1] + (t2532*t2916 + t2491*t377)*var2[2] + (t3767*t5326 + t3531*(t2534*t2974*t5485 - 1.*t2564*t2974*t5490 + t5815) + t2534*t2974*(-1.*t3282*t5326 - 1.*t3338*t5363 - 1.*t3531*t5485 - 1.*t2916*t5490 + t5870 + t5877))*var2[3] + (t4652*t5337 + t2491*(t2974*t5443 + t5815) + t2987*(-1.*t2344*t3161 - 1.*t3256*t5324 - 1.*t2570*t5443 - 1.*t2548*t5462 + t5870 + t5877))*var2[4] + t2344*t5796*var2[5];
  p_output1[51]=t5295 + t3126*var2[0] + t3068*var2[1] + (t2532*t3045 + t3018*t377)*var2[2] + (t3126*(t5962 - 1.*t2534*t2974*t6019 + t2564*t2974*t6032) + t3347*t6044 + t2534*t2974*(t5996 + t5998 + t3126*t6019 + t3045*t6032 + t3282*t6044 + t3338*t6063))*var2[3] + (t3018*(t5962 - 1.*t2974*t5970) + t3871*t5986 + t2987*(t3161*t5269 + t3037*t5970 + t3027*t5992 + t5996 + t5998 + t3256*t6004))*var2[4] + t5269*t5307*var2[5] + (0.28121*t1829 - 0.305*Power(t1829,2) + t1829*t3146)*var2[16];
  p_output1[52]=(t3126*t3630 + t3704*t6044 + t3126*(t3411 + t3421 + t3455 + t3531*t6019 + t2916*t6032 + t6185) + t3531*(-1.*t3126*t6019 - 1.*t3045*t6032 - 1.*t3282*t6044 - 1.*t3338*t6063 + t6208 + t6212))*var2[3] + (t3018*t4451 + t4499*t5986 + t3018*(t3411 + t4050 + t4052 + t2570*t5970 + t6095 + t6185) + t2491*(-1.*t3037*t5970 - 1.*t3256*t6004 + t6107 + t6112 + t6208 + t6212))*var2[4] + (t3027*t5622 + t5269*t5665 + t3027*(t2376*t2548*t3223 + t2548*t3251*t390 + t4050 + t2344*t5580*t5948 + t2344*t5597*t5948 + t6095) + t2548*(-1.*t2376*t3027*t3223 - 1.*t3027*t3251*t390 - 1.*t2548*t5580*t5948 - 1.*t2548*t5597*t5948 + t6107 + t6112))*var2[5] + (t5269*t5522 + t3027*t5545 + t3027*(t2548*t3212 + t4050 + t2344*t5948 + t6095) + t2548*(-1.*t3027*t3212 - 1.*t2548*t5948 + t6107 + t6112))*var2[15];
  p_output1[53]=t6044*var2[0] + (t2532*t5986 - 1.*t377*t6063)*var2[1] + (t377*t5986 + t2532*t6063)*var2[2] + (t3126*t3767 + t3531*(t2534*t2974*t6019 - 1.*t2564*t2974*t6032 + t6308) + t2534*t2974*(t3614 + t3615 + t3620 - 1.*t3531*t6019 - 1.*t2916*t6032 + t6339))*var2[3] + (t3018*t4652 + t2491*(t2974*t5970 + t6308) + t2987*(t3614 + t4441 + t4448 - 1.*t2570*t5970 - 1.*t2548*t5992 + t6339))*var2[4] + t3027*t5796*var2[5] + (-0.28121*t2323 + 0.305*t1829*t2323 - 1.*t2323*t3146)*var2[16];
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

#include "dJh_RrFoot_ParallelStance.hh"

namespace SymFunction
{

void dJh_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
