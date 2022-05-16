/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:42:17 GMT+02:00
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
  double t1669;
  double t2407;
  double t2684;
  double t2847;
  double t2889;
  double t2907;
  double t3120;
  double t3026;
  double t3036;
  double t3136;
  double t3105;
  double t3179;
  double t3448;
  double t3562;
  double t3566;
  double t3627;
  double t786;
  double t1646;
  double t3756;
  double t3785;
  double t3795;
  double t3796;
  double t3809;
  double t3874;
  double t3883;
  double t3885;
  double t3888;
  double t3920;
  double t3926;
  double t3927;
  double t2965;
  double t3017;
  double t3523;
  double t3543;
  double t3776;
  double t3783;
  double t3831;
  double t3870;
  double t4076;
  double t4089;
  double t4102;
  double t4109;
  double t4112;
  double t4177;
  double t4227;
  double t4250;
  double t4261;
  double t4325;
  double t4334;
  double t4363;
  double t4391;
  double t4396;
  double t4405;
  double t4437;
  double t4524;
  double t4532;
  double t5500;
  double t5565;
  double t5615;
  double t5648;
  double t5658;
  double t5161;
  double t5904;
  double t5905;
  double t5911;
  double t5914;
  double t5915;
  double t5924;
  double t5926;
  double t5927;
  double t5946;
  double t5990;
  double t5994;
  double t6009;
  t1669 = Sin(var1[3]);
  t2407 = Cos(var1[15]);
  t2684 = -1.*t2407;
  t2847 = 1. + t2684;
  t2889 = -0.15121*t2847;
  t2907 = Sin(var1[15]);
  t3120 = Cos(var1[3]);
  t3026 = Cos(var1[5]);
  t3036 = Sin(var1[4]);
  t3136 = Sin(var1[5]);
  t3105 = t3026*t1669*t3036;
  t3179 = t3120*t3136;
  t3448 = t3105 + t3179;
  t3562 = t3120*t3026;
  t3566 = -1.*t1669*t3036*t3136;
  t3627 = t3562 + t3566;
  t786 = Cos(var1[4]);
  t1646 = Sin(var1[16]);
  t3756 = Cos(var1[16]);
  t3785 = t2407*t3448;
  t3795 = t2907*t3627;
  t3796 = t3785 + t3795;
  t3809 = Cos(var1[17]);
  t3874 = -1.*t786*t1646*t1669;
  t3883 = t3756*t3796;
  t3885 = t3874 + t3883;
  t3888 = Sin(var1[17]);
  t3920 = -1.*t3756*t786*t1669;
  t3926 = -1.*t1646*t3796;
  t3927 = t3920 + t3926;
  t2965 = -0.15121*t2907;
  t3017 = t2889 + t2965;
  t3523 = 0.15121*t2907;
  t3543 = t2889 + t3523;
  t3776 = -1.*t3756;
  t3783 = 1. + t3776;
  t3831 = -1.*t3809;
  t3870 = 1. + t3831;
  t4076 = -1.*t2407*t3120*t786*t3026;
  t4089 = t3120*t786*t2907*t3136;
  t4102 = t4076 + t4089;
  t4109 = -1.*t3120*t1646*t3036;
  t4112 = t3756*t4102;
  t4177 = t4109 + t4112;
  t4227 = -1.*t3756*t3120*t3036;
  t4250 = -1.*t1646*t4102;
  t4261 = t4227 + t4250;
  t4325 = t3120*t3026*t3036;
  t4334 = -1.*t1669*t3136;
  t4363 = t4325 + t4334;
  t4391 = t3026*t1669;
  t4396 = t3120*t3036*t3136;
  t4405 = t4391 + t4396;
  t4437 = t2907*t4363;
  t4524 = t2407*t4405;
  t4532 = t4437 + t4524;
  t5500 = -1.*t3120*t3026*t3036;
  t5565 = t1669*t3136;
  t5615 = t5500 + t5565;
  t5648 = -1.*t2907*t5615;
  t5658 = t5648 + t4524;
  t5161 = -1.*t2907*t4405;
  t5904 = t2407*t5615;
  t5905 = t2907*t4405;
  t5911 = t5904 + t5905;
  t5914 = -1.*t3120*t786*t1646;
  t5915 = -1.*t3756*t5911;
  t5924 = t5914 + t5915;
  t5926 = t3756*t3120*t786;
  t5927 = -1.*t1646*t5911;
  t5946 = t5926 + t5927;
  t5990 = t3120*t786*t1646;
  t5994 = t3756*t5911;
  t6009 = t5990 + t5994;
  p_output1[0]=1.;
  p_output1[1]=t3017*t3448 + t3543*t3627 - 0.15121*(-1.*t2907*t3448 + t2407*t3627) - 0.28121*t3783*t3796 - 0.50321*t3870*t3885 - 0.50321*t3888*t3927 - 0.23321*(t3809*t3885 - 1.*t3888*t3927) - 0.28121*t1646*t1669*t786;
  p_output1[2]=-0.28121*t1646*t3036*t3120 - 0.28121*t3783*t4102 - 0.50321*t3870*t4177 - 0.50321*t3888*t4261 - 0.23321*(t3809*t4177 - 1.*t3888*t4261) - 1.*t3017*t3026*t3120*t786 + t3120*t3136*t3543*t786 - 0.15121*(t2907*t3026*t3120*t786 + t2407*t3120*t3136*t786);
  p_output1[3]=t3543*t4363 + t3017*t4405 - 0.28121*t3783*t4532 - 0.50321*t3756*t3870*t4532 + 0.50321*t1646*t3888*t4532 - 0.23321*(t3756*t3809*t4532 + t1646*t3888*t4532) - 0.15121*(t2407*t4363 + t5161);
  p_output1[4]=(0.15121*t2407 + t2965)*t4405 + (-0.15121*t2407 + t2965)*t5615 - 0.15121*(t5161 - 1.*t2407*t5615) - 0.28121*t3783*t5658 - 0.50321*t3756*t3870*t5658 + 0.50321*t1646*t3888*t5658 - 0.23321*(t3756*t3809*t5658 + t1646*t3888*t5658);
  p_output1[5]=-0.28121*t1646*t5911 - 0.50321*t3888*t5924 - 0.50321*t3870*t5946 - 0.23321*(-1.*t3888*t5924 + t3809*t5946) + 0.28121*t3120*t3756*t786;
  p_output1[6]=-0.50321*t3809*t5946 - 0.50321*t3888*t6009 - 0.23321*(-1.*t3809*t5946 - 1.*t3888*t6009);
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

#include "J_foot_clearance_RrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_foot_clearance_RrFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
