/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 17:58:43 GMT+02:00
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
  double t4243;
  double t4148;
  double t4222;
  double t4244;
  double t4331;
  double t4332;
  double t4333;
  double t4321;
  double t4327;
  double t4335;
  double t4326;
  double t4341;
  double t4253;
  double t4225;
  double t4248;
  double t4249;
  double t4334;
  double t4346;
  double t4354;
  double t4452;
  double t4357;
  double t4358;
  double t4362;
  double t4432;
  double t4378;
  double t4379;
  double t4380;
  double t4400;
  double t4407;
  double t4408;
  double t4433;
  double t4434;
  double t4437;
  double t4466;
  double t4474;
  double t4475;
  double t4481;
  double t4484;
  double t4485;
  double t4490;
  double t4503;
  double t4507;
  double t4509;
  double t4513;
  double t4514;
  double t4381;
  double t4409;
  double t4423;
  double t4536;
  double t4537;
  double t4538;
  double t4545;
  double t4546;
  double t4547;
  double t4551;
  double t4556;
  double t4557;
  double t4558;
  double t4560;
  double t4561;
  double t4562;
  double t4563;
  double t4567;
  double t4568;
  double t4540;
  double t4544;
  double t4564;
  double t4565;
  double t4572;
  double t4573;
  double t4574;
  double t4575;
  double t4577;
  double t4578;
  double t4579;
  double t4566;
  double t4569;
  double t4570;
  double t4576;
  double t4580;
  double t4581;
  double t4583;
  double t4584;
  double t4585;
  double t4307;
  double t4355;
  double t4356;
  double t4571;
  double t4589;
  double t4597;
  double t4602;
  double t4608;
  double t4613;
  double t4629;
  double t4633;
  t4243 = Cos(var1[16]);
  t4148 = Cos(var1[17]);
  t4222 = Sin(var1[16]);
  t4244 = Sin(var1[17]);
  t4331 = -1.*t4243*t4148;
  t4332 = -1.*t4222*t4244;
  t4333 = t4331 + t4332;
  t4321 = Cos(var1[4]);
  t4327 = Cos(var1[5]);
  t4335 = Sin(var1[15]);
  t4326 = Cos(var1[15]);
  t4341 = Sin(var1[5]);
  t4253 = Sin(var1[4]);
  t4225 = -1.*t4148*t4222;
  t4248 = t4243*t4244;
  t4249 = t4225 + t4248;
  t4334 = t4326*t4327*t4333;
  t4346 = -1.*t4335*t4333*t4341;
  t4354 = t4334 + t4346;
  t4452 = Sin(var1[3]);
  t4357 = t4327*t4335;
  t4358 = t4326*t4341;
  t4362 = t4357 + t4358;
  t4432 = Cos(var1[3]);
  t4378 = t4243*t4148;
  t4379 = t4222*t4244;
  t4380 = t4378 + t4379;
  t4400 = t4326*t4327*t4249;
  t4407 = -1.*t4335*t4249*t4341;
  t4408 = t4400 + t4407;
  t4433 = t4327*t4335*t4333;
  t4434 = t4326*t4333*t4341;
  t4437 = t4433 + t4434;
  t4466 = t4321*t4249;
  t4474 = -1.*t4253*t4354;
  t4475 = t4466 + t4474;
  t4481 = -1.*t4326*t4327;
  t4484 = t4335*t4341;
  t4485 = t4481 + t4484;
  t4490 = t4327*t4335*t4249;
  t4503 = t4326*t4249*t4341;
  t4507 = t4490 + t4503;
  t4509 = t4321*t4380;
  t4513 = -1.*t4253*t4408;
  t4514 = t4509 + t4513;
  t4381 = t4380*t4253;
  t4409 = t4321*t4408;
  t4423 = t4381 + t4409;
  t4536 = -1.*t4326;
  t4537 = 1. + t4536;
  t4538 = -0.15121*t4537;
  t4545 = -1.*t4243;
  t4546 = 1. + t4545;
  t4547 = -0.28121*t4546;
  t4551 = -1.*t4148;
  t4556 = 1. + t4551;
  t4557 = -0.50321*t4556;
  t4558 = -0.19821*t4148;
  t4560 = t4557 + t4558;
  t4561 = t4243*t4560;
  t4562 = 0.305*t4222*t4244;
  t4563 = t4547 + t4561 + t4562;
  t4567 = t4326*t4563;
  t4568 = t4538 + t4567;
  t4540 = -0.15121*t4326;
  t4544 = 0.15121*t4335;
  t4564 = t4335*t4563;
  t4565 = t4538 + t4540 + t4544 + t4564;
  t4572 = 0.28121*t4222;
  t4573 = t4560*t4222;
  t4574 = -0.305*t4243*t4244;
  t4575 = t4572 + t4573 + t4574;
  t4577 = t4327*t4568;
  t4578 = -1.*t4565*t4341;
  t4579 = t4577 + t4578;
  t4566 = t4327*t4565;
  t4569 = t4568*t4341;
  t4570 = t4566 + t4569;
  t4576 = t4575*t4253;
  t4580 = t4321*t4579;
  t4581 = t4576 + t4580;
  t4583 = t4321*t4575;
  t4584 = -1.*t4253*t4579;
  t4585 = t4583 + t4584;
  t4307 = t4249*t4253;
  t4355 = t4321*t4354;
  t4356 = t4307 + t4355;
  t4571 = -1.*t4485*t4570;
  t4589 = t4507*t4570;
  t4597 = -1.*t4507*t4570;
  t4602 = t4437*t4570;
  t4608 = t4485*t4570;
  t4613 = -1.*t4437*t4570;
  t4629 = -1.*t4575*t4380;
  t4633 = t4575*t4249;
  p_output1[0]=t4356;
  p_output1[1]=t4321*t4362;
  p_output1[2]=t4423;
  p_output1[3]=t4432*t4437 - 1.*t4452*t4475;
  p_output1[4]=t4253*t4362*t4452 + t4432*t4485;
  p_output1[5]=t4432*t4507 - 1.*t4452*t4514;
  p_output1[6]=t4437*t4452 + t4432*t4475;
  p_output1[7]=-1.*t4253*t4362*t4432 + t4452*t4485;
  p_output1[8]=t4452*t4507 + t4432*t4514;
  p_output1[9]=t4423*(t4571 - 1.*t4321*t4362*t4581 + t4253*t4362*t4585) + t4321*t4362*(t4423*t4581 + t4514*t4585 + t4589);
  p_output1[10]=t4356*(-1.*t4423*t4581 - 1.*t4514*t4585 + t4597) + t4423*(t4356*t4581 + t4475*t4585 + t4602);
  p_output1[11]=t4356*(t4321*t4362*t4581 - 1.*t4253*t4362*t4585 + t4608) + t4321*t4362*(-1.*t4356*t4581 - 1.*t4475*t4585 + t4613);
  p_output1[12]=t4507*(t4571 - 1.*t4362*t4579) + t4485*(t4380*t4575 + t4408*t4579 + t4589);
  p_output1[13]=t4437*(-1.*t4408*t4579 + t4597 + t4629) + t4507*(t4354*t4579 + t4602 + t4633);
  p_output1[14]=t4437*(t4362*t4579 + t4608) + t4485*(-1.*t4249*t4575 - 1.*t4354*t4579 + t4613);
  p_output1[15]=t4380*(t4326*t4565 - 1.*t4335*t4568);
  p_output1[16]=t4249*(-1.*t4249*t4335*t4565 - 1.*t4249*t4326*t4568 + t4629) + t4380*(t4333*t4335*t4565 + t4326*t4333*t4568 + t4633);
  p_output1[17]=t4249*(-1.*t4326*t4565 + t4335*t4568);
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
  p_output1[45]=-0.15121*t4333 - 0.15121*t4380;
  p_output1[46]=-0.15121 + t4249*(-1.*t4249*t4563 + t4629) + t4380*(t4333*t4563 + t4633);
  p_output1[47]=0;
  p_output1[48]=0.28121*t4244 - 0.305*t4148*t4244 + t4244*t4560;
  p_output1[49]=0;
  p_output1[50]=0.28121*t4148 + 0.305*Power(t4244,2) + t4148*t4560;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=-0.305;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_RrFoot_ParallelStance.hh"

namespace SymFunction
{

void Jh_RrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
