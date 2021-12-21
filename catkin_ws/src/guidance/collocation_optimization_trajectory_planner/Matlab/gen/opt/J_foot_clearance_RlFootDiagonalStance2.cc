/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 12:55:32 GMT+01:00
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
  double t541;
  double t599;
  double t668;
  double t707;
  double t1285;
  double t1311;
  double t1315;
  double t1324;
  double t1345;
  double t1357;
  double t1392;
  double t1365;
  double t1367;
  double t1397;
  double t695;
  double t1388;
  double t1404;
  double t1405;
  double t1417;
  double t1422;
  double t1427;
  double t1001;
  double t1505;
  double t1675;
  double t1693;
  double t1696;
  double t1726;
  double t389;
  double t1567;
  double t1591;
  double t1517;
  double t1526;
  double t1527;
  double t1647;
  double t1662;
  double t1666;
  double t1767;
  double t1475;
  double t1814;
  double t1507;
  double t1872;
  double t1721;
  double t1895;
  double t1898;
  double t878;
  double t1802;
  double t1803;
  double t1809;
  double t1816;
  double t1839;
  double t1850;
  double t1855;
  double t1865;
  double t1866;
  double t1961;
  double t1902;
  double t1904;
  double t1908;
  double t1914;
  double t1919;
  double t1925;
  double t1946;
  double t1950;
  double t1973;
  double t1975;
  double t1982;
  double t1986;
  double t1988;
  double t1989;
  double t1991;
  double t1993;
  double t1772;
  double t2003;
  double t1745;
  double t2087;
  double t1881;
  double t2014;
  double t2018;
  double t1873;
  double t1336;
  double t1359;
  double t422;
  double t684;
  double t893;
  double t962;
  double t1036;
  double t1120;
  double t1190;
  double t1411;
  double t1415;
  double t1446;
  double t1457;
  double t1482;
  double t1486;
  double t1508;
  double t1509;
  double t1510;
  double t1544;
  double t1545;
  double t1576;
  double t1581;
  double t1622;
  double t1634;
  double t1641;
  double t1670;
  double t1710;
  double t1747;
  double t1755;
  double t1781;
  double t1787;
  double t1789;
  double t2143;
  double t2144;
  double t2151;
  double t2160;
  double t2161;
  double t2165;
  double t1869;
  double t1870;
  double t1874;
  double t1879;
  double t1883;
  double t1884;
  double t1892;
  double t1957;
  double t1959;
  double t1963;
  double t1965;
  double t1967;
  double t1969;
  double t1971;
  double t2006;
  double t2175;
  double t2181;
  double t2182;
  double t2186;
  double t2020;
  double t2188;
  double t2189;
  double t2193;
  double t2198;
  double t2023;
  double t2032;
  double t2203;
  double t2204;
  double t2206;
  double t2213;
  double t2059;
  double t2083;
  double t2090;
  double t2099;
  double t2110;
  double t2112;
  double t2115;
  double t2117;
  double t2285;
  double t2286;
  double t2287;
  double t2293;
  double t2296;
  double t2300;
  double t2304;
  double t2305;
  double t2307;
  double t2316;
  double t2320;
  double t2321;
  double t2329;
  double t2330;
  double t2332;
  double t2334;
  double t2335;
  double t2339;
  double t2354;
  double t2355;
  double t2363;
  double t2404;
  double t2418;
  double t2425;
  double t2430;
  double t2438;
  double t2442;
  double t2445;
  double t2448;
  double t2453;
  double t2454;
  double t2455;
  double t2458;
  double t2460;
  double t2468;
  double t2472;
  double t2474;
  double t2477;
  double t2551;
  double t2572;
  double t2584;
  double t2654;
  double t2658;
  double t2664;
  double t2557;
  double t2712;
  double t2632;
  double t2667;
  double t2676;
  double t2677;
  double t2681;
  double t2682;
  double t2698;
  double t2703;
  double t2708;
  double t2710;
  double t2713;
  double t2714;
  double t2715;
  double t2719;
  double t2724;
  double t2725;
  double t2734;
  double t2735;
  double t2736;
  double t2818;
  double t2874;
  double t2852;
  double t2855;
  double t2859;
  double t2860;
  double t2895;
  double t2903;
  double t2906;
  double t2908;
  double t2863;
  double t2945;
  double t2948;
  double t2951;
  double t2953;
  double t2823;
  double t2981;
  double t2932;
  t541 = Cos(var1[13]);
  t599 = -1.*t541;
  t668 = 1. + t599;
  t707 = Sin(var1[13]);
  t1285 = Sin(var1[3]);
  t1311 = Cos(var1[12]);
  t1315 = -1.*t1311;
  t1324 = 1. + t1315;
  t1345 = Sin(var1[12]);
  t1357 = 0.15121*t1345;
  t1392 = Cos(var1[3]);
  t1365 = Cos(var1[5]);
  t1367 = Sin(var1[4]);
  t1397 = Sin(var1[5]);
  t695 = 4.e-6*t668;
  t1388 = t1365*t1285*t1367;
  t1404 = t1392*t1397;
  t1405 = t1388 + t1404;
  t1417 = t1392*t1365;
  t1422 = -1.*t1285*t1367*t1397;
  t1427 = t1417 + t1422;
  t1001 = -2.8e-11*t668;
  t1505 = 7.e-6*t668;
  t1675 = Cos(var1[14]);
  t1693 = -1.*t1675;
  t1696 = 1. + t1693;
  t1726 = Sin(var1[14]);
  t389 = Cos(var1[4]);
  t1567 = -1.*t707;
  t1591 = -4.e-6*t707;
  t1517 = -1.*t1345*t1405;
  t1526 = t1311*t1427;
  t1527 = t1517 + t1526;
  t1647 = t1311*t1405;
  t1662 = t1345*t1427;
  t1666 = t1647 + t1662;
  t1767 = 7.e-6*t1696;
  t1475 = -7.e-6*t707;
  t1814 = -7.e-6*t668;
  t1507 = 4.e-6*t707;
  t1872 = 4.e-6*t1696;
  t1721 = -2.8e-11*t1696;
  t1895 = -1. + t541;
  t1898 = 4.e-6*t1895;
  t878 = 7.e-6*t707;
  t1802 = 2.8e-11*t668;
  t1803 = t1802 + t1567;
  t1809 = -1.*t389*t1803*t1285;
  t1816 = t1814 + t1591;
  t1839 = t1816*t1527;
  t1850 = -1.000000000016*t668;
  t1855 = 1. + t1850;
  t1865 = t1855*t1666;
  t1866 = t1809 + t1839 + t1865;
  t1961 = 7.e-6*t1726;
  t1902 = t1898 + t1475;
  t1904 = -1.*t389*t1902*t1285;
  t1908 = -6.5e-11*t668;
  t1914 = 1. + t1908;
  t1919 = t1914*t1527;
  t1925 = t1814 + t1507;
  t1946 = t1925*t1666;
  t1950 = t1904 + t1919 + t1946;
  t1973 = -1.000000000049*t668;
  t1975 = 1. + t1973;
  t1982 = -1.*t1975*t389*t1285;
  t1986 = t1898 + t878;
  t1988 = t1986*t1527;
  t1989 = t1802 + t707;
  t1991 = t1989*t1666;
  t1993 = t1982 + t1988 + t1991;
  t1772 = -4.e-6*t1726;
  t2003 = 2.8e-11*t1696;
  t1745 = -1.*t1726;
  t2087 = -7.e-6*t1696;
  t1881 = 4.e-6*t1726;
  t2014 = -1. + t1675;
  t2018 = 4.e-6*t2014;
  t1873 = -7.e-6*t1726;
  t1336 = -0.15121*t1324;
  t1359 = t1336 + t1357;
  t422 = 5.856279999999999e-13*var1[13];
  t684 = -0.0387489999948987*t668;
  t893 = t695 + t878;
  t962 = -2.123459e-6*t893;
  t1036 = t1001 + t707;
  t1120 = -0.281209000004*t1036;
  t1190 = t422 + t684 + t962 + t1120;
  t1411 = 0.15121*t1324;
  t1415 = t1411 + t1357;
  t1446 = -1.4640699999999997e-7*var1[13];
  t1457 = -1.38024835e-16*t668;
  t1482 = t695 + t1475;
  t1486 = -0.038748999993*t1482;
  t1508 = t1505 + t1507;
  t1509 = -0.281209000004*t1508;
  t1510 = t1446 + t1457 + t1486 + t1509;
  t1544 = 1.0248489999999998e-12*var1[13];
  t1545 = -0.28120900000849935*t668;
  t1576 = t1001 + t1567;
  t1581 = -0.038748999993*t1576;
  t1622 = t1505 + t1591;
  t1634 = -2.123459e-6*t1622;
  t1641 = t1544 + t1545 + t1581 + t1634;
  t1670 = 1.8190549999999993e-12*var1[14];
  t1710 = -0.5031490000160505*t1696;
  t1747 = t1721 + t1745;
  t1755 = -0.038922999986*t1747;
  t1781 = t1767 + t1772;
  t1787 = -3.6777349999999994e-6*t1781;
  t1789 = t1670 + t1710 + t1755 + t1787;
  t2143 = t1392*t389*t1365*t1345;
  t2144 = t1311*t1392*t389*t1397;
  t2151 = t2143 + t2144;
  t2160 = -1.*t1311*t1392*t389*t1365;
  t2161 = t1392*t389*t1345*t1397;
  t2165 = t2160 + t2161;
  t1869 = -2.598649999999999e-7*var1[14];
  t1870 = -2.3905277499999995e-16*t1696;
  t1874 = t1872 + t1873;
  t1879 = -0.038922999986*t1874;
  t1883 = t1767 + t1881;
  t1884 = -0.503149000008*t1883;
  t1892 = t1869 + t1870 + t1879 + t1884;
  t1957 = 1.0394599999999997e-12*var1[14];
  t1959 = -0.03892299998790722*t1696;
  t1963 = t1872 + t1961;
  t1965 = -3.6777349999999994e-6*t1963;
  t1967 = t1721 + t1726;
  t1969 = -0.503149000008*t1967;
  t1971 = t1957 + t1959 + t1965 + t1969;
  t2006 = t2003 + t1726;
  t2175 = -1.*t1392*t1803*t1367;
  t2181 = t1816*t2151;
  t2182 = t1855*t2165;
  t2186 = t2175 + t2181 + t2182;
  t2020 = t2018 + t1961;
  t2188 = -1.*t1392*t1902*t1367;
  t2189 = t1914*t2151;
  t2193 = t1925*t2165;
  t2198 = t2188 + t2189 + t2193;
  t2023 = -1.000000000049*t1696;
  t2032 = 1. + t2023;
  t2203 = -1.*t1975*t1392*t1367;
  t2204 = t1986*t2151;
  t2206 = t1989*t2165;
  t2213 = t2203 + t2204 + t2206;
  t2059 = -1.000000000016*t1696;
  t2083 = 1. + t2059;
  t2090 = t2087 + t1772;
  t2099 = t2003 + t1745;
  t2110 = t2087 + t1881;
  t2112 = -6.5e-11*t1696;
  t2115 = 1. + t2112;
  t2117 = t2018 + t1873;
  t2285 = t1392*t1365*t1367;
  t2286 = -1.*t1285*t1397;
  t2287 = t2285 + t2286;
  t2293 = t1365*t1285;
  t2296 = t1392*t1367*t1397;
  t2300 = t2293 + t2296;
  t2304 = t1345*t2287;
  t2305 = t1311*t2300;
  t2307 = t2304 + t2305;
  t2316 = t1311*t2287;
  t2320 = -1.*t1345*t2300;
  t2321 = t2316 + t2320;
  t2329 = t1925*t2307;
  t2330 = t1914*t2321;
  t2332 = t2329 + t2330;
  t2334 = t1855*t2307;
  t2335 = t1816*t2321;
  t2339 = t2334 + t2335;
  t2354 = t1989*t2307;
  t2355 = t1986*t2321;
  t2363 = t2354 + t2355;
  t2404 = 0.15121*t1311;
  t2418 = -1.*t1392*t1365*t1367;
  t2425 = t1285*t1397;
  t2430 = t2418 + t2425;
  t2438 = -1.*t1345*t2430;
  t2442 = t2438 + t2305;
  t2445 = -1.*t1311*t2430;
  t2448 = t2445 + t2320;
  t2453 = t1925*t2442;
  t2454 = t1914*t2448;
  t2455 = t2453 + t2454;
  t2458 = t1855*t2442;
  t2460 = t1816*t2448;
  t2468 = t2458 + t2460;
  t2472 = t1989*t2442;
  t2474 = t1986*t2448;
  t2477 = t2472 + t2474;
  t2551 = -2.8e-11*t707;
  t2572 = -7.e-6*t541;
  t2584 = 4.e-6*t541;
  t2654 = t1311*t2430;
  t2658 = t1345*t2300;
  t2664 = t2654 + t2658;
  t2557 = 7.e-6*t541;
  t2712 = 2.8e-11*t707;
  t2632 = -4.e-6*t541;
  t2667 = t2572 + t1591;
  t2676 = t1392*t389*t2667;
  t2677 = -6.5e-11*t707*t2442;
  t2681 = t2584 + t1475;
  t2682 = t2681*t2664;
  t2698 = t2676 + t2677 + t2682;
  t2703 = -1.000000000049*t1392*t389*t707;
  t2708 = t2557 + t1591;
  t2710 = t2708*t2442;
  t2713 = t541 + t2712;
  t2714 = t2713*t2664;
  t2715 = t2703 + t2710 + t2714;
  t2719 = t599 + t2712;
  t2724 = t1392*t389*t2719;
  t2725 = t2632 + t1475;
  t2734 = t2725*t2442;
  t2735 = -1.000000000016*t707*t2664;
  t2736 = t2724 + t2734 + t2735;
  t2818 = -2.8e-11*t1726;
  t2874 = 4.e-6*t1675;
  t2852 = t1392*t389*t1803;
  t2855 = t1816*t2442;
  t2859 = t1855*t2664;
  t2860 = t2852 + t2855 + t2859;
  t2895 = t1392*t389*t1902;
  t2903 = t1914*t2442;
  t2906 = t1925*t2664;
  t2908 = t2895 + t2903 + t2906;
  t2863 = -7.e-6*t1675;
  t2945 = t1975*t1392*t389;
  t2948 = t1986*t2442;
  t2951 = t1989*t2664;
  t2953 = t2945 + t2948 + t2951;
  t2823 = -4.e-6*t1675;
  t2981 = 2.8e-11*t1726;
  t2932 = 7.e-6*t1675;
  p_output1[0]=1.;
  p_output1[1]=t1359*t1405 + t1415*t1427 + t1510*t1527 + t1641*t1666 + t1789*t1866 + t1892*t1950 + t1971*t1993 - 0.038924*(t1866*t2006 + t1950*t2020 + t1993*t2032) - 0.80315*(t1866*t2083 + t1950*t2090 + t1993*t2099) + 0.148705*(t1866*t2110 + t1950*t2115 + t1993*t2117) - 1.*t1190*t1285*t389;
  p_output1[2]=-1.*t1190*t1367*t1392 + t1510*t2151 + t1641*t2165 + t1789*t2186 + t1892*t2198 + t1971*t2213 - 0.038924*(t2006*t2186 + t2020*t2198 + t2032*t2213) - 0.80315*(t2083*t2186 + t2090*t2198 + t2099*t2213) + 0.148705*(t2110*t2186 + t2115*t2198 + t2117*t2213) - 1.*t1359*t1365*t1392*t389 + t1392*t1397*t1415*t389;
  p_output1[3]=t1415*t2287 + t1359*t2300 + t1641*t2307 + t1510*t2321 + t1892*t2332 + t1789*t2339 + t1971*t2363 - 0.038924*(t2020*t2332 + t2006*t2339 + t2032*t2363) - 0.80315*(t2090*t2332 + t2083*t2339 + t2099*t2363) + 0.148705*(t2115*t2332 + t2110*t2339 + t2117*t2363);
  p_output1[4]=t2300*(t1357 + t2404) + (-0.15121*t1345 + t2404)*t2430 + t1641*t2442 + t1510*t2448 + t1892*t2455 + t1789*t2468 + t1971*t2477 - 0.038924*(t2020*t2455 + t2006*t2468 + t2032*t2477) - 0.80315*(t2090*t2455 + t2083*t2468 + t2099*t2477) + 0.148705*(t2115*t2455 + t2110*t2468 + t2117*t2477);
  p_output1[5]=t1892*t2698 + t1971*t2715 + t1789*t2736 - 0.038924*(t2020*t2698 + t2032*t2715 + t2006*t2736) - 0.80315*(t2090*t2698 + t2099*t2715 + t2083*t2736) + 0.148705*(t2115*t2698 + t2117*t2715 + t2110*t2736) + t1392*t389*(5.856279999999999e-13 - 2.123459e-6*(t1507 + t2557) - 0.281209000004*(t2551 + t541) - 0.0387489999948987*t707) + t2442*(-1.4640699999999997e-7 - 0.038748999993*(t1507 + t2572) - 1.38024835e-16*t707 - 0.281209000004*(t2584 + t878)) + t2664*(1.0248489999999998e-12 - 0.038748999993*(t2551 + t599) - 0.28120900000849935*t707 - 2.123459e-6*(t2632 + t878));
  p_output1[6]=(1.8190549999999993e-12 - 0.5031490000160505*t1726 - 0.038922999986*(t1693 + t2818) - 3.6777349999999994e-6*(t1961 + t2823))*t2860 + (-2.598649999999999e-7 - 2.3905277499999995e-16*t1726 - 0.038922999986*(t1881 + t2863) - 0.503149000008*(t1961 + t2874))*t2908 + (1.0394599999999997e-12 - 0.03892299998790722*t1726 - 0.503149000008*(t1675 + t2818) - 3.6777349999999994e-6*(t1881 + t2932))*t2953 + 0.148705*(t2860*(t1873 + t2874) - 6.5e-11*t1726*t2908 + (t1772 + t2863)*t2953) - 0.038924*(t2908*(t1772 + t2932) - 1.000000000049*t1726*t2953 + t2860*(t1675 + t2981)) - 0.80315*(-1.000000000016*t1726*t2860 + (t1873 + t2823)*t2908 + t2953*(t1693 + t2981));
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

namespace TrotStance2
{

void J_foot_clearance_RlFootDiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
