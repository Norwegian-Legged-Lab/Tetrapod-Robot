/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:32:26 GMT+02:00
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
  double t3724;
  double t5553;
  double t5574;
  double t5560;
  double t5717;
  double t4524;
  double t5290;
  double t6192;
  double t6200;
  double t6201;
  double t6203;
  double t6247;
  double t5573;
  double t6130;
  double t6180;
  double t5336;
  double t6251;
  double t6252;
  double t6253;
  double t6312;
  double t6331;
  double t6345;
  double t6353;
  double t6403;
  double t6411;
  double t6418;
  double t6419;
  t3724 = Cos(var1[3]);
  t5553 = Cos(var1[5]);
  t5574 = Sin(var1[3]);
  t5560 = Sin(var1[4]);
  t5717 = Sin(var1[5]);
  t4524 = Cos(var1[4]);
  t5290 = Sin(var1[12]);
  t6192 = Cos(var1[12]);
  t6200 = t5553*t5574;
  t6201 = t3724*t5560*t5717;
  t6203 = t6200 + t6201;
  t6247 = Sin(var1[13]);
  t5573 = -1.*t3724*t5553*t5560;
  t6130 = t5574*t5717;
  t6180 = t5573 + t6130;
  t5336 = Cos(var1[13]);
  t6251 = t6192*t3724*t4524;
  t6252 = -1.*t5290*t6203;
  t6253 = t6251 + t6252;
  t6312 = Sin(var1[14]);
  t6331 = -1.*t6247*t6180;
  t6345 = t5336*t6253;
  t6353 = t6331 + t6345;
  t6403 = Cos(var1[14]);
  t6411 = t5336*t6180;
  t6418 = t6247*t6253;
  t6419 = t6411 + t6418;
  p_output1[0]=0.1575*t3724*t4524*t5290 + 0.325*(1. - 1.*t5336)*t6180 - 0.1575*(1. - 1.*t6192)*t6203 - 0.2255*(t3724*t4524*t5290 + t6192*t6203) - 0.325*t6247*t6253 + 0.075*t6312*t6353 + 0.075*(1. - 1.*t6403)*t6419 - 0.0641*(t6353*t6403 + t6312*t6419) + 0.355*(-1.*t6312*t6353 + t6403*t6419) + var1[2];
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

#include "swing_position_FrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void swing_position_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
