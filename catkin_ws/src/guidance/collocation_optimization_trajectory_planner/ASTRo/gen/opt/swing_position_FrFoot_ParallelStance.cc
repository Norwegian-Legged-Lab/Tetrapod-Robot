/*
 * Automatically Generated from Mathematica.
 * Thu 26 May 2022 14:48:50 GMT+02:00
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
  double t8617;
  double t15527;
  double t15996;
  double t16107;
  double t16253;
  double t16283;
  double t16285;
  double t16379;
  double t16291;
  double t16479;
  double t16292;
  double t16497;
  double t16502;
  double t16541;
  double t16544;
  double t16545;
  double t8685;
  double t8823;
  double t16559;
  double t16588;
  double t16589;
  double t16592;
  double t16595;
  double t16642;
  double t16643;
  double t16646;
  double t16651;
  double t16652;
  double t16653;
  double t16655;
  t8617 = Cos(var1[3]);
  t15527 = Cos(var1[12]);
  t15996 = -1.*t15527;
  t16107 = 1. + t15996;
  t16253 = Sin(var1[12]);
  t16283 = -0.15121*t16253;
  t16285 = Cos(var1[5]);
  t16379 = Sin(var1[3]);
  t16291 = Sin(var1[4]);
  t16479 = Sin(var1[5]);
  t16292 = -1.*t8617*t16285*t16291;
  t16497 = t16379*t16479;
  t16502 = t16292 + t16497;
  t16541 = t16285*t16379;
  t16544 = t8617*t16291*t16479;
  t16545 = t16541 + t16544;
  t8685 = Cos(var1[4]);
  t8823 = Sin(var1[13]);
  t16559 = Cos(var1[13]);
  t16588 = t15527*t16502;
  t16589 = t16253*t16545;
  t16592 = t16588 + t16589;
  t16595 = Cos(var1[14]);
  t16642 = -1.*t8617*t8685*t8823;
  t16643 = t16559*t16592;
  t16646 = t16642 + t16643;
  t16651 = Sin(var1[14]);
  t16652 = t16559*t8617*t8685;
  t16653 = t8823*t16592;
  t16655 = t16652 + t16653;
  p_output1[0]=(0.15121*t16107 + t16283)*t16502 + (-0.15121*t16107 + t16283)*t16545 - 0.15121*(-1.*t16253*t16502 + t15527*t16545) + 0.28121*(1. - 1.*t16559)*t16592 + 0.50321*(1. - 1.*t16595)*t16646 - 0.50321*t16651*t16655 + 0.19821*(t16595*t16646 + t16651*t16655) + 0.28121*t8617*t8685*t8823 + var1[2];
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

#include "swing_position_FrFoot_ParallelStance.hh"

namespace ParallelStance
{

void swing_position_FrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
