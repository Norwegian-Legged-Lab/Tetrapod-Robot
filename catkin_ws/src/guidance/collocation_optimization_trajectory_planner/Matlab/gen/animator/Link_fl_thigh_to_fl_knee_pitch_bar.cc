/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 23:16:49 GMT+01:00
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
  double t479;
  double t894;
  double t1457;
  double t1460;
  double t1471;
  double t1507;
  double t773;
  double t1547;
  double t1893;
  double t1975;
  double t2008;
  double t2059;
  double t2179;
  double t2215;
  double t2220;
  double t2358;
  double t1699;
  double t1725;
  double t1800;
  double t2843;
  double t1536;
  double t1537;
  double t1540;
  double t1603;
  double t1610;
  double t1617;
  double t1856;
  double t2014;
  double t2071;
  double t2157;
  double t2165;
  double t2230;
  double t2239;
  double t2244;
  double t2310;
  double t2446;
  double t2457;
  double t2521;
  double t2561;
  double t2566;
  double t2567;
  double t2614;
  double t2716;
  double t2760;
  double t2782;
  double t2834;
  double t2850;
  double t2853;
  double t2858;
  double t2862;
  double t2883;
  double t2887;
  double t2928;
  double t2939;
  double t2963;
  double t2976;
  double t2837;
  double t2910;
  double t3043;
  double t3107;
  double t3942;
  double t3934;
  double t3941;
  double t3943;
  double t3953;
  double t3960;
  double t3965;
  double t3968;
  double t3980;
  double t3982;
  double t3984;
  double t3972;
  double t3976;
  double t3977;
  double t3955;
  double t3970;
  double t3978;
  double t3985;
  double t3988;
  double t3990;
  double t3991;
  double t3993;
  double t3998;
  double t4001;
  double t4004;
  double t4005;
  double t4008;
  double t4018;
  double t4021;
  double t4025;
  double t4043;
  double t3999;
  double t4014;
  double t4044;
  double t4045;
  double t4253;
  double t4254;
  double t4255;
  double t4259;
  double t4260;
  double t4261;
  double t4270;
  double t4271;
  double t4273;
  double t4265;
  double t4266;
  double t4267;
  double t4257;
  double t4263;
  double t4269;
  double t4275;
  double t4276;
  double t4277;
  double t4279;
  double t4280;
  double t4284;
  double t4286;
  double t4289;
  double t4293;
  double t4294;
  double t4296;
  double t4298;
  double t4299;
  double t4300;
  double t4285;
  double t4295;
  double t4304;
  double t4308;
  double t3124;
  double t3228;
  double t3328;
  double t3409;
  double t3493;
  double t3562;
  double t3676;
  double t3724;
  double t3755;
  double t3782;
  double t3798;
  double t3908;
  double t3926;
  double t4430;
  double t4432;
  double t4434;
  double t4052;
  double t4073;
  double t4136;
  double t4148;
  double t4154;
  double t4160;
  double t4178;
  double t4196;
  double t4204;
  double t4210;
  double t4216;
  double t4237;
  double t4249;
  double t4536;
  double t4538;
  double t4543;
  double t4312;
  double t4327;
  double t4337;
  double t4344;
  double t4349;
  double t4355;
  double t4364;
  double t4369;
  double t4375;
  double t4380;
  double t4386;
  double t4398;
  double t4427;
  double t4648;
  double t4649;
  double t4651;
  t479 = Cos(var1[4]);
  t894 = Cos(var1[6]);
  t1457 = -1.*t894;
  t1460 = 1. + t1457;
  t1471 = 0.15121*t1460;
  t1507 = Sin(var1[6]);
  t773 = Sin(var1[5]);
  t1547 = Cos(var1[5]);
  t1893 = Cos(var1[7]);
  t1975 = -1.*t1893;
  t2008 = 1. + t1975;
  t2059 = Sin(var1[7]);
  t2179 = t479*t1547*t894;
  t2215 = -1.*t479*t773*t1507;
  t2220 = t2179 + t2215;
  t2358 = Sin(var1[4]);
  t1699 = -1.*t479*t894*t773;
  t1725 = -1.*t479*t1547*t1507;
  t1800 = t1699 + t1725;
  t2843 = -1. + t1893;
  t1536 = -0.15121*t1507;
  t1537 = t1471 + t1536;
  t1540 = -1.*t479*t773*t1537;
  t1603 = 0.15121*t1507;
  t1610 = t1471 + t1603;
  t1617 = t479*t1547*t1610;
  t1856 = -1.2484e-7*var1[7];
  t2014 = -1.5499600000248e-7*t2008;
  t2071 = 1.124840000016e-6*t2059;
  t2157 = t1856 + t2014 + t2071;
  t2165 = t1800*t2157;
  t2230 = 0.281210000008499*t2008;
  t2239 = 0.03874900000062*t2059;
  t2244 = t2230 + t2239;
  t2310 = t2220*t2244;
  t2446 = 4.9936e-13*var1[7];
  t2457 = -0.03874900000062*t2008;
  t2521 = 0.281210000004*t2059;
  t2561 = t2446 + t2457 + t2521;
  t2566 = t2358*t2561;
  t2567 = -1.000000000016*t2008;
  t2614 = 1. + t2567;
  t2716 = t2614*t2220;
  t2760 = -1.*t2358*t2059;
  t2782 = -4.e-6*t1800*t2059;
  t2834 = t2716 + t2760 + t2782;
  t2850 = 4.e-6*t2843*t2358;
  t2853 = 1.6e-11*t2843;
  t2858 = 1. + t2853;
  t2862 = t2858*t1800;
  t2883 = 4.e-6*t2220*t2059;
  t2887 = t2850 + t2862 + t2883;
  t2928 = t1893*t2358;
  t2939 = 4.e-6*t2843*t1800;
  t2963 = t2220*t2059;
  t2976 = t2928 + t2939 + t2963;
  t2837 = 0.27779*t2834;
  t2910 = 0.214262*t2887;
  t3043 = -0.031111*t2976;
  t3107 = var1[0] + t1540 + t1617 + t2165 + t2310 + t2566 + t2837 + t2910 + t3043;
  t3942 = Sin(var1[3]);
  t3934 = Cos(var1[3]);
  t3941 = t3934*t1547;
  t3943 = -1.*t3942*t2358*t773;
  t3953 = t3941 + t3943;
  t3960 = t1547*t3942*t2358;
  t3965 = t3934*t773;
  t3968 = t3960 + t3965;
  t3980 = t894*t3968;
  t3982 = t3953*t1507;
  t3984 = t3980 + t3982;
  t3972 = t894*t3953;
  t3976 = -1.*t3968*t1507;
  t3977 = t3972 + t3976;
  t3955 = t3953*t1537;
  t3970 = t3968*t1610;
  t3978 = t3977*t2157;
  t3985 = t3984*t2244;
  t3988 = -1.*t479*t3942*t2561;
  t3990 = t2614*t3984;
  t3991 = t479*t3942*t2059;
  t3993 = -4.e-6*t3977*t2059;
  t3998 = t3990 + t3991 + t3993;
  t4001 = -4.e-6*t479*t2843*t3942;
  t4004 = t2858*t3977;
  t4005 = 4.e-6*t3984*t2059;
  t4008 = t4001 + t4004 + t4005;
  t4018 = -1.*t479*t1893*t3942;
  t4021 = 4.e-6*t2843*t3977;
  t4025 = t3984*t2059;
  t4043 = t4018 + t4021 + t4025;
  t3999 = 0.27779*t3998;
  t4014 = 0.214262*t4008;
  t4044 = -0.031111*t4043;
  t4045 = var1[1] + t3955 + t3970 + t3978 + t3985 + t3988 + t3999 + t4014 + t4044;
  t4253 = t1547*t3942;
  t4254 = t3934*t2358*t773;
  t4255 = t4253 + t4254;
  t4259 = -1.*t3934*t1547*t2358;
  t4260 = t3942*t773;
  t4261 = t4259 + t4260;
  t4270 = t894*t4261;
  t4271 = t4255*t1507;
  t4273 = t4270 + t4271;
  t4265 = t894*t4255;
  t4266 = -1.*t4261*t1507;
  t4267 = t4265 + t4266;
  t4257 = t4255*t1537;
  t4263 = t4261*t1610;
  t4269 = t4267*t2157;
  t4275 = t4273*t2244;
  t4276 = t3934*t479*t2561;
  t4277 = t2614*t4273;
  t4279 = -1.*t3934*t479*t2059;
  t4280 = -4.e-6*t4267*t2059;
  t4284 = t4277 + t4279 + t4280;
  t4286 = 4.e-6*t3934*t479*t2843;
  t4289 = t2858*t4267;
  t4293 = 4.e-6*t4273*t2059;
  t4294 = t4286 + t4289 + t4293;
  t4296 = t3934*t479*t1893;
  t4298 = 4.e-6*t2843*t4267;
  t4299 = t4273*t2059;
  t4300 = t4296 + t4298 + t4299;
  t4285 = 0.27779*t4284;
  t4295 = 0.214262*t4294;
  t4304 = -0.031111*t4300;
  t4308 = var1[2] + t4257 + t4263 + t4269 + t4275 + t4276 + t4285 + t4295 + t4304;
  t3124 = -0.035716*t2976;
  t3228 = -0.045379*t2976;
  t3328 = -0.052246*t2976;
  t3409 = -0.05364*t2976;
  t3493 = -0.053421*t2976;
  t3562 = -0.051612*t2976;
  t3676 = -0.04416*t2976;
  t3724 = -0.039324*t2976;
  t3755 = -0.034426*t2976;
  t3782 = -0.029997*t2976;
  t3798 = -0.026516*t2976;
  t3908 = -0.023765*t2976;
  t3926 = -0.027333*t2976;
  t4430 = 0.49979*t2834;
  t4432 = 0.153262*t2887;
  t4434 = var1[0] + t1540 + t1617 + t2165 + t2310 + t2566 + t4430 + t4432 + t3043;
  t4052 = -0.035716*t4043;
  t4073 = -0.045379*t4043;
  t4136 = -0.052246*t4043;
  t4148 = -0.05364*t4043;
  t4154 = -0.053421*t4043;
  t4160 = -0.051612*t4043;
  t4178 = -0.04416*t4043;
  t4196 = -0.039324*t4043;
  t4204 = -0.034426*t4043;
  t4210 = -0.029997*t4043;
  t4216 = -0.026516*t4043;
  t4237 = -0.023765*t4043;
  t4249 = -0.027333*t4043;
  t4536 = 0.49979*t3998;
  t4538 = 0.153262*t4008;
  t4543 = var1[1] + t3955 + t3970 + t3978 + t3985 + t3988 + t4536 + t4538 + t4044;
  t4312 = -0.035716*t4300;
  t4327 = -0.045379*t4300;
  t4337 = -0.052246*t4300;
  t4344 = -0.05364*t4300;
  t4349 = -0.053421*t4300;
  t4355 = -0.051612*t4300;
  t4364 = -0.04416*t4300;
  t4369 = -0.039324*t4300;
  t4375 = -0.034426*t4300;
  t4380 = -0.029997*t4300;
  t4386 = -0.026516*t4300;
  t4398 = -0.023765*t4300;
  t4427 = -0.027333*t4300;
  t4648 = 0.49979*t4284;
  t4649 = 0.153262*t4294;
  t4651 = var1[2] + t4257 + t4263 + t4269 + t4275 + t4276 + t4648 + t4649 + t4304;
  p_output1[0]=t3107;
  p_output1[1]=t1540 + t1617 + t2165 + t2310 + t2566 + 0.277318*t2834 + 0.212545*t2887 + t3124 + var1[0];
  p_output1[2]=t1540 + t1617 + t2165 + t2310 + t2566 + 0.277268*t2834 + 0.212363*t2887 - 0.040651*t2976 + var1[0];
  p_output1[3]=t1540 + t1617 + t2165 + t2310 + t2566 + 0.277645*t2834 + 0.213735*t2887 + t3228 + var1[0];
  p_output1[4]=t1540 + t1617 + t2165 + t2310 + t2566 + 0.278408*t2834 + 0.216514*t2887 - 0.049389*t2976 + var1[0];
  p_output1[5]=t1540 + t1617 + t2165 + t2310 + t2566 + 0.279475*t2834 + 0.220397*t2887 + t3328 + var1[0];
  p_output1[6]=t1540 + t1617 + t2165 + t2310 + t2566 + 0.28073*t2834 + 0.224964*t2887 + t3409 + var1[0];
  p_output1[7]=t1540 + t1617 + t2165 + t2310 + t2566 + 0.282037*t2834 + 0.229721*t2887 + t3493 + var1[0];
  p_output1[8]=t1540 + t1617 + t2165 + t2310 + t2566 + 0.283255*t2834 + 0.234152*t2887 + t3562 + var1[0];
  p_output1[9]=t1540 + t1617 + t2165 + t2310 + t2566 + 0.284251*t2834 + 0.237775*t2887 - 0.04841*t2976 + var1[0];
  p_output1[10]=t1540 + t1617 + t2165 + t2310 + t2566 + 0.284917*t2834 + 0.2402*t2887 + t3676 + var1[0];
  p_output1[11]=t1540 + t1617 + t2165 + t2310 + t2566 + 0.285181*t2834 + 0.241163*t2887 + t3724 + var1[0];
  p_output1[12]=t1540 + t1617 + t2165 + t2310 + t2566 + 0.285016*t2834 + 0.24056*t2887 + t3755 + var1[0];
  p_output1[13]=t1540 + t1617 + t2165 + t2310 + t2566 + 0.284437*t2834 + 0.238456*t2887 + t3782 + var1[0];
  p_output1[14]=t1540 + t1617 + t2165 + t2310 + t2566 + 0.28351*t2834 + 0.235079*t2887 + t3798 + var1[0];
  p_output1[15]=t1540 + t1617 + t2165 + t2310 + t2566 + 0.282332*t2834 + 0.230795*t2887 - 0.024361*t2976 + var1[0];
  p_output1[16]=t1540 + t1617 + t2165 + t2310 + t2566 + 0.281034*t2834 + 0.226068*t2887 + t3908 + var1[0];
  p_output1[17]=t1540 + t1617 + t2165 + t2310 + t2566 + 0.279754*t2834 + 0.221411*t2887 - 0.024793*t2976 + var1[0];
  p_output1[18]=t1540 + t1617 + t2165 + t2310 + t2566 + 0.278632*t2834 + 0.217329*t2887 + t3926 + var1[0];
  p_output1[19]=t3107;
  p_output1[20]=t4045;
  p_output1[21]=t3955 + t3970 + t3978 + t3985 + t3988 + 0.277318*t3998 + 0.212545*t4008 + t4052 + var1[1];
  p_output1[22]=t3955 + t3970 + t3978 + t3985 + t3988 + 0.277268*t3998 + 0.212363*t4008 - 0.040651*t4043 + var1[1];
  p_output1[23]=t3955 + t3970 + t3978 + t3985 + t3988 + 0.277645*t3998 + 0.213735*t4008 + t4073 + var1[1];
  p_output1[24]=t3955 + t3970 + t3978 + t3985 + t3988 + 0.278408*t3998 + 0.216514*t4008 - 0.049389*t4043 + var1[1];
  p_output1[25]=t3955 + t3970 + t3978 + t3985 + t3988 + 0.279475*t3998 + 0.220397*t4008 + t4136 + var1[1];
  p_output1[26]=t3955 + t3970 + t3978 + t3985 + t3988 + 0.28073*t3998 + 0.224964*t4008 + t4148 + var1[1];
  p_output1[27]=t3955 + t3970 + t3978 + t3985 + t3988 + 0.282037*t3998 + 0.229721*t4008 + t4154 + var1[1];
  p_output1[28]=t3955 + t3970 + t3978 + t3985 + t3988 + 0.283255*t3998 + 0.234152*t4008 + t4160 + var1[1];
  p_output1[29]=t3955 + t3970 + t3978 + t3985 + t3988 + 0.284251*t3998 + 0.237775*t4008 - 0.04841*t4043 + var1[1];
  p_output1[30]=t3955 + t3970 + t3978 + t3985 + t3988 + 0.284917*t3998 + 0.2402*t4008 + t4178 + var1[1];
  p_output1[31]=t3955 + t3970 + t3978 + t3985 + t3988 + 0.285181*t3998 + 0.241163*t4008 + t4196 + var1[1];
  p_output1[32]=t3955 + t3970 + t3978 + t3985 + t3988 + 0.285016*t3998 + 0.24056*t4008 + t4204 + var1[1];
  p_output1[33]=t3955 + t3970 + t3978 + t3985 + t3988 + 0.284437*t3998 + 0.238456*t4008 + t4210 + var1[1];
  p_output1[34]=t3955 + t3970 + t3978 + t3985 + t3988 + 0.28351*t3998 + 0.235079*t4008 + t4216 + var1[1];
  p_output1[35]=t3955 + t3970 + t3978 + t3985 + t3988 + 0.282332*t3998 + 0.230795*t4008 - 0.024361*t4043 + var1[1];
  p_output1[36]=t3955 + t3970 + t3978 + t3985 + t3988 + 0.281034*t3998 + 0.226068*t4008 + t4237 + var1[1];
  p_output1[37]=t3955 + t3970 + t3978 + t3985 + t3988 + 0.279754*t3998 + 0.221411*t4008 - 0.024793*t4043 + var1[1];
  p_output1[38]=t3955 + t3970 + t3978 + t3985 + t3988 + 0.278632*t3998 + 0.217329*t4008 + t4249 + var1[1];
  p_output1[39]=t4045;
  p_output1[40]=t4308;
  p_output1[41]=t4257 + t4263 + t4269 + t4275 + t4276 + 0.277318*t4284 + 0.212545*t4294 + t4312 + var1[2];
  p_output1[42]=t4257 + t4263 + t4269 + t4275 + t4276 + 0.277268*t4284 + 0.212363*t4294 - 0.040651*t4300 + var1[2];
  p_output1[43]=t4257 + t4263 + t4269 + t4275 + t4276 + 0.277645*t4284 + 0.213735*t4294 + t4327 + var1[2];
  p_output1[44]=t4257 + t4263 + t4269 + t4275 + t4276 + 0.278408*t4284 + 0.216514*t4294 - 0.049389*t4300 + var1[2];
  p_output1[45]=t4257 + t4263 + t4269 + t4275 + t4276 + 0.279475*t4284 + 0.220397*t4294 + t4337 + var1[2];
  p_output1[46]=t4257 + t4263 + t4269 + t4275 + t4276 + 0.28073*t4284 + 0.224964*t4294 + t4344 + var1[2];
  p_output1[47]=t4257 + t4263 + t4269 + t4275 + t4276 + 0.282037*t4284 + 0.229721*t4294 + t4349 + var1[2];
  p_output1[48]=t4257 + t4263 + t4269 + t4275 + t4276 + 0.283255*t4284 + 0.234152*t4294 + t4355 + var1[2];
  p_output1[49]=t4257 + t4263 + t4269 + t4275 + t4276 + 0.284251*t4284 + 0.237775*t4294 - 0.04841*t4300 + var1[2];
  p_output1[50]=t4257 + t4263 + t4269 + t4275 + t4276 + 0.284917*t4284 + 0.2402*t4294 + t4364 + var1[2];
  p_output1[51]=t4257 + t4263 + t4269 + t4275 + t4276 + 0.285181*t4284 + 0.241163*t4294 + t4369 + var1[2];
  p_output1[52]=t4257 + t4263 + t4269 + t4275 + t4276 + 0.285016*t4284 + 0.24056*t4294 + t4375 + var1[2];
  p_output1[53]=t4257 + t4263 + t4269 + t4275 + t4276 + 0.284437*t4284 + 0.238456*t4294 + t4380 + var1[2];
  p_output1[54]=t4257 + t4263 + t4269 + t4275 + t4276 + 0.28351*t4284 + 0.235079*t4294 + t4386 + var1[2];
  p_output1[55]=t4257 + t4263 + t4269 + t4275 + t4276 + 0.282332*t4284 + 0.230795*t4294 - 0.024361*t4300 + var1[2];
  p_output1[56]=t4257 + t4263 + t4269 + t4275 + t4276 + 0.281034*t4284 + 0.226068*t4294 + t4398 + var1[2];
  p_output1[57]=t4257 + t4263 + t4269 + t4275 + t4276 + 0.279754*t4284 + 0.221411*t4294 - 0.024793*t4300 + var1[2];
  p_output1[58]=t4257 + t4263 + t4269 + t4275 + t4276 + 0.278632*t4284 + 0.217329*t4294 + t4427 + var1[2];
  p_output1[59]=t4308;
  p_output1[60]=t4434;
  p_output1[61]=t1540 + t1617 + t2165 + t2310 + t2566 + 0.499318*t2834 + 0.151545*t2887 + t3124 + var1[0];
  p_output1[62]=t1540 + t1617 + t2165 + t2310 + t2566 + 0.499268*t2834 + 0.151363*t2887 - 0.04065*t2976 + var1[0];
  p_output1[63]=t1540 + t1617 + t2165 + t2310 + t2566 + 0.499645*t2834 + 0.152735*t2887 + t3228 + var1[0];
  p_output1[64]=t1540 + t1617 + t2165 + t2310 + t2566 + 0.500408*t2834 + 0.155514*t2887 - 0.049388*t2976 + var1[0];
  p_output1[65]=t1540 + t1617 + t2165 + t2310 + t2566 + 0.501475*t2834 + 0.159397*t2887 + t3328 + var1[0];
  p_output1[66]=t1540 + t1617 + t2165 + t2310 + t2566 + 0.50273*t2834 + 0.163964*t2887 + t3409 + var1[0];
  p_output1[67]=t1540 + t1617 + t2165 + t2310 + t2566 + 0.504037*t2834 + 0.168721*t2887 + t3493 + var1[0];
  p_output1[68]=t1540 + t1617 + t2165 + t2310 + t2566 + 0.505255*t2834 + 0.173152*t2887 + t3562 + var1[0];
  p_output1[69]=t1540 + t1617 + t2165 + t2310 + t2566 + 0.506251*t2834 + 0.176775*t2887 - 0.048409*t2976 + var1[0];
  p_output1[70]=t1540 + t1617 + t2165 + t2310 + t2566 + 0.506917*t2834 + 0.1792*t2887 + t3676 + var1[0];
  p_output1[71]=t1540 + t1617 + t2165 + t2310 + t2566 + 0.507181*t2834 + 0.180163*t2887 + t3724 + var1[0];
  p_output1[72]=t1540 + t1617 + t2165 + t2310 + t2566 + 0.507016*t2834 + 0.17956*t2887 + t3755 + var1[0];
  p_output1[73]=t1540 + t1617 + t2165 + t2310 + t2566 + 0.506437*t2834 + 0.177456*t2887 + t3782 + var1[0];
  p_output1[74]=t1540 + t1617 + t2165 + t2310 + t2566 + 0.50551*t2834 + 0.174079*t2887 + t3798 + var1[0];
  p_output1[75]=t1540 + t1617 + t2165 + t2310 + t2566 + 0.504332*t2834 + 0.169795*t2887 - 0.02436*t2976 + var1[0];
  p_output1[76]=t1540 + t1617 + t2165 + t2310 + t2566 + 0.503034*t2834 + 0.165068*t2887 + t3908 + var1[0];
  p_output1[77]=t1540 + t1617 + t2165 + t2310 + t2566 + 0.501754*t2834 + 0.160411*t2887 - 0.024792*t2976 + var1[0];
  p_output1[78]=t1540 + t1617 + t2165 + t2310 + t2566 + 0.500632*t2834 + 0.156329*t2887 + t3926 + var1[0];
  p_output1[79]=t4434;
  p_output1[80]=t4543;
  p_output1[81]=t3955 + t3970 + t3978 + t3985 + t3988 + 0.499318*t3998 + 0.151545*t4008 + t4052 + var1[1];
  p_output1[82]=t3955 + t3970 + t3978 + t3985 + t3988 + 0.499268*t3998 + 0.151363*t4008 - 0.04065*t4043 + var1[1];
  p_output1[83]=t3955 + t3970 + t3978 + t3985 + t3988 + 0.499645*t3998 + 0.152735*t4008 + t4073 + var1[1];
  p_output1[84]=t3955 + t3970 + t3978 + t3985 + t3988 + 0.500408*t3998 + 0.155514*t4008 - 0.049388*t4043 + var1[1];
  p_output1[85]=t3955 + t3970 + t3978 + t3985 + t3988 + 0.501475*t3998 + 0.159397*t4008 + t4136 + var1[1];
  p_output1[86]=t3955 + t3970 + t3978 + t3985 + t3988 + 0.50273*t3998 + 0.163964*t4008 + t4148 + var1[1];
  p_output1[87]=t3955 + t3970 + t3978 + t3985 + t3988 + 0.504037*t3998 + 0.168721*t4008 + t4154 + var1[1];
  p_output1[88]=t3955 + t3970 + t3978 + t3985 + t3988 + 0.505255*t3998 + 0.173152*t4008 + t4160 + var1[1];
  p_output1[89]=t3955 + t3970 + t3978 + t3985 + t3988 + 0.506251*t3998 + 0.176775*t4008 - 0.048409*t4043 + var1[1];
  p_output1[90]=t3955 + t3970 + t3978 + t3985 + t3988 + 0.506917*t3998 + 0.1792*t4008 + t4178 + var1[1];
  p_output1[91]=t3955 + t3970 + t3978 + t3985 + t3988 + 0.507181*t3998 + 0.180163*t4008 + t4196 + var1[1];
  p_output1[92]=t3955 + t3970 + t3978 + t3985 + t3988 + 0.507016*t3998 + 0.17956*t4008 + t4204 + var1[1];
  p_output1[93]=t3955 + t3970 + t3978 + t3985 + t3988 + 0.506437*t3998 + 0.177456*t4008 + t4210 + var1[1];
  p_output1[94]=t3955 + t3970 + t3978 + t3985 + t3988 + 0.50551*t3998 + 0.174079*t4008 + t4216 + var1[1];
  p_output1[95]=t3955 + t3970 + t3978 + t3985 + t3988 + 0.504332*t3998 + 0.169795*t4008 - 0.02436*t4043 + var1[1];
  p_output1[96]=t3955 + t3970 + t3978 + t3985 + t3988 + 0.503034*t3998 + 0.165068*t4008 + t4237 + var1[1];
  p_output1[97]=t3955 + t3970 + t3978 + t3985 + t3988 + 0.501754*t3998 + 0.160411*t4008 - 0.024792*t4043 + var1[1];
  p_output1[98]=t3955 + t3970 + t3978 + t3985 + t3988 + 0.500632*t3998 + 0.156329*t4008 + t4249 + var1[1];
  p_output1[99]=t4543;
  p_output1[100]=t4651;
  p_output1[101]=t4257 + t4263 + t4269 + t4275 + t4276 + 0.499318*t4284 + 0.151545*t4294 + t4312 + var1[2];
  p_output1[102]=t4257 + t4263 + t4269 + t4275 + t4276 + 0.499268*t4284 + 0.151363*t4294 - 0.04065*t4300 + var1[2];
  p_output1[103]=t4257 + t4263 + t4269 + t4275 + t4276 + 0.499645*t4284 + 0.152735*t4294 + t4327 + var1[2];
  p_output1[104]=t4257 + t4263 + t4269 + t4275 + t4276 + 0.500408*t4284 + 0.155514*t4294 - 0.049388*t4300 + var1[2];
  p_output1[105]=t4257 + t4263 + t4269 + t4275 + t4276 + 0.501475*t4284 + 0.159397*t4294 + t4337 + var1[2];
  p_output1[106]=t4257 + t4263 + t4269 + t4275 + t4276 + 0.50273*t4284 + 0.163964*t4294 + t4344 + var1[2];
  p_output1[107]=t4257 + t4263 + t4269 + t4275 + t4276 + 0.504037*t4284 + 0.168721*t4294 + t4349 + var1[2];
  p_output1[108]=t4257 + t4263 + t4269 + t4275 + t4276 + 0.505255*t4284 + 0.173152*t4294 + t4355 + var1[2];
  p_output1[109]=t4257 + t4263 + t4269 + t4275 + t4276 + 0.506251*t4284 + 0.176775*t4294 - 0.048409*t4300 + var1[2];
  p_output1[110]=t4257 + t4263 + t4269 + t4275 + t4276 + 0.506917*t4284 + 0.1792*t4294 + t4364 + var1[2];
  p_output1[111]=t4257 + t4263 + t4269 + t4275 + t4276 + 0.507181*t4284 + 0.180163*t4294 + t4369 + var1[2];
  p_output1[112]=t4257 + t4263 + t4269 + t4275 + t4276 + 0.507016*t4284 + 0.17956*t4294 + t4375 + var1[2];
  p_output1[113]=t4257 + t4263 + t4269 + t4275 + t4276 + 0.506437*t4284 + 0.177456*t4294 + t4380 + var1[2];
  p_output1[114]=t4257 + t4263 + t4269 + t4275 + t4276 + 0.50551*t4284 + 0.174079*t4294 + t4386 + var1[2];
  p_output1[115]=t4257 + t4263 + t4269 + t4275 + t4276 + 0.504332*t4284 + 0.169795*t4294 - 0.02436*t4300 + var1[2];
  p_output1[116]=t4257 + t4263 + t4269 + t4275 + t4276 + 0.503034*t4284 + 0.165068*t4294 + t4398 + var1[2];
  p_output1[117]=t4257 + t4263 + t4269 + t4275 + t4276 + 0.501754*t4284 + 0.160411*t4294 - 0.024792*t4300 + var1[2];
  p_output1[118]=t4257 + t4263 + t4269 + t4275 + t4276 + 0.500632*t4284 + 0.156329*t4294 + t4427 + var1[2];
  p_output1[119]=t4651;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 20, (mwSize) 6, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Link_fl_thigh_to_fl_knee_pitch_bar.hh"

namespace SymFunction
{

void Link_fl_thigh_to_fl_knee_pitch_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
