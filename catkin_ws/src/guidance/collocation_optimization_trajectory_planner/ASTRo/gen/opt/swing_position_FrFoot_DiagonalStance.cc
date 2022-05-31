/*
 * Automatically Generated from Mathematica.
 * Thu 26 May 2022 14:47:30 GMT+02:00
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
  double t610;
  double t635;
  double t636;
  double t654;
  double t670;
  double t675;
  double t678;
  double t681;
  double t679;
  double t682;
  double t680;
  double t683;
  double t684;
  double t691;
  double t692;
  double t696;
  double t632;
  double t633;
  double t705;
  double t717;
  double t718;
  double t719;
  double t722;
  double t725;
  double t726;
  double t727;
  double t729;
  double t730;
  double t731;
  double t735;
  t610 = Cos(var1[3]);
  t635 = Cos(var1[12]);
  t636 = -1.*t635;
  t654 = 1. + t636;
  t670 = Sin(var1[12]);
  t675 = -0.15121*t670;
  t678 = Cos(var1[5]);
  t681 = Sin(var1[3]);
  t679 = Sin(var1[4]);
  t682 = Sin(var1[5]);
  t680 = -1.*t610*t678*t679;
  t683 = t681*t682;
  t684 = t680 + t683;
  t691 = t678*t681;
  t692 = t610*t679*t682;
  t696 = t691 + t692;
  t632 = Cos(var1[4]);
  t633 = Sin(var1[13]);
  t705 = Cos(var1[13]);
  t717 = t635*t684;
  t718 = t670*t696;
  t719 = t717 + t718;
  t722 = Cos(var1[14]);
  t725 = -1.*t610*t632*t633;
  t726 = t705*t719;
  t727 = t725 + t726;
  t729 = Sin(var1[14]);
  t730 = t705*t610*t632;
  t731 = t633*t719;
  t735 = t730 + t731;
  p_output1[0]=0.28121*t610*t632*t633 + (0.15121*t654 + t675)*t684 + (-0.15121*t654 + t675)*t696 - 0.15121*(-1.*t670*t684 + t635*t696) + 0.28121*(1. - 1.*t705)*t719 + 0.50321*(1. - 1.*t722)*t727 - 0.50321*t729*t735 + 0.19821*(t722*t727 + t729*t735) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "swing_position_FrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void swing_position_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
