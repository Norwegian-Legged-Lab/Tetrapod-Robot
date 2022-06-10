/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:04:57 GMT+02:00
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
  double t2900;
  double t3093;
  double t3115;
  double t3130;
  double t3160;
  double t3075;
  double t3212;
  double t543;
  double t3214;
  double t3220;
  double t3228;
  double t3239;
  double t3240;
  double t3245;
  double t3253;
  double t3260;
  double t3287;
  double t3449;
  double t3463;
  double t1876;
  double t2819;
  double t3505;
  double t3141;
  double t3152;
  double t3523;
  double t3531;
  double t3533;
  double t3534;
  double t3519;
  double t3524;
  double t3525;
  double t3566;
  double t3569;
  double t3570;
  double t3262;
  double t3285;
  double t3574;
  double t3576;
  double t3591;
  double t3593;
  double t3594;
  double t3595;
  double t3656;
  double t3657;
  double t3658;
  double t3637;
  double t3643;
  double t3654;
  double t3670;
  double t3680;
  double t3683;
  double t3685;
  double t3687;
  double t3688;
  double t3698;
  double t3702;
  double t3703;
  t2900 = Cos(var1[4]);
  t3093 = Sin(var1[12]);
  t3115 = Sin(var1[4]);
  t3130 = Cos(var1[12]);
  t3160 = Sin(var1[5]);
  t3075 = Cos(var1[5]);
  t3212 = Sin(var1[13]);
  t543 = Cos(var1[13]);
  t3214 = t3130*t3115;
  t3220 = t2900*t3093*t3160;
  t3228 = t3214 + t3220;
  t3239 = Sin(var1[14]);
  t3240 = -1.*t2900*t3075*t3212;
  t3245 = t543*t3228;
  t3253 = t3240 + t3245;
  t3260 = Cos(var1[14]);
  t3287 = t543*t2900*t3075;
  t3449 = t3212*t3228;
  t3463 = t3287 + t3449;
  t1876 = -1.*t543;
  t2819 = 1. + t1876;
  t3505 = Sin(var1[3]);
  t3141 = -1.*t3130;
  t3152 = 1. + t3141;
  t3523 = Cos(var1[3]);
  t3531 = t3523*t3075;
  t3533 = -1.*t3505*t3115*t3160;
  t3534 = t3531 + t3533;
  t3519 = t3075*t3505*t3115;
  t3524 = t3523*t3160;
  t3525 = t3519 + t3524;
  t3566 = -1.*t3130*t2900*t3505;
  t3569 = -1.*t3093*t3534;
  t3570 = t3566 + t3569;
  t3262 = -1.*t3260;
  t3285 = 1. + t3262;
  t3574 = -1.*t3212*t3525;
  t3576 = t543*t3570;
  t3591 = t3574 + t3576;
  t3593 = t543*t3525;
  t3594 = t3212*t3570;
  t3595 = t3593 + t3594;
  t3656 = t3075*t3505;
  t3657 = t3523*t3115*t3160;
  t3658 = t3656 + t3657;
  t3637 = -1.*t3523*t3075*t3115;
  t3643 = t3505*t3160;
  t3654 = t3637 + t3643;
  t3670 = t3130*t3523*t2900;
  t3680 = -1.*t3093*t3658;
  t3683 = t3670 + t3680;
  t3685 = -1.*t3212*t3654;
  t3687 = t543*t3683;
  t3688 = t3685 + t3687;
  t3698 = t543*t3654;
  t3702 = t3212*t3683;
  t3703 = t3698 + t3702;
  p_output1[0]=0.325*t2819*t2900*t3075 + 0.1575*t3093*t3115 + 0.1575*t2900*t3152*t3160 - 0.2255*(t3093*t3115 - 1.*t2900*t3130*t3160) - 0.325*t3212*t3228 + 0.075*t3239*t3253 + 0.075*t3285*t3463 - 0.0641*(t3253*t3260 + t3239*t3463) + 0.355*(-1.*t3239*t3253 + t3260*t3463) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.1575*t2900*t3093*t3505 + 0.325*t2819*t3525 - 0.1575*t3152*t3534 - 0.2255*(-1.*t2900*t3093*t3505 + t3130*t3534) - 0.325*t3212*t3570 + 0.075*t3239*t3591 + 0.075*t3285*t3595 - 0.0641*(t3260*t3591 + t3239*t3595) + 0.355*(-1.*t3239*t3591 + t3260*t3595) + var1[1] - 1.*var2[1];
  p_output1[2]=0.1575*t2900*t3093*t3523 + 0.325*t2819*t3654 - 0.1575*t3152*t3658 - 0.2255*(t2900*t3093*t3523 + t3130*t3658) - 0.325*t3212*t3683 + 0.075*t3239*t3688 + 0.075*t3285*t3703 - 0.0641*(t3260*t3688 + t3239*t3703) + 0.355*(-1.*t3239*t3688 + t3260*t3703) + var1[2] - 1.*var2[2];
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

#include "h_FrFoot_ParallelStance.hh"

namespace SymFunction
{

void h_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
