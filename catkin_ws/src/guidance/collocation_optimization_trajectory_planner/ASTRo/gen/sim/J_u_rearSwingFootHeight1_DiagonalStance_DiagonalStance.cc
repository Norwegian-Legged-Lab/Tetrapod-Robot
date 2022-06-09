/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:38:50 GMT+02:00
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
  double t4952;
  double t5908;
  double t7989;
  double t9667;
  double t10055;
  double t10201;
  double t10465;
  double t10253;
  double t10254;
  double t10787;
  double t10310;
  double t10881;
  double t10907;
  double t11078;
  double t11294;
  double t11295;
  double t3652;
  double t4937;
  double t11507;
  double t11569;
  double t11570;
  double t11572;
  double t11574;
  double t11596;
  double t11597;
  double t11610;
  double t11634;
  double t11644;
  double t11651;
  double t11664;
  double t10210;
  double t10216;
  double t10970;
  double t11046;
  double t11508;
  double t11548;
  double t11583;
  double t11585;
  double t15704;
  double t15706;
  double t15734;
  double t15757;
  double t15759;
  double t15803;
  double t15828;
  double t15829;
  double t15844;
  double t15975;
  double t15986;
  double t16000;
  double t16016;
  double t16018;
  double t16024;
  double t16031;
  double t16032;
  double t16045;
  double t16222;
  double t16277;
  double t16426;
  double t16714;
  double t16727;
  double t16095;
  double t17449;
  double t17475;
  double t17478;
  double t17577;
  double t17585;
  double t17586;
  double t17609;
  double t17610;
  double t17615;
  double t18704;
  double t18706;
  double t18711;
  t4952 = Sin(var1[3]);
  t5908 = Cos(var1[15]);
  t7989 = -1.*t5908;
  t9667 = 1. + t7989;
  t10055 = -0.15121*t9667;
  t10201 = Sin(var1[15]);
  t10465 = Cos(var1[3]);
  t10253 = Cos(var1[5]);
  t10254 = Sin(var1[4]);
  t10787 = Sin(var1[5]);
  t10310 = t10253*t4952*t10254;
  t10881 = t10465*t10787;
  t10907 = t10310 + t10881;
  t11078 = t10465*t10253;
  t11294 = -1.*t4952*t10254*t10787;
  t11295 = t11078 + t11294;
  t3652 = Cos(var1[4]);
  t4937 = Sin(var1[16]);
  t11507 = Cos(var1[16]);
  t11569 = t5908*t10907;
  t11570 = t10201*t11295;
  t11572 = t11569 + t11570;
  t11574 = Cos(var1[17]);
  t11596 = -1.*t3652*t4937*t4952;
  t11597 = t11507*t11572;
  t11610 = t11596 + t11597;
  t11634 = Sin(var1[17]);
  t11644 = -1.*t11507*t3652*t4952;
  t11651 = -1.*t4937*t11572;
  t11664 = t11644 + t11651;
  t10210 = -0.15121*t10201;
  t10216 = t10055 + t10210;
  t10970 = 0.15121*t10201;
  t11046 = t10055 + t10970;
  t11508 = -1.*t11507;
  t11548 = 1. + t11508;
  t11583 = -1.*t11574;
  t11585 = 1. + t11583;
  t15704 = -1.*t5908*t10465*t3652*t10253;
  t15706 = t10465*t3652*t10201*t10787;
  t15734 = t15704 + t15706;
  t15757 = -1.*t10465*t4937*t10254;
  t15759 = t11507*t15734;
  t15803 = t15757 + t15759;
  t15828 = -1.*t11507*t10465*t10254;
  t15829 = -1.*t4937*t15734;
  t15844 = t15828 + t15829;
  t15975 = t10465*t10253*t10254;
  t15986 = -1.*t4952*t10787;
  t16000 = t15975 + t15986;
  t16016 = t10253*t4952;
  t16018 = t10465*t10254*t10787;
  t16024 = t16016 + t16018;
  t16031 = t10201*t16000;
  t16032 = t5908*t16024;
  t16045 = t16031 + t16032;
  t16222 = -1.*t10465*t10253*t10254;
  t16277 = t4952*t10787;
  t16426 = t16222 + t16277;
  t16714 = -1.*t10201*t16426;
  t16727 = t16714 + t16032;
  t16095 = -1.*t10201*t16024;
  t17449 = t5908*t16426;
  t17475 = t10201*t16024;
  t17478 = t17449 + t17475;
  t17577 = -1.*t10465*t3652*t4937;
  t17585 = -1.*t11507*t17478;
  t17586 = t17577 + t17585;
  t17609 = t11507*t10465*t3652;
  t17610 = -1.*t4937*t17478;
  t17615 = t17609 + t17610;
  t18704 = t10465*t3652*t4937;
  t18706 = t11507*t17478;
  t18711 = t18704 + t18706;
  p_output1[0]=1.;
  p_output1[1]=t10216*t10907 + t11046*t11295 - 0.28121*t11548*t11572 - 0.50321*t11585*t11610 - 0.50321*t11634*t11664 - 0.19821*(t11574*t11610 - 1.*t11634*t11664) - 0.28121*t3652*t4937*t4952 - 0.15121*(-1.*t10201*t10907 + t11295*t5908);
  p_output1[2]=-0.28121*t11548*t15734 - 0.50321*t11585*t15803 - 0.50321*t11634*t15844 - 0.19821*(t11574*t15803 - 1.*t11634*t15844) - 1.*t10216*t10253*t10465*t3652 + t10465*t10787*t11046*t3652 - 0.28121*t10254*t10465*t4937 - 0.15121*(t10201*t10253*t10465*t3652 + t10465*t10787*t3652*t5908);
  p_output1[3]=t11046*t16000 + t10216*t16024 - 0.28121*t11548*t16045 - 0.50321*t11507*t11585*t16045 + 0.50321*t11634*t16045*t4937 - 0.19821*(t11507*t11574*t16045 + t11634*t16045*t4937) - 0.15121*(t16095 + t16000*t5908);
  p_output1[4]=-0.28121*t11548*t16727 - 0.50321*t11507*t11585*t16727 + 0.50321*t11634*t16727*t4937 - 0.19821*(t11507*t11574*t16727 + t11634*t16727*t4937) + t16426*(t10210 - 0.15121*t5908) + t16024*(t10210 + 0.15121*t5908) - 0.15121*(t16095 - 1.*t16426*t5908);
  p_output1[5]=-0.50321*t11634*t17586 - 0.50321*t11585*t17615 - 0.19821*(-1.*t11634*t17586 + t11574*t17615) + 0.28121*t10465*t11507*t3652 - 0.28121*t17478*t4937;
  p_output1[6]=-0.50321*t11574*t17615 - 0.50321*t11634*t18711 - 0.19821*(-1.*t11574*t17615 - 1.*t11634*t18711);
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

#include "J_u_rearSwingFootHeight1_DiagonalStance_DiagonalStance.hh"

namespace SymFunction
{

void J_u_rearSwingFootHeight1_DiagonalStance_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
