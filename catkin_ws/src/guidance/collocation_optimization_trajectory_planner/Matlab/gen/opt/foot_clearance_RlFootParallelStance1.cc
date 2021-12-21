/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:12:02 GMT+01:00
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
  double t232;
  double t382;
  double t431;
  double t479;
  double t54;
  double t663;
  double t689;
  double t695;
  double t727;
  double t743;
  double t749;
  double t758;
  double t750;
  double t760;
  double t444;
  double t754;
  double t763;
  double t764;
  double t782;
  double t783;
  double t787;
  double t561;
  double t953;
  double t1271;
  double t1273;
  double t1274;
  double t1295;
  double t118;
  double t1130;
  double t1165;
  double t1058;
  double t1064;
  double t1081;
  double t1238;
  double t1257;
  double t1258;
  double t1313;
  double t833;
  double t1359;
  double t961;
  double t1413;
  double t1287;
  double t1450;
  double t1454;
  double t488;
  double t1332;
  double t1348;
  double t1350;
  double t1364;
  double t1377;
  double t1380;
  double t1387;
  double t1396;
  double t1399;
  double t1509;
  double t1467;
  double t1471;
  double t1481;
  double t1483;
  double t1486;
  double t1491;
  double t1493;
  double t1499;
  double t1531;
  double t1532;
  double t1534;
  double t1535;
  double t1536;
  double t1539;
  double t1542;
  double t1545;
  double t1316;
  double t1547;
  double t1296;
  double t1619;
  double t1435;
  double t1554;
  double t1555;
  double t1417;
  t232 = Cos(var1[13]);
  t382 = -1.*t232;
  t431 = 1. + t382;
  t479 = Sin(var1[13]);
  t54 = Cos(var1[3]);
  t663 = Cos(var1[12]);
  t689 = -1.*t663;
  t695 = 1. + t689;
  t727 = Sin(var1[12]);
  t743 = 0.15121*t727;
  t749 = Cos(var1[5]);
  t758 = Sin(var1[3]);
  t750 = Sin(var1[4]);
  t760 = Sin(var1[5]);
  t444 = 4.e-6*t431;
  t754 = -1.*t54*t749*t750;
  t763 = t758*t760;
  t764 = t754 + t763;
  t782 = t749*t758;
  t783 = t54*t750*t760;
  t787 = t782 + t783;
  t561 = -2.8e-11*t431;
  t953 = 7.e-6*t431;
  t1271 = Cos(var1[14]);
  t1273 = -1.*t1271;
  t1274 = 1. + t1273;
  t1295 = Sin(var1[14]);
  t118 = Cos(var1[4]);
  t1130 = -1.*t479;
  t1165 = -4.e-6*t479;
  t1058 = -1.*t727*t764;
  t1064 = t663*t787;
  t1081 = t1058 + t1064;
  t1238 = t663*t764;
  t1257 = t727*t787;
  t1258 = t1238 + t1257;
  t1313 = 7.e-6*t1274;
  t833 = -7.e-6*t479;
  t1359 = -7.e-6*t431;
  t961 = 4.e-6*t479;
  t1413 = 4.e-6*t1274;
  t1287 = -2.8e-11*t1274;
  t1450 = -1. + t232;
  t1454 = 4.e-6*t1450;
  t488 = 7.e-6*t479;
  t1332 = 2.8e-11*t431;
  t1348 = t1332 + t1130;
  t1350 = t54*t118*t1348;
  t1364 = t1359 + t1165;
  t1377 = t1364*t1081;
  t1380 = -1.000000000016*t431;
  t1387 = 1. + t1380;
  t1396 = t1387*t1258;
  t1399 = t1350 + t1377 + t1396;
  t1509 = 7.e-6*t1295;
  t1467 = t1454 + t833;
  t1471 = t54*t118*t1467;
  t1481 = -6.5e-11*t431;
  t1483 = 1. + t1481;
  t1486 = t1483*t1081;
  t1491 = t1359 + t961;
  t1493 = t1491*t1258;
  t1499 = t1471 + t1486 + t1493;
  t1531 = -1.000000000049*t431;
  t1532 = 1. + t1531;
  t1534 = t1532*t54*t118;
  t1535 = t1454 + t488;
  t1536 = t1535*t1081;
  t1539 = t1332 + t479;
  t1542 = t1539*t1258;
  t1545 = t1534 + t1536 + t1542;
  t1316 = -4.e-6*t1295;
  t1547 = 2.8e-11*t1274;
  t1296 = -1.*t1295;
  t1619 = -7.e-6*t1274;
  t1435 = 4.e-6*t1295;
  t1554 = -1. + t1271;
  t1555 = 4.e-6*t1554;
  t1417 = -7.e-6*t1295;
  p_output1[0]=-0.038924*((1. - 1.000000000049*t1274)*t1545 + t1399*(t1295 + t1547) + t1499*(t1509 + t1555)) - 0.80315*((1. - 1.000000000016*t1274)*t1399 + t1545*(t1296 + t1547) + t1499*(t1316 + t1619)) + 0.148705*((1. - 6.5e-11*t1274)*t1499 + t1545*(t1417 + t1555) + t1399*(t1435 + t1619)) + (-0.15121*t695 + t743)*t764 + (0.15121*t695 + t743)*t787 + var1[2] + t1081*(-1.38024835e-16*t431 - 0.038748999993*(t444 + t833) - 0.281209000004*(t953 + t961) - 1.4640699999999997e-7*var1[13]) + t118*t54*(-0.0387489999948987*t431 - 2.123459e-6*(t444 + t488) - 0.281209000004*(t479 + t561) + 5.856279999999999e-13*var1[13]) + t1258*(-0.28120900000849935*t431 - 0.038748999993*(t1130 + t561) - 2.123459e-6*(t1165 + t953) + 1.0248489999999998e-12*var1[13]) + t1499*(-2.3905277499999995e-16*t1274 - 0.038922999986*(t1413 + t1417) - 0.503149000008*(t1313 + t1435) - 2.598649999999999e-7*var1[14]) + t1545*(-0.03892299998790722*t1274 - 0.503149000008*(t1287 + t1295) - 3.6777349999999994e-6*(t1413 + t1509) + 1.0394599999999997e-12*var1[14]) + t1399*(-0.5031490000160505*t1274 - 0.038922999986*(t1287 + t1296) - 3.6777349999999994e-6*(t1313 + t1316) + 1.8190549999999993e-12*var1[14]);
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
