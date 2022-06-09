/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 14:40:45 GMT+02:00
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
  double t3640;
  double t3615;
  double t3616;
  double t3646;
  double t3634;
  double t3654;
  double t3655;
  double t3694;
  double t3728;
  double t3702;
  double t3704;
  double t3705;
  double t3732;
  double t3611;
  double t3661;
  double t3656;
  double t3722;
  double t3736;
  double t3738;
  double t3747;
  double t3742;
  double t3743;
  double t3744;
  double t3741;
  double t3749;
  double t3751;
  double t3752;
  double t3772;
  double t3775;
  double t3777;
  double t3782;
  double t3786;
  double t3787;
  double t3789;
  double t3791;
  double t3793;
  double t3771;
  double t3778;
  double t3794;
  double t3795;
  double t3800;
  double t3801;
  double t3802;
  double t3803;
  double t3804;
  double t3805;
  double t3767;
  double t3768;
  double t3769;
  double t3770;
  double t3797;
  double t3798;
  double t3812;
  double t3813;
  double t3814;
  double t3819;
  double t3820;
  double t3821;
  double t3809;
  double t3810;
  double t3811;
  double t3799;
  double t3806;
  double t3807;
  double t3759;
  double t3760;
  double t3761;
  double t3818;
  double t3822;
  double t3823;
  double t3758;
  double t3762;
  double t3763;
  double t3764;
  double t3765;
  double t3766;
  double t3844;
  double t3848;
  double t3852;
  double t3864;
  double t3869;
  double t3870;
  double t3808;
  double t3872;
  double t3887;
  double t3891;
  double t3825;
  double t3835;
  double t3836;
  double t3660;
  double t3739;
  double t3740;
  double t3874;
  double t3875;
  double t3876;
  double t3945;
  double t3954;
  double t3977;
  double t3964;
  double t3999;
  double t3991;
  double t4026;
  double t4031;
  double t4039;
  double t4045;
  t3640 = Cos(var1[13]);
  t3615 = Cos(var1[14]);
  t3616 = Sin(var1[13]);
  t3646 = Sin(var1[14]);
  t3634 = t3615*t3616;
  t3654 = -1.*t3640*t3646;
  t3655 = t3634 + t3654;
  t3694 = Cos(var1[5]);
  t3728 = Sin(var1[12]);
  t3702 = t3640*t3615;
  t3704 = t3616*t3646;
  t3705 = t3702 + t3704;
  t3732 = Sin(var1[5]);
  t3611 = Cos(var1[12]);
  t3661 = Cos(var1[4]);
  t3656 = Sin(var1[4]);
  t3722 = t3694*t3705;
  t3736 = t3728*t3655*t3732;
  t3738 = t3722 + t3736;
  t3747 = Sin(var1[3]);
  t3742 = -1.*t3694*t3728*t3655;
  t3743 = t3705*t3732;
  t3744 = t3742 + t3743;
  t3741 = Cos(var1[3]);
  t3749 = t3611*t3661*t3655;
  t3751 = -1.*t3656*t3738;
  t3752 = t3749 + t3751;
  t3772 = -0.0641*t3615;
  t3775 = -0.28*t3646;
  t3777 = t3772 + t3775;
  t3782 = -1.*t3615;
  t3786 = 1. + t3782;
  t3787 = 0.075*t3786;
  t3789 = 0.355*t3615;
  t3791 = -0.0641*t3646;
  t3793 = t3787 + t3789 + t3791;
  t3771 = -0.325*t3616;
  t3778 = t3640*t3777;
  t3794 = t3616*t3793;
  t3795 = t3771 + t3778 + t3794;
  t3800 = -1.*t3640;
  t3801 = 1. + t3800;
  t3802 = 0.325*t3801;
  t3803 = -1.*t3616*t3777;
  t3804 = t3640*t3793;
  t3805 = t3802 + t3803 + t3804;
  t3767 = -1.*t3611;
  t3768 = 1. + t3767;
  t3769 = -0.1575*t3768;
  t3770 = -0.2255*t3611;
  t3797 = -1.*t3728*t3795;
  t3798 = t3769 + t3770 + t3797;
  t3812 = -0.068*t3728;
  t3813 = t3611*t3795;
  t3814 = t3812 + t3813;
  t3819 = t3694*t3805;
  t3820 = -1.*t3798*t3732;
  t3821 = t3819 + t3820;
  t3809 = t3728*t3656;
  t3810 = -1.*t3611*t3661*t3732;
  t3811 = t3809 + t3810;
  t3799 = t3694*t3798;
  t3806 = t3805*t3732;
  t3807 = t3799 + t3806;
  t3759 = -1.*t3615*t3616;
  t3760 = t3640*t3646;
  t3761 = t3759 + t3760;
  t3818 = t3814*t3656;
  t3822 = t3661*t3821;
  t3823 = t3818 + t3822;
  t3758 = t3611*t3705*t3656;
  t3762 = t3694*t3761;
  t3763 = t3728*t3705*t3732;
  t3764 = t3762 + t3763;
  t3765 = t3661*t3764;
  t3766 = t3758 + t3765;
  t3844 = t3661*t3814;
  t3848 = -1.*t3656*t3821;
  t3852 = t3844 + t3848;
  t3864 = -1.*t3694*t3728*t3705;
  t3869 = t3761*t3732;
  t3870 = t3864 + t3869;
  t3808 = -1.*t3611*t3694*t3807;
  t3872 = t3807*t3870;
  t3887 = -1.*t3728*t3814;
  t3891 = t3611*t3814*t3705;
  t3825 = t3661*t3728;
  t3835 = t3611*t3656*t3732;
  t3836 = t3825 + t3835;
  t3660 = t3611*t3655*t3656;
  t3739 = t3661*t3738;
  t3740 = t3660 + t3739;
  t3874 = t3611*t3661*t3705;
  t3875 = -1.*t3656*t3764;
  t3876 = t3874 + t3875;
  t3945 = t3807*t3744;
  t3954 = -1.*t3807*t3870;
  t3977 = -1.*t3611*t3814*t3705;
  t3964 = t3611*t3814*t3655;
  t3999 = t3805*t3705;
  t3991 = -1.*t3805*t3761;
  t4026 = t3611*t3694*t3807;
  t4031 = -1.*t3807*t3744;
  t4039 = t3728*t3814;
  t4045 = -1.*t3611*t3814*t3655;
  p_output1[0]=t3740;
  p_output1[1]=t3741*t3744 - 1.*t3747*t3752;
  p_output1[2]=t3744*t3747 + t3741*t3752;
  p_output1[3]=t3766*(t3808 - 1.*t3811*t3823 - 1.*t3836*t3852) + t3811*(t3766*t3823 + t3872 + t3852*t3876);
  p_output1[4]=t3870*(t3808 + t3611*t3732*t3821 + t3887) + t3611*t3694*(t3764*t3821 + t3872 + t3891);
  p_output1[5]=t3611*t3705*(-1.*t3611*t3798 + t3887) + t3728*(-1.*t3705*t3728*t3798 + t3761*t3805 + t3891);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0.1575*t3655 + 0.2255*t3761;
  p_output1[13]=0.325*t3646 - 1.*t3615*t3777 - 1.*t3646*t3793;
  p_output1[14]=-0.0641;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t3811;
  p_output1[19]=t3611*t3694*t3741 - 1.*t3747*t3836;
  p_output1[20]=t3611*t3694*t3747 + t3741*t3836;
  p_output1[21]=t3766*(t3740*t3823 + t3752*t3852 + t3945) + t3740*(-1.*t3766*t3823 - 1.*t3852*t3876 + t3954);
  p_output1[22]=t3870*(t3738*t3821 + t3945 + t3964) + t3744*(-1.*t3764*t3821 + t3954 + t3977);
  p_output1[23]=t3611*t3655*(t3705*t3728*t3798 + t3977 + t3991) + t3611*t3705*(-1.*t3655*t3728*t3798 + t3964 + t3999);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=t3705*(-1.*t3705*t3795 + t3991) + t3761*(t3655*t3795 + t3999);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t3766;
  p_output1[37]=t3741*t3870 - 1.*t3747*t3876;
  p_output1[38]=t3747*t3870 + t3741*t3876;
  p_output1[39]=t3740*(t3811*t3823 + t3836*t3852 + t4026) + t3811*(-1.*t3740*t3823 - 1.*t3752*t3852 + t4031);
  p_output1[40]=t3744*(-1.*t3611*t3732*t3821 + t4026 + t4039) + t3611*t3694*(-1.*t3738*t3821 + t4031 + t4045);
  p_output1[41]=t3611*t3655*(t3611*t3798 + t4039) + t3728*(t3655*t3728*t3798 - 1.*t3705*t3805 + t4045);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.068*t3705;
  p_output1[49]=-0.325*t3615 - 1.*t3646*t3777 + t3615*t3793;
  p_output1[50]=-0.28;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fFrFoot_map_DiagonalStance.hh"

namespace SymFunction
{

void fFrFoot_map_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
