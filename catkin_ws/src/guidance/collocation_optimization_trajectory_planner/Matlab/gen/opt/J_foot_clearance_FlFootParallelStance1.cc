/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:12:05 GMT+01:00
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
  double t1204;
  double t1238;
  double t1294;
  double t8;
  double t1300;
  double t1416;
  double t1432;
  double t1444;
  double t1446;
  double t1459;
  double t1236;
  double t1304;
  double t1364;
  double t1535;
  double t1536;
  double t1560;
  double t1726;
  double t1729;
  double t1762;
  double t1792;
  double t1865;
  double t1899;
  double t1595;
  double t1685;
  double t1697;
  double t1824;
  double t1832;
  double t1844;
  double t1939;
  double t1943;
  double t1944;
  double t1969;
  double t1900;
  double t1904;
  double t1909;
  double t1911;
  double t1914;
  double t1917;
  double t2076;
  double t2021;
  double t2023;
  double t2026;
  double t2041;
  double t1983;
  double t1985;
  double t1987;
  double t1995;
  double t1996;
  double t1999;
  double t1489;
  double t1522;
  double t1566;
  double t1583;
  double t1712;
  double t1790;
  double t1795;
  double t1803;
  double t1849;
  double t1851;
  double t1858;
  double t1874;
  double t1876;
  double t1884;
  double t1887;
  double t2155;
  double t2157;
  double t2163;
  double t2171;
  double t2176;
  double t2177;
  double t1919;
  double t1968;
  double t1972;
  double t1975;
  double t2000;
  double t2003;
  double t2004;
  double t2044;
  double t2051;
  double t2060;
  double t2066;
  double t2078;
  double t2093;
  double t2201;
  double t2202;
  double t2203;
  double t2207;
  double t2254;
  double t2261;
  double t2262;
  double t2264;
  double t2219;
  double t2228;
  double t2237;
  double t2240;
  double t2125;
  double t2131;
  double t2332;
  double t2334;
  double t2343;
  double t2347;
  double t2351;
  double t2360;
  double t2367;
  double t2370;
  double t2375;
  double t2378;
  double t2379;
  double t2381;
  double t2392;
  double t2398;
  double t2402;
  double t2385;
  double t2386;
  double t2388;
  double t2418;
  double t2420;
  double t2425;
  double t2539;
  double t2541;
  double t2551;
  double t2574;
  double t2578;
  double t2582;
  double t2583;
  double t2601;
  double t2605;
  double t2607;
  double t2586;
  double t2590;
  double t2592;
  double t2621;
  double t2628;
  double t2634;
  double t2716;
  double t2722;
  double t2725;
  double t2764;
  double t2765;
  double t2769;
  double t2773;
  double t2780;
  double t2788;
  double t2789;
  double t2793;
  double t2743;
  double t2745;
  double t2746;
  double t2756;
  double t2880;
  double t2881;
  double t2882;
  double t2883;
  double t2861;
  double t2863;
  double t2865;
  double t2868;
  double t2916;
  double t2917;
  t1204 = Cos(var1[5]);
  t1238 = Sin(var1[3]);
  t1294 = Sin(var1[4]);
  t8 = Cos(var1[3]);
  t1300 = Sin(var1[5]);
  t1416 = Cos(var1[6]);
  t1432 = -1.*t1416;
  t1444 = 1. + t1432;
  t1446 = 0.15121*t1444;
  t1459 = Sin(var1[6]);
  t1236 = t8*t1204;
  t1304 = -1.*t1238*t1294*t1300;
  t1364 = t1236 + t1304;
  t1535 = t1204*t1238*t1294;
  t1536 = t8*t1300;
  t1560 = t1535 + t1536;
  t1726 = Cos(var1[7]);
  t1729 = -1.*t1726;
  t1762 = 1. + t1729;
  t1792 = Sin(var1[7]);
  t1865 = Cos(var1[4]);
  t1899 = -1. + t1726;
  t1595 = t1416*t1364;
  t1685 = -1.*t1560*t1459;
  t1697 = t1595 + t1685;
  t1824 = t1416*t1560;
  t1832 = t1364*t1459;
  t1844 = t1824 + t1832;
  t1939 = Cos(var1[8]);
  t1943 = -1.*t1939;
  t1944 = 1. + t1943;
  t1969 = Sin(var1[8]);
  t1900 = -4.e-6*t1865*t1899*t1238;
  t1904 = 1.6e-11*t1899;
  t1909 = 1. + t1904;
  t1911 = t1909*t1697;
  t1914 = 4.e-6*t1844*t1792;
  t1917 = t1900 + t1911 + t1914;
  t2076 = -1. + t1939;
  t2021 = -1.*t1865*t1726*t1238;
  t2023 = 4.e-6*t1899*t1697;
  t2026 = t1844*t1792;
  t2041 = t2021 + t2023 + t2026;
  t1983 = -1.000000000016*t1762;
  t1985 = 1. + t1983;
  t1987 = t1985*t1844;
  t1995 = t1865*t1238*t1792;
  t1996 = -4.e-6*t1697*t1792;
  t1999 = t1987 + t1995 + t1996;
  t1489 = -0.15121*t1459;
  t1522 = t1446 + t1489;
  t1566 = 0.15121*t1459;
  t1583 = t1446 + t1566;
  t1712 = -1.2484e-7*var1[7];
  t1790 = -1.5499600000248e-7*t1762;
  t1795 = 1.124840000016e-6*t1792;
  t1803 = t1712 + t1790 + t1795;
  t1849 = 0.281210000008499*t1762;
  t1851 = 0.03874900000062*t1792;
  t1858 = t1849 + t1851;
  t1874 = 4.9936e-13*var1[7];
  t1876 = -0.03874900000062*t1762;
  t1884 = 0.281210000004*t1792;
  t1887 = t1874 + t1876 + t1884;
  t2155 = t8*t1865*t1416*t1300;
  t2157 = t8*t1865*t1204*t1459;
  t2163 = t2155 + t2157;
  t2171 = -1.*t8*t1865*t1204*t1416;
  t2176 = t8*t1865*t1300*t1459;
  t2177 = t2171 + t2176;
  t1919 = -1.284e-8*var1[8];
  t1968 = -1.5499600000248e-7*t1944;
  t1972 = 2.012840000032e-6*t1969;
  t1975 = t1919 + t1968 + t1972;
  t2000 = 0.503210000016051*t1944;
  t2003 = 0.03874900000062*t1969;
  t2004 = t2000 + t2003;
  t2044 = 5.136e-14*var1[8];
  t2051 = -0.03874900000062*t1944;
  t2060 = 0.503210000008*t1969;
  t2066 = t2044 + t2051 + t2060;
  t2078 = 1.6e-11*t2076;
  t2093 = 1. + t2078;
  t2201 = -4.e-6*t8*t1899*t1294;
  t2202 = t1909*t2163;
  t2203 = 4.e-6*t2177*t1792;
  t2207 = t2201 + t2202 + t2203;
  t2254 = -1.*t8*t1726*t1294;
  t2261 = 4.e-6*t1899*t2163;
  t2262 = t2177*t1792;
  t2264 = t2254 + t2261 + t2262;
  t2219 = t1985*t2177;
  t2228 = t8*t1294*t1792;
  t2237 = -4.e-6*t2163*t1792;
  t2240 = t2219 + t2228 + t2237;
  t2125 = -1.000000000016*t1944;
  t2131 = 1. + t2125;
  t2332 = t8*t1204*t1294;
  t2334 = -1.*t1238*t1300;
  t2343 = t2332 + t2334;
  t2347 = t1204*t1238;
  t2351 = t8*t1294*t1300;
  t2360 = t2347 + t2351;
  t2367 = t1416*t2343;
  t2370 = -1.*t2360*t1459;
  t2375 = t2367 + t2370;
  t2378 = t1416*t2360;
  t2379 = t2343*t1459;
  t2381 = t2378 + t2379;
  t2392 = t1985*t2381;
  t2398 = -4.e-6*t2375*t1792;
  t2402 = t2392 + t2398;
  t2385 = t1909*t2375;
  t2386 = 4.e-6*t2381*t1792;
  t2388 = t2385 + t2386;
  t2418 = 4.e-6*t1899*t2375;
  t2420 = t2381*t1792;
  t2425 = t2418 + t2420;
  t2539 = -1.*t8*t1204*t1294;
  t2541 = t1238*t1300;
  t2551 = t2539 + t2541;
  t2574 = -1.*t1416*t2551;
  t2578 = t2574 + t2370;
  t2582 = -1.*t2551*t1459;
  t2583 = t2378 + t2582;
  t2601 = t1985*t2583;
  t2605 = -4.e-6*t2578*t1792;
  t2607 = t2601 + t2605;
  t2586 = t1909*t2578;
  t2590 = 4.e-6*t2583*t1792;
  t2592 = t2586 + t2590;
  t2621 = 4.e-6*t1899*t2578;
  t2628 = t2583*t1792;
  t2634 = t2621 + t2628;
  t2716 = t1416*t2551;
  t2722 = t2360*t1459;
  t2725 = t2716 + t2722;
  t2764 = -1.*t8*t1865*t1726;
  t2765 = -4.e-6*t1726*t2583;
  t2769 = -1.000000000016*t2725*t1792;
  t2773 = t2764 + t2765 + t2769;
  t2780 = t1726*t2725;
  t2788 = -1.*t8*t1865*t1792;
  t2789 = -4.e-6*t2583*t1792;
  t2793 = t2780 + t2788 + t2789;
  t2743 = 4.e-6*t1726*t2725;
  t2745 = -4.e-6*t8*t1865*t1792;
  t2746 = -1.6e-11*t2583*t1792;
  t2756 = t2743 + t2745 + t2746;
  t2880 = 4.e-6*t8*t1865*t1899;
  t2881 = t1909*t2583;
  t2882 = 4.e-6*t2725*t1792;
  t2883 = t2880 + t2881 + t2882;
  t2861 = t8*t1865*t1726;
  t2863 = 4.e-6*t1899*t2583;
  t2865 = t2725*t1792;
  t2868 = t2861 + t2863 + t2865;
  t2916 = t1985*t2725;
  t2917 = t2916 + t2788 + t2789;
  p_output1[0]=1.;
  p_output1[1]=t1364*t1522 + t1560*t1583 + t1697*t1803 + t1844*t1858 - 1.*t1238*t1865*t1887 + t1917*t1975 + t1999*t2004 + t2041*t2066 - 0.03875*(t1969*t1999 + t1939*t2041 + 4.e-6*t1917*t2076) + 0.14871*(4.e-6*t1969*t1999 + 4.e-6*t2041*t2076 + t1917*t2093) + 0.80321*(-4.e-6*t1917*t1969 - 1.*t1969*t2041 + t1999*t2131);
  p_output1[2]=t1803*t2163 + t1858*t2177 + t1975*t2207 + t2004*t2240 + t2066*t2264 - 0.03875*(4.e-6*t2076*t2207 + t1969*t2240 + t1939*t2264) + 0.80321*(-4.e-6*t1969*t2207 + t2131*t2240 - 1.*t1969*t2264) + 0.14871*(t2093*t2207 + 4.e-6*t1969*t2240 + 4.e-6*t2076*t2264) + t1300*t1522*t1865*t8 - 1.*t1204*t1583*t1865*t8 - 1.*t1294*t1887*t8;
  p_output1[3]=t1522*t2343 + t1583*t2360 + t1803*t2375 + t1858*t2381 + t1975*t2388 + t2004*t2402 + t2066*t2425 - 0.03875*(4.e-6*t2076*t2388 + t1969*t2402 + t1939*t2425) + 0.80321*(-4.e-6*t1969*t2388 + t2131*t2402 - 1.*t1969*t2425) + 0.14871*(t2093*t2388 + 4.e-6*t1969*t2402 + 4.e-6*t2076*t2425);
  p_output1[4]=(-0.15121*t1416 + t1566)*t2360 + (0.15121*t1416 + t1566)*t2551 + t1803*t2578 + t1858*t2583 + t1975*t2592 + t2004*t2607 + t2066*t2634 - 0.03875*(4.e-6*t2076*t2592 + t1969*t2607 + t1939*t2634) + 0.80321*(-4.e-6*t1969*t2592 + t2131*t2607 - 1.*t1969*t2634) + 0.14871*(t2093*t2592 + 4.e-6*t1969*t2607 + 4.e-6*t2076*t2634);
  p_output1[5]=(-1.2484e-7 + 1.124840000016e-6*t1726 - 1.5499600000248e-7*t1792)*t2583 + (0.03874900000062*t1726 + 0.281210000008499*t1792)*t2725 + t1975*t2756 + t2004*t2773 + t2066*t2793 - 0.03875*(4.e-6*t2076*t2756 + t1969*t2773 + t1939*t2793) + 0.80321*(-4.e-6*t1969*t2756 + t2131*t2773 - 1.*t1969*t2793) + 0.14871*(t2093*t2756 + 4.e-6*t1969*t2773 + 4.e-6*t2076*t2793) + (4.9936e-13 + 0.281210000004*t1726 - 0.03874900000062*t1792)*t1865*t8;
  p_output1[6]=(5.136e-14 + 0.503210000008*t1939 - 0.03874900000062*t1969)*t2868 + (-1.284e-8 + 2.012840000032e-6*t1939 - 1.5499600000248e-7*t1969)*t2883 + (0.03874900000062*t1939 + 0.503210000016051*t1969)*t2917 + 0.14871*(-4.e-6*t1969*t2868 - 1.6e-11*t1969*t2883 + 4.e-6*t1939*t2917) - 0.03875*(-1.*t1969*t2868 - 4.e-6*t1969*t2883 + t1939*t2917) + 0.80321*(-1.*t1939*t2868 - 4.e-6*t1939*t2883 - 1.000000000016*t1969*t2917);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_foot_clearance_FlFootParallelStance1.hh"

namespace ParallelStance1
{

void J_foot_clearance_FlFootParallelStance1_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
