/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:27:37 GMT+01:00
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
  double t336;
  double t32;
  double t348;
  double t43;
  double t380;
  double t438;
  double t440;
  double t467;
  double t470;
  double t502;
  double t255;
  double t383;
  double t389;
  double t569;
  double t584;
  double t593;
  double t692;
  double t699;
  double t702;
  double t705;
  double t736;
  double t878;
  double t630;
  double t665;
  double t684;
  double t713;
  double t716;
  double t719;
  double t1035;
  double t1046;
  double t1072;
  double t1097;
  double t914;
  double t957;
  double t958;
  double t978;
  double t991;
  double t1006;
  double t1263;
  double t1230;
  double t1233;
  double t1235;
  double t1240;
  double t1171;
  double t1180;
  double t1192;
  double t1193;
  double t1208;
  double t1210;
  t336 = Cos(var1[3]);
  t32 = Cos(var1[5]);
  t348 = Sin(var1[4]);
  t43 = Sin(var1[3]);
  t380 = Sin(var1[5]);
  t438 = Cos(var1[6]);
  t440 = -1.*t438;
  t467 = 1. + t440;
  t470 = 0.15121*t467;
  t502 = Sin(var1[6]);
  t255 = t32*t43;
  t383 = t336*t348*t380;
  t389 = t255 + t383;
  t569 = -1.*t336*t32*t348;
  t584 = t43*t380;
  t593 = t569 + t584;
  t692 = Cos(var1[7]);
  t699 = -1.*t692;
  t702 = 1. + t699;
  t705 = Sin(var1[7]);
  t736 = Cos(var1[4]);
  t878 = -1. + t692;
  t630 = t438*t389;
  t665 = -1.*t593*t502;
  t684 = t630 + t665;
  t713 = t438*t593;
  t716 = t389*t502;
  t719 = t713 + t716;
  t1035 = Cos(var1[8]);
  t1046 = -1.*t1035;
  t1072 = 1. + t1046;
  t1097 = Sin(var1[8]);
  t914 = 4.e-6*t336*t736*t878;
  t957 = 1.6e-11*t878;
  t958 = 1. + t957;
  t978 = t958*t684;
  t991 = 4.e-6*t719*t705;
  t1006 = t914 + t978 + t991;
  t1263 = -1. + t1035;
  t1230 = t336*t736*t692;
  t1233 = 4.e-6*t878*t684;
  t1235 = t719*t705;
  t1240 = t1230 + t1233 + t1235;
  t1171 = -1.000000000016*t702;
  t1180 = 1. + t1171;
  t1192 = t1180*t719;
  t1193 = -1.*t336*t736*t705;
  t1208 = -4.e-6*t684*t705;
  t1210 = t1192 + t1193 + t1208;
  p_output1[0]=(0.503210000016051*t1072 + 0.03874900000062*t1097)*t1210 + 0.80321*(-4.e-6*t1006*t1097 + (1. - 1.000000000016*t1072)*t1210 - 1.*t1097*t1240) - 0.03875*(t1097*t1210 + t1035*t1240 + 4.e-6*t1006*t1263) + 0.14871*(4.e-6*t1097*t1210 + t1006*(1. + 1.6e-11*t1263) + 4.e-6*t1240*t1263) + t389*(t470 - 0.15121*t502) + (t470 + 0.15121*t502)*t593 + (0.281210000008499*t702 + 0.03874900000062*t705)*t719 + var1[2] + t684*(-1.5499600000248e-7*t702 + 1.124840000016e-6*t705 - 1.2484e-7*var1[7]) + t336*t736*(-0.03874900000062*t702 + 0.281210000004*t705 + 4.9936e-13*var1[7]) + t1006*(-1.5499600000248e-7*t1072 + 2.012840000032e-6*t1097 - 1.284e-8*var1[8]) + t1240*(-0.03874900000062*t1072 + 0.503210000008*t1097 + 5.136e-14*var1[8]);
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

#include "foot_clearance_FlFootDiagonalStance1.hh"

namespace DiagonalStance1
{

void foot_clearance_FlFootDiagonalStance1_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
