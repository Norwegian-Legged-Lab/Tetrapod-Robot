/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:40:26 GMT+02:00
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
  double t3161;
  double t5404;
  double t5459;
  double t5481;
  double t5612;
  double t22380;
  double t37522;
  double t38127;
  double t37594;
  double t38145;
  double t38053;
  double t38163;
  double t38313;
  double t38385;
  double t38388;
  double t38389;
  double t3317;
  double t4263;
  double t38414;
  double t38417;
  double t38418;
  double t38419;
  double t38430;
  double t38433;
  double t38434;
  double t38482;
  double t38484;
  double t38490;
  double t38492;
  double t38493;
  t3161 = Cos(var1[3]);
  t5404 = Cos(var1[15]);
  t5459 = -1.*t5404;
  t5481 = 1. + t5459;
  t5612 = -0.15121*t5481;
  t22380 = Sin(var1[15]);
  t37522 = Cos(var1[5]);
  t38127 = Sin(var1[3]);
  t37594 = Sin(var1[4]);
  t38145 = Sin(var1[5]);
  t38053 = -1.*t3161*t37522*t37594;
  t38163 = t38127*t38145;
  t38313 = t38053 + t38163;
  t38385 = t37522*t38127;
  t38388 = t3161*t37594*t38145;
  t38389 = t38385 + t38388;
  t3317 = Cos(var1[4]);
  t4263 = Sin(var1[16]);
  t38414 = Cos(var1[16]);
  t38417 = t5404*t38313;
  t38418 = t22380*t38389;
  t38419 = t38417 + t38418;
  t38430 = Cos(var1[17]);
  t38433 = t3161*t3317*t4263;
  t38434 = t38414*t38419;
  t38482 = t38433 + t38434;
  t38484 = Sin(var1[17]);
  t38490 = t38414*t3161*t3317;
  t38492 = -1.*t4263*t38419;
  t38493 = t38490 + t38492;
  p_output1[0]=-0.28121*(1. - 1.*t38414)*t38419 - 0.50321*(1. - 1.*t38430)*t38482 - 0.50321*t38484*t38493 - 0.23321*(t38430*t38482 - 1.*t38484*t38493) + 0.28121*t3161*t3317*t4263 - 0.15121*(-1.*t22380*t38313 + t38389*t5404) + t38313*(-0.15121*t22380 + t5612) + t38389*(0.15121*t22380 + t5612) + var1[2];
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
