/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:53 GMT+02:00
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
  double t532;
  double t6936;
  double t6957;
  double t6941;
  double t6959;
  double t2344;
  double t3864;
  double t6969;
  double t6973;
  double t6982;
  double t6983;
  double t7005;
  double t6942;
  double t6961;
  double t6964;
  double t6775;
  double t7011;
  double t7013;
  double t7014;
  double t7019;
  double t7023;
  double t7026;
  double t7032;
  double t7034;
  double t7045;
  double t7051;
  double t7052;
  t532 = Cos(var1[3]);
  t6936 = Cos(var1[5]);
  t6957 = Sin(var1[3]);
  t6941 = Sin(var1[4]);
  t6959 = Sin(var1[5]);
  t2344 = Cos(var1[4]);
  t3864 = Sin(var1[9]);
  t6969 = Cos(var1[9]);
  t6973 = t6936*t6957;
  t6982 = t532*t6941*t6959;
  t6983 = t6973 + t6982;
  t7005 = Sin(var1[10]);
  t6942 = -1.*t532*t6936*t6941;
  t6961 = t6957*t6959;
  t6964 = t6942 + t6961;
  t6775 = Cos(var1[10]);
  t7011 = t6969*t532*t2344;
  t7013 = -1.*t3864*t6983;
  t7014 = t7011 + t7013;
  t7019 = Sin(var1[11]);
  t7023 = -1.*t7005*t6964;
  t7026 = t6775*t7014;
  t7032 = t7023 + t7026;
  t7034 = Cos(var1[11]);
  t7045 = t6775*t6964;
  t7051 = t7005*t7014;
  t7052 = t7045 + t7051;
  p_output1[0]=-0.1575*t2344*t3864*t532 - 0.325*(1. - 1.*t6775)*t6964 + 0.1575*(1. - 1.*t6969)*t6983 + 0.2255*(t2344*t3864*t532 + t6969*t6983) + 0.325*t7005*t7014 - 0.575*t7019*t7032 - 0.575*(1. - 1.*t7034)*t7052 - 0.0641*(t7032*t7034 + t7019*t7052) - 0.295*(-1.*t7019*t7032 + t7034*t7052) + var1[2];
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

#include "u_rearSwingFootHeightflat_DiagonalStance2.hh"

namespace SymFunction
{

void u_rearSwingFootHeightflat_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
