/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:16:45 GMT+01:00
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
  double t586;
  double t594;
  double t664;
  double t876;
  double t177;
  double t1477;
  double t1503;
  double t1523;
  double t1536;
  double t1537;
  double t1540;
  double t1545;
  double t1543;
  double t1548;
  double t1276;
  double t1300;
  double t1544;
  double t1551;
  double t1556;
  double t1578;
  double t1581;
  double t1586;
  double t1621;
  double t859;
  double t1775;
  double t1793;
  double t1819;
  double t1830;
  double t215;
  double t1715;
  double t1691;
  double t1693;
  double t1695;
  double t1732;
  double t1734;
  double t1749;
  double t1845;
  double t1317;
  double t1856;
  double t884;
  double t1829;
  double t1952;
  double t1971;
  double t1997;
  double t1657;
  double t1865;
  double t1631;
  double t2019;
  double t1858;
  double t1861;
  double t1867;
  double t1870;
  double t1871;
  double t1873;
  double t1881;
  double t1888;
  double t2024;
  double t1987;
  double t1991;
  double t1992;
  double t2001;
  double t2002;
  double t2008;
  double t2009;
  double t2011;
  double t2031;
  double t2042;
  double t2045;
  double t2057;
  double t2059;
  double t2067;
  double t2073;
  double t2085;
  double t1916;
  double t2114;
  double t1974;
  double t2142;
  double t2096;
  double t1835;
  t586 = Cos(var1[16]);
  t594 = -1.*t586;
  t664 = 1. + t594;
  t876 = Sin(var1[16]);
  t177 = Cos(var1[3]);
  t1477 = Cos(var1[15]);
  t1503 = -1.*t1477;
  t1523 = 1. + t1503;
  t1536 = -0.15121*t1523;
  t1537 = Sin(var1[15]);
  t1540 = Cos(var1[5]);
  t1545 = Sin(var1[3]);
  t1543 = Sin(var1[4]);
  t1548 = Sin(var1[5]);
  t1276 = -1. + t586;
  t1300 = 4.e-6*t1276;
  t1544 = -1.*t177*t1540*t1543;
  t1551 = t1545*t1548;
  t1556 = t1544 + t1551;
  t1578 = t1540*t1545;
  t1581 = t177*t1543*t1548;
  t1586 = t1578 + t1581;
  t1621 = 7.e-6*t664;
  t859 = 2.8e-11*t664;
  t1775 = Cos(var1[17]);
  t1793 = -1.*t1775;
  t1819 = 1. + t1793;
  t1830 = Sin(var1[17]);
  t215 = Cos(var1[4]);
  t1715 = -4.e-6*t876;
  t1691 = -1.*t1537*t1556;
  t1693 = t1477*t1586;
  t1695 = t1691 + t1693;
  t1732 = t1477*t1556;
  t1734 = t1537*t1586;
  t1749 = t1732 + t1734;
  t1845 = 2.8e-11*t1819;
  t1317 = -7.e-6*t876;
  t1856 = -2.8e-11*t664;
  t884 = -1.*t876;
  t1829 = 7.e-6*t1819;
  t1952 = -1. + t1775;
  t1971 = 4.e-6*t1952;
  t1997 = 4.e-6*t664;
  t1657 = 7.e-6*t876;
  t1865 = -7.e-6*t664;
  t1631 = 4.e-6*t876;
  t2019 = 4.e-6*t1830;
  t1858 = t1856 + t876;
  t1861 = t177*t215*t1858;
  t1867 = t1865 + t1715;
  t1870 = t1867*t1695;
  t1871 = -1.000000000016*t664;
  t1873 = 1. + t1871;
  t1881 = t1873*t1749;
  t1888 = t1861 + t1870 + t1881;
  t2024 = 7.e-6*t1830;
  t1987 = -1.000000000049*t664;
  t1991 = 1. + t1987;
  t1992 = t1991*t177*t215;
  t2001 = t1997 + t1317;
  t2002 = t2001*t1695;
  t2008 = t1856 + t884;
  t2009 = t2008*t1749;
  t2011 = t1992 + t2002 + t2009;
  t2031 = t1997 + t1657;
  t2042 = t177*t215*t2031;
  t2045 = -6.5e-11*t664;
  t2057 = 1. + t2045;
  t2059 = t2057*t1695;
  t2067 = t1865 + t1631;
  t2073 = t2067*t1749;
  t2085 = t2042 + t2059 + t2073;
  t1916 = -1.*t1830;
  t2114 = 4.e-6*t1819;
  t1974 = -7.e-6*t1830;
  t2142 = -2.8e-11*t1819;
  t2096 = -7.e-6*t1819;
  t1835 = -4.e-6*t1830;
  p_output1[0]=(t1536 - 0.15121*t1537)*t1556 + (t1536 + 0.15121*t1537)*t1586 - 0.148715*((1. - 6.5e-11*t1819)*t2085 + t1888*(t2019 + t2096) + t2011*(t2024 + t2114)) - 0.80315*((1. - 1.000000000016*t1819)*t1888 + t2085*(t1835 + t2096) + t2011*(t1830 + t2142)) - 0.038576*((1. - 1.000000000049*t1819)*t2011 + t2085*(t1974 + t2114) + t1888*(t1916 + t2142)) + var1[2] + t1749*(-1.8134809999999998e-6*(t1621 + t1715) - 0.2812110000084994*t664 - 0.038749000006999997*(t859 + t876) - 2.7726089999999997e-12*var1[16]) + t177*t215*(-1.8134809999999998e-6*(t1300 + t1317) - 0.03874900000889869*t664 - 0.281211000004*(t859 + t884) + 1.5843479999999999e-12*var1[16]) + t1695*(-0.281211000004*(t1621 + t1631) - 0.038749000006999997*(t1300 + t1657) - 1.1787626499999999e-16*t664 + 3.9608699999999997e-7*var1[16]) + t1888*(-0.5031510000160505*t1819 - 3.367757e-6*(t1829 + t1835) - 0.038575000014*(t1830 + t1845) - 1.9784030000000015e-12*var1[17]) + t2011*(-0.03857500001589017*t1819 - 0.5031510000080001*(t1845 + t1916) - 3.367757e-6*(t1971 + t1974) + 1.1305160000000008e-12*var1[17]) + t2085*(-2.18904205e-16*t1819 - 0.5031510000080001*(t1829 + t2019) - 0.038575000014*(t1971 + t2024) + 2.826290000000002e-7*var1[17]);
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

#include "foot_clearance_RrFoot.hh"

namespace TrotStance1
{

void foot_clearance_RrFoot_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
