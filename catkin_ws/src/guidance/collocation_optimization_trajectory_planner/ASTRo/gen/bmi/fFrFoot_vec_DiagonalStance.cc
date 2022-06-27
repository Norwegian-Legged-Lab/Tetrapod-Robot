/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 17:41:10 GMT+02:00
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
  double t3645;
  double t3655;
  double t3652;
  double t3781;
  double t3788;
  double t3773;
  double t3789;
  double t3653;
  double t3795;
  double t3796;
  double t3797;
  double t3656;
  double t3793;
  double t3787;
  double t3790;
  double t3792;
  double t3654;
  double t3764;
  double t3771;
  double t3820;
  double t3818;
  double t3798;
  double t3799;
  double t3800;
  double t3804;
  double t3805;
  double t3806;
  double t3808;
  double t3809;
  double t3810;
  double t3822;
  double t3824;
  double t3825;
  double t3831;
  double t3833;
  double t3834;
  double t3837;
  double t3838;
  double t3840;
  double t3844;
  double t3845;
  double t3846;
  double t3848;
  double t3849;
  double t3850;
  double t3794;
  double t3801;
  double t3802;
  double t3881;
  double t3885;
  double t3895;
  double t3896;
  double t3900;
  double t3904;
  double t3905;
  double t3906;
  double t3910;
  double t3911;
  double t3912;
  double t3913;
  double t3917;
  double t3921;
  double t3922;
  double t3923;
  double t3892;
  double t3893;
  double t3894;
  double t3918;
  double t3919;
  double t3928;
  double t3929;
  double t3931;
  double t3933;
  double t3935;
  double t3936;
  double t3937;
  double t3920;
  double t3924;
  double t3925;
  double t3934;
  double t3938;
  double t3939;
  double t3941;
  double t3942;
  double t3943;
  double t3807;
  double t3811;
  double t3812;
  double t3927;
  double t3947;
  double t3954;
  double t3961;
  double t3969;
  double t3974;
  double t4001;
  double t4006;
  t3645 = Cos(var1[4]);
  t3655 = Cos(var1[12]);
  t3652 = Cos(var1[5]);
  t3781 = Cos(var1[14]);
  t3788 = Sin(var1[13]);
  t3773 = Cos(var1[13]);
  t3789 = Sin(var1[14]);
  t3653 = Sin(var1[12]);
  t3795 = t3781*t3788;
  t3796 = -1.*t3773*t3789;
  t3797 = t3795 + t3796;
  t3656 = Sin(var1[5]);
  t3793 = Sin(var1[4]);
  t3787 = t3773*t3781;
  t3790 = t3788*t3789;
  t3792 = t3787 + t3790;
  t3654 = -1.*t3652*t3653;
  t3764 = -1.*t3655*t3656;
  t3771 = t3654 + t3764;
  t3820 = Cos(var1[3]);
  t3818 = Sin(var1[3]);
  t3798 = t3655*t3652*t3797;
  t3799 = -1.*t3653*t3797*t3656;
  t3800 = t3798 + t3799;
  t3804 = -1.*t3781*t3788;
  t3805 = t3773*t3789;
  t3806 = t3804 + t3805;
  t3808 = t3655*t3652*t3792;
  t3809 = -1.*t3653*t3792*t3656;
  t3810 = t3808 + t3809;
  t3822 = t3655*t3652;
  t3824 = -1.*t3653*t3656;
  t3825 = t3822 + t3824;
  t3831 = t3652*t3653*t3797;
  t3833 = t3655*t3797*t3656;
  t3834 = t3831 + t3833;
  t3837 = t3645*t3792;
  t3838 = -1.*t3793*t3800;
  t3840 = t3837 + t3838;
  t3844 = t3652*t3653*t3792;
  t3845 = t3655*t3792*t3656;
  t3846 = t3844 + t3845;
  t3848 = t3645*t3806;
  t3849 = -1.*t3793*t3810;
  t3850 = t3848 + t3849;
  t3794 = t3792*t3793;
  t3801 = t3645*t3800;
  t3802 = t3794 + t3801;
  t3881 = -1.*t3655;
  t3885 = 1. + t3881;
  t3895 = -1.*t3773;
  t3896 = 1. + t3895;
  t3900 = 0.28121*t3896;
  t3904 = -1.*t3781;
  t3905 = 1. + t3904;
  t3906 = 0.50321*t3905;
  t3910 = 0.19821*t3781;
  t3911 = t3906 + t3910;
  t3912 = t3773*t3911;
  t3913 = -0.305*t3788*t3789;
  t3917 = t3900 + t3912 + t3913;
  t3921 = 0.15121*t3885;
  t3922 = t3655*t3917;
  t3923 = t3921 + t3922;
  t3892 = -0.15121*t3885;
  t3893 = -0.15121*t3655;
  t3894 = -0.15121*t3653;
  t3918 = t3653*t3917;
  t3919 = t3892 + t3893 + t3894 + t3918;
  t3928 = 0.28121*t3788;
  t3929 = -1.*t3911*t3788;
  t3931 = -0.305*t3773*t3789;
  t3933 = t3928 + t3929 + t3931;
  t3935 = t3652*t3923;
  t3936 = -1.*t3919*t3656;
  t3937 = t3935 + t3936;
  t3920 = t3652*t3919;
  t3924 = t3923*t3656;
  t3925 = t3920 + t3924;
  t3934 = t3933*t3793;
  t3938 = t3645*t3937;
  t3939 = t3934 + t3938;
  t3941 = t3645*t3933;
  t3942 = -1.*t3793*t3937;
  t3943 = t3941 + t3942;
  t3807 = t3806*t3793;
  t3811 = t3645*t3810;
  t3812 = t3807 + t3811;
  t3927 = -1.*t3825*t3925;
  t3947 = t3834*t3925;
  t3954 = t3825*t3925;
  t3961 = -1.*t3846*t3925;
  t3969 = -1.*t3834*t3925;
  t3974 = t3846*t3925;
  t4001 = -1.*t3933*t3792;
  t4006 = t3933*t3806;
  p_output1[0]=t3812*var2[0] + t3645*t3771*var2[1] + t3802*var2[2];
  p_output1[1]=(t3820*t3846 - 1.*t3818*t3850)*var2[0] + (t3771*t3793*t3818 + t3820*t3825)*var2[1] + (t3820*t3834 - 1.*t3818*t3840)*var2[2];
  p_output1[2]=(t3818*t3846 + t3820*t3850)*var2[0] + (-1.*t3771*t3793*t3820 + t3818*t3825)*var2[1] + (t3818*t3834 + t3820*t3840)*var2[2];
  p_output1[3]=(t3802*(t3927 - 1.*t3645*t3771*t3939 + t3771*t3793*t3943) + t3645*t3771*(t3802*t3939 + t3840*t3943 + t3947))*var2[0] + (t3812*(-1.*t3802*t3939 - 1.*t3840*t3943 + t3969) + t3802*(t3812*t3939 + t3850*t3943 + t3974))*var2[1] + (t3812*(t3645*t3771*t3939 - 1.*t3771*t3793*t3943 + t3954) + t3645*t3771*(-1.*t3812*t3939 - 1.*t3850*t3943 + t3961))*var2[2];
  p_output1[4]=(t3834*(t3927 - 1.*t3771*t3937) + t3825*(t3792*t3933 + t3800*t3937 + t3947))*var2[0] + (t3846*(-1.*t3800*t3937 + t3969 + t4001) + t3834*(t3810*t3937 + t3974 + t4006))*var2[1] + (t3846*(t3771*t3937 + t3954) + t3825*(-1.*t3806*t3933 - 1.*t3810*t3937 + t3961))*var2[2];
  p_output1[5]=t3792*(-1.*t3655*t3919 + t3653*t3923)*var2[0] + (t3806*(-1.*t3653*t3797*t3919 - 1.*t3655*t3797*t3923 + t4001) + t3792*(t3653*t3792*t3919 + t3655*t3792*t3923 + t4006))*var2[1] + t3806*(t3655*t3919 - 1.*t3653*t3923)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t3806*(-1.*t3797*t3917 + t4001) + t3792*(t3792*t3917 + t4006))*var2[1] + (-0.15121*t3797 - 0.15121*t3806)*var2[2];
  p_output1[13]=(0.28121*t3789 - 0.305*t3781*t3789 - 1.*t3789*t3911)*var2[0] + (0.28121*t3781 + 0.305*Power(t3789,2) - 1.*t3781*t3911)*var2[2];
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
