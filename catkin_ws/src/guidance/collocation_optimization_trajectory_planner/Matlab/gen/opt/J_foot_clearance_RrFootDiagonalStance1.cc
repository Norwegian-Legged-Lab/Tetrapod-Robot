/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:27:39 GMT+01:00
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
  double t54;
  double t55;
  double t56;
  double t59;
  double t497;
  double t841;
  double t890;
  double t1309;
  double t1349;
  double t1433;
  double t1506;
  double t1486;
  double t1488;
  double t1507;
  double t63;
  double t64;
  double t1504;
  double t1519;
  double t1539;
  double t1575;
  double t1592;
  double t1596;
  double t1625;
  double t58;
  double t1822;
  double t1824;
  double t1828;
  double t1850;
  double t50;
  double t1737;
  double t1707;
  double t1708;
  double t1711;
  double t1792;
  double t1795;
  double t1806;
  double t1902;
  double t67;
  double t1949;
  double t60;
  double t1837;
  double t2005;
  double t2021;
  double t2097;
  double t1683;
  double t1963;
  double t1674;
  double t2124;
  double t1951;
  double t1952;
  double t1966;
  double t1968;
  double t1969;
  double t1972;
  double t1977;
  double t1978;
  double t2148;
  double t2080;
  double t2087;
  double t2096;
  double t2098;
  double t2099;
  double t2103;
  double t2106;
  double t2109;
  double t2172;
  double t2177;
  double t2180;
  double t2181;
  double t2186;
  double t2190;
  double t2192;
  double t2193;
  double t1998;
  double t2206;
  double t2055;
  double t2227;
  double t2198;
  double t1851;
  double t1481;
  double t1484;
  double t51;
  double t57;
  double t61;
  double t62;
  double t68;
  double t133;
  double t432;
  double t1548;
  double t1573;
  double t1603;
  double t1611;
  double t1677;
  double t1682;
  double t1696;
  double t1699;
  double t1702;
  double t1716;
  double t1722;
  double t1745;
  double t1753;
  double t1763;
  double t1767;
  double t1783;
  double t1820;
  double t1834;
  double t1876;
  double t1895;
  double t1908;
  double t1938;
  double t1943;
  double t2311;
  double t2313;
  double t2314;
  double t2320;
  double t2321;
  double t2323;
  double t1985;
  double t1987;
  double t2001;
  double t2003;
  double t2057;
  double t2063;
  double t2076;
  double t2120;
  double t2123;
  double t2125;
  double t2142;
  double t2150;
  double t2153;
  double t2164;
  double t2199;
  double t2326;
  double t2328;
  double t2329;
  double t2332;
  double t2210;
  double t2336;
  double t2342;
  double t2356;
  double t2365;
  double t2216;
  double t2218;
  double t2375;
  double t2376;
  double t2377;
  double t2380;
  double t2231;
  double t2237;
  double t2240;
  double t2247;
  double t2267;
  double t2277;
  double t2284;
  double t2287;
  double t2446;
  double t2454;
  double t2455;
  double t2461;
  double t2462;
  double t2464;
  double t2466;
  double t2467;
  double t2469;
  double t2474;
  double t2476;
  double t2478;
  double t2482;
  double t2486;
  double t2488;
  double t2494;
  double t2502;
  double t2514;
  double t2527;
  double t2540;
  double t2541;
  double t2656;
  double t2660;
  double t2662;
  double t2695;
  double t2698;
  double t2702;
  double t2713;
  double t2726;
  double t2730;
  double t2731;
  double t2740;
  double t2741;
  double t2742;
  double t2747;
  double t2761;
  double t2763;
  double t2845;
  double t2879;
  double t2889;
  double t2930;
  double t2933;
  double t2934;
  double t2826;
  double t2976;
  double t2920;
  double t2938;
  double t2941;
  double t2948;
  double t2951;
  double t2952;
  double t2956;
  double t2963;
  double t2965;
  double t2975;
  double t2978;
  double t2982;
  double t2983;
  double t2988;
  double t2990;
  double t2993;
  double t2996;
  double t2998;
  double t2999;
  double t3052;
  double t3076;
  double t3077;
  double t3080;
  double t3083;
  double t3100;
  double t3102;
  double t3103;
  double t3114;
  double t3065;
  double t3131;
  double t3138;
  double t3139;
  double t3143;
  double t3153;
  double t3086;
  double t3120;
  double t3116;
  t54 = Cos(var1[16]);
  t55 = -1.*t54;
  t56 = 1. + t55;
  t59 = Sin(var1[16]);
  t497 = Sin(var1[3]);
  t841 = Cos(var1[15]);
  t890 = -1.*t841;
  t1309 = 1. + t890;
  t1349 = -0.15121*t1309;
  t1433 = Sin(var1[15]);
  t1506 = Cos(var1[3]);
  t1486 = Cos(var1[5]);
  t1488 = Sin(var1[4]);
  t1507 = Sin(var1[5]);
  t63 = -1. + t54;
  t64 = 4.e-6*t63;
  t1504 = t1486*t497*t1488;
  t1519 = t1506*t1507;
  t1539 = t1504 + t1519;
  t1575 = t1506*t1486;
  t1592 = -1.*t497*t1488*t1507;
  t1596 = t1575 + t1592;
  t1625 = 7.e-6*t56;
  t58 = 2.8e-11*t56;
  t1822 = Cos(var1[17]);
  t1824 = -1.*t1822;
  t1828 = 1. + t1824;
  t1850 = Sin(var1[17]);
  t50 = Cos(var1[4]);
  t1737 = -4.e-6*t59;
  t1707 = -1.*t1433*t1539;
  t1708 = t841*t1596;
  t1711 = t1707 + t1708;
  t1792 = t841*t1539;
  t1795 = t1433*t1596;
  t1806 = t1792 + t1795;
  t1902 = 2.8e-11*t1828;
  t67 = -7.e-6*t59;
  t1949 = -2.8e-11*t56;
  t60 = -1.*t59;
  t1837 = 7.e-6*t1828;
  t2005 = -1. + t1822;
  t2021 = 4.e-6*t2005;
  t2097 = 4.e-6*t56;
  t1683 = 7.e-6*t59;
  t1963 = -7.e-6*t56;
  t1674 = 4.e-6*t59;
  t2124 = 4.e-6*t1850;
  t1951 = t1949 + t59;
  t1952 = -1.*t50*t1951*t497;
  t1966 = t1963 + t1737;
  t1968 = t1966*t1711;
  t1969 = -1.000000000016*t56;
  t1972 = 1. + t1969;
  t1977 = t1972*t1806;
  t1978 = t1952 + t1968 + t1977;
  t2148 = 7.e-6*t1850;
  t2080 = -1.000000000049*t56;
  t2087 = 1. + t2080;
  t2096 = -1.*t2087*t50*t497;
  t2098 = t2097 + t67;
  t2099 = t2098*t1711;
  t2103 = t1949 + t60;
  t2106 = t2103*t1806;
  t2109 = t2096 + t2099 + t2106;
  t2172 = t2097 + t1683;
  t2177 = -1.*t50*t2172*t497;
  t2180 = -6.5e-11*t56;
  t2181 = 1. + t2180;
  t2186 = t2181*t1711;
  t2190 = t1963 + t1674;
  t2192 = t2190*t1806;
  t2193 = t2177 + t2186 + t2192;
  t1998 = -1.*t1850;
  t2206 = 4.e-6*t1828;
  t2055 = -7.e-6*t1850;
  t2227 = -2.8e-11*t1828;
  t2198 = -7.e-6*t1828;
  t1851 = -4.e-6*t1850;
  t1481 = -0.15121*t1433;
  t1484 = t1349 + t1481;
  t51 = 1.5843479999999999e-12*var1[16];
  t57 = -0.03874900000889869*t56;
  t61 = t58 + t60;
  t62 = -0.281211000004*t61;
  t68 = t64 + t67;
  t133 = -1.8134809999999998e-6*t68;
  t432 = t51 + t57 + t62 + t133;
  t1548 = 0.15121*t1433;
  t1573 = t1349 + t1548;
  t1603 = 3.9608699999999997e-7*var1[16];
  t1611 = -1.1787626499999999e-16*t56;
  t1677 = t1625 + t1674;
  t1682 = -0.281211000004*t1677;
  t1696 = t64 + t1683;
  t1699 = -0.038749000006999997*t1696;
  t1702 = t1603 + t1611 + t1682 + t1699;
  t1716 = -2.7726089999999997e-12*var1[16];
  t1722 = -0.2812110000084994*t56;
  t1745 = t1625 + t1737;
  t1753 = -1.8134809999999998e-6*t1745;
  t1763 = t58 + t59;
  t1767 = -0.038749000006999997*t1763;
  t1783 = t1716 + t1722 + t1753 + t1767;
  t1820 = -1.9784030000000015e-12*var1[17];
  t1834 = -0.5031510000160505*t1828;
  t1876 = t1837 + t1851;
  t1895 = -3.367757e-6*t1876;
  t1908 = t1902 + t1850;
  t1938 = -0.038575000014*t1908;
  t1943 = t1820 + t1834 + t1895 + t1938;
  t2311 = t1506*t50*t1486*t1433;
  t2313 = t841*t1506*t50*t1507;
  t2314 = t2311 + t2313;
  t2320 = -1.*t841*t1506*t50*t1486;
  t2321 = t1506*t50*t1433*t1507;
  t2323 = t2320 + t2321;
  t1985 = 1.1305160000000008e-12*var1[17];
  t1987 = -0.03857500001589017*t1828;
  t2001 = t1902 + t1998;
  t2003 = -0.5031510000080001*t2001;
  t2057 = t2021 + t2055;
  t2063 = -3.367757e-6*t2057;
  t2076 = t1985 + t1987 + t2003 + t2063;
  t2120 = 2.826290000000002e-7*var1[17];
  t2123 = -2.18904205e-16*t1828;
  t2125 = t1837 + t2124;
  t2142 = -0.5031510000080001*t2125;
  t2150 = t2021 + t2148;
  t2153 = -0.038575000014*t2150;
  t2164 = t2120 + t2123 + t2142 + t2153;
  t2199 = t2198 + t2124;
  t2326 = -1.*t1506*t1951*t1488;
  t2328 = t1966*t2314;
  t2329 = t1972*t2323;
  t2332 = t2326 + t2328 + t2329;
  t2210 = t2206 + t2148;
  t2336 = -1.*t2087*t1506*t1488;
  t2342 = t2098*t2314;
  t2356 = t2103*t2323;
  t2365 = t2336 + t2342 + t2356;
  t2216 = -6.5e-11*t1828;
  t2218 = 1. + t2216;
  t2375 = -1.*t1506*t2172*t1488;
  t2376 = t2181*t2314;
  t2377 = t2190*t2323;
  t2380 = t2375 + t2376 + t2377;
  t2231 = t2227 + t1998;
  t2237 = -1.000000000049*t1828;
  t2240 = 1. + t2237;
  t2247 = t2206 + t2055;
  t2267 = -1.000000000016*t1828;
  t2277 = 1. + t2267;
  t2284 = t2227 + t1850;
  t2287 = t2198 + t1851;
  t2446 = t1506*t1486*t1488;
  t2454 = -1.*t497*t1507;
  t2455 = t2446 + t2454;
  t2461 = t1486*t497;
  t2462 = t1506*t1488*t1507;
  t2464 = t2461 + t2462;
  t2466 = t1433*t2455;
  t2467 = t841*t2464;
  t2469 = t2466 + t2467;
  t2474 = t841*t2455;
  t2476 = -1.*t1433*t2464;
  t2478 = t2474 + t2476;
  t2482 = t2190*t2469;
  t2486 = t2181*t2478;
  t2488 = t2482 + t2486;
  t2494 = t2103*t2469;
  t2502 = t2098*t2478;
  t2514 = t2494 + t2502;
  t2527 = t1972*t2469;
  t2540 = t1966*t2478;
  t2541 = t2527 + t2540;
  t2656 = -1.*t1506*t1486*t1488;
  t2660 = t497*t1507;
  t2662 = t2656 + t2660;
  t2695 = -1.*t1433*t2662;
  t2698 = t2695 + t2467;
  t2702 = -1.*t841*t2662;
  t2713 = t2702 + t2476;
  t2726 = t2190*t2698;
  t2730 = t2181*t2713;
  t2731 = t2726 + t2730;
  t2740 = t2103*t2698;
  t2741 = t2098*t2713;
  t2742 = t2740 + t2741;
  t2747 = t1972*t2698;
  t2761 = t1966*t2713;
  t2763 = t2747 + t2761;
  t2845 = 2.8e-11*t59;
  t2879 = 7.e-6*t54;
  t2889 = 4.e-6*t54;
  t2930 = t841*t2662;
  t2933 = t1433*t2464;
  t2934 = t2930 + t2933;
  t2826 = -7.e-6*t54;
  t2976 = -2.8e-11*t59;
  t2920 = -4.e-6*t54;
  t2938 = t2879 + t1674;
  t2941 = t1506*t50*t2938;
  t2948 = -6.5e-11*t59*t2698;
  t2951 = t2889 + t67;
  t2952 = t2951*t2934;
  t2956 = t2941 + t2948 + t2952;
  t2963 = -1.000000000049*t1506*t50*t59;
  t2965 = t2826 + t1674;
  t2975 = t2965*t2698;
  t2978 = t55 + t2976;
  t2982 = t2978*t2934;
  t2983 = t2963 + t2975 + t2982;
  t2988 = t54 + t2976;
  t2990 = t1506*t50*t2988;
  t2993 = t2920 + t67;
  t2996 = t2993*t2698;
  t2998 = -1.000000000016*t59*t2934;
  t2999 = t2990 + t2996 + t2998;
  t3052 = 2.8e-11*t1850;
  t3076 = t1506*t50*t1951;
  t3077 = t1966*t2698;
  t3080 = t1972*t2934;
  t3083 = t3076 + t3077 + t3080;
  t3100 = t2087*t1506*t50;
  t3102 = t2098*t2698;
  t3103 = t2103*t2934;
  t3114 = t3100 + t3102 + t3103;
  t3065 = -4.e-6*t1822;
  t3131 = t1506*t50*t2172;
  t3138 = t2181*t2698;
  t3139 = t2190*t2934;
  t3143 = t3131 + t3138 + t3139;
  t3153 = -2.8e-11*t1850;
  t3086 = -7.e-6*t1822;
  t3120 = 4.e-6*t1822;
  t3116 = 7.e-6*t1822;
  p_output1[0]=1.;
  p_output1[1]=t1484*t1539 + t1573*t1596 + t1702*t1711 + t1783*t1806 + t1943*t1978 + t2076*t2109 + t2164*t2193 - 0.148715*(t1978*t2199 + t2109*t2210 + t2193*t2218) - 0.038576*(t1978*t2231 + t2109*t2240 + t2193*t2247) - 0.80315*(t1978*t2277 + t2109*t2284 + t2193*t2287) - 1.*t432*t497*t50;
  p_output1[2]=t1702*t2314 + t1783*t2323 + t1943*t2332 + t2076*t2365 + t2164*t2380 - 0.148715*(t2199*t2332 + t2210*t2365 + t2218*t2380) - 0.038576*(t2231*t2332 + t2240*t2365 + t2247*t2380) - 0.80315*(t2277*t2332 + t2284*t2365 + t2287*t2380) - 1.*t1488*t1506*t432 - 1.*t1484*t1486*t1506*t50 + t1506*t1507*t1573*t50;
  p_output1[3]=t1573*t2455 + t1484*t2464 + t1783*t2469 + t1702*t2478 + t2164*t2488 + t2076*t2514 + t1943*t2541 - 0.148715*(t2218*t2488 + t2210*t2514 + t2199*t2541) - 0.038576*(t2247*t2488 + t2240*t2514 + t2231*t2541) - 0.80315*(t2287*t2488 + t2284*t2514 + t2277*t2541);
  p_output1[4]=t1783*t2698 + t1702*t2713 + t2164*t2731 + t2076*t2742 + t1943*t2763 - 0.148715*(t2218*t2731 + t2210*t2742 + t2199*t2763) - 0.038576*(t2247*t2731 + t2240*t2742 + t2231*t2763) - 0.80315*(t2287*t2731 + t2284*t2742 + t2277*t2763) + t2662*(t1481 - 0.15121*t841) + t2464*(t1481 + 0.15121*t841);
  p_output1[5]=t2164*t2956 + t2076*t2983 + t1943*t2999 - 0.148715*(t2218*t2956 + t2210*t2983 + t2199*t2999) - 0.038576*(t2247*t2956 + t2240*t2983 + t2231*t2999) - 0.80315*(t2287*t2956 + t2284*t2983 + t2277*t2999) + t2934*(-2.7726089999999997e-12 - 1.8134809999999998e-6*(t1683 + t2920) - 0.038749000006999997*(t2845 + t54) - 0.2812110000084994*t59) + t1506*t50*(1.5843479999999999e-12 - 1.8134809999999998e-6*(t1737 + t2826) - 0.281211000004*(t2845 + t55) - 0.03874900000889869*t59) + t2698*(3.9608699999999997e-7 - 0.038749000006999997*(t1737 + t2879) - 0.281211000004*(t1683 + t2889) - 1.1787626499999999e-16*t59);
  p_output1[6]=(-1.9784030000000015e-12 - 0.5031510000160505*t1850 - 0.038575000014*(t1822 + t3052) - 3.367757e-6*(t2148 + t3065))*t3083 + (1.1305160000000008e-12 - 0.03857500001589017*t1850 - 0.5031510000080001*(t1824 + t3052) - 3.367757e-6*(t1851 + t3086))*t3114 + (2.826290000000002e-7 - 2.18904205e-16*t1850 - 0.038575000014*(t1851 + t3116) - 0.5031510000080001*(t2148 + t3120))*t3143 - 0.148715*(t3114*(t2124 + t3116) + t3083*(t2055 + t3120) - 6.5e-11*t1850*t3143) - 0.80315*(-1.000000000016*t1850*t3083 + (t2055 + t3065)*t3143 + t3114*(t1822 + t3153)) - 0.038576*(-1.000000000049*t1850*t3114 + (t2124 + t3086)*t3143 + t3083*(t1824 + t3153));
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

#include "J_foot_clearance_RrFootDiagonalStance1.hh"

namespace DiagonalStance1
{

void J_foot_clearance_RrFootDiagonalStance1_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
