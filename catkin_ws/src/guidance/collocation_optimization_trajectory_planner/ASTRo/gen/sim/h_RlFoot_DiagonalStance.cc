/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:37:11 GMT+02:00
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
  double t2431;
  double t2859;
  double t2907;
  double t2938;
  double t3518;
  double t3645;
  double t2434;
  double t3673;
  double t3654;
  double t3655;
  double t3724;
  double t3728;
  double t3741;
  double t3742;
  double t3769;
  double t3781;
  double t3787;
  double t3788;
  double t3790;
  double t3791;
  double t3792;
  double t3793;
  double t3467;
  double t3652;
  double t3801;
  double t3670;
  double t3671;
  double t3805;
  double t3804;
  double t3812;
  double t3813;
  double t3818;
  double t3820;
  double t3822;
  double t3725;
  double t3727;
  double t3771;
  double t3773;
  double t3833;
  double t3834;
  double t3837;
  double t3840;
  double t3844;
  double t3845;
  double t3848;
  double t3849;
  double t3850;
  double t3895;
  double t3896;
  double t3900;
  double t3905;
  double t3906;
  double t3910;
  double t3919;
  double t3920;
  double t3921;
  double t3923;
  double t3924;
  double t3925;
  double t3928;
  double t3929;
  double t3931;
  t2431 = Cos(var1[4]);
  t2859 = Cos(var1[9]);
  t2907 = -1.*t2859;
  t2938 = 1. + t2907;
  t3518 = Sin(var1[9]);
  t3645 = 0.15121*t3518;
  t2434 = Cos(var1[5]);
  t3673 = Sin(var1[5]);
  t3654 = Sin(var1[10]);
  t3655 = Sin(var1[4]);
  t3724 = Cos(var1[10]);
  t3728 = t2859*t2431*t2434;
  t3741 = -1.*t2431*t3518*t3673;
  t3742 = t3728 + t3741;
  t3769 = Cos(var1[11]);
  t3781 = t3654*t3655;
  t3787 = t3724*t3742;
  t3788 = t3781 + t3787;
  t3790 = Sin(var1[11]);
  t3791 = t3724*t3655;
  t3792 = -1.*t3654*t3742;
  t3793 = t3791 + t3792;
  t3467 = -0.15121*t2938;
  t3652 = t3467 + t3645;
  t3801 = Sin(var1[3]);
  t3670 = 0.15121*t2938;
  t3671 = t3670 + t3645;
  t3805 = Cos(var1[3]);
  t3804 = t2434*t3801*t3655;
  t3812 = t3805*t3673;
  t3813 = t3804 + t3812;
  t3818 = t3805*t2434;
  t3820 = -1.*t3801*t3655*t3673;
  t3822 = t3818 + t3820;
  t3725 = -1.*t3724;
  t3727 = 1. + t3725;
  t3771 = -1.*t3769;
  t3773 = 1. + t3771;
  t3833 = t2859*t3813;
  t3834 = t3518*t3822;
  t3837 = t3833 + t3834;
  t3840 = -1.*t2431*t3654*t3801;
  t3844 = t3724*t3837;
  t3845 = t3840 + t3844;
  t3848 = -1.*t3724*t2431*t3801;
  t3849 = -1.*t3654*t3837;
  t3850 = t3848 + t3849;
  t3895 = -1.*t3805*t2434*t3655;
  t3896 = t3801*t3673;
  t3900 = t3895 + t3896;
  t3905 = t2434*t3801;
  t3906 = t3805*t3655*t3673;
  t3910 = t3905 + t3906;
  t3919 = t2859*t3900;
  t3920 = t3518*t3910;
  t3921 = t3919 + t3920;
  t3923 = t3805*t2431*t3654;
  t3924 = t3724*t3921;
  t3925 = t3923 + t3924;
  t3928 = t3724*t3805*t2431;
  t3929 = -1.*t3654*t3921;
  t3931 = t3928 + t3929;
  p_output1[0]=t2431*t2434*t3652 + 0.28121*t3654*t3655 - 1.*t2431*t3671*t3673 + 0.15121*(-1.*t2431*t2434*t3518 - 1.*t2431*t2859*t3673) - 0.28121*t3727*t3742 - 0.50321*t3773*t3788 - 0.50321*t3790*t3793 - 0.19821*(t3769*t3788 - 1.*t3790*t3793) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.28121*t2431*t3654*t3801 + t3652*t3813 + t3671*t3822 + 0.15121*(-1.*t3518*t3813 + t2859*t3822) - 0.28121*t3727*t3837 - 0.50321*t3773*t3845 - 0.50321*t3790*t3850 - 0.19821*(t3769*t3845 - 1.*t3790*t3850) + var1[1] - 1.*var2[1];
  p_output1[2]=0.28121*t2431*t3654*t3805 + t3652*t3900 + t3671*t3910 + 0.15121*(-1.*t3518*t3900 + t2859*t3910) - 0.28121*t3727*t3921 - 0.50321*t3773*t3925 - 0.50321*t3790*t3931 - 0.19821*(t3769*t3925 - 1.*t3790*t3931) + var1[2] - 1.*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_RlFoot_DiagonalStance.hh"

namespace SymFunction
{

void h_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
