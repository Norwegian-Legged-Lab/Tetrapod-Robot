/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 23:17:05 GMT+01:00
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
  double t310;
  double t316;
  double t328;
  double t854;
  double t1203;
  double t955;
  double t985;
  double t1250;
  double t398;
  double t1040;
  double t1350;
  double t1362;
  double t1438;
  double t1521;
  double t1581;
  double t1607;
  double t731;
  double t844;
  double t1790;
  double t1892;
  double t1448;
  double t1486;
  double t1879;
  double t1925;
  double t1939;
  double t1964;
  double t1968;
  double t1969;
  double t1623;
  double t1628;
  double t1947;
  double t1972;
  double t1984;
  double t1649;
  double t1707;
  double t2023;
  double t2036;
  double t2039;
  double t2323;
  double t2434;
  double t2514;
  double t2528;
  double t2530;
  double t2549;
  double t2518;
  double t2565;
  double t2615;
  double t2638;
  double t2644;
  double t2688;
  t310 = Cos(var1[10]);
  t316 = -1.*t310;
  t328 = 1. + t316;
  t854 = Cos(var1[4]);
  t1203 = Cos(var1[9]);
  t955 = Cos(var1[5]);
  t985 = Sin(var1[9]);
  t1250 = Sin(var1[5]);
  t398 = Sin(var1[4]);
  t1040 = -1.*t854*t955*t985;
  t1350 = -1.*t1203*t854*t1250;
  t1362 = t1040 + t1350;
  t1438 = Sin(var1[10]);
  t1521 = t1203*t854*t955;
  t1581 = -1.*t854*t985*t1250;
  t1607 = t1521 + t1581;
  t731 = -1.6e-11*t328;
  t844 = 1. + t731;
  t1790 = Sin(var1[3]);
  t1892 = Cos(var1[3]);
  t1448 = 4.e-6*t1438;
  t1486 = 0. + t1448;
  t1879 = t955*t1790*t398;
  t1925 = t1892*t1250;
  t1939 = t1879 + t1925;
  t1964 = t1892*t955;
  t1968 = -1.*t1790*t398*t1250;
  t1969 = t1964 + t1968;
  t1623 = -1.*t328;
  t1628 = 1. + t1623;
  t1947 = -1.*t985*t1939;
  t1972 = t1203*t1969;
  t1984 = t1947 + t1972;
  t1649 = -1.*t1438;
  t1707 = 0. + t1649;
  t2023 = t1203*t1939;
  t2036 = t985*t1969;
  t2039 = t2023 + t2036;
  t2323 = -1.*t1892*t955*t398;
  t2434 = t1790*t1250;
  t2514 = t2323 + t2434;
  t2528 = t955*t1790;
  t2530 = t1892*t398*t1250;
  t2549 = t2528 + t2530;
  t2518 = -1.*t985*t2514;
  t2565 = t1203*t2549;
  t2615 = t2518 + t2565;
  t2638 = t1203*t2514;
  t2644 = t985*t2549;
  t2688 = t2638 + t2644;
  p_output1[0]=-1.*t1486*t1607 - 4.e-6*t328*t398 - 4.e-6*(t1607*t1707 + 4.e-6*t1362*t328 + t1628*t398) - 1.*t1362*t844;
  p_output1[1]=-1.*t1486*t2039 - 1.*t1984*t844 + 4.e-6*t1790*t328*t854 - 4.e-6*(t1707*t2039 + 4.e-6*t1984*t328 - 1.*t1628*t1790*t854);
  p_output1[2]=-1.*t1486*t2688 - 1.*t2615*t844 - 4.e-6*t1892*t328*t854 - 4.e-6*(t1707*t2688 + 4.e-6*t2615*t328 + t1628*t1892*t854);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Joint_fr_hip_pitch_axis.hh"

namespace SymFunction
{

void Joint_fr_hip_pitch_axis_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
