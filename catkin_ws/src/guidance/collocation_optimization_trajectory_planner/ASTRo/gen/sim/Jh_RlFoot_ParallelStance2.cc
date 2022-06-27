/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:21:01 GMT+02:00
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
  double t5021;
  double t22;
  double t3547;
  double t12324;
  double t15999;
  double t19185;
  double t19199;
  double t14857;
  double t15694;
  double t19205;
  double t15532;
  double t19207;
  double t14019;
  double t3583;
  double t13437;
  double t13444;
  double t19204;
  double t19208;
  double t19210;
  double t19340;
  double t19237;
  double t19244;
  double t19278;
  double t19321;
  double t19283;
  double t19284;
  double t19301;
  double t19313;
  double t19314;
  double t19315;
  double t19322;
  double t19323;
  double t19331;
  double t19341;
  double t19342;
  double t19343;
  double t19360;
  double t19361;
  double t19366;
  double t19369;
  double t19388;
  double t19395;
  double t19397;
  double t19404;
  double t19405;
  double t19309;
  double t19319;
  double t19320;
  double t19429;
  double t19430;
  double t19451;
  double t19455;
  double t19456;
  double t19462;
  double t19463;
  double t19464;
  double t19465;
  double t19468;
  double t19469;
  double t19470;
  double t19471;
  double t19479;
  double t19480;
  double t19493;
  double t19441;
  double t19445;
  double t19446;
  double t19474;
  double t19475;
  double t19503;
  double t19504;
  double t19509;
  double t19510;
  double t19513;
  double t19516;
  double t19517;
  double t19478;
  double t19497;
  double t19498;
  double t19512;
  double t19518;
  double t19519;
  double t19523;
  double t19525;
  double t19526;
  double t14187;
  double t19211;
  double t19213;
  double t19499;
  double t19535;
  double t19548;
  double t19554;
  double t19560;
  double t19565;
  double t19579;
  double t19584;
  t5021 = Cos(var1[10]);
  t22 = Cos(var1[11]);
  t3547 = Sin(var1[10]);
  t12324 = Sin(var1[11]);
  t15999 = -1.*t5021*t22;
  t19185 = -1.*t3547*t12324;
  t19199 = t15999 + t19185;
  t14857 = Cos(var1[4]);
  t15694 = Cos(var1[5]);
  t19205 = Sin(var1[9]);
  t15532 = Cos(var1[9]);
  t19207 = Sin(var1[5]);
  t14019 = Sin(var1[4]);
  t3583 = -1.*t22*t3547;
  t13437 = t5021*t12324;
  t13444 = t3583 + t13437;
  t19204 = t15532*t15694*t19199;
  t19208 = -1.*t19205*t19199*t19207;
  t19210 = t19204 + t19208;
  t19340 = Sin(var1[3]);
  t19237 = t15694*t19205;
  t19244 = t15532*t19207;
  t19278 = t19237 + t19244;
  t19321 = Cos(var1[3]);
  t19283 = t5021*t22;
  t19284 = t3547*t12324;
  t19301 = t19283 + t19284;
  t19313 = t15532*t15694*t13444;
  t19314 = -1.*t19205*t13444*t19207;
  t19315 = t19313 + t19314;
  t19322 = t15694*t19205*t19199;
  t19323 = t15532*t19199*t19207;
  t19331 = t19322 + t19323;
  t19341 = t14857*t13444;
  t19342 = -1.*t14019*t19210;
  t19343 = t19341 + t19342;
  t19360 = -1.*t15532*t15694;
  t19361 = t19205*t19207;
  t19366 = t19360 + t19361;
  t19369 = t15694*t19205*t13444;
  t19388 = t15532*t13444*t19207;
  t19395 = t19369 + t19388;
  t19397 = t14857*t19301;
  t19404 = -1.*t14019*t19315;
  t19405 = t19397 + t19404;
  t19309 = t19301*t14019;
  t19319 = t14857*t19315;
  t19320 = t19309 + t19319;
  t19429 = -1.*t15532;
  t19430 = 1. + t19429;
  t19451 = -1.*t5021;
  t19455 = 1. + t19451;
  t19456 = -0.28121*t19455;
  t19462 = -1.*t22;
  t19463 = 1. + t19462;
  t19464 = -0.50321*t19463;
  t19465 = -0.19821*t22;
  t19468 = t19464 + t19465;
  t19469 = t5021*t19468;
  t19470 = 0.305*t3547*t12324;
  t19471 = t19456 + t19469 + t19470;
  t19479 = -0.15121*t19430;
  t19480 = t15532*t19471;
  t19493 = t19479 + t19480;
  t19441 = 0.15121*t19430;
  t19445 = 0.15121*t15532;
  t19446 = 0.15121*t19205;
  t19474 = t19205*t19471;
  t19475 = t19441 + t19445 + t19446 + t19474;
  t19503 = 0.28121*t3547;
  t19504 = t19468*t3547;
  t19509 = -0.305*t5021*t12324;
  t19510 = t19503 + t19504 + t19509;
  t19513 = t15694*t19493;
  t19516 = -1.*t19475*t19207;
  t19517 = t19513 + t19516;
  t19478 = t15694*t19475;
  t19497 = t19493*t19207;
  t19498 = t19478 + t19497;
  t19512 = t19510*t14019;
  t19518 = t14857*t19517;
  t19519 = t19512 + t19518;
  t19523 = t14857*t19510;
  t19525 = -1.*t14019*t19517;
  t19526 = t19523 + t19525;
  t14187 = t13444*t14019;
  t19211 = t14857*t19210;
  t19213 = t14187 + t19211;
  t19499 = -1.*t19366*t19498;
  t19535 = t19395*t19498;
  t19548 = -1.*t19395*t19498;
  t19554 = t19331*t19498;
  t19560 = t19366*t19498;
  t19565 = -1.*t19331*t19498;
  t19579 = -1.*t19510*t19301;
  t19584 = t19510*t13444;
  p_output1[0]=t19213;
  p_output1[1]=t14857*t19278;
  p_output1[2]=t19320;
  p_output1[3]=t19321*t19331 - 1.*t19340*t19343;
  p_output1[4]=t14019*t19278*t19340 + t19321*t19366;
  p_output1[5]=t19321*t19395 - 1.*t19340*t19405;
  p_output1[6]=t19331*t19340 + t19321*t19343;
  p_output1[7]=-1.*t14019*t19278*t19321 + t19340*t19366;
  p_output1[8]=t19340*t19395 + t19321*t19405;
  p_output1[9]=t19320*(t19499 - 1.*t14857*t19278*t19519 + t14019*t19278*t19526) + t14857*t19278*(t19320*t19519 + t19405*t19526 + t19535);
  p_output1[10]=t19213*(-1.*t19320*t19519 - 1.*t19405*t19526 + t19548) + t19320*(t19213*t19519 + t19343*t19526 + t19554);
  p_output1[11]=t19213*(t14857*t19278*t19519 - 1.*t14019*t19278*t19526 + t19560) + t14857*t19278*(-1.*t19213*t19519 - 1.*t19343*t19526 + t19565);
  p_output1[12]=t19395*(t19499 - 1.*t19278*t19517) + t19366*(t19301*t19510 + t19315*t19517 + t19535);
  p_output1[13]=t19331*(-1.*t19315*t19517 + t19548 + t19579) + t19395*(t19210*t19517 + t19554 + t19584);
  p_output1[14]=t19331*(t19278*t19517 + t19560) + t19366*(-1.*t13444*t19510 - 1.*t19210*t19517 + t19565);
  p_output1[15]=t19301*(t15532*t19475 - 1.*t19205*t19493);
  p_output1[16]=t13444*(-1.*t13444*t19205*t19475 - 1.*t13444*t15532*t19493 + t19579) + t19301*(t19199*t19205*t19475 + t15532*t19199*t19493 + t19584);
  p_output1[17]=t13444*(-1.*t15532*t19475 + t19205*t19493);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0.15121*t19199 + 0.15121*t19301;
  p_output1[28]=-0.15121 + t13444*(-1.*t13444*t19471 + t19579) + t19301*(t19199*t19471 + t19584);
  p_output1[29]=0;
  p_output1[30]=0.28121*t12324 + t12324*t19468 - 0.305*t12324*t22;
  p_output1[31]=0;
  p_output1[32]=0.305*Power(t12324,2) + 0.28121*t22 + t19468*t22;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=-0.305;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
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

#include "Jh_RlFoot_ParallelStance2.hh"

namespace SymFunction
{

void Jh_RlFoot_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
