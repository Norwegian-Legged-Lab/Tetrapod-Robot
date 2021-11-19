/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:29:27 GMT+01:00
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
  double t231;
  double t237;
  double t274;
  double t363;
  double t30;
  double t635;
  double t639;
  double t689;
  double t699;
  double t724;
  double t741;
  double t782;
  double t742;
  double t783;
  double t333;
  double t764;
  double t787;
  double t788;
  double t812;
  double t813;
  double t815;
  double t524;
  double t847;
  double t1121;
  double t1136;
  double t1146;
  double t1216;
  double t84;
  double t942;
  double t995;
  double t858;
  double t860;
  double t884;
  double t1048;
  double t1051;
  double t1076;
  double t1314;
  double t836;
  double t1363;
  double t849;
  double t1396;
  double t1214;
  double t1455;
  double t1459;
  double t381;
  double t1358;
  double t1360;
  double t1362;
  double t1364;
  double t1368;
  double t1369;
  double t1370;
  double t1373;
  double t1377;
  double t1525;
  double t1463;
  double t1474;
  double t1479;
  double t1481;
  double t1482;
  double t1495;
  double t1502;
  double t1509;
  double t1565;
  double t1567;
  double t1588;
  double t1595;
  double t1604;
  double t1616;
  double t1620;
  double t1627;
  double t1342;
  double t1629;
  double t1258;
  double t1701;
  double t1415;
  double t1639;
  double t1642;
  double t1397;
  t231 = Cos(var1[13]);
  t237 = -1.*t231;
  t274 = 1. + t237;
  t363 = Sin(var1[13]);
  t30 = Cos(var1[3]);
  t635 = Cos(var1[12]);
  t639 = -1.*t635;
  t689 = 1. + t639;
  t699 = Sin(var1[12]);
  t724 = 0.15121*t699;
  t741 = Cos(var1[5]);
  t782 = Sin(var1[3]);
  t742 = Sin(var1[4]);
  t783 = Sin(var1[5]);
  t333 = 4.e-6*t274;
  t764 = -1.*t30*t741*t742;
  t787 = t782*t783;
  t788 = t764 + t787;
  t812 = t741*t782;
  t813 = t30*t742*t783;
  t815 = t812 + t813;
  t524 = -2.8e-11*t274;
  t847 = 7.e-6*t274;
  t1121 = Cos(var1[14]);
  t1136 = -1.*t1121;
  t1146 = 1. + t1136;
  t1216 = Sin(var1[14]);
  t84 = Cos(var1[4]);
  t942 = -1.*t363;
  t995 = -4.e-6*t363;
  t858 = -1.*t699*t788;
  t860 = t635*t815;
  t884 = t858 + t860;
  t1048 = t635*t788;
  t1051 = t699*t815;
  t1076 = t1048 + t1051;
  t1314 = 7.e-6*t1146;
  t836 = -7.e-6*t363;
  t1363 = -7.e-6*t274;
  t849 = 4.e-6*t363;
  t1396 = 4.e-6*t1146;
  t1214 = -2.8e-11*t1146;
  t1455 = -1. + t231;
  t1459 = 4.e-6*t1455;
  t381 = 7.e-6*t363;
  t1358 = 2.8e-11*t274;
  t1360 = t1358 + t942;
  t1362 = t30*t84*t1360;
  t1364 = t1363 + t995;
  t1368 = t1364*t884;
  t1369 = -1.000000000016*t274;
  t1370 = 1. + t1369;
  t1373 = t1370*t1076;
  t1377 = t1362 + t1368 + t1373;
  t1525 = 7.e-6*t1216;
  t1463 = t1459 + t836;
  t1474 = t30*t84*t1463;
  t1479 = -6.5e-11*t274;
  t1481 = 1. + t1479;
  t1482 = t1481*t884;
  t1495 = t1363 + t849;
  t1502 = t1495*t1076;
  t1509 = t1474 + t1482 + t1502;
  t1565 = -1.000000000049*t274;
  t1567 = 1. + t1565;
  t1588 = t1567*t30*t84;
  t1595 = t1459 + t381;
  t1604 = t1595*t884;
  t1616 = t1358 + t363;
  t1620 = t1616*t1076;
  t1627 = t1588 + t1604 + t1620;
  t1342 = -4.e-6*t1216;
  t1629 = 2.8e-11*t1146;
  t1258 = -1.*t1216;
  t1701 = -7.e-6*t1146;
  t1415 = 4.e-6*t1216;
  t1639 = -1. + t1121;
  t1642 = 4.e-6*t1639;
  t1397 = -7.e-6*t1216;
  p_output1[0]=-0.038924*((1. - 1.000000000049*t1146)*t1627 + t1377*(t1216 + t1629) + t1509*(t1525 + t1642)) - 0.80315*((1. - 1.000000000016*t1146)*t1377 + t1627*(t1258 + t1629) + t1509*(t1342 + t1701)) + 0.148705*((1. - 6.5e-11*t1146)*t1509 + t1627*(t1397 + t1642) + t1377*(t1415 + t1701)) + (-0.15121*t689 + t724)*t788 + (0.15121*t689 + t724)*t815 + var1[2] + t884*(-1.38024835e-16*t274 - 0.038748999993*(t333 + t836) - 0.281209000004*(t847 + t849) - 1.4640699999999997e-7*var1[13]) + t30*t84*(-0.0387489999948987*t274 - 2.123459e-6*(t333 + t381) - 0.281209000004*(t363 + t524) + 5.856279999999999e-13*var1[13]) + t1076*(-0.28120900000849935*t274 - 0.038748999993*(t524 + t942) - 2.123459e-6*(t847 + t995) + 1.0248489999999998e-12*var1[13]) + t1509*(-2.3905277499999995e-16*t1146 - 0.038922999986*(t1396 + t1397) - 0.503149000008*(t1314 + t1415) - 2.598649999999999e-7*var1[14]) + t1627*(-0.03892299998790722*t1146 - 0.503149000008*(t1214 + t1216) - 3.6777349999999994e-6*(t1396 + t1525) + 1.0394599999999997e-12*var1[14]) + t1377*(-0.5031490000160505*t1146 - 0.038922999986*(t1214 + t1258) - 3.6777349999999994e-6*(t1314 + t1342) + 1.8190549999999993e-12*var1[14]);
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

#include "foot_clearance_RlFootParallelStance1.hh"

namespace ParallelStance1
{

void foot_clearance_RlFootParallelStance1_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
