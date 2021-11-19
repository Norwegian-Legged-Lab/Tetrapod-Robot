/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:29:12 GMT+01:00
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
  double t233;
  double t237;
  double t262;
  double t193;
  double t472;
  double t491;
  double t522;
  double t536;
  double t547;
  double t560;
  double t587;
  double t579;
  double t593;
  double t326;
  double t335;
  double t585;
  double t594;
  double t595;
  double t653;
  double t659;
  double t678;
  double t725;
  double t261;
  double t1033;
  double t1047;
  double t1072;
  double t1119;
  double t200;
  double t893;
  double t824;
  double t830;
  double t848;
  double t1008;
  double t1021;
  double t1023;
  double t1138;
  double t360;
  double t1188;
  double t274;
  double t1102;
  double t1437;
  double t1459;
  double t1500;
  double t802;
  double t1249;
  double t737;
  double t1589;
  double t1190;
  double t1194;
  double t1257;
  double t1285;
  double t1287;
  double t1305;
  double t1315;
  double t1327;
  double t1608;
  double t1488;
  double t1489;
  double t1491;
  double t1533;
  double t1537;
  double t1540;
  double t1555;
  double t1556;
  double t1633;
  double t1634;
  double t1643;
  double t1646;
  double t1649;
  double t1650;
  double t1651;
  double t1683;
  double t1378;
  double t1731;
  double t1462;
  double t1805;
  double t1707;
  double t1122;
  t232 = Cos(var1[16]);
  t233 = -1.*t232;
  t237 = 1. + t233;
  t262 = Sin(var1[16]);
  t193 = Cos(var1[3]);
  t472 = Cos(var1[15]);
  t491 = -1.*t472;
  t522 = 1. + t491;
  t536 = -0.15121*t522;
  t547 = Sin(var1[15]);
  t560 = Cos(var1[5]);
  t587 = Sin(var1[3]);
  t579 = Sin(var1[4]);
  t593 = Sin(var1[5]);
  t326 = -1. + t232;
  t335 = 4.e-6*t326;
  t585 = -1.*t193*t560*t579;
  t594 = t587*t593;
  t595 = t585 + t594;
  t653 = t560*t587;
  t659 = t193*t579*t593;
  t678 = t653 + t659;
  t725 = 7.e-6*t237;
  t261 = 2.8e-11*t237;
  t1033 = Cos(var1[17]);
  t1047 = -1.*t1033;
  t1072 = 1. + t1047;
  t1119 = Sin(var1[17]);
  t200 = Cos(var1[4]);
  t893 = -4.e-6*t262;
  t824 = -1.*t547*t595;
  t830 = t472*t678;
  t848 = t824 + t830;
  t1008 = t472*t595;
  t1021 = t547*t678;
  t1023 = t1008 + t1021;
  t1138 = 2.8e-11*t1072;
  t360 = -7.e-6*t262;
  t1188 = -2.8e-11*t237;
  t274 = -1.*t262;
  t1102 = 7.e-6*t1072;
  t1437 = -1. + t1033;
  t1459 = 4.e-6*t1437;
  t1500 = 4.e-6*t237;
  t802 = 7.e-6*t262;
  t1249 = -7.e-6*t237;
  t737 = 4.e-6*t262;
  t1589 = 4.e-6*t1119;
  t1190 = t1188 + t262;
  t1194 = t193*t200*t1190;
  t1257 = t1249 + t893;
  t1285 = t1257*t848;
  t1287 = -1.000000000016*t237;
  t1305 = 1. + t1287;
  t1315 = t1305*t1023;
  t1327 = t1194 + t1285 + t1315;
  t1608 = 7.e-6*t1119;
  t1488 = -1.000000000049*t237;
  t1489 = 1. + t1488;
  t1491 = t1489*t193*t200;
  t1533 = t1500 + t360;
  t1537 = t1533*t848;
  t1540 = t1188 + t274;
  t1555 = t1540*t1023;
  t1556 = t1491 + t1537 + t1555;
  t1633 = t1500 + t802;
  t1634 = t193*t200*t1633;
  t1643 = -6.5e-11*t237;
  t1646 = 1. + t1643;
  t1649 = t1646*t848;
  t1650 = t1249 + t737;
  t1651 = t1650*t1023;
  t1683 = t1634 + t1649 + t1651;
  t1378 = -1.*t1119;
  t1731 = 4.e-6*t1072;
  t1462 = -7.e-6*t1119;
  t1805 = -2.8e-11*t1072;
  t1707 = -7.e-6*t1072;
  t1122 = -4.e-6*t1119;
  p_output1[0]=-0.148715*((1. - 6.5e-11*t1072)*t1683 + t1327*(t1589 + t1707) + t1556*(t1608 + t1731)) - 0.80315*((1. - 1.000000000016*t1072)*t1327 + t1683*(t1122 + t1707) + t1556*(t1119 + t1805)) - 0.038576*((1. - 1.000000000049*t1072)*t1556 + t1683*(t1462 + t1731) + t1327*(t1378 + t1805)) + (t536 - 0.15121*t547)*t595 + (t536 + 0.15121*t547)*t678 + var1[2] + t1023*(-0.2812110000084994*t237 - 0.038749000006999997*(t261 + t262) - 1.8134809999999998e-6*(t725 + t893) - 2.7726089999999997e-12*var1[16]) + t193*t200*(-0.03874900000889869*t237 - 0.281211000004*(t261 + t274) - 1.8134809999999998e-6*(t335 + t360) + 1.5843479999999999e-12*var1[16]) + t848*(-1.1787626499999999e-16*t237 - 0.281211000004*(t725 + t737) - 0.038749000006999997*(t335 + t802) + 3.9608699999999997e-7*var1[16]) + t1327*(-0.5031510000160505*t1072 - 3.367757e-6*(t1102 + t1122) - 0.038575000014*(t1119 + t1138) - 1.9784030000000015e-12*var1[17]) + t1556*(-0.03857500001589017*t1072 - 0.5031510000080001*(t1138 + t1378) - 3.367757e-6*(t1459 + t1462) + 1.1305160000000008e-12*var1[17]) + t1683*(-2.18904205e-16*t1072 - 0.5031510000080001*(t1102 + t1589) - 0.038575000014*(t1459 + t1608) + 2.826290000000002e-7*var1[17]);
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

#include "u_rearSwingFootHeight_DiagonalStance.hh"

namespace DiagonalStance
{

void u_rearSwingFootHeight_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
