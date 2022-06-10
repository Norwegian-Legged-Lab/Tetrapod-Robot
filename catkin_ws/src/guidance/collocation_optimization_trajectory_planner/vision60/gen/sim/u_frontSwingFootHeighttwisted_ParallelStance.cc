/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 13:09:44 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t42410;
  double t45150;
  double t41997;
  double t44766;
  double t45202;
  double t45416;
  double t45421;
  double t45422;
  double t45423;
  double t45426;
  double t45427;
  double t4743;
  double t44791;
  double t45203;
  double t45413;
  double t45443;
  double t45448;
  double t45450;
  double t45451;
  double t45453;
  double t45460;
  double t45462;
  double t45463;
  double t45465;
  double t45466;
  double t45467;
  double t45470;
  double t41341;
  double t41346;
  double t45418;
  double t45419;
  double t45454;
  double t45456;
  double t45514;
  double t45515;
  double t45516;
  double t45518;
  double t45523;
  double t45527;
  double t45530;
  double t45531;
  double t45532;
  double t45558;
  double t45559;
  double t45560;
  double t45553;
  double t45554;
  double t45555;
  double t45583;
  double t45584;
  double t45585;
  double t45594;
  double t45595;
  double t45596;
  double t45619;
  double t45620;
  double t45622;
  double t45498;
  double t45499;
  double t45500;
  double t45501;
  double t45502;
  double t45506;
  double t45511;
  double t45512;
  double t45517;
  double t45528;
  double t45534;
  double t45535;
  double t45536;
  double t45541;
  double t45542;
  double t45543;
  double t45548;
  double t45550;
  double t45551;
  double t45552;
  t42410 = Cos(var1[5]);
  t45150 = Sin(var1[3]);
  t41997 = Cos(var1[3]);
  t44766 = Sin(var1[4]);
  t45202 = Sin(var1[5]);
  t45416 = Cos(var1[6]);
  t45421 = t42410*t45150;
  t45422 = t41997*t44766*t45202;
  t45423 = t45421 + t45422;
  t45426 = Cos(var1[4]);
  t45427 = Sin(var1[6]);
  t4743 = Cos(var1[7]);
  t44791 = -1.*t41997*t42410*t44766;
  t45203 = t45150*t45202;
  t45413 = t44791 + t45203;
  t45443 = t41997*t45426*t45416;
  t45448 = -1.*t45423*t45427;
  t45450 = t45443 + t45448;
  t45451 = Sin(var1[7]);
  t45453 = Cos(var1[8]);
  t45460 = t4743*t45413;
  t45462 = t45450*t45451;
  t45463 = t45460 + t45462;
  t45465 = t4743*t45450;
  t45466 = -1.*t45413*t45451;
  t45467 = t45465 + t45466;
  t45470 = Sin(var1[8]);
  t41341 = -1.*t4743;
  t41346 = 1. + t41341;
  t45418 = -1.*t45416;
  t45419 = 1. + t45418;
  t45454 = -1.*t45453;
  t45456 = 1. + t45454;
  t45514 = t45416*t44766;
  t45515 = t45426*t45202*t45427;
  t45516 = t45514 + t45515;
  t45518 = t45426*t42410*t4743;
  t45523 = t45516*t45451;
  t45527 = t45518 + t45523;
  t45530 = t4743*t45516;
  t45531 = -1.*t45426*t42410*t45451;
  t45532 = t45530 + t45531;
  t45558 = t41997*t42410;
  t45559 = -1.*t45150*t44766*t45202;
  t45560 = t45558 + t45559;
  t45553 = t42410*t45150*t44766;
  t45554 = t41997*t45202;
  t45555 = t45553 + t45554;
  t45583 = -1.*t45426*t45416*t45150;
  t45584 = -1.*t45560*t45427;
  t45585 = t45583 + t45584;
  t45594 = t4743*t45555;
  t45595 = t45585*t45451;
  t45596 = t45594 + t45595;
  t45619 = t4743*t45585;
  t45620 = -1.*t45555*t45451;
  t45622 = t45619 + t45620;
  t45498 = -1.*var2[0];
  t45499 = 0.325*t45426*t42410*t41346;
  t45500 = -0.1575*t45426*t45419*t45202;
  t45501 = -0.1575*t44766*t45427;
  t45502 = -1.*t45426*t45416*t45202;
  t45506 = t44766*t45427;
  t45511 = t45502 + t45506;
  t45512 = 0.2255*t45511;
  t45517 = -0.325*t45516*t45451;
  t45528 = 0.075*t45456*t45527;
  t45534 = 0.075*t45532*t45470;
  t45535 = t45453*t45527;
  t45536 = -1.*t45532*t45470;
  t45541 = t45535 + t45536;
  t45542 = 0.355*t45541;
  t45543 = t45453*t45532;
  t45548 = t45527*t45470;
  t45550 = t45543 + t45548;
  t45551 = -0.0641*t45550;
  t45552 = t45498 + var1[0] + t45499 + t45500 + t45501 + t45512 + t45517 + t45528 + t45534 + t45542 + t45551;
  p_output1[0]=0.325*t41346*t45413 + 0.1575*t45419*t45423 - 0.1575*t41997*t45426*t45427 + 0.2255*(t45416*t45423 + t41997*t45426*t45427) - 0.325*t45450*t45451 + 0.075*t45456*t45463 + 0.075*t45467*t45470 - 0.0641*(t45453*t45467 + t45463*t45470) + 0.355*(t45453*t45463 - 1.*t45467*t45470) + var1[2] - 0.5*t45552*(0.1575*t45150*t45426*t45427 + 0.325*t41346*t45555 + 0.1575*t45419*t45560 + 0.2255*(-1.*t45150*t45426*t45427 + t45416*t45560) - 0.325*t45451*t45585 + 0.075*t45456*t45596 + 0.075*t45470*t45622 - 0.0641*(t45470*t45596 + t45453*t45622) + 0.355*(t45453*t45596 - 1.*t45470*t45622) + var1[1])*var3[0]*(1. + Tanh(t45552*var4[0]));
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "u_frontSwingFootHeighttwisted_ParallelStance.hh"

namespace SymFunction
{

void u_frontSwingFootHeighttwisted_ParallelStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
