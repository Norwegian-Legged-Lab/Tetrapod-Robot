/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:25:34 GMT+02:00
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
  double t4871;
  double t7940;
  double t8124;
  double t7974;
  double t8164;
  double t7768;
  double t7867;
  double t8208;
  double t8216;
  double t8220;
  double t8229;
  double t8271;
  double t8115;
  double t8165;
  double t8196;
  double t7896;
  double t8274;
  double t8284;
  double t8287;
  double t8310;
  double t8348;
  double t8353;
  double t8355;
  double t8360;
  double t8370;
  double t8371;
  double t8373;
  t4871 = Cos(var1[3]);
  t7940 = Cos(var1[5]);
  t8124 = Sin(var1[3]);
  t7974 = Sin(var1[4]);
  t8164 = Sin(var1[5]);
  t7768 = Cos(var1[4]);
  t7867 = Sin(var1[12]);
  t8208 = Cos(var1[12]);
  t8216 = t7940*t8124;
  t8220 = t4871*t7974*t8164;
  t8229 = t8216 + t8220;
  t8271 = Sin(var1[13]);
  t8115 = -1.*t4871*t7940*t7974;
  t8165 = t8124*t8164;
  t8196 = t8115 + t8165;
  t7896 = Cos(var1[13]);
  t8274 = t8208*t4871*t7768;
  t8284 = -1.*t7867*t8229;
  t8287 = t8274 + t8284;
  t8310 = Sin(var1[14]);
  t8348 = -1.*t8271*t8196;
  t8353 = t7896*t8287;
  t8355 = t8348 + t8353;
  t8360 = Cos(var1[14]);
  t8370 = t7896*t8196;
  t8371 = t8271*t8287;
  t8373 = t8370 + t8371;
  p_output1[0]=0.1575*t4871*t7768*t7867 + 0.325*(1. - 1.*t7896)*t8196 - 0.1575*(1. - 1.*t8208)*t8229 - 0.2255*(t4871*t7768*t7867 + t8208*t8229) - 0.325*t8271*t8287 + 0.075*t8310*t8355 + 0.075*(1. - 1.*t8360)*t8373 - 0.0641*(t8355*t8360 + t8310*t8373) + 0.355*(-1.*t8310*t8355 + t8360*t8373) + var1[2];
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

#include "u_frontSwingFootHeightflat_ParallelStance2.hh"

namespace SymFunction
{

void u_frontSwingFootHeightflat_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
