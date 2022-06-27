/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:21:29 GMT+02:00
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
  double t3341;
  double t17451;
  double t3476;
  double t21340;
  double t21351;
  double t18050;
  double t21353;
  double t17281;
  double t21370;
  double t21371;
  double t21372;
  double t17506;
  double t21360;
  double t21388;
  double t21389;
  double t21390;
  double t17394;
  double t17516;
  double t17782;
  double t21442;
  double t21398;
  double t21350;
  double t21358;
  double t21359;
  double t21377;
  double t21382;
  double t21383;
  double t21391;
  double t21392;
  double t21393;
  double t21443;
  double t21444;
  double t21446;
  double t21451;
  double t21452;
  double t21454;
  double t21456;
  double t21457;
  double t21459;
  double t21463;
  double t21464;
  double t21466;
  double t21468;
  double t21469;
  double t21471;
  double t21365;
  double t21384;
  double t21385;
  double t21489;
  double t21490;
  double t21494;
  double t21495;
  double t21497;
  double t21498;
  double t21499;
  double t21501;
  double t21502;
  double t21503;
  double t21504;
  double t21505;
  double t21506;
  double t21511;
  double t21512;
  double t21513;
  double t21491;
  double t21492;
  double t21493;
  double t21508;
  double t21509;
  double t21517;
  double t21518;
  double t21519;
  double t21520;
  double t21522;
  double t21523;
  double t21524;
  double t21510;
  double t21514;
  double t21515;
  double t21521;
  double t21525;
  double t21526;
  double t21528;
  double t21529;
  double t21530;
  double t21387;
  double t21394;
  double t21395;
  double t21516;
  double t21534;
  double t21541;
  double t21547;
  double t21554;
  double t21559;
  double t21585;
  double t21589;
  t3341 = Cos(var1[4]);
  t17451 = Cos(var1[9]);
  t3476 = Cos(var1[5]);
  t21340 = Cos(var1[11]);
  t21351 = Sin(var1[10]);
  t18050 = Cos(var1[10]);
  t21353 = Sin(var1[11]);
  t17281 = Sin(var1[9]);
  t21370 = -1.*t21340*t21351;
  t21371 = t18050*t21353;
  t21372 = t21370 + t21371;
  t17506 = Sin(var1[5]);
  t21360 = Sin(var1[4]);
  t21388 = -1.*t18050*t21340;
  t21389 = -1.*t21351*t21353;
  t21390 = t21388 + t21389;
  t17394 = t3476*t17281;
  t17516 = t17451*t17506;
  t17782 = t17394 + t17516;
  t21442 = Cos(var1[3]);
  t21398 = Sin(var1[3]);
  t21350 = t18050*t21340;
  t21358 = t21351*t21353;
  t21359 = t21350 + t21358;
  t21377 = t17451*t3476*t21372;
  t21382 = -1.*t17281*t21372*t17506;
  t21383 = t21377 + t21382;
  t21391 = t17451*t3476*t21390;
  t21392 = -1.*t17281*t21390*t17506;
  t21393 = t21391 + t21392;
  t21443 = -1.*t17451*t3476;
  t21444 = t17281*t17506;
  t21446 = t21443 + t21444;
  t21451 = t3476*t17281*t21372;
  t21452 = t17451*t21372*t17506;
  t21454 = t21451 + t21452;
  t21456 = t3341*t21359;
  t21457 = -1.*t21360*t21383;
  t21459 = t21456 + t21457;
  t21463 = t3476*t17281*t21390;
  t21464 = t17451*t21390*t17506;
  t21466 = t21463 + t21464;
  t21468 = t3341*t21372;
  t21469 = -1.*t21360*t21393;
  t21471 = t21468 + t21469;
  t21365 = t21359*t21360;
  t21384 = t3341*t21383;
  t21385 = t21365 + t21384;
  t21489 = -1.*t17451;
  t21490 = 1. + t21489;
  t21494 = -1.*t18050;
  t21495 = 1. + t21494;
  t21497 = -0.28121*t21495;
  t21498 = -1.*t21340;
  t21499 = 1. + t21498;
  t21501 = -0.50321*t21499;
  t21502 = -0.19821*t21340;
  t21503 = t21501 + t21502;
  t21504 = t18050*t21503;
  t21505 = 0.305*t21351*t21353;
  t21506 = t21497 + t21504 + t21505;
  t21511 = -0.15121*t21490;
  t21512 = t17451*t21506;
  t21513 = t21511 + t21512;
  t21491 = 0.15121*t21490;
  t21492 = 0.15121*t17451;
  t21493 = 0.15121*t17281;
  t21508 = t17281*t21506;
  t21509 = t21491 + t21492 + t21493 + t21508;
  t21517 = 0.28121*t21351;
  t21518 = t21503*t21351;
  t21519 = -0.305*t18050*t21353;
  t21520 = t21517 + t21518 + t21519;
  t21522 = t3476*t21513;
  t21523 = -1.*t21509*t17506;
  t21524 = t21522 + t21523;
  t21510 = t3476*t21509;
  t21514 = t21513*t17506;
  t21515 = t21510 + t21514;
  t21521 = t21520*t21360;
  t21525 = t3341*t21524;
  t21526 = t21521 + t21525;
  t21528 = t3341*t21520;
  t21529 = -1.*t21360*t21524;
  t21530 = t21528 + t21529;
  t21387 = t21372*t21360;
  t21394 = t3341*t21393;
  t21395 = t21387 + t21394;
  t21516 = -1.*t21446*t21515;
  t21534 = t21454*t21515;
  t21541 = t21446*t21515;
  t21547 = -1.*t21466*t21515;
  t21554 = -1.*t21454*t21515;
  t21559 = t21466*t21515;
  t21585 = -1.*t21520*t21359;
  t21589 = t21520*t21372;
  p_output1[0]=t21395*var2[0] + t17782*t3341*var2[1] + t21385*var2[2];
  p_output1[1]=(t21442*t21466 - 1.*t21398*t21471)*var2[0] + (t17782*t21360*t21398 + t21442*t21446)*var2[1] + (t21442*t21454 - 1.*t21398*t21459)*var2[2];
  p_output1[2]=(t21398*t21466 + t21442*t21471)*var2[0] + (-1.*t17782*t21360*t21442 + t21398*t21446)*var2[1] + (t21398*t21454 + t21442*t21459)*var2[2];
  p_output1[3]=(t17782*(t21385*t21526 + t21459*t21530 + t21534)*t3341 + t21385*(t21516 + t17782*t21360*t21530 - 1.*t17782*t21526*t3341))*var2[0] + (t21395*(-1.*t21385*t21526 - 1.*t21459*t21530 + t21554) + t21385*(t21395*t21526 + t21471*t21530 + t21559))*var2[1] + (t17782*(-1.*t21395*t21526 - 1.*t21471*t21530 + t21547)*t3341 + t21395*(-1.*t17782*t21360*t21530 + t21541 + t17782*t21526*t3341))*var2[2];
  p_output1[4]=(t21454*(t21516 - 1.*t17782*t21524) + t21446*(t21359*t21520 + t21383*t21524 + t21534))*var2[0] + (t21466*(-1.*t21383*t21524 + t21554 + t21585) + t21454*(t21393*t21524 + t21559 + t21589))*var2[1] + (t21466*(t17782*t21524 + t21541) + t21446*(-1.*t21372*t21520 - 1.*t21393*t21524 + t21547))*var2[2];
  p_output1[5]=t21359*(t17451*t21509 - 1.*t17281*t21513)*var2[0] + (t21372*(-1.*t17281*t21372*t21509 - 1.*t17451*t21372*t21513 + t21585) + t21359*(t17281*t21390*t21509 + t17451*t21390*t21513 + t21589))*var2[1] + t21372*(-1.*t17451*t21509 + t17281*t21513)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.15121*t21359 + 0.15121*t21390)*var2[0] + (-0.15121 + t21372*(-1.*t21372*t21506 + t21585) + t21359*(t21390*t21506 + t21589))*var2[1];
  p_output1[10]=(0.28121*t21353 - 0.305*t21340*t21353 + t21353*t21503)*var2[0] + (0.28121*t21340 + 0.305*Power(t21353,2) + t21340*t21503)*var2[2];
  p_output1[11]=-0.305*var2[2];
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

#include "fRlFoot_vec_DiagonalImpact2.hh"

namespace SymFunction
{

void fRlFoot_vec_DiagonalImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
