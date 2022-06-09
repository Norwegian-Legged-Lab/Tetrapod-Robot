/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:55:08 GMT+02:00
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
  double t2239;
  double t13500;
  double t13510;
  double t13520;
  double t15041;
  double t15055;
  double t5291;
  double t15952;
  double t16384;
  double t16930;
  double t16954;
  double t16963;
  double t17069;
  double t17238;
  double t17352;
  double t17511;
  double t16505;
  double t16669;
  double t17058;
  double t17076;
  double t17123;
  double t17171;
  double t17368;
  double t17384;
  double t17388;
  double t17389;
  double t17405;
  double t17421;
  double t17449;
  double t17472;
  double t17504;
  double t17571;
  double t17596;
  double t17598;
  double t17662;
  double t17588;
  double t17672;
  double t17681;
  double t17789;
  double t17790;
  double t17791;
  double t18084;
  double t19625;
  double t19635;
  double t15414;
  double t15704;
  double t15026;
  double t15261;
  double t20071;
  double t20078;
  double t20079;
  double t20095;
  double t20114;
  double t20115;
  double t20121;
  double t20122;
  double t20126;
  double t20357;
  double t20408;
  double t20413;
  double t20420;
  double t20450;
  double t20465;
  double t20479;
  double t20493;
  double t20597;
  double t20606;
  double t20675;
  double t20668;
  double t20694;
  double t20711;
  double t20724;
  double t20730;
  double t20736;
  double t20776;
  double t20802;
  double t21064;
  double t17512;
  double t17514;
  double t17518;
  double t21815;
  double t21827;
  double t21833;
  double t21979;
  double t22101;
  double t21566;
  double t22200;
  double t22201;
  double t22203;
  double t22219;
  double t22228;
  double t22229;
  double t22319;
  double t22325;
  double t22336;
  double t22348;
  double t22349;
  double t22374;
  double t22387;
  double t22388;
  double t22389;
  double t22469;
  double t22470;
  double t22472;
  double t22468;
  double t22473;
  double t22474;
  double t22479;
  double t22481;
  double t22487;
  double t22542;
  double t22543;
  double t22544;
  double t22661;
  double t22662;
  double t22663;
  double t22668;
  double t22689;
  double t22696;
  double t22867;
  double t22868;
  double t22869;
  double t22903;
  double t22905;
  double t22906;
  double t22923;
  double t22924;
  double t22925;
  double t23190;
  double t23194;
  double t23210;
  double t23225;
  double t23226;
  double t23027;
  double t23245;
  double t23246;
  double t23247;
  double t23244;
  double t23248;
  double t23249;
  double t23273;
  double t23315;
  double t23333;
  double t23415;
  double t23419;
  t2239 = Cos(var1[4]);
  t13500 = Cos(var1[9]);
  t13510 = -1.*t13500;
  t13520 = 1. + t13510;
  t15041 = Sin(var1[9]);
  t15055 = 0.15121*t15041;
  t5291 = Cos(var1[5]);
  t15952 = Sin(var1[5]);
  t16384 = Cos(var1[10]);
  t16930 = -1.*t2239*t5291*t15041;
  t16954 = -1.*t13500*t2239*t15952;
  t16963 = t16930 + t16954;
  t17069 = Cos(var1[11]);
  t17238 = Sin(var1[10]);
  t17352 = Sin(var1[11]);
  t17511 = 0.15121*t13500;
  t16505 = -1.*t16384;
  t16669 = 1. + t16505;
  t17058 = -0.28121*t16669*t16963;
  t17076 = -1.*t17069;
  t17123 = 1. + t17076;
  t17171 = -0.50321*t16384*t17123*t16963;
  t17368 = 0.50321*t17238*t17352*t16963;
  t17384 = -1.*t13500*t2239*t5291;
  t17388 = t2239*t15041*t15952;
  t17389 = t17384 + t17388;
  t17405 = 0.15121*t17389;
  t17421 = t16384*t17069*t16963;
  t17449 = t17238*t17352*t16963;
  t17472 = t17421 + t17449;
  t17504 = -0.19821*t17472;
  t17571 = Sin(var1[4]);
  t17596 = t13500*t2239*t5291;
  t17598 = -1.*t2239*t15041*t15952;
  t17662 = t17596 + t17598;
  t17588 = t17238*t17571;
  t17672 = t16384*t17662;
  t17681 = t17588 + t17672;
  t17789 = t16384*t17571;
  t17790 = -1.*t17238*t17662;
  t17791 = t17789 + t17790;
  t18084 = -1.*t17238*t17571;
  t19625 = -1.*t16384*t17662;
  t19635 = t18084 + t19625;
  t15414 = -0.15121*t13520;
  t15704 = t15414 + t15055;
  t15026 = 0.15121*t13520;
  t15261 = t15026 + t15055;
  t20071 = -1.*t13500*t5291*t17571;
  t20078 = t15041*t17571*t15952;
  t20079 = t20071 + t20078;
  t20095 = t2239*t17238;
  t20114 = t16384*t20079;
  t20115 = t20095 + t20114;
  t20121 = t16384*t2239;
  t20122 = -1.*t17238*t20079;
  t20126 = t20121 + t20122;
  t20357 = Sin(var1[3]);
  t20408 = t13500*t2239*t5291*t20357;
  t20413 = -1.*t2239*t15041*t20357*t15952;
  t20420 = t20408 + t20413;
  t20450 = t17238*t20357*t17571;
  t20465 = t16384*t20420;
  t20479 = t20450 + t20465;
  t20493 = t16384*t20357*t17571;
  t20597 = -1.*t17238*t20420;
  t20606 = t20493 + t20597;
  t20675 = Cos(var1[3]);
  t20668 = -1.*t5291*t20357*t17571;
  t20694 = -1.*t20675*t15952;
  t20711 = t20668 + t20694;
  t20724 = t20675*t5291;
  t20730 = -1.*t20357*t17571*t15952;
  t20736 = t20724 + t20730;
  t20776 = t15041*t20711;
  t20802 = t13500*t20736;
  t21064 = t20776 + t20802;
  t17512 = -0.15121*t15041;
  t17514 = t17511 + t17512;
  t17518 = t17511 + t15055;
  t21815 = t5291*t20357*t17571;
  t21827 = t20675*t15952;
  t21833 = t21815 + t21827;
  t21979 = -1.*t15041*t21833;
  t22101 = t21979 + t20802;
  t21566 = -1.*t15041*t20736;
  t22200 = t20675*t5291*t17571;
  t22201 = -1.*t20357*t15952;
  t22203 = t22200 + t22201;
  t22219 = -1.*t5291*t20357;
  t22228 = -1.*t20675*t17571*t15952;
  t22229 = t22219 + t22228;
  t22319 = t13500*t22203;
  t22325 = t15041*t22229;
  t22336 = t22319 + t22325;
  t22348 = -1.*t20675*t2239*t17238;
  t22349 = t16384*t22336;
  t22374 = t22348 + t22349;
  t22387 = -1.*t16384*t20675*t2239;
  t22388 = -1.*t17238*t22336;
  t22389 = t22387 + t22388;
  t22469 = t13500*t21833;
  t22470 = t15041*t20736;
  t22472 = t22469 + t22470;
  t22468 = -1.*t2239*t17238*t20357;
  t22473 = t16384*t22472;
  t22474 = t22468 + t22473;
  t22479 = -1.*t16384*t2239*t20357;
  t22481 = -1.*t17238*t22472;
  t22487 = t22479 + t22481;
  t22542 = t2239*t17238*t20357;
  t22543 = -1.*t16384*t22472;
  t22544 = t22542 + t22543;
  t22661 = -1.*t13500*t20675*t2239*t5291;
  t22662 = t20675*t2239*t15041*t15952;
  t22663 = t22661 + t22662;
  t22668 = -1.*t20675*t17238*t17571;
  t22689 = t16384*t22663;
  t22696 = t22668 + t22689;
  t22867 = -1.*t16384*t20675*t17571;
  t22868 = -1.*t17238*t22663;
  t22869 = t22867 + t22868;
  t22903 = t5291*t20357;
  t22905 = t20675*t17571*t15952;
  t22906 = t22903 + t22905;
  t22923 = t15041*t22203;
  t22924 = t13500*t22906;
  t22925 = t22923 + t22924;
  t23190 = -1.*t20675*t5291*t17571;
  t23194 = t20357*t15952;
  t23210 = t23190 + t23194;
  t23225 = -1.*t15041*t23210;
  t23226 = t23225 + t22924;
  t23027 = -1.*t15041*t22906;
  t23245 = t13500*t23210;
  t23246 = t15041*t22906;
  t23247 = t23245 + t23246;
  t23244 = t20675*t2239*t17238;
  t23248 = t16384*t23247;
  t23249 = t23244 + t23248;
  t23273 = t16384*t20675*t2239;
  t23315 = -1.*t17238*t23247;
  t23333 = t23273 + t23315;
  t23415 = -1.*t16384*t23247;
  t23419 = t22348 + t23415;
  p_output1[0]=var2[0] + (t15261*t15952*t17571 - 0.28121*t16669*t20079 - 0.50321*t17123*t20115 - 0.50321*t17352*t20126 - 0.19821*(t17069*t20115 - 1.*t17352*t20126) + 0.28121*t17238*t2239 - 1.*t15704*t17571*t5291 + 0.15121*(t13500*t15952*t17571 + t15041*t17571*t5291))*var2[4] + (t17058 + t17171 + t17368 + t17405 + t17504 - 1.*t15704*t15952*t2239 - 1.*t15261*t2239*t5291)*var2[5] + (t17058 + t17171 + t17368 + t17405 + t17504 - 1.*t15952*t17518*t2239 + t17514*t2239*t5291)*var2[9] + (0.28121*t16384*t17571 - 0.28121*t17238*t17662 - 0.50321*t17123*t17791 - 0.50321*t17352*t19635 - 0.19821*(t17069*t17791 - 1.*t17352*t19635))*var2[10] + (-0.50321*t17352*t17681 - 0.50321*t17069*t17791 - 0.19821*(-1.*t17352*t17681 - 1.*t17069*t17791))*var2[11];
  p_output1[1]=var2[1] + (t15704*t22203 + t15261*t22229 + 0.15121*(-1.*t15041*t22203 + t13500*t22229) - 0.28121*t16669*t22336 - 0.50321*t17123*t22374 - 0.50321*t17352*t22389 - 0.19821*(t17069*t22374 - 1.*t17352*t22389) - 0.28121*t17238*t20675*t2239)*var2[3] + (0.28121*t17238*t17571*t20357 - 0.28121*t16669*t20420 - 0.50321*t17123*t20479 - 0.50321*t17352*t20606 - 0.19821*(t17069*t20479 - 1.*t17352*t20606) - 1.*t15261*t15952*t20357*t2239 + t15704*t20357*t2239*t5291 + 0.15121*(-1.*t13500*t15952*t20357*t2239 - 1.*t15041*t20357*t2239*t5291))*var2[4] + (t15261*t20711 + t15704*t20736 - 0.28121*t16669*t21064 - 0.50321*t16384*t17123*t21064 + 0.50321*t17238*t17352*t21064 - 0.19821*(t16384*t17069*t21064 + t17238*t17352*t21064) + 0.15121*(t13500*t20711 + t21566))*var2[5] + (t17518*t20736 + t17514*t21833 + 0.15121*(t21566 - 1.*t13500*t21833) - 0.28121*t16669*t22101 - 0.50321*t16384*t17123*t22101 + 0.50321*t17238*t17352*t22101 - 0.19821*(t16384*t17069*t22101 + t17238*t17352*t22101))*var2[9] + (-0.28121*t16384*t20357*t2239 - 0.28121*t17238*t22472 - 0.50321*t17123*t22487 - 0.50321*t17352*t22544 - 0.19821*(t17069*t22487 - 1.*t17352*t22544))*var2[10] + (-0.50321*t17352*t22474 - 0.50321*t17069*t22487 - 0.19821*(-1.*t17352*t22474 - 1.*t17069*t22487))*var2[11];
  p_output1[2]=var2[2] + (t15261*t20736 + t15704*t21833 + 0.15121*t22101 - 0.28121*t17238*t20357*t2239 - 0.28121*t16669*t22472 - 0.50321*t17123*t22474 - 0.50321*t17352*t22487 - 0.19821*(t17069*t22474 - 1.*t17352*t22487))*var2[3] + (-0.28121*t17238*t17571*t20675 + t15261*t15952*t20675*t2239 - 0.28121*t16669*t22663 - 0.50321*t17123*t22696 - 0.50321*t17352*t22869 - 0.19821*(t17069*t22696 - 1.*t17352*t22869) - 1.*t15704*t20675*t2239*t5291 + 0.15121*(t13500*t15952*t20675*t2239 + t15041*t20675*t2239*t5291))*var2[4] + (t15261*t22203 + t15704*t22906 - 0.28121*t16669*t22925 - 0.50321*t16384*t17123*t22925 + 0.50321*t17238*t17352*t22925 - 0.19821*(t16384*t17069*t22925 + t17238*t17352*t22925) + 0.15121*(t22319 + t23027))*var2[5] + (t17518*t22906 + t17514*t23210 + 0.15121*(t23027 - 1.*t13500*t23210) - 0.28121*t16669*t23226 - 0.50321*t16384*t17123*t23226 + 0.50321*t17238*t17352*t23226 - 0.19821*(t16384*t17069*t23226 + t17238*t17352*t23226))*var2[9] + (0.28121*t16384*t20675*t2239 - 0.28121*t17238*t23247 - 0.50321*t17123*t23333 - 0.50321*t17352*t23419 - 0.19821*(t17069*t23333 - 1.*t17352*t23419))*var2[10] + (-0.50321*t17352*t23249 - 0.50321*t17069*t23333 - 0.19821*(-1.*t17352*t23249 - 1.*t17069*t23333))*var2[11];
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
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "initial_swing_velocity_RlFoot_ParallelStance.hh"

namespace ParallelStance
{

void initial_swing_velocity_RlFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
