/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 17:41:08 GMT+02:00
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
  double t3374;
  double t3334;
  double t3348;
  double t3375;
  double t3442;
  double t3456;
  double t3460;
  double t3441;
  double t3468;
  double t3433;
  double t3485;
  double t3432;
  double t3349;
  double t3378;
  double t3397;
  double t3398;
  double t3461;
  double t3491;
  double t3495;
  double t3510;
  double t3504;
  double t3505;
  double t3508;
  double t3503;
  double t3511;
  double t3514;
  double t3515;
  double t3539;
  double t3543;
  double t3544;
  double t3562;
  double t3563;
  double t3568;
  double t3570;
  double t3574;
  double t3575;
  double t3576;
  double t3577;
  double t3581;
  double t3586;
  double t3587;
  double t3588;
  double t3590;
  double t3594;
  double t3595;
  double t3596;
  double t3565;
  double t3566;
  double t3567;
  double t3591;
  double t3592;
  double t3600;
  double t3601;
  double t3602;
  double t3603;
  double t3604;
  double t3605;
  double t3606;
  double t3608;
  double t3609;
  double t3610;
  double t3593;
  double t3597;
  double t3598;
  double t3538;
  double t3549;
  double t3550;
  double t3552;
  double t3553;
  double t3556;
  double t3607;
  double t3611;
  double t3612;
  double t3614;
  double t3615;
  double t3616;
  double t3621;
  double t3622;
  double t3623;
  double t3557;
  double t3558;
  double t3559;
  double t3599;
  double t3625;
  double t3424;
  double t3497;
  double t3502;
  double t3627;
  double t3628;
  double t3629;
  double t3659;
  double t3664;
  double t3692;
  double t3696;
  double t3746;
  double t3754;
  t3374 = Cos(var1[13]);
  t3334 = Cos(var1[14]);
  t3348 = Sin(var1[13]);
  t3375 = Sin(var1[14]);
  t3442 = t3374*t3334;
  t3456 = t3348*t3375;
  t3460 = t3442 + t3456;
  t3441 = Cos(var1[5]);
  t3468 = Sin(var1[12]);
  t3433 = Cos(var1[12]);
  t3485 = Sin(var1[5]);
  t3432 = Cos(var1[4]);
  t3349 = -1.*t3334*t3348;
  t3378 = t3374*t3375;
  t3397 = t3349 + t3378;
  t3398 = Sin(var1[4]);
  t3461 = t3433*t3441*t3460;
  t3491 = -1.*t3468*t3460*t3485;
  t3495 = t3461 + t3491;
  t3510 = Sin(var1[3]);
  t3504 = t3441*t3468*t3460;
  t3505 = t3433*t3460*t3485;
  t3508 = t3504 + t3505;
  t3503 = Cos(var1[3]);
  t3511 = t3432*t3397;
  t3514 = -1.*t3398*t3495;
  t3515 = t3511 + t3514;
  t3539 = t3334*t3348;
  t3543 = -1.*t3374*t3375;
  t3544 = t3539 + t3543;
  t3562 = -1.*t3433;
  t3563 = 1. + t3562;
  t3568 = -1.*t3374;
  t3570 = 1. + t3568;
  t3574 = 0.28121*t3570;
  t3575 = -1.*t3334;
  t3576 = 1. + t3575;
  t3577 = 0.50321*t3576;
  t3581 = 0.19821*t3334;
  t3586 = t3577 + t3581;
  t3587 = t3374*t3586;
  t3588 = -0.305*t3348*t3375;
  t3590 = t3574 + t3587 + t3588;
  t3594 = 0.15121*t3563;
  t3595 = t3433*t3590;
  t3596 = t3594 + t3595;
  t3565 = -0.15121*t3563;
  t3566 = -0.15121*t3433;
  t3567 = -0.15121*t3468;
  t3591 = t3468*t3590;
  t3592 = t3565 + t3566 + t3567 + t3591;
  t3600 = -1.*t3441*t3468;
  t3601 = -1.*t3433*t3485;
  t3602 = t3600 + t3601;
  t3603 = 0.28121*t3348;
  t3604 = -1.*t3586*t3348;
  t3605 = -0.305*t3374*t3375;
  t3606 = t3603 + t3604 + t3605;
  t3608 = t3441*t3596;
  t3609 = -1.*t3592*t3485;
  t3610 = t3608 + t3609;
  t3593 = t3441*t3592;
  t3597 = t3596*t3485;
  t3598 = t3593 + t3597;
  t3538 = t3460*t3398;
  t3549 = t3433*t3441*t3544;
  t3550 = -1.*t3468*t3544*t3485;
  t3552 = t3549 + t3550;
  t3553 = t3432*t3552;
  t3556 = t3538 + t3553;
  t3607 = t3606*t3398;
  t3611 = t3432*t3610;
  t3612 = t3607 + t3611;
  t3614 = t3432*t3606;
  t3615 = -1.*t3398*t3610;
  t3616 = t3614 + t3615;
  t3621 = t3441*t3468*t3544;
  t3622 = t3433*t3544*t3485;
  t3623 = t3621 + t3622;
  t3557 = t3433*t3441;
  t3558 = -1.*t3468*t3485;
  t3559 = t3557 + t3558;
  t3599 = -1.*t3559*t3598;
  t3625 = t3623*t3598;
  t3424 = t3397*t3398;
  t3497 = t3432*t3495;
  t3502 = t3424 + t3497;
  t3627 = t3432*t3460;
  t3628 = -1.*t3398*t3552;
  t3629 = t3627 + t3628;
  t3659 = -1.*t3623*t3598;
  t3664 = t3508*t3598;
  t3692 = -1.*t3606*t3460;
  t3696 = t3606*t3397;
  t3746 = t3559*t3598;
  t3754 = -1.*t3508*t3598;
  p_output1[0]=t3502;
  p_output1[1]=t3503*t3508 - 1.*t3510*t3515;
  p_output1[2]=t3508*t3510 + t3503*t3515;
  p_output1[3]=t3556*(t3599 - 1.*t3432*t3602*t3612 + t3398*t3602*t3616) + t3432*t3602*(t3556*t3612 + t3625 + t3616*t3629);
  p_output1[4]=(t3599 - 1.*t3602*t3610)*t3623 + t3559*(t3460*t3606 + t3552*t3610 + t3625);
  p_output1[5]=t3460*(-1.*t3433*t3592 + t3468*t3596);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0.28121*t3375 - 0.305*t3334*t3375 - 1.*t3375*t3586;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t3432*t3602;
  p_output1[19]=t3503*t3559 + t3398*t3510*t3602;
  p_output1[20]=t3510*t3559 - 1.*t3398*t3503*t3602;
  p_output1[21]=t3502*(-1.*t3556*t3612 - 1.*t3616*t3629 + t3659) + t3556*(t3502*t3612 + t3515*t3616 + t3664);
  p_output1[22]=t3508*(-1.*t3552*t3610 + t3659 + t3692) + t3623*(t3495*t3610 + t3664 + t3696);
  p_output1[23]=t3397*(-1.*t3468*t3544*t3592 - 1.*t3433*t3544*t3596 + t3692) + t3460*(t3460*t3468*t3592 + t3433*t3460*t3596 + t3696);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.15121 + t3397*(-1.*t3544*t3590 + t3692) + t3460*(t3460*t3590 + t3696);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t3556;
  p_output1[37]=t3503*t3623 - 1.*t3510*t3629;
  p_output1[38]=t3510*t3623 + t3503*t3629;
  p_output1[39]=t3502*(t3432*t3602*t3612 - 1.*t3398*t3602*t3616 + t3746) + t3432*t3602*(-1.*t3502*t3612 - 1.*t3515*t3616 + t3754);
  p_output1[40]=t3508*(t3602*t3610 + t3746) + t3559*(-1.*t3397*t3606 - 1.*t3495*t3610 + t3754);
  p_output1[41]=t3397*(t3433*t3592 - 1.*t3468*t3596);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.15121*t3397 - 0.15121*t3544;
  p_output1[49]=0.28121*t3334 + 0.305*Power(t3375,2) - 1.*t3334*t3586;
  p_output1[50]=-0.305;
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
