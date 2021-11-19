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
  double t1799;
  double t1886;
  double t1996;
  double t2264;
  double t832;
  double t1235;
  double t1237;
  double t1244;
  double t1384;
  double t1451;
  double t2919;
  double t2921;
  double t1233;
  double t3358;
  double t3655;
  double t2136;
  double t4011;
  double t4012;
  double t4019;
  double t4037;
  double t3108;
  double t3917;
  double t3802;
  double t3803;
  double t3861;
  double t3974;
  double t3990;
  double t3999;
  double t4082;
  double t2945;
  double t4090;
  double t2365;
  double t4029;
  double t4175;
  double t4176;
  double t4205;
  double t3697;
  double t4116;
  double t3670;
  double t4234;
  double t4097;
  double t4109;
  double t4132;
  double t4139;
  double t4141;
  double t4143;
  double t4146;
  double t4151;
  double t4238;
  double t4194;
  double t4195;
  double t4202;
  double t4209;
  double t4211;
  double t4213;
  double t4214;
  double t4224;
  double t4250;
  double t4252;
  double t4259;
  double t4262;
  double t4263;
  double t4265;
  double t4269;
  double t4272;
  double t4166;
  double t4280;
  double t4181;
  double t4291;
  double t4274;
  double t4047;
  double t1794;
  double t2062;
  double t2547;
  double t2594;
  double t2997;
  double t3050;
  double t3069;
  double t1458;
  double t1734;
  double t4343;
  double t3316;
  double t3345;
  double t4350;
  double t3505;
  double t3620;
  double t3683;
  double t3692;
  double t3704;
  double t3770;
  double t3798;
  double t4346;
  double t4352;
  double t4354;
  double t4358;
  double t4359;
  double t4360;
  double t3896;
  double t3906;
  double t3918;
  double t3927;
  double t3932;
  double t3951;
  double t3968;
  double t4004;
  double t4021;
  double t4077;
  double t4080;
  double t4083;
  double t4088;
  double t4089;
  double t4366;
  double t4367;
  double t4369;
  double t4371;
  double t4372;
  double t4373;
  double t4159;
  double t4160;
  double t4172;
  double t4174;
  double t4188;
  double t4189;
  double t4192;
  double t4231;
  double t4232;
  double t4235;
  double t4236;
  double t4241;
  double t4242;
  double t4245;
  double t4275;
  double t4379;
  double t4383;
  double t4385;
  double t4387;
  double t4281;
  double t4390;
  double t4395;
  double t4396;
  double t4401;
  double t4284;
  double t4286;
  double t4407;
  double t4409;
  double t4411;
  double t4412;
  double t4292;
  double t4298;
  double t4299;
  double t4303;
  double t4316;
  double t4319;
  double t4326;
  double t4331;
  double t4445;
  double t4446;
  double t4447;
  double t4450;
  double t4451;
  double t4452;
  double t4454;
  double t4455;
  double t4458;
  double t4460;
  double t4461;
  double t4463;
  double t4466;
  double t4469;
  double t4472;
  double t4473;
  double t4477;
  double t4478;
  double t4479;
  double t4480;
  double t4482;
  double t4483;
  double t4484;
  double t4485;
  t1799 = Cos(var1[16]);
  t1886 = -1.*t1799;
  t1996 = 1. + t1886;
  t2264 = Sin(var1[16]);
  t832 = Cos(var1[4]);
  t1235 = Cos(var1[15]);
  t1237 = -1.*t1235;
  t1244 = 1. + t1237;
  t1384 = -0.15121*t1244;
  t1451 = Sin(var1[15]);
  t2919 = -1. + t1799;
  t2921 = 4.e-6*t2919;
  t1233 = Cos(var1[5]);
  t3358 = Sin(var1[5]);
  t3655 = 7.e-6*t1996;
  t2136 = 2.8e-11*t1996;
  t4011 = Cos(var1[17]);
  t4012 = -1.*t4011;
  t4019 = 1. + t4012;
  t4037 = Sin(var1[17]);
  t3108 = Sin(var1[4]);
  t3917 = -4.e-6*t2264;
  t3802 = -1.*t832*t1233*t1451;
  t3803 = -1.*t1235*t832*t3358;
  t3861 = t3802 + t3803;
  t3974 = t1235*t832*t1233;
  t3990 = -1.*t832*t1451*t3358;
  t3999 = t3974 + t3990;
  t4082 = 2.8e-11*t4019;
  t2945 = -7.e-6*t2264;
  t4090 = -2.8e-11*t1996;
  t2365 = -1.*t2264;
  t4029 = 7.e-6*t4019;
  t4175 = -1. + t4011;
  t4176 = 4.e-6*t4175;
  t4205 = 4.e-6*t1996;
  t3697 = 7.e-6*t2264;
  t4116 = -7.e-6*t1996;
  t3670 = 4.e-6*t2264;
  t4234 = 4.e-6*t4037;
  t4097 = t4090 + t2264;
  t4109 = t4097*t3108;
  t4132 = t4116 + t3917;
  t4139 = t4132*t3861;
  t4141 = -1.000000000016*t1996;
  t4143 = 1. + t4141;
  t4146 = t4143*t3999;
  t4151 = t4109 + t4139 + t4146;
  t4238 = 7.e-6*t4037;
  t4194 = -1.000000000049*t1996;
  t4195 = 1. + t4194;
  t4202 = t4195*t3108;
  t4209 = t4205 + t2945;
  t4211 = t4209*t3861;
  t4213 = t4090 + t2365;
  t4214 = t4213*t3999;
  t4224 = t4202 + t4211 + t4214;
  t4250 = t4205 + t3697;
  t4252 = t4250*t3108;
  t4259 = -6.5e-11*t1996;
  t4262 = 1. + t4259;
  t4263 = t4262*t3861;
  t4265 = t4116 + t3670;
  t4269 = t4265*t3999;
  t4272 = t4252 + t4263 + t4269;
  t4166 = -1.*t4037;
  t4280 = 4.e-6*t4019;
  t4181 = -7.e-6*t4037;
  t4291 = -2.8e-11*t4019;
  t4274 = -7.e-6*t4019;
  t4047 = -4.e-6*t4037;
  t1794 = 1.5843479999999999e-12*var1[16];
  t2062 = -0.03874900000889869*t1996;
  t2547 = t2136 + t2365;
  t2594 = -0.281211000004*t2547;
  t2997 = t2921 + t2945;
  t3050 = -1.8134809999999998e-6*t2997;
  t3069 = t1794 + t2062 + t2594 + t3050;
  t1458 = -0.15121*t1451;
  t1734 = t1384 + t1458;
  t4343 = Sin(var1[3]);
  t3316 = 0.15121*t1451;
  t3345 = t1384 + t3316;
  t4350 = Cos(var1[3]);
  t3505 = 3.9608699999999997e-7*var1[16];
  t3620 = -1.1787626499999999e-16*t1996;
  t3683 = t3655 + t3670;
  t3692 = -0.281211000004*t3683;
  t3704 = t2921 + t3697;
  t3770 = -0.038749000006999997*t3704;
  t3798 = t3505 + t3620 + t3692 + t3770;
  t4346 = t1233*t4343*t3108;
  t4352 = t4350*t3358;
  t4354 = t4346 + t4352;
  t4358 = t4350*t1233;
  t4359 = -1.*t4343*t3108*t3358;
  t4360 = t4358 + t4359;
  t3896 = -2.7726089999999997e-12*var1[16];
  t3906 = -0.2812110000084994*t1996;
  t3918 = t3655 + t3917;
  t3927 = -1.8134809999999998e-6*t3918;
  t3932 = t2136 + t2264;
  t3951 = -0.038749000006999997*t3932;
  t3968 = t3896 + t3906 + t3927 + t3951;
  t4004 = -1.9784030000000015e-12*var1[17];
  t4021 = -0.5031510000160505*t4019;
  t4077 = t4029 + t4047;
  t4080 = -3.367757e-6*t4077;
  t4083 = t4082 + t4037;
  t4088 = -0.038575000014*t4083;
  t4089 = t4004 + t4021 + t4080 + t4088;
  t4366 = -1.*t1451*t4354;
  t4367 = t1235*t4360;
  t4369 = t4366 + t4367;
  t4371 = t1235*t4354;
  t4372 = t1451*t4360;
  t4373 = t4371 + t4372;
  t4159 = 1.1305160000000008e-12*var1[17];
  t4160 = -0.03857500001589017*t4019;
  t4172 = t4082 + t4166;
  t4174 = -0.5031510000080001*t4172;
  t4188 = t4176 + t4181;
  t4189 = -3.367757e-6*t4188;
  t4192 = t4159 + t4160 + t4174 + t4189;
  t4231 = 2.826290000000002e-7*var1[17];
  t4232 = -2.18904205e-16*t4019;
  t4235 = t4029 + t4234;
  t4236 = -0.5031510000080001*t4235;
  t4241 = t4176 + t4238;
  t4242 = -0.038575000014*t4241;
  t4245 = t4231 + t4232 + t4236 + t4242;
  t4275 = t4274 + t4234;
  t4379 = -1.*t832*t4097*t4343;
  t4383 = t4132*t4369;
  t4385 = t4143*t4373;
  t4387 = t4379 + t4383 + t4385;
  t4281 = t4280 + t4238;
  t4390 = -1.*t4195*t832*t4343;
  t4395 = t4209*t4369;
  t4396 = t4213*t4373;
  t4401 = t4390 + t4395 + t4396;
  t4284 = -6.5e-11*t4019;
  t4286 = 1. + t4284;
  t4407 = -1.*t832*t4250*t4343;
  t4409 = t4262*t4369;
  t4411 = t4265*t4373;
  t4412 = t4407 + t4409 + t4411;
  t4292 = t4291 + t4166;
  t4298 = -1.000000000049*t4019;
  t4299 = 1. + t4298;
  t4303 = t4280 + t4181;
  t4316 = -1.000000000016*t4019;
  t4319 = 1. + t4316;
  t4326 = t4291 + t4037;
  t4331 = t4274 + t4047;
  t4445 = -1.*t4350*t1233*t3108;
  t4446 = t4343*t3358;
  t4447 = t4445 + t4446;
  t4450 = t1233*t4343;
  t4451 = t4350*t3108*t3358;
  t4452 = t4450 + t4451;
  t4454 = -1.*t1451*t4447;
  t4455 = t1235*t4452;
  t4458 = t4454 + t4455;
  t4460 = t1235*t4447;
  t4461 = t1451*t4452;
  t4463 = t4460 + t4461;
  t4466 = t4350*t832*t4097;
  t4469 = t4132*t4458;
  t4472 = t4143*t4463;
  t4473 = t4466 + t4469 + t4472;
  t4477 = t4195*t4350*t832;
  t4478 = t4209*t4458;
  t4479 = t4213*t4463;
  t4480 = t4477 + t4478 + t4479;
  t4482 = t4350*t832*t4250;
  t4483 = t4262*t4458;
  t4484 = t4265*t4463;
  t4485 = t4482 + t4483 + t4484;
  p_output1[0]=t3069*t3108 + t3798*t3861 + t3968*t3999 + t4089*t4151 + t4192*t4224 + t4245*t4272 - 0.148715*(t4151*t4275 + t4224*t4281 + t4272*t4286) - 0.038576*(t4151*t4292 + t4224*t4299 + t4272*t4303) - 0.80315*(t4151*t4319 + t4224*t4326 + t4272*t4331) + t1233*t1734*t832 - 1.*t3345*t3358*t832 + var1[0];
  p_output1[1]=t1734*t4354 + t3345*t4360 + t3798*t4369 + t3968*t4373 + t4089*t4387 + t4192*t4401 + t4245*t4412 - 0.148715*(t4275*t4387 + t4281*t4401 + t4286*t4412) - 0.038576*(t4292*t4387 + t4299*t4401 + t4303*t4412) - 0.80315*(t4319*t4387 + t4326*t4401 + t4331*t4412) - 1.*t3069*t4343*t832 + var1[1];
  p_output1[2]=t1734*t4447 + t3345*t4452 + t3798*t4458 + t3968*t4463 + t4089*t4473 + t4192*t4480 + t4245*t4485 - 0.148715*(t4275*t4473 + t4281*t4480 + t4286*t4485) - 0.038576*(t4292*t4473 + t4299*t4480 + t4303*t4485) - 0.80315*(t4319*t4473 + t4326*t4480 + t4331*t4485) + t3069*t4350*t832 + var1[2];
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

#include "RrFoot_sphere_center.hh"

namespace SymFunction
{

void RrFoot_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
