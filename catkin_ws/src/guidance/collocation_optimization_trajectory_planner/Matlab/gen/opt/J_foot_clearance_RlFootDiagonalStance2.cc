/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:31:11 GMT+01:00
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
  double t229;
  double t282;
  double t405;
  double t850;
  double t1286;
  double t1329;
  double t1341;
  double t1347;
  double t1370;
  double t1377;
  double t1411;
  double t1388;
  double t1393;
  double t1437;
  double t819;
  double t1404;
  double t1443;
  double t1444;
  double t1453;
  double t1454;
  double t1456;
  double t1046;
  double t1521;
  double t1660;
  double t1669;
  double t1672;
  double t1685;
  double t33;
  double t1570;
  double t1603;
  double t1548;
  double t1552;
  double t1554;
  double t1634;
  double t1644;
  double t1645;
  double t1722;
  double t1484;
  double t1782;
  double t1524;
  double t1806;
  double t1683;
  double t1853;
  double t1855;
  double t943;
  double t1749;
  double t1751;
  double t1779;
  double t1784;
  double t1785;
  double t1797;
  double t1798;
  double t1799;
  double t1800;
  double t1902;
  double t1859;
  double t1861;
  double t1865;
  double t1867;
  double t1869;
  double t1875;
  double t1888;
  double t1890;
  double t1914;
  double t1918;
  double t1921;
  double t1927;
  double t1929;
  double t1930;
  double t1931;
  double t1933;
  double t1723;
  double t1936;
  double t1704;
  double t2005;
  double t1837;
  double t1947;
  double t1950;
  double t1818;
  double t1349;
  double t1384;
  double t177;
  double t626;
  double t1006;
  double t1010;
  double t1119;
  double t1136;
  double t1211;
  double t1450;
  double t1451;
  double t1471;
  double t1480;
  double t1508;
  double t1513;
  double t1528;
  double t1539;
  double t1544;
  double t1560;
  double t1563;
  double t1579;
  double t1594;
  double t1605;
  double t1617;
  double t1633;
  double t1658;
  double t1676;
  double t1712;
  double t1720;
  double t1724;
  double t1739;
  double t1742;
  double t2048;
  double t2057;
  double t2059;
  double t2064;
  double t2066;
  double t2067;
  double t1802;
  double t1803;
  double t1823;
  double t1828;
  double t1841;
  double t1845;
  double t1848;
  double t1897;
  double t1899;
  double t1903;
  double t1904;
  double t1906;
  double t1910;
  double t1911;
  double t1939;
  double t2071;
  double t2072;
  double t2076;
  double t2077;
  double t1953;
  double t2081;
  double t2082;
  double t2084;
  double t2086;
  double t1972;
  double t1984;
  double t2090;
  double t2096;
  double t2097;
  double t2098;
  double t2000;
  double t2002;
  double t2007;
  double t2011;
  double t2019;
  double t2021;
  double t2024;
  double t2026;
  double t2162;
  double t2164;
  double t2165;
  double t2169;
  double t2170;
  double t2171;
  double t2174;
  double t2178;
  double t2179;
  double t2181;
  double t2185;
  double t2189;
  double t2194;
  double t2195;
  double t2201;
  double t2209;
  double t2219;
  double t2223;
  double t2226;
  double t2227;
  double t2231;
  double t2308;
  double t2315;
  double t2322;
  double t2325;
  double t2336;
  double t2340;
  double t2343;
  double t2344;
  double t2349;
  double t2352;
  double t2354;
  double t2368;
  double t2369;
  double t2371;
  double t2376;
  double t2381;
  double t2382;
  double t2459;
  double t2490;
  double t2514;
  double t2563;
  double t2571;
  double t2577;
  double t2468;
  double t2602;
  double t2543;
  double t2579;
  double t2581;
  double t2584;
  double t2586;
  double t2587;
  double t2588;
  double t2595;
  double t2597;
  double t2598;
  double t2608;
  double t2611;
  double t2612;
  double t2617;
  double t2625;
  double t2631;
  double t2632;
  double t2636;
  double t2643;
  double t2694;
  double t2736;
  double t2720;
  double t2721;
  double t2722;
  double t2725;
  double t2754;
  double t2755;
  double t2756;
  double t2759;
  double t2727;
  double t2791;
  double t2794;
  double t2799;
  double t2802;
  double t2707;
  double t2830;
  double t2779;
  t229 = Cos(var1[13]);
  t282 = -1.*t229;
  t405 = 1. + t282;
  t850 = Sin(var1[13]);
  t1286 = Sin(var1[3]);
  t1329 = Cos(var1[12]);
  t1341 = -1.*t1329;
  t1347 = 1. + t1341;
  t1370 = Sin(var1[12]);
  t1377 = 0.15121*t1370;
  t1411 = Cos(var1[3]);
  t1388 = Cos(var1[5]);
  t1393 = Sin(var1[4]);
  t1437 = Sin(var1[5]);
  t819 = 4.e-6*t405;
  t1404 = t1388*t1286*t1393;
  t1443 = t1411*t1437;
  t1444 = t1404 + t1443;
  t1453 = t1411*t1388;
  t1454 = -1.*t1286*t1393*t1437;
  t1456 = t1453 + t1454;
  t1046 = -2.8e-11*t405;
  t1521 = 7.e-6*t405;
  t1660 = Cos(var1[14]);
  t1669 = -1.*t1660;
  t1672 = 1. + t1669;
  t1685 = Sin(var1[14]);
  t33 = Cos(var1[4]);
  t1570 = -1.*t850;
  t1603 = -4.e-6*t850;
  t1548 = -1.*t1370*t1444;
  t1552 = t1329*t1456;
  t1554 = t1548 + t1552;
  t1634 = t1329*t1444;
  t1644 = t1370*t1456;
  t1645 = t1634 + t1644;
  t1722 = 7.e-6*t1672;
  t1484 = -7.e-6*t850;
  t1782 = -7.e-6*t405;
  t1524 = 4.e-6*t850;
  t1806 = 4.e-6*t1672;
  t1683 = -2.8e-11*t1672;
  t1853 = -1. + t229;
  t1855 = 4.e-6*t1853;
  t943 = 7.e-6*t850;
  t1749 = 2.8e-11*t405;
  t1751 = t1749 + t1570;
  t1779 = -1.*t33*t1751*t1286;
  t1784 = t1782 + t1603;
  t1785 = t1784*t1554;
  t1797 = -1.000000000016*t405;
  t1798 = 1. + t1797;
  t1799 = t1798*t1645;
  t1800 = t1779 + t1785 + t1799;
  t1902 = 7.e-6*t1685;
  t1859 = t1855 + t1484;
  t1861 = -1.*t33*t1859*t1286;
  t1865 = -6.5e-11*t405;
  t1867 = 1. + t1865;
  t1869 = t1867*t1554;
  t1875 = t1782 + t1524;
  t1888 = t1875*t1645;
  t1890 = t1861 + t1869 + t1888;
  t1914 = -1.000000000049*t405;
  t1918 = 1. + t1914;
  t1921 = -1.*t1918*t33*t1286;
  t1927 = t1855 + t943;
  t1929 = t1927*t1554;
  t1930 = t1749 + t850;
  t1931 = t1930*t1645;
  t1933 = t1921 + t1929 + t1931;
  t1723 = -4.e-6*t1685;
  t1936 = 2.8e-11*t1672;
  t1704 = -1.*t1685;
  t2005 = -7.e-6*t1672;
  t1837 = 4.e-6*t1685;
  t1947 = -1. + t1660;
  t1950 = 4.e-6*t1947;
  t1818 = -7.e-6*t1685;
  t1349 = -0.15121*t1347;
  t1384 = t1349 + t1377;
  t177 = 5.856279999999999e-13*var1[13];
  t626 = -0.0387489999948987*t405;
  t1006 = t819 + t943;
  t1010 = -2.123459e-6*t1006;
  t1119 = t1046 + t850;
  t1136 = -0.281209000004*t1119;
  t1211 = t177 + t626 + t1010 + t1136;
  t1450 = 0.15121*t1347;
  t1451 = t1450 + t1377;
  t1471 = -1.4640699999999997e-7*var1[13];
  t1480 = -1.38024835e-16*t405;
  t1508 = t819 + t1484;
  t1513 = -0.038748999993*t1508;
  t1528 = t1521 + t1524;
  t1539 = -0.281209000004*t1528;
  t1544 = t1471 + t1480 + t1513 + t1539;
  t1560 = 1.0248489999999998e-12*var1[13];
  t1563 = -0.28120900000849935*t405;
  t1579 = t1046 + t1570;
  t1594 = -0.038748999993*t1579;
  t1605 = t1521 + t1603;
  t1617 = -2.123459e-6*t1605;
  t1633 = t1560 + t1563 + t1594 + t1617;
  t1658 = 1.8190549999999993e-12*var1[14];
  t1676 = -0.5031490000160505*t1672;
  t1712 = t1683 + t1704;
  t1720 = -0.038922999986*t1712;
  t1724 = t1722 + t1723;
  t1739 = -3.6777349999999994e-6*t1724;
  t1742 = t1658 + t1676 + t1720 + t1739;
  t2048 = t1411*t33*t1388*t1370;
  t2057 = t1329*t1411*t33*t1437;
  t2059 = t2048 + t2057;
  t2064 = -1.*t1329*t1411*t33*t1388;
  t2066 = t1411*t33*t1370*t1437;
  t2067 = t2064 + t2066;
  t1802 = -2.598649999999999e-7*var1[14];
  t1803 = -2.3905277499999995e-16*t1672;
  t1823 = t1806 + t1818;
  t1828 = -0.038922999986*t1823;
  t1841 = t1722 + t1837;
  t1845 = -0.503149000008*t1841;
  t1848 = t1802 + t1803 + t1828 + t1845;
  t1897 = 1.0394599999999997e-12*var1[14];
  t1899 = -0.03892299998790722*t1672;
  t1903 = t1806 + t1902;
  t1904 = -3.6777349999999994e-6*t1903;
  t1906 = t1683 + t1685;
  t1910 = -0.503149000008*t1906;
  t1911 = t1897 + t1899 + t1904 + t1910;
  t1939 = t1936 + t1685;
  t2071 = -1.*t1411*t1751*t1393;
  t2072 = t1784*t2059;
  t2076 = t1798*t2067;
  t2077 = t2071 + t2072 + t2076;
  t1953 = t1950 + t1902;
  t2081 = -1.*t1411*t1859*t1393;
  t2082 = t1867*t2059;
  t2084 = t1875*t2067;
  t2086 = t2081 + t2082 + t2084;
  t1972 = -1.000000000049*t1672;
  t1984 = 1. + t1972;
  t2090 = -1.*t1918*t1411*t1393;
  t2096 = t1927*t2059;
  t2097 = t1930*t2067;
  t2098 = t2090 + t2096 + t2097;
  t2000 = -1.000000000016*t1672;
  t2002 = 1. + t2000;
  t2007 = t2005 + t1723;
  t2011 = t1936 + t1704;
  t2019 = t2005 + t1837;
  t2021 = -6.5e-11*t1672;
  t2024 = 1. + t2021;
  t2026 = t1950 + t1818;
  t2162 = t1411*t1388*t1393;
  t2164 = -1.*t1286*t1437;
  t2165 = t2162 + t2164;
  t2169 = t1388*t1286;
  t2170 = t1411*t1393*t1437;
  t2171 = t2169 + t2170;
  t2174 = t1370*t2165;
  t2178 = t1329*t2171;
  t2179 = t2174 + t2178;
  t2181 = t1329*t2165;
  t2185 = -1.*t1370*t2171;
  t2189 = t2181 + t2185;
  t2194 = t1875*t2179;
  t2195 = t1867*t2189;
  t2201 = t2194 + t2195;
  t2209 = t1798*t2179;
  t2219 = t1784*t2189;
  t2223 = t2209 + t2219;
  t2226 = t1930*t2179;
  t2227 = t1927*t2189;
  t2231 = t2226 + t2227;
  t2308 = 0.15121*t1329;
  t2315 = -1.*t1411*t1388*t1393;
  t2322 = t1286*t1437;
  t2325 = t2315 + t2322;
  t2336 = -1.*t1370*t2325;
  t2340 = t2336 + t2178;
  t2343 = -1.*t1329*t2325;
  t2344 = t2343 + t2185;
  t2349 = t1875*t2340;
  t2352 = t1867*t2344;
  t2354 = t2349 + t2352;
  t2368 = t1798*t2340;
  t2369 = t1784*t2344;
  t2371 = t2368 + t2369;
  t2376 = t1930*t2340;
  t2381 = t1927*t2344;
  t2382 = t2376 + t2381;
  t2459 = -2.8e-11*t850;
  t2490 = -7.e-6*t229;
  t2514 = 4.e-6*t229;
  t2563 = t1329*t2325;
  t2571 = t1370*t2171;
  t2577 = t2563 + t2571;
  t2468 = 7.e-6*t229;
  t2602 = 2.8e-11*t850;
  t2543 = -4.e-6*t229;
  t2579 = t2490 + t1603;
  t2581 = t1411*t33*t2579;
  t2584 = -6.5e-11*t850*t2340;
  t2586 = t2514 + t1484;
  t2587 = t2586*t2577;
  t2588 = t2581 + t2584 + t2587;
  t2595 = -1.000000000049*t1411*t33*t850;
  t2597 = t2468 + t1603;
  t2598 = t2597*t2340;
  t2608 = t229 + t2602;
  t2611 = t2608*t2577;
  t2612 = t2595 + t2598 + t2611;
  t2617 = t282 + t2602;
  t2625 = t1411*t33*t2617;
  t2631 = t2543 + t1484;
  t2632 = t2631*t2340;
  t2636 = -1.000000000016*t850*t2577;
  t2643 = t2625 + t2632 + t2636;
  t2694 = -2.8e-11*t1685;
  t2736 = 4.e-6*t1660;
  t2720 = t1411*t33*t1751;
  t2721 = t1784*t2340;
  t2722 = t1798*t2577;
  t2725 = t2720 + t2721 + t2722;
  t2754 = t1411*t33*t1859;
  t2755 = t1867*t2340;
  t2756 = t1875*t2577;
  t2759 = t2754 + t2755 + t2756;
  t2727 = -7.e-6*t1660;
  t2791 = t1918*t1411*t33;
  t2794 = t1927*t2340;
  t2799 = t1930*t2577;
  t2802 = t2791 + t2794 + t2799;
  t2707 = -4.e-6*t1660;
  t2830 = 2.8e-11*t1685;
  t2779 = 7.e-6*t1660;
  p_output1[0]=1.;
  p_output1[1]=t1384*t1444 + t1451*t1456 + t1544*t1554 + t1633*t1645 + t1742*t1800 + t1848*t1890 + t1911*t1933 - 0.038924*(t1800*t1939 + t1890*t1953 + t1933*t1984) - 0.80315*(t1800*t2002 + t1890*t2007 + t1933*t2011) + 0.148705*(t1800*t2019 + t1890*t2024 + t1933*t2026) - 1.*t1211*t1286*t33;
  p_output1[2]=-1.*t1211*t1393*t1411 + t1544*t2059 + t1633*t2067 + t1742*t2077 + t1848*t2086 + t1911*t2098 - 0.038924*(t1939*t2077 + t1953*t2086 + t1984*t2098) - 0.80315*(t2002*t2077 + t2007*t2086 + t2011*t2098) + 0.148705*(t2019*t2077 + t2024*t2086 + t2026*t2098) - 1.*t1384*t1388*t1411*t33 + t1411*t1437*t1451*t33;
  p_output1[3]=t1451*t2165 + t1384*t2171 + t1633*t2179 + t1544*t2189 + t1848*t2201 + t1742*t2223 + t1911*t2231 - 0.038924*(t1953*t2201 + t1939*t2223 + t1984*t2231) - 0.80315*(t2007*t2201 + t2002*t2223 + t2011*t2231) + 0.148705*(t2024*t2201 + t2019*t2223 + t2026*t2231);
  p_output1[4]=t2171*(t1377 + t2308) + (-0.15121*t1370 + t2308)*t2325 + t1633*t2340 + t1544*t2344 + t1848*t2354 + t1742*t2371 + t1911*t2382 - 0.038924*(t1953*t2354 + t1939*t2371 + t1984*t2382) - 0.80315*(t2007*t2354 + t2002*t2371 + t2011*t2382) + 0.148705*(t2024*t2354 + t2019*t2371 + t2026*t2382);
  p_output1[5]=t1848*t2588 + t1911*t2612 + t1742*t2643 - 0.038924*(t1953*t2588 + t1984*t2612 + t1939*t2643) - 0.80315*(t2007*t2588 + t2011*t2612 + t2002*t2643) + 0.148705*(t2024*t2588 + t2026*t2612 + t2019*t2643) + t1411*t33*(5.856279999999999e-13 - 0.281209000004*(t229 + t2459) - 2.123459e-6*(t1524 + t2468) - 0.0387489999948987*t850) + t2340*(-1.4640699999999997e-7 - 0.038748999993*(t1524 + t2490) - 1.38024835e-16*t850 - 0.281209000004*(t2514 + t943)) + t2577*(1.0248489999999998e-12 - 0.038748999993*(t2459 + t282) - 0.28120900000849935*t850 - 2.123459e-6*(t2543 + t943));
  p_output1[6]=(1.8190549999999993e-12 - 0.5031490000160505*t1685 - 0.038922999986*(t1669 + t2694) - 3.6777349999999994e-6*(t1902 + t2707))*t2725 + (-2.598649999999999e-7 - 2.3905277499999995e-16*t1685 - 0.038922999986*(t1837 + t2727) - 0.503149000008*(t1902 + t2736))*t2759 + (1.0394599999999997e-12 - 0.03892299998790722*t1685 - 0.503149000008*(t1660 + t2694) - 3.6777349999999994e-6*(t1837 + t2779))*t2802 + 0.148705*(t2725*(t1818 + t2736) - 6.5e-11*t1685*t2759 + (t1723 + t2727)*t2802) - 0.038924*(t2759*(t1723 + t2779) - 1.000000000049*t1685*t2802 + t2725*(t1660 + t2830)) - 0.80315*(-1.000000000016*t1685*t2725 + (t1818 + t2707)*t2759 + t2802*(t1669 + t2830));
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

#include "J_foot_clearance_RlFootDiagonalStance2.hh"

namespace DiagonalStance2
{

void J_foot_clearance_RlFootDiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
