/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:51:54 GMT+02:00
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
  double t1446;
  double t1616;
  double t1668;
  double t1763;
  double t1772;
  double t1832;
  double t4078;
  double t4860;
  double t4079;
  double t5461;
  double t4164;
  double t5511;
  double t13014;
  double t31383;
  double t31384;
  double t31392;
  double t1602;
  double t1607;
  double t36921;
  double t36969;
  double t37096;
  double t37097;
  double t37100;
  double t37108;
  double t37109;
  double t37120;
  double t37387;
  double t37398;
  double t37411;
  double t37473;
  t1446 = Cos(var1[3]);
  t1616 = Cos(var1[15]);
  t1668 = -1.*t1616;
  t1763 = 1. + t1668;
  t1772 = -0.15121*t1763;
  t1832 = Sin(var1[15]);
  t4078 = Cos(var1[5]);
  t4860 = Sin(var1[3]);
  t4079 = Sin(var1[4]);
  t5461 = Sin(var1[5]);
  t4164 = -1.*t1446*t4078*t4079;
  t5511 = t4860*t5461;
  t13014 = t4164 + t5511;
  t31383 = t4078*t4860;
  t31384 = t1446*t4079*t5461;
  t31392 = t31383 + t31384;
  t1602 = Cos(var1[4]);
  t1607 = Sin(var1[16]);
  t36921 = Cos(var1[16]);
  t36969 = t1616*t13014;
  t37096 = t1832*t31392;
  t37097 = t36969 + t37096;
  t37100 = Cos(var1[17]);
  t37108 = t1446*t1602*t1607;
  t37109 = t36921*t37097;
  t37120 = t37108 + t37109;
  t37387 = Sin(var1[17]);
  t37398 = t36921*t1446*t1602;
  t37411 = -1.*t1607*t37097;
  t37473 = t37398 + t37411;
  p_output1[0]=0.28121*t1446*t1602*t1607 + t13014*(t1772 - 0.15121*t1832) + (t1772 + 0.15121*t1832)*t31392 - 0.15121*(-1.*t13014*t1832 + t1616*t31392) - 0.28121*(1. - 1.*t36921)*t37097 - 0.50321*(1. - 1.*t37100)*t37120 - 0.50321*t37387*t37473 - 0.23321*(t37100*t37120 - 1.*t37387*t37473) + var1[2];
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
