/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:10:35 GMT+01:00
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
  double t251;
  double t274;
  double t292;
  double t386;
  double t46;
  double t89;
  double t106;
  double t114;
  double t181;
  double t189;
  double t361;
  double t54;
  double t503;
  double t416;
  double t585;
  double t957;
  double t961;
  double t967;
  double t986;
  double t816;
  double t462;
  double t825;
  double t692;
  double t698;
  double t729;
  double t894;
  double t899;
  double t922;
  double t996;
  double t554;
  double t1039;
  double t628;
  double t1158;
  double t985;
  double t1196;
  double t1200;
  double t400;
  double t1023;
  double t1027;
  double t1033;
  double t1047;
  double t1049;
  double t1073;
  double t1083;
  double t1087;
  double t1096;
  double t1290;
  double t1215;
  double t1235;
  double t1251;
  double t1258;
  double t1261;
  double t1273;
  double t1274;
  double t1275;
  double t1343;
  double t1345;
  double t1354;
  double t1355;
  double t1371;
  double t1385;
  double t1387;
  double t1397;
  double t1004;
  double t1414;
  double t988;
  double t1552;
  double t1171;
  double t1433;
  double t1449;
  double t1163;
  double t237;
  double t294;
  double t404;
  double t412;
  double t427;
  double t438;
  double t445;
  double t177;
  double t197;
  double t1748;
  double t478;
  double t489;
  double t1775;
  double t540;
  double t553;
  double t564;
  double t583;
  double t662;
  double t669;
  double t682;
  double t1771;
  double t1776;
  double t1783;
  double t1797;
  double t1799;
  double t1801;
  double t774;
  double t779;
  double t817;
  double t822;
  double t826;
  double t827;
  double t849;
  double t946;
  double t984;
  double t989;
  double t993;
  double t1012;
  double t1016;
  double t1019;
  double t1815;
  double t1820;
  double t1822;
  double t1837;
  double t1842;
  double t1855;
  double t1117;
  double t1142;
  double t1166;
  double t1168;
  double t1179;
  double t1189;
  double t1192;
  double t1283;
  double t1289;
  double t1294;
  double t1315;
  double t1329;
  double t1330;
  double t1334;
  double t1425;
  double t1865;
  double t1876;
  double t1893;
  double t1895;
  double t1464;
  double t1902;
  double t1913;
  double t1929;
  double t1935;
  double t1482;
  double t1493;
  double t1951;
  double t1954;
  double t1980;
  double t1986;
  double t1515;
  double t1526;
  double t1571;
  double t1615;
  double t1627;
  double t1634;
  double t1642;
  double t1653;
  double t2153;
  double t2158;
  double t2175;
  double t2228;
  double t2235;
  double t2236;
  double t2246;
  double t2255;
  double t2269;
  double t2303;
  double t2321;
  double t2330;
  double t2360;
  double t2363;
  double t2389;
  double t2396;
  double t2404;
  double t2410;
  double t2411;
  double t2420;
  double t2434;
  double t2452;
  double t2459;
  double t2463;
  t251 = Cos(var1[13]);
  t274 = -1.*t251;
  t292 = 1. + t274;
  t386 = Sin(var1[13]);
  t46 = Cos(var1[4]);
  t89 = Cos(var1[12]);
  t106 = -1.*t89;
  t114 = 1. + t106;
  t181 = Sin(var1[12]);
  t189 = 0.15121*t181;
  t361 = 4.e-6*t292;
  t54 = Cos(var1[5]);
  t503 = Sin(var1[5]);
  t416 = -2.8e-11*t292;
  t585 = 7.e-6*t292;
  t957 = Cos(var1[14]);
  t961 = -1.*t957;
  t967 = 1. + t961;
  t986 = Sin(var1[14]);
  t816 = -1.*t386;
  t462 = Sin(var1[4]);
  t825 = -4.e-6*t386;
  t692 = -1.*t46*t54*t181;
  t698 = -1.*t89*t46*t503;
  t729 = t692 + t698;
  t894 = t89*t46*t54;
  t899 = -1.*t46*t181*t503;
  t922 = t894 + t899;
  t996 = 7.e-6*t967;
  t554 = -7.e-6*t386;
  t1039 = -7.e-6*t292;
  t628 = 4.e-6*t386;
  t1158 = 4.e-6*t967;
  t985 = -2.8e-11*t967;
  t1196 = -1. + t251;
  t1200 = 4.e-6*t1196;
  t400 = 7.e-6*t386;
  t1023 = 2.8e-11*t292;
  t1027 = t1023 + t816;
  t1033 = t1027*t462;
  t1047 = t1039 + t825;
  t1049 = t1047*t729;
  t1073 = -1.000000000016*t292;
  t1083 = 1. + t1073;
  t1087 = t1083*t922;
  t1096 = t1033 + t1049 + t1087;
  t1290 = 7.e-6*t986;
  t1215 = t1200 + t554;
  t1235 = t1215*t462;
  t1251 = -6.5e-11*t292;
  t1258 = 1. + t1251;
  t1261 = t1258*t729;
  t1273 = t1039 + t628;
  t1274 = t1273*t922;
  t1275 = t1235 + t1261 + t1274;
  t1343 = -1.000000000049*t292;
  t1345 = 1. + t1343;
  t1354 = t1345*t462;
  t1355 = t1200 + t400;
  t1371 = t1355*t729;
  t1385 = t1023 + t386;
  t1387 = t1385*t922;
  t1397 = t1354 + t1371 + t1387;
  t1004 = -4.e-6*t986;
  t1414 = 2.8e-11*t967;
  t988 = -1.*t986;
  t1552 = -7.e-6*t967;
  t1171 = 4.e-6*t986;
  t1433 = -1. + t957;
  t1449 = 4.e-6*t1433;
  t1163 = -7.e-6*t986;
  t237 = 5.856279999999999e-13*var1[13];
  t294 = -0.0387489999948987*t292;
  t404 = t361 + t400;
  t412 = -2.123459e-6*t404;
  t427 = t416 + t386;
  t438 = -0.281209000004*t427;
  t445 = t237 + t294 + t412 + t438;
  t177 = -0.15121*t114;
  t197 = t177 + t189;
  t1748 = Sin(var1[3]);
  t478 = 0.15121*t114;
  t489 = t478 + t189;
  t1775 = Cos(var1[3]);
  t540 = -1.4640699999999997e-7*var1[13];
  t553 = -1.38024835e-16*t292;
  t564 = t361 + t554;
  t583 = -0.038748999993*t564;
  t662 = t585 + t628;
  t669 = -0.281209000004*t662;
  t682 = t540 + t553 + t583 + t669;
  t1771 = t54*t1748*t462;
  t1776 = t1775*t503;
  t1783 = t1771 + t1776;
  t1797 = t1775*t54;
  t1799 = -1.*t1748*t462*t503;
  t1801 = t1797 + t1799;
  t774 = 1.0248489999999998e-12*var1[13];
  t779 = -0.28120900000849935*t292;
  t817 = t416 + t816;
  t822 = -0.038748999993*t817;
  t826 = t585 + t825;
  t827 = -2.123459e-6*t826;
  t849 = t774 + t779 + t822 + t827;
  t946 = 1.8190549999999993e-12*var1[14];
  t984 = -0.5031490000160505*t967;
  t989 = t985 + t988;
  t993 = -0.038922999986*t989;
  t1012 = t996 + t1004;
  t1016 = -3.6777349999999994e-6*t1012;
  t1019 = t946 + t984 + t993 + t1016;
  t1815 = -1.*t181*t1783;
  t1820 = t89*t1801;
  t1822 = t1815 + t1820;
  t1837 = t89*t1783;
  t1842 = t181*t1801;
  t1855 = t1837 + t1842;
  t1117 = -2.598649999999999e-7*var1[14];
  t1142 = -2.3905277499999995e-16*t967;
  t1166 = t1158 + t1163;
  t1168 = -0.038922999986*t1166;
  t1179 = t996 + t1171;
  t1189 = -0.503149000008*t1179;
  t1192 = t1117 + t1142 + t1168 + t1189;
  t1283 = 1.0394599999999997e-12*var1[14];
  t1289 = -0.03892299998790722*t967;
  t1294 = t1158 + t1290;
  t1315 = -3.6777349999999994e-6*t1294;
  t1329 = t985 + t986;
  t1330 = -0.503149000008*t1329;
  t1334 = t1283 + t1289 + t1315 + t1330;
  t1425 = t1414 + t986;
  t1865 = -1.*t46*t1027*t1748;
  t1876 = t1047*t1822;
  t1893 = t1083*t1855;
  t1895 = t1865 + t1876 + t1893;
  t1464 = t1449 + t1290;
  t1902 = -1.*t46*t1215*t1748;
  t1913 = t1258*t1822;
  t1929 = t1273*t1855;
  t1935 = t1902 + t1913 + t1929;
  t1482 = -1.000000000049*t967;
  t1493 = 1. + t1482;
  t1951 = -1.*t1345*t46*t1748;
  t1954 = t1355*t1822;
  t1980 = t1385*t1855;
  t1986 = t1951 + t1954 + t1980;
  t1515 = -1.000000000016*t967;
  t1526 = 1. + t1515;
  t1571 = t1552 + t1004;
  t1615 = t1414 + t988;
  t1627 = t1552 + t1171;
  t1634 = -6.5e-11*t967;
  t1642 = 1. + t1634;
  t1653 = t1449 + t1163;
  t2153 = -1.*t1775*t54*t462;
  t2158 = t1748*t503;
  t2175 = t2153 + t2158;
  t2228 = t54*t1748;
  t2235 = t1775*t462*t503;
  t2236 = t2228 + t2235;
  t2246 = -1.*t181*t2175;
  t2255 = t89*t2236;
  t2269 = t2246 + t2255;
  t2303 = t89*t2175;
  t2321 = t181*t2236;
  t2330 = t2303 + t2321;
  t2360 = t1775*t46*t1027;
  t2363 = t1047*t2269;
  t2389 = t1083*t2330;
  t2396 = t2360 + t2363 + t2389;
  t2404 = t1775*t46*t1215;
  t2410 = t1258*t2269;
  t2411 = t1273*t2330;
  t2420 = t2404 + t2410 + t2411;
  t2434 = t1345*t1775*t46;
  t2452 = t1355*t2269;
  t2459 = t1385*t2330;
  t2463 = t2434 + t2452 + t2459;
  p_output1[0]=t1019*t1096 + t1192*t1275 + t1334*t1397 - 0.038924*(t1096*t1425 + t1275*t1464 + t1397*t1493) - 0.80315*(t1096*t1526 + t1275*t1571 + t1397*t1615) + 0.148705*(t1096*t1627 + t1275*t1642 + t1397*t1653) + t445*t462 - 1.*t46*t489*t503 + t197*t46*t54 + t682*t729 + t849*t922 + var1[0] - 1.*var2[0];
  p_output1[1]=t1019*t1895 + t1192*t1935 + t1783*t197 + t1334*t1986 - 0.038924*(t1425*t1895 + t1464*t1935 + t1493*t1986) - 0.80315*(t1526*t1895 + t1571*t1935 + t1615*t1986) + 0.148705*(t1627*t1895 + t1642*t1935 + t1653*t1986) - 1.*t1748*t445*t46 + t1801*t489 + t1822*t682 + t1855*t849 + var1[1] - 1.*var2[1];
  p_output1[2]=t197*t2175 + t1019*t2396 + t1192*t2420 + t1334*t2463 - 0.038924*(t1425*t2396 + t1464*t2420 + t1493*t2463) - 0.80315*(t1526*t2396 + t1571*t2420 + t1615*t2463) + 0.148705*(t1627*t2396 + t1642*t2420 + t1653*t2463) + t1775*t445*t46 + t2236*t489 + t2269*t682 + t2330*t849 + var1[2] - 1.*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_RlFoot_DiagonalStance.hh"

namespace SymFunction
{

void h_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
