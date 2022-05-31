/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:36 GMT+02:00
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
  double t10635;
  double t16923;
  double t16902;
  double t17097;
  double t17114;
  double t17096;
  double t17118;
  double t16917;
  double t17129;
  double t17131;
  double t17132;
  double t16925;
  double t17127;
  double t17110;
  double t17121;
  double t17122;
  double t16922;
  double t16926;
  double t17056;
  double t17188;
  double t17184;
  double t17133;
  double t17149;
  double t17150;
  double t17165;
  double t17166;
  double t17168;
  double t17171;
  double t17174;
  double t17176;
  double t17199;
  double t17201;
  double t17204;
  double t17212;
  double t17216;
  double t17218;
  double t17228;
  double t17229;
  double t17241;
  double t17247;
  double t17248;
  double t17252;
  double t17254;
  double t17257;
  double t17258;
  double t17128;
  double t17162;
  double t17163;
  double t17312;
  double t17313;
  double t17323;
  double t17328;
  double t17329;
  double t17334;
  double t17335;
  double t17338;
  double t17339;
  double t17362;
  double t17367;
  double t17410;
  double t17415;
  double t17443;
  double t17447;
  double t17449;
  double t17316;
  double t17319;
  double t17320;
  double t17418;
  double t17424;
  double t17484;
  double t17506;
  double t17508;
  double t17512;
  double t17515;
  double t17530;
  double t17531;
  double t17426;
  double t17476;
  double t17478;
  double t17514;
  double t17544;
  double t17546;
  double t17550;
  double t17551;
  double t17552;
  double t17170;
  double t17177;
  double t17178;
  double t17482;
  double t17561;
  double t17577;
  double t17586;
  double t17596;
  double t17610;
  double t17735;
  double t17744;
  t10635 = Cos(var1[4]);
  t16923 = Cos(var1[12]);
  t16902 = Cos(var1[5]);
  t17097 = Cos(var1[14]);
  t17114 = Sin(var1[13]);
  t17096 = Cos(var1[13]);
  t17118 = Sin(var1[14]);
  t16917 = Sin(var1[12]);
  t17129 = t17097*t17114;
  t17131 = -1.*t17096*t17118;
  t17132 = t17129 + t17131;
  t16925 = Sin(var1[5]);
  t17127 = Sin(var1[4]);
  t17110 = t17096*t17097;
  t17121 = t17114*t17118;
  t17122 = t17110 + t17121;
  t16922 = -1.*t16902*t16917;
  t16926 = -1.*t16923*t16925;
  t17056 = t16922 + t16926;
  t17188 = Cos(var1[3]);
  t17184 = Sin(var1[3]);
  t17133 = t16923*t16902*t17132;
  t17149 = -1.*t16917*t17132*t16925;
  t17150 = t17133 + t17149;
  t17165 = -1.*t17097*t17114;
  t17166 = t17096*t17118;
  t17168 = t17165 + t17166;
  t17171 = t16923*t16902*t17122;
  t17174 = -1.*t16917*t17122*t16925;
  t17176 = t17171 + t17174;
  t17199 = t16923*t16902;
  t17201 = -1.*t16917*t16925;
  t17204 = t17199 + t17201;
  t17212 = t16902*t16917*t17132;
  t17216 = t16923*t17132*t16925;
  t17218 = t17212 + t17216;
  t17228 = t10635*t17122;
  t17229 = -1.*t17127*t17150;
  t17241 = t17228 + t17229;
  t17247 = t16902*t16917*t17122;
  t17248 = t16923*t17122*t16925;
  t17252 = t17247 + t17248;
  t17254 = t10635*t17168;
  t17257 = -1.*t17127*t17176;
  t17258 = t17254 + t17257;
  t17128 = t17122*t17127;
  t17162 = t10635*t17150;
  t17163 = t17128 + t17162;
  t17312 = -1.*t16923;
  t17313 = 1. + t17312;
  t17323 = -1.*t17096;
  t17328 = 1. + t17323;
  t17329 = 0.28121*t17328;
  t17334 = -1.*t17097;
  t17335 = 1. + t17334;
  t17338 = 0.50321*t17335;
  t17339 = 0.19821*t17097;
  t17362 = t17338 + t17339;
  t17367 = t17096*t17362;
  t17410 = -0.305*t17114*t17118;
  t17415 = t17329 + t17367 + t17410;
  t17443 = 0.15121*t17313;
  t17447 = t16923*t17415;
  t17449 = t17443 + t17447;
  t17316 = -0.15121*t17313;
  t17319 = -0.15121*t16923;
  t17320 = -0.15121*t16917;
  t17418 = t16917*t17415;
  t17424 = t17316 + t17319 + t17320 + t17418;
  t17484 = 0.28121*t17114;
  t17506 = -1.*t17362*t17114;
  t17508 = -0.305*t17096*t17118;
  t17512 = t17484 + t17506 + t17508;
  t17515 = t16902*t17449;
  t17530 = -1.*t17424*t16925;
  t17531 = t17515 + t17530;
  t17426 = t16902*t17424;
  t17476 = t17449*t16925;
  t17478 = t17426 + t17476;
  t17514 = t17512*t17127;
  t17544 = t10635*t17531;
  t17546 = t17514 + t17544;
  t17550 = t10635*t17512;
  t17551 = -1.*t17127*t17531;
  t17552 = t17550 + t17551;
  t17170 = t17168*t17127;
  t17177 = t10635*t17176;
  t17178 = t17170 + t17177;
  t17482 = -1.*t17204*t17478;
  t17561 = t17218*t17478;
  t17577 = t17204*t17478;
  t17586 = -1.*t17252*t17478;
  t17596 = -1.*t17218*t17478;
  t17610 = t17252*t17478;
  t17735 = -1.*t17512*t17122;
  t17744 = t17512*t17168;
  p_output1[0]=t17178*var2[0] + t10635*t17056*var2[1] + t17163*var2[2];
  p_output1[1]=(t17188*t17252 - 1.*t17184*t17258)*var2[0] + (t17056*t17127*t17184 + t17188*t17204)*var2[1] + (t17188*t17218 - 1.*t17184*t17241)*var2[2];
  p_output1[2]=(t17184*t17252 + t17188*t17258)*var2[0] + (-1.*t17056*t17127*t17188 + t17184*t17204)*var2[1] + (t17184*t17218 + t17188*t17241)*var2[2];
  p_output1[3]=(t17163*(t17482 - 1.*t10635*t17056*t17546 + t17056*t17127*t17552) + t10635*t17056*(t17163*t17546 + t17241*t17552 + t17561))*var2[0] + (t17178*(-1.*t17163*t17546 - 1.*t17241*t17552 + t17596) + t17163*(t17178*t17546 + t17258*t17552 + t17610))*var2[1] + (t17178*(t10635*t17056*t17546 - 1.*t17056*t17127*t17552 + t17577) + t10635*t17056*(-1.*t17178*t17546 - 1.*t17258*t17552 + t17586))*var2[2];
  p_output1[4]=(t17218*(t17482 - 1.*t17056*t17531) + t17204*(t17122*t17512 + t17150*t17531 + t17561))*var2[0] + (t17252*(-1.*t17150*t17531 + t17596 + t17735) + t17218*(t17176*t17531 + t17610 + t17744))*var2[1] + (t17252*(t17056*t17531 + t17577) + t17204*(-1.*t17168*t17512 - 1.*t17176*t17531 + t17586))*var2[2];
  p_output1[5]=t17122*(-1.*t16923*t17424 + t16917*t17449)*var2[0] + (t17168*(-1.*t16917*t17132*t17424 - 1.*t16923*t17132*t17449 + t17735) + t17122*(t16917*t17122*t17424 + t16923*t17122*t17449 + t17744))*var2[1] + t17168*(t16923*t17424 - 1.*t16917*t17449)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t17168*(-1.*t17132*t17415 + t17735) + t17122*(t17122*t17415 + t17744))*var2[1] + (-0.15121*t17132 - 0.15121*t17168)*var2[2];
  p_output1[13]=(0.28121*t17118 - 0.305*t17097*t17118 - 1.*t17118*t17362)*var2[0] + (0.28121*t17097 + 0.305*Power(t17118,2) - 1.*t17097*t17362)*var2[2];
  p_output1[14]=-0.305*var2[2];
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

#include "fFrFoot_vec_ParallelStance.hh"

namespace SymFunction
{

void fFrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
