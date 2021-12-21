/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 23:17:45 GMT+01:00
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
  double t729;
  double t747;
  double t778;
  double t915;
  double t1178;
  double t1374;
  double t1202;
  double t1234;
  double t1397;
  double t284;
  double t304;
  double t378;
  double t477;
  double t970;
  double t1305;
  double t1422;
  double t1431;
  double t807;
  double t1504;
  double t1529;
  double t1545;
  double t1688;
  double t1132;
  double t941;
  double t1053;
  double t1145;
  double t1164;
  double t1487;
  double t1494;
  double t1496;
  double t1548;
  double t1555;
  double t1608;
  double t1677;
  double t1683;
  double t1696;
  double t1716;
  double t1720;
  double t1721;
  double t1722;
  double t1735;
  double t1742;
  double t1575;
  double t1778;
  double t1779;
  double t1794;
  double t1796;
  double t1825;
  double t1840;
  double t1841;
  double t1842;
  double t1846;
  double t1853;
  double t1860;
  double t452;
  double t586;
  double t601;
  double t2158;
  double t2201;
  double t2181;
  double t2204;
  double t2222;
  double t2229;
  double t2292;
  double t2330;
  double t1579;
  double t1583;
  double t2227;
  double t2347;
  double t2353;
  double t2382;
  double t2399;
  double t2402;
  double t1767;
  double t1775;
  double t1868;
  double t1871;
  double t2162;
  double t2356;
  double t2435;
  double t2440;
  double t1876;
  double t1910;
  double t2450;
  double t2459;
  double t2481;
  double t2486;
  double t1950;
  double t1952;
  double t2502;
  double t2507;
  double t2512;
  double t2515;
  double t2052;
  double t2056;
  double t2080;
  double t2102;
  double t2104;
  double t2597;
  double t2613;
  double t2616;
  double t2665;
  double t2673;
  double t2675;
  double t2637;
  double t2680;
  double t2683;
  double t2721;
  double t2732;
  double t2753;
  double t2591;
  double t2692;
  double t2757;
  double t2761;
  double t2777;
  double t2796;
  double t2804;
  double t2806;
  double t2832;
  double t2839;
  double t2856;
  double t2857;
  t729 = Cos(var1[16]);
  t747 = -1.*t729;
  t778 = 1. + t747;
  t915 = Sin(var1[16]);
  t1178 = Cos(var1[4]);
  t1374 = Cos(var1[15]);
  t1202 = Cos(var1[5]);
  t1234 = Sin(var1[15]);
  t1397 = Sin(var1[5]);
  t284 = Cos(var1[17]);
  t304 = -1.*t284;
  t378 = 1. + t304;
  t477 = Sin(var1[17]);
  t970 = Sin(var1[4]);
  t1305 = -1.*t1178*t1202*t1234;
  t1422 = -1.*t1374*t1178*t1397;
  t1431 = t1305 + t1422;
  t807 = -2.7999999999999997e-11*t778;
  t1504 = t1374*t1178*t1202;
  t1529 = -1.*t1178*t1234*t1397;
  t1545 = t1504 + t1529;
  t1688 = 4.e-6*t778;
  t1132 = -7.e-6*t778;
  t941 = t807 + t915;
  t1053 = t941*t970;
  t1145 = -4.e-6*t915;
  t1164 = t1132 + t1145;
  t1487 = t1164*t1431;
  t1494 = -1.000000000016*t778;
  t1496 = 1. + t1494;
  t1548 = t1496*t1545;
  t1555 = t1053 + t1487 + t1548;
  t1608 = -1.000000000049*t778;
  t1677 = 1. + t1608;
  t1683 = t1677*t970;
  t1696 = -7.e-6*t915;
  t1716 = t1688 + t1696;
  t1720 = t1716*t1431;
  t1721 = -1.*t915;
  t1722 = t807 + t1721;
  t1735 = t1722*t1545;
  t1742 = t1683 + t1720 + t1735;
  t1575 = 4.e-6*t378;
  t1778 = 7.e-6*t915;
  t1779 = t1688 + t1778;
  t1794 = t1779*t970;
  t1796 = -6.5e-11*t778;
  t1825 = 1. + t1796;
  t1840 = t1825*t1431;
  t1841 = 4.e-6*t915;
  t1842 = t1132 + t1841;
  t1846 = t1842*t1545;
  t1853 = t1794 + t1840 + t1846;
  t1860 = -2.7999999999999997e-11*t378;
  t452 = -7.e-6*t378;
  t586 = 4.e-6*t477;
  t601 = t452 + t586;
  t2158 = Sin(var1[3]);
  t2201 = Cos(var1[3]);
  t2181 = t1202*t2158*t970;
  t2204 = t2201*t1397;
  t2222 = t2181 + t2204;
  t2229 = t2201*t1202;
  t2292 = -1.*t2158*t970*t1397;
  t2330 = t2229 + t2292;
  t1579 = 7.e-6*t477;
  t1583 = t1575 + t1579;
  t2227 = -1.*t1234*t2222;
  t2347 = t1374*t2330;
  t2353 = t2227 + t2347;
  t2382 = t1374*t2222;
  t2399 = t1234*t2330;
  t2402 = t2382 + t2399;
  t1767 = -6.5e-11*t378;
  t1775 = 1. + t1767;
  t1868 = -1.*t477;
  t1871 = t1860 + t1868;
  t2162 = -1.*t1178*t941*t2158;
  t2356 = t1164*t2353;
  t2435 = t1496*t2402;
  t2440 = t2162 + t2356 + t2435;
  t1876 = -1.000000000049*t378;
  t1910 = 1. + t1876;
  t2450 = -1.*t1677*t1178*t2158;
  t2459 = t1716*t2353;
  t2481 = t1722*t2402;
  t2486 = t2450 + t2459 + t2481;
  t1950 = -7.e-6*t477;
  t1952 = t1575 + t1950;
  t2502 = -1.*t1178*t1779*t2158;
  t2507 = t1825*t2353;
  t2512 = t1842*t2402;
  t2515 = t2502 + t2507 + t2512;
  t2052 = -1.000000000016*t378;
  t2056 = 1. + t2052;
  t2080 = t1860 + t477;
  t2102 = -4.e-6*t477;
  t2104 = t452 + t2102;
  t2597 = -1.*t2201*t1202*t970;
  t2613 = t2158*t1397;
  t2616 = t2597 + t2613;
  t2665 = t1202*t2158;
  t2673 = t2201*t970*t1397;
  t2675 = t2665 + t2673;
  t2637 = -1.*t1234*t2616;
  t2680 = t1374*t2675;
  t2683 = t2637 + t2680;
  t2721 = t1374*t2616;
  t2732 = t1234*t2675;
  t2753 = t2721 + t2732;
  t2591 = t2201*t1178*t941;
  t2692 = t1164*t2683;
  t2757 = t1496*t2753;
  t2761 = t2591 + t2692 + t2757;
  t2777 = t1677*t2201*t1178;
  t2796 = t1716*t2683;
  t2804 = t1722*t2753;
  t2806 = t2777 + t2796 + t2804;
  t2832 = t2201*t1178*t1779;
  t2839 = t1825*t2683;
  t2856 = t1842*t2753;
  t2857 = t2832 + t2839 + t2856;
  p_output1[0]=-1.*t1583*t1742 - 1.*t1775*t1853 - 4.e-6*(t1555*t1871 + t1742*t1910 + t1853*t1952) + 7.e-6*(t1555*t2056 + t1742*t2080 + t1853*t2104) - 1.*t1555*t601;
  p_output1[1]=-1.*t1583*t2486 - 1.*t1775*t2515 - 4.e-6*(t1871*t2440 + t1910*t2486 + t1952*t2515) + 7.e-6*(t2056*t2440 + t2080*t2486 + t2104*t2515) - 1.*t2440*t601;
  p_output1[2]=-1.*t1583*t2806 - 1.*t1775*t2857 - 4.e-6*(t1871*t2761 + t1910*t2806 + t1952*t2857) + 7.e-6*(t2056*t2761 + t2080*t2806 + t2104*t2857) - 1.*t2761*t601;
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

#include "Joint_rr_knee_pitch_axis.hh"

namespace SymFunction
{

void Joint_rr_knee_pitch_axis_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
