/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:39:49 GMT+02:00
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
  double t5204;
  double t8949;
  double t8971;
  double t9070;
  double t9112;
  double t9131;
  double t9399;
  double t9233;
  double t9379;
  double t10324;
  double t9380;
  double t11456;
  double t11510;
  double t11987;
  double t12005;
  double t12109;
  double t2677;
  double t3380;
  double t14302;
  double t14336;
  double t14428;
  double t14522;
  double t14879;
  double t15458;
  double t15468;
  double t15469;
  double t15699;
  double t15701;
  double t15703;
  double t16332;
  double t9090;
  double t9226;
  double t11523;
  double t11526;
  double t14311;
  double t14332;
  double t15195;
  double t15312;
  double t17712;
  double t17732;
  double t17741;
  double t17880;
  double t17887;
  double t17905;
  double t17908;
  double t17926;
  double t17941;
  double t18760;
  double t18772;
  double t18778;
  double t18814;
  double t18819;
  double t18821;
  double t18829;
  double t18831;
  double t18835;
  double t19374;
  double t19685;
  double t19694;
  double t19696;
  double t19905;
  double t19944;
  double t18861;
  double t20394;
  double t20408;
  double t20413;
  double t20418;
  double t20420;
  double t20423;
  double t20428;
  double t20429;
  double t20466;
  double t20675;
  double t20681;
  double t20683;
  t5204 = Sin(var1[3]);
  t8949 = Cos(var1[12]);
  t8971 = -1.*t8949;
  t9070 = 1. + t8971;
  t9112 = Sin(var1[12]);
  t9131 = -0.15121*t9112;
  t9399 = Cos(var1[3]);
  t9233 = Cos(var1[5]);
  t9379 = Sin(var1[4]);
  t10324 = Sin(var1[5]);
  t9380 = t9233*t5204*t9379;
  t11456 = t9399*t10324;
  t11510 = t9380 + t11456;
  t11987 = t9399*t9233;
  t12005 = -1.*t5204*t9379*t10324;
  t12109 = t11987 + t12005;
  t2677 = Cos(var1[4]);
  t3380 = Sin(var1[13]);
  t14302 = Cos(var1[13]);
  t14336 = t8949*t11510;
  t14428 = t9112*t12109;
  t14522 = t14336 + t14428;
  t14879 = Cos(var1[14]);
  t15458 = t2677*t3380*t5204;
  t15468 = t14302*t14522;
  t15469 = t15458 + t15468;
  t15699 = Sin(var1[14]);
  t15701 = -1.*t14302*t2677*t5204;
  t15703 = t3380*t14522;
  t16332 = t15701 + t15703;
  t9090 = 0.15121*t9070;
  t9226 = t9090 + t9131;
  t11523 = -0.15121*t9070;
  t11526 = t11523 + t9131;
  t14311 = -1.*t14302;
  t14332 = 1. + t14311;
  t15195 = -1.*t14879;
  t15312 = 1. + t15195;
  t17712 = -1.*t8949*t9399*t2677*t9233;
  t17732 = t9399*t2677*t9112*t10324;
  t17741 = t17712 + t17732;
  t17880 = t9399*t3380*t9379;
  t17887 = t14302*t17741;
  t17905 = t17880 + t17887;
  t17908 = -1.*t14302*t9399*t9379;
  t17926 = t3380*t17741;
  t17941 = t17908 + t17926;
  t18760 = t9399*t9233*t9379;
  t18772 = -1.*t5204*t10324;
  t18778 = t18760 + t18772;
  t18814 = t9233*t5204;
  t18819 = t9399*t9379*t10324;
  t18821 = t18814 + t18819;
  t18829 = t9112*t18778;
  t18831 = t8949*t18821;
  t18835 = t18829 + t18831;
  t19374 = -0.15121*t8949;
  t19685 = -1.*t9399*t9233*t9379;
  t19694 = t5204*t10324;
  t19696 = t19685 + t19694;
  t19905 = -1.*t9112*t19696;
  t19944 = t19905 + t18831;
  t18861 = -1.*t9112*t18821;
  t20394 = t8949*t19696;
  t20408 = t9112*t18821;
  t20413 = t20394 + t20408;
  t20418 = -1.*t9399*t2677*t3380;
  t20420 = t14302*t20413;
  t20423 = t20418 + t20420;
  t20428 = -1.*t14302*t9399*t2677;
  t20429 = -1.*t3380*t20413;
  t20466 = t20428 + t20429;
  t20675 = t14302*t9399*t2677;
  t20681 = t3380*t20413;
  t20683 = t20675 + t20681;
  p_output1[0]=1.;
  p_output1[1]=t11526*t12109 + 0.28121*t14332*t14522 + 0.50321*t15312*t15469 - 0.50321*t15699*t16332 + 0.19821*(t14879*t15469 + t15699*t16332) - 0.28121*t2677*t3380*t5204 - 0.15121*(t12109*t8949 - 1.*t11510*t9112) + t11510*t9226;
  p_output1[2]=0.28121*t14332*t17741 + 0.50321*t15312*t17905 - 0.50321*t15699*t17941 + 0.19821*(t14879*t17905 + t15699*t17941) + t10324*t11526*t2677*t9399 - 1.*t2677*t9226*t9233*t9399 - 0.28121*t3380*t9379*t9399 - 0.15121*(t10324*t2677*t8949*t9399 + t2677*t9112*t9233*t9399);
  p_output1[3]=t11526*t18778 + 0.28121*t14332*t18835 + 0.50321*t14302*t15312*t18835 - 0.50321*t15699*t18835*t3380 + 0.19821*(t14302*t14879*t18835 + t15699*t18835*t3380) - 0.15121*(t18861 + t18778*t8949) + t18821*t9226;
  p_output1[4]=0.28121*t14332*t19944 + 0.50321*t14302*t15312*t19944 - 0.50321*t15699*t19944*t3380 + 0.19821*(t14302*t14879*t19944 + t15699*t19944*t3380) - 0.15121*(t18861 - 1.*t19696*t8949) + t19696*(t19374 + 0.15121*t9112) + t18821*(t19374 + t9131);
  p_output1[5]=-0.50321*t15699*t20423 + 0.50321*t15312*t20466 + 0.19821*(t15699*t20423 + t14879*t20466) + 0.28121*t20413*t3380 + 0.28121*t14302*t2677*t9399;
  p_output1[6]=0.50321*t15699*t20423 - 0.50321*t14879*t20683 + 0.19821*(-1.*t15699*t20423 + t14879*t20683);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_u_frontSwingFootHeight4_ParallelStance2_ParallelStance2.hh"

namespace SymFunction
{

void J_u_frontSwingFootHeight4_ParallelStance2_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
