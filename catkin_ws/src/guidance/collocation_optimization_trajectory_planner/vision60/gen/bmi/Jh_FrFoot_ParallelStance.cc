/*
 * Automatically Generated from Mathematica.
 * Thu 28 Apr 2022 15:23:54 GMT+02:00
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
  double t4291;
  double t4265;
  double t4276;
  double t4292;
  double t4290;
  double t4293;
  double t4295;
  double t4405;
  double t4303;
  double t4114;
  double t4396;
  double t4406;
  double t4398;
  double t4399;
  double t4400;
  double t4397;
  double t4402;
  double t4407;
  double t4412;
  double t4454;
  double t4461;
  double t4430;
  double t4432;
  double t4440;
  double t4444;
  double t4450;
  double t4451;
  double t4456;
  double t4457;
  double t4458;
  double t4462;
  double t4463;
  double t4468;
  double t4476;
  double t4477;
  double t4481;
  double t4495;
  double t4496;
  double t4497;
  double t4499;
  double t4500;
  double t4501;
  double t4429;
  double t4452;
  double t4453;
  double t4518;
  double t4519;
  double t4520;
  double t4522;
  double t4523;
  double t4524;
  double t4525;
  double t4526;
  double t4527;
  double t4422;
  double t4427;
  double t4428;
  double t4517;
  double t4521;
  double t4528;
  double t4529;
  double t4533;
  double t4534;
  double t4535;
  double t4536;
  double t4537;
  double t4538;
  double t4513;
  double t4514;
  double t4515;
  double t4516;
  double t4530;
  double t4531;
  double t4542;
  double t4543;
  double t4544;
  double t4546;
  double t4547;
  double t4548;
  double t4532;
  double t4539;
  double t4540;
  double t4545;
  double t4549;
  double t4550;
  double t4552;
  double t4553;
  double t4554;
  double t4309;
  double t4414;
  double t4416;
  double t4541;
  double t4558;
  double t4564;
  double t4569;
  double t4575;
  double t4580;
  double t4586;
  double t4590;
  double t4599;
  double t4595;
  double t4604;
  double t4608;
  double t4626;
  double t4621;
  t4291 = Cos(var1[13]);
  t4265 = Cos(var1[14]);
  t4276 = Sin(var1[13]);
  t4292 = Sin(var1[14]);
  t4290 = t4265*t4276;
  t4293 = -1.*t4291*t4292;
  t4295 = t4290 + t4293;
  t4405 = Sin(var1[12]);
  t4303 = Sin(var1[4]);
  t4114 = Cos(var1[12]);
  t4396 = Cos(var1[4]);
  t4406 = Sin(var1[5]);
  t4398 = t4291*t4265;
  t4399 = t4276*t4292;
  t4400 = t4398 + t4399;
  t4397 = Cos(var1[5]);
  t4402 = t4397*t4400;
  t4407 = t4405*t4295*t4406;
  t4412 = t4402 + t4407;
  t4454 = Cos(var1[3]);
  t4461 = Sin(var1[3]);
  t4430 = -1.*t4265*t4276;
  t4432 = t4291*t4292;
  t4440 = t4430 + t4432;
  t4444 = t4397*t4440;
  t4450 = t4405*t4400*t4406;
  t4451 = t4444 + t4450;
  t4456 = -1.*t4397*t4405*t4295;
  t4457 = t4400*t4406;
  t4458 = t4456 + t4457;
  t4462 = t4114*t4396*t4295;
  t4463 = -1.*t4303*t4412;
  t4468 = t4462 + t4463;
  t4476 = t4396*t4405;
  t4477 = t4114*t4303*t4406;
  t4481 = t4476 + t4477;
  t4495 = -1.*t4397*t4405*t4400;
  t4496 = t4440*t4406;
  t4497 = t4495 + t4496;
  t4499 = t4114*t4396*t4400;
  t4500 = -1.*t4303*t4451;
  t4501 = t4499 + t4500;
  t4429 = t4114*t4400*t4303;
  t4452 = t4396*t4451;
  t4453 = t4429 + t4452;
  t4518 = -0.0641*t4265;
  t4519 = -0.28*t4292;
  t4520 = t4518 + t4519;
  t4522 = -1.*t4265;
  t4523 = 1. + t4522;
  t4524 = 0.075*t4523;
  t4525 = 0.355*t4265;
  t4526 = -0.0641*t4292;
  t4527 = t4524 + t4525 + t4526;
  t4422 = t4405*t4303;
  t4427 = -1.*t4114*t4396*t4406;
  t4428 = t4422 + t4427;
  t4517 = -0.325*t4276;
  t4521 = t4291*t4520;
  t4528 = t4276*t4527;
  t4529 = t4517 + t4521 + t4528;
  t4533 = -1.*t4291;
  t4534 = 1. + t4533;
  t4535 = 0.325*t4534;
  t4536 = -1.*t4276*t4520;
  t4537 = t4291*t4527;
  t4538 = t4535 + t4536 + t4537;
  t4513 = -1.*t4114;
  t4514 = 1. + t4513;
  t4515 = -0.1575*t4514;
  t4516 = -0.2255*t4114;
  t4530 = -1.*t4405*t4529;
  t4531 = t4515 + t4516 + t4530;
  t4542 = -0.068*t4405;
  t4543 = t4114*t4529;
  t4544 = t4542 + t4543;
  t4546 = t4397*t4538;
  t4547 = -1.*t4531*t4406;
  t4548 = t4546 + t4547;
  t4532 = t4397*t4531;
  t4539 = t4538*t4406;
  t4540 = t4532 + t4539;
  t4545 = t4544*t4303;
  t4549 = t4396*t4548;
  t4550 = t4545 + t4549;
  t4552 = t4396*t4544;
  t4553 = -1.*t4303*t4548;
  t4554 = t4552 + t4553;
  t4309 = t4114*t4295*t4303;
  t4414 = t4396*t4412;
  t4416 = t4309 + t4414;
  t4541 = -1.*t4114*t4397*t4540;
  t4558 = t4540*t4497;
  t4564 = t4540*t4458;
  t4569 = -1.*t4540*t4497;
  t4575 = t4114*t4397*t4540;
  t4580 = -1.*t4540*t4458;
  t4586 = -1.*t4405*t4544;
  t4590 = t4114*t4544*t4400;
  t4599 = -1.*t4114*t4544*t4400;
  t4595 = t4114*t4544*t4295;
  t4604 = t4405*t4544;
  t4608 = -1.*t4114*t4544*t4295;
  t4626 = t4538*t4400;
  t4621 = -1.*t4538*t4440;
  p_output1[0]=t4416;
  p_output1[1]=t4428;
  p_output1[2]=t4453;
  p_output1[3]=t4454*t4458 - 1.*t4461*t4468;
  p_output1[4]=t4114*t4397*t4454 - 1.*t4461*t4481;
  p_output1[5]=t4454*t4497 - 1.*t4461*t4501;
  p_output1[6]=t4458*t4461 + t4454*t4468;
  p_output1[7]=t4114*t4397*t4461 + t4454*t4481;
  p_output1[8]=t4461*t4497 + t4454*t4501;
  p_output1[9]=t4453*(t4541 - 1.*t4428*t4550 - 1.*t4481*t4554) + t4428*(t4453*t4550 + t4501*t4554 + t4558);
  p_output1[10]=t4453*(t4416*t4550 + t4468*t4554 + t4564) + t4416*(-1.*t4453*t4550 - 1.*t4501*t4554 + t4569);
  p_output1[11]=t4416*(t4428*t4550 + t4481*t4554 + t4575) + t4428*(-1.*t4416*t4550 - 1.*t4468*t4554 + t4580);
  p_output1[12]=t4497*(t4541 + t4114*t4406*t4548 + t4586) + t4114*t4397*(t4451*t4548 + t4558 + t4590);
  p_output1[13]=t4497*(t4412*t4548 + t4564 + t4595) + t4458*(-1.*t4451*t4548 + t4569 + t4599);
  p_output1[14]=t4458*(-1.*t4114*t4406*t4548 + t4575 + t4604) + t4114*t4397*(-1.*t4412*t4548 + t4580 + t4608);
  p_output1[15]=t4114*t4400*(-1.*t4114*t4531 + t4586) + t4405*(-1.*t4400*t4405*t4531 + t4440*t4538 + t4590);
  p_output1[16]=t4114*t4295*(t4400*t4405*t4531 + t4599 + t4621) + t4114*t4400*(-1.*t4295*t4405*t4531 + t4595 + t4626);
  p_output1[17]=t4114*t4295*(t4114*t4531 + t4604) + t4405*(t4295*t4405*t4531 - 1.*t4400*t4538 + t4608);
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
  p_output1[36]=0.1575*t4295 + 0.2255*t4440;
  p_output1[37]=t4400*(-1.*t4400*t4529 + t4621) + t4440*(t4295*t4529 + t4626);
  p_output1[38]=-0.068*t4400;
  p_output1[39]=0.325*t4292 - 1.*t4265*t4520 - 1.*t4292*t4527;
  p_output1[40]=0;
  p_output1[41]=-0.325*t4265 - 1.*t4292*t4520 + t4265*t4527;
  p_output1[42]=-0.0641;
  p_output1[43]=0;
  p_output1[44]=-0.28;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
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

#include "Jh_FrFoot_ParallelStance.hh"

namespace SymFunction
{

void Jh_FrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
