/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:37:22 GMT+02:00
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
  double t4745;
  double t4794;
  double t4795;
  double t4796;
  double t4798;
  double t4804;
  double t4817;
  double t5276;
  double t4818;
  double t5277;
  double t5268;
  double t5312;
  double t5316;
  double t5365;
  double t5368;
  double t5379;
  double t4767;
  double t4768;
  double t5391;
  double t5394;
  double t5395;
  double t5401;
  double t5404;
  double t5408;
  double t5409;
  double t5414;
  double t5417;
  double t5419;
  double t5777;
  double t8184;
  t4745 = Cos(var1[3]);
  t4794 = Cos(var1[15]);
  t4795 = -1.*t4794;
  t4796 = 1. + t4795;
  t4798 = -0.15121*t4796;
  t4804 = Sin(var1[15]);
  t4817 = Cos(var1[5]);
  t5276 = Sin(var1[3]);
  t4818 = Sin(var1[4]);
  t5277 = Sin(var1[5]);
  t5268 = -1.*t4745*t4817*t4818;
  t5312 = t5276*t5277;
  t5316 = t5268 + t5312;
  t5365 = t4817*t5276;
  t5368 = t4745*t4818*t5277;
  t5379 = t5365 + t5368;
  t4767 = Cos(var1[4]);
  t4768 = Sin(var1[16]);
  t5391 = Cos(var1[16]);
  t5394 = t4794*t5316;
  t5395 = t4804*t5379;
  t5401 = t5394 + t5395;
  t5404 = Cos(var1[17]);
  t5408 = t4745*t4767*t4768;
  t5409 = t5391*t5401;
  t5414 = t5408 + t5409;
  t5417 = Sin(var1[17]);
  t5419 = t5391*t4745*t4767;
  t5777 = -1.*t4768*t5401;
  t8184 = t5419 + t5777;
  p_output1[0]=0.28121*t4745*t4767*t4768 + (t4798 - 0.15121*t4804)*t5316 + (t4798 + 0.15121*t4804)*t5379 - 0.15121*(-1.*t4804*t5316 + t4794*t5379) - 0.28121*(1. - 1.*t5391)*t5401 - 0.50321*(1. - 1.*t5404)*t5414 - 0.50321*t5417*t8184 - 0.19821*(t5404*t5414 - 1.*t5417*t8184) + var1[2];
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
