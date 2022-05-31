/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 16:59:11 GMT+02:00
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
  double t284;
  double t288;
  double t297;
  double t304;
  double t307;
  double t312;
  double t283;
  double t319;
  double t75;
  double t276;
  double t345;
  double t400;
  double t401;
  double t402;
  double t404;
  double t407;
  double t408;
  double t409;
  double t411;
  double t412;
  double t413;
  double t414;
  double t314;
  double t318;
  double t303;
  double t308;
  double t352;
  double t399;
  double t405;
  double t406;
  double t1734;
  double t1847;
  double t1916;
  double t3268;
  double t2288;
  double t2450;
  double t2577;
  double t2588;
  double t2638;
  double t2684;
  double t2688;
  double t2754;
  double t2758;
  double t2788;
  double t3015;
  double t3799;
  double t3804;
  double t3809;
  double t3835;
  double t3878;
  double t3964;
  double t4042;
  double t4053;
  double t4059;
  double t4724;
  double t4743;
  double t4749;
  double t4998;
  double t5044;
  double t5036;
  double t5045;
  double t5050;
  double t5073;
  double t5087;
  double t5107;
  double t5356;
  double t5363;
  double t5368;
  double t5408;
  double t5468;
  double t5488;
  double t5506;
  double t5556;
  double t5574;
  double t5741;
  double t5754;
  double t5755;
  double t5818;
  double t5819;
  double t5835;
  double t5843;
  double t5852;
  double t5853;
  double t6323;
  double t6327;
  double t6332;
  double t6335;
  double t6336;
  double t6375;
  double t6402;
  double t6404;
  double t6416;
  double t3286;
  double t3288;
  double t3607;
  double t6502;
  double t6542;
  double t6566;
  double t6879;
  double t6991;
  double t6446;
  double t7162;
  double t7166;
  double t7201;
  double t7237;
  double t7252;
  double t7256;
  double t7286;
  double t7287;
  double t7295;
  double t7330;
  double t7333;
  double t7335;
  double t7647;
  double t7652;
  double t7654;
  double t7661;
  double t7662;
  double t7669;
  double t7674;
  double t7680;
  double t7707;
  double t7742;
  double t7758;
  double t7759;
  double t7763;
  double t7775;
  double t7784;
  double t7833;
  double t7835;
  double t7837;
  double t7845;
  double t7846;
  double t7800;
  double t7980;
  double t7997;
  double t8002;
  double t8004;
  double t8005;
  double t8019;
  double t8020;
  double t8022;
  double t8054;
  double t8077;
  double t8088;
  t284 = Cos(var1[9]);
  t288 = -1.*t284;
  t297 = 1. + t288;
  t304 = Sin(var1[9]);
  t307 = 0.15121*t304;
  t312 = Sin(var1[4]);
  t283 = Cos(var1[5]);
  t319 = Sin(var1[5]);
  t75 = Cos(var1[4]);
  t276 = Sin(var1[10]);
  t345 = Cos(var1[10]);
  t400 = -1.*t284*t283*t312;
  t401 = t304*t312*t319;
  t402 = t400 + t401;
  t404 = Cos(var1[11]);
  t407 = t75*t276;
  t408 = t345*t402;
  t409 = t407 + t408;
  t411 = Sin(var1[11]);
  t412 = t345*t75;
  t413 = -1.*t276*t402;
  t414 = t412 + t413;
  t314 = 0.15121*t297;
  t318 = t314 + t307;
  t303 = -0.15121*t297;
  t308 = t303 + t307;
  t352 = -1.*t345;
  t399 = 1. + t352;
  t405 = -1.*t404;
  t406 = 1. + t405;
  t1734 = -1.*t75*t283*t304;
  t1847 = -1.*t284*t75*t319;
  t1916 = t1734 + t1847;
  t3268 = 0.15121*t284;
  t2288 = -0.28121*t399*t1916;
  t2450 = -0.50321*t345*t406*t1916;
  t2577 = 0.50321*t276*t411*t1916;
  t2588 = -1.*t284*t75*t283;
  t2638 = t75*t304*t319;
  t2684 = t2588 + t2638;
  t2688 = 0.15121*t2684;
  t2754 = t345*t404*t1916;
  t2758 = t276*t411*t1916;
  t2788 = t2754 + t2758;
  t3015 = -0.19821*t2788;
  t3799 = t284*t75*t283;
  t3804 = -1.*t75*t304*t319;
  t3809 = t3799 + t3804;
  t3835 = -1.*t276*t312;
  t3878 = -1.*t345*t3809;
  t3964 = t3835 + t3878;
  t4042 = t345*t312;
  t4053 = -1.*t276*t3809;
  t4059 = t4042 + t4053;
  t4724 = t276*t312;
  t4743 = t345*t3809;
  t4749 = t4724 + t4743;
  t4998 = Cos(var1[3]);
  t5044 = Sin(var1[3]);
  t5036 = t4998*t283*t312;
  t5045 = -1.*t5044*t319;
  t5050 = t5036 + t5045;
  t5073 = -1.*t283*t5044;
  t5087 = -1.*t4998*t312*t319;
  t5107 = t5073 + t5087;
  t5356 = t284*t5050;
  t5363 = t304*t5107;
  t5368 = t5356 + t5363;
  t5408 = -1.*t4998*t75*t276;
  t5468 = t345*t5368;
  t5488 = t5408 + t5468;
  t5506 = -1.*t345*t4998*t75;
  t5556 = -1.*t276*t5368;
  t5574 = t5506 + t5556;
  t5741 = t284*t75*t283*t5044;
  t5754 = -1.*t75*t304*t5044*t319;
  t5755 = t5741 + t5754;
  t5818 = t276*t5044*t312;
  t5819 = t345*t5755;
  t5835 = t5818 + t5819;
  t5843 = t345*t5044*t312;
  t5852 = -1.*t276*t5755;
  t5853 = t5843 + t5852;
  t6323 = -1.*t283*t5044*t312;
  t6327 = -1.*t4998*t319;
  t6332 = t6323 + t6327;
  t6335 = t4998*t283;
  t6336 = -1.*t5044*t312*t319;
  t6375 = t6335 + t6336;
  t6402 = t304*t6332;
  t6404 = t284*t6375;
  t6416 = t6402 + t6404;
  t3286 = -0.15121*t304;
  t3288 = t3268 + t3286;
  t3607 = t3268 + t307;
  t6502 = t283*t5044*t312;
  t6542 = t4998*t319;
  t6566 = t6502 + t6542;
  t6879 = -1.*t304*t6566;
  t6991 = t6879 + t6404;
  t6446 = -1.*t304*t6375;
  t7162 = t284*t6566;
  t7166 = t304*t6375;
  t7201 = t7162 + t7166;
  t7237 = t75*t276*t5044;
  t7252 = -1.*t345*t7201;
  t7256 = t7237 + t7252;
  t7286 = -1.*t345*t75*t5044;
  t7287 = -1.*t276*t7201;
  t7295 = t7286 + t7287;
  t7330 = -1.*t75*t276*t5044;
  t7333 = t345*t7201;
  t7335 = t7330 + t7333;
  t7647 = -1.*t284*t4998*t75*t283;
  t7652 = t4998*t75*t304*t319;
  t7654 = t7647 + t7652;
  t7661 = -1.*t4998*t276*t312;
  t7662 = t345*t7654;
  t7669 = t7661 + t7662;
  t7674 = -1.*t345*t4998*t312;
  t7680 = -1.*t276*t7654;
  t7707 = t7674 + t7680;
  t7742 = t283*t5044;
  t7758 = t4998*t312*t319;
  t7759 = t7742 + t7758;
  t7763 = t304*t5050;
  t7775 = t284*t7759;
  t7784 = t7763 + t7775;
  t7833 = -1.*t4998*t283*t312;
  t7835 = t5044*t319;
  t7837 = t7833 + t7835;
  t7845 = -1.*t304*t7837;
  t7846 = t7845 + t7775;
  t7800 = -1.*t304*t7759;
  t7980 = t284*t7837;
  t7997 = t304*t7759;
  t8002 = t7980 + t7997;
  t8004 = -1.*t345*t8002;
  t8005 = t5408 + t8004;
  t8019 = t345*t4998*t75;
  t8020 = -1.*t276*t8002;
  t8022 = t8019 + t8020;
  t8054 = t4998*t75*t276;
  t8077 = t345*t8002;
  t8088 = t8054 + t8077;
  p_output1[0]=1.;
  p_output1[1]=-1.*t283*t308*t312 + t312*t318*t319 + 0.15121*(t283*t304*t312 + t284*t312*t319) - 0.28121*t399*t402 - 0.50321*t406*t409 - 0.50321*t411*t414 - 0.19821*(t404*t409 - 1.*t411*t414) + 0.28121*t276*t75;
  p_output1[2]=t2288 + t2450 + t2577 + t2688 + t3015 - 1.*t283*t318*t75 - 1.*t308*t319*t75;
  p_output1[3]=t2288 + t2450 + t2577 + t2688 + t3015 + t283*t3288*t75 - 1.*t319*t3607*t75;
  p_output1[4]=0.28121*t312*t345 - 0.28121*t276*t3809 - 0.50321*t4059*t406 - 0.50321*t3964*t411 - 0.19821*(t404*t4059 - 1.*t3964*t411);
  p_output1[5]=-0.50321*t404*t4059 - 0.50321*t411*t4749 - 0.19821*(-1.*t404*t4059 - 1.*t411*t4749);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=t308*t5050 + t318*t5107 + 0.15121*(-1.*t304*t5050 + t284*t5107) - 0.28121*t399*t5368 - 0.50321*t406*t5488 - 0.50321*t411*t5574 - 0.19821*(t404*t5488 - 1.*t411*t5574) - 0.28121*t276*t4998*t75;
  p_output1[9]=0.28121*t276*t312*t5044 - 0.28121*t399*t5755 - 0.50321*t406*t5835 - 0.50321*t411*t5853 - 0.19821*(t404*t5835 - 1.*t411*t5853) + t283*t308*t5044*t75 - 1.*t318*t319*t5044*t75 + 0.15121*(-1.*t283*t304*t5044*t75 - 1.*t284*t319*t5044*t75);
  p_output1[10]=t318*t6332 + t308*t6375 - 0.28121*t399*t6416 - 0.50321*t345*t406*t6416 + 0.50321*t276*t411*t6416 - 0.19821*(t345*t404*t6416 + t276*t411*t6416) + 0.15121*(t284*t6332 + t6446);
  p_output1[11]=t3607*t6375 + t3288*t6566 + 0.15121*(t6446 - 1.*t284*t6566) - 0.28121*t399*t6991 - 0.50321*t345*t406*t6991 + 0.50321*t276*t411*t6991 - 0.19821*(t345*t404*t6991 + t276*t411*t6991);
  p_output1[12]=-0.28121*t276*t7201 - 0.50321*t411*t7256 - 0.50321*t406*t7295 - 0.19821*(-1.*t411*t7256 + t404*t7295) - 0.28121*t345*t5044*t75;
  p_output1[13]=-0.50321*t404*t7295 - 0.50321*t411*t7335 - 0.19821*(-1.*t404*t7295 - 1.*t411*t7335);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=t318*t6375 + t308*t6566 + 0.15121*t6991 - 0.28121*t399*t7201 - 0.50321*t411*t7295 - 0.50321*t406*t7335 - 0.19821*(-1.*t411*t7295 + t404*t7335) - 0.28121*t276*t5044*t75;
  p_output1[17]=-0.28121*t276*t312*t4998 - 1.*t283*t308*t4998*t75 + t318*t319*t4998*t75 + 0.15121*(t283*t304*t4998*t75 + t284*t319*t4998*t75) - 0.28121*t399*t7654 - 0.50321*t406*t7669 - 0.50321*t411*t7707 - 0.19821*(t404*t7669 - 1.*t411*t7707);
  p_output1[18]=t318*t5050 + t308*t7759 - 0.28121*t399*t7784 - 0.50321*t345*t406*t7784 + 0.50321*t276*t411*t7784 - 0.19821*(t345*t404*t7784 + t276*t411*t7784) + 0.15121*(t5356 + t7800);
  p_output1[19]=t3607*t7759 + t3288*t7837 + 0.15121*(t7800 - 1.*t284*t7837) - 0.28121*t399*t7846 - 0.50321*t345*t406*t7846 + 0.50321*t276*t411*t7846 - 0.19821*(t345*t404*t7846 + t276*t411*t7846);
  p_output1[20]=0.28121*t345*t4998*t75 - 0.28121*t276*t8002 - 0.50321*t411*t8005 - 0.50321*t406*t8022 - 0.19821*(-1.*t411*t8005 + t404*t8022);
  p_output1[21]=-0.50321*t404*t8022 - 0.50321*t411*t8088 - 0.19821*(-1.*t404*t8022 - 1.*t411*t8088);
  p_output1[22]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 23, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_RlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_h_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
