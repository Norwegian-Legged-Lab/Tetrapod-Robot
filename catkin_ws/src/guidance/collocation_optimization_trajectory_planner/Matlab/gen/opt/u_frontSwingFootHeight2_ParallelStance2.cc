/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:16:03 GMT+01:00
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
  double t546;
  double t333;
  double t741;
  double t787;
  double t860;
  double t901;
  double t947;
  double t970;
  double t997;
  double t988;
  double t1022;
  double t547;
  double t639;
  double t671;
  double t715;
  double t993;
  double t1025;
  double t1043;
  double t1097;
  double t1106;
  double t1159;
  double t362;
  double t1347;
  double t1355;
  double t1368;
  double t1525;
  double t1540;
  double t1569;
  double t1594;
  double t1628;
  double t1718;
  double t1792;
  double t2100;
  double t1849;
  double t1858;
  double t1945;
  double t1979;
  double t2036;
  double t2057;
  double t2160;
  double t2162;
  double t2165;
  double t2206;
  double t2329;
  double t2370;
  double t2375;
  double t2381;
  double t2391;
  double t2397;
  t546 = Cos(var1[10]);
  t333 = Cos(var1[3]);
  t741 = Cos(var1[9]);
  t787 = -1.*t741;
  t860 = 1. + t787;
  t901 = Sin(var1[9]);
  t947 = -0.15121*t901;
  t970 = Cos(var1[5]);
  t997 = Sin(var1[3]);
  t988 = Sin(var1[4]);
  t1022 = Sin(var1[5]);
  t547 = -1.*t546;
  t639 = 1. + t547;
  t671 = -1. + t546;
  t715 = Sin(var1[10]);
  t993 = -1.*t333*t970*t988;
  t1025 = t997*t1022;
  t1043 = t993 + t1025;
  t1097 = t970*t997;
  t1106 = t333*t988*t1022;
  t1159 = t1097 + t1106;
  t362 = Cos(var1[4]);
  t1347 = -1.*t901*t1043;
  t1355 = t741*t1159;
  t1368 = t1347 + t1355;
  t1525 = t741*t1043;
  t1540 = t901*t1159;
  t1569 = t1525 + t1540;
  t1594 = Cos(var1[11]);
  t1628 = -1.*t1594;
  t1718 = 1. + t1628;
  t1792 = Sin(var1[11]);
  t2100 = -1. + t1594;
  t1849 = t333*t362*t715;
  t1858 = -4.e-6*t715*t1368;
  t1945 = -1.000000000016*t639;
  t1979 = 1. + t1945;
  t2036 = t1979*t1569;
  t2057 = t1849 + t1858 + t2036;
  t2160 = t546*t333*t362;
  t2162 = 4.e-6*t639*t1368;
  t2165 = -1.*t715*t1569;
  t2206 = t2160 + t2162 + t2165;
  t2329 = 4.e-6*t639*t333*t362;
  t2370 = 1.6e-11*t671;
  t2375 = 1. + t2370;
  t2381 = t2375*t1368;
  t2391 = 4.e-6*t715*t1569;
  t2397 = t2329 + t2381 + t2391;
  p_output1[0]=(0.50315000001605*t1718 - 0.0398890000006382*t1792)*t2057 - 0.041195*(-1.*t1792*t2057 + t1594*t2206 + 4.e-6*t1718*t2397) + 0.803147*((1. - 1.000000000016*t1718)*t2057 + t1792*t2206 - 4.e-6*t1792*t2397) - 0.14871*(4.e-6*t1792*t2057 + 4.e-6*t1718*t2206 + (1. + 1.6e-11*t2100)*t2397) + t1569*(0.281210000008499*t639 - 0.03874900000062*t715) + t1159*(-0.15121*t860 + t947) + t1043*(0.15121*t860 + t947) + var1[2] + t1368*(2.479936e-18*t639 - 1.54996e-7*t671 + 1.124840000016e-6*t715 - 1.2484e-7*var1[10]) + t333*t362*(-0.038749*t639 + 6.19984e-13*t671 - 0.281210000004*t715 - 4.9936e-13*var1[10]) + t2397*(2.552896e-18*t1718 + 2.012600000032e-6*t1792 - 1.59556e-7*t2100 - 1.26e-8*var1[11]) + t2206*(-0.039889*t1718 - 0.503150000008*t1792 + 6.38224e-13*t2100 - 5.04e-14*var1[11]);
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
