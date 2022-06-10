/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:49:47 GMT+02:00
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
  double t142;
  double t296;
  double t259;
  double t1648;
  double t2149;
  double t1197;
  double t2402;
  double t284;
  double t3091;
  double t3131;
  double t3147;
  double t551;
  double t2435;
  double t3928;
  double t4484;
  double t4545;
  double t291;
  double t593;
  double t625;
  double t5557;
  double t5479;
  double t1819;
  double t2403;
  double t2420;
  double t3152;
  double t3183;
  double t3188;
  double t4727;
  double t4969;
  double t5146;
  double t5704;
  double t5711;
  double t5832;
  double t6245;
  double t7204;
  double t7205;
  double t7224;
  double t7225;
  double t7227;
  double t7245;
  double t7254;
  double t7255;
  double t7266;
  double t7276;
  double t7281;
  double t2441;
  double t3218;
  double t3220;
  double t7384;
  double t7425;
  double t7491;
  double t7493;
  double t7494;
  double t7496;
  double t7499;
  double t7523;
  double t7530;
  double t7531;
  double t7532;
  double t7533;
  double t7536;
  double t7541;
  double t7542;
  double t7546;
  double t7471;
  double t7473;
  double t7475;
  double t7537;
  double t7539;
  double t7553;
  double t7557;
  double t7558;
  double t7561;
  double t7567;
  double t7568;
  double t7569;
  double t7540;
  double t7547;
  double t7548;
  double t7563;
  double t7570;
  double t7571;
  double t7576;
  double t7577;
  double t7578;
  double t3299;
  double t5304;
  double t5308;
  double t7550;
  double t7588;
  double t7607;
  double t7630;
  double t7650;
  double t7663;
  double t7705;
  double t7711;
  t142 = Cos(var1[4]);
  t296 = Cos(var1[9]);
  t259 = Cos(var1[5]);
  t1648 = Cos(var1[11]);
  t2149 = Sin(var1[10]);
  t1197 = Cos(var1[10]);
  t2402 = Sin(var1[11]);
  t284 = Sin(var1[9]);
  t3091 = -1.*t1648*t2149;
  t3131 = t1197*t2402;
  t3147 = t3091 + t3131;
  t551 = Sin(var1[5]);
  t2435 = Sin(var1[4]);
  t3928 = -1.*t1197*t1648;
  t4484 = -1.*t2149*t2402;
  t4545 = t3928 + t4484;
  t291 = t259*t284;
  t593 = t296*t551;
  t625 = t291 + t593;
  t5557 = Cos(var1[3]);
  t5479 = Sin(var1[3]);
  t1819 = t1197*t1648;
  t2403 = t2149*t2402;
  t2420 = t1819 + t2403;
  t3152 = t296*t259*t3147;
  t3183 = -1.*t284*t3147*t551;
  t3188 = t3152 + t3183;
  t4727 = t296*t259*t4545;
  t4969 = -1.*t284*t4545*t551;
  t5146 = t4727 + t4969;
  t5704 = -1.*t296*t259;
  t5711 = t284*t551;
  t5832 = t5704 + t5711;
  t6245 = t259*t284*t3147;
  t7204 = t296*t3147*t551;
  t7205 = t6245 + t7204;
  t7224 = t142*t2420;
  t7225 = -1.*t2435*t3188;
  t7227 = t7224 + t7225;
  t7245 = t259*t284*t4545;
  t7254 = t296*t4545*t551;
  t7255 = t7245 + t7254;
  t7266 = t142*t3147;
  t7276 = -1.*t2435*t5146;
  t7281 = t7266 + t7276;
  t2441 = t2420*t2435;
  t3218 = t142*t3188;
  t3220 = t2441 + t3218;
  t7384 = -1.*t296;
  t7425 = 1. + t7384;
  t7491 = -1.*t1197;
  t7493 = 1. + t7491;
  t7494 = -0.28121*t7493;
  t7496 = -1.*t1648;
  t7499 = 1. + t7496;
  t7523 = -0.50321*t7499;
  t7530 = -0.19821*t1648;
  t7531 = t7523 + t7530;
  t7532 = t1197*t7531;
  t7533 = 0.305*t2149*t2402;
  t7536 = t7494 + t7532 + t7533;
  t7541 = -0.15121*t7425;
  t7542 = t296*t7536;
  t7546 = t7541 + t7542;
  t7471 = 0.15121*t7425;
  t7473 = 0.15121*t296;
  t7475 = 0.15121*t284;
  t7537 = t284*t7536;
  t7539 = t7471 + t7473 + t7475 + t7537;
  t7553 = 0.28121*t2149;
  t7557 = t7531*t2149;
  t7558 = -0.305*t1197*t2402;
  t7561 = t7553 + t7557 + t7558;
  t7567 = t259*t7546;
  t7568 = -1.*t7539*t551;
  t7569 = t7567 + t7568;
  t7540 = t259*t7539;
  t7547 = t7546*t551;
  t7548 = t7540 + t7547;
  t7563 = t7561*t2435;
  t7570 = t142*t7569;
  t7571 = t7563 + t7570;
  t7576 = t142*t7561;
  t7577 = -1.*t2435*t7569;
  t7578 = t7576 + t7577;
  t3299 = t3147*t2435;
  t5304 = t142*t5146;
  t5308 = t3299 + t5304;
  t7550 = -1.*t5832*t7548;
  t7588 = t7205*t7548;
  t7607 = t5832*t7548;
  t7630 = -1.*t7255*t7548;
  t7650 = -1.*t7205*t7548;
  t7663 = t7255*t7548;
  t7705 = -1.*t7561*t2420;
  t7711 = t7561*t3147;
  p_output1[0]=t5308*var2[0] + t142*t625*var2[1] + t3220*var2[2];
  p_output1[1]=(t5557*t7255 - 1.*t5479*t7281)*var2[0] + (t5557*t5832 + t2435*t5479*t625)*var2[1] + (t5557*t7205 - 1.*t5479*t7227)*var2[2];
  p_output1[2]=(t5479*t7255 + t5557*t7281)*var2[0] + (t5479*t5832 - 1.*t2435*t5557*t625)*var2[1] + (t5479*t7205 + t5557*t7227)*var2[2];
  p_output1[3]=(t3220*(t7550 - 1.*t142*t625*t7571 + t2435*t625*t7578) + t142*t625*(t3220*t7571 + t7227*t7578 + t7588))*var2[0] + (t5308*(-1.*t3220*t7571 - 1.*t7227*t7578 + t7650) + t3220*(t5308*t7571 + t7281*t7578 + t7663))*var2[1] + (t5308*(t142*t625*t7571 - 1.*t2435*t625*t7578 + t7607) + t142*t625*(-1.*t5308*t7571 - 1.*t7281*t7578 + t7630))*var2[2];
  p_output1[4]=(t7205*(t7550 - 1.*t625*t7569) + t5832*(t2420*t7561 + t3188*t7569 + t7588))*var2[0] + (t7255*(-1.*t3188*t7569 + t7650 + t7705) + t7205*(t5146*t7569 + t7663 + t7711))*var2[1] + (t7255*(t625*t7569 + t7607) + t5832*(-1.*t3147*t7561 - 1.*t5146*t7569 + t7630))*var2[2];
  p_output1[5]=t2420*(t296*t7539 - 1.*t284*t7546)*var2[0] + (t3147*(-1.*t284*t3147*t7539 - 1.*t296*t3147*t7546 + t7705) + t2420*(t284*t4545*t7539 + t296*t4545*t7546 + t7711))*var2[1] + t3147*(-1.*t296*t7539 + t284*t7546)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.15121*t2420 + 0.15121*t4545)*var2[0] + (-0.15121 + t3147*(-1.*t3147*t7536 + t7705) + t2420*(t4545*t7536 + t7711))*var2[1];
  p_output1[10]=(0.28121*t2402 - 0.305*t1648*t2402 + t2402*t7531)*var2[0] + (0.28121*t1648 + 0.305*Power(t2402,2) + t1648*t7531)*var2[2];
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

#include "fRlFoot_vec_DiagonalImpact.hh"

namespace SymFunction
{

void fRlFoot_vec_DiagonalImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
