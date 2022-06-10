/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:03:54 GMT+02:00
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
  double t356;
  double t1049;
  double t2002;
  double t2044;
  double t2176;
  double t2269;
  double t2576;
  double t3148;
  double t2759;
  double t3153;
  double t2862;
  double t3154;
  double t3201;
  double t3320;
  double t3355;
  double t3363;
  double t375;
  double t420;
  double t4016;
  double t4059;
  double t4063;
  double t4181;
  double t4276;
  double t4419;
  double t4438;
  double t4588;
  double t4895;
  double t5144;
  double t5485;
  double t5505;
  t356 = Cos(var1[3]);
  t1049 = Cos(var1[15]);
  t2002 = -1.*t1049;
  t2044 = 1. + t2002;
  t2176 = -0.15121*t2044;
  t2269 = Sin(var1[15]);
  t2576 = Cos(var1[5]);
  t3148 = Sin(var1[3]);
  t2759 = Sin(var1[4]);
  t3153 = Sin(var1[5]);
  t2862 = -1.*t356*t2576*t2759;
  t3154 = t3148*t3153;
  t3201 = t2862 + t3154;
  t3320 = t2576*t3148;
  t3355 = t356*t2759*t3153;
  t3363 = t3320 + t3355;
  t375 = Cos(var1[4]);
  t420 = Sin(var1[16]);
  t4016 = Cos(var1[16]);
  t4059 = t1049*t3201;
  t4063 = t2269*t3363;
  t4181 = t4059 + t4063;
  t4276 = Cos(var1[17]);
  t4419 = t356*t375*t420;
  t4438 = t4016*t4181;
  t4588 = t4419 + t4438;
  t4895 = Sin(var1[17]);
  t5144 = t4016*t356*t375;
  t5485 = -1.*t420*t4181;
  t5505 = t5144 + t5485;
  p_output1[0]=(t2176 - 0.15121*t2269)*t3201 + (t2176 + 0.15121*t2269)*t3363 - 0.15121*(-1.*t2269*t3201 + t1049*t3363) - 0.28121*(1. - 1.*t4016)*t4181 + 0.28121*t356*t375*t420 - 0.50321*(1. - 1.*t4276)*t4588 - 0.50321*t4895*t5505 - 0.19821*(t4276*t4588 - 1.*t4895*t5505) + var1[2];
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

#include "u_rearSwingFootHeightflat_DiagonalStance.hh"

namespace SymFunction
{

void u_rearSwingFootHeightflat_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
