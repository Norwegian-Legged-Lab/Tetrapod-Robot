/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 12:53:39 GMT+01:00
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
  double t376;
  double t490;
  double t658;
  double t1108;
  double t1414;
  double t1473;
  double t1476;
  double t1480;
  double t1481;
  double t1483;
  double t1547;
  double t1524;
  double t1526;
  double t1549;
  double t1177;
  double t1178;
  double t1534;
  double t1562;
  double t1570;
  double t1638;
  double t1645;
  double t1649;
  double t1673;
  double t978;
  double t1894;
  double t1902;
  double t1932;
  double t1962;
  double t358;
  double t1799;
  double t1707;
  double t1757;
  double t1776;
  double t1823;
  double t1826;
  double t1838;
  double t1986;
  double t1211;
  double t2004;
  double t1109;
  double t1953;
  double t2116;
  double t2126;
  double t2169;
  double t1683;
  double t2011;
  double t1677;
  double t2208;
  double t2005;
  double t2009;
  double t2023;
  double t2027;
  double t2029;
  double t2040;
  double t2051;
  double t2054;
  double t2229;
  double t2160;
  double t2161;
  double t2165;
  double t2170;
  double t2171;
  double t2173;
  double t2181;
  double t2185;
  double t2249;
  double t2255;
  double t2260;
  double t2261;
  double t2277;
  double t2287;
  double t2292;
  double t2294;
  double t2104;
  double t2305;
  double t2129;
  double t2320;
  double t2302;
  double t1967;
  double t1489;
  double t1490;
  double t375;
  double t918;
  double t1154;
  double t1168;
  double t1252;
  double t1266;
  double t1374;
  double t1574;
  double t1626;
  double t1666;
  double t1668;
  double t1679;
  double t1682;
  double t1684;
  double t1689;
  double t1691;
  double t1795;
  double t1796;
  double t1800;
  double t1804;
  double t1808;
  double t1817;
  double t1821;
  double t1877;
  double t1950;
  double t1970;
  double t1971;
  double t1989;
  double t1990;
  double t1999;
  double t2417;
  double t2419;
  double t2422;
  double t2426;
  double t2429;
  double t2433;
  double t2056;
  double t2077;
  double t2111;
  double t2113;
  double t2144;
  double t2157;
  double t2158;
  double t2205;
  double t2206;
  double t2209;
  double t2223;
  double t2233;
  double t2234;
  double t2247;
  double t2303;
  double t2436;
  double t2439;
  double t2443;
  double t2447;
  double t2306;
  double t2455;
  double t2457;
  double t2458;
  double t2459;
  double t2309;
  double t2310;
  double t2465;
  double t2466;
  double t2468;
  double t2475;
  double t2325;
  double t2330;
  double t2331;
  double t2341;
  double t2363;
  double t2364;
  double t2380;
  double t2393;
  double t2541;
  double t2544;
  double t2548;
  double t2550;
  double t2551;
  double t2552;
  double t2558;
  double t2560;
  double t2562;
  double t2565;
  double t2570;
  double t2572;
  double t2584;
  double t2585;
  double t2588;
  double t2594;
  double t2595;
  double t2596;
  double t2603;
  double t2604;
  double t2605;
  double t2655;
  double t2656;
  double t2658;
  double t2676;
  double t2678;
  double t2683;
  double t2687;
  double t2692;
  double t2695;
  double t2700;
  double t2707;
  double t2711;
  double t2712;
  double t2727;
  double t2728;
  double t2729;
  double t2826;
  double t2840;
  double t2855;
  double t2922;
  double t2931;
  double t2933;
  double t2804;
  double t2978;
  double t2905;
  double t2935;
  double t2942;
  double t2943;
  double t2954;
  double t2955;
  double t2957;
  double t2962;
  double t2966;
  double t2973;
  double t2980;
  double t2981;
  double t2983;
  double t2985;
  double t2987;
  double t2988;
  double t2989;
  double t2990;
  double t2996;
  double t3034;
  double t3062;
  double t3063;
  double t3068;
  double t3070;
  double t3097;
  double t3100;
  double t3101;
  double t3107;
  double t3042;
  double t3137;
  double t3138;
  double t3141;
  double t3143;
  double t3148;
  double t3073;
  double t3125;
  double t3115;
  t376 = Cos(var1[16]);
  t490 = -1.*t376;
  t658 = 1. + t490;
  t1108 = Sin(var1[16]);
  t1414 = Sin(var1[3]);
  t1473 = Cos(var1[15]);
  t1476 = -1.*t1473;
  t1480 = 1. + t1476;
  t1481 = -0.15121*t1480;
  t1483 = Sin(var1[15]);
  t1547 = Cos(var1[3]);
  t1524 = Cos(var1[5]);
  t1526 = Sin(var1[4]);
  t1549 = Sin(var1[5]);
  t1177 = -1. + t376;
  t1178 = 4.e-6*t1177;
  t1534 = t1524*t1414*t1526;
  t1562 = t1547*t1549;
  t1570 = t1534 + t1562;
  t1638 = t1547*t1524;
  t1645 = -1.*t1414*t1526*t1549;
  t1649 = t1638 + t1645;
  t1673 = 7.e-6*t658;
  t978 = 2.8e-11*t658;
  t1894 = Cos(var1[17]);
  t1902 = -1.*t1894;
  t1932 = 1. + t1902;
  t1962 = Sin(var1[17]);
  t358 = Cos(var1[4]);
  t1799 = -4.e-6*t1108;
  t1707 = -1.*t1483*t1570;
  t1757 = t1473*t1649;
  t1776 = t1707 + t1757;
  t1823 = t1473*t1570;
  t1826 = t1483*t1649;
  t1838 = t1823 + t1826;
  t1986 = 2.8e-11*t1932;
  t1211 = -7.e-6*t1108;
  t2004 = -2.8e-11*t658;
  t1109 = -1.*t1108;
  t1953 = 7.e-6*t1932;
  t2116 = -1. + t1894;
  t2126 = 4.e-6*t2116;
  t2169 = 4.e-6*t658;
  t1683 = 7.e-6*t1108;
  t2011 = -7.e-6*t658;
  t1677 = 4.e-6*t1108;
  t2208 = 4.e-6*t1962;
  t2005 = t2004 + t1108;
  t2009 = -1.*t358*t2005*t1414;
  t2023 = t2011 + t1799;
  t2027 = t2023*t1776;
  t2029 = -1.000000000016*t658;
  t2040 = 1. + t2029;
  t2051 = t2040*t1838;
  t2054 = t2009 + t2027 + t2051;
  t2229 = 7.e-6*t1962;
  t2160 = -1.000000000049*t658;
  t2161 = 1. + t2160;
  t2165 = -1.*t2161*t358*t1414;
  t2170 = t2169 + t1211;
  t2171 = t2170*t1776;
  t2173 = t2004 + t1109;
  t2181 = t2173*t1838;
  t2185 = t2165 + t2171 + t2181;
  t2249 = t2169 + t1683;
  t2255 = -1.*t358*t2249*t1414;
  t2260 = -6.5e-11*t658;
  t2261 = 1. + t2260;
  t2277 = t2261*t1776;
  t2287 = t2011 + t1677;
  t2292 = t2287*t1838;
  t2294 = t2255 + t2277 + t2292;
  t2104 = -1.*t1962;
  t2305 = 4.e-6*t1932;
  t2129 = -7.e-6*t1962;
  t2320 = -2.8e-11*t1932;
  t2302 = -7.e-6*t1932;
  t1967 = -4.e-6*t1962;
  t1489 = -0.15121*t1483;
  t1490 = t1481 + t1489;
  t375 = 1.5843479999999999e-12*var1[16];
  t918 = -0.03874900000889869*t658;
  t1154 = t978 + t1109;
  t1168 = -0.281211000004*t1154;
  t1252 = t1178 + t1211;
  t1266 = -1.8134809999999998e-6*t1252;
  t1374 = t375 + t918 + t1168 + t1266;
  t1574 = 0.15121*t1483;
  t1626 = t1481 + t1574;
  t1666 = 3.9608699999999997e-7*var1[16];
  t1668 = -1.1787626499999999e-16*t658;
  t1679 = t1673 + t1677;
  t1682 = -0.281211000004*t1679;
  t1684 = t1178 + t1683;
  t1689 = -0.038749000006999997*t1684;
  t1691 = t1666 + t1668 + t1682 + t1689;
  t1795 = -2.7726089999999997e-12*var1[16];
  t1796 = -0.2812110000084994*t658;
  t1800 = t1673 + t1799;
  t1804 = -1.8134809999999998e-6*t1800;
  t1808 = t978 + t1108;
  t1817 = -0.038749000006999997*t1808;
  t1821 = t1795 + t1796 + t1804 + t1817;
  t1877 = -1.9784030000000015e-12*var1[17];
  t1950 = -0.5031510000160505*t1932;
  t1970 = t1953 + t1967;
  t1971 = -3.367757e-6*t1970;
  t1989 = t1986 + t1962;
  t1990 = -0.038575000014*t1989;
  t1999 = t1877 + t1950 + t1971 + t1990;
  t2417 = t1547*t358*t1524*t1483;
  t2419 = t1473*t1547*t358*t1549;
  t2422 = t2417 + t2419;
  t2426 = -1.*t1473*t1547*t358*t1524;
  t2429 = t1547*t358*t1483*t1549;
  t2433 = t2426 + t2429;
  t2056 = 1.1305160000000008e-12*var1[17];
  t2077 = -0.03857500001589017*t1932;
  t2111 = t1986 + t2104;
  t2113 = -0.5031510000080001*t2111;
  t2144 = t2126 + t2129;
  t2157 = -3.367757e-6*t2144;
  t2158 = t2056 + t2077 + t2113 + t2157;
  t2205 = 2.826290000000002e-7*var1[17];
  t2206 = -2.18904205e-16*t1932;
  t2209 = t1953 + t2208;
  t2223 = -0.5031510000080001*t2209;
  t2233 = t2126 + t2229;
  t2234 = -0.038575000014*t2233;
  t2247 = t2205 + t2206 + t2223 + t2234;
  t2303 = t2302 + t2208;
  t2436 = -1.*t1547*t2005*t1526;
  t2439 = t2023*t2422;
  t2443 = t2040*t2433;
  t2447 = t2436 + t2439 + t2443;
  t2306 = t2305 + t2229;
  t2455 = -1.*t2161*t1547*t1526;
  t2457 = t2170*t2422;
  t2458 = t2173*t2433;
  t2459 = t2455 + t2457 + t2458;
  t2309 = -6.5e-11*t1932;
  t2310 = 1. + t2309;
  t2465 = -1.*t1547*t2249*t1526;
  t2466 = t2261*t2422;
  t2468 = t2287*t2433;
  t2475 = t2465 + t2466 + t2468;
  t2325 = t2320 + t2104;
  t2330 = -1.000000000049*t1932;
  t2331 = 1. + t2330;
  t2341 = t2305 + t2129;
  t2363 = -1.000000000016*t1932;
  t2364 = 1. + t2363;
  t2380 = t2320 + t1962;
  t2393 = t2302 + t1967;
  t2541 = t1547*t1524*t1526;
  t2544 = -1.*t1414*t1549;
  t2548 = t2541 + t2544;
  t2550 = t1524*t1414;
  t2551 = t1547*t1526*t1549;
  t2552 = t2550 + t2551;
  t2558 = t1483*t2548;
  t2560 = t1473*t2552;
  t2562 = t2558 + t2560;
  t2565 = t1473*t2548;
  t2570 = -1.*t1483*t2552;
  t2572 = t2565 + t2570;
  t2584 = t2287*t2562;
  t2585 = t2261*t2572;
  t2588 = t2584 + t2585;
  t2594 = t2173*t2562;
  t2595 = t2170*t2572;
  t2596 = t2594 + t2595;
  t2603 = t2040*t2562;
  t2604 = t2023*t2572;
  t2605 = t2603 + t2604;
  t2655 = -1.*t1547*t1524*t1526;
  t2656 = t1414*t1549;
  t2658 = t2655 + t2656;
  t2676 = -1.*t1483*t2658;
  t2678 = t2676 + t2560;
  t2683 = -1.*t1473*t2658;
  t2687 = t2683 + t2570;
  t2692 = t2287*t2678;
  t2695 = t2261*t2687;
  t2700 = t2692 + t2695;
  t2707 = t2173*t2678;
  t2711 = t2170*t2687;
  t2712 = t2707 + t2711;
  t2727 = t2040*t2678;
  t2728 = t2023*t2687;
  t2729 = t2727 + t2728;
  t2826 = 2.8e-11*t1108;
  t2840 = 7.e-6*t376;
  t2855 = 4.e-6*t376;
  t2922 = t1473*t2658;
  t2931 = t1483*t2552;
  t2933 = t2922 + t2931;
  t2804 = -7.e-6*t376;
  t2978 = -2.8e-11*t1108;
  t2905 = -4.e-6*t376;
  t2935 = t2840 + t1677;
  t2942 = t1547*t358*t2935;
  t2943 = -6.5e-11*t1108*t2678;
  t2954 = t2855 + t1211;
  t2955 = t2954*t2933;
  t2957 = t2942 + t2943 + t2955;
  t2962 = -1.000000000049*t1547*t358*t1108;
  t2966 = t2804 + t1677;
  t2973 = t2966*t2678;
  t2980 = t490 + t2978;
  t2981 = t2980*t2933;
  t2983 = t2962 + t2973 + t2981;
  t2985 = t376 + t2978;
  t2987 = t1547*t358*t2985;
  t2988 = t2905 + t1211;
  t2989 = t2988*t2678;
  t2990 = -1.000000000016*t1108*t2933;
  t2996 = t2987 + t2989 + t2990;
  t3034 = 2.8e-11*t1962;
  t3062 = t1547*t358*t2005;
  t3063 = t2023*t2678;
  t3068 = t2040*t2933;
  t3070 = t3062 + t3063 + t3068;
  t3097 = t2161*t1547*t358;
  t3100 = t2170*t2678;
  t3101 = t2173*t2933;
  t3107 = t3097 + t3100 + t3101;
  t3042 = -4.e-6*t1894;
  t3137 = t1547*t358*t2249;
  t3138 = t2261*t2678;
  t3141 = t2287*t2933;
  t3143 = t3137 + t3138 + t3141;
  t3148 = -2.8e-11*t1962;
  t3073 = -7.e-6*t1894;
  t3125 = 4.e-6*t1894;
  t3115 = 7.e-6*t1894;
  p_output1[0]=1.;
  p_output1[1]=t1490*t1570 + t1626*t1649 + t1691*t1776 + t1821*t1838 + t1999*t2054 + t2158*t2185 + t2247*t2294 - 0.148715*(t2054*t2303 + t2185*t2306 + t2294*t2310) - 0.038576*(t2054*t2325 + t2185*t2331 + t2294*t2341) - 0.80315*(t2054*t2364 + t2185*t2380 + t2294*t2393) - 1.*t1374*t1414*t358;
  p_output1[2]=-1.*t1374*t1526*t1547 + t1691*t2422 + t1821*t2433 + t1999*t2447 + t2158*t2459 + t2247*t2475 - 0.148715*(t2303*t2447 + t2306*t2459 + t2310*t2475) - 0.038576*(t2325*t2447 + t2331*t2459 + t2341*t2475) - 0.80315*(t2364*t2447 + t2380*t2459 + t2393*t2475) - 1.*t1490*t1524*t1547*t358 + t1547*t1549*t1626*t358;
  p_output1[3]=t1626*t2548 + t1490*t2552 + t1821*t2562 + t1691*t2572 + t2247*t2588 + t2158*t2596 + t1999*t2605 - 0.148715*(t2310*t2588 + t2306*t2596 + t2303*t2605) - 0.038576*(t2341*t2588 + t2331*t2596 + t2325*t2605) - 0.80315*(t2393*t2588 + t2380*t2596 + t2364*t2605);
  p_output1[4]=(0.15121*t1473 + t1489)*t2552 + (-0.15121*t1473 + t1489)*t2658 + t1821*t2678 + t1691*t2687 + t2247*t2700 + t2158*t2712 + t1999*t2729 - 0.148715*(t2310*t2700 + t2306*t2712 + t2303*t2729) - 0.038576*(t2341*t2700 + t2331*t2712 + t2325*t2729) - 0.80315*(t2393*t2700 + t2380*t2712 + t2364*t2729);
  p_output1[5]=t2678*(3.9608699999999997e-7 - 1.1787626499999999e-16*t1108 - 0.038749000006999997*(t1799 + t2840) - 0.281211000004*(t1683 + t2855)) + t2247*t2957 + t2158*t2983 + t1999*t2996 - 0.148715*(t2310*t2957 + t2306*t2983 + t2303*t2996) - 0.038576*(t2341*t2957 + t2331*t2983 + t2325*t2996) - 0.80315*(t2393*t2957 + t2380*t2983 + t2364*t2996) + t2933*(-2.7726089999999997e-12 - 0.2812110000084994*t1108 - 1.8134809999999998e-6*(t1683 + t2905) - 0.038749000006999997*(t2826 + t376)) + t1547*t358*(1.5843479999999999e-12 - 0.03874900000889869*t1108 - 1.8134809999999998e-6*(t1799 + t2804) - 0.281211000004*(t2826 + t490));
  p_output1[6]=(-1.9784030000000015e-12 - 0.5031510000160505*t1962 - 0.038575000014*(t1894 + t3034) - 3.367757e-6*(t2229 + t3042))*t3070 + (1.1305160000000008e-12 - 0.03857500001589017*t1962 - 0.5031510000080001*(t1902 + t3034) - 3.367757e-6*(t1967 + t3073))*t3107 + (2.826290000000002e-7 - 2.18904205e-16*t1962 - 0.038575000014*(t1967 + t3115) - 0.5031510000080001*(t2229 + t3125))*t3143 - 0.148715*(t3107*(t2208 + t3115) + t3070*(t2129 + t3125) - 6.5e-11*t1962*t3143) - 0.80315*(-1.000000000016*t1962*t3070 + (t2129 + t3042)*t3143 + t3107*(t1894 + t3148)) - 0.038576*(-1.000000000049*t1962*t3107 + (t2208 + t3073)*t3143 + t3070*(t1902 + t3148));
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

#include "J_foot_clearance_RrFootTrotStance1.hh"

namespace TrotStance1
{

void J_foot_clearance_RrFootTrotStance1_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
