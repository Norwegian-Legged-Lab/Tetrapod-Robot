/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:04:53 GMT+02:00
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
  double t1830;
  double t1896;
  double t1914;
  double t1938;
  double t1961;
  double t1974;
  double t1992;
  double t2000;
  double t1994;
  double t2003;
  double t1997;
  double t2005;
  double t2007;
  double t2019;
  double t2022;
  double t2030;
  double t1832;
  double t1869;
  double t2061;
  double t2074;
  double t2076;
  double t2078;
  double t2084;
  double t2096;
  double t2097;
  double t2098;
  double t2101;
  double t2103;
  double t2106;
  double t2109;
  t1830 = Cos(var1[3]);
  t1896 = Cos(var1[9]);
  t1914 = -1.*t1896;
  t1938 = 1. + t1914;
  t1961 = Sin(var1[9]);
  t1974 = 0.15121*t1961;
  t1992 = Cos(var1[5]);
  t2000 = Sin(var1[3]);
  t1994 = Sin(var1[4]);
  t2003 = Sin(var1[5]);
  t1997 = -1.*t1830*t1992*t1994;
  t2005 = t2000*t2003;
  t2007 = t1997 + t2005;
  t2019 = t1992*t2000;
  t2022 = t1830*t1994*t2003;
  t2030 = t2019 + t2022;
  t1832 = Cos(var1[4]);
  t1869 = Sin(var1[10]);
  t2061 = Cos(var1[10]);
  t2074 = t1896*t2007;
  t2076 = t1961*t2030;
  t2078 = t2074 + t2076;
  t2084 = Cos(var1[11]);
  t2096 = t1830*t1832*t1869;
  t2097 = t2061*t2078;
  t2098 = t2096 + t2097;
  t2101 = Sin(var1[11]);
  t2103 = t2061*t1830*t1832;
  t2106 = -1.*t1869*t2078;
  t2109 = t2103 + t2106;
  p_output1[0]=0.28121*t1830*t1832*t1869 + (-0.15121*t1938 + t1974)*t2007 + (0.15121*t1938 + t1974)*t2030 + 0.15121*(-1.*t1961*t2007 + t1896*t2030) - 0.28121*(1. - 1.*t2061)*t2078 - 0.50321*(1. - 1.*t2084)*t2098 - 0.50321*t2101*t2109 - 0.19821*(t2084*t2098 - 1.*t2101*t2109) + var1[2];
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
