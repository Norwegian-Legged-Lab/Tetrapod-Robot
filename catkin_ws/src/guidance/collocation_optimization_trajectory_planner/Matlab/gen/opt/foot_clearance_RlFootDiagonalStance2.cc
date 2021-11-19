/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:31:10 GMT+01:00
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
  double t549;
  double t599;
  double t608;
  double t637;
  double t31;
  double t1053;
  double t1067;
  double t1110;
  double t1121;
  double t1135;
  double t1150;
  double t1211;
  double t1184;
  double t1286;
  double t629;
  double t1208;
  double t1302;
  double t1319;
  double t1349;
  double t1377;
  double t1383;
  double t854;
  double t1414;
  double t1531;
  double t1536;
  double t1537;
  double t1542;
  double t33;
  double t1455;
  double t1466;
  double t1446;
  double t1448;
  double t1450;
  double t1508;
  double t1513;
  double t1521;
  double t1549;
  double t1399;
  double t1569;
  double t1432;
  double t1624;
  double t1540;
  double t1647;
  double t1657;
  double t643;
  double t1559;
  double t1560;
  double t1563;
  double t1570;
  double t1579;
  double t1580;
  double t1593;
  double t1594;
  double t1596;
  double t1711;
  double t1658;
  double t1660;
  double t1662;
  double t1664;
  double t1669;
  double t1672;
  double t1676;
  double t1681;
  double t1730;
  double t1733;
  double t1739;
  double t1742;
  double t1749;
  double t1751;
  double t1779;
  double t1780;
  double t1551;
  double t1783;
  double t1543;
  double t1831;
  double t1641;
  double t1789;
  double t1790;
  double t1627;
  t549 = Cos(var1[13]);
  t599 = -1.*t549;
  t608 = 1. + t599;
  t637 = Sin(var1[13]);
  t31 = Cos(var1[3]);
  t1053 = Cos(var1[12]);
  t1067 = -1.*t1053;
  t1110 = 1. + t1067;
  t1121 = Sin(var1[12]);
  t1135 = 0.15121*t1121;
  t1150 = Cos(var1[5]);
  t1211 = Sin(var1[3]);
  t1184 = Sin(var1[4]);
  t1286 = Sin(var1[5]);
  t629 = 4.e-6*t608;
  t1208 = -1.*t31*t1150*t1184;
  t1302 = t1211*t1286;
  t1319 = t1208 + t1302;
  t1349 = t1150*t1211;
  t1377 = t31*t1184*t1286;
  t1383 = t1349 + t1377;
  t854 = -2.8e-11*t608;
  t1414 = 7.e-6*t608;
  t1531 = Cos(var1[14]);
  t1536 = -1.*t1531;
  t1537 = 1. + t1536;
  t1542 = Sin(var1[14]);
  t33 = Cos(var1[4]);
  t1455 = -1.*t637;
  t1466 = -4.e-6*t637;
  t1446 = -1.*t1121*t1319;
  t1448 = t1053*t1383;
  t1450 = t1446 + t1448;
  t1508 = t1053*t1319;
  t1513 = t1121*t1383;
  t1521 = t1508 + t1513;
  t1549 = 7.e-6*t1537;
  t1399 = -7.e-6*t637;
  t1569 = -7.e-6*t608;
  t1432 = 4.e-6*t637;
  t1624 = 4.e-6*t1537;
  t1540 = -2.8e-11*t1537;
  t1647 = -1. + t549;
  t1657 = 4.e-6*t1647;
  t643 = 7.e-6*t637;
  t1559 = 2.8e-11*t608;
  t1560 = t1559 + t1455;
  t1563 = t31*t33*t1560;
  t1570 = t1569 + t1466;
  t1579 = t1570*t1450;
  t1580 = -1.000000000016*t608;
  t1593 = 1. + t1580;
  t1594 = t1593*t1521;
  t1596 = t1563 + t1579 + t1594;
  t1711 = 7.e-6*t1542;
  t1658 = t1657 + t1399;
  t1660 = t31*t33*t1658;
  t1662 = -6.5e-11*t608;
  t1664 = 1. + t1662;
  t1669 = t1664*t1450;
  t1672 = t1569 + t1432;
  t1676 = t1672*t1521;
  t1681 = t1660 + t1669 + t1676;
  t1730 = -1.000000000049*t608;
  t1733 = 1. + t1730;
  t1739 = t1733*t31*t33;
  t1742 = t1657 + t643;
  t1749 = t1742*t1450;
  t1751 = t1559 + t637;
  t1779 = t1751*t1521;
  t1780 = t1739 + t1749 + t1779;
  t1551 = -4.e-6*t1542;
  t1783 = 2.8e-11*t1537;
  t1543 = -1.*t1542;
  t1831 = -7.e-6*t1537;
  t1641 = 4.e-6*t1542;
  t1789 = -1. + t1531;
  t1790 = 4.e-6*t1789;
  t1627 = -7.e-6*t1542;
  p_output1[0]=(-0.15121*t1110 + t1135)*t1319 + (0.15121*t1110 + t1135)*t1383 - 0.038924*((1. - 1.000000000049*t1537)*t1780 + t1596*(t1542 + t1783) + t1681*(t1711 + t1790)) - 0.80315*((1. - 1.000000000016*t1537)*t1596 + t1780*(t1543 + t1783) + t1681*(t1551 + t1831)) + 0.148705*((1. - 6.5e-11*t1537)*t1681 + t1780*(t1627 + t1790) + t1596*(t1641 + t1831)) + var1[2] + t1450*(-0.281209000004*(t1414 + t1432) - 1.38024835e-16*t608 - 0.038748999993*(t1399 + t629) - 1.4640699999999997e-7*var1[13]) + t31*t33*(-0.0387489999948987*t608 - 2.123459e-6*(t629 + t643) - 0.281209000004*(t637 + t854) + 5.856279999999999e-13*var1[13]) + t1521*(-2.123459e-6*(t1414 + t1466) - 0.28120900000849935*t608 - 0.038748999993*(t1455 + t854) + 1.0248489999999998e-12*var1[13]) + t1681*(-2.3905277499999995e-16*t1537 - 0.038922999986*(t1624 + t1627) - 0.503149000008*(t1549 + t1641) - 2.598649999999999e-7*var1[14]) + t1780*(-0.03892299998790722*t1537 - 0.503149000008*(t1540 + t1542) - 3.6777349999999994e-6*(t1624 + t1711) + 1.0394599999999997e-12*var1[14]) + t1596*(-0.5031490000160505*t1537 - 0.038922999986*(t1540 + t1543) - 3.6777349999999994e-6*(t1549 + t1551) + 1.8190549999999993e-12*var1[14]);
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

#include "foot_clearance_RlFootDiagonalStance2.hh"

namespace DiagonalStance2
{

void foot_clearance_RlFootDiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
