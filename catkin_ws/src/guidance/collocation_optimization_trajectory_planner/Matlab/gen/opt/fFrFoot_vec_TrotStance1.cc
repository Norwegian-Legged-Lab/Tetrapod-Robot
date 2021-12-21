/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:15:34 GMT+01:00
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
  double t44;
  double t23;
  double t63;
  double t47;
  double t50;
  double t53;
  double t85;
  double t101;
  double t26;
  double t43;
  double t331;
  double t370;
  double t459;
  double t862;
  double t842;
  double t721;
  double t722;
  double t757;
  double t761;
  double t765;
  double t772;
  double t808;
  double t876;
  double t878;
  double t880;
  double t1118;
  double t671;
  double t708;
  double t715;
  double t992;
  double t1068;
  double t1097;
  double t1133;
  double t1165;
  double t1178;
  double t1194;
  double t1196;
  double t1214;
  double t1221;
  double t1223;
  double t1226;
  double t1229;
  double t1277;
  double t1278;
  double t1285;
  double t1291;
  double t1300;
  double t1305;
  double t1314;
  double t1332;
  double t1339;
  double t1344;
  double t971;
  double t1434;
  double t1438;
  double t1455;
  double t1463;
  double t1467;
  double t1475;
  double t1477;
  double t1478;
  double t1495;
  double t1506;
  double t1516;
  double t1525;
  double t1548;
  double t1564;
  double t1568;
  double t1569;
  double t907;
  double t947;
  double t957;
  double t831;
  double t899;
  double t902;
  double t166;
  double t555;
  double t635;
  double t906;
  double t972;
  double t976;
  double t1649;
  double t1368;
  double t1380;
  double t1383;
  double t1294;
  double t1347;
  double t1357;
  double t1667;
  double t1175;
  double t1222;
  double t1244;
  double t1271;
  double t1362;
  double t1387;
  double t1394;
  double t1591;
  double t1611;
  double t1612;
  double t1542;
  double t1577;
  double t1581;
  double t1460;
  double t1473;
  double t1485;
  double t1488;
  double t1590;
  double t1614;
  double t1620;
  double t1651;
  double t1653;
  double t1663;
  double t1668;
  double t1669;
  double t1700;
  double t1719;
  double t1730;
  double t1743;
  double t1747;
  double t1765;
  double t1788;
  double t1813;
  double t1819;
  double t1837;
  double t1850;
  double t1862;
  double t1867;
  double t1273;
  double t1411;
  double t1417;
  double t2035;
  double t2037;
  double t2042;
  double t2045;
  double t2047;
  double t2050;
  double t2068;
  double t2091;
  double t2092;
  double t2103;
  double t2106;
  double t2111;
  double t2114;
  double t2122;
  double t2123;
  double t2125;
  double t2137;
  double t2004;
  double t2007;
  double t2012;
  double t2013;
  double t2026;
  double t2028;
  double t2034;
  double t2074;
  double t2108;
  double t2139;
  double t2150;
  double t2159;
  double t2164;
  double t2168;
  double t2169;
  double t2171;
  double t2176;
  double t701;
  double t979;
  double t985;
  double t2196;
  double t2199;
  double t2214;
  double t2216;
  double t2010;
  double t2158;
  double t2177;
  double t2178;
  double t2250;
  double t2252;
  double t2266;
  double t2271;
  double t2286;
  double t2291;
  double t2292;
  double t2294;
  double t2306;
  double t2307;
  double t2308;
  double t2192;
  double t2217;
  double t2227;
  double t2300;
  double t2310;
  double t2313;
  double t2328;
  double t2339;
  double t2348;
  double t1490;
  double t1629;
  double t1631;
  double t2247;
  double t2364;
  double t2410;
  double t2440;
  double t2492;
  double t2531;
  double t2613;
  double t2584;
  double t2743;
  double t2695;
  double t2665;
  double t2644;
  double t2985;
  double t3347;
  double t3351;
  double t3353;
  double t3358;
  double t3322;
  double t3324;
  double t3335;
  double t3336;
  double t3379;
  double t3381;
  double t3382;
  double t3385;
  double t3389;
  double t3392;
  double t3394;
  double t3427;
  double t3432;
  double t3434;
  double t3446;
  double t3449;
  double t3450;
  double t3452;
  t44 = Cos(var1[11]);
  t23 = Cos(var1[10]);
  t63 = -1. + t44;
  t47 = -1.*t44;
  t50 = 1. + t47;
  t53 = 1.6e-11*t50;
  t85 = 1.6e-11*t63;
  t101 = -1. + t53 + t85;
  t26 = -1.*t23;
  t43 = 1. + t26;
  t331 = 4.e-6*t63;
  t370 = -4.e-6*t44;
  t459 = t331 + t370;
  t862 = Sin(var1[10]);
  t842 = Cos(var1[9]);
  t721 = -1. + t23;
  t722 = 1.6e-11*t721;
  t757 = 1. + t722;
  t761 = t757*t101;
  t765 = 4.e-6*t43*t459;
  t772 = t761 + t765;
  t808 = Sin(var1[9]);
  t876 = 4.e-6*t101*t862;
  t878 = -1.*t459*t862;
  t880 = t876 + t878;
  t1118 = Sin(var1[11]);
  t671 = Sin(var1[4]);
  t708 = Cos(var1[4]);
  t715 = Cos(var1[5]);
  t992 = -1.000000000016*t50;
  t1068 = 1. + t992;
  t1097 = 0.004352*t1068;
  t1133 = -0.9999910000159999*t1118;
  t1165 = t1097 + t1133;
  t1178 = -1. + t53;
  t1194 = 4.e-6*t1178;
  t1196 = 3.999964e-6*t50;
  t1214 = -1.7408e-8*t1118;
  t1221 = t1194 + t1196 + t1214;
  t1223 = 0.999991*t44;
  t1226 = 0.004352*t1118;
  t1229 = t85 + t1223 + t1226;
  t1277 = -4.e-6*t862*t1165;
  t1278 = t757*t1221;
  t1285 = 4.e-6*t43*t1229;
  t1291 = 0. + t1277 + t1278 + t1285;
  t1300 = -1.000000000016*t43;
  t1305 = 1. + t1300;
  t1314 = t1305*t1165;
  t1332 = 4.e-6*t862*t1221;
  t1339 = -1.*t862*t1229;
  t1344 = 0. + t1314 + t1332 + t1339;
  t971 = Sin(var1[5]);
  t1434 = -1.7408e-8*t50;
  t1438 = -3.999964e-6*t1118;
  t1455 = t1434 + t1438;
  t1463 = 0.999991*t1068;
  t1467 = t1463 + t1226;
  t1475 = -0.004352*t44;
  t1477 = 0.999991*t1118;
  t1478 = t1475 + t1477;
  t1495 = t757*t1455;
  t1506 = -4.e-6*t862*t1467;
  t1516 = 4.e-6*t43*t1478;
  t1525 = 0. + t1495 + t1506 + t1516;
  t1548 = 4.e-6*t862*t1455;
  t1564 = t1305*t1467;
  t1568 = -1.*t862*t1478;
  t1569 = 0. + t1548 + t1564 + t1568;
  t907 = t842*t772;
  t947 = t808*t880;
  t957 = t907 + t947;
  t831 = -1.*t772*t808;
  t899 = t842*t880;
  t902 = t831 + t899;
  t166 = 4.e-6*t43*t101;
  t555 = t23*t459;
  t635 = t166 + t555;
  t906 = t715*t902;
  t972 = -1.*t957*t971;
  t976 = t906 + t972;
  t1649 = Cos(var1[3]);
  t1368 = t842*t1291;
  t1380 = t808*t1344;
  t1383 = 0. + t1368 + t1380;
  t1294 = -1.*t808*t1291;
  t1347 = t842*t1344;
  t1357 = 0. + t1294 + t1347;
  t1667 = Sin(var1[3]);
  t1175 = t862*t1165;
  t1222 = 4.e-6*t43*t1221;
  t1244 = t23*t1229;
  t1271 = 0. + t1175 + t1222 + t1244;
  t1362 = t715*t1357;
  t1387 = -1.*t1383*t971;
  t1394 = 0. + t1362 + t1387;
  t1591 = t842*t1525;
  t1611 = t808*t1569;
  t1612 = 0. + t1591 + t1611;
  t1542 = -1.*t808*t1525;
  t1577 = t842*t1569;
  t1581 = 0. + t1542 + t1577;
  t1460 = 4.e-6*t43*t1455;
  t1473 = t862*t1467;
  t1485 = t23*t1478;
  t1488 = 0. + t1460 + t1473 + t1485;
  t1590 = t715*t1581;
  t1614 = -1.*t1612*t971;
  t1620 = 0. + t1590 + t1614;
  t1651 = t715*t957;
  t1653 = t902*t971;
  t1663 = t1651 + t1653;
  t1668 = t635*t708;
  t1669 = -1.*t671*t976;
  t1700 = t1668 + t1669;
  t1719 = t715*t1383;
  t1730 = t1357*t971;
  t1743 = 0. + t1719 + t1730;
  t1747 = t708*t1271;
  t1765 = -1.*t671*t1394;
  t1788 = 0. + t1747 + t1765;
  t1813 = t715*t1612;
  t1819 = t1581*t971;
  t1837 = 0. + t1813 + t1819;
  t1850 = t708*t1488;
  t1862 = -1.*t671*t1620;
  t1867 = 0. + t1850 + t1862;
  t1273 = t1271*t671;
  t1411 = t708*t1394;
  t1417 = 0. + t1273 + t1411;
  t2035 = -1.26e-8*var1[11];
  t2037 = 1. + t85;
  t2042 = -0.14871*t2037;
  t2045 = -1.64779999997447e-7*t50;
  t2047 = -1.59556e-7*t63;
  t2050 = -1.199987999968e-6*t1118;
  t2068 = t2035 + t2042 + t2045 + t2047 + t2050;
  t2091 = 0.803147*t1068;
  t2092 = 0.50315000001605*t50;
  t2103 = 0.00130540515936178*t1118;
  t2106 = t2091 + t2092 + t2103;
  t2111 = -5.04e-14*var1[11];
  t2114 = -0.03988959484*t50;
  t2122 = 6.38224e-13*t63;
  t2123 = -0.041195*t44;
  t2125 = 0.299996999992*t1118;
  t2137 = t2111 + t2114 + t2122 + t2123 + t2125;
  t2004 = -1.*t842;
  t2007 = 1. + t2004;
  t2012 = -0.15121*t808;
  t2013 = -1.2484e-7*var1[10];
  t2026 = 2.479936e-18*t43;
  t2028 = -1.54996e-7*t721;
  t2034 = 1.124840000016e-6*t862;
  t2074 = t757*t2068;
  t2108 = -4.e-6*t862*t2106;
  t2139 = 4.e-6*t43*t2137;
  t2150 = t2013 + t2026 + t2028 + t2034 + t2074 + t2108 + t2139;
  t2159 = 0.281210000008499*t43;
  t2164 = -0.03874900000062*t862;
  t2168 = 4.e-6*t862*t2068;
  t2169 = t1305*t2106;
  t2171 = -1.*t862*t2137;
  t2176 = t2159 + t2164 + t2168 + t2169 + t2171;
  t701 = t635*t671;
  t979 = t708*t976;
  t985 = t701 + t979;
  t2196 = 0.15121*t2007;
  t2199 = -1.*t808*t2150;
  t2214 = t842*t2176;
  t2216 = t2196 + t2012 + t2199 + t2214;
  t2010 = -0.15121*t2007;
  t2158 = t842*t2150;
  t2177 = t808*t2176;
  t2178 = t2010 + t2012 + t2158 + t2177;
  t2250 = -4.9936e-13*var1[10];
  t2252 = -0.038749*t43;
  t2266 = 6.19984e-13*t721;
  t2271 = -0.281210000004*t862;
  t2286 = 4.e-6*t43*t2068;
  t2291 = t862*t2106;
  t2292 = t23*t2137;
  t2294 = 0. + t2250 + t2252 + t2266 + t2271 + t2286 + t2291 + t2292;
  t2306 = t715*t2216;
  t2307 = -1.*t2178*t971;
  t2308 = 0. + t2306 + t2307;
  t2192 = t715*t2178;
  t2217 = t2216*t971;
  t2227 = 0. + t2192 + t2217;
  t2300 = t2294*t671;
  t2310 = t708*t2308;
  t2313 = 0. + t2300 + t2310;
  t2328 = t708*t2294;
  t2339 = -1.*t671*t2308;
  t2348 = 0. + t2328 + t2339;
  t1490 = t1488*t671;
  t1629 = t708*t1620;
  t1631 = 0. + t1490 + t1629;
  t2247 = t1663*t2227;
  t2364 = -1.*t1743*t2227;
  t2410 = t1743*t2227;
  t2440 = -1.*t2227*t1837;
  t2492 = -1.*t1663*t2227;
  t2531 = t2227*t1837;
  t2613 = -1.*t1271*t2294;
  t2584 = t635*t2294;
  t2743 = t2294*t1488;
  t2695 = -1.*t635*t2294;
  t2665 = -1.*t2294*t1488;
  t2644 = t1271*t2294;
  t2985 = t2250 + t2252 + t2266 + t2271 + t2286 + t2291 + t2292;
  t3347 = t2068*t1221;
  t3351 = t1165*t2106;
  t3353 = t1229*t2137;
  t3358 = t3347 + t3351 + t3353;
  t3322 = -1.*t1455*t2068;
  t3324 = -1.*t2106*t1467;
  t3335 = -1.*t2137*t1478;
  t3336 = t3322 + t3324 + t3335;
  t3379 = t1455*t2068;
  t3381 = t2106*t1467;
  t3382 = t2137*t1478;
  t3385 = t3379 + t3381 + t3382;
  t3389 = -1.*t101*t2068;
  t3392 = -1.*t459*t2137;
  t3394 = t3389 + t3392;
  t3427 = -1.*t2068*t1221;
  t3432 = -1.*t1165*t2106;
  t3434 = -1.*t1229*t2137;
  t3446 = t3427 + t3432 + t3434;
  t3449 = t101*t2068;
  t3450 = t459*t2137;
  t3452 = t3449 + t3450;
  p_output1[0]=t1631*var2[0] + t1417*var2[1] + t985*var2[2];
  p_output1[1]=(0. + t1649*t1837 - 1.*t1667*t1867)*var2[0] + (0. + t1649*t1743 - 1.*t1667*t1788)*var2[1] + (t1649*t1663 - 1.*t1667*t1700)*var2[2];
  p_output1[2]=(0. + t1667*t1837 + t1649*t1867)*var2[0] + (0. + t1667*t1743 + t1649*t1788)*var2[1] + (t1663*t1667 + t1649*t1700)*var2[2];
  p_output1[3]=((-1.*t1417*t2313 - 1.*t1788*t2348 + t2364)*t985 + t1417*(t2247 + t1700*t2348 + t2313*t985))*var2[0] + ((t1631*t2313 + t1867*t2348 + t2531)*t985 + t1631*(-1.*t1700*t2348 + t2492 - 1.*t2313*t985))*var2[1] + (t1631*(t1417*t2313 + t1788*t2348 + t2410) + t1417*(-1.*t1631*t2313 - 1.*t1867*t2348 + t2440))*var2[2];
  p_output1[4]=(t1663*(-1.*t1394*t2308 + t2364 + t2613) + t1743*(t2247 + t2584 + t2308*t976))*var2[0] + (t1663*(t1620*t2308 + t2531 + t2743) + t1837*(t2492 + t2695 - 1.*t2308*t976))*var2[1] + (t1837*(t1394*t2308 + t2410 + t2644) + t1743*(-1.*t1620*t2308 + t2440 + t2665))*var2[2];
  p_output1[5]=((-1.*t1383*t2178 - 1.*t1357*t2216 + t2613)*t635 + t1271*(t2584 + t2216*t902 + t2178*t957))*var2[0] + ((t1612*t2178 + t1581*t2216 + t2743)*t635 + t1488*(t2695 - 1.*t2216*t902 - 1.*t2178*t957))*var2[1] + (t1488*(t1383*t2178 + t1357*t2216 + t2644) + t1271*(-1.*t1612*t2178 - 1.*t1581*t2216 + t2665))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-0.15121*t1525 - 0.15121*t1569 + (-1.*t1291*t2150 - 1.*t1344*t2176 - 1.*t1271*t2985)*t635 + t1271*(t2985*t635 + t2150*t772 + t2176*t880))*var2[0] + (-0.15121*t1291 - 0.15121*t1344 + (t1525*t2150 + t1569*t2176 + t1488*t2985)*t635 + t1488*(-1.*t2985*t635 - 1.*t2150*t772 - 1.*t2176*t880))*var2[1] + (t1488*(t1291*t2150 + t1344*t2176 + t1271*t2985) + t1271*(-1.*t1525*t2150 - 1.*t1569*t2176 - 1.*t1488*t2985) - 0.15121*t772 - 0.15121*t880)*var2[2];
  p_output1[10]=(1.e-6*t1455 - 0.038749*t1467 - 0.28121*t1478 - 1.*t101*t3446 - 1.*t1221*t3452 + 4.e-6*(-1.*t1229*t3452 - 1.*t3446*t459))*var2[0] + (-0.038749*t1165 + 1.e-6*t1221 - 0.28121*t1229 - 1.*t101*t3385 - 1.*t1455*t3394 + 4.e-6*(-1.*t1478*t3394 - 1.*t3385*t459))*var2[1] + (1.e-6*t101 - 1.*t1221*t3336 - 1.*t1455*t3358 + 4.e-6*(-1.*t1229*t3336 - 1.*t1478*t3358) - 0.28121*t459)*var2[2];
  p_output1[11]=-1.9353204325022392e-7*var2[0] + 0.29999998115510645*var2[1] + 1.1914820871506078e-8*var2[2];
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

#include "fFrFoot_vec_TrotStance1.hh"

namespace TrotStance1
{

void fFrFoot_vec_TrotStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
