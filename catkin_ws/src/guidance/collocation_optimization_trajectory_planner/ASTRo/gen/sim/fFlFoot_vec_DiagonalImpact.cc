/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:41:25 GMT+02:00
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
  double t2443;
  double t19104;
  double t2652;
  double t39699;
  double t39749;
  double t39659;
  double t39750;
  double t4919;
  double t21338;
  double t46885;
  double t46892;
  double t46893;
  double t39402;
  double t39747;
  double t39752;
  double t39754;
  double t19089;
  double t21679;
  double t29613;
  double t47406;
  double t47386;
  double t47030;
  double t47038;
  double t47053;
  double t47126;
  double t47152;
  double t47166;
  double t47334;
  double t47335;
  double t47336;
  double t47408;
  double t47410;
  double t47411;
  double t48840;
  double t49711;
  double t49820;
  double t49933;
  double t49935;
  double t49939;
  double t50206;
  double t50218;
  double t50259;
  double t50376;
  double t50378;
  double t50388;
  double t46881;
  double t47055;
  double t47060;
  double t51450;
  double t51539;
  double t51548;
  double t51558;
  double t51580;
  double t51583;
  double t51617;
  double t51622;
  double t51678;
  double t51797;
  double t51868;
  double t51886;
  double t51891;
  double t51978;
  double t52002;
  double t52012;
  double t52046;
  double t52052;
  double t52056;
  double t52057;
  double t52126;
  double t52151;
  double t52152;
  double t52156;
  double t52160;
  double t52283;
  double t52311;
  double t52017;
  double t52058;
  double t52107;
  double t52157;
  double t52323;
  double t52326;
  double t52333;
  double t52369;
  double t52395;
  double t47193;
  double t47340;
  double t47374;
  double t52119;
  double t52473;
  double t52498;
  double t52521;
  double t52665;
  double t52723;
  double t53974;
  double t53986;
  t2443 = Cos(var1[4]);
  t19104 = Cos(var1[5]);
  t2652 = Cos(var1[6]);
  t39699 = Cos(var1[8]);
  t39749 = Sin(var1[7]);
  t39659 = Cos(var1[7]);
  t39750 = Sin(var1[8]);
  t4919 = Sin(var1[5]);
  t21338 = Sin(var1[6]);
  t46885 = t39699*t39749;
  t46892 = -1.*t39659*t39750;
  t46893 = t46885 + t46892;
  t39402 = Sin(var1[4]);
  t39747 = t39659*t39699;
  t39752 = t39749*t39750;
  t39754 = t39747 + t39752;
  t19089 = -1.*t2652*t4919;
  t21679 = -1.*t19104*t21338;
  t29613 = t19089 + t21679;
  t47406 = Cos(var1[3]);
  t47386 = Sin(var1[3]);
  t47030 = t19104*t2652*t46893;
  t47038 = -1.*t4919*t21338*t46893;
  t47053 = t47030 + t47038;
  t47126 = -1.*t39699*t39749;
  t47152 = t39659*t39750;
  t47166 = t47126 + t47152;
  t47334 = t19104*t2652*t39754;
  t47335 = -1.*t4919*t21338*t39754;
  t47336 = t47334 + t47335;
  t47408 = t19104*t2652;
  t47410 = -1.*t4919*t21338;
  t47411 = t47408 + t47410;
  t48840 = t2652*t4919*t46893;
  t49711 = t19104*t21338*t46893;
  t49820 = t48840 + t49711;
  t49933 = t2443*t39754;
  t49935 = -1.*t39402*t47053;
  t49939 = t49933 + t49935;
  t50206 = t2652*t4919*t39754;
  t50218 = t19104*t21338*t39754;
  t50259 = t50206 + t50218;
  t50376 = t2443*t47166;
  t50378 = -1.*t39402*t47336;
  t50388 = t50376 + t50378;
  t46881 = t39402*t39754;
  t47055 = t2443*t47053;
  t47060 = t46881 + t47055;
  t51450 = -1.*t2652;
  t51539 = 1. + t51450;
  t51548 = 0.15121*t51539;
  t51558 = -1.*t39659;
  t51580 = 1. + t51558;
  t51583 = 0.28121*t51580;
  t51617 = -1.*t39699;
  t51622 = 1. + t51617;
  t51678 = 0.50321*t51622;
  t51797 = 0.23321*t39699;
  t51868 = t51678 + t51797;
  t51886 = t39659*t51868;
  t51891 = -0.27*t39749*t39750;
  t51978 = t51583 + t51886 + t51891;
  t52002 = t2652*t51978;
  t52012 = t51548 + t52002;
  t52046 = 0.15121*t2652;
  t52052 = -0.15121*t21338;
  t52056 = t21338*t51978;
  t52057 = t51548 + t52046 + t52052 + t52056;
  t52126 = 0.28121*t39749;
  t52151 = -1.*t51868*t39749;
  t52152 = -0.27*t39659*t39750;
  t52156 = t52126 + t52151 + t52152;
  t52160 = t19104*t52012;
  t52283 = -1.*t4919*t52057;
  t52311 = t52160 + t52283;
  t52017 = t4919*t52012;
  t52058 = t19104*t52057;
  t52107 = t52017 + t52058;
  t52157 = t39402*t52156;
  t52323 = t2443*t52311;
  t52326 = t52157 + t52323;
  t52333 = t2443*t52156;
  t52369 = -1.*t39402*t52311;
  t52395 = t52333 + t52369;
  t47193 = t39402*t47166;
  t47340 = t2443*t47336;
  t47374 = t47193 + t47340;
  t52119 = -1.*t47411*t52107;
  t52473 = t49820*t52107;
  t52498 = t47411*t52107;
  t52521 = -1.*t50259*t52107;
  t52665 = -1.*t49820*t52107;
  t52723 = t50259*t52107;
  t53974 = -1.*t52156*t39754;
  t53986 = t52156*t47166;
  p_output1[0]=t47374*var2[0] + t2443*t29613*var2[1] + t47060*var2[2];
  p_output1[1]=(t47406*t50259 - 1.*t47386*t50388)*var2[0] + (t29613*t39402*t47386 + t47406*t47411)*var2[1] + (t47406*t49820 - 1.*t47386*t49939)*var2[2];
  p_output1[2]=(t47386*t50259 + t47406*t50388)*var2[0] + (-1.*t29613*t39402*t47406 + t47386*t47411)*var2[1] + (t47386*t49820 + t47406*t49939)*var2[2];
  p_output1[3]=(t47060*(t52119 - 1.*t2443*t29613*t52326 + t29613*t39402*t52395) + t2443*t29613*(t47060*t52326 + t49939*t52395 + t52473))*var2[0] + (t47374*(-1.*t47060*t52326 - 1.*t49939*t52395 + t52665) + t47060*(t47374*t52326 + t50388*t52395 + t52723))*var2[1] + (t47374*(t2443*t29613*t52326 - 1.*t29613*t39402*t52395 + t52498) + t2443*t29613*(-1.*t47374*t52326 - 1.*t50388*t52395 + t52521))*var2[2];
  p_output1[4]=(t49820*(t52119 - 1.*t29613*t52311) + t47411*(t39754*t52156 + t47053*t52311 + t52473))*var2[0] + (t50259*(-1.*t47053*t52311 + t52665 + t53974) + t49820*(t47336*t52311 + t52723 + t53986))*var2[1] + (t50259*(t29613*t52311 + t52498) + t47411*(-1.*t47166*t52156 - 1.*t47336*t52311 + t52521))*var2[2];
  p_output1[5]=t39754*(t21338*t52012 - 1.*t2652*t52057)*var2[0] + (t47166*(-1.*t2652*t46893*t52012 - 1.*t21338*t46893*t52057 + t53974) + t39754*(t2652*t39754*t52012 + t21338*t39754*t52057 + t53986))*var2[1] + t47166*(-1.*t21338*t52012 + t2652*t52057)*var2[2];
  p_output1[6]=(-0.15121 + t47166*(-1.*t46893*t51978 + t53974) + t39754*(t39754*t51978 + t53986))*var2[1] + (0.15121*t46893 + 0.15121*t47166)*var2[2];
  p_output1[7]=(0.28121*t39750 - 0.27*t39699*t39750 - 1.*t39750*t51868)*var2[0] + (0.28121*t39699 + 0.27*Power(t39750,2) - 1.*t39699*t51868)*var2[2];
  p_output1[8]=-0.27*var2[2];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
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

#include "fFlFoot_vec_DiagonalImpact.hh"

namespace SymFunction
{

void fFlFoot_vec_DiagonalImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
