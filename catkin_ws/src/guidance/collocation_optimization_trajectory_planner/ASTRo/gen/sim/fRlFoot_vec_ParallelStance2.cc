/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:41:20 GMT+02:00
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
  double t1160;
  double t3821;
  double t1378;
  double t16038;
  double t18216;
  double t12990;
  double t18401;
  double t2838;
  double t18594;
  double t18650;
  double t18667;
  double t3894;
  double t18519;
  double t18857;
  double t18914;
  double t18935;
  double t3687;
  double t4751;
  double t5367;
  double t19039;
  double t19020;
  double t16420;
  double t18500;
  double t18505;
  double t18679;
  double t18684;
  double t18757;
  double t18937;
  double t18938;
  double t18939;
  double t19040;
  double t19279;
  double t19304;
  double t19324;
  double t19326;
  double t19330;
  double t19343;
  double t19348;
  double t19352;
  double t19379;
  double t19414;
  double t19415;
  double t19422;
  double t19461;
  double t19462;
  double t18593;
  double t18786;
  double t18821;
  double t20023;
  double t20024;
  double t20055;
  double t20056;
  double t20060;
  double t20069;
  double t20070;
  double t20077;
  double t20096;
  double t20098;
  double t20162;
  double t20170;
  double t20180;
  double t20338;
  double t20499;
  double t20507;
  double t20025;
  double t20031;
  double t20039;
  double t20181;
  double t20288;
  double t20692;
  double t20701;
  double t20703;
  double t20711;
  double t20726;
  double t20734;
  double t20743;
  double t20327;
  double t20581;
  double t20634;
  double t20724;
  double t20746;
  double t20748;
  double t20760;
  double t20769;
  double t20778;
  double t18856;
  double t18954;
  double t18976;
  double t20636;
  double t20796;
  double t20996;
  double t21040;
  double t21156;
  double t21188;
  double t21857;
  double t21871;
  t1160 = Cos(var1[4]);
  t3821 = Cos(var1[9]);
  t1378 = Cos(var1[5]);
  t16038 = Cos(var1[11]);
  t18216 = Sin(var1[10]);
  t12990 = Cos(var1[10]);
  t18401 = Sin(var1[11]);
  t2838 = Sin(var1[9]);
  t18594 = -1.*t16038*t18216;
  t18650 = t12990*t18401;
  t18667 = t18594 + t18650;
  t3894 = Sin(var1[5]);
  t18519 = Sin(var1[4]);
  t18857 = -1.*t12990*t16038;
  t18914 = -1.*t18216*t18401;
  t18935 = t18857 + t18914;
  t3687 = t1378*t2838;
  t4751 = t3821*t3894;
  t5367 = t3687 + t4751;
  t19039 = Cos(var1[3]);
  t19020 = Sin(var1[3]);
  t16420 = t12990*t16038;
  t18500 = t18216*t18401;
  t18505 = t16420 + t18500;
  t18679 = t3821*t1378*t18667;
  t18684 = -1.*t2838*t18667*t3894;
  t18757 = t18679 + t18684;
  t18937 = t3821*t1378*t18935;
  t18938 = -1.*t2838*t18935*t3894;
  t18939 = t18937 + t18938;
  t19040 = -1.*t3821*t1378;
  t19279 = t2838*t3894;
  t19304 = t19040 + t19279;
  t19324 = t1378*t2838*t18667;
  t19326 = t3821*t18667*t3894;
  t19330 = t19324 + t19326;
  t19343 = t1160*t18505;
  t19348 = -1.*t18519*t18757;
  t19352 = t19343 + t19348;
  t19379 = t1378*t2838*t18935;
  t19414 = t3821*t18935*t3894;
  t19415 = t19379 + t19414;
  t19422 = t1160*t18667;
  t19461 = -1.*t18519*t18939;
  t19462 = t19422 + t19461;
  t18593 = t18505*t18519;
  t18786 = t1160*t18757;
  t18821 = t18593 + t18786;
  t20023 = -1.*t3821;
  t20024 = 1. + t20023;
  t20055 = -1.*t12990;
  t20056 = 1. + t20055;
  t20060 = -0.28121*t20056;
  t20069 = -1.*t16038;
  t20070 = 1. + t20069;
  t20077 = -0.50321*t20070;
  t20096 = -0.23321*t16038;
  t20098 = t20077 + t20096;
  t20162 = t12990*t20098;
  t20170 = 0.27*t18216*t18401;
  t20180 = t20060 + t20162 + t20170;
  t20338 = -0.15121*t20024;
  t20499 = t3821*t20180;
  t20507 = t20338 + t20499;
  t20025 = 0.15121*t20024;
  t20031 = 0.15121*t3821;
  t20039 = 0.15121*t2838;
  t20181 = t2838*t20180;
  t20288 = t20025 + t20031 + t20039 + t20181;
  t20692 = 0.28121*t18216;
  t20701 = t20098*t18216;
  t20703 = -0.27*t12990*t18401;
  t20711 = t20692 + t20701 + t20703;
  t20726 = t1378*t20507;
  t20734 = -1.*t20288*t3894;
  t20743 = t20726 + t20734;
  t20327 = t1378*t20288;
  t20581 = t20507*t3894;
  t20634 = t20327 + t20581;
  t20724 = t20711*t18519;
  t20746 = t1160*t20743;
  t20748 = t20724 + t20746;
  t20760 = t1160*t20711;
  t20769 = -1.*t18519*t20743;
  t20778 = t20760 + t20769;
  t18856 = t18667*t18519;
  t18954 = t1160*t18939;
  t18976 = t18856 + t18954;
  t20636 = -1.*t19304*t20634;
  t20796 = t19330*t20634;
  t20996 = t19304*t20634;
  t21040 = -1.*t19415*t20634;
  t21156 = -1.*t19330*t20634;
  t21188 = t19415*t20634;
  t21857 = -1.*t20711*t18505;
  t21871 = t20711*t18667;
  p_output1[0]=t18976*var2[0] + t1160*t5367*var2[1] + t18821*var2[2];
  p_output1[1]=(t19039*t19415 - 1.*t19020*t19462)*var2[0] + (t19039*t19304 + t18519*t19020*t5367)*var2[1] + (t19039*t19330 - 1.*t19020*t19352)*var2[2];
  p_output1[2]=(t19020*t19415 + t19039*t19462)*var2[0] + (t19020*t19304 - 1.*t18519*t19039*t5367)*var2[1] + (t19020*t19330 + t19039*t19352)*var2[2];
  p_output1[3]=(t1160*(t18821*t20748 + t19352*t20778 + t20796)*t5367 + t18821*(t20636 - 1.*t1160*t20748*t5367 + t18519*t20778*t5367))*var2[0] + (t18976*(-1.*t18821*t20748 - 1.*t19352*t20778 + t21156) + t18821*(t18976*t20748 + t19462*t20778 + t21188))*var2[1] + (t1160*(-1.*t18976*t20748 - 1.*t19462*t20778 + t21040)*t5367 + t18976*(t20996 + t1160*t20748*t5367 - 1.*t18519*t20778*t5367))*var2[2];
  p_output1[4]=(t19304*(t18505*t20711 + t18757*t20743 + t20796) + t19330*(t20636 - 1.*t20743*t5367))*var2[0] + (t19415*(-1.*t18757*t20743 + t21156 + t21857) + t19330*(t18939*t20743 + t21188 + t21871))*var2[1] + (t19304*(-1.*t18667*t20711 - 1.*t18939*t20743 + t21040) + t19415*(t20996 + t20743*t5367))*var2[2];
  p_output1[5]=t18505*(-1.*t20507*t2838 + t20288*t3821)*var2[0] + (t18667*(t21857 - 1.*t18667*t20288*t2838 - 1.*t18667*t20507*t3821) + t18505*(t21871 + t18935*t20288*t2838 + t18935*t20507*t3821))*var2[1] + t18667*(t20507*t2838 - 1.*t20288*t3821)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.15121*t18505 + 0.15121*t18935)*var2[0] + (-0.15121 + t18667*(-1.*t18667*t20180 + t21857) + t18505*(t18935*t20180 + t21871))*var2[1];
  p_output1[10]=(0.28121*t18401 - 0.27*t16038*t18401 + t18401*t20098)*var2[0] + (0.28121*t16038 + 0.27*Power(t18401,2) + t16038*t20098)*var2[2];
  p_output1[11]=-0.27*var2[2];
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

#include "fRlFoot_vec_ParallelStance2.hh"

namespace SymFunction
{

void fRlFoot_vec_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
