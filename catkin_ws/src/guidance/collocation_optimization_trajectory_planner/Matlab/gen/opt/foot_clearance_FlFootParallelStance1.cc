/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:29:29 GMT+01:00
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
  double t594;
  double t111;
  double t693;
  double t492;
  double t782;
  double t851;
  double t884;
  double t909;
  double t964;
  double t1031;
  double t537;
  double t783;
  double t807;
  double t1087;
  double t1117;
  double t1225;
  double t1384;
  double t1399;
  double t1403;
  double t1443;
  double t1644;
  double t1706;
  double t1362;
  double t1364;
  double t1368;
  double t1498;
  double t1517;
  double t1531;
  double t1798;
  double t1801;
  double t1802;
  double t1818;
  double t1709;
  double t1731;
  double t1734;
  double t1768;
  double t1777;
  double t1782;
  double t2040;
  double t1984;
  double t1996;
  double t2000;
  double t2005;
  double t1862;
  double t1864;
  double t1875;
  double t1883;
  double t1886;
  double t1906;
  t594 = Cos(var1[3]);
  t111 = Cos(var1[5]);
  t693 = Sin(var1[4]);
  t492 = Sin(var1[3]);
  t782 = Sin(var1[5]);
  t851 = Cos(var1[6]);
  t884 = -1.*t851;
  t909 = 1. + t884;
  t964 = 0.15121*t909;
  t1031 = Sin(var1[6]);
  t537 = t111*t492;
  t783 = t594*t693*t782;
  t807 = t537 + t783;
  t1087 = -1.*t594*t111*t693;
  t1117 = t492*t782;
  t1225 = t1087 + t1117;
  t1384 = Cos(var1[7]);
  t1399 = -1.*t1384;
  t1403 = 1. + t1399;
  t1443 = Sin(var1[7]);
  t1644 = Cos(var1[4]);
  t1706 = -1. + t1384;
  t1362 = t851*t807;
  t1364 = -1.*t1225*t1031;
  t1368 = t1362 + t1364;
  t1498 = t851*t1225;
  t1517 = t807*t1031;
  t1531 = t1498 + t1517;
  t1798 = Cos(var1[8]);
  t1801 = -1.*t1798;
  t1802 = 1. + t1801;
  t1818 = Sin(var1[8]);
  t1709 = 4.e-6*t594*t1644*t1706;
  t1731 = 1.6e-11*t1706;
  t1734 = 1. + t1731;
  t1768 = t1734*t1368;
  t1777 = 4.e-6*t1531*t1443;
  t1782 = t1709 + t1768 + t1777;
  t2040 = -1. + t1798;
  t1984 = t594*t1644*t1384;
  t1996 = 4.e-6*t1706*t1368;
  t2000 = t1531*t1443;
  t2005 = t1984 + t1996 + t2000;
  t1862 = -1.000000000016*t1403;
  t1864 = 1. + t1862;
  t1875 = t1864*t1531;
  t1883 = -1.*t594*t1644*t1443;
  t1886 = -4.e-6*t1368*t1443;
  t1906 = t1875 + t1883 + t1886;
  p_output1[0]=(0.281210000008499*t1403 + 0.03874900000062*t1443)*t1531 + (0.503210000016051*t1802 + 0.03874900000062*t1818)*t1906 + 0.80321*(-4.e-6*t1782*t1818 + (1. - 1.000000000016*t1802)*t1906 - 1.*t1818*t2005) - 0.03875*(t1818*t1906 + t1798*t2005 + 4.e-6*t1782*t2040) + 0.14871*(4.e-6*t1818*t1906 + t1782*(1. + 1.6e-11*t2040) + 4.e-6*t2005*t2040) + t807*(-0.15121*t1031 + t964) + t1225*(0.15121*t1031 + t964) + var1[2] + t1368*(-1.5499600000248e-7*t1403 + 1.124840000016e-6*t1443 - 1.2484e-7*var1[7]) + t1644*t594*(-0.03874900000062*t1403 + 0.281210000004*t1443 + 4.9936e-13*var1[7]) + t1782*(-1.5499600000248e-7*t1802 + 2.012840000032e-6*t1818 - 1.284e-8*var1[8]) + t2005*(-0.03874900000062*t1802 + 0.503210000008*t1818 + 5.136e-14*var1[8]);
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

#include "foot_clearance_FlFootParallelStance1.hh"

namespace ParallelStance1
{

void foot_clearance_FlFootParallelStance1_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
