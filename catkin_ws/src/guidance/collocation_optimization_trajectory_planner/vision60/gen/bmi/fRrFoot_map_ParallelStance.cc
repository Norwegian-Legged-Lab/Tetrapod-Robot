/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:55:12 GMT+02:00
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
  double t5266;
  double t5263;
  double t5264;
  double t5267;
  double t5265;
  double t5334;
  double t5364;
  double t5387;
  double t5399;
  double t5391;
  double t5395;
  double t5396;
  double t5400;
  double t5256;
  double t5383;
  double t5366;
  double t5398;
  double t5402;
  double t5403;
  double t5428;
  double t5418;
  double t5420;
  double t5424;
  double t5410;
  double t5429;
  double t5430;
  double t5432;
  double t5470;
  double t5472;
  double t5475;
  double t5483;
  double t5493;
  double t5498;
  double t5499;
  double t5500;
  double t5505;
  double t5469;
  double t5479;
  double t5506;
  double t5507;
  double t5512;
  double t5513;
  double t5514;
  double t5516;
  double t5518;
  double t5519;
  double t5461;
  double t5463;
  double t5465;
  double t5468;
  double t5508;
  double t5510;
  double t5534;
  double t5535;
  double t5537;
  double t5539;
  double t5540;
  double t5542;
  double t5528;
  double t5529;
  double t5533;
  double t5511;
  double t5523;
  double t5524;
  double t5449;
  double t5450;
  double t5451;
  double t5538;
  double t5543;
  double t5544;
  double t5445;
  double t5452;
  double t5453;
  double t5454;
  double t5456;
  double t5460;
  double t5552;
  double t5556;
  double t5557;
  double t5561;
  double t5562;
  double t5563;
  double t5526;
  double t5564;
  double t5573;
  double t5577;
  double t5547;
  double t5550;
  double t5551;
  double t5367;
  double t5404;
  double t5405;
  double t5566;
  double t5567;
  double t5568;
  double t5613;
  double t5620;
  double t5630;
  double t5626;
  double t5640;
  double t5635;
  double t5670;
  double t5681;
  double t5696;
  double t5706;
  t5266 = Cos(var1[16]);
  t5263 = Cos(var1[17]);
  t5264 = Sin(var1[16]);
  t5267 = Sin(var1[17]);
  t5265 = t5263*t5264;
  t5334 = -1.*t5266*t5267;
  t5364 = t5265 + t5334;
  t5387 = Cos(var1[5]);
  t5399 = Sin(var1[15]);
  t5391 = t5266*t5263;
  t5395 = t5264*t5267;
  t5396 = t5391 + t5395;
  t5400 = Sin(var1[5]);
  t5256 = Cos(var1[15]);
  t5383 = Cos(var1[4]);
  t5366 = Sin(var1[4]);
  t5398 = t5387*t5396;
  t5402 = t5399*t5364*t5400;
  t5403 = t5398 + t5402;
  t5428 = Sin(var1[3]);
  t5418 = -1.*t5387*t5399*t5364;
  t5420 = t5396*t5400;
  t5424 = t5418 + t5420;
  t5410 = Cos(var1[3]);
  t5429 = t5256*t5383*t5364;
  t5430 = -1.*t5366*t5403;
  t5432 = t5429 + t5430;
  t5470 = -0.0641*t5263;
  t5472 = -0.28*t5267;
  t5475 = t5470 + t5472;
  t5483 = -1.*t5263;
  t5493 = 1. + t5483;
  t5498 = -0.575*t5493;
  t5499 = -0.295*t5263;
  t5500 = -0.0641*t5267;
  t5505 = t5498 + t5499 + t5500;
  t5469 = 0.325*t5264;
  t5479 = t5266*t5475;
  t5506 = t5264*t5505;
  t5507 = t5469 + t5479 + t5506;
  t5512 = -1.*t5266;
  t5513 = 1. + t5512;
  t5514 = -0.325*t5513;
  t5516 = -1.*t5264*t5475;
  t5518 = t5266*t5505;
  t5519 = t5514 + t5516 + t5518;
  t5461 = -1.*t5256;
  t5463 = 1. + t5461;
  t5465 = -0.1575*t5463;
  t5468 = -0.2255*t5256;
  t5508 = -1.*t5399*t5507;
  t5510 = t5465 + t5468 + t5508;
  t5534 = -0.068*t5399;
  t5535 = t5256*t5507;
  t5537 = t5534 + t5535;
  t5539 = t5387*t5519;
  t5540 = -1.*t5510*t5400;
  t5542 = t5539 + t5540;
  t5528 = t5399*t5366;
  t5529 = -1.*t5256*t5383*t5400;
  t5533 = t5528 + t5529;
  t5511 = t5387*t5510;
  t5523 = t5519*t5400;
  t5524 = t5511 + t5523;
  t5449 = -1.*t5263*t5264;
  t5450 = t5266*t5267;
  t5451 = t5449 + t5450;
  t5538 = t5537*t5366;
  t5543 = t5383*t5542;
  t5544 = t5538 + t5543;
  t5445 = t5256*t5396*t5366;
  t5452 = t5387*t5451;
  t5453 = t5399*t5396*t5400;
  t5454 = t5452 + t5453;
  t5456 = t5383*t5454;
  t5460 = t5445 + t5456;
  t5552 = t5383*t5537;
  t5556 = -1.*t5366*t5542;
  t5557 = t5552 + t5556;
  t5561 = -1.*t5387*t5399*t5396;
  t5562 = t5451*t5400;
  t5563 = t5561 + t5562;
  t5526 = -1.*t5256*t5387*t5524;
  t5564 = t5524*t5563;
  t5573 = -1.*t5399*t5537;
  t5577 = t5256*t5537*t5396;
  t5547 = t5383*t5399;
  t5550 = t5256*t5366*t5400;
  t5551 = t5547 + t5550;
  t5367 = t5256*t5364*t5366;
  t5404 = t5383*t5403;
  t5405 = t5367 + t5404;
  t5566 = t5256*t5383*t5396;
  t5567 = -1.*t5366*t5454;
  t5568 = t5566 + t5567;
  t5613 = t5524*t5424;
  t5620 = -1.*t5524*t5563;
  t5630 = -1.*t5256*t5537*t5396;
  t5626 = t5256*t5537*t5364;
  t5640 = t5519*t5396;
  t5635 = -1.*t5519*t5451;
  t5670 = t5256*t5387*t5524;
  t5681 = -1.*t5524*t5424;
  t5696 = t5399*t5537;
  t5706 = -1.*t5256*t5537*t5364;
  p_output1[0]=t5405;
  p_output1[1]=t5410*t5424 - 1.*t5428*t5432;
  p_output1[2]=t5424*t5428 + t5410*t5432;
  p_output1[3]=t5460*(t5526 - 1.*t5533*t5544 - 1.*t5551*t5557) + t5533*(t5460*t5544 + t5564 + t5557*t5568);
  p_output1[4]=t5563*(t5526 + t5256*t5400*t5542 + t5573) + t5256*t5387*(t5454*t5542 + t5564 + t5577);
  p_output1[5]=t5256*t5396*(-1.*t5256*t5510 + t5573) + t5399*(-1.*t5396*t5399*t5510 + t5451*t5519 + t5577);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0.1575*t5364 + 0.2255*t5451;
  p_output1[16]=-0.325*t5267 - 1.*t5263*t5475 - 1.*t5267*t5505;
  p_output1[17]=-0.0641;
  p_output1[18]=t5533;
  p_output1[19]=t5256*t5387*t5410 - 1.*t5428*t5551;
  p_output1[20]=t5256*t5387*t5428 + t5410*t5551;
  p_output1[21]=t5460*(t5405*t5544 + t5432*t5557 + t5613) + t5405*(-1.*t5460*t5544 - 1.*t5557*t5568 + t5620);
  p_output1[22]=t5563*(t5403*t5542 + t5613 + t5626) + t5424*(-1.*t5454*t5542 + t5620 + t5630);
  p_output1[23]=t5256*t5364*(t5396*t5399*t5510 + t5630 + t5635) + t5256*t5396*(-1.*t5364*t5399*t5510 + t5626 + t5640);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=t5396*(-1.*t5396*t5507 + t5635) + t5451*(t5364*t5507 + t5640);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t5460;
  p_output1[37]=t5410*t5563 - 1.*t5428*t5568;
  p_output1[38]=t5428*t5563 + t5410*t5568;
  p_output1[39]=t5405*(t5533*t5544 + t5551*t5557 + t5670) + t5533*(-1.*t5405*t5544 - 1.*t5432*t5557 + t5681);
  p_output1[40]=t5424*(-1.*t5256*t5400*t5542 + t5670 + t5696) + t5256*t5387*(-1.*t5403*t5542 + t5681 + t5706);
  p_output1[41]=t5256*t5364*(t5256*t5510 + t5696) + t5399*(t5364*t5399*t5510 - 1.*t5396*t5519 + t5706);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=-0.068*t5396;
  p_output1[52]=0.325*t5263 - 1.*t5267*t5475 + t5263*t5505;
  p_output1[53]=-0.28;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fRrFoot_map_ParallelStance.hh"

namespace SymFunction
{

void fRrFoot_map_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
