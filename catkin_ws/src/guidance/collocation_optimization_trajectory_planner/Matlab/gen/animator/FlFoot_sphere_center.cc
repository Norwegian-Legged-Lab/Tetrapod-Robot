/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 23:17:53 GMT+01:00
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
  double t51;
  double t228;
  double t408;
  double t440;
  double t487;
  double t506;
  double t148;
  double t781;
  double t1091;
  double t1132;
  double t1137;
  double t1164;
  double t1548;
  double t1696;
  double t883;
  double t1022;
  double t1040;
  double t1431;
  double t1441;
  double t1487;
  double t1766;
  double t1778;
  double t1794;
  double t1841;
  double t1700;
  double t1716;
  double t1720;
  double t1722;
  double t1725;
  double t1735;
  double t2104;
  double t2005;
  double t2029;
  double t2046;
  double t2050;
  double t1860;
  double t1870;
  double t1871;
  double t1874;
  double t1885;
  double t1940;
  double t699;
  double t740;
  double t2420;
  double t2399;
  double t836;
  double t859;
  double t2402;
  double t2429;
  double t2435;
  double t2459;
  double t2481;
  double t2493;
  double t1051;
  double t1145;
  double t1236;
  double t1246;
  double t1504;
  double t1517;
  double t1538;
  double t1562;
  double t1575;
  double t1579;
  double t1683;
  double t2507;
  double t2511;
  double t2512;
  double t2548;
  double t2551;
  double t2553;
  double t1764;
  double t1840;
  double t1842;
  double t1846;
  double t1950;
  double t1952;
  double t1973;
  double t2060;
  double t2063;
  double t2080;
  double t2089;
  double t2113;
  double t2121;
  double t2559;
  double t2573;
  double t2639;
  double t2642;
  double t2776;
  double t2777;
  double t2796;
  double t2804;
  double t2732;
  double t2733;
  double t2753;
  double t2757;
  double t2317;
  double t2324;
  double t2935;
  double t2944;
  double t2953;
  double t2965;
  double t2980;
  double t2987;
  double t3005;
  double t3008;
  double t3010;
  double t3014;
  double t3017;
  double t3024;
  double t3039;
  double t3040;
  double t3043;
  double t3044;
  double t3116;
  double t3122;
  double t3132;
  double t3133;
  double t3061;
  double t3068;
  double t3077;
  double t3078;
  t51 = Cos(var1[4]);
  t228 = Cos(var1[6]);
  t408 = -1.*t228;
  t440 = 1. + t408;
  t487 = 0.15121*t440;
  t506 = Sin(var1[6]);
  t148 = Sin(var1[5]);
  t781 = Cos(var1[5]);
  t1091 = Cos(var1[7]);
  t1132 = -1.*t1091;
  t1137 = 1. + t1132;
  t1164 = Sin(var1[7]);
  t1548 = Sin(var1[4]);
  t1696 = -1. + t1091;
  t883 = -1.*t51*t228*t148;
  t1022 = -1.*t51*t781*t506;
  t1040 = t883 + t1022;
  t1431 = t51*t781*t228;
  t1441 = -1.*t51*t148*t506;
  t1487 = t1431 + t1441;
  t1766 = Cos(var1[8]);
  t1778 = -1.*t1766;
  t1794 = 1. + t1778;
  t1841 = Sin(var1[8]);
  t1700 = 4.e-6*t1696*t1548;
  t1716 = 1.6e-11*t1696;
  t1720 = 1. + t1716;
  t1722 = t1720*t1040;
  t1725 = 4.e-6*t1487*t1164;
  t1735 = t1700 + t1722 + t1725;
  t2104 = -1. + t1766;
  t2005 = t1091*t1548;
  t2029 = 4.e-6*t1696*t1040;
  t2046 = t1487*t1164;
  t2050 = t2005 + t2029 + t2046;
  t1860 = -1.000000000016*t1137;
  t1870 = 1. + t1860;
  t1871 = t1870*t1487;
  t1874 = -1.*t1548*t1164;
  t1885 = -4.e-6*t1040*t1164;
  t1940 = t1871 + t1874 + t1885;
  t699 = -0.15121*t506;
  t740 = t487 + t699;
  t2420 = Sin(var1[3]);
  t2399 = Cos(var1[3]);
  t836 = 0.15121*t506;
  t859 = t487 + t836;
  t2402 = t2399*t781;
  t2429 = -1.*t2420*t1548*t148;
  t2435 = t2402 + t2429;
  t2459 = t781*t2420*t1548;
  t2481 = t2399*t148;
  t2493 = t2459 + t2481;
  t1051 = -1.2484e-7*var1[7];
  t1145 = -1.5499600000248e-7*t1137;
  t1236 = 1.124840000016e-6*t1164;
  t1246 = t1051 + t1145 + t1236;
  t1504 = 0.281210000008499*t1137;
  t1517 = 0.03874900000062*t1164;
  t1538 = t1504 + t1517;
  t1562 = 4.9936e-13*var1[7];
  t1575 = -0.03874900000062*t1137;
  t1579 = 0.281210000004*t1164;
  t1683 = t1562 + t1575 + t1579;
  t2507 = t228*t2435;
  t2511 = -1.*t2493*t506;
  t2512 = t2507 + t2511;
  t2548 = t228*t2493;
  t2551 = t2435*t506;
  t2553 = t2548 + t2551;
  t1764 = -1.284e-8*var1[8];
  t1840 = -1.5499600000248e-7*t1794;
  t1842 = 2.012840000032e-6*t1841;
  t1846 = t1764 + t1840 + t1842;
  t1950 = 0.503210000016051*t1794;
  t1952 = 0.03874900000062*t1841;
  t1973 = t1950 + t1952;
  t2060 = 5.136e-14*var1[8];
  t2063 = -0.03874900000062*t1794;
  t2080 = 0.503210000008*t1841;
  t2089 = t2060 + t2063 + t2080;
  t2113 = 1.6e-11*t2104;
  t2121 = 1. + t2113;
  t2559 = -4.e-6*t51*t1696*t2420;
  t2573 = t1720*t2512;
  t2639 = 4.e-6*t2553*t1164;
  t2642 = t2559 + t2573 + t2639;
  t2776 = -1.*t51*t1091*t2420;
  t2777 = 4.e-6*t1696*t2512;
  t2796 = t2553*t1164;
  t2804 = t2776 + t2777 + t2796;
  t2732 = t1870*t2553;
  t2733 = t51*t2420*t1164;
  t2753 = -4.e-6*t2512*t1164;
  t2757 = t2732 + t2733 + t2753;
  t2317 = -1.000000000016*t1794;
  t2324 = 1. + t2317;
  t2935 = t781*t2420;
  t2944 = t2399*t1548*t148;
  t2953 = t2935 + t2944;
  t2965 = -1.*t2399*t781*t1548;
  t2980 = t2420*t148;
  t2987 = t2965 + t2980;
  t3005 = t228*t2953;
  t3008 = -1.*t2987*t506;
  t3010 = t3005 + t3008;
  t3014 = t228*t2987;
  t3017 = t2953*t506;
  t3024 = t3014 + t3017;
  t3039 = 4.e-6*t2399*t51*t1696;
  t3040 = t1720*t3010;
  t3043 = 4.e-6*t3024*t1164;
  t3044 = t3039 + t3040 + t3043;
  t3116 = t2399*t51*t1091;
  t3122 = 4.e-6*t1696*t3010;
  t3132 = t3024*t1164;
  t3133 = t3116 + t3122 + t3132;
  t3061 = t1870*t3024;
  t3068 = -1.*t2399*t51*t1164;
  t3077 = -4.e-6*t3010*t1164;
  t3078 = t3061 + t3068 + t3077;
  p_output1[0]=t1040*t1246 + t1487*t1538 + t1548*t1683 + t1735*t1846 + t1940*t1973 + t2050*t2089 - 0.03875*(t1841*t1940 + t1766*t2050 + 4.e-6*t1735*t2104) + 0.14871*(4.e-6*t1841*t1940 + 4.e-6*t2050*t2104 + t1735*t2121) + 0.80321*(-4.e-6*t1735*t1841 - 1.*t1841*t2050 + t1940*t2324) - 1.*t148*t51*t740 + t51*t781*t859 + var1[0];
  p_output1[1]=t1246*t2512 + t1538*t2553 + t1846*t2642 + t1973*t2757 + t2089*t2804 - 0.03875*(4.e-6*t2104*t2642 + t1841*t2757 + t1766*t2804) + 0.80321*(-4.e-6*t1841*t2642 + t2324*t2757 - 1.*t1841*t2804) + 0.14871*(t2121*t2642 + 4.e-6*t1841*t2757 + 4.e-6*t2104*t2804) - 1.*t1683*t2420*t51 + t2435*t740 + t2493*t859 + var1[1];
  p_output1[2]=t1246*t3010 + t1538*t3024 + t1846*t3044 + t1973*t3078 + t2089*t3133 - 0.03875*(4.e-6*t2104*t3044 + t1841*t3078 + t1766*t3133) + 0.80321*(-4.e-6*t1841*t3044 + t2324*t3078 - 1.*t1841*t3133) + 0.14871*(t2121*t3044 + 4.e-6*t1841*t3078 + 4.e-6*t2104*t3133) + t1683*t2399*t51 + t2953*t740 + t2987*t859 + var1[2];
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

#include "FlFoot_sphere_center.hh"

namespace SymFunction
{

void FlFoot_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
