/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:11:05 GMT+01:00
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
  double t35;
  double t8;
  double t303;
  double t246;
  double t282;
  double t299;
  double t401;
  double t483;
  double t14;
  double t21;
  double t793;
  double t846;
  double t851;
  double t1347;
  double t1344;
  double t1231;
  double t1232;
  double t1233;
  double t1243;
  double t1244;
  double t1284;
  double t1294;
  double t1389;
  double t1451;
  double t1452;
  double t1863;
  double t1047;
  double t1171;
  double t1201;
  double t1797;
  double t1798;
  double t1835;
  double t1891;
  double t1900;
  double t1944;
  double t1986;
  double t1992;
  double t2071;
  double t2078;
  double t2129;
  double t2130;
  double t2142;
  double t2201;
  double t2213;
  double t2243;
  double t2289;
  double t2333;
  double t2334;
  double t2381;
  double t2408;
  double t2448;
  double t2477;
  double t1657;
  double t3006;
  double t3059;
  double t3112;
  double t3151;
  double t3159;
  double t3250;
  double t3267;
  double t3274;
  double t3293;
  double t3312;
  double t3313;
  double t3319;
  double t3352;
  double t3356;
  double t3368;
  double t3389;
  double t1590;
  double t1614;
  double t1630;
  double t1298;
  double t1456;
  double t1533;
  double t691;
  double t941;
  double t942;
  double t1556;
  double t1693;
  double t1736;
  double t3504;
  double t2561;
  double t2637;
  double t2781;
  double t2308;
  double t2495;
  double t2502;
  double t3608;
  double t1919;
  double t2108;
  double t2150;
  double t2155;
  double t2520;
  double t2792;
  double t2810;
  double t3440;
  double t3448;
  double t3456;
  double t3331;
  double t3390;
  double t3412;
  double t3128;
  double t3229;
  double t3278;
  double t3283;
  double t3422;
  double t3460;
  double t3465;
  double t3545;
  double t3577;
  double t3598;
  double t3612;
  double t3625;
  double t3629;
  double t3664;
  double t3669;
  double t3672;
  double t3701;
  double t3707;
  double t3734;
  double t3777;
  double t3793;
  double t3805;
  double t3810;
  double t3815;
  double t3819;
  double t2184;
  double t2816;
  double t2836;
  double t3944;
  double t3948;
  double t3953;
  double t3954;
  double t3958;
  double t3960;
  double t3966;
  double t3994;
  double t4002;
  double t4006;
  double t4016;
  double t4030;
  double t4031;
  double t4033;
  double t4034;
  double t4037;
  double t4039;
  double t3916;
  double t3921;
  double t3932;
  double t3937;
  double t3940;
  double t3941;
  double t3942;
  double t3975;
  double t4026;
  double t4041;
  double t4053;
  double t4056;
  double t4060;
  double t4061;
  double t4064;
  double t4082;
  double t4090;
  double t1140;
  double t1751;
  double t1758;
  double t4101;
  double t4103;
  double t4108;
  double t4111;
  double t3923;
  double t4054;
  double t4092;
  double t4094;
  double t4133;
  double t4136;
  double t4142;
  double t4147;
  double t4152;
  double t4153;
  double t4155;
  double t4159;
  double t4170;
  double t4171;
  double t4178;
  double t4099;
  double t4123;
  double t4128;
  double t4166;
  double t4183;
  double t4186;
  double t4194;
  double t4198;
  double t4207;
  double t3292;
  double t3470;
  double t3485;
  double t4129;
  double t4224;
  double t4260;
  double t4276;
  double t4320;
  double t4336;
  double t4370;
  double t4364;
  double t4424;
  double t4401;
  double t4391;
  double t4381;
  double t4625;
  double t4789;
  double t4790;
  double t4792;
  double t4793;
  double t4777;
  double t4781;
  double t4783;
  double t4784;
  double t4808;
  double t4809;
  double t4813;
  double t4814;
  double t4822;
  double t4823;
  double t4835;
  double t4866;
  double t4867;
  double t4869;
  double t4870;
  double t4872;
  double t4881;
  double t4882;
  t35 = Cos(var1[11]);
  t8 = Cos(var1[10]);
  t303 = -1. + t35;
  t246 = -1.*t35;
  t282 = 1. + t246;
  t299 = 1.6e-11*t282;
  t401 = 1.6e-11*t303;
  t483 = -1. + t299 + t401;
  t14 = -1.*t8;
  t21 = 1. + t14;
  t793 = 4.e-6*t303;
  t846 = -4.e-6*t35;
  t851 = t793 + t846;
  t1347 = Sin(var1[10]);
  t1344 = Cos(var1[9]);
  t1231 = -1. + t8;
  t1232 = 1.6e-11*t1231;
  t1233 = 1. + t1232;
  t1243 = t1233*t483;
  t1244 = 4.e-6*t21*t851;
  t1284 = t1243 + t1244;
  t1294 = Sin(var1[9]);
  t1389 = 4.e-6*t483*t1347;
  t1451 = -1.*t851*t1347;
  t1452 = t1389 + t1451;
  t1863 = Sin(var1[11]);
  t1047 = Sin(var1[4]);
  t1171 = Cos(var1[4]);
  t1201 = Cos(var1[5]);
  t1797 = -1.000000000016*t282;
  t1798 = 1. + t1797;
  t1835 = 0.004352*t1798;
  t1891 = -0.9999910000159999*t1863;
  t1900 = t1835 + t1891;
  t1944 = -1. + t299;
  t1986 = 4.e-6*t1944;
  t1992 = 3.999964e-6*t282;
  t2071 = -1.7408e-8*t1863;
  t2078 = t1986 + t1992 + t2071;
  t2129 = 0.999991*t35;
  t2130 = 0.004352*t1863;
  t2142 = t401 + t2129 + t2130;
  t2201 = -4.e-6*t1347*t1900;
  t2213 = t1233*t2078;
  t2243 = 4.e-6*t21*t2142;
  t2289 = 0. + t2201 + t2213 + t2243;
  t2333 = -1.000000000016*t21;
  t2334 = 1. + t2333;
  t2381 = t2334*t1900;
  t2408 = 4.e-6*t1347*t2078;
  t2448 = -1.*t1347*t2142;
  t2477 = 0. + t2381 + t2408 + t2448;
  t1657 = Sin(var1[5]);
  t3006 = -1.7408e-8*t282;
  t3059 = -3.999964e-6*t1863;
  t3112 = t3006 + t3059;
  t3151 = 0.999991*t1798;
  t3159 = t3151 + t2130;
  t3250 = -0.004352*t35;
  t3267 = 0.999991*t1863;
  t3274 = t3250 + t3267;
  t3293 = t1233*t3112;
  t3312 = -4.e-6*t1347*t3159;
  t3313 = 4.e-6*t21*t3274;
  t3319 = 0. + t3293 + t3312 + t3313;
  t3352 = 4.e-6*t1347*t3112;
  t3356 = t2334*t3159;
  t3368 = -1.*t1347*t3274;
  t3389 = 0. + t3352 + t3356 + t3368;
  t1590 = t1344*t1284;
  t1614 = t1294*t1452;
  t1630 = t1590 + t1614;
  t1298 = -1.*t1284*t1294;
  t1456 = t1344*t1452;
  t1533 = t1298 + t1456;
  t691 = 4.e-6*t21*t483;
  t941 = t8*t851;
  t942 = t691 + t941;
  t1556 = t1201*t1533;
  t1693 = -1.*t1630*t1657;
  t1736 = t1556 + t1693;
  t3504 = Cos(var1[3]);
  t2561 = t1344*t2289;
  t2637 = t1294*t2477;
  t2781 = 0. + t2561 + t2637;
  t2308 = -1.*t1294*t2289;
  t2495 = t1344*t2477;
  t2502 = 0. + t2308 + t2495;
  t3608 = Sin(var1[3]);
  t1919 = t1347*t1900;
  t2108 = 4.e-6*t21*t2078;
  t2150 = t8*t2142;
  t2155 = 0. + t1919 + t2108 + t2150;
  t2520 = t1201*t2502;
  t2792 = -1.*t2781*t1657;
  t2810 = 0. + t2520 + t2792;
  t3440 = t1344*t3319;
  t3448 = t1294*t3389;
  t3456 = 0. + t3440 + t3448;
  t3331 = -1.*t1294*t3319;
  t3390 = t1344*t3389;
  t3412 = 0. + t3331 + t3390;
  t3128 = 4.e-6*t21*t3112;
  t3229 = t1347*t3159;
  t3278 = t8*t3274;
  t3283 = 0. + t3128 + t3229 + t3278;
  t3422 = t1201*t3412;
  t3460 = -1.*t3456*t1657;
  t3465 = 0. + t3422 + t3460;
  t3545 = t1201*t1630;
  t3577 = t1533*t1657;
  t3598 = t3545 + t3577;
  t3612 = t942*t1171;
  t3625 = -1.*t1047*t1736;
  t3629 = t3612 + t3625;
  t3664 = t1201*t2781;
  t3669 = t2502*t1657;
  t3672 = 0. + t3664 + t3669;
  t3701 = t1171*t2155;
  t3707 = -1.*t1047*t2810;
  t3734 = 0. + t3701 + t3707;
  t3777 = t1201*t3456;
  t3793 = t3412*t1657;
  t3805 = 0. + t3777 + t3793;
  t3810 = t1171*t3283;
  t3815 = -1.*t1047*t3465;
  t3819 = 0. + t3810 + t3815;
  t2184 = t2155*t1047;
  t2816 = t1171*t2810;
  t2836 = 0. + t2184 + t2816;
  t3944 = -1.26e-8*var1[11];
  t3948 = 1. + t401;
  t3953 = -0.14871*t3948;
  t3954 = -1.64779999997447e-7*t282;
  t3958 = -1.59556e-7*t303;
  t3960 = -1.199987999968e-6*t1863;
  t3966 = t3944 + t3953 + t3954 + t3958 + t3960;
  t3994 = 0.803147*t1798;
  t4002 = 0.50315000001605*t282;
  t4006 = 0.00130540515936178*t1863;
  t4016 = t3994 + t4002 + t4006;
  t4030 = -5.04e-14*var1[11];
  t4031 = -0.03988959484*t282;
  t4033 = 6.38224e-13*t303;
  t4034 = -0.041195*t35;
  t4037 = 0.299996999992*t1863;
  t4039 = t4030 + t4031 + t4033 + t4034 + t4037;
  t3916 = -1.*t1344;
  t3921 = 1. + t3916;
  t3932 = -0.15121*t1294;
  t3937 = -1.2484e-7*var1[10];
  t3940 = 2.479936e-18*t21;
  t3941 = -1.54996e-7*t1231;
  t3942 = 1.124840000016e-6*t1347;
  t3975 = t1233*t3966;
  t4026 = -4.e-6*t1347*t4016;
  t4041 = 4.e-6*t21*t4039;
  t4053 = t3937 + t3940 + t3941 + t3942 + t3975 + t4026 + t4041;
  t4056 = 0.281210000008499*t21;
  t4060 = -0.03874900000062*t1347;
  t4061 = 4.e-6*t1347*t3966;
  t4064 = t2334*t4016;
  t4082 = -1.*t1347*t4039;
  t4090 = t4056 + t4060 + t4061 + t4064 + t4082;
  t1140 = t942*t1047;
  t1751 = t1171*t1736;
  t1758 = t1140 + t1751;
  t4101 = 0.15121*t3921;
  t4103 = -1.*t1294*t4053;
  t4108 = t1344*t4090;
  t4111 = t4101 + t3932 + t4103 + t4108;
  t3923 = -0.15121*t3921;
  t4054 = t1344*t4053;
  t4092 = t1294*t4090;
  t4094 = t3923 + t3932 + t4054 + t4092;
  t4133 = -4.9936e-13*var1[10];
  t4136 = -0.038749*t21;
  t4142 = 6.19984e-13*t1231;
  t4147 = -0.281210000004*t1347;
  t4152 = 4.e-6*t21*t3966;
  t4153 = t1347*t4016;
  t4155 = t8*t4039;
  t4159 = 0. + t4133 + t4136 + t4142 + t4147 + t4152 + t4153 + t4155;
  t4170 = t1201*t4111;
  t4171 = -1.*t4094*t1657;
  t4178 = 0. + t4170 + t4171;
  t4099 = t1201*t4094;
  t4123 = t4111*t1657;
  t4128 = 0. + t4099 + t4123;
  t4166 = t4159*t1047;
  t4183 = t1171*t4178;
  t4186 = 0. + t4166 + t4183;
  t4194 = t1171*t4159;
  t4198 = -1.*t1047*t4178;
  t4207 = 0. + t4194 + t4198;
  t3292 = t3283*t1047;
  t3470 = t1171*t3465;
  t3485 = 0. + t3292 + t3470;
  t4129 = t3598*t4128;
  t4224 = -1.*t3672*t4128;
  t4260 = t3672*t4128;
  t4276 = -1.*t4128*t3805;
  t4320 = -1.*t3598*t4128;
  t4336 = t4128*t3805;
  t4370 = -1.*t2155*t4159;
  t4364 = t942*t4159;
  t4424 = t4159*t3283;
  t4401 = -1.*t942*t4159;
  t4391 = -1.*t4159*t3283;
  t4381 = t2155*t4159;
  t4625 = t4133 + t4136 + t4142 + t4147 + t4152 + t4153 + t4155;
  t4789 = t3966*t2078;
  t4790 = t1900*t4016;
  t4792 = t2142*t4039;
  t4793 = t4789 + t4790 + t4792;
  t4777 = -1.*t3112*t3966;
  t4781 = -1.*t4016*t3159;
  t4783 = -1.*t4039*t3274;
  t4784 = t4777 + t4781 + t4783;
  t4808 = t3112*t3966;
  t4809 = t4016*t3159;
  t4813 = t4039*t3274;
  t4814 = t4808 + t4809 + t4813;
  t4822 = -1.*t483*t3966;
  t4823 = -1.*t851*t4039;
  t4835 = t4822 + t4823;
  t4866 = -1.*t3966*t2078;
  t4867 = -1.*t1900*t4016;
  t4869 = -1.*t2142*t4039;
  t4870 = t4866 + t4867 + t4869;
  t4872 = t483*t3966;
  t4881 = t851*t4039;
  t4882 = t4872 + t4881;
  p_output1[0]=t3485*var2[0] + t2836*var2[1] + t1758*var2[2];
  p_output1[1]=(0. + t3504*t3805 - 1.*t3608*t3819)*var2[0] + (0. + t3504*t3672 - 1.*t3608*t3734)*var2[1] + (t3504*t3598 - 1.*t3608*t3629)*var2[2];
  p_output1[2]=(0. + t3608*t3805 + t3504*t3819)*var2[0] + (0. + t3608*t3672 + t3504*t3734)*var2[1] + (t3598*t3608 + t3504*t3629)*var2[2];
  p_output1[3]=(t2836*(t4129 + t1758*t4186 + t3629*t4207) + t1758*(-1.*t2836*t4186 - 1.*t3734*t4207 + t4224))*var2[0] + (t3485*(-1.*t1758*t4186 - 1.*t3629*t4207 + t4320) + t1758*(t3485*t4186 + t3819*t4207 + t4336))*var2[1] + (t3485*(t2836*t4186 + t3734*t4207 + t4260) + t2836*(-1.*t3485*t4186 - 1.*t3819*t4207 + t4276))*var2[2];
  p_output1[4]=(t3672*(t4129 + t1736*t4178 + t4364) + t3598*(-1.*t2810*t4178 + t4224 + t4370))*var2[0] + (t3805*(-1.*t1736*t4178 + t4320 + t4401) + t3598*(t3465*t4178 + t4336 + t4424))*var2[1] + (t3805*(t2810*t4178 + t4260 + t4381) + t3672*(-1.*t3465*t4178 + t4276 + t4391))*var2[2];
  p_output1[5]=(t2155*(t1630*t4094 + t1533*t4111 + t4364) + (-1.*t2781*t4094 - 1.*t2502*t4111 + t4370)*t942)*var2[0] + (t3283*(-1.*t1630*t4094 - 1.*t1533*t4111 + t4401) + (t3456*t4094 + t3412*t4111 + t4424)*t942)*var2[1] + (t3283*(t2781*t4094 + t2502*t4111 + t4381) + t2155*(-1.*t3456*t4094 - 1.*t3412*t4111 + t4391))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-0.15121*t3319 - 0.15121*t3389 + (-1.*t2289*t4053 - 1.*t2477*t4090 - 1.*t2155*t4625)*t942 + t2155*(t1284*t4053 + t1452*t4090 + t4625*t942))*var2[0] + (-0.15121*t2289 - 0.15121*t2477 + (t3319*t4053 + t3389*t4090 + t3283*t4625)*t942 + t3283*(-1.*t1284*t4053 - 1.*t1452*t4090 - 1.*t4625*t942))*var2[1] + (-0.15121*t1284 - 0.15121*t1452 + t3283*(t2289*t4053 + t2477*t4090 + t2155*t4625) + t2155*(-1.*t3319*t4053 - 1.*t3389*t4090 - 1.*t3283*t4625))*var2[2];
  p_output1[10]=(1.e-6*t3112 - 0.038749*t3159 - 0.28121*t3274 - 1.*t483*t4870 - 1.*t2078*t4882 + 4.e-6*(-1.*t2142*t4882 - 1.*t4870*t851))*var2[0] + (-0.038749*t1900 + 1.e-6*t2078 - 0.28121*t2142 - 1.*t4814*t483 - 1.*t3112*t4835 + 4.e-6*(-1.*t3274*t4835 - 1.*t4814*t851))*var2[1] + (-1.*t2078*t4784 - 1.*t3112*t4793 + 4.e-6*(-1.*t2142*t4784 - 1.*t3274*t4793) + 1.e-6*t483 - 0.28121*t851)*var2[2];
  p_output1[11]=-1.9353204325022392e-7*var2[0] + 0.29999998115510645*var2[1] + 1.1914820871506078e-8*var2[2];
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
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

#include "fFrFoot_vec_ParallelImpact.hh"

namespace SymFunction
{

void fFrFoot_vec_ParallelImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
