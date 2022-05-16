/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:40:43 GMT+02:00
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
  double t2016;
  double t1651;
  double t2041;
  double t1752;
  double t2148;
  double t2391;
  double t2412;
  double t2450;
  double t2451;
  double t2458;
  double t1898;
  double t2174;
  double t2334;
  double t2569;
  double t2604;
  double t2680;
  double t2981;
  double t3049;
  double t3055;
  double t3077;
  double t3186;
  double t3226;
  double t3236;
  double t3312;
  double t3357;
  double t3398;
  double t3411;
  double t3440;
  double t3456;
  double t3471;
  t2016 = Cos(var1[3]);
  t1651 = Cos(var1[5]);
  t2041 = Sin(var1[4]);
  t1752 = Sin(var1[3]);
  t2148 = Sin(var1[5]);
  t2391 = Cos(var1[6]);
  t2412 = -1.*t2391;
  t2450 = 1. + t2412;
  t2451 = 0.15121*t2450;
  t2458 = Sin(var1[6]);
  t1898 = t1651*t1752;
  t2174 = t2016*t2041*t2148;
  t2334 = t1898 + t2174;
  t2569 = -1.*t2016*t1651*t2041;
  t2604 = t1752*t2148;
  t2680 = t2569 + t2604;
  t2981 = Cos(var1[7]);
  t3049 = t2391*t2680;
  t3055 = t2334*t2458;
  t3077 = t3049 + t3055;
  t3186 = Cos(var1[4]);
  t3226 = Sin(var1[7]);
  t3236 = Cos(var1[8]);
  t3312 = t2981*t3077;
  t3357 = -1.*t2016*t3186*t3226;
  t3398 = t3312 + t3357;
  t3411 = t2016*t3186*t2981;
  t3440 = t3077*t3226;
  t3456 = t3411 + t3440;
  t3471 = Sin(var1[8]);
  p_output1[0]=t2334*(t2451 - 0.15121*t2458) + (t2451 + 0.15121*t2458)*t2680 + 0.15121*(t2334*t2391 - 1.*t2458*t2680) + 0.28121*(1. - 1.*t2981)*t3077 + 0.28121*t2016*t3186*t3226 + 0.50321*(1. - 1.*t3236)*t3398 - 0.50321*t3456*t3471 + 0.23321*(t3236*t3398 + t3456*t3471) + var1[2];
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

#include "u_frontSwingFootHeight2_ParallelStance.hh"

namespace SymFunction
{

void u_frontSwingFootHeight2_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
