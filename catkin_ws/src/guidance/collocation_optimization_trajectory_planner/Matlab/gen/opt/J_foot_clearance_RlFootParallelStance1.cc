/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:12:03 GMT+01:00
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
  double t155;
  double t218;
  double t442;
  double t629;
  double t763;
  double t779;
  double t781;
  double t782;
  double t790;
  double t801;
  double t1007;
  double t901;
  double t914;
  double t1054;
  double t544;
  double t995;
  double t1064;
  double t1081;
  double t1140;
  double t1146;
  double t1194;
  double t696;
  double t1268;
  double t1491;
  double t1493;
  double t1500;
  double t1513;
  double t7;
  double t1396;
  double t1412;
  double t1322;
  double t1324;
  double t1348;
  double t1444;
  double t1446;
  double t1467;
  double t1527;
  double t1257;
  double t1552;
  double t1281;
  double t1598;
  double t1506;
  double t1650;
  double t1652;
  double t633;
  double t1542;
  double t1546;
  double t1548;
  double t1556;
  double t1560;
  double t1563;
  double t1565;
  double t1566;
  double t1577;
  double t1693;
  double t1654;
  double t1658;
  double t1670;
  double t1675;
  double t1678;
  double t1680;
  double t1681;
  double t1682;
  double t1716;
  double t1721;
  double t1723;
  double t1726;
  double t1729;
  double t1730;
  double t1731;
  double t1735;
  double t1534;
  double t1741;
  double t1516;
  double t1797;
  double t1637;
  double t1753;
  double t1759;
  double t1605;
  double t783;
  double t821;
  double t118;
  double t517;
  double t652;
  double t654;
  double t745;
  double t758;
  double t760;
  double t1106;
  double t1108;
  double t1236;
  double t1238;
  double t1258;
  double t1260;
  double t1300;
  double t1311;
  double t1321;
  double t1364;
  double t1377;
  double t1402;
  double t1409;
  double t1429;
  double t1432;
  double t1440;
  double t1486;
  double t1502;
  double t1522;
  double t1526;
  double t1535;
  double t1536;
  double t1539;
  double t1874;
  double t1876;
  double t1878;
  double t1885;
  double t1887;
  double t1888;
  double t1594;
  double t1595;
  double t1621;
  double t1635;
  double t1638;
  double t1641;
  double t1644;
  double t1686;
  double t1689;
  double t1694;
  double t1697;
  double t1699;
  double t1712;
  double t1715;
  double t1744;
  double t1891;
  double t1899;
  double t1900;
  double t1902;
  double t1764;
  double t1906;
  double t1909;
  double t1911;
  double t1912;
  double t1783;
  double t1784;
  double t1916;
  double t1917;
  double t1919;
  double t1923;
  double t1793;
  double t1794;
  double t1801;
  double t1804;
  double t1813;
  double t1819;
  double t1823;
  double t1841;
  double t2009;
  double t2016;
  double t2017;
  double t2023;
  double t2026;
  double t2027;
  double t2044;
  double t2051;
  double t2055;
  double t2066;
  double t2067;
  double t2072;
  double t2076;
  double t2078;
  double t2081;
  double t2094;
  double t2096;
  double t2099;
  double t2107;
  double t2109;
  double t2111;
  double t2162;
  double t2168;
  double t2171;
  double t2174;
  double t2180;
  double t2181;
  double t2197;
  double t2198;
  double t2203;
  double t2207;
  double t2215;
  double t2219;
  double t2228;
  double t2232;
  double t2240;
  double t2249;
  double t2253;
  double t2311;
  double t2353;
  double t2365;
  double t2389;
  double t2392;
  double t2395;
  double t2325;
  double t2453;
  double t2382;
  double t2402;
  double t2409;
  double t2414;
  double t2418;
  double t2420;
  double t2424;
  double t2432;
  double t2441;
  double t2450;
  double t2458;
  double t2460;
  double t2463;
  double t2469;
  double t2471;
  double t2475;
  double t2478;
  double t2486;
  double t2488;
  double t2566;
  double t2612;
  double t2586;
  double t2590;
  double t2592;
  double t2593;
  double t2635;
  double t2638;
  double t2641;
  double t2642;
  double t2597;
  double t2656;
  double t2658;
  double t2659;
  double t2660;
  double t2579;
  double t2713;
  double t2647;
  t155 = Cos(var1[13]);
  t218 = -1.*t155;
  t442 = 1. + t218;
  t629 = Sin(var1[13]);
  t763 = Sin(var1[3]);
  t779 = Cos(var1[12]);
  t781 = -1.*t779;
  t782 = 1. + t781;
  t790 = Sin(var1[12]);
  t801 = 0.15121*t790;
  t1007 = Cos(var1[3]);
  t901 = Cos(var1[5]);
  t914 = Sin(var1[4]);
  t1054 = Sin(var1[5]);
  t544 = 4.e-6*t442;
  t995 = t901*t763*t914;
  t1064 = t1007*t1054;
  t1081 = t995 + t1064;
  t1140 = t1007*t901;
  t1146 = -1.*t763*t914*t1054;
  t1194 = t1140 + t1146;
  t696 = -2.8e-11*t442;
  t1268 = 7.e-6*t442;
  t1491 = Cos(var1[14]);
  t1493 = -1.*t1491;
  t1500 = 1. + t1493;
  t1513 = Sin(var1[14]);
  t7 = Cos(var1[4]);
  t1396 = -1.*t629;
  t1412 = -4.e-6*t629;
  t1322 = -1.*t790*t1081;
  t1324 = t779*t1194;
  t1348 = t1322 + t1324;
  t1444 = t779*t1081;
  t1446 = t790*t1194;
  t1467 = t1444 + t1446;
  t1527 = 7.e-6*t1500;
  t1257 = -7.e-6*t629;
  t1552 = -7.e-6*t442;
  t1281 = 4.e-6*t629;
  t1598 = 4.e-6*t1500;
  t1506 = -2.8e-11*t1500;
  t1650 = -1. + t155;
  t1652 = 4.e-6*t1650;
  t633 = 7.e-6*t629;
  t1542 = 2.8e-11*t442;
  t1546 = t1542 + t1396;
  t1548 = -1.*t7*t1546*t763;
  t1556 = t1552 + t1412;
  t1560 = t1556*t1348;
  t1563 = -1.000000000016*t442;
  t1565 = 1. + t1563;
  t1566 = t1565*t1467;
  t1577 = t1548 + t1560 + t1566;
  t1693 = 7.e-6*t1513;
  t1654 = t1652 + t1257;
  t1658 = -1.*t7*t1654*t763;
  t1670 = -6.5e-11*t442;
  t1675 = 1. + t1670;
  t1678 = t1675*t1348;
  t1680 = t1552 + t1281;
  t1681 = t1680*t1467;
  t1682 = t1658 + t1678 + t1681;
  t1716 = -1.000000000049*t442;
  t1721 = 1. + t1716;
  t1723 = -1.*t1721*t7*t763;
  t1726 = t1652 + t633;
  t1729 = t1726*t1348;
  t1730 = t1542 + t629;
  t1731 = t1730*t1467;
  t1735 = t1723 + t1729 + t1731;
  t1534 = -4.e-6*t1513;
  t1741 = 2.8e-11*t1500;
  t1516 = -1.*t1513;
  t1797 = -7.e-6*t1500;
  t1637 = 4.e-6*t1513;
  t1753 = -1. + t1491;
  t1759 = 4.e-6*t1753;
  t1605 = -7.e-6*t1513;
  t783 = -0.15121*t782;
  t821 = t783 + t801;
  t118 = 5.856279999999999e-13*var1[13];
  t517 = -0.0387489999948987*t442;
  t652 = t544 + t633;
  t654 = -2.123459e-6*t652;
  t745 = t696 + t629;
  t758 = -0.281209000004*t745;
  t760 = t118 + t517 + t654 + t758;
  t1106 = 0.15121*t782;
  t1108 = t1106 + t801;
  t1236 = -1.4640699999999997e-7*var1[13];
  t1238 = -1.38024835e-16*t442;
  t1258 = t544 + t1257;
  t1260 = -0.038748999993*t1258;
  t1300 = t1268 + t1281;
  t1311 = -0.281209000004*t1300;
  t1321 = t1236 + t1238 + t1260 + t1311;
  t1364 = 1.0248489999999998e-12*var1[13];
  t1377 = -0.28120900000849935*t442;
  t1402 = t696 + t1396;
  t1409 = -0.038748999993*t1402;
  t1429 = t1268 + t1412;
  t1432 = -2.123459e-6*t1429;
  t1440 = t1364 + t1377 + t1409 + t1432;
  t1486 = 1.8190549999999993e-12*var1[14];
  t1502 = -0.5031490000160505*t1500;
  t1522 = t1506 + t1516;
  t1526 = -0.038922999986*t1522;
  t1535 = t1527 + t1534;
  t1536 = -3.6777349999999994e-6*t1535;
  t1539 = t1486 + t1502 + t1526 + t1536;
  t1874 = t1007*t7*t901*t790;
  t1876 = t779*t1007*t7*t1054;
  t1878 = t1874 + t1876;
  t1885 = -1.*t779*t1007*t7*t901;
  t1887 = t1007*t7*t790*t1054;
  t1888 = t1885 + t1887;
  t1594 = -2.598649999999999e-7*var1[14];
  t1595 = -2.3905277499999995e-16*t1500;
  t1621 = t1598 + t1605;
  t1635 = -0.038922999986*t1621;
  t1638 = t1527 + t1637;
  t1641 = -0.503149000008*t1638;
  t1644 = t1594 + t1595 + t1635 + t1641;
  t1686 = 1.0394599999999997e-12*var1[14];
  t1689 = -0.03892299998790722*t1500;
  t1694 = t1598 + t1693;
  t1697 = -3.6777349999999994e-6*t1694;
  t1699 = t1506 + t1513;
  t1712 = -0.503149000008*t1699;
  t1715 = t1686 + t1689 + t1697 + t1712;
  t1744 = t1741 + t1513;
  t1891 = -1.*t1007*t1546*t914;
  t1899 = t1556*t1878;
  t1900 = t1565*t1888;
  t1902 = t1891 + t1899 + t1900;
  t1764 = t1759 + t1693;
  t1906 = -1.*t1007*t1654*t914;
  t1909 = t1675*t1878;
  t1911 = t1680*t1888;
  t1912 = t1906 + t1909 + t1911;
  t1783 = -1.000000000049*t1500;
  t1784 = 1. + t1783;
  t1916 = -1.*t1721*t1007*t914;
  t1917 = t1726*t1878;
  t1919 = t1730*t1888;
  t1923 = t1916 + t1917 + t1919;
  t1793 = -1.000000000016*t1500;
  t1794 = 1. + t1793;
  t1801 = t1797 + t1534;
  t1804 = t1741 + t1516;
  t1813 = t1797 + t1637;
  t1819 = -6.5e-11*t1500;
  t1823 = 1. + t1819;
  t1841 = t1759 + t1605;
  t2009 = t1007*t901*t914;
  t2016 = -1.*t763*t1054;
  t2017 = t2009 + t2016;
  t2023 = t901*t763;
  t2026 = t1007*t914*t1054;
  t2027 = t2023 + t2026;
  t2044 = t790*t2017;
  t2051 = t779*t2027;
  t2055 = t2044 + t2051;
  t2066 = t779*t2017;
  t2067 = -1.*t790*t2027;
  t2072 = t2066 + t2067;
  t2076 = t1680*t2055;
  t2078 = t1675*t2072;
  t2081 = t2076 + t2078;
  t2094 = t1565*t2055;
  t2096 = t1556*t2072;
  t2099 = t2094 + t2096;
  t2107 = t1730*t2055;
  t2109 = t1726*t2072;
  t2111 = t2107 + t2109;
  t2162 = 0.15121*t779;
  t2168 = -1.*t1007*t901*t914;
  t2171 = t763*t1054;
  t2174 = t2168 + t2171;
  t2180 = -1.*t790*t2174;
  t2181 = t2180 + t2051;
  t2197 = -1.*t779*t2174;
  t2198 = t2197 + t2067;
  t2203 = t1680*t2181;
  t2207 = t1675*t2198;
  t2215 = t2203 + t2207;
  t2219 = t1565*t2181;
  t2228 = t1556*t2198;
  t2232 = t2219 + t2228;
  t2240 = t1730*t2181;
  t2249 = t1726*t2198;
  t2253 = t2240 + t2249;
  t2311 = -2.8e-11*t629;
  t2353 = -7.e-6*t155;
  t2365 = 4.e-6*t155;
  t2389 = t779*t2174;
  t2392 = t790*t2027;
  t2395 = t2389 + t2392;
  t2325 = 7.e-6*t155;
  t2453 = 2.8e-11*t629;
  t2382 = -4.e-6*t155;
  t2402 = t2353 + t1412;
  t2409 = t1007*t7*t2402;
  t2414 = -6.5e-11*t629*t2181;
  t2418 = t2365 + t1257;
  t2420 = t2418*t2395;
  t2424 = t2409 + t2414 + t2420;
  t2432 = -1.000000000049*t1007*t7*t629;
  t2441 = t2325 + t1412;
  t2450 = t2441*t2181;
  t2458 = t155 + t2453;
  t2460 = t2458*t2395;
  t2463 = t2432 + t2450 + t2460;
  t2469 = t218 + t2453;
  t2471 = t1007*t7*t2469;
  t2475 = t2382 + t1257;
  t2478 = t2475*t2181;
  t2486 = -1.000000000016*t629*t2395;
  t2488 = t2471 + t2478 + t2486;
  t2566 = -2.8e-11*t1513;
  t2612 = 4.e-6*t1491;
  t2586 = t1007*t7*t1546;
  t2590 = t1556*t2181;
  t2592 = t1565*t2395;
  t2593 = t2586 + t2590 + t2592;
  t2635 = t1007*t7*t1654;
  t2638 = t1675*t2181;
  t2641 = t1680*t2395;
  t2642 = t2635 + t2638 + t2641;
  t2597 = -7.e-6*t1491;
  t2656 = t1721*t1007*t7;
  t2658 = t1726*t2181;
  t2659 = t1730*t2395;
  t2660 = t2656 + t2658 + t2659;
  t2579 = -4.e-6*t1491;
  t2713 = 2.8e-11*t1513;
  t2647 = 7.e-6*t1491;
  p_output1[0]=1.;
  p_output1[1]=t1108*t1194 + t1321*t1348 + t1440*t1467 + t1539*t1577 + t1644*t1682 + t1715*t1735 - 0.038924*(t1577*t1744 + t1682*t1764 + t1735*t1784) - 0.80315*(t1577*t1794 + t1682*t1801 + t1735*t1804) + 0.148705*(t1577*t1813 + t1682*t1823 + t1735*t1841) - 1.*t7*t760*t763 + t1081*t821;
  p_output1[2]=t1321*t1878 + t1440*t1888 + t1539*t1902 + t1644*t1912 + t1715*t1923 - 0.038924*(t1744*t1902 + t1764*t1912 + t1784*t1923) - 0.80315*(t1794*t1902 + t1801*t1912 + t1804*t1923) + 0.148705*(t1813*t1902 + t1823*t1912 + t1841*t1923) + t1007*t1054*t1108*t7 - 1.*t1007*t7*t821*t901 - 1.*t1007*t760*t914;
  p_output1[3]=t1108*t2017 + t1440*t2055 + t1321*t2072 + t1644*t2081 + t1539*t2099 + t1715*t2111 - 0.038924*(t1764*t2081 + t1744*t2099 + t1784*t2111) - 0.80315*(t1801*t2081 + t1794*t2099 + t1804*t2111) + 0.148705*(t1823*t2081 + t1813*t2099 + t1841*t2111) + t2027*t821;
  p_output1[4]=t1440*t2181 + t1321*t2198 + t1644*t2215 + t1539*t2232 + t1715*t2253 - 0.038924*(t1764*t2215 + t1744*t2232 + t1784*t2253) - 0.80315*(t1801*t2215 + t1794*t2232 + t1804*t2253) + 0.148705*(t1823*t2215 + t1813*t2232 + t1841*t2253) + t2174*(t2162 - 0.15121*t790) + t2027*(t2162 + t801);
  p_output1[5]=t1644*t2424 + t1715*t2463 + t1539*t2488 - 0.038924*(t1764*t2424 + t1784*t2463 + t1744*t2488) - 0.80315*(t1801*t2424 + t1804*t2463 + t1794*t2488) + 0.148705*(t1823*t2424 + t1841*t2463 + t1813*t2488) + t2181*(-1.4640699999999997e-7 - 0.038748999993*(t1281 + t2353) - 1.38024835e-16*t629 - 0.281209000004*(t2365 + t633)) + t2395*(1.0248489999999998e-12 - 0.038748999993*(t218 + t2311) - 0.28120900000849935*t629 - 2.123459e-6*(t2382 + t633)) + t1007*(5.856279999999999e-13 - 0.281209000004*(t155 + t2311) - 2.123459e-6*(t1281 + t2325) - 0.0387489999948987*t629)*t7;
  p_output1[6]=(1.8190549999999993e-12 - 0.5031490000160505*t1513 - 0.038922999986*(t1493 + t2566) - 3.6777349999999994e-6*(t1693 + t2579))*t2593 + (-2.598649999999999e-7 - 2.3905277499999995e-16*t1513 - 0.038922999986*(t1637 + t2597) - 0.503149000008*(t1693 + t2612))*t2642 + (1.0394599999999997e-12 - 0.03892299998790722*t1513 - 0.503149000008*(t1491 + t2566) - 3.6777349999999994e-6*(t1637 + t2647))*t2660 + 0.148705*(t2593*(t1605 + t2612) - 6.5e-11*t1513*t2642 + (t1534 + t2597)*t2660) - 0.038924*(t2642*(t1534 + t2647) - 1.000000000049*t1513*t2660 + t2593*(t1491 + t2713)) - 0.80315*(-1.000000000016*t1513*t2593 + (t1605 + t2579)*t2642 + t2660*(t1493 + t2713));
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

#include "J_foot_clearance_RlFootParallelStance1.hh"

namespace ParallelStance1
{

void J_foot_clearance_RlFootParallelStance1_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
