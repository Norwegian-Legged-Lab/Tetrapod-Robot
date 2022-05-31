/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 13:04:41 GMT+02:00
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
  double t54151;
  double t53676;
  double t54154;
  double t53748;
  double t54204;
  double t54289;
  double t54342;
  double t54346;
  double t54349;
  double t54358;
  double t53900;
  double t54279;
  double t54280;
  double t54415;
  double t54417;
  double t54418;
  double t54522;
  double t54539;
  double t54540;
  double t54554;
  double t54572;
  double t54573;
  double t54645;
  double t54683;
  double t54705;
  double t54709;
  double t54730;
  double t54736;
  double t54738;
  double t54764;
  t54151 = Cos(var1[3]);
  t53676 = Cos(var1[5]);
  t54154 = Sin(var1[4]);
  t53748 = Sin(var1[3]);
  t54204 = Sin(var1[5]);
  t54289 = Cos(var1[6]);
  t54342 = -1.*t54289;
  t54346 = 1. + t54342;
  t54349 = 0.15121*t54346;
  t54358 = Sin(var1[6]);
  t53900 = t53676*t53748;
  t54279 = t54151*t54154*t54204;
  t54280 = t53900 + t54279;
  t54415 = -1.*t54151*t53676*t54154;
  t54417 = t53748*t54204;
  t54418 = t54415 + t54417;
  t54522 = Cos(var1[7]);
  t54539 = t54289*t54418;
  t54540 = t54280*t54358;
  t54554 = t54539 + t54540;
  t54572 = Cos(var1[4]);
  t54573 = Sin(var1[7]);
  t54645 = Cos(var1[8]);
  t54683 = t54522*t54554;
  t54705 = -1.*t54151*t54572*t54573;
  t54709 = t54683 + t54705;
  t54730 = t54151*t54572*t54522;
  t54736 = t54554*t54573;
  t54738 = t54730 + t54736;
  t54764 = Sin(var1[8]);
  p_output1[0]=t54280*(t54349 - 0.15121*t54358) + (t54349 + 0.15121*t54358)*t54418 + 0.15121*(t54280*t54289 - 1.*t54358*t54418) + 0.28121*(1. - 1.*t54522)*t54554 + 0.28121*t54151*t54572*t54573 + 0.50321*(1. - 1.*t54645)*t54709 - 0.50321*t54738*t54764 + 0.19821*(t54645*t54709 + t54738*t54764) + var1[2];
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

#include "u_frontSwingFootHeight1_DiagonalStance.hh"

namespace SymFunction
{

void u_frontSwingFootHeight1_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
