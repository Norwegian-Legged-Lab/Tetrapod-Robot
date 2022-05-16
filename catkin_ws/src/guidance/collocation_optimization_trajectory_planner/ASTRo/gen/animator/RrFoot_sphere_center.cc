/*
 * Automatically Generated from Mathematica.
 * Fri 13 May 2022 14:25:00 GMT+02:00
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
  double t270;
  double t1941;
  double t2455;
  double t2458;
  double t2516;
  double t2567;
  double t1899;
  double t2885;
  double t2832;
  double t2838;
  double t2980;
  double t3007;
  double t3125;
  double t3126;
  double t3134;
  double t3152;
  double t3260;
  double t3294;
  double t3349;
  double t3359;
  double t3384;
  double t3413;
  double t2579;
  double t2712;
  double t3540;
  double t2840;
  double t2855;
  double t3588;
  double t3556;
  double t3595;
  double t3608;
  double t3633;
  double t3642;
  double t3649;
  double t2983;
  double t2992;
  double t3144;
  double t3146;
  double t3700;
  double t3708;
  double t3710;
  double t3717;
  double t3724;
  double t3725;
  double t3738;
  double t3740;
  double t3743;
  double t3766;
  double t3767;
  double t3768;
  double t3781;
  double t3789;
  double t3808;
  double t3854;
  double t3860;
  double t3863;
  double t3878;
  double t3879;
  double t3881;
  double t3901;
  double t3903;
  double t3924;
  t270 = Cos(var1[4]);
  t1941 = Cos(var1[15]);
  t2455 = -1.*t1941;
  t2458 = 1. + t2455;
  t2516 = -0.15121*t2458;
  t2567 = Sin(var1[15]);
  t1899 = Cos(var1[5]);
  t2885 = Sin(var1[5]);
  t2832 = Sin(var1[16]);
  t2838 = Sin(var1[4]);
  t2980 = Cos(var1[16]);
  t3007 = t1941*t270*t1899;
  t3125 = -1.*t270*t2567*t2885;
  t3126 = t3007 + t3125;
  t3134 = Cos(var1[17]);
  t3152 = t2832*t2838;
  t3260 = t2980*t3126;
  t3294 = t3152 + t3260;
  t3349 = Sin(var1[17]);
  t3359 = t2980*t2838;
  t3384 = -1.*t2832*t3126;
  t3413 = t3359 + t3384;
  t2579 = -0.15121*t2567;
  t2712 = t2516 + t2579;
  t3540 = Sin(var1[3]);
  t2840 = 0.15121*t2567;
  t2855 = t2516 + t2840;
  t3588 = Cos(var1[3]);
  t3556 = t1899*t3540*t2838;
  t3595 = t3588*t2885;
  t3608 = t3556 + t3595;
  t3633 = t3588*t1899;
  t3642 = -1.*t3540*t2838*t2885;
  t3649 = t3633 + t3642;
  t2983 = -1.*t2980;
  t2992 = 1. + t2983;
  t3144 = -1.*t3134;
  t3146 = 1. + t3144;
  t3700 = t1941*t3608;
  t3708 = t2567*t3649;
  t3710 = t3700 + t3708;
  t3717 = -1.*t270*t2832*t3540;
  t3724 = t2980*t3710;
  t3725 = t3717 + t3724;
  t3738 = -1.*t2980*t270*t3540;
  t3740 = -1.*t2832*t3710;
  t3743 = t3738 + t3740;
  t3766 = -1.*t3588*t1899*t2838;
  t3767 = t3540*t2885;
  t3768 = t3766 + t3767;
  t3781 = t1899*t3540;
  t3789 = t3588*t2838*t2885;
  t3808 = t3781 + t3789;
  t3854 = t1941*t3768;
  t3860 = t2567*t3808;
  t3863 = t3854 + t3860;
  t3878 = t3588*t270*t2832;
  t3879 = t2980*t3863;
  t3881 = t3878 + t3879;
  t3901 = t2980*t3588*t270;
  t3903 = -1.*t2832*t3863;
  t3924 = t3901 + t3903;
  p_output1[0]=t1899*t270*t2712 + 0.28121*t2832*t2838 - 1.*t270*t2855*t2885 - 0.15121*(-1.*t1899*t2567*t270 - 1.*t1941*t270*t2885) - 0.28121*t2992*t3126 - 0.50321*t3146*t3294 - 0.50321*t3349*t3413 - 0.23321*(t3134*t3294 - 1.*t3349*t3413) + var1[0];
  p_output1[1]=-0.28121*t270*t2832*t3540 + t2712*t3608 + t2855*t3649 - 0.15121*(-1.*t2567*t3608 + t1941*t3649) - 0.28121*t2992*t3710 - 0.50321*t3146*t3725 - 0.50321*t3349*t3743 - 0.23321*(t3134*t3725 - 1.*t3349*t3743) + var1[1];
  p_output1[2]=0.28121*t270*t2832*t3588 + t2712*t3768 + t2855*t3808 - 0.15121*(-1.*t2567*t3768 + t1941*t3808) - 0.28121*t2992*t3863 - 0.50321*t3146*t3881 - 0.50321*t3349*t3924 - 0.23321*(t3134*t3881 - 1.*t3349*t3924) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "RrFoot_sphere_center.hh"

namespace SymFunction
{

void RrFoot_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
