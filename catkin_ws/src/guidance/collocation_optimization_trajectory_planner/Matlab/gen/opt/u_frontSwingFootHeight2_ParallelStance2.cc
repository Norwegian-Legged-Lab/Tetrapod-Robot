/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:33:00 GMT+01:00
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
  double t826;
  double t152;
  double t1063;
  double t1070;
  double t1073;
  double t1084;
  double t1102;
  double t1118;
  double t1157;
  double t1133;
  double t1160;
  double t833;
  double t884;
  double t901;
  double t934;
  double t1151;
  double t1247;
  double t1263;
  double t1351;
  double t1353;
  double t1354;
  double t781;
  double t1558;
  double t1565;
  double t1566;
  double t1640;
  double t1734;
  double t1741;
  double t1771;
  double t1778;
  double t1782;
  double t1822;
  double t1916;
  double t1842;
  double t1852;
  double t1853;
  double t1861;
  double t1863;
  double t1873;
  double t1963;
  double t1967;
  double t1983;
  double t2007;
  double t2158;
  double t2171;
  double t2179;
  double t2198;
  double t2202;
  double t2207;
  t826 = Cos(var1[10]);
  t152 = Cos(var1[3]);
  t1063 = Cos(var1[9]);
  t1070 = -1.*t1063;
  t1073 = 1. + t1070;
  t1084 = Sin(var1[9]);
  t1102 = -0.15121*t1084;
  t1118 = Cos(var1[5]);
  t1157 = Sin(var1[3]);
  t1133 = Sin(var1[4]);
  t1160 = Sin(var1[5]);
  t833 = -1.*t826;
  t884 = 1. + t833;
  t901 = -1. + t826;
  t934 = Sin(var1[10]);
  t1151 = -1.*t152*t1118*t1133;
  t1247 = t1157*t1160;
  t1263 = t1151 + t1247;
  t1351 = t1118*t1157;
  t1353 = t152*t1133*t1160;
  t1354 = t1351 + t1353;
  t781 = Cos(var1[4]);
  t1558 = -1.*t1084*t1263;
  t1565 = t1063*t1354;
  t1566 = t1558 + t1565;
  t1640 = t1063*t1263;
  t1734 = t1084*t1354;
  t1741 = t1640 + t1734;
  t1771 = Cos(var1[11]);
  t1778 = -1.*t1771;
  t1782 = 1. + t1778;
  t1822 = Sin(var1[11]);
  t1916 = -1. + t1771;
  t1842 = t152*t781*t934;
  t1852 = -4.e-6*t934*t1566;
  t1853 = -1.000000000016*t884;
  t1861 = 1. + t1853;
  t1863 = t1861*t1741;
  t1873 = t1842 + t1852 + t1863;
  t1963 = t826*t152*t781;
  t1967 = 4.e-6*t884*t1566;
  t1983 = -1.*t934*t1741;
  t2007 = t1963 + t1967 + t1983;
  t2158 = 4.e-6*t884*t152*t781;
  t2171 = 1.6e-11*t901;
  t2179 = 1. + t2171;
  t2198 = t2179*t1566;
  t2202 = 4.e-6*t934*t1741;
  t2207 = t2158 + t2198 + t2202;
  p_output1[0]=(0.15121*t1073 + t1102)*t1263 + (-0.15121*t1073 + t1102)*t1354 + (0.50315000001605*t1782 - 0.0398890000006382*t1822)*t1873 - 0.041195*(-1.*t1822*t1873 + t1771*t2007 + 4.e-6*t1782*t2207) + 0.803147*((1. - 1.000000000016*t1782)*t1873 + t1822*t2007 - 4.e-6*t1822*t2207) - 0.14871*(4.e-6*t1822*t1873 + 4.e-6*t1782*t2007 + (1. + 1.6e-11*t1916)*t2207) + t1741*(0.281210000008499*t884 - 0.03874900000062*t934) + var1[2] + t1566*(2.479936e-18*t884 - 1.54996e-7*t901 + 1.124840000016e-6*t934 - 1.2484e-7*var1[10]) + t152*t781*(-0.038749*t884 + 6.19984e-13*t901 - 0.281210000004*t934 - 4.9936e-13*var1[10]) + t2207*(2.552896e-18*t1782 + 2.012600000032e-6*t1822 - 1.59556e-7*t1916 - 1.26e-8*var1[11]) + t2007*(-0.039889*t1782 - 0.503150000008*t1822 + 6.38224e-13*t1916 - 5.04e-14*var1[11]);
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

#include "u_frontSwingFootHeight2_ParallelStance2.hh"

namespace ParallelStance2
{

void u_frontSwingFootHeight2_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
