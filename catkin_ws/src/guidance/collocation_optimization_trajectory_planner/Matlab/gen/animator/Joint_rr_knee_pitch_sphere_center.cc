/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 23:17:43 GMT+01:00
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
  double t489;
  double t514;
  double t568;
  double t635;
  double t39;
  double t107;
  double t114;
  double t181;
  double t260;
  double t278;
  double t803;
  double t810;
  double t84;
  double t1113;
  double t1239;
  double t613;
  double t1584;
  double t1591;
  double t1604;
  double t1635;
  double t1036;
  double t1527;
  double t1442;
  double t1459;
  double t1469;
  double t1562;
  double t1565;
  double t1574;
  double t1685;
  double t849;
  double t1698;
  double t714;
  double t1609;
  double t1780;
  double t1781;
  double t1830;
  double t1385;
  double t1719;
  double t1251;
  double t1861;
  double t1706;
  double t1716;
  double t1721;
  double t1722;
  double t1731;
  double t1732;
  double t1735;
  double t1736;
  double t1872;
  double t1818;
  double t1823;
  double t1825;
  double t1840;
  double t1841;
  double t1842;
  double t1846;
  double t1852;
  double t1897;
  double t1910;
  double t1923;
  double t1929;
  double t1940;
  double t1950;
  double t1952;
  double t1970;
  double t1772;
  double t2011;
  double t1788;
  double t2067;
  double t1978;
  double t1670;
  double t477;
  double t601;
  double t747;
  double t778;
  double t915;
  double t941;
  double t986;
  double t314;
  double t403;
  double t2183;
  double t1054;
  double t1109;
  double t2210;
  double t1164;
  double t1234;
  double t1305;
  double t1374;
  double t1397;
  double t1431;
  double t1434;
  double t2204;
  double t2222;
  double t2223;
  double t2229;
  double t2251;
  double t2277;
  double t1494;
  double t1504;
  double t1529;
  double t1545;
  double t1548;
  double t1555;
  double t1556;
  double t1583;
  double t1608;
  double t1677;
  double t1683;
  double t1688;
  double t1696;
  double t1697;
  double t2316;
  double t2330;
  double t2336;
  double t2353;
  double t2356;
  double t2375;
  double t1766;
  double t1767;
  double t1775;
  double t1779;
  double t1794;
  double t1796;
  double t1797;
  double t1855;
  double t1860;
  double t1868;
  double t1871;
  double t1874;
  double t1876;
  double t1886;
  double t1981;
  double t2389;
  double t2399;
  double t2402;
  double t2421;
  double t2026;
  double t2437;
  double t2440;
  double t2448;
  double t2471;
  double t2041;
  double t2047;
  double t2492;
  double t2498;
  double t2502;
  double t2504;
  double t2075;
  double t2081;
  double t2084;
  double t2092;
  double t2115;
  double t2116;
  double t2122;
  double t2138;
  double t2633;
  double t2637;
  double t2651;
  double t2673;
  double t2675;
  double t2676;
  double t2682;
  double t2683;
  double t2686;
  double t2721;
  double t2732;
  double t2751;
  double t2757;
  double t2761;
  double t2777;
  double t2783;
  double t2804;
  double t2806;
  double t2822;
  double t2830;
  double t2839;
  double t2856;
  double t2857;
  double t2889;
  t489 = Cos(var1[16]);
  t514 = -1.*t489;
  t568 = 1. + t514;
  t635 = Sin(var1[16]);
  t39 = Cos(var1[4]);
  t107 = Cos(var1[15]);
  t114 = -1.*t107;
  t181 = 1. + t114;
  t260 = -0.15121*t181;
  t278 = Sin(var1[15]);
  t803 = -1. + t489;
  t810 = 4.e-6*t803;
  t84 = Cos(var1[5]);
  t1113 = Sin(var1[5]);
  t1239 = 7.e-6*t568;
  t613 = 2.8e-11*t568;
  t1584 = Cos(var1[17]);
  t1591 = -1.*t1584;
  t1604 = 1. + t1591;
  t1635 = Sin(var1[17]);
  t1036 = Sin(var1[4]);
  t1527 = -4.e-6*t635;
  t1442 = -1.*t39*t84*t278;
  t1459 = -1.*t107*t39*t1113;
  t1469 = t1442 + t1459;
  t1562 = t107*t39*t84;
  t1565 = -1.*t39*t278*t1113;
  t1574 = t1562 + t1565;
  t1685 = 2.8e-11*t1604;
  t849 = -7.e-6*t635;
  t1698 = -2.8e-11*t568;
  t714 = -1.*t635;
  t1609 = 7.e-6*t1604;
  t1780 = -1. + t1584;
  t1781 = 4.e-6*t1780;
  t1830 = 4.e-6*t568;
  t1385 = 7.e-6*t635;
  t1719 = -7.e-6*t568;
  t1251 = 4.e-6*t635;
  t1861 = 4.e-6*t1635;
  t1706 = t1698 + t635;
  t1716 = t1706*t1036;
  t1721 = t1719 + t1527;
  t1722 = t1721*t1469;
  t1731 = -1.000000000016*t568;
  t1732 = 1. + t1731;
  t1735 = t1732*t1574;
  t1736 = t1716 + t1722 + t1735;
  t1872 = 7.e-6*t1635;
  t1818 = -1.000000000049*t568;
  t1823 = 1. + t1818;
  t1825 = t1823*t1036;
  t1840 = t1830 + t849;
  t1841 = t1840*t1469;
  t1842 = t1698 + t714;
  t1846 = t1842*t1574;
  t1852 = t1825 + t1841 + t1846;
  t1897 = t1830 + t1385;
  t1910 = t1897*t1036;
  t1923 = -6.5e-11*t568;
  t1929 = 1. + t1923;
  t1940 = t1929*t1469;
  t1950 = t1719 + t1251;
  t1952 = t1950*t1574;
  t1970 = t1910 + t1940 + t1952;
  t1772 = -1.*t1635;
  t2011 = 4.e-6*t1604;
  t1788 = -7.e-6*t1635;
  t2067 = -2.8e-11*t1604;
  t1978 = -7.e-6*t1604;
  t1670 = -4.e-6*t1635;
  t477 = 1.5843479999999999e-12*var1[16];
  t601 = -0.03874900000889869*t568;
  t747 = t613 + t714;
  t778 = -0.281211000004*t747;
  t915 = t810 + t849;
  t941 = -1.8134809999999998e-6*t915;
  t986 = t477 + t601 + t778 + t941;
  t314 = -0.15121*t278;
  t403 = t260 + t314;
  t2183 = Sin(var1[3]);
  t1054 = 0.15121*t278;
  t1109 = t260 + t1054;
  t2210 = Cos(var1[3]);
  t1164 = 3.9608699999999997e-7*var1[16];
  t1234 = -1.1787626499999999e-16*t568;
  t1305 = t1239 + t1251;
  t1374 = -0.281211000004*t1305;
  t1397 = t810 + t1385;
  t1431 = -0.038749000006999997*t1397;
  t1434 = t1164 + t1234 + t1374 + t1431;
  t2204 = t84*t2183*t1036;
  t2222 = t2210*t1113;
  t2223 = t2204 + t2222;
  t2229 = t2210*t84;
  t2251 = -1.*t2183*t1036*t1113;
  t2277 = t2229 + t2251;
  t1494 = -2.7726089999999997e-12*var1[16];
  t1504 = -0.2812110000084994*t568;
  t1529 = t1239 + t1527;
  t1545 = -1.8134809999999998e-6*t1529;
  t1548 = t613 + t635;
  t1555 = -0.038749000006999997*t1548;
  t1556 = t1494 + t1504 + t1545 + t1555;
  t1583 = -1.9784030000000015e-12*var1[17];
  t1608 = -0.5031510000160505*t1604;
  t1677 = t1609 + t1670;
  t1683 = -3.367757e-6*t1677;
  t1688 = t1685 + t1635;
  t1696 = -0.038575000014*t1688;
  t1697 = t1583 + t1608 + t1683 + t1696;
  t2316 = -1.*t278*t2223;
  t2330 = t107*t2277;
  t2336 = t2316 + t2330;
  t2353 = t107*t2223;
  t2356 = t278*t2277;
  t2375 = t2353 + t2356;
  t1766 = 1.1305160000000008e-12*var1[17];
  t1767 = -0.03857500001589017*t1604;
  t1775 = t1685 + t1772;
  t1779 = -0.5031510000080001*t1775;
  t1794 = t1781 + t1788;
  t1796 = -3.367757e-6*t1794;
  t1797 = t1766 + t1767 + t1779 + t1796;
  t1855 = 2.826290000000002e-7*var1[17];
  t1860 = -2.18904205e-16*t1604;
  t1868 = t1609 + t1861;
  t1871 = -0.5031510000080001*t1868;
  t1874 = t1781 + t1872;
  t1876 = -0.038575000014*t1874;
  t1886 = t1855 + t1860 + t1871 + t1876;
  t1981 = t1978 + t1861;
  t2389 = -1.*t39*t1706*t2183;
  t2399 = t1721*t2336;
  t2402 = t1732*t2375;
  t2421 = t2389 + t2399 + t2402;
  t2026 = t2011 + t1872;
  t2437 = -1.*t1823*t39*t2183;
  t2440 = t1840*t2336;
  t2448 = t1842*t2375;
  t2471 = t2437 + t2440 + t2448;
  t2041 = -6.5e-11*t1604;
  t2047 = 1. + t2041;
  t2492 = -1.*t39*t1897*t2183;
  t2498 = t1929*t2336;
  t2502 = t1950*t2375;
  t2504 = t2492 + t2498 + t2502;
  t2075 = t2067 + t1772;
  t2081 = -1.000000000049*t1604;
  t2084 = 1. + t2081;
  t2092 = t2011 + t1788;
  t2115 = -1.000000000016*t1604;
  t2116 = 1. + t2115;
  t2122 = t2067 + t1635;
  t2138 = t1978 + t1670;
  t2633 = -1.*t2210*t84*t1036;
  t2637 = t2183*t1113;
  t2651 = t2633 + t2637;
  t2673 = t84*t2183;
  t2675 = t2210*t1036*t1113;
  t2676 = t2673 + t2675;
  t2682 = -1.*t278*t2651;
  t2683 = t107*t2676;
  t2686 = t2682 + t2683;
  t2721 = t107*t2651;
  t2732 = t278*t2676;
  t2751 = t2721 + t2732;
  t2757 = t2210*t39*t1706;
  t2761 = t1721*t2686;
  t2777 = t1732*t2751;
  t2783 = t2757 + t2761 + t2777;
  t2804 = t1823*t2210*t39;
  t2806 = t1840*t2686;
  t2822 = t1842*t2751;
  t2830 = t2804 + t2806 + t2822;
  t2839 = t2210*t39*t1897;
  t2856 = t1929*t2686;
  t2857 = t1950*t2751;
  t2889 = t2839 + t2856 + t2857;
  p_output1[0]=t1434*t1469 + t1556*t1574 + t1697*t1736 + t1797*t1852 + t1886*t1970 - 0.165712*(t1736*t1981 + t1852*t2026 + t1970*t2047) - 0.038576*(t1736*t2075 + t1852*t2084 + t1970*t2092) - 0.50315*(t1736*t2116 + t1852*t2122 + t1970*t2138) - 1.*t1109*t1113*t39 + t39*t403*t84 + t1036*t986 + var1[0];
  p_output1[1]=t1109*t2277 + t1434*t2336 + t1556*t2375 + t1697*t2421 + t1797*t2471 + t1886*t2504 - 0.165712*(t1981*t2421 + t2026*t2471 + t2047*t2504) - 0.038576*(t2075*t2421 + t2084*t2471 + t2092*t2504) - 0.50315*(t2116*t2421 + t2122*t2471 + t2138*t2504) + t2223*t403 - 1.*t2183*t39*t986 + var1[1];
  p_output1[2]=t1109*t2676 + t1434*t2686 + t1556*t2751 + t1697*t2783 + t1797*t2830 + t1886*t2889 - 0.165712*(t1981*t2783 + t2026*t2830 + t2047*t2889) - 0.038576*(t2075*t2783 + t2084*t2830 + t2092*t2889) - 0.50315*(t2116*t2783 + t2122*t2830 + t2138*t2889) + t2651*t403 + t2210*t39*t986 + var1[2];
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

#include "Joint_rr_knee_pitch_sphere_center.hh"

namespace SymFunction
{

void Joint_rr_knee_pitch_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
