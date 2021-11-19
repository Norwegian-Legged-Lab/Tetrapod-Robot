/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:29:27 GMT+01:00
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
  double t158;
  double t323;
  double t468;
  double t568;
  double t803;
  double t811;
  double t812;
  double t813;
  double t823;
  double t828;
  double t853;
  double t845;
  double t850;
  double t860;
  double t546;
  double t851;
  double t884;
  double t894;
  double t964;
  double t985;
  double t1000;
  double t727;
  double t1096;
  double t1495;
  double t1502;
  double t1512;
  double t1532;
  double t84;
  double t1373;
  double t1386;
  double t1346;
  double t1354;
  double t1360;
  double t1443;
  double t1446;
  double t1463;
  double t1564;
  double t1051;
  double t1636;
  double t1194;
  double t1693;
  double t1520;
  double t1740;
  double t1741;
  double t574;
  double t1620;
  double t1628;
  double t1635;
  double t1644;
  double t1650;
  double t1659;
  double t1670;
  double t1677;
  double t1682;
  double t1806;
  double t1742;
  double t1744;
  double t1748;
  double t1749;
  double t1777;
  double t1782;
  double t1792;
  double t1793;
  double t1855;
  double t1856;
  double t1859;
  double t1860;
  double t1862;
  double t1864;
  double t1875;
  double t1876;
  double t1588;
  double t1884;
  double t1535;
  double t1967;
  double t1712;
  double t1888;
  double t1892;
  double t1703;
  double t818;
  double t841;
  double t111;
  double t492;
  double t594;
  double t693;
  double t782;
  double t783;
  double t787;
  double t912;
  double t939;
  double t1040;
  double t1048;
  double t1076;
  double t1087;
  double t1278;
  double t1307;
  double t1343;
  double t1364;
  double t1368;
  double t1379;
  double t1384;
  double t1403;
  double t1407;
  double t1442;
  double t1482;
  double t1517;
  double t1538;
  double t1562;
  double t1595;
  double t1604;
  double t1616;
  double t2052;
  double t2055;
  double t2059;
  double t2063;
  double t2070;
  double t2071;
  double t1686;
  double t1689;
  double t1706;
  double t1709;
  double t1731;
  double t1734;
  double t1738;
  double t1801;
  double t1802;
  double t1816;
  double t1818;
  double t1842;
  double t1848;
  double t1854;
  double t1885;
  double t2078;
  double t2101;
  double t2109;
  double t2121;
  double t1898;
  double t2131;
  double t2142;
  double t2144;
  double t2146;
  double t1916;
  double t1919;
  double t2152;
  double t2157;
  double t2159;
  double t2160;
  double t1950;
  double t1952;
  double t1974;
  double t1990;
  double t2006;
  double t2022;
  double t2023;
  double t2030;
  double t2253;
  double t2265;
  double t2267;
  double t2272;
  double t2274;
  double t2283;
  double t2297;
  double t2301;
  double t2302;
  double t2313;
  double t2318;
  double t2319;
  double t2323;
  double t2327;
  double t2330;
  double t2334;
  double t2336;
  double t2339;
  double t2347;
  double t2350;
  double t2353;
  double t2405;
  double t2411;
  double t2415;
  double t2423;
  double t2432;
  double t2434;
  double t2444;
  double t2448;
  double t2454;
  double t2457;
  double t2459;
  double t2471;
  double t2475;
  double t2477;
  double t2481;
  double t2482;
  double t2486;
  double t2595;
  double t2626;
  double t2630;
  double t2692;
  double t2694;
  double t2696;
  double t2609;
  double t2728;
  double t2668;
  double t2708;
  double t2712;
  double t2714;
  double t2718;
  double t2719;
  double t2720;
  double t2724;
  double t2725;
  double t2726;
  double t2729;
  double t2731;
  double t2732;
  double t2736;
  double t2737;
  double t2738;
  double t2739;
  double t2740;
  double t2742;
  double t2808;
  double t2853;
  double t2828;
  double t2829;
  double t2831;
  double t2832;
  double t2868;
  double t2874;
  double t2877;
  double t2878;
  double t2836;
  double t2898;
  double t2899;
  double t2902;
  double t2905;
  double t2816;
  double t2954;
  double t2888;
  t158 = Cos(var1[13]);
  t323 = -1.*t158;
  t468 = 1. + t323;
  t568 = Sin(var1[13]);
  t803 = Sin(var1[3]);
  t811 = Cos(var1[12]);
  t812 = -1.*t811;
  t813 = 1. + t812;
  t823 = Sin(var1[12]);
  t828 = 0.15121*t823;
  t853 = Cos(var1[3]);
  t845 = Cos(var1[5]);
  t850 = Sin(var1[4]);
  t860 = Sin(var1[5]);
  t546 = 4.e-6*t468;
  t851 = t845*t803*t850;
  t884 = t853*t860;
  t894 = t851 + t884;
  t964 = t853*t845;
  t985 = -1.*t803*t850*t860;
  t1000 = t964 + t985;
  t727 = -2.8e-11*t468;
  t1096 = 7.e-6*t468;
  t1495 = Cos(var1[14]);
  t1502 = -1.*t1495;
  t1512 = 1. + t1502;
  t1532 = Sin(var1[14]);
  t84 = Cos(var1[4]);
  t1373 = -1.*t568;
  t1386 = -4.e-6*t568;
  t1346 = -1.*t823*t894;
  t1354 = t811*t1000;
  t1360 = t1346 + t1354;
  t1443 = t811*t894;
  t1446 = t823*t1000;
  t1463 = t1443 + t1446;
  t1564 = 7.e-6*t1512;
  t1051 = -7.e-6*t568;
  t1636 = -7.e-6*t468;
  t1194 = 4.e-6*t568;
  t1693 = 4.e-6*t1512;
  t1520 = -2.8e-11*t1512;
  t1740 = -1. + t158;
  t1741 = 4.e-6*t1740;
  t574 = 7.e-6*t568;
  t1620 = 2.8e-11*t468;
  t1628 = t1620 + t1373;
  t1635 = -1.*t84*t1628*t803;
  t1644 = t1636 + t1386;
  t1650 = t1644*t1360;
  t1659 = -1.000000000016*t468;
  t1670 = 1. + t1659;
  t1677 = t1670*t1463;
  t1682 = t1635 + t1650 + t1677;
  t1806 = 7.e-6*t1532;
  t1742 = t1741 + t1051;
  t1744 = -1.*t84*t1742*t803;
  t1748 = -6.5e-11*t468;
  t1749 = 1. + t1748;
  t1777 = t1749*t1360;
  t1782 = t1636 + t1194;
  t1792 = t1782*t1463;
  t1793 = t1744 + t1777 + t1792;
  t1855 = -1.000000000049*t468;
  t1856 = 1. + t1855;
  t1859 = -1.*t1856*t84*t803;
  t1860 = t1741 + t574;
  t1862 = t1860*t1360;
  t1864 = t1620 + t568;
  t1875 = t1864*t1463;
  t1876 = t1859 + t1862 + t1875;
  t1588 = -4.e-6*t1532;
  t1884 = 2.8e-11*t1512;
  t1535 = -1.*t1532;
  t1967 = -7.e-6*t1512;
  t1712 = 4.e-6*t1532;
  t1888 = -1. + t1495;
  t1892 = 4.e-6*t1888;
  t1703 = -7.e-6*t1532;
  t818 = -0.15121*t813;
  t841 = t818 + t828;
  t111 = 5.856279999999999e-13*var1[13];
  t492 = -0.0387489999948987*t468;
  t594 = t546 + t574;
  t693 = -2.123459e-6*t594;
  t782 = t727 + t568;
  t783 = -0.281209000004*t782;
  t787 = t111 + t492 + t693 + t783;
  t912 = 0.15121*t813;
  t939 = t912 + t828;
  t1040 = -1.4640699999999997e-7*var1[13];
  t1048 = -1.38024835e-16*t468;
  t1076 = t546 + t1051;
  t1087 = -0.038748999993*t1076;
  t1278 = t1096 + t1194;
  t1307 = -0.281209000004*t1278;
  t1343 = t1040 + t1048 + t1087 + t1307;
  t1364 = 1.0248489999999998e-12*var1[13];
  t1368 = -0.28120900000849935*t468;
  t1379 = t727 + t1373;
  t1384 = -0.038748999993*t1379;
  t1403 = t1096 + t1386;
  t1407 = -2.123459e-6*t1403;
  t1442 = t1364 + t1368 + t1384 + t1407;
  t1482 = 1.8190549999999993e-12*var1[14];
  t1517 = -0.5031490000160505*t1512;
  t1538 = t1520 + t1535;
  t1562 = -0.038922999986*t1538;
  t1595 = t1564 + t1588;
  t1604 = -3.6777349999999994e-6*t1595;
  t1616 = t1482 + t1517 + t1562 + t1604;
  t2052 = t853*t84*t845*t823;
  t2055 = t811*t853*t84*t860;
  t2059 = t2052 + t2055;
  t2063 = -1.*t811*t853*t84*t845;
  t2070 = t853*t84*t823*t860;
  t2071 = t2063 + t2070;
  t1686 = -2.598649999999999e-7*var1[14];
  t1689 = -2.3905277499999995e-16*t1512;
  t1706 = t1693 + t1703;
  t1709 = -0.038922999986*t1706;
  t1731 = t1564 + t1712;
  t1734 = -0.503149000008*t1731;
  t1738 = t1686 + t1689 + t1709 + t1734;
  t1801 = 1.0394599999999997e-12*var1[14];
  t1802 = -0.03892299998790722*t1512;
  t1816 = t1693 + t1806;
  t1818 = -3.6777349999999994e-6*t1816;
  t1842 = t1520 + t1532;
  t1848 = -0.503149000008*t1842;
  t1854 = t1801 + t1802 + t1818 + t1848;
  t1885 = t1884 + t1532;
  t2078 = -1.*t853*t1628*t850;
  t2101 = t1644*t2059;
  t2109 = t1670*t2071;
  t2121 = t2078 + t2101 + t2109;
  t1898 = t1892 + t1806;
  t2131 = -1.*t853*t1742*t850;
  t2142 = t1749*t2059;
  t2144 = t1782*t2071;
  t2146 = t2131 + t2142 + t2144;
  t1916 = -1.000000000049*t1512;
  t1919 = 1. + t1916;
  t2152 = -1.*t1856*t853*t850;
  t2157 = t1860*t2059;
  t2159 = t1864*t2071;
  t2160 = t2152 + t2157 + t2159;
  t1950 = -1.000000000016*t1512;
  t1952 = 1. + t1950;
  t1974 = t1967 + t1588;
  t1990 = t1884 + t1535;
  t2006 = t1967 + t1712;
  t2022 = -6.5e-11*t1512;
  t2023 = 1. + t2022;
  t2030 = t1892 + t1703;
  t2253 = t853*t845*t850;
  t2265 = -1.*t803*t860;
  t2267 = t2253 + t2265;
  t2272 = t845*t803;
  t2274 = t853*t850*t860;
  t2283 = t2272 + t2274;
  t2297 = t823*t2267;
  t2301 = t811*t2283;
  t2302 = t2297 + t2301;
  t2313 = t811*t2267;
  t2318 = -1.*t823*t2283;
  t2319 = t2313 + t2318;
  t2323 = t1782*t2302;
  t2327 = t1749*t2319;
  t2330 = t2323 + t2327;
  t2334 = t1670*t2302;
  t2336 = t1644*t2319;
  t2339 = t2334 + t2336;
  t2347 = t1864*t2302;
  t2350 = t1860*t2319;
  t2353 = t2347 + t2350;
  t2405 = 0.15121*t811;
  t2411 = -1.*t853*t845*t850;
  t2415 = t803*t860;
  t2423 = t2411 + t2415;
  t2432 = -1.*t823*t2423;
  t2434 = t2432 + t2301;
  t2444 = -1.*t811*t2423;
  t2448 = t2444 + t2318;
  t2454 = t1782*t2434;
  t2457 = t1749*t2448;
  t2459 = t2454 + t2457;
  t2471 = t1670*t2434;
  t2475 = t1644*t2448;
  t2477 = t2471 + t2475;
  t2481 = t1864*t2434;
  t2482 = t1860*t2448;
  t2486 = t2481 + t2482;
  t2595 = -2.8e-11*t568;
  t2626 = -7.e-6*t158;
  t2630 = 4.e-6*t158;
  t2692 = t811*t2423;
  t2694 = t823*t2283;
  t2696 = t2692 + t2694;
  t2609 = 7.e-6*t158;
  t2728 = 2.8e-11*t568;
  t2668 = -4.e-6*t158;
  t2708 = t2626 + t1386;
  t2712 = t853*t84*t2708;
  t2714 = -6.5e-11*t568*t2434;
  t2718 = t2630 + t1051;
  t2719 = t2718*t2696;
  t2720 = t2712 + t2714 + t2719;
  t2724 = -1.000000000049*t853*t84*t568;
  t2725 = t2609 + t1386;
  t2726 = t2725*t2434;
  t2729 = t158 + t2728;
  t2731 = t2729*t2696;
  t2732 = t2724 + t2726 + t2731;
  t2736 = t323 + t2728;
  t2737 = t853*t84*t2736;
  t2738 = t2668 + t1051;
  t2739 = t2738*t2434;
  t2740 = -1.000000000016*t568*t2696;
  t2742 = t2737 + t2739 + t2740;
  t2808 = -2.8e-11*t1532;
  t2853 = 4.e-6*t1495;
  t2828 = t853*t84*t1628;
  t2829 = t1644*t2434;
  t2831 = t1670*t2696;
  t2832 = t2828 + t2829 + t2831;
  t2868 = t853*t84*t1742;
  t2874 = t1749*t2434;
  t2877 = t1782*t2696;
  t2878 = t2868 + t2874 + t2877;
  t2836 = -7.e-6*t1495;
  t2898 = t1856*t853*t84;
  t2899 = t1860*t2434;
  t2902 = t1864*t2696;
  t2905 = t2898 + t2899 + t2902;
  t2816 = -4.e-6*t1495;
  t2954 = 2.8e-11*t1532;
  t2888 = 7.e-6*t1495;
  p_output1[0]=1.;
  p_output1[1]=t1343*t1360 + t1442*t1463 + t1616*t1682 + t1738*t1793 + t1854*t1876 - 0.038924*(t1682*t1885 + t1793*t1898 + t1876*t1919) - 0.80315*(t1682*t1952 + t1793*t1974 + t1876*t1990) + 0.148705*(t1682*t2006 + t1793*t2023 + t1876*t2030) - 1.*t787*t803*t84 + t841*t894 + t1000*t939;
  p_output1[2]=t1343*t2059 + t1442*t2071 + t1616*t2121 + t1738*t2146 + t1854*t2160 - 0.038924*(t1885*t2121 + t1898*t2146 + t1919*t2160) - 0.80315*(t1952*t2121 + t1974*t2146 + t1990*t2160) + 0.148705*(t2006*t2121 + t2023*t2146 + t2030*t2160) - 1.*t84*t841*t845*t853 - 1.*t787*t850*t853 + t84*t853*t860*t939;
  p_output1[3]=t1442*t2302 + t1343*t2319 + t1738*t2330 + t1616*t2339 + t1854*t2353 - 0.038924*(t1898*t2330 + t1885*t2339 + t1919*t2353) - 0.80315*(t1974*t2330 + t1952*t2339 + t1990*t2353) + 0.148705*(t2023*t2330 + t2006*t2339 + t2030*t2353) + t2283*t841 + t2267*t939;
  p_output1[4]=t1442*t2434 + t1343*t2448 + t1738*t2459 + t1616*t2477 + t1854*t2486 - 0.038924*(t1898*t2459 + t1885*t2477 + t1919*t2486) - 0.80315*(t1974*t2459 + t1952*t2477 + t1990*t2486) + 0.148705*(t2023*t2459 + t2006*t2477 + t2030*t2486) + t2423*(t2405 - 0.15121*t823) + t2283*(t2405 + t828);
  p_output1[5]=t1738*t2720 + t1854*t2732 + t1616*t2742 - 0.038924*(t1898*t2720 + t1919*t2732 + t1885*t2742) - 0.80315*(t1974*t2720 + t1990*t2732 + t1952*t2742) + 0.148705*(t2023*t2720 + t2030*t2732 + t2006*t2742) + t2434*(-1.4640699999999997e-7 - 0.038748999993*(t1194 + t2626) - 1.38024835e-16*t568 - 0.281209000004*(t2630 + t574)) + t2696*(1.0248489999999998e-12 - 0.038748999993*(t2595 + t323) - 0.28120900000849935*t568 - 2.123459e-6*(t2668 + t574)) + (5.856279999999999e-13 - 0.281209000004*(t158 + t2595) - 2.123459e-6*(t1194 + t2609) - 0.0387489999948987*t568)*t84*t853;
  p_output1[6]=(1.8190549999999993e-12 - 0.5031490000160505*t1532 - 0.038922999986*(t1502 + t2808) - 3.6777349999999994e-6*(t1806 + t2816))*t2832 + (-2.598649999999999e-7 - 2.3905277499999995e-16*t1532 - 0.038922999986*(t1712 + t2836) - 0.503149000008*(t1806 + t2853))*t2878 + (1.0394599999999997e-12 - 0.03892299998790722*t1532 - 0.503149000008*(t1495 + t2808) - 3.6777349999999994e-6*(t1712 + t2888))*t2905 + 0.148705*(t2832*(t1703 + t2853) - 6.5e-11*t1532*t2878 + (t1588 + t2836)*t2905) - 0.038924*(t2878*(t1588 + t2888) - 1.000000000049*t1532*t2905 + t2832*(t1495 + t2954)) - 0.80315*(-1.000000000016*t1532*t2832 + (t1703 + t2816)*t2878 + t2905*(t1502 + t2954));
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
