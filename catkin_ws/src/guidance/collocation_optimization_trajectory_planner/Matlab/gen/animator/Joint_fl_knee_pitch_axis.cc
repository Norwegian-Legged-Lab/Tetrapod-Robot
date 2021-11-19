/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 18:01:25 GMT+01:00
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
  double t491;
  double t500;
  double t603;
  double t967;
  double t1401;
  double t1142;
  double t1245;
  double t1431;
  double t100;
  double t288;
  double t336;
  double t752;
  double t1338;
  double t1483;
  double t1484;
  double t1494;
  double t1496;
  double t1497;
  double t1499;
  double t774;
  double t831;
  double t905;
  double t1491;
  double t1504;
  double t1512;
  double t1515;
  double t1521;
  double t1526;
  double t1528;
  double t1529;
  double t1531;
  double t1565;
  double t1596;
  double t1614;
  double t1636;
  double t1645;
  double t1647;
  double t1675;
  double t1711;
  double t1723;
  double t1727;
  double t1785;
  double t1787;
  double t1794;
  double t1801;
  double t460;
  double t474;
  double t1866;
  double t1901;
  double t2019;
  double t2032;
  double t2039;
  double t1937;
  double t1976;
  double t1977;
  double t1988;
  double t2042;
  double t2044;
  double t2055;
  double t2057;
  double t2071;
  double t1803;
  double t1805;
  double t1877;
  double t2049;
  double t2072;
  double t2073;
  double t1834;
  double t1835;
  double t2078;
  double t2080;
  double t2086;
  double t2087;
  double t2097;
  double t2098;
  double t2099;
  double t2111;
  double t1840;
  double t2253;
  double t2271;
  double t2277;
  double t2211;
  double t2221;
  double t2231;
  double t2251;
  double t2281;
  double t2283;
  double t2286;
  double t2290;
  double t2295;
  double t2171;
  double t2285;
  double t2297;
  double t2299;
  double t2304;
  double t2307;
  double t2309;
  double t2312;
  double t2322;
  double t2323;
  double t2330;
  double t2331;
  t491 = Cos(var1[7]);
  t500 = -1.*t491;
  t603 = 1. + t500;
  t967 = Cos(var1[4]);
  t1401 = Cos(var1[5]);
  t1142 = Cos(var1[6]);
  t1245 = Sin(var1[5]);
  t1431 = Sin(var1[6]);
  t100 = Cos(var1[8]);
  t288 = -1.*t100;
  t336 = 1. + t288;
  t752 = Sin(var1[4]);
  t1338 = -1.*t967*t1142*t1245;
  t1483 = -1.*t967*t1401*t1431;
  t1484 = t1338 + t1483;
  t1494 = t967*t1401*t1142;
  t1496 = -1.*t967*t1245*t1431;
  t1497 = t1494 + t1496;
  t1499 = Sin(var1[7]);
  t774 = -4.e-6*t603*t752;
  t831 = -1.6e-11*t603;
  t905 = 1. + t831;
  t1491 = t905*t1484;
  t1504 = 4.e-6*t1499;
  t1512 = 0. + t1504;
  t1515 = t1497*t1512;
  t1521 = t774 + t1491 + t1515;
  t1526 = -1.*t603;
  t1528 = 1. + t1526;
  t1529 = t1528*t752;
  t1531 = -4.e-6*t603*t1484;
  t1565 = 0. + t1499;
  t1596 = t1497*t1565;
  t1614 = t1529 + t1531 + t1596;
  t1636 = -1.000000000016*t603;
  t1645 = 1. + t1636;
  t1647 = t1645*t1497;
  t1675 = -1.*t1499;
  t1711 = 0. + t1675;
  t1723 = t752*t1711;
  t1727 = -4.e-6*t1499;
  t1785 = 0. + t1727;
  t1787 = t1484*t1785;
  t1794 = t1647 + t1723 + t1787;
  t1801 = Sin(var1[8]);
  t460 = -1.6e-11*t336;
  t474 = 1. + t460;
  t1866 = Sin(var1[3]);
  t1901 = Cos(var1[3]);
  t2019 = t1401*t1866*t752;
  t2032 = t1901*t1245;
  t2039 = t2019 + t2032;
  t1937 = t1901*t1401;
  t1976 = -1.*t1866*t752*t1245;
  t1977 = t1937 + t1976;
  t1988 = t1142*t1977;
  t2042 = -1.*t2039*t1431;
  t2044 = t1988 + t2042;
  t2055 = t1142*t2039;
  t2057 = t1977*t1431;
  t2071 = t2055 + t2057;
  t1803 = 4.e-6*t1801;
  t1805 = 0. + t1803;
  t1877 = 4.e-6*t967*t603*t1866;
  t2049 = t905*t2044;
  t2072 = t2071*t1512;
  t2073 = t1877 + t2049 + t2072;
  t1834 = -1.*t336;
  t1835 = 1. + t1834;
  t2078 = -1.*t967*t1528*t1866;
  t2080 = -4.e-6*t603*t2044;
  t2086 = t2071*t1565;
  t2087 = t2078 + t2080 + t2086;
  t2097 = t1645*t2071;
  t2098 = -1.*t967*t1866*t1711;
  t2099 = t2044*t1785;
  t2111 = t2097 + t2098 + t2099;
  t1840 = 0. + t1801;
  t2253 = -1.*t1901*t1401*t752;
  t2271 = t1866*t1245;
  t2277 = t2253 + t2271;
  t2211 = t1401*t1866;
  t2221 = t1901*t752*t1245;
  t2231 = t2211 + t2221;
  t2251 = t1142*t2231;
  t2281 = -1.*t2277*t1431;
  t2283 = t2251 + t2281;
  t2286 = t1142*t2277;
  t2290 = t2231*t1431;
  t2295 = t2286 + t2290;
  t2171 = -4.e-6*t1901*t967*t603;
  t2285 = t905*t2283;
  t2297 = t2295*t1512;
  t2299 = t2171 + t2285 + t2297;
  t2304 = t1901*t967*t1528;
  t2307 = -4.e-6*t603*t2283;
  t2309 = t2295*t1565;
  t2312 = t2304 + t2307 + t2309;
  t2322 = t1645*t2295;
  t2323 = t1901*t967*t1711;
  t2330 = t2283*t1785;
  t2331 = t2322 + t2323 + t2330;
  p_output1[0]=t1794*t1805 - 4.e-6*t1614*t336 - 4.e-6*(t1614*t1835 + t1794*t1840 - 4.e-6*t1521*t336) + t1521*t474;
  p_output1[1]=t1805*t2111 - 4.e-6*t2087*t336 - 4.e-6*(t1835*t2087 + t1840*t2111 - 4.e-6*t2073*t336) + t2073*t474;
  p_output1[2]=t1805*t2331 - 4.e-6*t2312*t336 - 4.e-6*(t1835*t2312 + t1840*t2331 - 4.e-6*t2299*t336) + t2299*t474;
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

#include "Joint_fl_knee_pitch_axis.hh"

namespace SymFunction
{

void Joint_fl_knee_pitch_axis_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
