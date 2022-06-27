/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:36:23 GMT+02:00
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
  double t4610;
  double t7745;
  double t7793;
  double t7823;
  double t7954;
  double t8065;
  double t8260;
  double t8280;
  double t8263;
  double t8282;
  double t8277;
  double t8285;
  double t8286;
  double t8331;
  double t8336;
  double t8338;
  double t5105;
  double t7058;
  double t8544;
  double t8749;
  double t8805;
  double t8831;
  double t8861;
  double t8903;
  double t8906;
  double t8917;
  double t8931;
  double t8932;
  double t8954;
  double t8955;
  t4610 = Cos(var1[3]);
  t7745 = Cos(var1[15]);
  t7793 = -1.*t7745;
  t7823 = 1. + t7793;
  t7954 = -0.15121*t7823;
  t8065 = Sin(var1[15]);
  t8260 = Cos(var1[5]);
  t8280 = Sin(var1[3]);
  t8263 = Sin(var1[4]);
  t8282 = Sin(var1[5]);
  t8277 = -1.*t4610*t8260*t8263;
  t8285 = t8280*t8282;
  t8286 = t8277 + t8285;
  t8331 = t8260*t8280;
  t8336 = t4610*t8263*t8282;
  t8338 = t8331 + t8336;
  t5105 = Cos(var1[4]);
  t7058 = Sin(var1[16]);
  t8544 = Cos(var1[16]);
  t8749 = t7745*t8286;
  t8805 = t8065*t8338;
  t8831 = t8749 + t8805;
  t8861 = Cos(var1[17]);
  t8903 = t4610*t5105*t7058;
  t8906 = t8544*t8831;
  t8917 = t8903 + t8906;
  t8931 = Sin(var1[17]);
  t8932 = t8544*t4610*t5105;
  t8954 = -1.*t7058*t8831;
  t8955 = t8932 + t8954;
  p_output1[0]=0.28121*t4610*t5105*t7058 + (t7954 - 0.15121*t8065)*t8286 + (t7954 + 0.15121*t8065)*t8338 - 0.15121*(-1.*t8065*t8286 + t7745*t8338) - 0.28121*(1. - 1.*t8544)*t8831 - 0.50321*(1. - 1.*t8861)*t8917 - 0.50321*t8931*t8955 - 0.19821*(t8861*t8917 - 1.*t8931*t8955) + var1[2];
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

namespace DiagonalStance
{

void u_rearSwingFootHeight1_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
