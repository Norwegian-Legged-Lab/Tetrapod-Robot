/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:54:54 GMT+02:00
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
  double t4095;
  double t4082;
  double t4097;
  double t4127;
  double t4119;
  double t4121;
  double t4135;
  double t4049;
  double t4122;
  double t4136;
  double t4137;
  double t4105;
  double t4145;
  double t4146;
  double t4152;
  double t4140;
  double t4255;
  double t4259;
  double t4153;
  double t4154;
  double t4155;
  double t4161;
  double t4162;
  double t4241;
  double t4245;
  double t4246;
  double t4247;
  double t4260;
  double t4261;
  double t4262;
  double t4267;
  double t4268;
  double t4269;
  double t4272;
  double t4273;
  double t4274;
  double t4280;
  double t4281;
  double t4282;
  double t4285;
  double t4286;
  double t4287;
  double t4138;
  double t4156;
  double t4157;
  double t4317;
  double t4318;
  double t4319;
  double t4324;
  double t4325;
  double t4326;
  double t4327;
  double t4328;
  double t4329;
  double t4094;
  double t4107;
  double t4109;
  double t4316;
  double t4320;
  double t4330;
  double t4331;
  double t4341;
  double t4342;
  double t4343;
  double t4354;
  double t4358;
  double t4359;
  double t4312;
  double t4313;
  double t4314;
  double t4315;
  double t4334;
  double t4339;
  double t4364;
  double t4365;
  double t4366;
  double t4375;
  double t4376;
  double t4378;
  double t4340;
  double t4360;
  double t4362;
  double t4370;
  double t4379;
  double t4380;
  double t4382;
  double t4383;
  double t4387;
  double t4159;
  double t4249;
  double t4250;
  double t4363;
  double t4394;
  double t4401;
  double t4410;
  double t4419;
  double t4424;
  double t4455;
  double t4459;
  double t4433;
  double t4439;
  double t4449;
  double t4445;
  double t4494;
  double t4487;
  t4095 = Cos(var1[9]);
  t4082 = Sin(var1[4]);
  t4097 = Cos(var1[4]);
  t4127 = Cos(var1[10]);
  t4119 = Cos(var1[11]);
  t4121 = Sin(var1[10]);
  t4135 = Sin(var1[11]);
  t4049 = Sin(var1[9]);
  t4122 = t4119*t4121;
  t4136 = -1.*t4127*t4135;
  t4137 = t4122 + t4136;
  t4105 = Sin(var1[5]);
  t4145 = t4127*t4119;
  t4146 = t4121*t4135;
  t4152 = t4145 + t4146;
  t4140 = Cos(var1[5]);
  t4255 = Cos(var1[3]);
  t4259 = Sin(var1[3]);
  t4153 = t4140*t4152;
  t4154 = t4049*t4137*t4105;
  t4155 = t4153 + t4154;
  t4161 = -1.*t4119*t4121;
  t4162 = t4127*t4135;
  t4241 = t4161 + t4162;
  t4245 = t4140*t4241;
  t4246 = t4049*t4152*t4105;
  t4247 = t4245 + t4246;
  t4260 = t4097*t4049;
  t4261 = t4095*t4082*t4105;
  t4262 = t4260 + t4261;
  t4267 = -1.*t4140*t4049*t4137;
  t4268 = t4152*t4105;
  t4269 = t4267 + t4268;
  t4272 = t4095*t4097*t4137;
  t4273 = -1.*t4082*t4155;
  t4274 = t4272 + t4273;
  t4280 = -1.*t4140*t4049*t4152;
  t4281 = t4241*t4105;
  t4282 = t4280 + t4281;
  t4285 = t4095*t4097*t4152;
  t4286 = -1.*t4082*t4247;
  t4287 = t4285 + t4286;
  t4138 = t4095*t4137*t4082;
  t4156 = t4097*t4155;
  t4157 = t4138 + t4156;
  t4317 = -0.0641*t4119;
  t4318 = -0.28*t4135;
  t4319 = t4317 + t4318;
  t4324 = -1.*t4119;
  t4325 = 1. + t4324;
  t4326 = -0.575*t4325;
  t4327 = -0.295*t4119;
  t4328 = -0.0641*t4135;
  t4329 = t4326 + t4327 + t4328;
  t4094 = t4049*t4082;
  t4107 = -1.*t4095*t4097*t4105;
  t4109 = t4094 + t4107;
  t4316 = 0.325*t4121;
  t4320 = t4127*t4319;
  t4330 = t4121*t4329;
  t4331 = t4316 + t4320 + t4330;
  t4341 = -1.*t4127;
  t4342 = 1. + t4341;
  t4343 = -0.325*t4342;
  t4354 = -1.*t4121*t4319;
  t4358 = t4127*t4329;
  t4359 = t4343 + t4354 + t4358;
  t4312 = -1.*t4095;
  t4313 = 1. + t4312;
  t4314 = 0.1575*t4313;
  t4315 = 0.2255*t4095;
  t4334 = -1.*t4049*t4331;
  t4339 = t4314 + t4315 + t4334;
  t4364 = 0.068*t4049;
  t4365 = t4095*t4331;
  t4366 = t4364 + t4365;
  t4375 = t4140*t4359;
  t4376 = -1.*t4339*t4105;
  t4378 = t4375 + t4376;
  t4340 = t4140*t4339;
  t4360 = t4359*t4105;
  t4362 = t4340 + t4360;
  t4370 = t4366*t4082;
  t4379 = t4097*t4378;
  t4380 = t4370 + t4379;
  t4382 = t4097*t4366;
  t4383 = -1.*t4082*t4378;
  t4387 = t4382 + t4383;
  t4159 = t4095*t4152*t4082;
  t4249 = t4097*t4247;
  t4250 = t4159 + t4249;
  t4363 = t4095*t4140*t4362;
  t4394 = -1.*t4362*t4269;
  t4401 = t4362*t4269;
  t4410 = -1.*t4362*t4282;
  t4419 = -1.*t4095*t4140*t4362;
  t4424 = t4362*t4282;
  t4455 = -1.*t4049*t4366;
  t4459 = t4095*t4366*t4152;
  t4433 = t4049*t4366;
  t4439 = -1.*t4095*t4366*t4137;
  t4449 = -1.*t4095*t4366*t4152;
  t4445 = t4095*t4366*t4137;
  t4494 = t4359*t4152;
  t4487 = -1.*t4359*t4241;
  p_output1[0]=t4157*var2[0] + t4109*var2[1] + t4250*var2[2];
  p_output1[1]=(t4255*t4269 - 1.*t4259*t4274)*var2[0] + (t4095*t4140*t4255 - 1.*t4259*t4262)*var2[1] + (t4255*t4282 - 1.*t4259*t4287)*var2[2];
  p_output1[2]=(t4259*t4269 + t4255*t4274)*var2[0] + (t4095*t4140*t4259 + t4255*t4262)*var2[1] + (t4259*t4282 + t4255*t4287)*var2[2];
  p_output1[3]=(t4250*(-1.*t4109*t4380 - 1.*t4262*t4387 + t4419) + t4109*(t4250*t4380 + t4287*t4387 + t4424))*var2[0] + (t4250*(t4157*t4380 + t4274*t4387 + t4401) + t4157*(-1.*t4250*t4380 - 1.*t4287*t4387 + t4410))*var2[1] + (t4157*(t4363 + t4109*t4380 + t4262*t4387) + t4109*(-1.*t4157*t4380 - 1.*t4274*t4387 + t4394))*var2[2];
  p_output1[4]=(t4282*(t4095*t4105*t4378 + t4419 + t4455) + t4095*t4140*(t4247*t4378 + t4424 + t4459))*var2[0] + (t4282*(t4155*t4378 + t4401 + t4445) + t4269*(-1.*t4247*t4378 + t4410 + t4449))*var2[1] + (t4269*(t4363 - 1.*t4095*t4105*t4378 + t4433) + t4095*t4140*(-1.*t4155*t4378 + t4394 + t4439))*var2[2];
  p_output1[5]=(t4095*t4152*(-1.*t4095*t4339 + t4455) + t4049*(-1.*t4049*t4152*t4339 + t4241*t4359 + t4459))*var2[0] + (t4095*t4137*(t4049*t4152*t4339 + t4449 + t4487) + t4095*t4152*(-1.*t4049*t4137*t4339 + t4445 + t4494))*var2[1] + (t4095*t4137*(t4095*t4339 + t4433) + t4049*(t4049*t4137*t4339 - 1.*t4152*t4359 + t4439))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-0.1575*t4137 - 0.2255*t4241)*var2[0] + (t4152*(-1.*t4152*t4331 + t4487) + t4241*(t4137*t4331 + t4494))*var2[1] + 0.068*t4152*var2[2];
  p_output1[10]=(-0.325*t4135 - 1.*t4119*t4319 - 1.*t4135*t4329)*var2[0] + (0.325*t4119 - 1.*t4135*t4319 + t4119*t4329)*var2[2];
  p_output1[11]=-0.0641*var2[0] - 0.28*var2[2];
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

#include "fRlFoot_vec_DiagonalStance.hh"

namespace SymFunction
{

void fRlFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
