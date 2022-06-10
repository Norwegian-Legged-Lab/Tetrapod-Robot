/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:04:59 GMT+02:00
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
  double t3076;
  double t80;
  double t369;
  double t3124;
  double t466;
  double t3169;
  double t3177;
  double t3480;
  double t3201;
  double t58;
  double t3211;
  double t3482;
  double t3259;
  double t3464;
  double t3472;
  double t3230;
  double t3479;
  double t3485;
  double t3487;
  double t3602;
  double t3617;
  double t3536;
  double t3548;
  double t3555;
  double t3560;
  double t3565;
  double t3572;
  double t3603;
  double t3613;
  double t3615;
  double t3619;
  double t3623;
  double t3624;
  double t3659;
  double t3660;
  double t3661;
  double t3684;
  double t3694;
  double t3711;
  double t3716;
  double t3717;
  double t3720;
  double t3526;
  double t3592;
  double t3601;
  double t3772;
  double t3773;
  double t3775;
  double t3780;
  double t3787;
  double t3789;
  double t3794;
  double t3795;
  double t3796;
  double t3497;
  double t3503;
  double t3515;
  double t3770;
  double t3777;
  double t3799;
  double t3801;
  double t3811;
  double t3812;
  double t3816;
  double t3818;
  double t3819;
  double t3820;
  double t3761;
  double t3766;
  double t3767;
  double t3769;
  double t3805;
  double t3809;
  double t3836;
  double t3837;
  double t3838;
  double t3841;
  double t3846;
  double t3848;
  double t3810;
  double t3821;
  double t3822;
  double t3840;
  double t3850;
  double t3861;
  double t3865;
  double t3867;
  double t3870;
  double t3205;
  double t3491;
  double t3494;
  double t3834;
  double t3879;
  double t3890;
  double t3895;
  double t3908;
  double t3926;
  double t3941;
  double t3946;
  double t3965;
  double t3961;
  double t3985;
  double t4001;
  double t4061;
  double t4050;
  t3076 = Cos(var1[13]);
  t80 = Cos(var1[14]);
  t369 = Sin(var1[13]);
  t3124 = Sin(var1[14]);
  t466 = t80*t369;
  t3169 = -1.*t3076*t3124;
  t3177 = t466 + t3169;
  t3480 = Sin(var1[12]);
  t3201 = Sin(var1[4]);
  t58 = Cos(var1[12]);
  t3211 = Cos(var1[4]);
  t3482 = Sin(var1[5]);
  t3259 = t3076*t80;
  t3464 = t369*t3124;
  t3472 = t3259 + t3464;
  t3230 = Cos(var1[5]);
  t3479 = t3230*t3472;
  t3485 = t3480*t3177*t3482;
  t3487 = t3479 + t3485;
  t3602 = Cos(var1[3]);
  t3617 = Sin(var1[3]);
  t3536 = -1.*t80*t369;
  t3548 = t3076*t3124;
  t3555 = t3536 + t3548;
  t3560 = t3230*t3555;
  t3565 = t3480*t3472*t3482;
  t3572 = t3560 + t3565;
  t3603 = -1.*t3230*t3480*t3177;
  t3613 = t3472*t3482;
  t3615 = t3603 + t3613;
  t3619 = t58*t3211*t3177;
  t3623 = -1.*t3201*t3487;
  t3624 = t3619 + t3623;
  t3659 = t3211*t3480;
  t3660 = t58*t3201*t3482;
  t3661 = t3659 + t3660;
  t3684 = -1.*t3230*t3480*t3472;
  t3694 = t3555*t3482;
  t3711 = t3684 + t3694;
  t3716 = t58*t3211*t3472;
  t3717 = -1.*t3201*t3572;
  t3720 = t3716 + t3717;
  t3526 = t58*t3472*t3201;
  t3592 = t3211*t3572;
  t3601 = t3526 + t3592;
  t3772 = -0.0641*t80;
  t3773 = -0.28*t3124;
  t3775 = t3772 + t3773;
  t3780 = -1.*t80;
  t3787 = 1. + t3780;
  t3789 = 0.075*t3787;
  t3794 = 0.355*t80;
  t3795 = -0.0641*t3124;
  t3796 = t3789 + t3794 + t3795;
  t3497 = t3480*t3201;
  t3503 = -1.*t58*t3211*t3482;
  t3515 = t3497 + t3503;
  t3770 = -0.325*t369;
  t3777 = t3076*t3775;
  t3799 = t369*t3796;
  t3801 = t3770 + t3777 + t3799;
  t3811 = -1.*t3076;
  t3812 = 1. + t3811;
  t3816 = 0.325*t3812;
  t3818 = -1.*t369*t3775;
  t3819 = t3076*t3796;
  t3820 = t3816 + t3818 + t3819;
  t3761 = -1.*t58;
  t3766 = 1. + t3761;
  t3767 = -0.1575*t3766;
  t3769 = -0.2255*t58;
  t3805 = -1.*t3480*t3801;
  t3809 = t3767 + t3769 + t3805;
  t3836 = -0.068*t3480;
  t3837 = t58*t3801;
  t3838 = t3836 + t3837;
  t3841 = t3230*t3820;
  t3846 = -1.*t3809*t3482;
  t3848 = t3841 + t3846;
  t3810 = t3230*t3809;
  t3821 = t3820*t3482;
  t3822 = t3810 + t3821;
  t3840 = t3838*t3201;
  t3850 = t3211*t3848;
  t3861 = t3840 + t3850;
  t3865 = t3211*t3838;
  t3867 = -1.*t3201*t3848;
  t3870 = t3865 + t3867;
  t3205 = t58*t3177*t3201;
  t3491 = t3211*t3487;
  t3494 = t3205 + t3491;
  t3834 = -1.*t58*t3230*t3822;
  t3879 = t3822*t3711;
  t3890 = t3822*t3615;
  t3895 = -1.*t3822*t3711;
  t3908 = t58*t3230*t3822;
  t3926 = -1.*t3822*t3615;
  t3941 = -1.*t3480*t3838;
  t3946 = t58*t3838*t3472;
  t3965 = -1.*t58*t3838*t3472;
  t3961 = t58*t3838*t3177;
  t3985 = t3480*t3838;
  t4001 = -1.*t58*t3838*t3177;
  t4061 = t3820*t3472;
  t4050 = -1.*t3820*t3555;
  p_output1[0]=t3494;
  p_output1[1]=t3515;
  p_output1[2]=t3601;
  p_output1[3]=t3602*t3615 - 1.*t3617*t3624;
  p_output1[4]=-1.*t3617*t3661 + t3230*t3602*t58;
  p_output1[5]=t3602*t3711 - 1.*t3617*t3720;
  p_output1[6]=t3615*t3617 + t3602*t3624;
  p_output1[7]=t3602*t3661 + t3230*t3617*t58;
  p_output1[8]=t3617*t3711 + t3602*t3720;
  p_output1[9]=t3601*(t3834 - 1.*t3515*t3861 - 1.*t3661*t3870) + t3515*(t3601*t3861 + t3720*t3870 + t3879);
  p_output1[10]=t3601*(t3494*t3861 + t3624*t3870 + t3890) + t3494*(-1.*t3601*t3861 - 1.*t3720*t3870 + t3895);
  p_output1[11]=t3494*(t3515*t3861 + t3661*t3870 + t3908) + t3515*(-1.*t3494*t3861 - 1.*t3624*t3870 + t3926);
  p_output1[12]=t3230*(t3572*t3848 + t3879 + t3946)*t58 + t3711*(t3834 + t3941 + t3482*t3848*t58);
  p_output1[13]=t3711*(t3487*t3848 + t3890 + t3961) + t3615*(-1.*t3572*t3848 + t3895 + t3965);
  p_output1[14]=t3230*(-1.*t3487*t3848 + t3926 + t4001)*t58 + t3615*(t3908 + t3985 - 1.*t3482*t3848*t58);
  p_output1[15]=t3480*(-1.*t3472*t3480*t3809 + t3555*t3820 + t3946) + t3472*t58*(t3941 - 1.*t3809*t58);
  p_output1[16]=t3177*(t3472*t3480*t3809 + t3965 + t4050)*t58 + t3472*(-1.*t3177*t3480*t3809 + t3961 + t4061)*t58;
  p_output1[17]=t3480*(t3177*t3480*t3809 - 1.*t3472*t3820 + t4001) + t3177*t58*(t3985 + t3809*t58);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0.1575*t3177 + 0.2255*t3555;
  p_output1[37]=t3472*(-1.*t3472*t3801 + t4050) + t3555*(t3177*t3801 + t4061);
  p_output1[38]=-0.068*t3472;
  p_output1[39]=0.325*t3124 - 1.*t3124*t3796 - 1.*t3775*t80;
  p_output1[40]=0;
  p_output1[41]=-1.*t3124*t3775 - 0.325*t80 + t3796*t80;
  p_output1[42]=-0.0641;
  p_output1[43]=0;
  p_output1[44]=-0.28;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_FrFoot_ParallelStance.hh"

namespace SymFunction
{

void Jh_FrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
