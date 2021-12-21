/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 12:55:31 GMT+01:00
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
  double t637;
  double t655;
  double t661;
  double t676;
  double t355;
  double t1097;
  double t1099;
  double t1107;
  double t1161;
  double t1177;
  double t1239;
  double t1299;
  double t1267;
  double t1311;
  double t672;
  double t1287;
  double t1315;
  double t1318;
  double t1357;
  double t1359;
  double t1360;
  double t748;
  double t1400;
  double t1511;
  double t1512;
  double t1513;
  double t1522;
  double t541;
  double t1433;
  double t1463;
  double t1409;
  double t1411;
  double t1415;
  double t1505;
  double t1507;
  double t1508;
  double t1532;
  double t1389;
  double t1577;
  double t1401;
  double t1655;
  double t1518;
  double t1680;
  double t1686;
  double t680;
  double t1564;
  double t1567;
  double t1576;
  double t1581;
  double t1591;
  double t1596;
  double t1619;
  double t1622;
  double t1628;
  double t1763;
  double t1693;
  double t1696;
  double t1705;
  double t1709;
  double t1710;
  double t1721;
  double t1726;
  double t1738;
  double t1795;
  double t1797;
  double t1802;
  double t1803;
  double t1809;
  double t1814;
  double t1816;
  double t1826;
  double t1537;
  double t1842;
  double t1524;
  double t1882;
  double t1667;
  double t1859;
  double t1861;
  double t1660;
  t637 = Cos(var1[13]);
  t655 = -1.*t637;
  t661 = 1. + t655;
  t676 = Sin(var1[13]);
  t355 = Cos(var1[3]);
  t1097 = Cos(var1[12]);
  t1099 = -1.*t1097;
  t1107 = 1. + t1099;
  t1161 = Sin(var1[12]);
  t1177 = 0.15121*t1161;
  t1239 = Cos(var1[5]);
  t1299 = Sin(var1[3]);
  t1267 = Sin(var1[4]);
  t1311 = Sin(var1[5]);
  t672 = 4.e-6*t661;
  t1287 = -1.*t355*t1239*t1267;
  t1315 = t1299*t1311;
  t1318 = t1287 + t1315;
  t1357 = t1239*t1299;
  t1359 = t355*t1267*t1311;
  t1360 = t1357 + t1359;
  t748 = -2.8e-11*t661;
  t1400 = 7.e-6*t661;
  t1511 = Cos(var1[14]);
  t1512 = -1.*t1511;
  t1513 = 1. + t1512;
  t1522 = Sin(var1[14]);
  t541 = Cos(var1[4]);
  t1433 = -1.*t676;
  t1463 = -4.e-6*t676;
  t1409 = -1.*t1161*t1318;
  t1411 = t1097*t1360;
  t1415 = t1409 + t1411;
  t1505 = t1097*t1318;
  t1507 = t1161*t1360;
  t1508 = t1505 + t1507;
  t1532 = 7.e-6*t1513;
  t1389 = -7.e-6*t676;
  t1577 = -7.e-6*t661;
  t1401 = 4.e-6*t676;
  t1655 = 4.e-6*t1513;
  t1518 = -2.8e-11*t1513;
  t1680 = -1. + t637;
  t1686 = 4.e-6*t1680;
  t680 = 7.e-6*t676;
  t1564 = 2.8e-11*t661;
  t1567 = t1564 + t1433;
  t1576 = t355*t541*t1567;
  t1581 = t1577 + t1463;
  t1591 = t1581*t1415;
  t1596 = -1.000000000016*t661;
  t1619 = 1. + t1596;
  t1622 = t1619*t1508;
  t1628 = t1576 + t1591 + t1622;
  t1763 = 7.e-6*t1522;
  t1693 = t1686 + t1389;
  t1696 = t355*t541*t1693;
  t1705 = -6.5e-11*t661;
  t1709 = 1. + t1705;
  t1710 = t1709*t1415;
  t1721 = t1577 + t1401;
  t1726 = t1721*t1508;
  t1738 = t1696 + t1710 + t1726;
  t1795 = -1.000000000049*t661;
  t1797 = 1. + t1795;
  t1802 = t1797*t355*t541;
  t1803 = t1686 + t680;
  t1809 = t1803*t1415;
  t1814 = t1564 + t676;
  t1816 = t1814*t1508;
  t1826 = t1802 + t1809 + t1816;
  t1537 = -4.e-6*t1522;
  t1842 = 2.8e-11*t1513;
  t1524 = -1.*t1522;
  t1882 = -7.e-6*t1513;
  t1667 = 4.e-6*t1522;
  t1859 = -1. + t1511;
  t1861 = 4.e-6*t1859;
  t1660 = -7.e-6*t1522;
  p_output1[0]=(-0.15121*t1107 + t1177)*t1318 + (0.15121*t1107 + t1177)*t1360 - 0.038924*((1. - 1.000000000049*t1513)*t1826 + t1628*(t1522 + t1842) + t1738*(t1763 + t1861)) - 0.80315*((1. - 1.000000000016*t1513)*t1628 + t1826*(t1524 + t1842) + t1738*(t1537 + t1882)) + 0.148705*((1. - 6.5e-11*t1513)*t1738 + t1826*(t1660 + t1861) + t1628*(t1667 + t1882)) + var1[2] + t1415*(-0.281209000004*(t1400 + t1401) - 1.38024835e-16*t661 - 0.038748999993*(t1389 + t672) - 1.4640699999999997e-7*var1[13]) + t355*t541*(-0.0387489999948987*t661 - 2.123459e-6*(t672 + t680) - 0.281209000004*(t676 + t748) + 5.856279999999999e-13*var1[13]) + t1508*(-2.123459e-6*(t1400 + t1463) - 0.28120900000849935*t661 - 0.038748999993*(t1433 + t748) + 1.0248489999999998e-12*var1[13]) + t1738*(-2.3905277499999995e-16*t1513 - 0.038922999986*(t1655 + t1660) - 0.503149000008*(t1532 + t1667) - 2.598649999999999e-7*var1[14]) + t1826*(-0.03892299998790722*t1513 - 0.503149000008*(t1518 + t1522) - 3.6777349999999994e-6*(t1655 + t1763) + 1.0394599999999997e-12*var1[14]) + t1628*(-0.5031490000160505*t1513 - 0.038922999986*(t1518 + t1524) - 3.6777349999999994e-6*(t1532 + t1537) + 1.8190549999999993e-12*var1[14]);
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

namespace TrotStance2
{

void foot_clearance_RlFootDiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
