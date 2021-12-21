/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:18:52 GMT+01:00
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
  double t533;
  double t561;
  double t625;
  double t716;
  double t1042;
  double t1148;
  double t1258;
  double t1263;
  double t1308;
  double t1321;
  double t1353;
  double t1332;
  double t1333;
  double t1355;
  double t696;
  double t1347;
  double t1356;
  double t1371;
  double t1394;
  double t1403;
  double t1405;
  double t858;
  double t1464;
  double t1662;
  double t1669;
  double t1673;
  double t1701;
  double t279;
  double t1544;
  double t1567;
  double t1488;
  double t1493;
  double t1502;
  double t1616;
  double t1636;
  double t1637;
  double t1711;
  double t1425;
  double t1786;
  double t1476;
  double t1820;
  double t1687;
  double t1858;
  double t1860;
  double t738;
  double t1739;
  double t1746;
  double t1775;
  double t1788;
  double t1789;
  double t1792;
  double t1795;
  double t1797;
  double t1799;
  double t1904;
  double t1862;
  double t1864;
  double t1867;
  double t1868;
  double t1872;
  double t1878;
  double t1886;
  double t1887;
  double t1919;
  double t1921;
  double t1922;
  double t1925;
  double t1928;
  double t1929;
  double t1930;
  double t1934;
  double t1713;
  double t1946;
  double t1702;
  double t2000;
  double t1841;
  double t1953;
  double t1955;
  double t1826;
  double t1264;
  double t1329;
  double t282;
  double t691;
  double t742;
  double t829;
  double t997;
  double t1015;
  double t1027;
  double t1387;
  double t1389;
  double t1409;
  double t1412;
  double t1428;
  double t1440;
  double t1482;
  double t1485;
  double t1487;
  double t1512;
  double t1532;
  double t1547;
  double t1560;
  double t1580;
  double t1590;
  double t1601;
  double t1654;
  double t1683;
  double t1703;
  double t1706;
  double t1717;
  double t1723;
  double t1731;
  double t2058;
  double t2061;
  double t2065;
  double t2073;
  double t2074;
  double t2081;
  double t1811;
  double t1815;
  double t1833;
  double t1840;
  double t1842;
  double t1848;
  double t1857;
  double t1901;
  double t1902;
  double t1906;
  double t1908;
  double t1912;
  double t1913;
  double t1917;
  double t1949;
  double t2086;
  double t2087;
  double t2088;
  double t2090;
  double t1959;
  double t2093;
  double t2094;
  double t2096;
  double t2097;
  double t1975;
  double t1978;
  double t2100;
  double t2103;
  double t2114;
  double t2118;
  double t1996;
  double t1997;
  double t2003;
  double t2006;
  double t2012;
  double t2022;
  double t2024;
  double t2027;
  double t2177;
  double t2178;
  double t2183;
  double t2187;
  double t2189;
  double t2190;
  double t2192;
  double t2193;
  double t2195;
  double t2200;
  double t2202;
  double t2204;
  double t2206;
  double t2207;
  double t2211;
  double t2220;
  double t2229;
  double t2232;
  double t2251;
  double t2252;
  double t2254;
  double t2307;
  double t2323;
  double t2326;
  double t2333;
  double t2342;
  double t2343;
  double t2345;
  double t2350;
  double t2352;
  double t2354;
  double t2355;
  double t2359;
  double t2361;
  double t2363;
  double t2369;
  double t2376;
  double t2377;
  double t2434;
  double t2481;
  double t2496;
  double t2551;
  double t2556;
  double t2558;
  double t2454;
  double t2596;
  double t2531;
  double t2573;
  double t2574;
  double t2575;
  double t2577;
  double t2585;
  double t2588;
  double t2593;
  double t2594;
  double t2595;
  double t2605;
  double t2607;
  double t2608;
  double t2616;
  double t2621;
  double t2631;
  double t2640;
  double t2647;
  double t2650;
  double t2719;
  double t2756;
  double t2734;
  double t2735;
  double t2737;
  double t2742;
  double t2775;
  double t2779;
  double t2780;
  double t2781;
  double t2749;
  double t2814;
  double t2818;
  double t2819;
  double t2820;
  double t2725;
  double t2863;
  double t2792;
  t533 = Cos(var1[13]);
  t561 = -1.*t533;
  t625 = 1. + t561;
  t716 = Sin(var1[13]);
  t1042 = Sin(var1[3]);
  t1148 = Cos(var1[12]);
  t1258 = -1.*t1148;
  t1263 = 1. + t1258;
  t1308 = Sin(var1[12]);
  t1321 = 0.15121*t1308;
  t1353 = Cos(var1[3]);
  t1332 = Cos(var1[5]);
  t1333 = Sin(var1[4]);
  t1355 = Sin(var1[5]);
  t696 = 4.e-6*t625;
  t1347 = t1332*t1042*t1333;
  t1356 = t1353*t1355;
  t1371 = t1347 + t1356;
  t1394 = t1353*t1332;
  t1403 = -1.*t1042*t1333*t1355;
  t1405 = t1394 + t1403;
  t858 = -2.8e-11*t625;
  t1464 = 7.e-6*t625;
  t1662 = Cos(var1[14]);
  t1669 = -1.*t1662;
  t1673 = 1. + t1669;
  t1701 = Sin(var1[14]);
  t279 = Cos(var1[4]);
  t1544 = -1.*t716;
  t1567 = -4.e-6*t716;
  t1488 = -1.*t1308*t1371;
  t1493 = t1148*t1405;
  t1502 = t1488 + t1493;
  t1616 = t1148*t1371;
  t1636 = t1308*t1405;
  t1637 = t1616 + t1636;
  t1711 = 7.e-6*t1673;
  t1425 = -7.e-6*t716;
  t1786 = -7.e-6*t625;
  t1476 = 4.e-6*t716;
  t1820 = 4.e-6*t1673;
  t1687 = -2.8e-11*t1673;
  t1858 = -1. + t533;
  t1860 = 4.e-6*t1858;
  t738 = 7.e-6*t716;
  t1739 = 2.8e-11*t625;
  t1746 = t1739 + t1544;
  t1775 = -1.*t279*t1746*t1042;
  t1788 = t1786 + t1567;
  t1789 = t1788*t1502;
  t1792 = -1.000000000016*t625;
  t1795 = 1. + t1792;
  t1797 = t1795*t1637;
  t1799 = t1775 + t1789 + t1797;
  t1904 = 7.e-6*t1701;
  t1862 = t1860 + t1425;
  t1864 = -1.*t279*t1862*t1042;
  t1867 = -6.5e-11*t625;
  t1868 = 1. + t1867;
  t1872 = t1868*t1502;
  t1878 = t1786 + t1476;
  t1886 = t1878*t1637;
  t1887 = t1864 + t1872 + t1886;
  t1919 = -1.000000000049*t625;
  t1921 = 1. + t1919;
  t1922 = -1.*t1921*t279*t1042;
  t1925 = t1860 + t738;
  t1928 = t1925*t1502;
  t1929 = t1739 + t716;
  t1930 = t1929*t1637;
  t1934 = t1922 + t1928 + t1930;
  t1713 = -4.e-6*t1701;
  t1946 = 2.8e-11*t1673;
  t1702 = -1.*t1701;
  t2000 = -7.e-6*t1673;
  t1841 = 4.e-6*t1701;
  t1953 = -1. + t1662;
  t1955 = 4.e-6*t1953;
  t1826 = -7.e-6*t1701;
  t1264 = -0.15121*t1263;
  t1329 = t1264 + t1321;
  t282 = 5.856279999999999e-13*var1[13];
  t691 = -0.0387489999948987*t625;
  t742 = t696 + t738;
  t829 = -2.123459e-6*t742;
  t997 = t858 + t716;
  t1015 = -0.281209000004*t997;
  t1027 = t282 + t691 + t829 + t1015;
  t1387 = 0.15121*t1263;
  t1389 = t1387 + t1321;
  t1409 = -1.4640699999999997e-7*var1[13];
  t1412 = -1.38024835e-16*t625;
  t1428 = t696 + t1425;
  t1440 = -0.038748999993*t1428;
  t1482 = t1464 + t1476;
  t1485 = -0.281209000004*t1482;
  t1487 = t1409 + t1412 + t1440 + t1485;
  t1512 = 1.0248489999999998e-12*var1[13];
  t1532 = -0.28120900000849935*t625;
  t1547 = t858 + t1544;
  t1560 = -0.038748999993*t1547;
  t1580 = t1464 + t1567;
  t1590 = -2.123459e-6*t1580;
  t1601 = t1512 + t1532 + t1560 + t1590;
  t1654 = 1.8190549999999993e-12*var1[14];
  t1683 = -0.5031490000160505*t1673;
  t1703 = t1687 + t1702;
  t1706 = -0.038922999986*t1703;
  t1717 = t1711 + t1713;
  t1723 = -3.6777349999999994e-6*t1717;
  t1731 = t1654 + t1683 + t1706 + t1723;
  t2058 = t1353*t279*t1332*t1308;
  t2061 = t1148*t1353*t279*t1355;
  t2065 = t2058 + t2061;
  t2073 = -1.*t1148*t1353*t279*t1332;
  t2074 = t1353*t279*t1308*t1355;
  t2081 = t2073 + t2074;
  t1811 = -2.598649999999999e-7*var1[14];
  t1815 = -2.3905277499999995e-16*t1673;
  t1833 = t1820 + t1826;
  t1840 = -0.038922999986*t1833;
  t1842 = t1711 + t1841;
  t1848 = -0.503149000008*t1842;
  t1857 = t1811 + t1815 + t1840 + t1848;
  t1901 = 1.0394599999999997e-12*var1[14];
  t1902 = -0.03892299998790722*t1673;
  t1906 = t1820 + t1904;
  t1908 = -3.6777349999999994e-6*t1906;
  t1912 = t1687 + t1701;
  t1913 = -0.503149000008*t1912;
  t1917 = t1901 + t1902 + t1908 + t1913;
  t1949 = t1946 + t1701;
  t2086 = -1.*t1353*t1746*t1333;
  t2087 = t1788*t2065;
  t2088 = t1795*t2081;
  t2090 = t2086 + t2087 + t2088;
  t1959 = t1955 + t1904;
  t2093 = -1.*t1353*t1862*t1333;
  t2094 = t1868*t2065;
  t2096 = t1878*t2081;
  t2097 = t2093 + t2094 + t2096;
  t1975 = -1.000000000049*t1673;
  t1978 = 1. + t1975;
  t2100 = -1.*t1921*t1353*t1333;
  t2103 = t1925*t2065;
  t2114 = t1929*t2081;
  t2118 = t2100 + t2103 + t2114;
  t1996 = -1.000000000016*t1673;
  t1997 = 1. + t1996;
  t2003 = t2000 + t1713;
  t2006 = t1946 + t1702;
  t2012 = t2000 + t1841;
  t2022 = -6.5e-11*t1673;
  t2024 = 1. + t2022;
  t2027 = t1955 + t1826;
  t2177 = t1353*t1332*t1333;
  t2178 = -1.*t1042*t1355;
  t2183 = t2177 + t2178;
  t2187 = t1332*t1042;
  t2189 = t1353*t1333*t1355;
  t2190 = t2187 + t2189;
  t2192 = t1308*t2183;
  t2193 = t1148*t2190;
  t2195 = t2192 + t2193;
  t2200 = t1148*t2183;
  t2202 = -1.*t1308*t2190;
  t2204 = t2200 + t2202;
  t2206 = t1878*t2195;
  t2207 = t1868*t2204;
  t2211 = t2206 + t2207;
  t2220 = t1795*t2195;
  t2229 = t1788*t2204;
  t2232 = t2220 + t2229;
  t2251 = t1929*t2195;
  t2252 = t1925*t2204;
  t2254 = t2251 + t2252;
  t2307 = 0.15121*t1148;
  t2323 = -1.*t1353*t1332*t1333;
  t2326 = t1042*t1355;
  t2333 = t2323 + t2326;
  t2342 = -1.*t1308*t2333;
  t2343 = t2342 + t2193;
  t2345 = -1.*t1148*t2333;
  t2350 = t2345 + t2202;
  t2352 = t1878*t2343;
  t2354 = t1868*t2350;
  t2355 = t2352 + t2354;
  t2359 = t1795*t2343;
  t2361 = t1788*t2350;
  t2363 = t2359 + t2361;
  t2369 = t1929*t2343;
  t2376 = t1925*t2350;
  t2377 = t2369 + t2376;
  t2434 = -2.8e-11*t716;
  t2481 = -7.e-6*t533;
  t2496 = 4.e-6*t533;
  t2551 = t1148*t2333;
  t2556 = t1308*t2190;
  t2558 = t2551 + t2556;
  t2454 = 7.e-6*t533;
  t2596 = 2.8e-11*t716;
  t2531 = -4.e-6*t533;
  t2573 = t2481 + t1567;
  t2574 = t1353*t279*t2573;
  t2575 = -6.5e-11*t716*t2343;
  t2577 = t2496 + t1425;
  t2585 = t2577*t2558;
  t2588 = t2574 + t2575 + t2585;
  t2593 = -1.000000000049*t1353*t279*t716;
  t2594 = t2454 + t1567;
  t2595 = t2594*t2343;
  t2605 = t533 + t2596;
  t2607 = t2605*t2558;
  t2608 = t2593 + t2595 + t2607;
  t2616 = t561 + t2596;
  t2621 = t1353*t279*t2616;
  t2631 = t2531 + t1425;
  t2640 = t2631*t2343;
  t2647 = -1.000000000016*t716*t2558;
  t2650 = t2621 + t2640 + t2647;
  t2719 = -2.8e-11*t1701;
  t2756 = 4.e-6*t1662;
  t2734 = t1353*t279*t1746;
  t2735 = t1788*t2343;
  t2737 = t1795*t2558;
  t2742 = t2734 + t2735 + t2737;
  t2775 = t1353*t279*t1862;
  t2779 = t1868*t2343;
  t2780 = t1878*t2558;
  t2781 = t2775 + t2779 + t2780;
  t2749 = -7.e-6*t1662;
  t2814 = t1921*t1353*t279;
  t2818 = t1925*t2343;
  t2819 = t1929*t2558;
  t2820 = t2814 + t2818 + t2819;
  t2725 = -4.e-6*t1662;
  t2863 = 2.8e-11*t1701;
  t2792 = 7.e-6*t1662;
  p_output1[0]=1.;
  p_output1[1]=t1329*t1371 + t1389*t1405 + t1487*t1502 + t1601*t1637 + t1731*t1799 + t1857*t1887 + t1917*t1934 - 0.038924*(t1799*t1949 + t1887*t1959 + t1934*t1978) - 0.80315*(t1799*t1997 + t1887*t2003 + t1934*t2006) + 0.148705*(t1799*t2012 + t1887*t2024 + t1934*t2027) - 1.*t1027*t1042*t279;
  p_output1[2]=-1.*t1027*t1333*t1353 + t1487*t2065 + t1601*t2081 + t1731*t2090 + t1857*t2097 + t1917*t2118 - 0.038924*(t1949*t2090 + t1959*t2097 + t1978*t2118) - 0.80315*(t1997*t2090 + t2003*t2097 + t2006*t2118) + 0.148705*(t2012*t2090 + t2024*t2097 + t2027*t2118) - 1.*t1329*t1332*t1353*t279 + t1353*t1355*t1389*t279;
  p_output1[3]=t1389*t2183 + t1329*t2190 + t1601*t2195 + t1487*t2204 + t1857*t2211 + t1731*t2232 + t1917*t2254 - 0.038924*(t1959*t2211 + t1949*t2232 + t1978*t2254) - 0.80315*(t2003*t2211 + t1997*t2232 + t2006*t2254) + 0.148705*(t2024*t2211 + t2012*t2232 + t2027*t2254);
  p_output1[4]=t2190*(t1321 + t2307) + (-0.15121*t1308 + t2307)*t2333 + t1601*t2343 + t1487*t2350 + t1857*t2355 + t1731*t2363 + t1917*t2377 - 0.038924*(t1959*t2355 + t1949*t2363 + t1978*t2377) - 0.80315*(t2003*t2355 + t1997*t2363 + t2006*t2377) + 0.148705*(t2024*t2355 + t2012*t2363 + t2027*t2377);
  p_output1[5]=t1857*t2588 + t1917*t2608 + t1731*t2650 - 0.038924*(t1959*t2588 + t1978*t2608 + t1949*t2650) - 0.80315*(t2003*t2588 + t2006*t2608 + t1997*t2650) + 0.148705*(t2024*t2588 + t2027*t2608 + t2012*t2650) + t1353*t279*(5.856279999999999e-13 - 2.123459e-6*(t1476 + t2454) - 0.281209000004*(t2434 + t533) - 0.0387489999948987*t716) + t2343*(-1.4640699999999997e-7 - 0.038748999993*(t1476 + t2481) - 1.38024835e-16*t716 - 0.281209000004*(t2496 + t738)) + t2558*(1.0248489999999998e-12 - 0.038748999993*(t2434 + t561) - 0.28120900000849935*t716 - 2.123459e-6*(t2531 + t738));
  p_output1[6]=(1.8190549999999993e-12 - 0.5031490000160505*t1701 - 0.038922999986*(t1669 + t2719) - 3.6777349999999994e-6*(t1904 + t2725))*t2742 + (-2.598649999999999e-7 - 2.3905277499999995e-16*t1701 - 0.038922999986*(t1841 + t2749) - 0.503149000008*(t1904 + t2756))*t2781 + (1.0394599999999997e-12 - 0.03892299998790722*t1701 - 0.503149000008*(t1662 + t2719) - 3.6777349999999994e-6*(t1841 + t2792))*t2820 + 0.148705*(t2742*(t1826 + t2756) - 6.5e-11*t1701*t2781 + (t1713 + t2749)*t2820) - 0.038924*(t2781*(t1713 + t2792) - 1.000000000049*t1701*t2820 + t2742*(t1662 + t2863)) - 0.80315*(-1.000000000016*t1701*t2742 + (t1826 + t2725)*t2781 + t2820*(t1669 + t2863));
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

#include "J_foot_clearance_RlFoot.hh"

namespace TrotStance2
{

void J_foot_clearance_RlFoot_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
