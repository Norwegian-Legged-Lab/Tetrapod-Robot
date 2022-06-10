/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:49:22 GMT+02:00
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
  double t2002;
  double t2862;
  double t3148;
  double t3153;
  double t3154;
  double t3201;
  double t3263;
  double t3320;
  double t3276;
  double t3355;
  double t3293;
  double t3363;
  double t3367;
  double t3836;
  double t3905;
  double t3916;
  double t2044;
  double t2759;
  double t4016;
  double t4024;
  double t4038;
  double t4059;
  double t4063;
  double t4181;
  double t4182;
  double t4276;
  double t4406;
  double t4410;
  double t4419;
  double t4438;
  t2002 = Cos(var1[3]);
  t2862 = Cos(var1[15]);
  t3148 = -1.*t2862;
  t3153 = 1. + t3148;
  t3154 = -0.15121*t3153;
  t3201 = Sin(var1[15]);
  t3263 = Cos(var1[5]);
  t3320 = Sin(var1[3]);
  t3276 = Sin(var1[4]);
  t3355 = Sin(var1[5]);
  t3293 = -1.*t2002*t3263*t3276;
  t3363 = t3320*t3355;
  t3367 = t3293 + t3363;
  t3836 = t3263*t3320;
  t3905 = t2002*t3276*t3355;
  t3916 = t3836 + t3905;
  t2044 = Cos(var1[4]);
  t2759 = Sin(var1[16]);
  t4016 = Cos(var1[16]);
  t4024 = t2862*t3367;
  t4038 = t3201*t3916;
  t4059 = t4024 + t4038;
  t4063 = Cos(var1[17]);
  t4181 = t2002*t2044*t2759;
  t4182 = t4016*t4059;
  t4276 = t4181 + t4182;
  t4406 = Sin(var1[17]);
  t4410 = t4016*t2002*t2044;
  t4419 = -1.*t2759*t4059;
  t4438 = t4410 + t4419;
  p_output1[0]=0.28121*t2002*t2044*t2759 + (t3154 - 0.15121*t3201)*t3367 + (t3154 + 0.15121*t3201)*t3916 - 0.15121*(-1.*t3201*t3367 + t2862*t3916) - 0.28121*(1. - 1.*t4016)*t4059 - 0.50321*(1. - 1.*t4063)*t4276 - 0.50321*t4406*t4438 - 0.19821*(t4063*t4276 - 1.*t4406*t4438) + var1[2];
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
