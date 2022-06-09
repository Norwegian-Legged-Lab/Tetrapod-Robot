/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 17:58:35 GMT+02:00
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
  double t3315;
  double t3335;
  double t3338;
  double t3343;
  double t3344;
  double t3347;
  double t3350;
  double t3353;
  double t3351;
  double t3368;
  double t3352;
  double t3369;
  double t3370;
  double t3380;
  double t3389;
  double t3393;
  double t3320;
  double t3333;
  double t3434;
  double t3448;
  double t3449;
  double t3454;
  double t3459;
  double t3462;
  double t3465;
  double t3466;
  double t3469;
  double t3470;
  double t3480;
  double t3484;
  t3315 = Cos(var1[3]);
  t3335 = Cos(var1[15]);
  t3338 = -1.*t3335;
  t3343 = 1. + t3338;
  t3344 = -0.15121*t3343;
  t3347 = Sin(var1[15]);
  t3350 = Cos(var1[5]);
  t3353 = Sin(var1[3]);
  t3351 = Sin(var1[4]);
  t3368 = Sin(var1[5]);
  t3352 = -1.*t3315*t3350*t3351;
  t3369 = t3353*t3368;
  t3370 = t3352 + t3369;
  t3380 = t3350*t3353;
  t3389 = t3315*t3351*t3368;
  t3393 = t3380 + t3389;
  t3320 = Cos(var1[4]);
  t3333 = Sin(var1[16]);
  t3434 = Cos(var1[16]);
  t3448 = t3335*t3370;
  t3449 = t3347*t3393;
  t3454 = t3448 + t3449;
  t3459 = Cos(var1[17]);
  t3462 = t3315*t3320*t3333;
  t3465 = t3434*t3454;
  t3466 = t3462 + t3465;
  t3469 = Sin(var1[17]);
  t3470 = t3434*t3315*t3320;
  t3480 = -1.*t3333*t3454;
  t3484 = t3470 + t3480;
  p_output1[0]=0.28121*t3315*t3320*t3333 + (t3344 - 0.15121*t3347)*t3370 + (t3344 + 0.15121*t3347)*t3393 - 0.15121*(-1.*t3347*t3370 + t3335*t3393) - 0.28121*(1. - 1.*t3434)*t3454 - 0.50321*(1. - 1.*t3459)*t3466 - 0.50321*t3469*t3484 - 0.19821*(t3459*t3466 - 1.*t3469*t3484) + var1[2];
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

#include "u_rearSwingFootHeight1_DiagonalStance.hh"

namespace SymFunction
{

void u_rearSwingFootHeight1_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
