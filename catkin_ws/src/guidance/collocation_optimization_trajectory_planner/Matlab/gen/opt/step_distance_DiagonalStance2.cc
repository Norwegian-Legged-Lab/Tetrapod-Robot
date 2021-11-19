/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:31:12 GMT+01:00
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
  double t1244;
  double t177;
  double t626;
  double t778;
  double t796;
  double t1006;
  double t1010;
  double t1302;
  double t1404;
  double t1448;
  double t1456;
  double t409;
  double t1528;
  double t1480;
  double t1579;
  double t1594;
  double t1605;
  double t1644;
  double t1645;
  double t1646;
  double t1676;
  double t1712;
  double t1720;
  double t1739;
  double t1875;
  double t1799;
  double t1801;
  double t1802;
  double t1803;
  double t1823;
  double t1828;
  double t1899;
  double t1903;
  double t1904;
  double t1906;
  double t1936;
  double t1943;
  double t1956;
  double t1985;
  double t1986;
  double t1994;
  double t2076;
  double t2080;
  double t2082;
  double t2084;
  double t2089;
  double t2145;
  double t2146;
  double t2149;
  double t2153;
  double t2194;
  double t2114;
  double t2121;
  double t2126;
  double t2160;
  double t2161;
  double t2162;
  double t2235;
  double t2237;
  double t2240;
  double t2246;
  double t2195;
  double t2207;
  double t2209;
  double t2219;
  double t2224;
  double t2226;
  double t2349;
  double t2309;
  double t2310;
  double t2322;
  double t2329;
  double t2259;
  double t2260;
  double t2264;
  double t2268;
  double t2275;
  double t2278;
  double t1136;
  double t1443;
  double t1453;
  double t1464;
  double t1471;
  double t956;
  double t1096;
  double t2447;
  double t1508;
  double t1513;
  double t2458;
  double t1552;
  double t1554;
  double t1557;
  double t1560;
  double t1563;
  double t2451;
  double t2464;
  double t2465;
  double t2474;
  double t2479;
  double t2485;
  double t1608;
  double t1617;
  double t1634;
  double t1724;
  double t1784;
  double t1785;
  double t2508;
  double t2509;
  double t2516;
  double t2529;
  double t2532;
  double t2537;
  double t1845;
  double t1869;
  double t1888;
  double t1895;
  double t1897;
  double t1927;
  double t1929;
  double t1930;
  double t1931;
  double t1935;
  double t2542;
  double t2550;
  double t2551;
  double t2554;
  double t2563;
  double t2571;
  double t2578;
  double t2579;
  double t2014;
  double t2018;
  double t2586;
  double t2587;
  double t2591;
  double t2597;
  double t2046;
  double t2048;
  double t2092;
  double t2096;
  double t2100;
  double t2106;
  double t2128;
  double t2150;
  double t2154;
  double t2156;
  double t2166;
  double t2169;
  double t2170;
  double t2174;
  double t2178;
  double t2180;
  double t2181;
  double t2673;
  double t2680;
  double t2686;
  double t2690;
  double t2691;
  double t2692;
  double t2227;
  double t2243;
  double t2248;
  double t2256;
  double t2291;
  double t2294;
  double t2299;
  double t2333;
  double t2334;
  double t2335;
  double t2341;
  double t2352;
  double t2360;
  double t2709;
  double t2711;
  double t2712;
  double t2714;
  double t2742;
  double t2743;
  double t2744;
  double t2750;
  double t2721;
  double t2722;
  double t2726;
  double t2730;
  double t2419;
  double t2425;
  t1244 = Cos(var1[10]);
  t177 = Cos(var1[4]);
  t626 = Cos(var1[9]);
  t778 = -1.*t626;
  t796 = 1. + t778;
  t1006 = Sin(var1[9]);
  t1010 = -0.15121*t1006;
  t1302 = -1.*t1244;
  t1404 = 1. + t1302;
  t1448 = -1. + t1244;
  t1456 = Sin(var1[10]);
  t409 = Cos(var1[5]);
  t1528 = Sin(var1[5]);
  t1480 = Sin(var1[4]);
  t1579 = -1.*t177*t409*t1006;
  t1594 = -1.*t626*t177*t1528;
  t1605 = t1579 + t1594;
  t1644 = t626*t177*t409;
  t1645 = -1.*t177*t1006*t1528;
  t1646 = t1644 + t1645;
  t1676 = Cos(var1[11]);
  t1712 = -1.*t1676;
  t1720 = 1. + t1712;
  t1739 = Sin(var1[11]);
  t1875 = -1. + t1676;
  t1799 = t1456*t1480;
  t1801 = -4.e-6*t1456*t1605;
  t1802 = -1.000000000016*t1404;
  t1803 = 1. + t1802;
  t1823 = t1803*t1646;
  t1828 = t1799 + t1801 + t1823;
  t1899 = t1244*t1480;
  t1903 = 4.e-6*t1404*t1605;
  t1904 = -1.*t1456*t1646;
  t1906 = t1899 + t1903 + t1904;
  t1936 = 4.e-6*t1404*t1480;
  t1943 = 1.6e-11*t1448;
  t1956 = 1. + t1943;
  t1985 = t1956*t1605;
  t1986 = 4.e-6*t1456*t1646;
  t1994 = t1936 + t1985 + t1986;
  t2076 = Cos(var1[6]);
  t2080 = -1.*t2076;
  t2082 = 1. + t2080;
  t2084 = 0.15121*t2082;
  t2089 = Sin(var1[6]);
  t2145 = Cos(var1[7]);
  t2146 = -1.*t2145;
  t2149 = 1. + t2146;
  t2153 = Sin(var1[7]);
  t2194 = -1. + t2145;
  t2114 = -1.*t177*t2076*t1528;
  t2121 = -1.*t177*t409*t2089;
  t2126 = t2114 + t2121;
  t2160 = t177*t409*t2076;
  t2161 = -1.*t177*t1528*t2089;
  t2162 = t2160 + t2161;
  t2235 = Cos(var1[8]);
  t2237 = -1.*t2235;
  t2240 = 1. + t2237;
  t2246 = Sin(var1[8]);
  t2195 = 4.e-6*t2194*t1480;
  t2207 = 1.6e-11*t2194;
  t2209 = 1. + t2207;
  t2219 = t2209*t2126;
  t2224 = 4.e-6*t2162*t2153;
  t2226 = t2195 + t2219 + t2224;
  t2349 = -1. + t2235;
  t2309 = t2145*t1480;
  t2310 = 4.e-6*t2194*t2126;
  t2322 = t2162*t2153;
  t2329 = t2309 + t2310 + t2322;
  t2259 = -1.000000000016*t2149;
  t2260 = 1. + t2259;
  t2264 = t2260*t2162;
  t2268 = -1.*t1480*t2153;
  t2275 = -4.e-6*t2126*t2153;
  t2278 = t2264 + t2268 + t2275;
  t1136 = -4.9936e-13*var1[10];
  t1443 = -0.038749*t1404;
  t1453 = 6.19984e-13*t1448;
  t1464 = -0.281210000004*t1456;
  t1471 = t1136 + t1443 + t1453 + t1464;
  t956 = 0.15121*t796;
  t1096 = t956 + t1010;
  t2447 = Sin(var1[3]);
  t1508 = -0.15121*t796;
  t1513 = t1508 + t1010;
  t2458 = Cos(var1[3]);
  t1552 = -1.2484e-7*var1[10];
  t1554 = 2.479936e-18*t1404;
  t1557 = -1.54996e-7*t1448;
  t1560 = 1.124840000016e-6*t1456;
  t1563 = t1552 + t1554 + t1557 + t1560;
  t2451 = t409*t2447*t1480;
  t2464 = t2458*t1528;
  t2465 = t2451 + t2464;
  t2474 = t2458*t409;
  t2479 = -1.*t2447*t1480*t1528;
  t2485 = t2474 + t2479;
  t1608 = 0.281210000008499*t1404;
  t1617 = -0.03874900000062*t1456;
  t1634 = t1608 + t1617;
  t1724 = 0.50315000001605*t1720;
  t1784 = -0.0398890000006382*t1739;
  t1785 = t1724 + t1784;
  t2508 = -1.*t1006*t2465;
  t2509 = t626*t2485;
  t2516 = t2508 + t2509;
  t2529 = t626*t2465;
  t2532 = t1006*t2485;
  t2537 = t2529 + t2532;
  t1845 = -5.04e-14*var1[11];
  t1869 = -0.039889*t1720;
  t1888 = 6.38224e-13*t1875;
  t1895 = -0.503150000008*t1739;
  t1897 = t1845 + t1869 + t1888 + t1895;
  t1927 = -1.26e-8*var1[11];
  t1929 = 2.552896e-18*t1720;
  t1930 = -1.59556e-7*t1875;
  t1931 = 2.012600000032e-6*t1739;
  t1935 = t1927 + t1929 + t1930 + t1931;
  t2542 = -1.*t177*t1456*t2447;
  t2550 = -4.e-6*t1456*t2516;
  t2551 = t1803*t2537;
  t2554 = t2542 + t2550 + t2551;
  t2563 = -1.*t1244*t177*t2447;
  t2571 = 4.e-6*t1404*t2516;
  t2578 = -1.*t1456*t2537;
  t2579 = t2563 + t2571 + t2578;
  t2014 = 1.6e-11*t1875;
  t2018 = 1. + t2014;
  t2586 = -4.e-6*t1404*t177*t2447;
  t2587 = t1956*t2516;
  t2591 = 4.e-6*t1456*t2537;
  t2597 = t2586 + t2587 + t2591;
  t2046 = -1.000000000016*t1720;
  t2048 = 1. + t2046;
  t2092 = -0.15121*t2089;
  t2096 = t2084 + t2092;
  t2100 = 0.15121*t2089;
  t2106 = t2084 + t2100;
  t2128 = -1.2484e-7*var1[7];
  t2150 = -1.5499600000248e-7*t2149;
  t2154 = 1.124840000016e-6*t2153;
  t2156 = t2128 + t2150 + t2154;
  t2166 = 0.281210000008499*t2149;
  t2169 = 0.03874900000062*t2153;
  t2170 = t2166 + t2169;
  t2174 = 4.9936e-13*var1[7];
  t2178 = -0.03874900000062*t2149;
  t2180 = 0.281210000004*t2153;
  t2181 = t2174 + t2178 + t2180;
  t2673 = t2076*t2485;
  t2680 = -1.*t2465*t2089;
  t2686 = t2673 + t2680;
  t2690 = t2076*t2465;
  t2691 = t2485*t2089;
  t2692 = t2690 + t2691;
  t2227 = -1.284e-8*var1[8];
  t2243 = -1.5499600000248e-7*t2240;
  t2248 = 2.012840000032e-6*t2246;
  t2256 = t2227 + t2243 + t2248;
  t2291 = 0.503210000016051*t2240;
  t2294 = 0.03874900000062*t2246;
  t2299 = t2291 + t2294;
  t2333 = 5.136e-14*var1[8];
  t2334 = -0.03874900000062*t2240;
  t2335 = 0.503210000008*t2246;
  t2341 = t2333 + t2334 + t2335;
  t2352 = 1.6e-11*t2349;
  t2360 = 1. + t2352;
  t2709 = -4.e-6*t177*t2194*t2447;
  t2711 = t2209*t2686;
  t2712 = 4.e-6*t2692*t2153;
  t2714 = t2709 + t2711 + t2712;
  t2742 = -1.*t177*t2145*t2447;
  t2743 = 4.e-6*t2194*t2686;
  t2744 = t2692*t2153;
  t2750 = t2742 + t2743 + t2744;
  t2721 = t2260*t2692;
  t2722 = t177*t2447*t2153;
  t2726 = -4.e-6*t2686*t2153;
  t2730 = t2721 + t2722 + t2726;
  t2419 = -1.000000000016*t2240;
  t2425 = 1. + t2419;
  p_output1[0]=-1.*t1471*t1480 - 1.*t1563*t1605 - 1.*t1634*t1646 + t1513*t1528*t177 - 1.*t1785*t1828 - 1.*t1897*t1906 - 1.*t1935*t1994 + 0.041195*(-1.*t1739*t1828 + t1676*t1906 + 4.e-6*t1720*t1994) + 0.14871*(4.e-6*t1739*t1828 + 4.e-6*t1720*t1906 + t1994*t2018) - 0.803147*(t1739*t1906 - 4.e-6*t1739*t1994 + t1828*t2048) - 1.*t1528*t177*t2096 + t2126*t2156 + t2162*t2170 + t1480*t2181 + t2226*t2256 + t2278*t2299 + t2329*t2341 - 0.03875*(t2246*t2278 + t2235*t2329 + 4.e-6*t2226*t2349) + 0.14871*(4.e-6*t2246*t2278 + 4.e-6*t2329*t2349 + t2226*t2360) + 0.80321*(-4.e-6*t2226*t2246 - 1.*t2246*t2329 + t2278*t2425) - 1.*t1096*t177*t409 + t177*t2106*t409;
  p_output1[1]=t1471*t177*t2447 - 1.*t177*t2181*t2447 - 1.*t1096*t2465 + t2106*t2465 - 1.*t1513*t2485 + t2096*t2485 - 1.*t1563*t2516 - 1.*t1634*t2537 - 1.*t1785*t2554 - 1.*t1897*t2579 - 1.*t1935*t2597 + 0.041195*(-1.*t1739*t2554 + t1676*t2579 + 4.e-6*t1720*t2597) - 0.803147*(t2048*t2554 + t1739*t2579 - 4.e-6*t1739*t2597) + 0.14871*(4.e-6*t1739*t2554 + 4.e-6*t1720*t2579 + t2018*t2597) + t2156*t2686 + t2170*t2692 + t2256*t2714 + t2299*t2730 + t2341*t2750 - 0.03875*(4.e-6*t2349*t2714 + t2246*t2730 + t2235*t2750) + 0.80321*(-4.e-6*t2246*t2714 + t2425*t2730 - 1.*t2246*t2750) + 0.14871*(t2360*t2714 + 4.e-6*t2246*t2730 + 4.e-6*t2349*t2750);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 2, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "step_distance_DiagonalStance2.hh"

namespace DiagonalStance2
{

void step_distance_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
