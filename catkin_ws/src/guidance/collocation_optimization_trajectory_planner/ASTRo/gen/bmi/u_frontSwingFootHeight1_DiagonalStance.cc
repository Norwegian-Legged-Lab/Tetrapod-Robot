/*
 * Automatically Generated from Mathematica.
 * Wed 6 Apr 2022 10:59:39 GMT+02:00
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
  double t1502;
  double t1887;
  double t1223;
  double t1816;
  double t1915;
  double t1980;
  double t2051;
  double t2056;
  double t2171;
  double t2185;
  double t2186;
  double t326;
  double t1885;
  double t1916;
  double t1917;
  double t2198;
  double t2199;
  double t2200;
  double t2202;
  double t2360;
  double t2371;
  double t2374;
  double t2375;
  double t2391;
  double t2401;
  double t2405;
  double t2406;
  t1502 = Cos(var1[5]);
  t1887 = Sin(var1[3]);
  t1223 = Cos(var1[3]);
  t1816 = Sin(var1[4]);
  t1915 = Sin(var1[5]);
  t1980 = Cos(var1[6]);
  t2051 = t1502*t1887;
  t2056 = t1223*t1816*t1915;
  t2171 = t2051 + t2056;
  t2185 = Cos(var1[4]);
  t2186 = Sin(var1[6]);
  t326 = Cos(var1[7]);
  t1885 = -1.*t1223*t1502*t1816;
  t1916 = t1887*t1915;
  t1917 = t1885 + t1916;
  t2198 = t1223*t2185*t1980;
  t2199 = -1.*t2171*t2186;
  t2200 = t2198 + t2199;
  t2202 = Sin(var1[7]);
  t2360 = Cos(var1[8]);
  t2371 = t326*t1917;
  t2374 = t2200*t2202;
  t2375 = t2371 + t2374;
  t2391 = t326*t2200;
  t2401 = -1.*t1917*t2202;
  t2405 = t2391 + t2401;
  t2406 = Sin(var1[8]);
  p_output1[0]=0.1575*(1. - 1.*t1980)*t2171 - 0.1575*t1223*t2185*t2186 + 0.2255*(t1980*t2171 + t1223*t2185*t2186) - 0.325*t2200*t2202 + 0.075*(1. - 1.*t2360)*t2375 + 0.075*t2405*t2406 - 0.0641*(t2360*t2405 + t2375*t2406) + 0.355*(t2360*t2375 - 1.*t2405*t2406) + 0.325*t1917*(1. - 1.*t326) + var1[2];
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

#include "u_frontSwingFootHeight1_DiagonalStance.hh"

namespace SymFunction
{

void u_frontSwingFootHeight1_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
