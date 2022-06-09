/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:10:47 GMT+02:00
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
  double t1209;
  double t1337;
  double t1570;
  double t1523;
  double t1571;
  double t1210;
  double t1263;
  double t1939;
  double t1964;
  double t1966;
  double t1967;
  double t2190;
  double t1568;
  double t1665;
  double t1667;
  double t1286;
  double t2193;
  double t2195;
  double t2199;
  double t2201;
  double t2202;
  double t2203;
  double t2205;
  double t2367;
  double t2378;
  double t2379;
  double t2386;
  t1209 = Cos(var1[3]);
  t1337 = Cos(var1[5]);
  t1570 = Sin(var1[3]);
  t1523 = Sin(var1[4]);
  t1571 = Sin(var1[5]);
  t1210 = Cos(var1[4]);
  t1263 = Sin(var1[15]);
  t1939 = Cos(var1[15]);
  t1964 = t1337*t1570;
  t1966 = t1209*t1523*t1571;
  t1967 = t1964 + t1966;
  t2190 = Sin(var1[16]);
  t1568 = -1.*t1209*t1337*t1523;
  t1665 = t1570*t1571;
  t1667 = t1568 + t1665;
  t1286 = Cos(var1[16]);
  t2193 = t1939*t1209*t1210;
  t2195 = -1.*t1263*t1967;
  t2199 = t2193 + t2195;
  t2201 = Sin(var1[17]);
  t2202 = -1.*t2190*t1667;
  t2203 = t1286*t2199;
  t2205 = t2202 + t2203;
  t2367 = Cos(var1[17]);
  t2378 = t1286*t1667;
  t2379 = t2190*t2199;
  t2386 = t2378 + t2379;
  p_output1[0]=0.1575*t1209*t1210*t1263 - 0.325*(1. - 1.*t1286)*t1667 - 0.1575*(1. - 1.*t1939)*t1967 - 0.2255*(t1209*t1210*t1263 + t1939*t1967) + 0.325*t2190*t2199 - 0.575*t2201*t2205 - 0.575*(1. - 1.*t2367)*t2386 - 0.0641*(t2205*t2367 + t2201*t2386) - 0.295*(-1.*t2201*t2205 + t2367*t2386) + var1[2];
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
