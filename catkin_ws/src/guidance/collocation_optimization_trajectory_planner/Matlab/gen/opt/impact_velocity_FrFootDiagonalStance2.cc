/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:31:14 GMT+01:00
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
  double t184;
  double t621;
  double t746;
  double t640;
  double t666;
  double t754;
  double t1190;
  double t296;
  double t745;
  double t772;
  double t780;
  double t1043;
  double t1088;
  double t1145;
  double t1205;
  double t1274;
  double t1447;
  double t1526;
  double t1621;
  double t1651;
  double t1691;
  double t1704;
  double t1973;
  double t1980;
  double t2003;
  double t2004;
  double t2065;
  double t2069;
  double t2097;
  double t2192;
  double t2035;
  double t2541;
  double t2551;
  double t2529;
  double t2532;
  double t2557;
  double t2601;
  double t2617;
  double t2632;
  double t2690;
  double t2693;
  double t2720;
  double t2777;
  double t2778;
  double t2795;
  double t2812;
  double t2818;
  double t2838;
  double t2843;
  double t2915;
  double t2918;
  double t2921;
  double t220;
  double t1834;
  double t1841;
  double t1924;
  double t1946;
  double t1970;
  double t2980;
  double t2984;
  double t3003;
  double t1189;
  double t1405;
  double t1518;
  double t1607;
  double t1609;
  double t2029;
  double t2040;
  double t3009;
  double t3011;
  double t3044;
  double t3050;
  double t3053;
  double t2250;
  double t2257;
  double t3065;
  double t3079;
  double t3081;
  double t2451;
  double t2453;
  double t3204;
  double t2951;
  double t2955;
  double t2961;
  double t2964;
  double t2966;
  double t2967;
  double t2975;
  double t2977;
  double t3005;
  double t3036;
  double t3063;
  double t3089;
  double t3098;
  double t3105;
  double t3106;
  double t3119;
  double t3127;
  double t3128;
  double t3129;
  double t3141;
  double t3146;
  double t3156;
  double t3162;
  double t3181;
  double t3184;
  double t3187;
  double t3191;
  double t2925;
  double t2937;
  double t2919;
  double t2922;
  double t3245;
  double t3246;
  double t3250;
  double t3254;
  double t3263;
  double t3273;
  double t3296;
  double t3297;
  double t3313;
  double t3316;
  double t3324;
  double t3326;
  double t3327;
  double t3333;
  double t3342;
  double t3343;
  double t3345;
  double t3346;
  double t3227;
  double t3229;
  double t3233;
  double t3234;
  double t3236;
  double t3449;
  double t3455;
  double t3456;
  double t3459;
  double t3462;
  double t3466;
  double t3467;
  double t3474;
  double t3476;
  double t3488;
  double t3490;
  double t3508;
  double t3511;
  double t3518;
  double t3527;
  double t3538;
  double t3539;
  double t3541;
  double t3544;
  double t3598;
  double t3603;
  double t3608;
  double t3610;
  double t3620;
  double t3624;
  double t3625;
  double t3630;
  double t3632;
  double t3636;
  double t3640;
  double t3643;
  double t3645;
  double t3649;
  double t3651;
  double t3653;
  double t3656;
  double t3660;
  double t3662;
  double t3665;
  double t3669;
  double t3680;
  double t3683;
  double t3689;
  double t3692;
  double t3731;
  double t3732;
  double t3733;
  double t3737;
  double t3738;
  double t3746;
  double t3751;
  double t3752;
  double t3754;
  double t3761;
  double t3767;
  double t3768;
  double t3770;
  double t3774;
  double t3776;
  double t3784;
  double t3787;
  double t3788;
  double t3791;
  double t3792;
  double t3794;
  double t3210;
  double t3215;
  double t3219;
  double t3851;
  double t3854;
  double t3856;
  double t3867;
  double t3869;
  double t3871;
  double t3875;
  double t3878;
  double t3879;
  double t3881;
  double t3886;
  double t3888;
  double t3894;
  double t3900;
  double t3901;
  double t3902;
  double t64;
  double t245;
  double t516;
  double t582;
  double t588;
  double t831;
  double t861;
  double t885;
  double t3978;
  double t3979;
  double t3980;
  double t3983;
  double t3984;
  double t3985;
  double t3987;
  double t3990;
  double t3991;
  double t3992;
  double t3999;
  double t4002;
  double t4004;
  double t4006;
  double t2487;
  double t2509;
  double t2524;
  double t2648;
  double t2673;
  double t2760;
  double t2768;
  double t2776;
  double t4058;
  double t4061;
  double t4062;
  double t4065;
  double t4071;
  double t4072;
  double t4074;
  double t4082;
  double t4098;
  double t4099;
  double t4103;
  double t4157;
  double t4159;
  double t4160;
  double t4165;
  double t4171;
  double t4172;
  double t4179;
  double t4181;
  double t4184;
  double t4187;
  double t4191;
  double t4192;
  double t4193;
  double t4194;
  double t4197;
  double t4198;
  double t4200;
  double t4201;
  double t4247;
  double t4249;
  double t4251;
  double t4254;
  double t4255;
  double t4256;
  double t4258;
  double t4260;
  double t4262;
  double t4264;
  double t4267;
  double t4274;
  double t4276;
  double t4281;
  double t4288;
  double t4295;
  double t4296;
  double t4337;
  double t4340;
  double t4345;
  double t4363;
  double t4367;
  double t4370;
  double t4375;
  double t4377;
  double t4378;
  double t4379;
  double t4381;
  double t4385;
  double t4387;
  double t4389;
  double t4390;
  double t4397;
  double t4440;
  double t4441;
  double t4443;
  double t4446;
  double t4447;
  double t4449;
  double t4450;
  double t4452;
  double t4455;
  double t4458;
  double t4460;
  double t4463;
  double t4464;
  double t4492;
  double t4493;
  double t4494;
  double t4495;
  double t4498;
  double t4502;
  double t4504;
  double t4509;
  double t4511;
  double t4512;
  double t4513;
  double t4112;
  t10 = Cos(var1[10]);
  t184 = Sin(var1[10]);
  t621 = Cos(var1[4]);
  t746 = Cos(var1[9]);
  t640 = Cos(var1[5]);
  t666 = Sin(var1[9]);
  t754 = Sin(var1[5]);
  t1190 = Cos(var1[11]);
  t296 = Sin(var1[4]);
  t745 = -1.*t621*t640*t666;
  t772 = -1.*t746*t621*t754;
  t780 = t745 + t772;
  t1043 = t746*t621*t640;
  t1088 = -1.*t621*t666*t754;
  t1145 = t1043 + t1088;
  t1205 = -1.*t1190;
  t1274 = 1. + t1205;
  t1447 = -1. + t1190;
  t1526 = Sin(var1[11]);
  t1621 = -1.*t184*t296;
  t1651 = 4.e-6*t184*t780;
  t1691 = -1.*t10*t1145;
  t1704 = t1621 + t1651 + t1691;
  t1973 = 4.e-6*t184*t296;
  t1980 = -1.6e-11*t184*t780;
  t2003 = 4.e-6*t10*t1145;
  t2004 = t1973 + t1980 + t2003;
  t2065 = t10*t296;
  t2069 = -4.e-6*t10*t780;
  t2097 = -1.000000000016*t184*t1145;
  t2192 = t2065 + t2069 + t2097;
  t2035 = -0.0398890000006382*t1526;
  t2541 = -1.*t10;
  t2551 = 1. + t2541;
  t2529 = t184*t296;
  t2532 = -4.e-6*t184*t780;
  t2557 = -1.000000000016*t2551;
  t2601 = 1. + t2557;
  t2617 = t2601*t1145;
  t2632 = t2529 + t2532 + t2617;
  t2690 = 4.e-6*t2551*t780;
  t2693 = -1.*t184*t1145;
  t2720 = t2065 + t2690 + t2693;
  t2777 = 4.e-6*t2551*t296;
  t2778 = -1. + t10;
  t2795 = 1.6e-11*t2778;
  t2812 = 1. + t2795;
  t2818 = t2812*t780;
  t2838 = 4.e-6*t184*t1145;
  t2843 = t2777 + t2818 + t2838;
  t2915 = -1.*t746;
  t2918 = 1. + t2915;
  t2921 = -0.15121*t666;
  t220 = -0.03874900000062*t184;
  t1834 = -1.26e-8*var1[11];
  t1841 = 2.552896e-18*t1274;
  t1924 = -1.59556e-7*t1447;
  t1946 = 2.012600000032e-6*t1526;
  t1970 = t1834 + t1841 + t1924 + t1946;
  t2980 = -1.*t746*t621*t640;
  t2984 = t621*t666*t754;
  t3003 = t2980 + t2984;
  t1189 = -5.04e-14*var1[11];
  t1405 = -0.039889*t1274;
  t1518 = 6.38224e-13*t1447;
  t1607 = -0.503150000008*t1526;
  t1609 = t1189 + t1405 + t1518 + t1607;
  t2029 = 0.50315000001605*t1274;
  t2040 = t2029 + t2035;
  t3009 = t2812*t3003;
  t3011 = t1651 + t3009;
  t3044 = -1.*t184*t780;
  t3050 = 4.e-6*t2551*t3003;
  t3053 = t3044 + t3050;
  t2250 = -1.000000000016*t1274;
  t2257 = 1. + t2250;
  t3065 = t2601*t780;
  t3079 = -4.e-6*t184*t3003;
  t3081 = t3065 + t3079;
  t2451 = 1.6e-11*t1447;
  t2453 = 1. + t2451;
  t3204 = -0.15121*t746;
  t2951 = 0.281210000008499*t2551;
  t2955 = t2951 + t220;
  t2961 = t2955*t780;
  t2964 = -1.2484e-7*var1[10];
  t2966 = 2.479936e-18*t2551;
  t2967 = -1.54996e-7*t2778;
  t2975 = 1.124840000016e-6*t184;
  t2977 = t2964 + t2966 + t2967 + t2975;
  t3005 = t2977*t3003;
  t3036 = t1970*t3011;
  t3063 = t1609*t3053;
  t3089 = t2040*t3081;
  t3098 = -4.e-6*t1526*t3011;
  t3105 = t1526*t3053;
  t3106 = t2257*t3081;
  t3119 = t3098 + t3105 + t3106;
  t3127 = 0.803147*t3119;
  t3128 = 4.e-6*t1274*t3011;
  t3129 = t1190*t3053;
  t3141 = -1.*t1526*t3081;
  t3146 = t3128 + t3129 + t3141;
  t3156 = -0.041195*t3146;
  t3162 = t2453*t3011;
  t3181 = 4.e-6*t1274*t3053;
  t3184 = 4.e-6*t1526*t3081;
  t3187 = t3162 + t3181 + t3184;
  t3191 = -0.14871*t3187;
  t2925 = 0.15121*t2918;
  t2937 = t2925 + t2921;
  t2919 = -0.15121*t2918;
  t2922 = t2919 + t2921;
  t3245 = t640*t666*t296;
  t3246 = t746*t296*t754;
  t3250 = t3245 + t3246;
  t3254 = -1.*t746*t640*t296;
  t3263 = t666*t296*t754;
  t3273 = t3254 + t3263;
  t3296 = t621*t184;
  t3297 = -4.e-6*t184*t3250;
  t3313 = t2601*t3273;
  t3316 = t3296 + t3297 + t3313;
  t3324 = t10*t621;
  t3326 = 4.e-6*t2551*t3250;
  t3327 = -1.*t184*t3273;
  t3333 = t3324 + t3326 + t3327;
  t3342 = 4.e-6*t2551*t621;
  t3343 = t2812*t3250;
  t3345 = 4.e-6*t184*t3273;
  t3346 = t3342 + t3343 + t3345;
  t3227 = -4.9936e-13*var1[10];
  t3229 = -0.038749*t2551;
  t3233 = 6.19984e-13*t2778;
  t3234 = -0.281210000004*t184;
  t3236 = t3227 + t3229 + t3233 + t3234;
  t3449 = Sin(var1[3]);
  t3455 = -1.*t621*t640*t666*t3449;
  t3456 = -1.*t746*t621*t3449*t754;
  t3459 = t3455 + t3456;
  t3462 = t746*t621*t640*t3449;
  t3466 = -1.*t621*t666*t3449*t754;
  t3467 = t3462 + t3466;
  t3474 = t184*t3449*t296;
  t3476 = -4.e-6*t184*t3459;
  t3488 = t2601*t3467;
  t3490 = t3474 + t3476 + t3488;
  t3508 = t10*t3449*t296;
  t3511 = 4.e-6*t2551*t3459;
  t3518 = -1.*t184*t3467;
  t3527 = t3508 + t3511 + t3518;
  t3538 = 4.e-6*t2551*t3449*t296;
  t3539 = t2812*t3459;
  t3541 = 4.e-6*t184*t3467;
  t3544 = t3538 + t3539 + t3541;
  t3598 = Cos(var1[3]);
  t3603 = t3598*t640*t296;
  t3608 = -1.*t3449*t754;
  t3610 = t3603 + t3608;
  t3620 = -1.*t640*t3449;
  t3624 = -1.*t3598*t296*t754;
  t3625 = t3620 + t3624;
  t3630 = -1.*t666*t3610;
  t3632 = t746*t3625;
  t3636 = t3630 + t3632;
  t3640 = t746*t3610;
  t3643 = t666*t3625;
  t3645 = t3640 + t3643;
  t3649 = -1.*t3598*t621*t184;
  t3651 = -4.e-6*t184*t3636;
  t3653 = t2601*t3645;
  t3656 = t3649 + t3651 + t3653;
  t3660 = -1.*t10*t3598*t621;
  t3662 = 4.e-6*t2551*t3636;
  t3665 = -1.*t184*t3645;
  t3669 = t3660 + t3662 + t3665;
  t3680 = -4.e-6*t2551*t3598*t621;
  t3683 = t2812*t3636;
  t3689 = 4.e-6*t184*t3645;
  t3692 = t3680 + t3683 + t3689;
  t3731 = -1.*t640*t3449*t296;
  t3732 = -1.*t3598*t754;
  t3733 = t3731 + t3732;
  t3737 = t3598*t640;
  t3738 = -1.*t3449*t296*t754;
  t3746 = t3737 + t3738;
  t3751 = t666*t3733;
  t3752 = t746*t3746;
  t3754 = t3751 + t3752;
  t3761 = t746*t3733;
  t3767 = -1.*t666*t3746;
  t3768 = t3761 + t3767;
  t3770 = 4.e-6*t184*t3754;
  t3774 = t2812*t3768;
  t3776 = t3770 + t3774;
  t3784 = -1.*t184*t3754;
  t3787 = 4.e-6*t2551*t3768;
  t3788 = t3784 + t3787;
  t3791 = t2601*t3754;
  t3792 = -4.e-6*t184*t3768;
  t3794 = t3791 + t3792;
  t3210 = 0.15121*t666;
  t3215 = t3204 + t3210;
  t3219 = t3204 + t2921;
  t3851 = t640*t3449*t296;
  t3854 = t3598*t754;
  t3856 = t3851 + t3854;
  t3867 = -1.*t666*t3856;
  t3869 = t3867 + t3752;
  t3871 = -1.*t746*t3856;
  t3875 = t3871 + t3767;
  t3878 = 4.e-6*t184*t3869;
  t3879 = t2812*t3875;
  t3881 = t3878 + t3879;
  t3886 = -1.*t184*t3869;
  t3888 = 4.e-6*t2551*t3875;
  t3894 = t3886 + t3888;
  t3900 = t2601*t3869;
  t3901 = -4.e-6*t184*t3875;
  t3902 = t3900 + t3901;
  t64 = -0.281210000004*t10;
  t245 = -4.9936e-13 + t64 + t220;
  t516 = 1.124840000016e-6*t10;
  t582 = 1.5499600000248e-7*t184;
  t588 = -1.2484e-7 + t516 + t582;
  t831 = -0.03874900000062*t10;
  t861 = 0.281210000008499*t184;
  t885 = t831 + t861;
  t3978 = t746*t3856;
  t3979 = t666*t3746;
  t3980 = t3978 + t3979;
  t3983 = t621*t184*t3449;
  t3984 = -1.*t10*t3980;
  t3985 = t3983 + t3878 + t3984;
  t3987 = -4.e-6*t621*t184*t3449;
  t3990 = -1.6e-11*t184*t3869;
  t3991 = 4.e-6*t10*t3980;
  t3992 = t3987 + t3990 + t3991;
  t3999 = -1.*t10*t621*t3449;
  t4002 = -4.e-6*t10*t3869;
  t4004 = -1.000000000016*t184*t3980;
  t4006 = t3999 + t4002 + t4004;
  t2487 = -0.0398890000006382*t1190;
  t2509 = 0.50315000001605*t1526;
  t2524 = t2487 + t2509;
  t2648 = -0.503150000008*t1190;
  t2673 = -5.04e-14 + t2648 + t2035;
  t2760 = 2.012600000032e-6*t1190;
  t2768 = 1.59556000002553e-7*t1526;
  t2776 = -1.26e-8 + t2760 + t2768;
  t4058 = -1.*t621*t184*t3449;
  t4061 = -4.e-6*t184*t3869;
  t4062 = t2601*t3980;
  t4065 = t4058 + t4061 + t4062;
  t4071 = 4.e-6*t2551*t3869;
  t4072 = -1.*t184*t3980;
  t4074 = t3999 + t4071 + t4072;
  t4082 = -4.e-6*t2551*t621*t3449;
  t4098 = t2812*t3869;
  t4099 = 4.e-6*t184*t3980;
  t4103 = t4082 + t4098 + t4099;
  t4157 = t3598*t621*t640*t666;
  t4159 = t746*t3598*t621*t754;
  t4160 = t4157 + t4159;
  t4165 = -1.*t746*t3598*t621*t640;
  t4171 = t3598*t621*t666*t754;
  t4172 = t4165 + t4171;
  t4179 = -1.*t3598*t184*t296;
  t4181 = -4.e-6*t184*t4160;
  t4184 = t2601*t4172;
  t4187 = t4179 + t4181 + t4184;
  t4191 = -1.*t10*t3598*t296;
  t4192 = 4.e-6*t2551*t4160;
  t4193 = -1.*t184*t4172;
  t4194 = t4191 + t4192 + t4193;
  t4197 = -4.e-6*t2551*t3598*t296;
  t4198 = t2812*t4160;
  t4200 = 4.e-6*t184*t4172;
  t4201 = t4197 + t4198 + t4200;
  t4247 = t640*t3449;
  t4249 = t3598*t296*t754;
  t4251 = t4247 + t4249;
  t4254 = t666*t3610;
  t4255 = t746*t4251;
  t4256 = t4254 + t4255;
  t4258 = -1.*t666*t4251;
  t4260 = t3640 + t4258;
  t4262 = 4.e-6*t184*t4256;
  t4264 = t2812*t4260;
  t4267 = t4262 + t4264;
  t4274 = -1.*t184*t4256;
  t4276 = 4.e-6*t2551*t4260;
  t4281 = t4274 + t4276;
  t4288 = t2601*t4256;
  t4295 = -4.e-6*t184*t4260;
  t4296 = t4288 + t4295;
  t4337 = -1.*t3598*t640*t296;
  t4340 = t3449*t754;
  t4345 = t4337 + t4340;
  t4363 = -1.*t666*t4345;
  t4367 = t4363 + t4255;
  t4370 = -1.*t746*t4345;
  t4375 = t4370 + t4258;
  t4377 = 4.e-6*t184*t4367;
  t4378 = t2812*t4375;
  t4379 = t4377 + t4378;
  t4381 = -1.*t184*t4367;
  t4385 = 4.e-6*t2551*t4375;
  t4387 = t4381 + t4385;
  t4389 = t2601*t4367;
  t4390 = -4.e-6*t184*t4375;
  t4397 = t4389 + t4390;
  t4440 = t746*t4345;
  t4441 = t666*t4251;
  t4443 = t4440 + t4441;
  t4446 = -1.*t10*t4443;
  t4447 = t3649 + t4377 + t4446;
  t4449 = 4.e-6*t3598*t621*t184;
  t4450 = -1.6e-11*t184*t4367;
  t4452 = 4.e-6*t10*t4443;
  t4455 = t4449 + t4450 + t4452;
  t4458 = t10*t3598*t621;
  t4460 = -4.e-6*t10*t4367;
  t4463 = -1.000000000016*t184*t4443;
  t4464 = t4458 + t4460 + t4463;
  t4492 = t3598*t621*t184;
  t4493 = -4.e-6*t184*t4367;
  t4494 = t2601*t4443;
  t4495 = t4492 + t4493 + t4494;
  t4498 = 4.e-6*t2551*t4367;
  t4502 = -1.*t184*t4443;
  t4504 = t4458 + t4498 + t4502;
  t4509 = 4.e-6*t2551*t3598*t621;
  t4511 = t2812*t4367;
  t4512 = 4.e-6*t184*t4443;
  t4513 = t4509 + t4511 + t4512;
  t4112 = t1190*t4074;
  p_output1[0]=var2[0] + (t2977*t3250 + t2955*t3273 + t2040*t3316 + t1609*t3333 + t1970*t3346 - 0.041195*(-1.*t1526*t3316 + t1190*t3333 + 4.e-6*t1274*t3346) + 0.803147*(t2257*t3316 + t1526*t3333 - 4.e-6*t1526*t3346) - 0.14871*(4.e-6*t1526*t3316 + 4.e-6*t1274*t3333 + t2453*t3346) + t3236*t621 - 1.*t2937*t296*t640 + t2922*t296*t754)*var2[4] + (t2961 + t3005 + t3036 + t3063 + t3089 + t3127 + t3156 + t3191 - 1.*t2922*t621*t640 - 1.*t2937*t621*t754)*var2[5] + (t2961 + t3005 + t3036 + t3063 + t3089 + t3127 + t3156 + t3191 + t3215*t621*t640 - 1.*t3219*t621*t754)*var2[9] + (t1609*t1704 + t1970*t2004 + t2040*t2192 - 0.041195*(t1190*t1704 + 4.e-6*t1274*t2004 - 1.*t1526*t2192) + 0.803147*(t1526*t1704 - 4.e-6*t1526*t2004 + t2192*t2257) - 0.14871*(4.e-6*t1274*t1704 + 4.e-6*t1526*t2192 + t2004*t2453) + t245*t296 + t588*t780 + t1145*t885)*var2[10] + (t2524*t2632 + t2673*t2720 + t2776*t2843 + 0.803147*(-1.000000000016*t1526*t2632 + t1190*t2720 - 4.e-6*t1190*t2843) - 0.14871*(4.e-6*t1190*t2632 + 4.e-6*t1526*t2720 - 1.6e-11*t1526*t2843) - 0.041195*(-1.*t1190*t2632 - 1.*t1526*t2720 + 4.e-6*t1526*t2843))*var2[11];
  p_output1[1]=var2[1] + (t2937*t3610 + t2922*t3625 + t2977*t3636 + t2955*t3645 + t2040*t3656 + t1609*t3669 + t1970*t3692 - 0.041195*(-1.*t1526*t3656 + t1190*t3669 + 4.e-6*t1274*t3692) + 0.803147*(t2257*t3656 + t1526*t3669 - 4.e-6*t1526*t3692) - 0.14871*(4.e-6*t1526*t3656 + 4.e-6*t1274*t3669 + t2453*t3692) - 1.*t3236*t3598*t621)*var2[3] + (t296*t3236*t3449 + t2977*t3459 + t2955*t3467 + t2040*t3490 + t1609*t3527 + t1970*t3544 - 0.041195*(-1.*t1526*t3490 + t1190*t3527 + 4.e-6*t1274*t3544) + 0.803147*(t2257*t3490 + t1526*t3527 - 4.e-6*t1526*t3544) - 0.14871*(4.e-6*t1526*t3490 + 4.e-6*t1274*t3527 + t2453*t3544) + t2937*t3449*t621*t640 - 1.*t2922*t3449*t621*t754)*var2[4] + (t2922*t3733 + t2937*t3746 + t2955*t3754 + t2977*t3768 + t1970*t3776 + t1609*t3788 + t2040*t3794 - 0.041195*(4.e-6*t1274*t3776 + t1190*t3788 - 1.*t1526*t3794) - 0.14871*(t2453*t3776 + 4.e-6*t1274*t3788 + 4.e-6*t1526*t3794) + 0.803147*(-4.e-6*t1526*t3776 + t1526*t3788 + t2257*t3794))*var2[5] + (t3219*t3746 + t3215*t3856 + t2955*t3869 + t2977*t3875 + t1970*t3881 + t1609*t3894 + t2040*t3902 - 0.041195*(4.e-6*t1274*t3881 + t1190*t3894 - 1.*t1526*t3902) - 0.14871*(t2453*t3881 + 4.e-6*t1274*t3894 + 4.e-6*t1526*t3902) + 0.803147*(-4.e-6*t1526*t3881 + t1526*t3894 + t2257*t3902))*var2[9] + (t1609*t3985 + t1970*t3992 + t2040*t4006 - 0.041195*(t1190*t3985 + 4.e-6*t1274*t3992 - 1.*t1526*t4006) - 0.14871*(4.e-6*t1274*t3985 + t2453*t3992 + 4.e-6*t1526*t4006) + 0.803147*(t1526*t3985 - 4.e-6*t1526*t3992 + t2257*t4006) + t3869*t588 - 1.*t245*t3449*t621 + t3980*t885)*var2[10] + (t2524*t4065 + t2673*t4074 + t2776*t4103 - 0.14871*(4.e-6*t1190*t4065 + 4.e-6*t1526*t4074 - 1.6e-11*t1526*t4103) - 0.041195*(-1.*t1190*t4065 - 1.*t1526*t4074 + 4.e-6*t1526*t4103) + 0.803147*(-1.000000000016*t1526*t4065 - 4.e-6*t1190*t4103 + t4112))*var2[11];
  p_output1[2]=var2[2] + (t2922*t3746 + t2937*t3856 + t2977*t3869 + t2955*t3980 + t2040*t4065 + t1609*t4074 + t1970*t4103 + 0.803147*(t2257*t4065 + t1526*t4074 - 4.e-6*t1526*t4103) - 0.14871*(4.e-6*t1526*t4065 + 4.e-6*t1274*t4074 + t2453*t4103) - 0.041195*(-1.*t1526*t4065 + 4.e-6*t1274*t4103 + t4112) - 1.*t3236*t3449*t621)*var2[3] + (-1.*t296*t3236*t3598 + t2977*t4160 + t2955*t4172 + t2040*t4187 + t1609*t4194 + t1970*t4201 - 0.041195*(-1.*t1526*t4187 + t1190*t4194 + 4.e-6*t1274*t4201) + 0.803147*(t2257*t4187 + t1526*t4194 - 4.e-6*t1526*t4201) - 0.14871*(4.e-6*t1526*t4187 + 4.e-6*t1274*t4194 + t2453*t4201) - 1.*t2937*t3598*t621*t640 + t2922*t3598*t621*t754)*var2[4] + (t2922*t3610 + t2937*t4251 + t2955*t4256 + t2977*t4260 + t1970*t4267 + t1609*t4281 + t2040*t4296 - 0.041195*(4.e-6*t1274*t4267 + t1190*t4281 - 1.*t1526*t4296) - 0.14871*(t2453*t4267 + 4.e-6*t1274*t4281 + 4.e-6*t1526*t4296) + 0.803147*(-4.e-6*t1526*t4267 + t1526*t4281 + t2257*t4296))*var2[5] + (t3219*t4251 + t3215*t4345 + t2955*t4367 + t2977*t4375 + t1970*t4379 + t1609*t4387 + t2040*t4397 - 0.041195*(4.e-6*t1274*t4379 + t1190*t4387 - 1.*t1526*t4397) - 0.14871*(t2453*t4379 + 4.e-6*t1274*t4387 + 4.e-6*t1526*t4397) + 0.803147*(-4.e-6*t1526*t4379 + t1526*t4387 + t2257*t4397))*var2[9] + (t1609*t4447 + t1970*t4455 + t2040*t4464 - 0.041195*(t1190*t4447 + 4.e-6*t1274*t4455 - 1.*t1526*t4464) - 0.14871*(4.e-6*t1274*t4447 + t2453*t4455 + 4.e-6*t1526*t4464) + 0.803147*(t1526*t4447 - 4.e-6*t1526*t4455 + t2257*t4464) + t4367*t588 + t245*t3598*t621 + t4443*t885)*var2[10] + (t2524*t4495 + t2673*t4504 + t2776*t4513 + 0.803147*(-1.000000000016*t1526*t4495 + t1190*t4504 - 4.e-6*t1190*t4513) - 0.14871*(4.e-6*t1190*t4495 + 4.e-6*t1526*t4504 - 1.6e-11*t1526*t4513) - 0.041195*(-1.*t1190*t4495 - 1.*t1526*t4504 + 4.e-6*t1526*t4513))*var2[11];
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

namespace DiagonalStance2
{

void impact_velocity_FrFootDiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
