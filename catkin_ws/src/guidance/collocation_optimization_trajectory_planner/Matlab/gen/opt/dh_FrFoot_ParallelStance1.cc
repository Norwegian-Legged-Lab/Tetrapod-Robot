/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:11:23 GMT+01:00
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
  double t41;
  double t206;
  double t130;
  double t174;
  double t205;
  double t1064;
  double t47;
  double t56;
  double t303;
  double t802;
  double t806;
  double t883;
  double t1170;
  double t1199;
  double t725;
  double t1453;
  double t1515;
  double t1570;
  double t1596;
  double t1696;
  double t1996;
  double t1999;
  double t2031;
  double t2109;
  double t691;
  double t1218;
  double t1247;
  double t1327;
  double t2477;
  double t2480;
  double t2489;
  double t2490;
  double t2510;
  double t2521;
  double t2532;
  double t2110;
  double t2200;
  double t2559;
  double t2562;
  double t2568;
  double t2583;
  double t2592;
  double t2600;
  double t2671;
  double t2713;
  double t2719;
  double t2759;
  double t1217;
  double t1913;
  double t2071;
  double t2074;
  double t2212;
  double t2234;
  double t2248;
  double t2259;
  double t2281;
  double t2284;
  double t2307;
  double t2374;
  double t2389;
  double t2397;
  double t2408;
  double t2539;
  double t2585;
  double t2760;
  double t2792;
  double t2871;
  double t2889;
  double t2895;
  double t2897;
  double t2898;
  double t2962;
  double t314;
  double t474;
  double t486;
  double t662;
  double t2300;
  double t2839;
  double t2979;
  double t2981;
  double t3121;
  double t3144;
  double t3152;
  double t3234;
  double t3242;
  double t3256;
  double t3021;
  double t3025;
  double t3030;
  double t3037;
  double t455;
  double t668;
  double t686;
  double t3069;
  double t3077;
  double t3078;
  double t3082;
  double t3088;
  double t3095;
  double t3096;
  double t3099;
  double t3047;
  double t3049;
  double t3050;
  double t3053;
  double t3330;
  double t3535;
  double t3539;
  double t3541;
  double t3547;
  double t3560;
  double t3590;
  double t3607;
  double t3622;
  double t3662;
  double t3663;
  double t3668;
  double t3675;
  double t3681;
  double t3682;
  double t3696;
  double t3546;
  double t3587;
  double t3624;
  double t3628;
  double t3632;
  double t3634;
  double t3636;
  double t3640;
  double t3822;
  double t2998;
  double t3008;
  double t3013;
  double t2081;
  double t2261;
  double t2264;
  double t3862;
  double t3296;
  double t3280;
  double t3284;
  double t3285;
  double t3222;
  double t3258;
  double t3266;
  double t3911;
  double t3933;
  double t3944;
  double t3106;
  double t3896;
  double t3903;
  double t3906;
  double t3950;
  double t3953;
  double t3956;
  double t4005;
  double t4014;
  double t4019;
  double t3836;
  double t3840;
  double t3858;
  double t3823;
  double t3824;
  double t3827;
  double t3821;
  double t3792;
  double t3806;
  double t3807;
  double t3811;
  double t3813;
  double t3829;
  double t3864;
  double t3878;
  double t4118;
  double t4099;
  double t4100;
  double t4102;
  double t4083;
  double t4132;
  double t4140;
  double t4144;
  double t4047;
  double t4049;
  double t4050;
  double t3957;
  double t3986;
  double t3994;
  double t3997;
  double t4167;
  double t4174;
  double t4176;
  double t4039;
  double t4161;
  double t4162;
  double t4163;
  double t4177;
  double t4178;
  double t4184;
  double t4195;
  double t4199;
  double t4217;
  double t4455;
  double t4459;
  double t4462;
  double t4465;
  double t4473;
  double t4475;
  double t4480;
  double t4254;
  double t4268;
  double t4280;
  double t4322;
  double t4309;
  double t3815;
  double t3881;
  double t3886;
  double t4603;
  double t4189;
  double t4190;
  double t4191;
  double t4625;
  double t4811;
  double t4813;
  double t4815;
  double t4818;
  double t4787;
  double t4792;
  double t4800;
  double t4802;
  double t4732;
  double t4717;
  double t4908;
  double t4919;
  t65 = Cos(var1[11]);
  t41 = Cos(var1[10]);
  t206 = -1. + t65;
  t130 = -1.*t65;
  t174 = 1. + t130;
  t205 = 1.6e-11*t174;
  t1064 = Sin(var1[11]);
  t47 = -1.*t41;
  t56 = 1. + t47;
  t303 = 1.6e-11*t206;
  t802 = -1.000000000016*t174;
  t806 = 1. + t802;
  t883 = 0.004352*t806;
  t1170 = -0.9999910000159999*t1064;
  t1199 = t883 + t1170;
  t725 = Sin(var1[10]);
  t1453 = -1. + t205;
  t1515 = 4.e-6*t1453;
  t1570 = 3.999964e-6*t174;
  t1596 = -1.7408e-8*t1064;
  t1696 = t1515 + t1570 + t1596;
  t1996 = 0.999991*t65;
  t1999 = 0.004352*t1064;
  t2031 = t303 + t1996 + t1999;
  t2109 = Cos(var1[9]);
  t691 = Sin(var1[9]);
  t1218 = -1. + t41;
  t1247 = 1.6e-11*t1218;
  t1327 = 1. + t1247;
  t2477 = -1.26e-8*var1[11];
  t2480 = 1. + t303;
  t2489 = -0.14871*t2480;
  t2490 = -1.64779999997447e-7*t174;
  t2510 = -1.59556e-7*t206;
  t2521 = -1.199987999968e-6*t1064;
  t2532 = t2477 + t2489 + t2490 + t2510 + t2521;
  t2110 = -1.000000000016*t56;
  t2200 = 1. + t2110;
  t2559 = 0.803147*t806;
  t2562 = 0.50315000001605*t174;
  t2568 = 0.00130540515936178*t1064;
  t2583 = t2559 + t2562 + t2568;
  t2592 = -5.04e-14*var1[11];
  t2600 = -0.03988959484*t174;
  t2671 = 6.38224e-13*t206;
  t2713 = -0.041195*t65;
  t2719 = 0.299996999992*t1064;
  t2759 = t2592 + t2600 + t2671 + t2713 + t2719;
  t1217 = -4.e-6*t725*t1199;
  t1913 = t1327*t1696;
  t2071 = 4.e-6*t56*t2031;
  t2074 = 0. + t1217 + t1913 + t2071;
  t2212 = t2200*t1199;
  t2234 = 4.e-6*t725*t1696;
  t2248 = -1.*t725*t2031;
  t2259 = 0. + t2212 + t2234 + t2248;
  t2281 = -1.*t2109;
  t2284 = 1. + t2281;
  t2307 = -0.15121*t691;
  t2374 = -1.2484e-7*var1[10];
  t2389 = 2.479936e-18*t56;
  t2397 = -1.54996e-7*t1218;
  t2408 = 1.124840000016e-6*t725;
  t2539 = t1327*t2532;
  t2585 = -4.e-6*t725*t2583;
  t2760 = 4.e-6*t56*t2759;
  t2792 = t2374 + t2389 + t2397 + t2408 + t2539 + t2585 + t2760;
  t2871 = 0.281210000008499*t56;
  t2889 = -0.03874900000062*t725;
  t2895 = 4.e-6*t725*t2532;
  t2897 = t2200*t2583;
  t2898 = -1.*t725*t2759;
  t2962 = t2871 + t2889 + t2895 + t2897 + t2898;
  t314 = -1. + t205 + t303;
  t474 = 4.e-6*t206;
  t486 = -4.e-6*t65;
  t662 = t474 + t486;
  t2300 = 0.15121*t2284;
  t2839 = -1.*t691*t2792;
  t2979 = t2109*t2962;
  t2981 = t2300 + t2307 + t2839 + t2979;
  t3121 = t1327*t314;
  t3144 = 4.e-6*t56*t662;
  t3152 = t3121 + t3144;
  t3234 = 4.e-6*t314*t725;
  t3242 = -1.*t662*t725;
  t3256 = t3234 + t3242;
  t3021 = -0.15121*t2284;
  t3025 = t2109*t2792;
  t3030 = t691*t2962;
  t3037 = t3021 + t2307 + t3025 + t3030;
  t455 = 4.e-6*t56*t314;
  t668 = t41*t662;
  t686 = t455 + t668;
  t3069 = -4.9936e-13*var1[10];
  t3077 = -0.038749*t56;
  t3078 = 6.19984e-13*t1218;
  t3082 = -0.281210000004*t725;
  t3088 = 4.e-6*t56*t2532;
  t3095 = t725*t2583;
  t3096 = t41*t2759;
  t3099 = 0. + t3069 + t3077 + t3078 + t3082 + t3088 + t3095 + t3096;
  t3047 = t725*t1199;
  t3049 = 4.e-6*t56*t1696;
  t3050 = t41*t2031;
  t3053 = 0. + t3047 + t3049 + t3050;
  t3330 = t3069 + t3077 + t3078 + t3082 + t3088 + t3095 + t3096;
  t3535 = -1.7408e-8*t174;
  t3539 = -3.999964e-6*t1064;
  t3541 = t3535 + t3539;
  t3547 = 0.999991*t806;
  t3560 = t3547 + t1999;
  t3590 = -0.004352*t65;
  t3607 = 0.999991*t1064;
  t3622 = t3590 + t3607;
  t3662 = -1.*t2532*t1696;
  t3663 = -1.*t1199*t2583;
  t3668 = -1.*t2031*t2759;
  t3675 = t3662 + t3663 + t3668;
  t3681 = t314*t2532;
  t3682 = t662*t2759;
  t3696 = t3681 + t3682;
  t3546 = t1327*t3541;
  t3587 = -4.e-6*t725*t3560;
  t3624 = 4.e-6*t56*t3622;
  t3628 = 0. + t3546 + t3587 + t3624;
  t3632 = 4.e-6*t725*t3541;
  t3634 = t2200*t3560;
  t3636 = -1.*t725*t3622;
  t3640 = 0. + t3632 + t3634 + t3636;
  t3822 = Cos(var1[5]);
  t2998 = t2109*t2074;
  t3008 = t691*t2259;
  t3013 = 0. + t2998 + t3008;
  t2081 = -1.*t691*t2074;
  t2261 = t2109*t2259;
  t2264 = 0. + t2081 + t2261;
  t3862 = Sin(var1[5]);
  t3296 = t686*t3099;
  t3280 = t2109*t3152;
  t3284 = t691*t3256;
  t3285 = t3280 + t3284;
  t3222 = -1.*t3152*t691;
  t3258 = t2109*t3256;
  t3266 = t3222 + t3258;
  t3911 = t3822*t3285;
  t3933 = t3266*t3862;
  t3944 = t3911 + t3933;
  t3106 = -1.*t3053*t3099;
  t3896 = t3822*t3013;
  t3903 = t2264*t3862;
  t3906 = 0. + t3896 + t3903;
  t3950 = t3822*t3037;
  t3953 = t2981*t3862;
  t3956 = 0. + t3950 + t3953;
  t4005 = t3822*t2981;
  t4014 = -1.*t3037*t3862;
  t4019 = 0. + t4005 + t4014;
  t3836 = t2109*t3628;
  t3840 = t691*t3640;
  t3858 = 0. + t3836 + t3840;
  t3823 = -1.*t691*t3628;
  t3824 = t2109*t3640;
  t3827 = 0. + t3823 + t3824;
  t3821 = Cos(var1[4]);
  t3792 = 4.e-6*t56*t3541;
  t3806 = t725*t3560;
  t3807 = t41*t3622;
  t3811 = 0. + t3792 + t3806 + t3807;
  t3813 = Sin(var1[4]);
  t3829 = t3822*t3827;
  t3864 = -1.*t3858*t3862;
  t3878 = 0. + t3829 + t3864;
  t4118 = Cos(var1[3]);
  t4099 = t3822*t3858;
  t4100 = t3827*t3862;
  t4102 = 0. + t4099 + t4100;
  t4083 = Sin(var1[3]);
  t4132 = t3821*t3811;
  t4140 = -1.*t3813*t3878;
  t4144 = 0. + t4132 + t4140;
  t4047 = t3822*t2264;
  t4049 = -1.*t3013*t3862;
  t4050 = 0. + t4047 + t4049;
  t3957 = t3944*t3956;
  t3986 = t3822*t3266;
  t3994 = -1.*t3285*t3862;
  t3997 = t3986 + t3994;
  t4167 = t686*t3813;
  t4174 = t3821*t3997;
  t4176 = t4167 + t4174;
  t4039 = -1.*t3906*t3956;
  t4161 = t3053*t3813;
  t4162 = t3821*t4050;
  t4163 = 0. + t4161 + t4162;
  t4177 = t3099*t3813;
  t4178 = t3821*t4019;
  t4184 = 0. + t4177 + t4178;
  t4195 = t3821*t3099;
  t4199 = -1.*t3813*t4019;
  t4217 = 0. + t4195 + t4199;
  t4455 = t3541*t2532;
  t4459 = t2583*t3560;
  t4462 = t2759*t3622;
  t4465 = t4455 + t4459 + t4462;
  t4473 = -1.*t314*t2532;
  t4475 = -1.*t662*t2759;
  t4480 = t4473 + t4475;
  t4254 = t3821*t3053;
  t4268 = -1.*t3813*t4050;
  t4280 = 0. + t4254 + t4268;
  t4322 = -1.*t686*t3099;
  t4309 = t3099*t3811;
  t3815 = t3811*t3813;
  t3881 = t3821*t3878;
  t3886 = 0. + t3815 + t3881;
  t4603 = -1.*t3944*t3956;
  t4189 = t686*t3821;
  t4190 = -1.*t3813*t3997;
  t4191 = t4189 + t4190;
  t4625 = t3956*t4102;
  t4811 = t2532*t1696;
  t4813 = t1199*t2583;
  t4815 = t2031*t2759;
  t4818 = t4811 + t4813 + t4815;
  t4787 = -1.*t3541*t2532;
  t4792 = -1.*t2583*t3560;
  t4800 = -1.*t2759*t3622;
  t4802 = t4787 + t4792 + t4800;
  t4732 = t3053*t3099;
  t4717 = -1.*t3099*t3811;
  t4908 = t3906*t3956;
  t4919 = -1.*t3956*t4102;
  p_output1[0]=t3886*var2[0] + (0. + t4102*t4118 - 1.*t4083*t4144)*var2[1] + (0. + t4083*t4102 + t4118*t4144)*var2[2] + (t4163*(t3957 + t4176*t4184 + t4191*t4217) + t4176*(t4039 - 1.*t4163*t4184 - 1.*t4217*t4280))*var2[3] + (t3906*(t3296 + t3957 + t3997*t4019) + t3944*(t3106 + t4039 - 1.*t4019*t4050))*var2[4] + (t3053*(t2981*t3266 + t3037*t3285 + t3296) + (-1.*t2264*t2981 - 1.*t3013*t3037 + t3106)*t686)*var2[5] + (-0.15121*t3628 - 0.15121*t3640 + (-1.*t2074*t2792 - 1.*t2259*t2962 - 1.*t3053*t3330)*t686 + t3053*(t2792*t3152 + t2962*t3256 + t3330*t686))*var2[9] + (1.e-6*t3541 - 0.038749*t3560 - 0.28121*t3622 - 1.*t314*t3675 - 1.*t1696*t3696 + 4.e-6*(-1.*t2031*t3696 - 1.*t3675*t662))*var2[10] - 1.9353204325022392e-7*var2[11];
  p_output1[1]=t4163*var2[0] + (0. + t3906*t4118 - 1.*t4083*t4280)*var2[1] + (0. + t3906*t4083 + t4118*t4280)*var2[2] + (t3886*(-1.*t4176*t4184 - 1.*t4191*t4217 + t4603) + t4176*(t3886*t4184 + t4144*t4217 + t4625))*var2[3] + (t4102*(-1.*t3997*t4019 + t4322 + t4603) + t3944*(t3878*t4019 + t4309 + t4625))*var2[4] + (t3811*(-1.*t2981*t3266 - 1.*t3037*t3285 + t4322) + (t2981*t3827 + t3037*t3858 + t4309)*t686)*var2[5] + (-0.15121*t2074 - 0.15121*t2259 + (t2792*t3628 + t2962*t3640 + t3330*t3811)*t686 + t3811*(-1.*t2792*t3152 - 1.*t2962*t3256 - 1.*t3330*t686))*var2[9] + (-0.038749*t1199 + 1.e-6*t1696 - 0.28121*t2031 - 1.*t314*t4465 - 1.*t3541*t4480 + 4.e-6*(-1.*t3622*t4480 - 1.*t4465*t662))*var2[10] + 0.29999998115510645*var2[11];
  p_output1[2]=t4176*var2[0] + (t3944*t4118 - 1.*t4083*t4191)*var2[1] + (t3944*t4083 + t4118*t4191)*var2[2] + (t3886*(t4163*t4184 + t4217*t4280 + t4908) + t4163*(-1.*t3886*t4184 - 1.*t4144*t4217 + t4919))*var2[3] + (t4102*(t4019*t4050 + t4732 + t4908) + t3906*(-1.*t3878*t4019 + t4717 + t4919))*var2[4] + (t3053*(-1.*t2981*t3827 - 1.*t3037*t3858 + t4717) + t3811*(t2264*t2981 + t3013*t3037 + t4732))*var2[5] + (-0.15121*t3152 - 0.15121*t3256 + (t2074*t2792 + t2259*t2962 + t3053*t3330)*t3811 + t3053*(-1.*t2792*t3628 - 1.*t2962*t3640 - 1.*t3330*t3811))*var2[9] + (1.e-6*t314 - 1.*t1696*t4802 - 1.*t3541*t4818 + 4.e-6*(-1.*t2031*t4802 - 1.*t3622*t4818) - 0.28121*t662)*var2[10] + 1.1914820871506078e-8*var2[11];
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

#include "dh_FrFoot_ParallelStance1.hh"

namespace ParallelStance1
{

void dh_FrFoot_ParallelStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
