/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:38:23 GMT+02:00
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
  double t18206;
  double t18335;
  double t18315;
  double t18357;
  double t18363;
  double t18355;
  double t18367;
  double t18332;
  double t18372;
  double t18373;
  double t18374;
  double t18342;
  double t18370;
  double t18382;
  double t18383;
  double t18425;
  double t18333;
  double t18344;
  double t18345;
  double t18442;
  double t18439;
  double t18359;
  double t18368;
  double t18369;
  double t18375;
  double t18376;
  double t18377;
  double t18429;
  double t18430;
  double t18432;
  double t18443;
  double t18445;
  double t18446;
  double t18451;
  double t18452;
  double t18453;
  double t18456;
  double t18457;
  double t18458;
  double t18463;
  double t18464;
  double t18465;
  double t18467;
  double t18468;
  double t18469;
  double t18371;
  double t18378;
  double t18379;
  double t18490;
  double t18492;
  double t18493;
  double t18496;
  double t18497;
  double t18498;
  double t18499;
  double t18500;
  double t18501;
  double t18502;
  double t18503;
  double t18504;
  double t18505;
  double t18506;
  double t18510;
  double t18511;
  double t18494;
  double t18495;
  double t18507;
  double t18508;
  double t18515;
  double t18516;
  double t18518;
  double t18519;
  double t18521;
  double t18522;
  double t18523;
  double t18509;
  double t18512;
  double t18513;
  double t18520;
  double t18524;
  double t18526;
  double t18529;
  double t18530;
  double t18531;
  double t18381;
  double t18434;
  double t18435;
  double t18514;
  double t18538;
  double t18549;
  double t18556;
  double t18570;
  double t18583;
  double t18621;
  double t18625;
  t18206 = Cos(var1[4]);
  t18335 = Cos(var1[15]);
  t18315 = Cos(var1[5]);
  t18357 = Cos(var1[17]);
  t18363 = Sin(var1[16]);
  t18355 = Cos(var1[16]);
  t18367 = Sin(var1[17]);
  t18332 = Sin(var1[15]);
  t18372 = -1.*t18357*t18363;
  t18373 = t18355*t18367;
  t18374 = t18372 + t18373;
  t18342 = Sin(var1[5]);
  t18370 = Sin(var1[4]);
  t18382 = -1.*t18355*t18357;
  t18383 = -1.*t18363*t18367;
  t18425 = t18382 + t18383;
  t18333 = t18315*t18332;
  t18344 = t18335*t18342;
  t18345 = t18333 + t18344;
  t18442 = Cos(var1[3]);
  t18439 = Sin(var1[3]);
  t18359 = t18355*t18357;
  t18368 = t18363*t18367;
  t18369 = t18359 + t18368;
  t18375 = t18335*t18315*t18374;
  t18376 = -1.*t18332*t18374*t18342;
  t18377 = t18375 + t18376;
  t18429 = t18335*t18315*t18425;
  t18430 = -1.*t18332*t18425*t18342;
  t18432 = t18429 + t18430;
  t18443 = -1.*t18335*t18315;
  t18445 = t18332*t18342;
  t18446 = t18443 + t18445;
  t18451 = t18315*t18332*t18374;
  t18452 = t18335*t18374*t18342;
  t18453 = t18451 + t18452;
  t18456 = t18206*t18369;
  t18457 = -1.*t18370*t18377;
  t18458 = t18456 + t18457;
  t18463 = t18315*t18332*t18425;
  t18464 = t18335*t18425*t18342;
  t18465 = t18463 + t18464;
  t18467 = t18206*t18374;
  t18468 = -1.*t18370*t18432;
  t18469 = t18467 + t18468;
  t18371 = t18369*t18370;
  t18378 = t18206*t18377;
  t18379 = t18371 + t18378;
  t18490 = -1.*t18335;
  t18492 = 1. + t18490;
  t18493 = -0.15121*t18492;
  t18496 = -1.*t18355;
  t18497 = 1. + t18496;
  t18498 = -0.28121*t18497;
  t18499 = -1.*t18357;
  t18500 = 1. + t18499;
  t18501 = -0.50321*t18500;
  t18502 = -0.19821*t18357;
  t18503 = t18501 + t18502;
  t18504 = t18355*t18503;
  t18505 = 0.305*t18363*t18367;
  t18506 = t18498 + t18504 + t18505;
  t18510 = t18335*t18506;
  t18511 = t18493 + t18510;
  t18494 = -0.15121*t18335;
  t18495 = 0.15121*t18332;
  t18507 = t18332*t18506;
  t18508 = t18493 + t18494 + t18495 + t18507;
  t18515 = 0.28121*t18363;
  t18516 = t18503*t18363;
  t18518 = -0.305*t18355*t18367;
  t18519 = t18515 + t18516 + t18518;
  t18521 = t18315*t18511;
  t18522 = -1.*t18508*t18342;
  t18523 = t18521 + t18522;
  t18509 = t18315*t18508;
  t18512 = t18511*t18342;
  t18513 = t18509 + t18512;
  t18520 = t18519*t18370;
  t18524 = t18206*t18523;
  t18526 = t18520 + t18524;
  t18529 = t18206*t18519;
  t18530 = -1.*t18370*t18523;
  t18531 = t18529 + t18530;
  t18381 = t18374*t18370;
  t18434 = t18206*t18432;
  t18435 = t18381 + t18434;
  t18514 = -1.*t18446*t18513;
  t18538 = t18453*t18513;
  t18549 = t18446*t18513;
  t18556 = -1.*t18465*t18513;
  t18570 = -1.*t18453*t18513;
  t18583 = t18465*t18513;
  t18621 = -1.*t18519*t18369;
  t18625 = t18519*t18374;
  p_output1[0]=t18435*var2[0] + t18206*t18345*var2[1] + t18379*var2[2];
  p_output1[1]=(t18442*t18465 - 1.*t18439*t18469)*var2[0] + (t18345*t18370*t18439 + t18442*t18446)*var2[1] + (t18442*t18453 - 1.*t18439*t18458)*var2[2];
  p_output1[2]=(t18439*t18465 + t18442*t18469)*var2[0] + (-1.*t18345*t18370*t18442 + t18439*t18446)*var2[1] + (t18439*t18453 + t18442*t18458)*var2[2];
  p_output1[3]=(t18379*(t18514 - 1.*t18206*t18345*t18526 + t18345*t18370*t18531) + t18206*t18345*(t18379*t18526 + t18458*t18531 + t18538))*var2[0] + (t18435*(-1.*t18379*t18526 - 1.*t18458*t18531 + t18570) + t18379*(t18435*t18526 + t18469*t18531 + t18583))*var2[1] + (t18435*(t18206*t18345*t18526 - 1.*t18345*t18370*t18531 + t18549) + t18206*t18345*(-1.*t18435*t18526 - 1.*t18469*t18531 + t18556))*var2[2];
  p_output1[4]=(t18453*(t18514 - 1.*t18345*t18523) + t18446*(t18369*t18519 + t18377*t18523 + t18538))*var2[0] + (t18465*(-1.*t18377*t18523 + t18570 + t18621) + t18453*(t18432*t18523 + t18583 + t18625))*var2[1] + (t18465*(t18345*t18523 + t18549) + t18446*(-1.*t18374*t18519 - 1.*t18432*t18523 + t18556))*var2[2];
  p_output1[5]=t18369*(t18335*t18508 - 1.*t18332*t18511)*var2[0] + (t18374*(-1.*t18332*t18374*t18508 - 1.*t18335*t18374*t18511 + t18621) + t18369*(t18332*t18425*t18508 + t18335*t18425*t18511 + t18625))*var2[1] + t18374*(-1.*t18335*t18508 + t18332*t18511)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.15121*t18369 - 0.15121*t18425)*var2[0] + (-0.15121 + t18374*(-1.*t18374*t18506 + t18621) + t18369*(t18425*t18506 + t18625))*var2[1];
  p_output1[16]=(0.28121*t18367 - 0.305*t18357*t18367 + t18367*t18503)*var2[0] + (0.28121*t18357 + 0.305*Power(t18367,2) + t18357*t18503)*var2[2];
  p_output1[17]=-0.305*var2[2];
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

#include "fRrFoot_vec_DiagonalImpact.hh"

namespace SymFunction
{

void fRrFoot_vec_DiagonalImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
