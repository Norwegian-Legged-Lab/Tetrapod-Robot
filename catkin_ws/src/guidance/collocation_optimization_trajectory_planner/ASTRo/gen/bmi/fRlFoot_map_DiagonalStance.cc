/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 17:41:09 GMT+02:00
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
  double t3520;
  double t3509;
  double t3518;
  double t3533;
  double t3631;
  double t3632;
  double t3633;
  double t3630;
  double t3635;
  double t3626;
  double t3636;
  double t3619;
  double t3519;
  double t3537;
  double t3613;
  double t3617;
  double t3634;
  double t3637;
  double t3638;
  double t3646;
  double t3642;
  double t3643;
  double t3644;
  double t3641;
  double t3648;
  double t3649;
  double t3650;
  double t3694;
  double t3695;
  double t3711;
  double t3712;
  double t3713;
  double t3716;
  double t3718;
  double t3719;
  double t3720;
  double t3721;
  double t3722;
  double t3726;
  double t3730;
  double t3734;
  double t3735;
  double t3736;
  double t3697;
  double t3698;
  double t3710;
  double t3731;
  double t3732;
  double t3740;
  double t3743;
  double t3745;
  double t3748;
  double t3749;
  double t3752;
  double t3753;
  double t3757;
  double t3758;
  double t3759;
  double t3733;
  double t3737;
  double t3738;
  double t3657;
  double t3658;
  double t3660;
  double t3661;
  double t3662;
  double t3663;
  double t3665;
  double t3666;
  double t3677;
  double t3756;
  double t3761;
  double t3763;
  double t3765;
  double t3766;
  double t3767;
  double t3774;
  double t3775;
  double t3776;
  double t3684;
  double t3688;
  double t3693;
  double t3739;
  double t3777;
  double t3618;
  double t3639;
  double t3640;
  double t3782;
  double t3783;
  double t3785;
  double t3821;
  double t3827;
  double t3835;
  double t3839;
  double t3875;
  double t3887;
  t3520 = Cos(var1[10]);
  t3509 = Cos(var1[11]);
  t3518 = Sin(var1[10]);
  t3533 = Sin(var1[11]);
  t3631 = -1.*t3520*t3509;
  t3632 = -1.*t3518*t3533;
  t3633 = t3631 + t3632;
  t3630 = Cos(var1[5]);
  t3635 = Sin(var1[9]);
  t3626 = Cos(var1[9]);
  t3636 = Sin(var1[5]);
  t3619 = Cos(var1[4]);
  t3519 = -1.*t3509*t3518;
  t3537 = t3520*t3533;
  t3613 = t3519 + t3537;
  t3617 = Sin(var1[4]);
  t3634 = t3626*t3630*t3633;
  t3637 = -1.*t3635*t3633*t3636;
  t3638 = t3634 + t3637;
  t3646 = Sin(var1[3]);
  t3642 = t3630*t3635*t3633;
  t3643 = t3626*t3633*t3636;
  t3644 = t3642 + t3643;
  t3641 = Cos(var1[3]);
  t3648 = t3619*t3613;
  t3649 = -1.*t3617*t3638;
  t3650 = t3648 + t3649;
  t3694 = -1.*t3626;
  t3695 = 1. + t3694;
  t3711 = -1.*t3520;
  t3712 = 1. + t3711;
  t3713 = -0.28121*t3712;
  t3716 = -1.*t3509;
  t3718 = 1. + t3716;
  t3719 = -0.50321*t3718;
  t3720 = -0.19821*t3509;
  t3721 = t3719 + t3720;
  t3722 = t3520*t3721;
  t3726 = 0.305*t3518*t3533;
  t3730 = t3713 + t3722 + t3726;
  t3734 = -0.15121*t3695;
  t3735 = t3626*t3730;
  t3736 = t3734 + t3735;
  t3697 = 0.15121*t3695;
  t3698 = 0.15121*t3626;
  t3710 = 0.15121*t3635;
  t3731 = t3635*t3730;
  t3732 = t3697 + t3698 + t3710 + t3731;
  t3740 = t3630*t3635;
  t3743 = t3626*t3636;
  t3745 = t3740 + t3743;
  t3748 = 0.28121*t3518;
  t3749 = t3721*t3518;
  t3752 = -0.305*t3520*t3533;
  t3753 = t3748 + t3749 + t3752;
  t3757 = t3630*t3736;
  t3758 = -1.*t3732*t3636;
  t3759 = t3757 + t3758;
  t3733 = t3630*t3732;
  t3737 = t3736*t3636;
  t3738 = t3733 + t3737;
  t3657 = t3520*t3509;
  t3658 = t3518*t3533;
  t3660 = t3657 + t3658;
  t3661 = t3660*t3617;
  t3662 = t3626*t3630*t3613;
  t3663 = -1.*t3635*t3613*t3636;
  t3665 = t3662 + t3663;
  t3666 = t3619*t3665;
  t3677 = t3661 + t3666;
  t3756 = t3753*t3617;
  t3761 = t3619*t3759;
  t3763 = t3756 + t3761;
  t3765 = t3619*t3753;
  t3766 = -1.*t3617*t3759;
  t3767 = t3765 + t3766;
  t3774 = t3630*t3635*t3613;
  t3775 = t3626*t3613*t3636;
  t3776 = t3774 + t3775;
  t3684 = -1.*t3626*t3630;
  t3688 = t3635*t3636;
  t3693 = t3684 + t3688;
  t3739 = -1.*t3693*t3738;
  t3777 = t3776*t3738;
  t3618 = t3613*t3617;
  t3639 = t3619*t3638;
  t3640 = t3618 + t3639;
  t3782 = t3619*t3660;
  t3783 = -1.*t3617*t3665;
  t3785 = t3782 + t3783;
  t3821 = -1.*t3776*t3738;
  t3827 = t3644*t3738;
  t3835 = -1.*t3753*t3660;
  t3839 = t3753*t3613;
  t3875 = t3693*t3738;
  t3887 = -1.*t3644*t3738;
  p_output1[0]=t3640;
  p_output1[1]=t3641*t3644 - 1.*t3646*t3650;
  p_output1[2]=t3644*t3646 + t3641*t3650;
  p_output1[3]=t3677*(t3739 - 1.*t3619*t3745*t3763 + t3617*t3745*t3767) + t3619*t3745*(t3677*t3763 + t3777 + t3767*t3785);
  p_output1[4]=(t3739 - 1.*t3745*t3759)*t3776 + t3693*(t3660*t3753 + t3665*t3759 + t3777);
  p_output1[5]=t3660*(t3626*t3732 - 1.*t3635*t3736);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.15121*t3633 + 0.15121*t3660;
  p_output1[10]=0.28121*t3533 - 0.305*t3509*t3533 + t3533*t3721;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t3619*t3745;
  p_output1[19]=t3641*t3693 + t3617*t3646*t3745;
  p_output1[20]=t3646*t3693 - 1.*t3617*t3641*t3745;
  p_output1[21]=t3640*(-1.*t3677*t3763 - 1.*t3767*t3785 + t3821) + t3677*(t3640*t3763 + t3650*t3767 + t3827);
  p_output1[22]=t3644*(-1.*t3665*t3759 + t3821 + t3835) + t3776*(t3638*t3759 + t3827 + t3839);
  p_output1[23]=t3613*(-1.*t3613*t3635*t3732 - 1.*t3613*t3626*t3736 + t3835) + t3660*(t3633*t3635*t3732 + t3626*t3633*t3736 + t3839);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.15121 + t3613*(-1.*t3613*t3730 + t3835) + t3660*(t3633*t3730 + t3839);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t3677;
  p_output1[37]=t3641*t3776 - 1.*t3646*t3785;
  p_output1[38]=t3646*t3776 + t3641*t3785;
  p_output1[39]=t3640*(t3619*t3745*t3763 - 1.*t3617*t3745*t3767 + t3875) + t3619*t3745*(-1.*t3640*t3763 - 1.*t3650*t3767 + t3887);
  p_output1[40]=t3644*(t3745*t3759 + t3875) + t3693*(-1.*t3613*t3753 - 1.*t3638*t3759 + t3887);
  p_output1[41]=t3613*(-1.*t3626*t3732 + t3635*t3736);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0.28121*t3509 + 0.305*Power(t3533,2) + t3509*t3721;
  p_output1[47]=-0.305;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
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

#include "fRlFoot_map_DiagonalStance.hh"

namespace SymFunction
{

void fRlFoot_map_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
