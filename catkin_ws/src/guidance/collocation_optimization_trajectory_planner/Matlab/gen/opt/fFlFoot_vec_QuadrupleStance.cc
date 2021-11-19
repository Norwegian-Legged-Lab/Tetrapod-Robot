/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 17:51:12 GMT+01:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t121;
  double t65;
  double t211;
  double t113;
  double t128;
  double t185;
  double t210;
  double t222;
  double t246;
  double t286;
  double t299;
  double t318;
  double t437;
  double t434;
  double t361;
  double t362;
  double t368;
  double t373;
  double t380;
  double t402;
  double t454;
  double t480;
  double t492;
  double t342;
  double t715;
  double t346;
  double t350;
  double t679;
  double t699;
  double t550;
  double t779;
  double t786;
  double t796;
  double t817;
  double t862;
  double t997;
  double t1004;
  double t1047;
  double t1057;
  double t1075;
  double t1082;
  double t1262;
  double t1275;
  double t1295;
  double t1296;
  double t1319;
  double t1340;
  double t1360;
  double t1364;
  double t1387;
  double t1404;
  double t1408;
  double t1420;
  double t1442;
  double t420;
  double t494;
  double t496;
  double t554;
  double t588;
  double t599;
  double t261;
  double t323;
  double t325;
  double t540;
  double t607;
  double t610;
  double t1593;
  double t829;
  double t1084;
  double t1099;
  double t1106;
  double t1108;
  double t1121;
  double t1641;
  double t702;
  double t716;
  double t725;
  double t727;
  double t1102;
  double t1135;
  double t1201;
  double t1402;
  double t1495;
  double t1510;
  double t1542;
  double t1544;
  double t1548;
  double t1307;
  double t1323;
  double t1325;
  double t1326;
  double t1513;
  double t1554;
  double t1560;
  double t1597;
  double t1603;
  double t1609;
  double t1642;
  double t1655;
  double t1658;
  double t1671;
  double t1676;
  double t1679;
  double t1690;
  double t1695;
  double t1704;
  double t1729;
  double t1731;
  double t1733;
  double t1749;
  double t1765;
  double t1770;
  double t1943;
  double t1947;
  double t1952;
  double t1963;
  double t1964;
  double t1966;
  double t1985;
  double t1991;
  double t1994;
  double t1997;
  double t1999;
  double t2010;
  double t2022;
  double t2029;
  double t2036;
  double t2037;
  double t2040;
  double t1914;
  double t1925;
  double t1928;
  double t1938;
  double t1939;
  double t1972;
  double t2026;
  double t2041;
  double t2046;
  double t2052;
  double t2054;
  double t2056;
  double t2059;
  double t2065;
  double t2067;
  double t2070;
  double t1929;
  double t2047;
  double t2074;
  double t2076;
  double t2081;
  double t2083;
  double t2090;
  double t2093;
  double t343;
  double t639;
  double t654;
  double t2116;
  double t2126;
  double t2135;
  double t2146;
  double t2150;
  double t2155;
  double t2162;
  double t2168;
  double t2174;
  double t2181;
  double t731;
  double t1205;
  double t1228;
  double t2079;
  double t2109;
  double t2110;
  double t2200;
  double t2201;
  double t2206;
  double t2143;
  double t2190;
  double t2197;
  double t1329;
  double t1564;
  double t1566;
  double t2115;
  double t2234;
  double t2273;
  double t2293;
  double t2317;
  double t2347;
  double t2385;
  double t2396;
  double t2425;
  double t2435;
  double t2463;
  double t2475;
  double t2983;
  double t2984;
  double t2987;
  double t2995;
  double t2996;
  double t2998;
  double t3014;
  double t3049;
  double t3055;
  double t3067;
  double t3076;
  double t3079;
  double t3087;
  double t3092;
  double t3093;
  double t3120;
  double t3121;
  double t3122;
  double t3129;
  double t3137;
  double t3138;
  double t3140;
  t121 = Cos(var1[8]);
  t65 = Cos(var1[7]);
  t211 = -1. + t121;
  t113 = -1. + t65;
  t128 = -1.*t121;
  t185 = 1. + t128;
  t210 = 1.6e-11*t185;
  t222 = 1.6e-11*t211;
  t246 = 1. + t210 + t222;
  t286 = 4.e-6*t211;
  t299 = -4.e-6*t121;
  t318 = t286 + t299;
  t437 = Sin(var1[7]);
  t434 = Cos(var1[6]);
  t361 = 1.6e-11*t113;
  t362 = 1. + t361;
  t368 = t362*t246;
  t373 = 4.e-6*t113*t318;
  t380 = t368 + t373;
  t402 = Sin(var1[6]);
  t454 = 4.e-6*t246*t437;
  t480 = t318*t437;
  t492 = t454 + t480;
  t342 = Sin(var1[4]);
  t715 = Sin(var1[8]);
  t346 = Cos(var1[4]);
  t350 = Cos(var1[5]);
  t679 = -1.000000000016*t185;
  t699 = 1. + t679;
  t550 = Sin(var1[5]);
  t779 = -4.e-6*t699*t437;
  t786 = -4.e-6*t362*t715;
  t796 = -4.e-6*t113*t715;
  t817 = t779 + t786 + t796;
  t862 = -1.*t65;
  t997 = 1. + t862;
  t1004 = -1.000000000016*t997;
  t1047 = 1. + t1004;
  t1057 = t1047*t699;
  t1075 = -1.000000000016*t437*t715;
  t1082 = t1057 + t1075;
  t1262 = -1. + t210;
  t1275 = 4.e-6*t1262;
  t1295 = 4.e-6*t185;
  t1296 = t1275 + t1295;
  t1319 = t210 + t128;
  t1340 = 4.e-6*t1296*t437;
  t1360 = t1319*t437;
  t1364 = -1.000000000016*t1047*t715;
  t1387 = t1340 + t1360 + t1364;
  t1404 = t362*t1296;
  t1408 = 4.e-6*t113*t1319;
  t1420 = 4.000000000064e-6*t437*t715;
  t1442 = t1404 + t1408 + t1420;
  t420 = -1.*t380*t402;
  t494 = t434*t492;
  t496 = t420 + t494;
  t554 = t434*t380;
  t588 = t402*t492;
  t599 = t554 + t588;
  t261 = 4.e-6*t113*t246;
  t323 = t65*t318;
  t325 = t261 + t323;
  t540 = t350*t496;
  t607 = -1.*t550*t599;
  t610 = t540 + t607;
  t1593 = Cos(var1[3]);
  t829 = -1.*t402*t817;
  t1084 = t434*t1082;
  t1099 = t829 + t1084;
  t1106 = t434*t817;
  t1108 = t402*t1082;
  t1121 = t1106 + t1108;
  t1641 = Sin(var1[3]);
  t702 = -1.*t699*t437;
  t716 = -1.6e-11*t113*t715;
  t725 = -1.*t65*t715;
  t727 = t702 + t716 + t725;
  t1102 = t350*t1099;
  t1135 = -1.*t550*t1121;
  t1201 = t1102 + t1135;
  t1402 = t402*t1387;
  t1495 = t434*t1442;
  t1510 = t1402 + t1495;
  t1542 = t434*t1387;
  t1544 = -1.*t402*t1442;
  t1548 = t1542 + t1544;
  t1307 = 4.e-6*t113*t1296;
  t1323 = t65*t1319;
  t1325 = 1.000000000016*t437*t715;
  t1326 = t1307 + t1323 + t1325;
  t1513 = -1.*t550*t1510;
  t1554 = t350*t1548;
  t1560 = t1513 + t1554;
  t1597 = t550*t496;
  t1603 = t350*t599;
  t1609 = t1597 + t1603;
  t1642 = t346*t325;
  t1655 = -1.*t342*t610;
  t1658 = t1642 + t1655;
  t1671 = t550*t1099;
  t1676 = t350*t1121;
  t1679 = t1671 + t1676;
  t1690 = t346*t727;
  t1695 = -1.*t342*t1201;
  t1704 = t1690 + t1695;
  t1729 = t350*t1510;
  t1731 = t550*t1548;
  t1733 = t1729 + t1731;
  t1749 = t346*t1326;
  t1765 = -1.*t342*t1560;
  t1770 = t1749 + t1765;
  t1943 = 5.136e-14*var1[8];
  t1947 = -0.03874900000062*t185;
  t1952 = 5.9484e-7*t211;
  t1963 = -0.03875*t121;
  t1964 = -0.299999999992*t715;
  t1966 = t1943 + t1947 + t1952 + t1963 + t1964;
  t1985 = -1.284e-8*var1[8];
  t1991 = 1. + t222;
  t1994 = 0.14871*t1991;
  t1997 = -1.5499600000248e-7*t185;
  t1999 = -1.55e-7*t211;
  t2010 = -1.199999999968e-6*t715;
  t2022 = t1985 + t1994 + t1997 + t1999 + t2010;
  t2029 = 0.80321*t699;
  t2036 = 0.503210000016051*t185;
  t2037 = -4.05159380016e-7*t715;
  t2040 = t2029 + t2036 + t2037;
  t1914 = -1.*t434;
  t1925 = 1. + t1914;
  t1928 = 0.15121*t1925;
  t1938 = 0.281210000008499*t997;
  t1939 = 0.03874900000062*t437;
  t1972 = t437*t1966;
  t2026 = 4.e-6*t437*t2022;
  t2041 = t1047*t2040;
  t2046 = t1938 + t1939 + t1972 + t2026 + t2041;
  t2052 = -1.2484e-7*var1[7];
  t2054 = -1.5499600000248e-7*t997;
  t2056 = 1.124840000016e-6*t437;
  t2059 = 4.e-6*t113*t1966;
  t2065 = t362*t2022;
  t2067 = -4.e-6*t437*t2040;
  t2070 = t2052 + t2054 + t2056 + t2059 + t2065 + t2067;
  t1929 = -0.15121*t402;
  t2047 = t402*t2046;
  t2074 = t434*t2070;
  t2076 = t1928 + t1929 + t2047 + t2074;
  t2081 = 0.15121*t402;
  t2083 = t434*t2046;
  t2090 = -1.*t402*t2070;
  t2093 = t1928 + t2081 + t2083 + t2090;
  t343 = t325*t342;
  t639 = t346*t610;
  t654 = t343 + t639;
  t2116 = -1.*t550*t2076;
  t2126 = t350*t2093;
  t2135 = t2116 + t2126;
  t2146 = 4.9936e-13*var1[7];
  t2150 = -0.03874900000062*t997;
  t2155 = 0.281210000004*t437;
  t2162 = t65*t1966;
  t2168 = 4.e-6*t113*t2022;
  t2174 = -1.*t437*t2040;
  t2181 = t2146 + t2150 + t2155 + t2162 + t2168 + t2174;
  t731 = t342*t727;
  t1205 = t346*t1201;
  t1228 = t731 + t1205;
  t2079 = t350*t2076;
  t2109 = t550*t2093;
  t2110 = t2079 + t2109;
  t2200 = t346*t2135;
  t2201 = t342*t2181;
  t2206 = t2200 + t2201;
  t2143 = -1.*t342*t2135;
  t2190 = t346*t2181;
  t2197 = t2143 + t2190;
  t1329 = t342*t1326;
  t1564 = t346*t1560;
  t1566 = t1329 + t1564;
  t2115 = -1.*t1609*t2110;
  t2234 = t2110*t1679;
  t2273 = t1609*t2110;
  t2293 = -1.*t2110*t1733;
  t2317 = -1.*t2110*t1679;
  t2347 = t2110*t1733;
  t2385 = -1.*t325*t2181;
  t2396 = t2181*t727;
  t2425 = t325*t2181;
  t2435 = -1.*t2181*t1326;
  t2463 = -1.*t2181*t727;
  t2475 = t2181*t1326;
  t2983 = -1.*t318*t1966;
  t2984 = -1.*t246*t2022;
  t2987 = t2983 + t2984;
  t2995 = t699*t2040;
  t2996 = -1.*t1966*t715;
  t2998 = -4.e-6*t2022*t715;
  t3014 = t2995 + t2996 + t2998;
  t3049 = -1.*t699*t2040;
  t3055 = t1966*t715;
  t3067 = 4.e-6*t2022*t715;
  t3076 = t3049 + t3055 + t3067;
  t3079 = t1319*t1966;
  t3087 = t1296*t2022;
  t3092 = -1.000000000016*t2040*t715;
  t3093 = t3079 + t3087 + t3092;
  t3120 = t318*t1966;
  t3121 = t246*t2022;
  t3122 = t3120 + t3121;
  t3129 = -1.*t1319*t1966;
  t3137 = -1.*t1296*t2022;
  t3138 = 1.000000000016*t2040*t715;
  t3140 = t3129 + t3137 + t3138;
  p_output1[0]=t1228*var2[0] + t1566*var2[1] + t654*var2[2];
  p_output1[1]=(t1593*t1679 - 1.*t1641*t1704)*var2[0] + (t1593*t1733 - 1.*t1641*t1770)*var2[1] + (t1593*t1609 - 1.*t1641*t1658)*var2[2];
  p_output1[2]=(t1641*t1679 + t1593*t1704)*var2[0] + (t1641*t1733 + t1593*t1770)*var2[1] + (t1609*t1641 + t1593*t1658)*var2[2];
  p_output1[3]=((-1.*t1770*t2197 - 1.*t1566*t2206 + t2293)*t654 + t1566*(t1658*t2197 + t2273 + t2206*t654))*var2[0] + ((t1704*t2197 + t1228*t2206 + t2234)*t654 + t1228*(t2115 - 1.*t1658*t2197 - 1.*t2206*t654))*var2[1] + (t1566*(-1.*t1704*t2197 - 1.*t1228*t2206 + t2317) + t1228*(t1770*t2197 + t1566*t2206 + t2347))*var2[2];
  p_output1[4]=(t1609*(-1.*t1560*t2135 + t2293 + t2435) + t1733*(t2273 + t2425 + t2135*t610))*var2[0] + (t1609*(t1201*t2135 + t2234 + t2396) + t1679*(t2115 + t2385 - 1.*t2135*t610))*var2[1] + (t1733*(-1.*t1201*t2135 + t2317 + t2463) + t1679*(t1560*t2135 + t2347 + t2475))*var2[2];
  p_output1[5]=((-1.*t1510*t2076 - 1.*t1548*t2093 + t2435)*t325 + t1326*(t2425 + t2093*t496 + t2076*t599))*var2[0] + ((t1121*t2076 + t1099*t2093 + t2396)*t325 + (t2385 - 1.*t2093*t496 - 1.*t2076*t599)*t727)*var2[1] + (t1326*(-1.*t1121*t2076 - 1.*t1099*t2093 + t2463) + (t1510*t2076 + t1548*t2093 + t2475)*t727)*var2[2];
  p_output1[6]=(0.15121*t1082 + (-1.*t1387*t2046 - 1.*t1442*t2070 + t2435)*t325 + t1326*(t2425 + t2070*t380 + t2046*t492) - 0.15121*t817)*var2[0] + (0.15121*t1387 - 0.15121*t1442 + (t2385 - 1.*t2070*t380 - 1.*t2046*t492)*t727 + t325*(t1082*t2046 + t2396 + t2070*t817))*var2[1] + (-0.15121*t380 + 0.15121*t492 + (t1387*t2046 + t1442*t2070 + t2475)*t727 + t1326*(-1.*t1082*t2046 + t2463 - 1.*t2070*t817))*var2[2];
  p_output1[7]=(t1296*t3122 + t246*t3140 + 4.e-6*(-1.*t1319*t3122 - 1.*t3140*t318) + 0.038749*t699 - 0.281210000004*t715)*var2[0] + (1.e-6*t1296 + 0.28121*t1319 + t246*t3014 - 0.03874900000062*t715 - 4.e-6*t2987*t715 + 4.e-6*(-1.*t3014*t318 + t2987*t715))*var2[1] + (1.e-6*t246 + t1296*t3076 + 0.28121*t318 - 4.e-6*t3093*t715 + 4.e-6*(-1.*t1319*t3076 + t3093*t715))*var2[2];
  p_output1[8]=-4.05160619990483e-7*var2[0] + 0.300000000004851*var2[1] - 1.284e-8*var2[2];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fFlFoot_vec_QuadrupleStance.hh"

namespace QuadrupleStance
{

void fFlFoot_vec_QuadrupleStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
