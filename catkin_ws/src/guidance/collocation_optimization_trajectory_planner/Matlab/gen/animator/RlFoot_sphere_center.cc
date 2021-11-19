/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 18:01:49 GMT+01:00
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
  double t1278;
  double t1291;
  double t1298;
  double t1722;
  double t229;
  double t249;
  double t524;
  double t739;
  double t957;
  double t966;
  double t1563;
  double t231;
  double t2535;
  double t1758;
  double t3211;
  double t3897;
  double t3903;
  double t3904;
  double t3910;
  double t3687;
  double t1831;
  double t3733;
  double t3436;
  double t3553;
  double t3594;
  double t3861;
  double t3877;
  double t3892;
  double t3922;
  double t2989;
  double t3954;
  double t3240;
  double t4005;
  double t3907;
  double t4026;
  double t4027;
  double t1723;
  double t3945;
  double t3949;
  double t3951;
  double t3968;
  double t3974;
  double t3979;
  double t3987;
  double t3990;
  double t3991;
  double t4085;
  double t4028;
  double t4029;
  double t4035;
  double t4036;
  double t4037;
  double t4047;
  double t4077;
  double t4079;
  double t4104;
  double t4106;
  double t4109;
  double t4116;
  double t4132;
  double t4139;
  double t4141;
  double t4142;
  double t3924;
  double t4144;
  double t3915;
  double t4169;
  double t4014;
  double t4148;
  double t4149;
  double t4007;
  double t1237;
  double t1451;
  double t1734;
  double t1736;
  double t1794;
  double t1799;
  double t1818;
  double t771;
  double t1152;
  double t4203;
  double t2161;
  double t2508;
  double t4210;
  double t2921;
  double t2945;
  double t2997;
  double t3050;
  double t3253;
  double t3345;
  double t3431;
  double t4209;
  double t4211;
  double t4212;
  double t4214;
  double t4216;
  double t4217;
  double t3655;
  double t3670;
  double t3697;
  double t3704;
  double t3802;
  double t3803;
  double t3816;
  double t3896;
  double t3906;
  double t3917;
  double t3918;
  double t3927;
  double t3932;
  double t3933;
  double t4229;
  double t4232;
  double t4233;
  double t4235;
  double t4236;
  double t4237;
  double t4003;
  double t4004;
  double t4011;
  double t4012;
  double t4019;
  double t4021;
  double t4023;
  double t4082;
  double t4083;
  double t4088;
  double t4089;
  double t4090;
  double t4097;
  double t4099;
  double t4145;
  double t4240;
  double t4241;
  double t4242;
  double t4244;
  double t4150;
  double t4247;
  double t4250;
  double t4252;
  double t4258;
  double t4153;
  double t4155;
  double t4261;
  double t4262;
  double t4263;
  double t4264;
  double t4163;
  double t4164;
  double t4171;
  double t4173;
  double t4177;
  double t4184;
  double t4186;
  double t4190;
  double t4295;
  double t4298;
  double t4301;
  double t4303;
  double t4306;
  double t4309;
  double t4311;
  double t4313;
  double t4314;
  double t4319;
  double t4322;
  double t4323;
  double t4327;
  double t4331;
  double t4333;
  double t4334;
  double t4337;
  double t4340;
  double t4343;
  double t4344;
  double t4346;
  double t4350;
  double t4352;
  double t4353;
  t1278 = Cos(var1[13]);
  t1291 = -1.*t1278;
  t1298 = 1. + t1291;
  t1722 = Sin(var1[13]);
  t229 = Cos(var1[4]);
  t249 = Cos(var1[12]);
  t524 = -1.*t249;
  t739 = 1. + t524;
  t957 = Sin(var1[12]);
  t966 = 0.15121*t957;
  t1563 = 4.e-6*t1298;
  t231 = Cos(var1[5]);
  t2535 = Sin(var1[5]);
  t1758 = -2.8e-11*t1298;
  t3211 = 7.e-6*t1298;
  t3897 = Cos(var1[14]);
  t3903 = -1.*t3897;
  t3904 = 1. + t3903;
  t3910 = Sin(var1[14]);
  t3687 = -1.*t1722;
  t1831 = Sin(var1[4]);
  t3733 = -4.e-6*t1722;
  t3436 = -1.*t229*t231*t957;
  t3553 = -1.*t249*t229*t2535;
  t3594 = t3436 + t3553;
  t3861 = t249*t229*t231;
  t3877 = -1.*t229*t957*t2535;
  t3892 = t3861 + t3877;
  t3922 = 7.e-6*t3904;
  t2989 = -7.e-6*t1722;
  t3954 = -7.e-6*t1298;
  t3240 = 4.e-6*t1722;
  t4005 = 4.e-6*t3904;
  t3907 = -2.8e-11*t3904;
  t4026 = -1. + t1278;
  t4027 = 4.e-6*t4026;
  t1723 = 7.e-6*t1722;
  t3945 = 2.8e-11*t1298;
  t3949 = t3945 + t3687;
  t3951 = t3949*t1831;
  t3968 = t3954 + t3733;
  t3974 = t3968*t3594;
  t3979 = -1.000000000016*t1298;
  t3987 = 1. + t3979;
  t3990 = t3987*t3892;
  t3991 = t3951 + t3974 + t3990;
  t4085 = 7.e-6*t3910;
  t4028 = t4027 + t2989;
  t4029 = t4028*t1831;
  t4035 = -6.5e-11*t1298;
  t4036 = 1. + t4035;
  t4037 = t4036*t3594;
  t4047 = t3954 + t3240;
  t4077 = t4047*t3892;
  t4079 = t4029 + t4037 + t4077;
  t4104 = -1.000000000049*t1298;
  t4106 = 1. + t4104;
  t4109 = t4106*t1831;
  t4116 = t4027 + t1723;
  t4132 = t4116*t3594;
  t4139 = t3945 + t1722;
  t4141 = t4139*t3892;
  t4142 = t4109 + t4132 + t4141;
  t3924 = -4.e-6*t3910;
  t4144 = 2.8e-11*t3904;
  t3915 = -1.*t3910;
  t4169 = -7.e-6*t3904;
  t4014 = 4.e-6*t3910;
  t4148 = -1. + t3897;
  t4149 = 4.e-6*t4148;
  t4007 = -7.e-6*t3910;
  t1237 = 5.856279999999999e-13*var1[13];
  t1451 = -0.0387489999948987*t1298;
  t1734 = t1563 + t1723;
  t1736 = -2.123459e-6*t1734;
  t1794 = t1758 + t1722;
  t1799 = -0.281209000004*t1794;
  t1818 = t1237 + t1451 + t1736 + t1799;
  t771 = -0.15121*t739;
  t1152 = t771 + t966;
  t4203 = Sin(var1[3]);
  t2161 = 0.15121*t739;
  t2508 = t2161 + t966;
  t4210 = Cos(var1[3]);
  t2921 = -1.4640699999999997e-7*var1[13];
  t2945 = -1.38024835e-16*t1298;
  t2997 = t1563 + t2989;
  t3050 = -0.038748999993*t2997;
  t3253 = t3211 + t3240;
  t3345 = -0.281209000004*t3253;
  t3431 = t2921 + t2945 + t3050 + t3345;
  t4209 = t231*t4203*t1831;
  t4211 = t4210*t2535;
  t4212 = t4209 + t4211;
  t4214 = t4210*t231;
  t4216 = -1.*t4203*t1831*t2535;
  t4217 = t4214 + t4216;
  t3655 = 1.0248489999999998e-12*var1[13];
  t3670 = -0.28120900000849935*t1298;
  t3697 = t1758 + t3687;
  t3704 = -0.038748999993*t3697;
  t3802 = t3211 + t3733;
  t3803 = -2.123459e-6*t3802;
  t3816 = t3655 + t3670 + t3704 + t3803;
  t3896 = 1.8190549999999993e-12*var1[14];
  t3906 = -0.5031490000160505*t3904;
  t3917 = t3907 + t3915;
  t3918 = -0.038922999986*t3917;
  t3927 = t3922 + t3924;
  t3932 = -3.6777349999999994e-6*t3927;
  t3933 = t3896 + t3906 + t3918 + t3932;
  t4229 = -1.*t957*t4212;
  t4232 = t249*t4217;
  t4233 = t4229 + t4232;
  t4235 = t249*t4212;
  t4236 = t957*t4217;
  t4237 = t4235 + t4236;
  t4003 = -2.598649999999999e-7*var1[14];
  t4004 = -2.3905277499999995e-16*t3904;
  t4011 = t4005 + t4007;
  t4012 = -0.038922999986*t4011;
  t4019 = t3922 + t4014;
  t4021 = -0.503149000008*t4019;
  t4023 = t4003 + t4004 + t4012 + t4021;
  t4082 = 1.0394599999999997e-12*var1[14];
  t4083 = -0.03892299998790722*t3904;
  t4088 = t4005 + t4085;
  t4089 = -3.6777349999999994e-6*t4088;
  t4090 = t3907 + t3910;
  t4097 = -0.503149000008*t4090;
  t4099 = t4082 + t4083 + t4089 + t4097;
  t4145 = t4144 + t3910;
  t4240 = -1.*t229*t3949*t4203;
  t4241 = t3968*t4233;
  t4242 = t3987*t4237;
  t4244 = t4240 + t4241 + t4242;
  t4150 = t4149 + t4085;
  t4247 = -1.*t229*t4028*t4203;
  t4250 = t4036*t4233;
  t4252 = t4047*t4237;
  t4258 = t4247 + t4250 + t4252;
  t4153 = -1.000000000049*t3904;
  t4155 = 1. + t4153;
  t4261 = -1.*t4106*t229*t4203;
  t4262 = t4116*t4233;
  t4263 = t4139*t4237;
  t4264 = t4261 + t4262 + t4263;
  t4163 = -1.000000000016*t3904;
  t4164 = 1. + t4163;
  t4171 = t4169 + t3924;
  t4173 = t4144 + t3915;
  t4177 = t4169 + t4014;
  t4184 = -6.5e-11*t3904;
  t4186 = 1. + t4184;
  t4190 = t4149 + t4007;
  t4295 = -1.*t4210*t231*t1831;
  t4298 = t4203*t2535;
  t4301 = t4295 + t4298;
  t4303 = t231*t4203;
  t4306 = t4210*t1831*t2535;
  t4309 = t4303 + t4306;
  t4311 = -1.*t957*t4301;
  t4313 = t249*t4309;
  t4314 = t4311 + t4313;
  t4319 = t249*t4301;
  t4322 = t957*t4309;
  t4323 = t4319 + t4322;
  t4327 = t4210*t229*t3949;
  t4331 = t3968*t4314;
  t4333 = t3987*t4323;
  t4334 = t4327 + t4331 + t4333;
  t4337 = t4210*t229*t4028;
  t4340 = t4036*t4314;
  t4343 = t4047*t4323;
  t4344 = t4337 + t4340 + t4343;
  t4346 = t4106*t4210*t229;
  t4350 = t4116*t4314;
  t4352 = t4139*t4323;
  t4353 = t4346 + t4350 + t4352;
  p_output1[0]=t1818*t1831 + t1152*t229*t231 - 1.*t229*t2508*t2535 + t3431*t3594 + t3816*t3892 + t3933*t3991 + t4023*t4079 + t4099*t4142 - 0.038924*(t3991*t4145 + t4079*t4150 + t4142*t4155) - 0.80315*(t3991*t4164 + t4079*t4171 + t4142*t4173) + 0.148705*(t3991*t4177 + t4079*t4186 + t4142*t4190) + var1[0];
  p_output1[1]=-1.*t1818*t229*t4203 + t1152*t4212 + t2508*t4217 + t3431*t4233 + t3816*t4237 + t3933*t4244 + t4023*t4258 + t4099*t4264 - 0.038924*(t4145*t4244 + t4150*t4258 + t4155*t4264) - 0.80315*(t4164*t4244 + t4171*t4258 + t4173*t4264) + 0.148705*(t4177*t4244 + t4186*t4258 + t4190*t4264) + var1[1];
  p_output1[2]=t1818*t229*t4210 + t1152*t4301 + t2508*t4309 + t3431*t4314 + t3816*t4323 + t3933*t4334 + t4023*t4344 + t4099*t4353 - 0.038924*(t4145*t4334 + t4150*t4344 + t4155*t4353) - 0.80315*(t4164*t4334 + t4171*t4344 + t4173*t4353) + 0.148705*(t4177*t4334 + t4186*t4344 + t4190*t4353) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "RlFoot_sphere_center.hh"

namespace SymFunction
{

void RlFoot_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
