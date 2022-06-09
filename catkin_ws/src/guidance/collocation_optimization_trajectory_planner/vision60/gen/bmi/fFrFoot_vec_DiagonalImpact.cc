/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:11:14 GMT+02:00
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
  double t3180;
  double t3171;
  double t3184;
  double t3454;
  double t3426;
  double t3435;
  double t3458;
  double t3154;
  double t3451;
  double t3459;
  double t3467;
  double t3185;
  double t3471;
  double t3472;
  double t3473;
  double t3469;
  double t3508;
  double t3512;
  double t3474;
  double t3475;
  double t3476;
  double t3482;
  double t3483;
  double t3484;
  double t3489;
  double t3490;
  double t3491;
  double t3513;
  double t3514;
  double t3518;
  double t3535;
  double t3540;
  double t3541;
  double t3566;
  double t3571;
  double t3575;
  double t3599;
  double t3603;
  double t3628;
  double t3630;
  double t3636;
  double t3639;
  double t3468;
  double t3477;
  double t3478;
  double t3688;
  double t3690;
  double t3692;
  double t3695;
  double t3701;
  double t3702;
  double t3703;
  double t3714;
  double t3715;
  double t3172;
  double t3407;
  double t3418;
  double t3687;
  double t3694;
  double t3716;
  double t3717;
  double t3729;
  double t3730;
  double t3732;
  double t3736;
  double t3737;
  double t3739;
  double t3676;
  double t3677;
  double t3680;
  double t3686;
  double t3718;
  double t3722;
  double t3776;
  double t3795;
  double t3799;
  double t3819;
  double t3820;
  double t3829;
  double t3724;
  double t3748;
  double t3751;
  double t3818;
  double t3830;
  double t3832;
  double t3834;
  double t3835;
  double t3841;
  double t3480;
  double t3497;
  double t3502;
  double t3753;
  double t3845;
  double t3854;
  double t3869;
  double t3885;
  double t3905;
  double t4666;
  double t5067;
  double t3964;
  double t3988;
  double t4631;
  double t4390;
  double t6673;
  double t6519;
  t3180 = Cos(var1[12]);
  t3171 = Sin(var1[4]);
  t3184 = Cos(var1[4]);
  t3454 = Cos(var1[13]);
  t3426 = Cos(var1[14]);
  t3435 = Sin(var1[13]);
  t3458 = Sin(var1[14]);
  t3154 = Sin(var1[12]);
  t3451 = t3426*t3435;
  t3459 = -1.*t3454*t3458;
  t3467 = t3451 + t3459;
  t3185 = Sin(var1[5]);
  t3471 = t3454*t3426;
  t3472 = t3435*t3458;
  t3473 = t3471 + t3472;
  t3469 = Cos(var1[5]);
  t3508 = Cos(var1[3]);
  t3512 = Sin(var1[3]);
  t3474 = t3469*t3473;
  t3475 = t3154*t3467*t3185;
  t3476 = t3474 + t3475;
  t3482 = -1.*t3426*t3435;
  t3483 = t3454*t3458;
  t3484 = t3482 + t3483;
  t3489 = t3469*t3484;
  t3490 = t3154*t3473*t3185;
  t3491 = t3489 + t3490;
  t3513 = t3184*t3154;
  t3514 = t3180*t3171*t3185;
  t3518 = t3513 + t3514;
  t3535 = -1.*t3469*t3154*t3467;
  t3540 = t3473*t3185;
  t3541 = t3535 + t3540;
  t3566 = t3180*t3184*t3467;
  t3571 = -1.*t3171*t3476;
  t3575 = t3566 + t3571;
  t3599 = -1.*t3469*t3154*t3473;
  t3603 = t3484*t3185;
  t3628 = t3599 + t3603;
  t3630 = t3180*t3184*t3473;
  t3636 = -1.*t3171*t3491;
  t3639 = t3630 + t3636;
  t3468 = t3180*t3467*t3171;
  t3477 = t3184*t3476;
  t3478 = t3468 + t3477;
  t3688 = -0.0641*t3426;
  t3690 = -0.28*t3458;
  t3692 = t3688 + t3690;
  t3695 = -1.*t3426;
  t3701 = 1. + t3695;
  t3702 = 0.075*t3701;
  t3703 = 0.355*t3426;
  t3714 = -0.0641*t3458;
  t3715 = t3702 + t3703 + t3714;
  t3172 = t3154*t3171;
  t3407 = -1.*t3180*t3184*t3185;
  t3418 = t3172 + t3407;
  t3687 = -0.325*t3435;
  t3694 = t3454*t3692;
  t3716 = t3435*t3715;
  t3717 = t3687 + t3694 + t3716;
  t3729 = -1.*t3454;
  t3730 = 1. + t3729;
  t3732 = 0.325*t3730;
  t3736 = -1.*t3435*t3692;
  t3737 = t3454*t3715;
  t3739 = t3732 + t3736 + t3737;
  t3676 = -1.*t3180;
  t3677 = 1. + t3676;
  t3680 = -0.1575*t3677;
  t3686 = -0.2255*t3180;
  t3718 = -1.*t3154*t3717;
  t3722 = t3680 + t3686 + t3718;
  t3776 = -0.068*t3154;
  t3795 = t3180*t3717;
  t3799 = t3776 + t3795;
  t3819 = t3469*t3739;
  t3820 = -1.*t3722*t3185;
  t3829 = t3819 + t3820;
  t3724 = t3469*t3722;
  t3748 = t3739*t3185;
  t3751 = t3724 + t3748;
  t3818 = t3799*t3171;
  t3830 = t3184*t3829;
  t3832 = t3818 + t3830;
  t3834 = t3184*t3799;
  t3835 = -1.*t3171*t3829;
  t3841 = t3834 + t3835;
  t3480 = t3180*t3473*t3171;
  t3497 = t3184*t3491;
  t3502 = t3480 + t3497;
  t3753 = t3180*t3469*t3751;
  t3845 = -1.*t3751*t3541;
  t3854 = t3751*t3541;
  t3869 = -1.*t3751*t3628;
  t3885 = -1.*t3180*t3469*t3751;
  t3905 = t3751*t3628;
  t4666 = -1.*t3154*t3799;
  t5067 = t3180*t3799*t3473;
  t3964 = t3154*t3799;
  t3988 = -1.*t3180*t3799*t3467;
  t4631 = -1.*t3180*t3799*t3473;
  t4390 = t3180*t3799*t3467;
  t6673 = t3739*t3473;
  t6519 = -1.*t3739*t3484;
  p_output1[0]=t3478*var2[0] + t3418*var2[1] + t3502*var2[2];
  p_output1[1]=(t3508*t3541 - 1.*t3512*t3575)*var2[0] + (t3180*t3469*t3508 - 1.*t3512*t3518)*var2[1] + (t3508*t3628 - 1.*t3512*t3639)*var2[2];
  p_output1[2]=(t3512*t3541 + t3508*t3575)*var2[0] + (t3180*t3469*t3512 + t3508*t3518)*var2[1] + (t3512*t3628 + t3508*t3639)*var2[2];
  p_output1[3]=(t3502*(-1.*t3418*t3832 - 1.*t3518*t3841 + t3885) + t3418*(t3502*t3832 + t3639*t3841 + t3905))*var2[0] + (t3502*(t3478*t3832 + t3575*t3841 + t3854) + t3478*(-1.*t3502*t3832 - 1.*t3639*t3841 + t3869))*var2[1] + (t3478*(t3753 + t3418*t3832 + t3518*t3841) + t3418*(-1.*t3478*t3832 - 1.*t3575*t3841 + t3845))*var2[2];
  p_output1[4]=(t3628*(t3180*t3185*t3829 + t3885 + t4666) + t3180*t3469*(t3491*t3829 + t3905 + t5067))*var2[0] + (t3628*(t3476*t3829 + t3854 + t4390) + t3541*(-1.*t3491*t3829 + t3869 + t4631))*var2[1] + (t3541*(t3753 - 1.*t3180*t3185*t3829 + t3964) + t3180*t3469*(-1.*t3476*t3829 + t3845 + t3988))*var2[2];
  p_output1[5]=(t3180*t3473*(-1.*t3180*t3722 + t4666) + t3154*(-1.*t3154*t3473*t3722 + t3484*t3739 + t5067))*var2[0] + (t3180*t3467*(t3154*t3473*t3722 + t4631 + t6519) + t3180*t3473*(-1.*t3154*t3467*t3722 + t4390 + t6673))*var2[1] + (t3180*t3467*(t3180*t3722 + t3964) + t3154*(t3154*t3467*t3722 - 1.*t3473*t3739 + t3988))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.1575*t3467 + 0.2255*t3484)*var2[0] + (t3473*(-1.*t3473*t3717 + t6519) + t3484*(t3467*t3717 + t6673))*var2[1] - 0.068*t3473*var2[2];
  p_output1[13]=(0.325*t3458 - 1.*t3426*t3692 - 1.*t3458*t3715)*var2[0] + (-0.325*t3426 - 1.*t3458*t3692 + t3426*t3715)*var2[2];
  p_output1[14]=-0.0641*var2[0] - 0.28*var2[2];
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

#include "fFrFoot_vec_DiagonalImpact.hh"

namespace SymFunction
{

void fFrFoot_vec_DiagonalImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
