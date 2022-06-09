/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:53:23 GMT+02:00
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
  double t3308;
  double t3029;
  double t3310;
  double t3273;
  double t3320;
  double t3428;
  double t3476;
  double t3478;
  double t3494;
  double t3503;
  double t3304;
  double t3324;
  double t3371;
  double t3528;
  double t3535;
  double t3537;
  double t3652;
  double t3688;
  double t3714;
  double t3822;
  double t3859;
  double t3895;
  double t3926;
  double t3955;
  double t3958;
  double t3960;
  double t3965;
  double t4120;
  double t4242;
  double t4260;
  t3308 = Cos(var1[3]);
  t3029 = Cos(var1[5]);
  t3310 = Sin(var1[4]);
  t3273 = Sin(var1[3]);
  t3320 = Sin(var1[5]);
  t3428 = Cos(var1[6]);
  t3476 = -1.*t3428;
  t3478 = 1. + t3476;
  t3494 = 0.15121*t3478;
  t3503 = Sin(var1[6]);
  t3304 = t3029*t3273;
  t3324 = t3308*t3310*t3320;
  t3371 = t3304 + t3324;
  t3528 = -1.*t3308*t3029*t3310;
  t3535 = t3273*t3320;
  t3537 = t3528 + t3535;
  t3652 = Cos(var1[7]);
  t3688 = t3428*t3537;
  t3714 = t3371*t3503;
  t3822 = t3688 + t3714;
  t3859 = Cos(var1[4]);
  t3895 = Sin(var1[7]);
  t3926 = Cos(var1[8]);
  t3955 = t3652*t3822;
  t3958 = -1.*t3308*t3859*t3895;
  t3960 = t3955 + t3958;
  t3965 = t3308*t3859*t3652;
  t4120 = t3822*t3895;
  t4242 = t3965 + t4120;
  t4260 = Sin(var1[8]);
  p_output1[0]=t3371*(t3494 - 0.15121*t3503) + (t3494 + 0.15121*t3503)*t3537 + 0.15121*(t3371*t3428 - 1.*t3503*t3537) + 0.28121*(1. - 1.*t3652)*t3822 + 0.28121*t3308*t3859*t3895 + 0.50321*(1. - 1.*t3926)*t3960 - 0.50321*t4242*t4260 + 0.19821*(t3926*t3960 + t4242*t4260) + var1[2];
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

#include "swing_position_FlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void swing_position_FlFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
