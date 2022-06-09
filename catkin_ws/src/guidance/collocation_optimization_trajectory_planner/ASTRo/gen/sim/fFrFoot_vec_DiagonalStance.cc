/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:37:26 GMT+02:00
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
  double t8878;
  double t10471;
  double t10435;
  double t10788;
  double t10881;
  double t10787;
  double t10907;
  double t10465;
  double t10971;
  double t10972;
  double t10977;
  double t10472;
  double t10968;
  double t10807;
  double t10965;
  double t10966;
  double t10466;
  double t10474;
  double t10773;
  double t11395;
  double t11382;
  double t10981;
  double t10984;
  double t11028;
  double t11216;
  double t11289;
  double t11291;
  double t11295;
  double t11313;
  double t11317;
  double t11396;
  double t11402;
  double t11406;
  double t11414;
  double t11415;
  double t11416;
  double t11419;
  double t11421;
  double t11422;
  double t11478;
  double t11490;
  double t11491;
  double t11503;
  double t11507;
  double t11508;
  double t10970;
  double t11046;
  double t11208;
  double t11548;
  double t11550;
  double t11566;
  double t11567;
  double t11568;
  double t11569;
  double t11570;
  double t11571;
  double t11572;
  double t11573;
  double t11574;
  double t11575;
  double t11576;
  double t11580;
  double t11581;
  double t11582;
  double t11554;
  double t11563;
  double t11564;
  double t11577;
  double t11578;
  double t11596;
  double t11597;
  double t11598;
  double t11605;
  double t11610;
  double t11612;
  double t11622;
  double t11579;
  double t11583;
  double t11584;
  double t11606;
  double t11623;
  double t11624;
  double t11626;
  double t11634;
  double t11644;
  double t11294;
  double t11327;
  double t11369;
  double t11585;
  double t11651;
  double t11664;
  double t11689;
  double t11707;
  double t11724;
  double t11809;
  double t11817;
  t8878 = Cos(var1[4]);
  t10471 = Cos(var1[12]);
  t10435 = Cos(var1[5]);
  t10788 = Cos(var1[14]);
  t10881 = Sin(var1[13]);
  t10787 = Cos(var1[13]);
  t10907 = Sin(var1[14]);
  t10465 = Sin(var1[12]);
  t10971 = t10788*t10881;
  t10972 = -1.*t10787*t10907;
  t10977 = t10971 + t10972;
  t10472 = Sin(var1[5]);
  t10968 = Sin(var1[4]);
  t10807 = t10787*t10788;
  t10965 = t10881*t10907;
  t10966 = t10807 + t10965;
  t10466 = -1.*t10435*t10465;
  t10474 = -1.*t10471*t10472;
  t10773 = t10466 + t10474;
  t11395 = Cos(var1[3]);
  t11382 = Sin(var1[3]);
  t10981 = t10471*t10435*t10977;
  t10984 = -1.*t10465*t10977*t10472;
  t11028 = t10981 + t10984;
  t11216 = -1.*t10788*t10881;
  t11289 = t10787*t10907;
  t11291 = t11216 + t11289;
  t11295 = t10471*t10435*t10966;
  t11313 = -1.*t10465*t10966*t10472;
  t11317 = t11295 + t11313;
  t11396 = t10471*t10435;
  t11402 = -1.*t10465*t10472;
  t11406 = t11396 + t11402;
  t11414 = t10435*t10465*t10977;
  t11415 = t10471*t10977*t10472;
  t11416 = t11414 + t11415;
  t11419 = t8878*t10966;
  t11421 = -1.*t10968*t11028;
  t11422 = t11419 + t11421;
  t11478 = t10435*t10465*t10966;
  t11490 = t10471*t10966*t10472;
  t11491 = t11478 + t11490;
  t11503 = t8878*t11291;
  t11507 = -1.*t10968*t11317;
  t11508 = t11503 + t11507;
  t10970 = t10966*t10968;
  t11046 = t8878*t11028;
  t11208 = t10970 + t11046;
  t11548 = -1.*t10471;
  t11550 = 1. + t11548;
  t11566 = -1.*t10787;
  t11567 = 1. + t11566;
  t11568 = 0.28121*t11567;
  t11569 = -1.*t10788;
  t11570 = 1. + t11569;
  t11571 = 0.50321*t11570;
  t11572 = 0.19821*t10788;
  t11573 = t11571 + t11572;
  t11574 = t10787*t11573;
  t11575 = -0.305*t10881*t10907;
  t11576 = t11568 + t11574 + t11575;
  t11580 = 0.15121*t11550;
  t11581 = t10471*t11576;
  t11582 = t11580 + t11581;
  t11554 = -0.15121*t11550;
  t11563 = -0.15121*t10471;
  t11564 = -0.15121*t10465;
  t11577 = t10465*t11576;
  t11578 = t11554 + t11563 + t11564 + t11577;
  t11596 = 0.28121*t10881;
  t11597 = -1.*t11573*t10881;
  t11598 = -0.305*t10787*t10907;
  t11605 = t11596 + t11597 + t11598;
  t11610 = t10435*t11582;
  t11612 = -1.*t11578*t10472;
  t11622 = t11610 + t11612;
  t11579 = t10435*t11578;
  t11583 = t11582*t10472;
  t11584 = t11579 + t11583;
  t11606 = t11605*t10968;
  t11623 = t8878*t11622;
  t11624 = t11606 + t11623;
  t11626 = t8878*t11605;
  t11634 = -1.*t10968*t11622;
  t11644 = t11626 + t11634;
  t11294 = t11291*t10968;
  t11327 = t8878*t11317;
  t11369 = t11294 + t11327;
  t11585 = -1.*t11406*t11584;
  t11651 = t11416*t11584;
  t11664 = t11406*t11584;
  t11689 = -1.*t11491*t11584;
  t11707 = -1.*t11416*t11584;
  t11724 = t11491*t11584;
  t11809 = -1.*t11605*t10966;
  t11817 = t11605*t11291;
  p_output1[0]=t11369*var2[0] + t10773*t8878*var2[1] + t11208*var2[2];
  p_output1[1]=(t11395*t11491 - 1.*t11382*t11508)*var2[0] + (t10773*t10968*t11382 + t11395*t11406)*var2[1] + (t11395*t11416 - 1.*t11382*t11422)*var2[2];
  p_output1[2]=(t11382*t11491 + t11395*t11508)*var2[0] + (-1.*t10773*t10968*t11395 + t11382*t11406)*var2[1] + (t11382*t11416 + t11395*t11422)*var2[2];
  p_output1[3]=(t10773*(t11208*t11624 + t11422*t11644 + t11651)*t8878 + t11208*(t11585 + t10773*t10968*t11644 - 1.*t10773*t11624*t8878))*var2[0] + (t11369*(-1.*t11208*t11624 - 1.*t11422*t11644 + t11707) + t11208*(t11369*t11624 + t11508*t11644 + t11724))*var2[1] + (t10773*(-1.*t11369*t11624 - 1.*t11508*t11644 + t11689)*t8878 + t11369*(-1.*t10773*t10968*t11644 + t11664 + t10773*t11624*t8878))*var2[2];
  p_output1[4]=(t11416*(t11585 - 1.*t10773*t11622) + t11406*(t10966*t11605 + t11028*t11622 + t11651))*var2[0] + (t11491*(-1.*t11028*t11622 + t11707 + t11809) + t11416*(t11317*t11622 + t11724 + t11817))*var2[1] + (t11491*(t10773*t11622 + t11664) + t11406*(-1.*t11291*t11605 - 1.*t11317*t11622 + t11689))*var2[2];
  p_output1[5]=t10966*(-1.*t10471*t11578 + t10465*t11582)*var2[0] + (t11291*(-1.*t10465*t10977*t11578 - 1.*t10471*t10977*t11582 + t11809) + t10966*(t10465*t10966*t11578 + t10471*t10966*t11582 + t11817))*var2[1] + t11291*(t10471*t11578 - 1.*t10465*t11582)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t11291*(-1.*t10977*t11576 + t11809) + t10966*(t10966*t11576 + t11817))*var2[1] + (-0.15121*t10977 - 0.15121*t11291)*var2[2];
  p_output1[13]=(0.28121*t10907 - 0.305*t10788*t10907 - 1.*t10907*t11573)*var2[0] + (0.28121*t10788 + 0.305*Power(t10907,2) - 1.*t10788*t11573)*var2[2];
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

#include "fFrFoot_vec_DiagonalStance.hh"

namespace SymFunction
{

void fFrFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
