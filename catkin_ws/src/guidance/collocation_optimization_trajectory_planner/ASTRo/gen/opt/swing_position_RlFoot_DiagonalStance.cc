/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:42:22 GMT+02:00
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
  double t6072;
  double t6296;
  double t6298;
  double t6300;
  double t6365;
  double t6381;
  double t6383;
  double t6389;
  double t6385;
  double t6394;
  double t6388;
  double t6395;
  double t6396;
  double t6405;
  double t6414;
  double t6426;
  double t6266;
  double t6288;
  double t6444;
  double t6465;
  double t6467;
  double t6468;
  double t6472;
  double t6477;
  double t6478;
  double t6485;
  double t6496;
  double t6497;
  double t6505;
  double t6506;
  t6072 = Cos(var1[3]);
  t6296 = Cos(var1[9]);
  t6298 = -1.*t6296;
  t6300 = 1. + t6298;
  t6365 = Sin(var1[9]);
  t6381 = 0.15121*t6365;
  t6383 = Cos(var1[5]);
  t6389 = Sin(var1[3]);
  t6385 = Sin(var1[4]);
  t6394 = Sin(var1[5]);
  t6388 = -1.*t6072*t6383*t6385;
  t6395 = t6389*t6394;
  t6396 = t6388 + t6395;
  t6405 = t6383*t6389;
  t6414 = t6072*t6385*t6394;
  t6426 = t6405 + t6414;
  t6266 = Cos(var1[4]);
  t6288 = Sin(var1[10]);
  t6444 = Cos(var1[10]);
  t6465 = t6296*t6396;
  t6467 = t6365*t6426;
  t6468 = t6465 + t6467;
  t6472 = Cos(var1[11]);
  t6477 = t6072*t6266*t6288;
  t6478 = t6444*t6468;
  t6485 = t6477 + t6478;
  t6496 = Sin(var1[11]);
  t6497 = t6444*t6072*t6266;
  t6505 = -1.*t6288*t6468;
  t6506 = t6497 + t6505;
  p_output1[0]=0.28121*t6072*t6266*t6288 + (-0.15121*t6300 + t6381)*t6396 + (0.15121*t6300 + t6381)*t6426 + 0.15121*(-1.*t6365*t6396 + t6296*t6426) - 0.28121*(1. - 1.*t6444)*t6468 - 0.50321*(1. - 1.*t6472)*t6485 - 0.50321*t6496*t6506 - 0.23321*(t6472*t6485 - 1.*t6496*t6506) + var1[2];
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

#include "swing_position_RlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void swing_position_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
