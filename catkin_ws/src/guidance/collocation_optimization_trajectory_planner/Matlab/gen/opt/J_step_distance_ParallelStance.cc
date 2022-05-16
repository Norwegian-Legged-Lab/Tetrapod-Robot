/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:30:50 GMT+01:00
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
  double t514;
  double t752;
  double t753;
  double t985;
  double t242;
  double t1913;
  double t1915;
  double t1936;
  double t1969;
  double t2137;
  double t2261;
  double t2143;
  double t2173;
  double t2217;
  double t2250;
  double t2259;
  double t2270;
  double t2282;
  double t2284;
  double t2289;
  double t2304;
  double t2406;
  double t894;
  double t2071;
  double t2090;
  double t1331;
  double t2449;
  double t2628;
  double t1950;
  double t2933;
  double t2935;
  double t2942;
  double t2961;
  double t2770;
  double t2790;
  double t2524;
  double t2571;
  double t2599;
  double t2808;
  double t2809;
  double t2834;
  double t2976;
  double t2432;
  double t3009;
  double t2464;
  double t3061;
  double t2955;
  double t3087;
  double t3089;
  double t1097;
  double t2992;
  double t3192;
  double t3198;
  double t3207;
  double t3214;
  double t2865;
  double t2731;
  double t2743;
  double t2749;
  double t2900;
  double t2909;
  double t2922;
  double t3229;
  double t2095;
  double t3246;
  double t1991;
  double t3211;
  double t3316;
  double t3319;
  double t3334;
  double t2659;
  double t3256;
  double t2638;
  double t2995;
  double t2999;
  double t3012;
  double t3016;
  double t3021;
  double t3032;
  double t3041;
  double t3050;
  double t3143;
  double t3091;
  double t3100;
  double t3104;
  double t3110;
  double t3111;
  double t3112;
  double t3119;
  double t3123;
  double t3163;
  double t3165;
  double t3166;
  double t3168;
  double t3169;
  double t3175;
  double t3176;
  double t3179;
  double t2980;
  double t3408;
  double t2962;
  double t3444;
  double t3070;
  double t3417;
  double t3418;
  double t3065;
  double t3356;
  double t3252;
  double t3254;
  double t3257;
  double t3262;
  double t3266;
  double t3277;
  double t3284;
  double t3292;
  double t3364;
  double t3331;
  double t3332;
  double t3333;
  double t3335;
  double t3338;
  double t3339;
  double t3340;
  double t3343;
  double t3372;
  double t3376;
  double t3378;
  double t3385;
  double t3388;
  double t3389;
  double t3392;
  double t3396;
  double t3305;
  double t3509;
  double t3323;
  double t3523;
  double t3500;
  double t3220;
  double t2350;
  double t2387;
  double t2414;
  double t2416;
  double t2240;
  double t2260;
  double t2313;
  double t2335;
  double t2756;
  double t2761;
  double t2773;
  double t2785;
  double t2792;
  double t2803;
  double t2806;
  double t2857;
  double t2864;
  double t2870;
  double t2882;
  double t2886;
  double t2895;
  double t2896;
  double t2421;
  double t2428;
  double t2433;
  double t2435;
  double t2467;
  double t2499;
  double t2502;
  double t2626;
  double t2627;
  double t2641;
  double t2657;
  double t2692;
  double t2723;
  double t2725;
  double t3055;
  double t3060;
  double t3068;
  double t3069;
  double t3075;
  double t3081;
  double t3082;
  double t3583;
  double t3589;
  double t3592;
  double t3611;
  double t3614;
  double t3616;
  double t2927;
  double t2943;
  double t2963;
  double t2966;
  double t2981;
  double t2984;
  double t2985;
  double t3133;
  double t3138;
  double t3146;
  double t3148;
  double t3152;
  double t3155;
  double t3158;
  double t3354;
  double t3355;
  double t3357;
  double t3361;
  double t3366;
  double t3367;
  double t3370;
  double t3600;
  double t3602;
  double t3606;
  double t3621;
  double t3622;
  double t3625;
  double t3301;
  double t3303;
  double t3312;
  double t3315;
  double t3324;
  double t3326;
  double t3329;
  double t3187;
  double t3209;
  double t3221;
  double t3224;
  double t3237;
  double t3238;
  double t3240;
  double t3420;
  double t3628;
  double t3633;
  double t3640;
  double t3409;
  double t3652;
  double t3653;
  double t3654;
  double t3426;
  double t3429;
  double t3663;
  double t3664;
  double t3670;
  double t3445;
  double t3436;
  double t3440;
  double t3453;
  double t3462;
  double t3467;
  double t3460;
  double t3472;
  double t3552;
  double t3674;
  double t3675;
  double t3677;
  double t3548;
  double t3683;
  double t3690;
  double t3696;
  double t3542;
  double t3544;
  double t3719;
  double t3720;
  double t3726;
  double t3534;
  double t3528;
  double t3531;
  double t3526;
  double t3513;
  double t3515;
  double t3510;
  double t3503;
  double t3801;
  double t3594;
  double t3618;
  double t3641;
  double t3655;
  double t3672;
  double t3728;
  double t3732;
  double t3734;
  double t3736;
  double t3738;
  double t3740;
  double t3743;
  double t3744;
  double t3745;
  double t3746;
  double t3749;
  double t3750;
  double t3752;
  double t3753;
  double t3762;
  double t3816;
  double t3839;
  double t3852;
  double t3884;
  double t3885;
  double t3891;
  double t3825;
  double t3911;
  double t3871;
  double t3895;
  double t3897;
  double t3898;
  double t3899;
  double t3901;
  double t3902;
  double t3907;
  double t3908;
  double t3910;
  double t3912;
  double t3914;
  double t3915;
  double t3924;
  double t3930;
  double t3931;
  double t3932;
  double t3933;
  double t3937;
  double t3974;
  double t4017;
  double t3991;
  double t3998;
  double t4002;
  double t4004;
  double t4028;
  double t4029;
  double t4036;
  double t4037;
  double t4010;
  double t4052;
  double t4062;
  double t4063;
  double t4065;
  double t3977;
  double t4088;
  double t4044;
  double t3609;
  double t3627;
  double t3679;
  double t3710;
  double t3727;
  double t3766;
  double t3768;
  double t3769;
  double t3770;
  double t3777;
  double t3782;
  double t3783;
  double t3786;
  double t3787;
  double t3790;
  double t3791;
  double t3792;
  double t3793;
  double t3795;
  double t3796;
  double t4152;
  double t4169;
  double t4174;
  double t4211;
  double t4212;
  double t4215;
  double t4144;
  double t4249;
  double t4199;
  double t4221;
  double t4223;
  double t4225;
  double t4227;
  double t4229;
  double t4231;
  double t4238;
  double t4239;
  double t4243;
  double t4250;
  double t4254;
  double t4255;
  double t4257;
  double t4258;
  double t4261;
  double t4262;
  double t4263;
  double t4264;
  double t4314;
  double t4344;
  double t4346;
  double t4349;
  double t4350;
  double t4389;
  double t4390;
  double t4395;
  double t4397;
  double t4317;
  double t4425;
  double t4428;
  double t4429;
  double t4431;
  double t4445;
  double t4366;
  double t4418;
  double t4405;
  double t468;
  double t889;
  double t1177;
  double t1184;
  double t1707;
  double t1799;
  double t1895;
  double t4488;
  double t1908;
  double t1939;
  double t2059;
  double t2066;
  double t2097;
  double t2098;
  double t2104;
  double t4494;
  double t4495;
  double t4496;
  double t4498;
  double t4502;
  double t4503;
  double t4504;
  double t4507;
  double t4509;
  double t4511;
  double t4523;
  double t4524;
  double t4525;
  double t4513;
  double t4517;
  double t4521;
  double t4531;
  double t4532;
  double t4533;
  double t4535;
  double t4536;
  double t4538;
  double t4539;
  double t4544;
  double t4545;
  double t4546;
  double t4549;
  double t4552;
  double t4553;
  double t4554;
  double t4555;
  double t4558;
  double t4562;
  double t4563;
  double t4564;
  double t4573;
  double t4575;
  double t4576;
  double t4578;
  double t4581;
  double t4584;
  double t4585;
  double t4588;
  double t4662;
  double t4663;
  double t4665;
  double t4687;
  double t4688;
  double t4689;
  double t4670;
  double t4673;
  double t4679;
  double t4692;
  double t4693;
  double t4694;
  double t4697;
  double t4698;
  double t4699;
  double t4700;
  double t4703;
  double t4704;
  double t4705;
  double t4707;
  double t4711;
  double t4714;
  double t4715;
  double t4717;
  double t4719;
  double t4720;
  double t4721;
  double t4722;
  double t4726;
  double t4728;
  double t4731;
  double t4732;
  double t4735;
  double t4736;
  double t4737;
  double t4740;
  double t4798;
  double t4799;
  double t4801;
  double t4814;
  double t4815;
  double t4816;
  double t4820;
  double t4822;
  double t4824;
  double t4842;
  double t4844;
  double t4848;
  double t4833;
  double t4836;
  double t4837;
  double t4854;
  double t4859;
  double t4860;
  double t4866;
  double t4869;
  double t4870;
  double t4874;
  double t4876;
  double t4878;
  double t4882;
  double t4883;
  double t4884;
  double t4894;
  double t4895;
  double t4897;
  double t4901;
  double t4903;
  double t4904;
  double t4908;
  double t4909;
  double t4912;
  double t3803;
  double t3804;
  double t3806;
  double t4995;
  double t4996;
  double t4997;
  double t5000;
  double t5001;
  double t5003;
  double t5004;
  double t5007;
  double t5009;
  double t5010;
  double t5012;
  double t5013;
  double t5019;
  double t5022;
  double t5024;
  double t5025;
  double t3819;
  double t3822;
  double t3827;
  double t3828;
  double t3831;
  double t3833;
  double t3845;
  double t3850;
  double t3854;
  double t3856;
  double t3859;
  double t3862;
  double t3869;
  double t3870;
  double t3873;
  double t3874;
  double t3878;
  double t3881;
  double t5059;
  double t5060;
  double t5061;
  double t5064;
  double t5065;
  double t5066;
  double t5067;
  double t5069;
  double t5071;
  double t5074;
  double t5075;
  double t5077;
  double t5078;
  double t5079;
  double t5080;
  double t3975;
  double t3976;
  double t3978;
  double t3979;
  double t3980;
  double t3983;
  double t4011;
  double t4014;
  double t4020;
  double t4021;
  double t4026;
  double t4027;
  double t4040;
  double t4043;
  double t4045;
  double t4046;
  double t4047;
  double t4051;
  double t4067;
  double t5111;
  double t5114;
  double t5116;
  double t5118;
  double t5124;
  double t5126;
  double t5127;
  double t5129;
  double t4070;
  double t5136;
  double t5137;
  double t5140;
  double t5145;
  double t4084;
  double t4089;
  double t4100;
  double t4104;
  double t4129;
  double t4132;
  double t4138;
  double t4140;
  double t5189;
  double t5192;
  double t5197;
  double t5200;
  double t5208;
  double t5213;
  double t5214;
  double t5220;
  double t5222;
  double t5225;
  double t5227;
  double t5228;
  double t5230;
  double t4149;
  double t4151;
  double t4159;
  double t4161;
  double t4163;
  double t4164;
  double t4171;
  double t4173;
  double t4179;
  double t4181;
  double t4182;
  double t4185;
  double t4194;
  double t4196;
  double t4200;
  double t4201;
  double t4207;
  double t4210;
  double t5270;
  double t5273;
  double t5274;
  double t5276;
  double t5280;
  double t5284;
  double t5286;
  double t5289;
  double t5290;
  double t5291;
  double t5299;
  double t5301;
  double t5303;
  double t5305;
  double t5307;
  double t4315;
  double t4316;
  double t4318;
  double t4324;
  double t4329;
  double t4333;
  double t4367;
  double t4369;
  double t4372;
  double t4375;
  double t4379;
  double t4384;
  double t4414;
  double t4416;
  double t4420;
  double t4421;
  double t4422;
  double t4423;
  double t5354;
  double t5355;
  double t5356;
  double t5357;
  double t4448;
  double t5361;
  double t5362;
  double t5365;
  double t5367;
  double t4452;
  double t5370;
  double t5372;
  double t5377;
  double t5379;
  double t4464;
  double t4468;
  double t4476;
  double t4478;
  t514 = Cos(var1[13]);
  t752 = -1.*t514;
  t753 = 1. + t752;
  t985 = Sin(var1[13]);
  t242 = Cos(var1[4]);
  t1913 = Cos(var1[16]);
  t1915 = -1.*t1913;
  t1936 = 1. + t1915;
  t1969 = Sin(var1[16]);
  t2137 = Cos(var1[5]);
  t2261 = Sin(var1[4]);
  t2143 = Cos(var1[12]);
  t2173 = -1.*t2143;
  t2217 = 1. + t2173;
  t2250 = Sin(var1[12]);
  t2259 = 0.15121*t2250;
  t2270 = Cos(var1[15]);
  t2282 = -1.*t2270;
  t2284 = 1. + t2282;
  t2289 = -0.15121*t2284;
  t2304 = Sin(var1[15]);
  t2406 = Sin(var1[5]);
  t894 = 4.e-6*t753;
  t2071 = -1. + t1913;
  t2090 = 4.e-6*t2071;
  t1331 = -2.8e-11*t753;
  t2449 = 7.e-6*t753;
  t2628 = 7.e-6*t1936;
  t1950 = 2.8e-11*t1936;
  t2933 = Cos(var1[14]);
  t2935 = -1.*t2933;
  t2942 = 1. + t2935;
  t2961 = Sin(var1[14]);
  t2770 = -1.*t985;
  t2790 = -4.e-6*t985;
  t2524 = t2137*t2250*t2261;
  t2571 = t2143*t2261*t2406;
  t2599 = t2524 + t2571;
  t2808 = -1.*t2143*t2137*t2261;
  t2809 = t2250*t2261*t2406;
  t2834 = t2808 + t2809;
  t2976 = 7.e-6*t2942;
  t2432 = -7.e-6*t985;
  t3009 = -7.e-6*t753;
  t2464 = 4.e-6*t985;
  t3061 = 4.e-6*t2942;
  t2955 = -2.8e-11*t2942;
  t3087 = -1. + t514;
  t3089 = 4.e-6*t3087;
  t1097 = 7.e-6*t985;
  t2992 = 2.8e-11*t753;
  t3192 = Cos(var1[17]);
  t3198 = -1.*t3192;
  t3207 = 1. + t3198;
  t3214 = Sin(var1[17]);
  t2865 = -4.e-6*t1969;
  t2731 = t2137*t2304*t2261;
  t2743 = t2270*t2261*t2406;
  t2749 = t2731 + t2743;
  t2900 = -1.*t2270*t2137*t2261;
  t2909 = t2304*t2261*t2406;
  t2922 = t2900 + t2909;
  t3229 = 2.8e-11*t3207;
  t2095 = -7.e-6*t1969;
  t3246 = -2.8e-11*t1936;
  t1991 = -1.*t1969;
  t3211 = 7.e-6*t3207;
  t3316 = -1. + t3192;
  t3319 = 4.e-6*t3316;
  t3334 = 4.e-6*t1936;
  t2659 = 7.e-6*t1969;
  t3256 = -7.e-6*t1936;
  t2638 = 4.e-6*t1969;
  t2995 = t2992 + t2770;
  t2999 = t242*t2995;
  t3012 = t3009 + t2790;
  t3016 = t3012*t2599;
  t3021 = -1.000000000016*t753;
  t3032 = 1. + t3021;
  t3041 = t3032*t2834;
  t3050 = t2999 + t3016 + t3041;
  t3143 = 7.e-6*t2961;
  t3091 = t3089 + t2432;
  t3100 = t242*t3091;
  t3104 = -6.5e-11*t753;
  t3110 = 1. + t3104;
  t3111 = t3110*t2599;
  t3112 = t3009 + t2464;
  t3119 = t3112*t2834;
  t3123 = t3100 + t3111 + t3119;
  t3163 = -1.000000000049*t753;
  t3165 = 1. + t3163;
  t3166 = t3165*t242;
  t3168 = t3089 + t1097;
  t3169 = t3168*t2599;
  t3175 = t2992 + t985;
  t3176 = t3175*t2834;
  t3179 = t3166 + t3169 + t3176;
  t2980 = -4.e-6*t2961;
  t3408 = 2.8e-11*t2942;
  t2962 = -1.*t2961;
  t3444 = -7.e-6*t2942;
  t3070 = 4.e-6*t2961;
  t3417 = -1. + t2933;
  t3418 = 4.e-6*t3417;
  t3065 = -7.e-6*t2961;
  t3356 = 4.e-6*t3214;
  t3252 = t3246 + t1969;
  t3254 = t242*t3252;
  t3257 = t3256 + t2865;
  t3262 = t3257*t2749;
  t3266 = -1.000000000016*t1936;
  t3277 = 1. + t3266;
  t3284 = t3277*t2922;
  t3292 = t3254 + t3262 + t3284;
  t3364 = 7.e-6*t3214;
  t3331 = -1.000000000049*t1936;
  t3332 = 1. + t3331;
  t3333 = t3332*t242;
  t3335 = t3334 + t2095;
  t3338 = t3335*t2749;
  t3339 = t3246 + t1991;
  t3340 = t3339*t2922;
  t3343 = t3333 + t3338 + t3340;
  t3372 = t3334 + t2659;
  t3376 = t242*t3372;
  t3378 = -6.5e-11*t1936;
  t3385 = 1. + t3378;
  t3388 = t3385*t2749;
  t3389 = t3256 + t2638;
  t3392 = t3389*t2922;
  t3396 = t3376 + t3388 + t3392;
  t3305 = -1.*t3214;
  t3509 = 4.e-6*t3207;
  t3323 = -7.e-6*t3214;
  t3523 = -2.8e-11*t3207;
  t3500 = -7.e-6*t3207;
  t3220 = -4.e-6*t3214;
  t2350 = 0.15121*t2217;
  t2387 = t2350 + t2259;
  t2414 = 0.15121*t2304;
  t2416 = t2289 + t2414;
  t2240 = -0.15121*t2217;
  t2260 = t2240 + t2259;
  t2313 = -0.15121*t2304;
  t2335 = t2289 + t2313;
  t2756 = 1.0248489999999998e-12*var1[13];
  t2761 = -0.28120900000849935*t753;
  t2773 = t1331 + t2770;
  t2785 = -0.038748999993*t2773;
  t2792 = t2449 + t2790;
  t2803 = -2.123459e-6*t2792;
  t2806 = t2756 + t2761 + t2785 + t2803;
  t2857 = -2.7726089999999997e-12*var1[16];
  t2864 = -0.2812110000084994*t1936;
  t2870 = t2628 + t2865;
  t2882 = -1.8134809999999998e-6*t2870;
  t2886 = t1950 + t1969;
  t2895 = -0.038749000006999997*t2886;
  t2896 = t2857 + t2864 + t2882 + t2895;
  t2421 = -1.4640699999999997e-7*var1[13];
  t2428 = -1.38024835e-16*t753;
  t2433 = t894 + t2432;
  t2435 = -0.038748999993*t2433;
  t2467 = t2449 + t2464;
  t2499 = -0.281209000004*t2467;
  t2502 = t2421 + t2428 + t2435 + t2499;
  t2626 = 3.9608699999999997e-7*var1[16];
  t2627 = -1.1787626499999999e-16*t1936;
  t2641 = t2628 + t2638;
  t2657 = -0.281211000004*t2641;
  t2692 = t2090 + t2659;
  t2723 = -0.038749000006999997*t2692;
  t2725 = t2626 + t2627 + t2657 + t2723;
  t3055 = -2.598649999999999e-7*var1[14];
  t3060 = -2.3905277499999995e-16*t2942;
  t3068 = t3061 + t3065;
  t3069 = -0.038922999986*t3068;
  t3075 = t2976 + t3070;
  t3081 = -0.503149000008*t3075;
  t3082 = t3055 + t3060 + t3069 + t3081;
  t3583 = -1.*t242*t2137*t2250;
  t3589 = -1.*t2143*t242*t2406;
  t3592 = t3583 + t3589;
  t3611 = -1.*t2143*t242*t2137;
  t3614 = t242*t2250*t2406;
  t3616 = t3611 + t3614;
  t2927 = 1.8190549999999993e-12*var1[14];
  t2943 = -0.5031490000160505*t2942;
  t2963 = t2955 + t2962;
  t2966 = -0.038922999986*t2963;
  t2981 = t2976 + t2980;
  t2984 = -3.6777349999999994e-6*t2981;
  t2985 = t2927 + t2943 + t2966 + t2984;
  t3133 = 1.0394599999999997e-12*var1[14];
  t3138 = -0.03892299998790722*t2942;
  t3146 = t3061 + t3143;
  t3148 = -3.6777349999999994e-6*t3146;
  t3152 = t2955 + t2961;
  t3155 = -0.503149000008*t3152;
  t3158 = t3133 + t3138 + t3148 + t3155;
  t3354 = 2.826290000000002e-7*var1[17];
  t3355 = -2.18904205e-16*t3207;
  t3357 = t3211 + t3356;
  t3361 = -0.5031510000080001*t3357;
  t3366 = t3319 + t3364;
  t3367 = -0.038575000014*t3366;
  t3370 = t3354 + t3355 + t3361 + t3367;
  t3600 = -1.*t242*t2137*t2304;
  t3602 = -1.*t2270*t242*t2406;
  t3606 = t3600 + t3602;
  t3621 = -1.*t2270*t242*t2137;
  t3622 = t242*t2304*t2406;
  t3625 = t3621 + t3622;
  t3301 = 1.1305160000000008e-12*var1[17];
  t3303 = -0.03857500001589017*t3207;
  t3312 = t3229 + t3305;
  t3315 = -0.5031510000080001*t3312;
  t3324 = t3319 + t3323;
  t3326 = -3.367757e-6*t3324;
  t3329 = t3301 + t3303 + t3315 + t3326;
  t3187 = -1.9784030000000015e-12*var1[17];
  t3209 = -0.5031510000160505*t3207;
  t3221 = t3211 + t3220;
  t3224 = -3.367757e-6*t3221;
  t3237 = t3229 + t3214;
  t3238 = -0.038575000014*t3237;
  t3240 = t3187 + t3209 + t3224 + t3238;
  t3420 = t3418 + t3143;
  t3628 = t3112*t3592;
  t3633 = t3110*t3616;
  t3640 = t3628 + t3633;
  t3409 = t3408 + t2961;
  t3652 = t3032*t3592;
  t3653 = t3012*t3616;
  t3654 = t3652 + t3653;
  t3426 = -1.000000000049*t2942;
  t3429 = 1. + t3426;
  t3663 = t3175*t3592;
  t3664 = t3168*t3616;
  t3670 = t3663 + t3664;
  t3445 = t3444 + t2980;
  t3436 = -1.000000000016*t2942;
  t3440 = 1. + t3436;
  t3453 = t3408 + t2962;
  t3462 = -6.5e-11*t2942;
  t3467 = 1. + t3462;
  t3460 = t3444 + t3070;
  t3472 = t3418 + t3065;
  t3552 = t3500 + t3220;
  t3674 = t3389*t3606;
  t3675 = t3385*t3625;
  t3677 = t3674 + t3675;
  t3548 = t3523 + t3214;
  t3683 = t3339*t3606;
  t3690 = t3335*t3625;
  t3696 = t3683 + t3690;
  t3542 = -1.000000000016*t3207;
  t3544 = 1. + t3542;
  t3719 = t3277*t3606;
  t3720 = t3257*t3625;
  t3726 = t3719 + t3720;
  t3534 = t3509 + t3323;
  t3528 = -1.000000000049*t3207;
  t3531 = 1. + t3528;
  t3526 = t3523 + t3305;
  t3513 = -6.5e-11*t3207;
  t3515 = 1. + t3513;
  t3510 = t3509 + t3364;
  t3503 = t3500 + t3356;
  t3801 = 0.15121*t2143;
  t3594 = -1.*t2806*t3592;
  t3618 = -1.*t2502*t3616;
  t3641 = -1.*t3082*t3640;
  t3655 = -1.*t2985*t3654;
  t3672 = -1.*t3158*t3670;
  t3728 = t3420*t3640;
  t3732 = t3409*t3654;
  t3734 = t3429*t3670;
  t3736 = t3728 + t3732 + t3734;
  t3738 = 0.038924*t3736;
  t3740 = t3445*t3640;
  t3743 = t3440*t3654;
  t3744 = t3453*t3670;
  t3745 = t3740 + t3743 + t3744;
  t3746 = 0.80315*t3745;
  t3749 = t3467*t3640;
  t3750 = t3460*t3654;
  t3752 = t3472*t3670;
  t3753 = t3749 + t3750 + t3752;
  t3762 = -0.148705*t3753;
  t3816 = -2.8e-11*t985;
  t3839 = -7.e-6*t514;
  t3852 = 4.e-6*t514;
  t3884 = t2143*t242*t2137;
  t3885 = -1.*t242*t2250*t2406;
  t3891 = t3884 + t3885;
  t3825 = 7.e-6*t514;
  t3911 = 2.8e-11*t985;
  t3871 = -4.e-6*t514;
  t3895 = t3839 + t2790;
  t3897 = t3895*t2261;
  t3898 = -6.5e-11*t985*t3592;
  t3899 = t3852 + t2432;
  t3901 = t3899*t3891;
  t3902 = t3897 + t3898 + t3901;
  t3907 = -1.000000000049*t985*t2261;
  t3908 = t3825 + t2790;
  t3910 = t3908*t3592;
  t3912 = t514 + t3911;
  t3914 = t3912*t3891;
  t3915 = t3907 + t3910 + t3914;
  t3924 = t752 + t3911;
  t3930 = t3924*t2261;
  t3931 = t3871 + t2432;
  t3932 = t3931*t3592;
  t3933 = -1.000000000016*t985*t3891;
  t3937 = t3930 + t3932 + t3933;
  t3974 = -2.8e-11*t2961;
  t4017 = 4.e-6*t2933;
  t3991 = t2995*t2261;
  t3998 = t3012*t3592;
  t4002 = t3032*t3891;
  t4004 = t3991 + t3998 + t4002;
  t4028 = t3091*t2261;
  t4029 = t3110*t3592;
  t4036 = t3112*t3891;
  t4037 = t4028 + t4029 + t4036;
  t4010 = -7.e-6*t2933;
  t4052 = t3165*t2261;
  t4062 = t3168*t3592;
  t4063 = t3175*t3891;
  t4065 = t4052 + t4062 + t4063;
  t3977 = -4.e-6*t2933;
  t4088 = 2.8e-11*t2961;
  t4044 = 7.e-6*t2933;
  t3609 = t2896*t3606;
  t3627 = t2725*t3625;
  t3679 = t3370*t3677;
  t3710 = t3329*t3696;
  t3727 = t3240*t3726;
  t3766 = t3552*t3677;
  t3768 = t3548*t3696;
  t3769 = t3544*t3726;
  t3770 = t3766 + t3768 + t3769;
  t3777 = -0.80315*t3770;
  t3782 = t3534*t3677;
  t3783 = t3531*t3696;
  t3786 = t3526*t3726;
  t3787 = t3782 + t3783 + t3786;
  t3790 = -0.038576*t3787;
  t3791 = t3515*t3677;
  t3792 = t3510*t3696;
  t3793 = t3503*t3726;
  t3795 = t3791 + t3792 + t3793;
  t3796 = -0.148715*t3795;
  t4152 = 2.8e-11*t1969;
  t4169 = 7.e-6*t1913;
  t4174 = 4.e-6*t1913;
  t4211 = t2270*t242*t2137;
  t4212 = -1.*t242*t2304*t2406;
  t4215 = t4211 + t4212;
  t4144 = -7.e-6*t1913;
  t4249 = -2.8e-11*t1969;
  t4199 = -4.e-6*t1913;
  t4221 = t4169 + t2638;
  t4223 = t4221*t2261;
  t4225 = -6.5e-11*t1969*t3606;
  t4227 = t4174 + t2095;
  t4229 = t4227*t4215;
  t4231 = t4223 + t4225 + t4229;
  t4238 = -1.000000000049*t1969*t2261;
  t4239 = t4144 + t2638;
  t4243 = t4239*t3606;
  t4250 = t1915 + t4249;
  t4254 = t4250*t4215;
  t4255 = t4238 + t4243 + t4254;
  t4257 = t1913 + t4249;
  t4258 = t4257*t2261;
  t4261 = t4199 + t2095;
  t4262 = t4261*t3606;
  t4263 = -1.000000000016*t1969*t4215;
  t4264 = t4258 + t4262 + t4263;
  t4314 = 2.8e-11*t3214;
  t4344 = t3252*t2261;
  t4346 = t3257*t3606;
  t4349 = t3277*t4215;
  t4350 = t4344 + t4346 + t4349;
  t4389 = t3332*t2261;
  t4390 = t3335*t3606;
  t4395 = t3339*t4215;
  t4397 = t4389 + t4390 + t4395;
  t4317 = -4.e-6*t3192;
  t4425 = t3372*t2261;
  t4428 = t3385*t3606;
  t4429 = t3389*t4215;
  t4431 = t4425 + t4428 + t4429;
  t4445 = -2.8e-11*t3214;
  t4366 = -7.e-6*t3192;
  t4418 = 4.e-6*t3192;
  t4405 = 7.e-6*t3192;
  t468 = 5.856279999999999e-13*var1[13];
  t889 = -0.0387489999948987*t753;
  t1177 = t894 + t1097;
  t1184 = -2.123459e-6*t1177;
  t1707 = t1331 + t985;
  t1799 = -0.281209000004*t1707;
  t1895 = t468 + t889 + t1184 + t1799;
  t4488 = Cos(var1[3]);
  t1908 = 1.5843479999999999e-12*var1[16];
  t1939 = -0.03874900000889869*t1936;
  t2059 = t1950 + t1991;
  t2066 = -0.281211000004*t2059;
  t2097 = t2090 + t2095;
  t2098 = -1.8134809999999998e-6*t2097;
  t2104 = t1908 + t1939 + t2066 + t2098;
  t4494 = t4488*t2137*t2261;
  t4495 = Sin(var1[3]);
  t4496 = -1.*t4495*t2406;
  t4498 = t4494 + t4496;
  t4502 = -1.*t2137*t4495;
  t4503 = -1.*t4488*t2261*t2406;
  t4504 = t4502 + t4503;
  t4507 = -1.*t2250*t4498;
  t4509 = t2143*t4504;
  t4511 = t4507 + t4509;
  t4523 = t2143*t4498;
  t4524 = t2250*t4504;
  t4525 = t4523 + t4524;
  t4513 = -1.*t2304*t4498;
  t4517 = t2270*t4504;
  t4521 = t4513 + t4517;
  t4531 = t2270*t4498;
  t4532 = t2304*t4504;
  t4533 = t4531 + t4532;
  t4535 = -1.*t4488*t242*t2995;
  t4536 = t3012*t4511;
  t4538 = t3032*t4525;
  t4539 = t4535 + t4536 + t4538;
  t4544 = -1.*t4488*t242*t3091;
  t4545 = t3110*t4511;
  t4546 = t3112*t4525;
  t4549 = t4544 + t4545 + t4546;
  t4552 = -1.*t3165*t4488*t242;
  t4553 = t3168*t4511;
  t4554 = t3175*t4525;
  t4555 = t4552 + t4553 + t4554;
  t4558 = -1.*t4488*t242*t3252;
  t4562 = t3257*t4521;
  t4563 = t3277*t4533;
  t4564 = t4558 + t4562 + t4563;
  t4573 = -1.*t3332*t4488*t242;
  t4575 = t3335*t4521;
  t4576 = t3339*t4533;
  t4578 = t4573 + t4575 + t4576;
  t4581 = -1.*t4488*t242*t3372;
  t4584 = t3385*t4521;
  t4585 = t3389*t4533;
  t4588 = t4581 + t4584 + t4585;
  t4662 = -1.*t242*t2137*t2250*t4495;
  t4663 = -1.*t2143*t242*t4495*t2406;
  t4665 = t4662 + t4663;
  t4687 = t2143*t242*t2137*t4495;
  t4688 = -1.*t242*t2250*t4495*t2406;
  t4689 = t4687 + t4688;
  t4670 = -1.*t242*t2137*t2304*t4495;
  t4673 = -1.*t2270*t242*t4495*t2406;
  t4679 = t4670 + t4673;
  t4692 = t2270*t242*t2137*t4495;
  t4693 = -1.*t242*t2304*t4495*t2406;
  t4694 = t4692 + t4693;
  t4697 = t2995*t4495*t2261;
  t4698 = t3012*t4665;
  t4699 = t3032*t4689;
  t4700 = t4697 + t4698 + t4699;
  t4703 = t3091*t4495*t2261;
  t4704 = t3110*t4665;
  t4705 = t3112*t4689;
  t4707 = t4703 + t4704 + t4705;
  t4711 = t3165*t4495*t2261;
  t4714 = t3168*t4665;
  t4715 = t3175*t4689;
  t4717 = t4711 + t4714 + t4715;
  t4719 = t3252*t4495*t2261;
  t4720 = t3257*t4679;
  t4721 = t3277*t4694;
  t4722 = t4719 + t4720 + t4721;
  t4726 = t3332*t4495*t2261;
  t4728 = t3335*t4679;
  t4731 = t3339*t4694;
  t4732 = t4726 + t4728 + t4731;
  t4735 = t3372*t4495*t2261;
  t4736 = t3385*t4679;
  t4737 = t3389*t4694;
  t4740 = t4735 + t4736 + t4737;
  t4798 = -1.*t2137*t4495*t2261;
  t4799 = -1.*t4488*t2406;
  t4801 = t4798 + t4799;
  t4814 = t4488*t2137;
  t4815 = -1.*t4495*t2261*t2406;
  t4816 = t4814 + t4815;
  t4820 = t2250*t4801;
  t4822 = t2143*t4816;
  t4824 = t4820 + t4822;
  t4842 = t2143*t4801;
  t4844 = -1.*t2250*t4816;
  t4848 = t4842 + t4844;
  t4833 = t2304*t4801;
  t4836 = t2270*t4816;
  t4837 = t4833 + t4836;
  t4854 = t2270*t4801;
  t4859 = -1.*t2304*t4816;
  t4860 = t4854 + t4859;
  t4866 = t3112*t4824;
  t4869 = t3110*t4848;
  t4870 = t4866 + t4869;
  t4874 = t3032*t4824;
  t4876 = t3012*t4848;
  t4878 = t4874 + t4876;
  t4882 = t3175*t4824;
  t4883 = t3168*t4848;
  t4884 = t4882 + t4883;
  t4894 = t3389*t4837;
  t4895 = t3385*t4860;
  t4897 = t4894 + t4895;
  t4901 = t3339*t4837;
  t4903 = t3335*t4860;
  t4904 = t4901 + t4903;
  t4908 = t3277*t4837;
  t4909 = t3257*t4860;
  t4912 = t4908 + t4909;
  t3803 = -0.15121*t2250;
  t3804 = t3801 + t3803;
  t3806 = t3801 + t2259;
  t4995 = t2137*t4495*t2261;
  t4996 = t4488*t2406;
  t4997 = t4995 + t4996;
  t5000 = -1.*t2250*t4997;
  t5001 = t5000 + t4822;
  t5003 = -1.*t2143*t4997;
  t5004 = t5003 + t4844;
  t5007 = t3112*t5001;
  t5009 = t3110*t5004;
  t5010 = t5007 + t5009;
  t5012 = t3032*t5001;
  t5013 = t3012*t5004;
  t5019 = t5012 + t5013;
  t5022 = t3175*t5001;
  t5024 = t3168*t5004;
  t5025 = t5022 + t5024;
  t3819 = t514 + t3816;
  t3822 = -0.281209000004*t3819;
  t3827 = t3825 + t2464;
  t3828 = -2.123459e-6*t3827;
  t3831 = -0.0387489999948987*t985;
  t3833 = 5.856279999999999e-13 + t3822 + t3828 + t3831;
  t3845 = t3839 + t2464;
  t3850 = -0.038748999993*t3845;
  t3854 = t3852 + t1097;
  t3856 = -0.281209000004*t3854;
  t3859 = -1.38024835e-16*t985;
  t3862 = -1.4640699999999997e-7 + t3850 + t3856 + t3859;
  t3869 = t752 + t3816;
  t3870 = -0.038748999993*t3869;
  t3873 = t3871 + t1097;
  t3874 = -2.123459e-6*t3873;
  t3878 = -0.28120900000849935*t985;
  t3881 = 1.0248489999999998e-12 + t3870 + t3874 + t3878;
  t5059 = t2143*t4997;
  t5060 = t2250*t4816;
  t5061 = t5059 + t5060;
  t5064 = -1.*t242*t3895*t4495;
  t5065 = -6.5e-11*t985*t5001;
  t5066 = t3899*t5061;
  t5067 = t5064 + t5065 + t5066;
  t5069 = 1.000000000049*t242*t985*t4495;
  t5071 = t3908*t5001;
  t5074 = t3912*t5061;
  t5075 = t5069 + t5071 + t5074;
  t5077 = -1.*t242*t3924*t4495;
  t5078 = t3931*t5001;
  t5079 = -1.000000000016*t985*t5061;
  t5080 = t5077 + t5078 + t5079;
  t3975 = t2935 + t3974;
  t3976 = -0.038922999986*t3975;
  t3978 = t3977 + t3143;
  t3979 = -3.6777349999999994e-6*t3978;
  t3980 = -0.5031490000160505*t2961;
  t3983 = 1.8190549999999993e-12 + t3976 + t3979 + t3980;
  t4011 = t4010 + t3070;
  t4014 = -0.038922999986*t4011;
  t4020 = t4017 + t3143;
  t4021 = -0.503149000008*t4020;
  t4026 = -2.3905277499999995e-16*t2961;
  t4027 = -2.598649999999999e-7 + t4014 + t4021 + t4026;
  t4040 = t2933 + t3974;
  t4043 = -0.503149000008*t4040;
  t4045 = t4044 + t3070;
  t4046 = -3.6777349999999994e-6*t4045;
  t4047 = -0.03892299998790722*t2961;
  t4051 = 1.0394599999999997e-12 + t4043 + t4046 + t4047;
  t4067 = t4017 + t3065;
  t5111 = -1.*t242*t2995*t4495;
  t5114 = t3012*t5001;
  t5116 = t3032*t5061;
  t5118 = t5111 + t5114 + t5116;
  t5124 = -1.*t242*t3091*t4495;
  t5126 = t3110*t5001;
  t5127 = t3112*t5061;
  t5129 = t5124 + t5126 + t5127;
  t4070 = t4010 + t2980;
  t5136 = -1.*t3165*t242*t4495;
  t5137 = t3168*t5001;
  t5140 = t3175*t5061;
  t5145 = t5136 + t5137 + t5140;
  t4084 = t3977 + t3065;
  t4089 = t2935 + t4088;
  t4100 = t2933 + t4088;
  t4104 = t4044 + t2980;
  t4129 = -0.15121*t2270;
  t4132 = t4129 + t2313;
  t4138 = 0.15121*t2270;
  t4140 = t4138 + t2313;
  t5189 = -1.*t2304*t4997;
  t5192 = t5189 + t4836;
  t5197 = -1.*t2270*t4997;
  t5200 = t5197 + t4859;
  t5208 = t3389*t5192;
  t5213 = t3385*t5200;
  t5214 = t5208 + t5213;
  t5220 = t3339*t5192;
  t5222 = t3335*t5200;
  t5225 = t5220 + t5222;
  t5227 = t3277*t5192;
  t5228 = t3257*t5200;
  t5230 = t5227 + t5228;
  t4149 = t4144 + t2865;
  t4151 = -1.8134809999999998e-6*t4149;
  t4159 = t1915 + t4152;
  t4161 = -0.281211000004*t4159;
  t4163 = -0.03874900000889869*t1969;
  t4164 = 1.5843479999999999e-12 + t4151 + t4161 + t4163;
  t4171 = t4169 + t2865;
  t4173 = -0.038749000006999997*t4171;
  t4179 = t4174 + t2659;
  t4181 = -0.281211000004*t4179;
  t4182 = -1.1787626499999999e-16*t1969;
  t4185 = 3.9608699999999997e-7 + t4173 + t4181 + t4182;
  t4194 = t1913 + t4152;
  t4196 = -0.038749000006999997*t4194;
  t4200 = t4199 + t2659;
  t4201 = -1.8134809999999998e-6*t4200;
  t4207 = -0.2812110000084994*t1969;
  t4210 = -2.7726089999999997e-12 + t4196 + t4201 + t4207;
  t5270 = t2270*t4997;
  t5273 = t2304*t4816;
  t5274 = t5270 + t5273;
  t5276 = -1.*t242*t4221*t4495;
  t5280 = -6.5e-11*t1969*t5192;
  t5284 = t4227*t5274;
  t5286 = t5276 + t5280 + t5284;
  t5289 = 1.000000000049*t242*t1969*t4495;
  t5290 = t4239*t5192;
  t5291 = t4250*t5274;
  t5299 = t5289 + t5290 + t5291;
  t5301 = -1.*t242*t4257*t4495;
  t5303 = t4261*t5192;
  t5305 = -1.000000000016*t1969*t5274;
  t5307 = t5301 + t5303 + t5305;
  t4315 = t3192 + t4314;
  t4316 = -0.038575000014*t4315;
  t4318 = t4317 + t3364;
  t4324 = -3.367757e-6*t4318;
  t4329 = -0.5031510000160505*t3214;
  t4333 = -1.9784030000000015e-12 + t4316 + t4324 + t4329;
  t4367 = t4366 + t3220;
  t4369 = -3.367757e-6*t4367;
  t4372 = t3198 + t4314;
  t4375 = -0.5031510000080001*t4372;
  t4379 = -0.03857500001589017*t3214;
  t4384 = 1.1305160000000008e-12 + t4369 + t4375 + t4379;
  t4414 = t4405 + t3220;
  t4416 = -0.038575000014*t4414;
  t4420 = t4418 + t3364;
  t4421 = -0.5031510000080001*t4420;
  t4422 = -2.18904205e-16*t3214;
  t4423 = 2.826290000000002e-7 + t4416 + t4421 + t4422;
  t5354 = -1.*t242*t3252*t4495;
  t5355 = t3257*t5192;
  t5356 = t3277*t5274;
  t5357 = t5354 + t5355 + t5356;
  t4448 = t3192 + t4445;
  t5361 = -1.*t3332*t242*t4495;
  t5362 = t3335*t5192;
  t5365 = t3339*t5274;
  t5367 = t5361 + t5362 + t5365;
  t4452 = t4317 + t3323;
  t5370 = -1.*t242*t3372*t4495;
  t5372 = t3385*t5192;
  t5377 = t3389*t5274;
  t5379 = t5370 + t5372 + t5377;
  t4464 = t3198 + t4445;
  t4468 = t4366 + t3356;
  t4476 = t4418 + t3323;
  t4478 = t4405 + t3356;
  p_output1[0]=t2137*t2260*t2261 - 1.*t2137*t2261*t2335 - 1.*t2261*t2387*t2406 + t2261*t2406*t2416 - 1.*t1895*t242 + t2104*t242 - 1.*t2502*t2599 + t2725*t2749 - 1.*t2806*t2834 + t2896*t2922 - 1.*t2985*t3050 - 1.*t3082*t3123 - 1.*t3158*t3179 + t3240*t3292 + t3329*t3343 + t3370*t3396 + 0.038924*(t3050*t3409 + t3123*t3420 + t3179*t3429) + 0.80315*(t3050*t3440 + t3123*t3445 + t3179*t3453) - 0.148705*(t3050*t3460 + t3123*t3467 + t3179*t3472) - 0.148715*(t3292*t3503 + t3343*t3510 + t3396*t3515) - 0.038576*(t3292*t3526 + t3343*t3531 + t3396*t3534) - 0.80315*(t3292*t3544 + t3343*t3548 + t3396*t3552);
  p_output1[1]=t2137*t2387*t242 + t2260*t2406*t242 - 1.*t2335*t2406*t242 - 1.*t2137*t2416*t242 + t3594 + t3609 + t3618 + t3627 + t3641 + t3655 + t3672 + t3679 + t3710 + t3727 + t3738 + t3746 + t3762 + t3777 + t3790 + t3796;
  p_output1[2]=t3594 + t3618 + t3641 + t3655 + t3672 + t3738 + t3746 + t3762 - 1.*t2137*t242*t3804 + t2406*t242*t3806;
  p_output1[3]=-1.*t2261*t3833 - 1.*t3592*t3862 - 1.*t3881*t3891 - 1.*t3082*t3902 - 1.*t3158*t3915 - 1.*t2985*t3937 + 0.038924*(t3420*t3902 + t3429*t3915 + t3409*t3937) + 0.80315*(t3445*t3902 + t3453*t3915 + t3440*t3937) - 0.148705*(t3467*t3902 + t3472*t3915 + t3460*t3937);
  p_output1[4]=-1.*t3983*t4004 - 1.*t4027*t4037 - 1.*t4051*t4065 - 0.148705*(-6.5e-11*t2961*t4037 + t4004*t4067 + t4065*t4070) + 0.80315*(-1.000000000016*t2961*t4004 + t4037*t4084 + t4065*t4089) + 0.038924*(-1.000000000049*t2961*t4065 + t4004*t4100 + t4037*t4104);
  p_output1[5]=t3609 + t3627 + t3679 + t3710 + t3727 + t3777 + t3790 + t3796 + t2137*t242*t4132 - 1.*t2406*t242*t4140;
  p_output1[6]=t2261*t4164 + t3606*t4185 + t4210*t4215 + t3370*t4231 + t3329*t4255 + t3240*t4264 - 0.148715*(t3515*t4231 + t3510*t4255 + t3503*t4264) - 0.038576*(t3534*t4231 + t3531*t4255 + t3526*t4264) - 0.80315*(t3552*t4231 + t3548*t4255 + t3544*t4264);
  p_output1[7]=t4333*t4350 + t4384*t4397 + t4423*t4431 - 0.80315*(-1.000000000016*t3214*t4350 + t4397*t4448 + t4431*t4452) - 0.038576*(-1.000000000049*t3214*t4397 + t4350*t4464 + t4431*t4468) - 0.148715*(-6.5e-11*t3214*t4431 + t4350*t4476 + t4397*t4478);
  p_output1[8]=t1895*t242*t4488 - 1.*t2104*t242*t4488 - 1.*t2260*t4498 + t2335*t4498 - 1.*t2387*t4504 + t2416*t4504 - 1.*t2502*t4511 + t2725*t4521 - 1.*t2806*t4525 + t2896*t4533 - 1.*t2985*t4539 - 1.*t3082*t4549 - 1.*t3158*t4555 + 0.038924*(t3409*t4539 + t3420*t4549 + t3429*t4555) + 0.80315*(t3440*t4539 + t3445*t4549 + t3453*t4555) - 0.148705*(t3460*t4539 + t3467*t4549 + t3472*t4555) + t3240*t4564 + t3329*t4578 + t3370*t4588 - 0.148715*(t3503*t4564 + t3510*t4578 + t3515*t4588) - 0.038576*(t3526*t4564 + t3531*t4578 + t3534*t4588) - 0.80315*(t3544*t4564 + t3548*t4578 + t3552*t4588);
  p_output1[9]=-1.*t1895*t2261*t4495 + t2104*t2261*t4495 - 1.*t2137*t2260*t242*t4495 + t2137*t2335*t242*t4495 + t2387*t2406*t242*t4495 - 1.*t2406*t2416*t242*t4495 - 1.*t2502*t4665 + t2725*t4679 - 1.*t2806*t4689 + t2896*t4694 - 1.*t2985*t4700 - 1.*t3082*t4707 - 1.*t3158*t4717 + 0.038924*(t3409*t4700 + t3420*t4707 + t3429*t4717) + 0.80315*(t3440*t4700 + t3445*t4707 + t3453*t4717) - 0.148705*(t3460*t4700 + t3467*t4707 + t3472*t4717) + t3240*t4722 + t3329*t4732 + t3370*t4740 - 0.148715*(t3503*t4722 + t3510*t4732 + t3515*t4740) - 0.038576*(t3526*t4722 + t3531*t4732 + t3534*t4740) - 0.80315*(t3544*t4722 + t3548*t4732 + t3552*t4740);
  p_output1[10]=-1.*t2387*t4801 + t2416*t4801 - 1.*t2260*t4816 + t2335*t4816 - 1.*t2806*t4824 + t2896*t4837 - 1.*t2502*t4848 + t2725*t4860 - 1.*t3082*t4870 - 1.*t2985*t4878 - 1.*t3158*t4884 + 0.038924*(t3420*t4870 + t3409*t4878 + t3429*t4884) + 0.80315*(t3445*t4870 + t3440*t4878 + t3453*t4884) - 0.148705*(t3467*t4870 + t3460*t4878 + t3472*t4884) + t3370*t4897 + t3329*t4904 + t3240*t4912 - 0.148715*(t3515*t4897 + t3510*t4904 + t3503*t4912) - 0.038576*(t3534*t4897 + t3531*t4904 + t3526*t4912) - 0.80315*(t3552*t4897 + t3548*t4904 + t3544*t4912);
  p_output1[11]=-1.*t3806*t4816 - 1.*t3804*t4997 - 1.*t2806*t5001 - 1.*t2502*t5004 - 1.*t3082*t5010 - 1.*t2985*t5019 - 1.*t3158*t5025 + 0.038924*(t3420*t5010 + t3409*t5019 + t3429*t5025) + 0.80315*(t3445*t5010 + t3440*t5019 + t3453*t5025) - 0.148705*(t3467*t5010 + t3460*t5019 + t3472*t5025);
  p_output1[12]=t242*t3833*t4495 - 1.*t3862*t5001 - 1.*t3881*t5061 - 1.*t3082*t5067 - 1.*t3158*t5075 - 1.*t2985*t5080 + 0.038924*(t3420*t5067 + t3429*t5075 + t3409*t5080) + 0.80315*(t3445*t5067 + t3453*t5075 + t3440*t5080) - 0.148705*(t3467*t5067 + t3472*t5075 + t3460*t5080);
  p_output1[13]=-1.*t3983*t5118 - 1.*t4027*t5129 - 1.*t4051*t5145 + 0.038924*(t4100*t5118 + t4104*t5129 - 1.000000000049*t2961*t5145) - 0.148705*(t4067*t5118 - 6.5e-11*t2961*t5129 + t4070*t5145) + 0.80315*(-1.000000000016*t2961*t5118 + t4084*t5129 + t4089*t5145);
  p_output1[14]=t4140*t4816 + t4132*t4997 + t2896*t5192 + t2725*t5200 + t3370*t5214 + t3329*t5225 + t3240*t5230 - 0.148715*(t3515*t5214 + t3510*t5225 + t3503*t5230) - 0.038576*(t3534*t5214 + t3531*t5225 + t3526*t5230) - 0.80315*(t3552*t5214 + t3548*t5225 + t3544*t5230);
  p_output1[15]=-1.*t242*t4164*t4495 + t4185*t5192 + t4210*t5274 + t3370*t5286 + t3329*t5299 + t3240*t5307 - 0.148715*(t3515*t5286 + t3510*t5299 + t3503*t5307) - 0.038576*(t3534*t5286 + t3531*t5299 + t3526*t5307) - 0.80315*(t3552*t5286 + t3548*t5299 + t3544*t5307);
  p_output1[16]=t4333*t5357 + t4384*t5367 + t4423*t5379 - 0.148715*(t4476*t5357 + t4478*t5367 - 6.5e-11*t3214*t5379) - 0.80315*(-1.000000000016*t3214*t5357 + t4448*t5367 + t4452*t5379) - 0.038576*(t4464*t5357 - 1.000000000049*t3214*t5367 + t4468*t5379);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_step_distance_ParallelStance.hh"

namespace ParallelStance
{

void J_step_distance_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE