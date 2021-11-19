/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:30:47 GMT+01:00
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
  double t218;
  double t567;
  double t581;
  double t214;
  double t661;
  double t842;
  double t887;
  double t965;
  double t978;
  double t1009;
  double t511;
  double t685;
  double t839;
  double t1163;
  double t1188;
  double t1226;
  double t1428;
  double t1433;
  double t1444;
  double t1471;
  double t1667;
  double t1711;
  double t1329;
  double t1344;
  double t1407;
  double t1577;
  double t1592;
  double t1596;
  double t1743;
  double t1753;
  double t1755;
  double t1769;
  double t1712;
  double t1723;
  double t1726;
  double t1731;
  double t1734;
  double t1739;
  double t1879;
  double t1828;
  double t1829;
  double t1832;
  double t1834;
  double t1800;
  double t1805;
  double t1806;
  double t1807;
  double t1808;
  double t1810;
  double t1090;
  double t1093;
  double t1263;
  double t1290;
  double t1418;
  double t1451;
  double t1486;
  double t1499;
  double t1597;
  double t1658;
  double t1664;
  double t1696;
  double t1698;
  double t1700;
  double t1706;
  double t1952;
  double t1953;
  double t1954;
  double t1958;
  double t1959;
  double t1962;
  double t1740;
  double t1759;
  double t1783;
  double t1796;
  double t1819;
  double t1820;
  double t1822;
  double t1836;
  double t1839;
  double t1844;
  double t1862;
  double t1885;
  double t1886;
  double t1973;
  double t1974;
  double t1979;
  double t1988;
  double t2042;
  double t2052;
  double t2053;
  double t2054;
  double t1994;
  double t2006;
  double t2008;
  double t2026;
  double t1919;
  double t1921;
  double t2127;
  double t2133;
  double t2134;
  double t2152;
  double t2163;
  double t2164;
  double t2167;
  double t2169;
  double t2172;
  double t2178;
  double t2184;
  double t2185;
  double t2199;
  double t2202;
  double t2206;
  double t2190;
  double t2191;
  double t2192;
  double t2219;
  double t2225;
  double t2236;
  double t2327;
  double t2328;
  double t2329;
  double t2345;
  double t2346;
  double t2353;
  double t2355;
  double t2371;
  double t2373;
  double t2375;
  double t2358;
  double t2359;
  double t2360;
  double t2394;
  double t2400;
  double t2405;
  double t2503;
  double t2505;
  double t2506;
  double t2551;
  double t2555;
  double t2558;
  double t2559;
  double t2578;
  double t2579;
  double t2594;
  double t2595;
  double t2530;
  double t2536;
  double t2542;
  double t2543;
  double t2697;
  double t2699;
  double t2705;
  double t2715;
  double t2683;
  double t2685;
  double t2689;
  double t2690;
  double t2733;
  double t2739;
  t218 = Cos(var1[5]);
  t567 = Sin(var1[3]);
  t581 = Sin(var1[4]);
  t214 = Cos(var1[3]);
  t661 = Sin(var1[5]);
  t842 = Cos(var1[6]);
  t887 = -1.*t842;
  t965 = 1. + t887;
  t978 = 0.15121*t965;
  t1009 = Sin(var1[6]);
  t511 = t214*t218;
  t685 = -1.*t567*t581*t661;
  t839 = t511 + t685;
  t1163 = t218*t567*t581;
  t1188 = t214*t661;
  t1226 = t1163 + t1188;
  t1428 = Cos(var1[7]);
  t1433 = -1.*t1428;
  t1444 = 1. + t1433;
  t1471 = Sin(var1[7]);
  t1667 = Cos(var1[4]);
  t1711 = -1. + t1428;
  t1329 = t842*t839;
  t1344 = -1.*t1226*t1009;
  t1407 = t1329 + t1344;
  t1577 = t842*t1226;
  t1592 = t839*t1009;
  t1596 = t1577 + t1592;
  t1743 = Cos(var1[8]);
  t1753 = -1.*t1743;
  t1755 = 1. + t1753;
  t1769 = Sin(var1[8]);
  t1712 = -4.e-6*t1667*t1711*t567;
  t1723 = 1.6e-11*t1711;
  t1726 = 1. + t1723;
  t1731 = t1726*t1407;
  t1734 = 4.e-6*t1596*t1471;
  t1739 = t1712 + t1731 + t1734;
  t1879 = -1. + t1743;
  t1828 = -1.*t1667*t1428*t567;
  t1829 = 4.e-6*t1711*t1407;
  t1832 = t1596*t1471;
  t1834 = t1828 + t1829 + t1832;
  t1800 = -1.000000000016*t1444;
  t1805 = 1. + t1800;
  t1806 = t1805*t1596;
  t1807 = t1667*t567*t1471;
  t1808 = -4.e-6*t1407*t1471;
  t1810 = t1806 + t1807 + t1808;
  t1090 = -0.15121*t1009;
  t1093 = t978 + t1090;
  t1263 = 0.15121*t1009;
  t1290 = t978 + t1263;
  t1418 = -1.2484e-7*var1[7];
  t1451 = -1.5499600000248e-7*t1444;
  t1486 = 1.124840000016e-6*t1471;
  t1499 = t1418 + t1451 + t1486;
  t1597 = 0.281210000008499*t1444;
  t1658 = 0.03874900000062*t1471;
  t1664 = t1597 + t1658;
  t1696 = 4.9936e-13*var1[7];
  t1698 = -0.03874900000062*t1444;
  t1700 = 0.281210000004*t1471;
  t1706 = t1696 + t1698 + t1700;
  t1952 = t214*t1667*t842*t661;
  t1953 = t214*t1667*t218*t1009;
  t1954 = t1952 + t1953;
  t1958 = -1.*t214*t1667*t218*t842;
  t1959 = t214*t1667*t661*t1009;
  t1962 = t1958 + t1959;
  t1740 = -1.284e-8*var1[8];
  t1759 = -1.5499600000248e-7*t1755;
  t1783 = 2.012840000032e-6*t1769;
  t1796 = t1740 + t1759 + t1783;
  t1819 = 0.503210000016051*t1755;
  t1820 = 0.03874900000062*t1769;
  t1822 = t1819 + t1820;
  t1836 = 5.136e-14*var1[8];
  t1839 = -0.03874900000062*t1755;
  t1844 = 0.503210000008*t1769;
  t1862 = t1836 + t1839 + t1844;
  t1885 = 1.6e-11*t1879;
  t1886 = 1. + t1885;
  t1973 = -4.e-6*t214*t1711*t581;
  t1974 = t1726*t1954;
  t1979 = 4.e-6*t1962*t1471;
  t1988 = t1973 + t1974 + t1979;
  t2042 = -1.*t214*t1428*t581;
  t2052 = 4.e-6*t1711*t1954;
  t2053 = t1962*t1471;
  t2054 = t2042 + t2052 + t2053;
  t1994 = t1805*t1962;
  t2006 = t214*t581*t1471;
  t2008 = -4.e-6*t1954*t1471;
  t2026 = t1994 + t2006 + t2008;
  t1919 = -1.000000000016*t1755;
  t1921 = 1. + t1919;
  t2127 = t214*t218*t581;
  t2133 = -1.*t567*t661;
  t2134 = t2127 + t2133;
  t2152 = t218*t567;
  t2163 = t214*t581*t661;
  t2164 = t2152 + t2163;
  t2167 = t842*t2134;
  t2169 = -1.*t2164*t1009;
  t2172 = t2167 + t2169;
  t2178 = t842*t2164;
  t2184 = t2134*t1009;
  t2185 = t2178 + t2184;
  t2199 = t1805*t2185;
  t2202 = -4.e-6*t2172*t1471;
  t2206 = t2199 + t2202;
  t2190 = t1726*t2172;
  t2191 = 4.e-6*t2185*t1471;
  t2192 = t2190 + t2191;
  t2219 = 4.e-6*t1711*t2172;
  t2225 = t2185*t1471;
  t2236 = t2219 + t2225;
  t2327 = -1.*t214*t218*t581;
  t2328 = t567*t661;
  t2329 = t2327 + t2328;
  t2345 = -1.*t842*t2329;
  t2346 = t2345 + t2169;
  t2353 = -1.*t2329*t1009;
  t2355 = t2178 + t2353;
  t2371 = t1805*t2355;
  t2373 = -4.e-6*t2346*t1471;
  t2375 = t2371 + t2373;
  t2358 = t1726*t2346;
  t2359 = 4.e-6*t2355*t1471;
  t2360 = t2358 + t2359;
  t2394 = 4.e-6*t1711*t2346;
  t2400 = t2355*t1471;
  t2405 = t2394 + t2400;
  t2503 = t842*t2329;
  t2505 = t2164*t1009;
  t2506 = t2503 + t2505;
  t2551 = -1.*t214*t1667*t1428;
  t2555 = -4.e-6*t1428*t2355;
  t2558 = -1.000000000016*t2506*t1471;
  t2559 = t2551 + t2555 + t2558;
  t2578 = t1428*t2506;
  t2579 = -1.*t214*t1667*t1471;
  t2594 = -4.e-6*t2355*t1471;
  t2595 = t2578 + t2579 + t2594;
  t2530 = 4.e-6*t1428*t2506;
  t2536 = -4.e-6*t214*t1667*t1471;
  t2542 = -1.6e-11*t2355*t1471;
  t2543 = t2530 + t2536 + t2542;
  t2697 = 4.e-6*t214*t1667*t1711;
  t2699 = t1726*t2355;
  t2705 = 4.e-6*t2506*t1471;
  t2715 = t2697 + t2699 + t2705;
  t2683 = t214*t1667*t1428;
  t2685 = 4.e-6*t1711*t2355;
  t2689 = t2506*t1471;
  t2690 = t2683 + t2685 + t2689;
  t2733 = t1805*t2506;
  t2739 = t2733 + t2579 + t2594;
  p_output1[0]=1.;
  p_output1[1]=t1226*t1290 + t1407*t1499 + t1596*t1664 + t1739*t1796 + t1810*t1822 + t1834*t1862 - 0.03875*(t1769*t1810 + t1743*t1834 + 4.e-6*t1739*t1879) + 0.14871*(4.e-6*t1769*t1810 + 4.e-6*t1834*t1879 + t1739*t1886) + 0.80321*(-4.e-6*t1739*t1769 - 1.*t1769*t1834 + t1810*t1921) - 1.*t1667*t1706*t567 + t1093*t839;
  p_output1[2]=t1499*t1954 + t1664*t1962 + t1796*t1988 + t1822*t2026 + t1862*t2054 - 0.03875*(4.e-6*t1879*t1988 + t1769*t2026 + t1743*t2054) + 0.80321*(-4.e-6*t1769*t1988 + t1921*t2026 - 1.*t1769*t2054) + 0.14871*(t1886*t1988 + 4.e-6*t1769*t2026 + 4.e-6*t1879*t2054) - 1.*t1290*t1667*t214*t218 - 1.*t1706*t214*t581 + t1093*t1667*t214*t661;
  p_output1[3]=t1093*t2134 + t1290*t2164 + t1499*t2172 + t1664*t2185 + t1796*t2192 + t1822*t2206 + t1862*t2236 - 0.03875*(4.e-6*t1879*t2192 + t1769*t2206 + t1743*t2236) + 0.80321*(-4.e-6*t1769*t2192 + t1921*t2206 - 1.*t1769*t2236) + 0.14871*(t1886*t2192 + 4.e-6*t1769*t2206 + 4.e-6*t1879*t2236);
  p_output1[4]=t1499*t2346 + t1664*t2355 + t1796*t2360 + t1822*t2375 + t1862*t2405 - 0.03875*(4.e-6*t1879*t2360 + t1769*t2375 + t1743*t2405) + 0.80321*(-4.e-6*t1769*t2360 + t1921*t2375 - 1.*t1769*t2405) + 0.14871*(t1886*t2360 + 4.e-6*t1769*t2375 + 4.e-6*t1879*t2405) + t2164*(t1263 - 0.15121*t842) + t2329*(t1263 + 0.15121*t842);
  p_output1[5]=(4.9936e-13 + 0.281210000004*t1428 - 0.03874900000062*t1471)*t1667*t214 + (-1.2484e-7 + 1.124840000016e-6*t1428 - 1.5499600000248e-7*t1471)*t2355 + (0.03874900000062*t1428 + 0.281210000008499*t1471)*t2506 + t1796*t2543 + t1822*t2559 + t1862*t2595 - 0.03875*(4.e-6*t1879*t2543 + t1769*t2559 + t1743*t2595) + 0.80321*(-4.e-6*t1769*t2543 + t1921*t2559 - 1.*t1769*t2595) + 0.14871*(t1886*t2543 + 4.e-6*t1769*t2559 + 4.e-6*t1879*t2595);
  p_output1[6]=(5.136e-14 + 0.503210000008*t1743 - 0.03874900000062*t1769)*t2690 + (-1.284e-8 + 2.012840000032e-6*t1743 - 1.5499600000248e-7*t1769)*t2715 + (0.03874900000062*t1743 + 0.503210000016051*t1769)*t2739 + 0.14871*(-4.e-6*t1769*t2690 - 1.6e-11*t1769*t2715 + 4.e-6*t1743*t2739) - 0.03875*(-1.*t1769*t2690 - 4.e-6*t1769*t2715 + t1743*t2739) + 0.80321*(-1.*t1743*t2690 - 4.e-6*t1743*t2715 - 1.000000000016*t1769*t2739);
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

#include "J_foot_clearance_FlFootParallelStance.hh"

namespace ParallelStance
{

void J_foot_clearance_FlFootParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
