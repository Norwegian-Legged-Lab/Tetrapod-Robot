/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:32:45 GMT+02:00
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
  double t4338;
  double t6644;
  double t9632;
  double t6957;
  double t14004;
  double t4369;
  double t5641;
  double t20390;
  double t25877;
  double t26070;
  double t27213;
  double t29415;
  double t7036;
  double t14602;
  double t16975;
  double t5800;
  double t29430;
  double t29699;
  double t29711;
  double t31221;
  double t31404;
  double t31886;
  double t31902;
  double t33952;
  double t35101;
  double t35386;
  double t37318;
  t4338 = Cos(var1[3]);
  t6644 = Cos(var1[5]);
  t9632 = Sin(var1[3]);
  t6957 = Sin(var1[4]);
  t14004 = Sin(var1[5]);
  t4369 = Cos(var1[4]);
  t5641 = Sin(var1[15]);
  t20390 = Cos(var1[15]);
  t25877 = t6644*t9632;
  t26070 = t4338*t6957*t14004;
  t27213 = t25877 + t26070;
  t29415 = Sin(var1[16]);
  t7036 = -1.*t4338*t6644*t6957;
  t14602 = t9632*t14004;
  t16975 = t7036 + t14602;
  t5800 = Cos(var1[16]);
  t29430 = t20390*t4338*t4369;
  t29699 = -1.*t5641*t27213;
  t29711 = t29430 + t29699;
  t31221 = Sin(var1[17]);
  t31404 = -1.*t29415*t16975;
  t31886 = t5800*t29711;
  t31902 = t31404 + t31886;
  t33952 = Cos(var1[17]);
  t35101 = t5800*t16975;
  t35386 = t29415*t29711;
  t37318 = t35101 + t35386;
  p_output1[0]=-0.1575*(1. - 1.*t20390)*t27213 + 0.325*t29415*t29711 - 0.575*t31221*t31902 - 0.575*(1. - 1.*t33952)*t37318 - 0.0641*(t31902*t33952 + t31221*t37318) - 0.295*(-1.*t31221*t31902 + t33952*t37318) + 0.1575*t4338*t4369*t5641 - 0.2255*(t20390*t27213 + t4338*t4369*t5641) - 0.325*t16975*(1. - 1.*t5800) + var1[2];
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

namespace DiagonalStance
{

void u_rearSwingFootHeight1_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
