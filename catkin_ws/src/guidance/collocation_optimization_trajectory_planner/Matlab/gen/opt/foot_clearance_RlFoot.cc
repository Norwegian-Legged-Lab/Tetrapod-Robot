/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:18:51 GMT+01:00
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
  double t673;
  double t686;
  double t688;
  double t694;
  double t412;
  double t1069;
  double t1103;
  double t1105;
  double t1117;
  double t1118;
  double t1218;
  double t1258;
  double t1235;
  double t1263;
  double t693;
  double t1245;
  double t1264;
  double t1279;
  double t1333;
  double t1347;
  double t1352;
  double t846;
  double t1383;
  double t1494;
  double t1499;
  double t1500;
  double t1504;
  double t561;
  double t1415;
  double t1436;
  double t1398;
  double t1403;
  double t1405;
  double t1482;
  double t1485;
  double t1487;
  double t1514;
  double t1364;
  double t1576;
  double t1384;
  double t1644;
  double t1503;
  double t1676;
  double t1679;
  double t741;
  double t1558;
  double t1560;
  double t1567;
  double t1580;
  double t1590;
  double t1596;
  double t1597;
  double t1601;
  double t1611;
  double t1716;
  double t1683;
  double t1687;
  double t1690;
  double t1699;
  double t1701;
  double t1702;
  double t1703;
  double t1705;
  double t1763;
  double t1774;
  double t1775;
  double t1786;
  double t1788;
  double t1789;
  double t1792;
  double t1793;
  double t1530;
  double t1796;
  double t1509;
  double t1851;
  double t1659;
  double t1800;
  double t1803;
  double t1646;
  t673 = Cos(var1[13]);
  t686 = -1.*t673;
  t688 = 1. + t686;
  t694 = Sin(var1[13]);
  t412 = Cos(var1[3]);
  t1069 = Cos(var1[12]);
  t1103 = -1.*t1069;
  t1105 = 1. + t1103;
  t1117 = Sin(var1[12]);
  t1118 = 0.15121*t1117;
  t1218 = Cos(var1[5]);
  t1258 = Sin(var1[3]);
  t1235 = Sin(var1[4]);
  t1263 = Sin(var1[5]);
  t693 = 4.e-6*t688;
  t1245 = -1.*t412*t1218*t1235;
  t1264 = t1258*t1263;
  t1279 = t1245 + t1264;
  t1333 = t1218*t1258;
  t1347 = t412*t1235*t1263;
  t1352 = t1333 + t1347;
  t846 = -2.8e-11*t688;
  t1383 = 7.e-6*t688;
  t1494 = Cos(var1[14]);
  t1499 = -1.*t1494;
  t1500 = 1. + t1499;
  t1504 = Sin(var1[14]);
  t561 = Cos(var1[4]);
  t1415 = -1.*t694;
  t1436 = -4.e-6*t694;
  t1398 = -1.*t1117*t1279;
  t1403 = t1069*t1352;
  t1405 = t1398 + t1403;
  t1482 = t1069*t1279;
  t1485 = t1117*t1352;
  t1487 = t1482 + t1485;
  t1514 = 7.e-6*t1500;
  t1364 = -7.e-6*t694;
  t1576 = -7.e-6*t688;
  t1384 = 4.e-6*t694;
  t1644 = 4.e-6*t1500;
  t1503 = -2.8e-11*t1500;
  t1676 = -1. + t673;
  t1679 = 4.e-6*t1676;
  t741 = 7.e-6*t694;
  t1558 = 2.8e-11*t688;
  t1560 = t1558 + t1415;
  t1567 = t412*t561*t1560;
  t1580 = t1576 + t1436;
  t1590 = t1580*t1405;
  t1596 = -1.000000000016*t688;
  t1597 = 1. + t1596;
  t1601 = t1597*t1487;
  t1611 = t1567 + t1590 + t1601;
  t1716 = 7.e-6*t1504;
  t1683 = t1679 + t1364;
  t1687 = t412*t561*t1683;
  t1690 = -6.5e-11*t688;
  t1699 = 1. + t1690;
  t1701 = t1699*t1405;
  t1702 = t1576 + t1384;
  t1703 = t1702*t1487;
  t1705 = t1687 + t1701 + t1703;
  t1763 = -1.000000000049*t688;
  t1774 = 1. + t1763;
  t1775 = t1774*t412*t561;
  t1786 = t1679 + t741;
  t1788 = t1786*t1405;
  t1789 = t1558 + t694;
  t1792 = t1789*t1487;
  t1793 = t1775 + t1788 + t1792;
  t1530 = -4.e-6*t1504;
  t1796 = 2.8e-11*t1500;
  t1509 = -1.*t1504;
  t1851 = -7.e-6*t1500;
  t1659 = 4.e-6*t1504;
  t1800 = -1. + t1494;
  t1803 = 4.e-6*t1800;
  t1646 = -7.e-6*t1504;
  p_output1[0]=(-0.15121*t1105 + t1118)*t1279 + (0.15121*t1105 + t1118)*t1352 - 0.038924*((1. - 1.000000000049*t1500)*t1793 + t1611*(t1504 + t1796) + t1705*(t1716 + t1803)) - 0.80315*((1. - 1.000000000016*t1500)*t1611 + t1793*(t1509 + t1796) + t1705*(t1530 + t1851)) + 0.148705*((1. - 6.5e-11*t1500)*t1705 + t1793*(t1646 + t1803) + t1611*(t1659 + t1851)) + var1[2] + t1405*(-0.281209000004*(t1383 + t1384) - 1.38024835e-16*t688 - 0.038748999993*(t1364 + t693) - 1.4640699999999997e-7*var1[13]) + t412*t561*(-0.0387489999948987*t688 - 2.123459e-6*(t693 + t741) - 0.281209000004*(t694 + t846) + 5.856279999999999e-13*var1[13]) + t1487*(-2.123459e-6*(t1383 + t1436) - 0.28120900000849935*t688 - 0.038748999993*(t1415 + t846) + 1.0248489999999998e-12*var1[13]) + t1705*(-2.3905277499999995e-16*t1500 - 0.038922999986*(t1644 + t1646) - 0.503149000008*(t1514 + t1659) - 2.598649999999999e-7*var1[14]) + t1793*(-0.03892299998790722*t1500 - 0.503149000008*(t1503 + t1504) - 3.6777349999999994e-6*(t1644 + t1716) + 1.0394599999999997e-12*var1[14]) + t1611*(-0.5031490000160505*t1500 - 0.038922999986*(t1503 + t1509) - 3.6777349999999994e-6*(t1514 + t1530) + 1.8190549999999993e-12*var1[14]);
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

#include "foot_clearance_RlFoot.hh"

namespace TrotStance2
{

void foot_clearance_RlFoot_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
