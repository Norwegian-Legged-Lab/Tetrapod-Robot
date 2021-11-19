/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:30:45 GMT+01:00
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
  double t121;
  double t255;
  double t307;
  double t363;
  double t615;
  double t619;
  double t623;
  double t630;
  double t637;
  double t642;
  double t808;
  double t648;
  double t754;
  double t885;
  double t344;
  double t800;
  double t896;
  double t916;
  double t979;
  double t1017;
  double t1055;
  double t538;
  double t1131;
  double t1332;
  double t1334;
  double t1339;
  double t1348;
  double t57;
  double t1257;
  double t1265;
  double t1168;
  double t1188;
  double t1204;
  double t1289;
  double t1290;
  double t1305;
  double t1377;
  double t1112;
  double t1416;
  double t1144;
  double t1454;
  double t1347;
  double t1516;
  double t1518;
  double t378;
  double t1411;
  double t1412;
  double t1414;
  double t1418;
  double t1428;
  double t1430;
  double t1432;
  double t1433;
  double t1440;
  double t1555;
  double t1523;
  double t1527;
  double t1531;
  double t1532;
  double t1534;
  double t1536;
  double t1538;
  double t1539;
  double t1582;
  double t1583;
  double t1587;
  double t1588;
  double t1592;
  double t1596;
  double t1597;
  double t1609;
  double t1390;
  double t1618;
  double t1363;
  double t1659;
  double t1487;
  double t1625;
  double t1626;
  double t1461;
  double t634;
  double t646;
  double t70;
  double t318;
  double t444;
  double t503;
  double t599;
  double t605;
  double t612;
  double t942;
  double t972;
  double t1090;
  double t1093;
  double t1117;
  double t1120;
  double t1147;
  double t1163;
  double t1165;
  double t1227;
  double t1229;
  double t1261;
  double t1263;
  double t1271;
  double t1272;
  double t1277;
  double t1329;
  double t1344;
  double t1368;
  double t1373;
  double t1406;
  double t1407;
  double t1410;
  double t1712;
  double t1723;
  double t1724;
  double t1728;
  double t1731;
  double t1733;
  double t1444;
  double t1451;
  double t1471;
  double t1486;
  double t1499;
  double t1501;
  double t1510;
  double t1551;
  double t1554;
  double t1556;
  double t1557;
  double t1561;
  double t1567;
  double t1575;
  double t1622;
  double t1738;
  double t1739;
  double t1740;
  double t1741;
  double t1627;
  double t1752;
  double t1753;
  double t1755;
  double t1757;
  double t1637;
  double t1638;
  double t1760;
  double t1769;
  double t1783;
  double t1785;
  double t1654;
  double t1656;
  double t1663;
  double t1665;
  double t1670;
  double t1682;
  double t1686;
  double t1694;
  double t1839;
  double t1841;
  double t1847;
  double t1866;
  double t1879;
  double t1884;
  double t1886;
  double t1892;
  double t1894;
  double t1897;
  double t1899;
  double t1900;
  double t1907;
  double t1908;
  double t1909;
  double t1913;
  double t1915;
  double t1917;
  double t1919;
  double t1921;
  double t1926;
  double t1971;
  double t1977;
  double t1979;
  double t1983;
  double t1997;
  double t2003;
  double t2015;
  double t2023;
  double t2031;
  double t2042;
  double t2050;
  double t2053;
  double t2054;
  double t2056;
  double t2066;
  double t2067;
  double t2070;
  double t2142;
  double t2171;
  double t2177;
  double t2217;
  double t2219;
  double t2224;
  double t2156;
  double t2261;
  double t2193;
  double t2236;
  double t2240;
  double t2246;
  double t2250;
  double t2254;
  double t2255;
  double t2258;
  double t2259;
  double t2260;
  double t2263;
  double t2264;
  double t2266;
  double t2274;
  double t2275;
  double t2276;
  double t2279;
  double t2280;
  double t2281;
  double t2354;
  double t2401;
  double t2371;
  double t2373;
  double t2375;
  double t2380;
  double t2414;
  double t2416;
  double t2421;
  double t2426;
  double t2389;
  double t2438;
  double t2439;
  double t2449;
  double t2455;
  double t2357;
  double t2512;
  double t2430;
  t121 = Cos(var1[13]);
  t255 = -1.*t121;
  t307 = 1. + t255;
  t363 = Sin(var1[13]);
  t615 = Sin(var1[3]);
  t619 = Cos(var1[12]);
  t623 = -1.*t619;
  t630 = 1. + t623;
  t637 = Sin(var1[12]);
  t642 = 0.15121*t637;
  t808 = Cos(var1[3]);
  t648 = Cos(var1[5]);
  t754 = Sin(var1[4]);
  t885 = Sin(var1[5]);
  t344 = 4.e-6*t307;
  t800 = t648*t615*t754;
  t896 = t808*t885;
  t916 = t800 + t896;
  t979 = t808*t648;
  t1017 = -1.*t615*t754*t885;
  t1055 = t979 + t1017;
  t538 = -2.8e-11*t307;
  t1131 = 7.e-6*t307;
  t1332 = Cos(var1[14]);
  t1334 = -1.*t1332;
  t1339 = 1. + t1334;
  t1348 = Sin(var1[14]);
  t57 = Cos(var1[4]);
  t1257 = -1.*t363;
  t1265 = -4.e-6*t363;
  t1168 = -1.*t637*t916;
  t1188 = t619*t1055;
  t1204 = t1168 + t1188;
  t1289 = t619*t916;
  t1290 = t637*t1055;
  t1305 = t1289 + t1290;
  t1377 = 7.e-6*t1339;
  t1112 = -7.e-6*t363;
  t1416 = -7.e-6*t307;
  t1144 = 4.e-6*t363;
  t1454 = 4.e-6*t1339;
  t1347 = -2.8e-11*t1339;
  t1516 = -1. + t121;
  t1518 = 4.e-6*t1516;
  t378 = 7.e-6*t363;
  t1411 = 2.8e-11*t307;
  t1412 = t1411 + t1257;
  t1414 = -1.*t57*t1412*t615;
  t1418 = t1416 + t1265;
  t1428 = t1418*t1204;
  t1430 = -1.000000000016*t307;
  t1432 = 1. + t1430;
  t1433 = t1432*t1305;
  t1440 = t1414 + t1428 + t1433;
  t1555 = 7.e-6*t1348;
  t1523 = t1518 + t1112;
  t1527 = -1.*t57*t1523*t615;
  t1531 = -6.5e-11*t307;
  t1532 = 1. + t1531;
  t1534 = t1532*t1204;
  t1536 = t1416 + t1144;
  t1538 = t1536*t1305;
  t1539 = t1527 + t1534 + t1538;
  t1582 = -1.000000000049*t307;
  t1583 = 1. + t1582;
  t1587 = -1.*t1583*t57*t615;
  t1588 = t1518 + t378;
  t1592 = t1588*t1204;
  t1596 = t1411 + t363;
  t1597 = t1596*t1305;
  t1609 = t1587 + t1592 + t1597;
  t1390 = -4.e-6*t1348;
  t1618 = 2.8e-11*t1339;
  t1363 = -1.*t1348;
  t1659 = -7.e-6*t1339;
  t1487 = 4.e-6*t1348;
  t1625 = -1. + t1332;
  t1626 = 4.e-6*t1625;
  t1461 = -7.e-6*t1348;
  t634 = -0.15121*t630;
  t646 = t634 + t642;
  t70 = 5.856279999999999e-13*var1[13];
  t318 = -0.0387489999948987*t307;
  t444 = t344 + t378;
  t503 = -2.123459e-6*t444;
  t599 = t538 + t363;
  t605 = -0.281209000004*t599;
  t612 = t70 + t318 + t503 + t605;
  t942 = 0.15121*t630;
  t972 = t942 + t642;
  t1090 = -1.4640699999999997e-7*var1[13];
  t1093 = -1.38024835e-16*t307;
  t1117 = t344 + t1112;
  t1120 = -0.038748999993*t1117;
  t1147 = t1131 + t1144;
  t1163 = -0.281209000004*t1147;
  t1165 = t1090 + t1093 + t1120 + t1163;
  t1227 = 1.0248489999999998e-12*var1[13];
  t1229 = -0.28120900000849935*t307;
  t1261 = t538 + t1257;
  t1263 = -0.038748999993*t1261;
  t1271 = t1131 + t1265;
  t1272 = -2.123459e-6*t1271;
  t1277 = t1227 + t1229 + t1263 + t1272;
  t1329 = 1.8190549999999993e-12*var1[14];
  t1344 = -0.5031490000160505*t1339;
  t1368 = t1347 + t1363;
  t1373 = -0.038922999986*t1368;
  t1406 = t1377 + t1390;
  t1407 = -3.6777349999999994e-6*t1406;
  t1410 = t1329 + t1344 + t1373 + t1407;
  t1712 = t808*t57*t648*t637;
  t1723 = t619*t808*t57*t885;
  t1724 = t1712 + t1723;
  t1728 = -1.*t619*t808*t57*t648;
  t1731 = t808*t57*t637*t885;
  t1733 = t1728 + t1731;
  t1444 = -2.598649999999999e-7*var1[14];
  t1451 = -2.3905277499999995e-16*t1339;
  t1471 = t1454 + t1461;
  t1486 = -0.038922999986*t1471;
  t1499 = t1377 + t1487;
  t1501 = -0.503149000008*t1499;
  t1510 = t1444 + t1451 + t1486 + t1501;
  t1551 = 1.0394599999999997e-12*var1[14];
  t1554 = -0.03892299998790722*t1339;
  t1556 = t1454 + t1555;
  t1557 = -3.6777349999999994e-6*t1556;
  t1561 = t1347 + t1348;
  t1567 = -0.503149000008*t1561;
  t1575 = t1551 + t1554 + t1557 + t1567;
  t1622 = t1618 + t1348;
  t1738 = -1.*t808*t1412*t754;
  t1739 = t1418*t1724;
  t1740 = t1432*t1733;
  t1741 = t1738 + t1739 + t1740;
  t1627 = t1626 + t1555;
  t1752 = -1.*t808*t1523*t754;
  t1753 = t1532*t1724;
  t1755 = t1536*t1733;
  t1757 = t1752 + t1753 + t1755;
  t1637 = -1.000000000049*t1339;
  t1638 = 1. + t1637;
  t1760 = -1.*t1583*t808*t754;
  t1769 = t1588*t1724;
  t1783 = t1596*t1733;
  t1785 = t1760 + t1769 + t1783;
  t1654 = -1.000000000016*t1339;
  t1656 = 1. + t1654;
  t1663 = t1659 + t1390;
  t1665 = t1618 + t1363;
  t1670 = t1659 + t1487;
  t1682 = -6.5e-11*t1339;
  t1686 = 1. + t1682;
  t1694 = t1626 + t1461;
  t1839 = t808*t648*t754;
  t1841 = -1.*t615*t885;
  t1847 = t1839 + t1841;
  t1866 = t648*t615;
  t1879 = t808*t754*t885;
  t1884 = t1866 + t1879;
  t1886 = t637*t1847;
  t1892 = t619*t1884;
  t1894 = t1886 + t1892;
  t1897 = t619*t1847;
  t1899 = -1.*t637*t1884;
  t1900 = t1897 + t1899;
  t1907 = t1536*t1894;
  t1908 = t1532*t1900;
  t1909 = t1907 + t1908;
  t1913 = t1432*t1894;
  t1915 = t1418*t1900;
  t1917 = t1913 + t1915;
  t1919 = t1596*t1894;
  t1921 = t1588*t1900;
  t1926 = t1919 + t1921;
  t1971 = 0.15121*t619;
  t1977 = -1.*t808*t648*t754;
  t1979 = t615*t885;
  t1983 = t1977 + t1979;
  t1997 = -1.*t637*t1983;
  t2003 = t1997 + t1892;
  t2015 = -1.*t619*t1983;
  t2023 = t2015 + t1899;
  t2031 = t1536*t2003;
  t2042 = t1532*t2023;
  t2050 = t2031 + t2042;
  t2053 = t1432*t2003;
  t2054 = t1418*t2023;
  t2056 = t2053 + t2054;
  t2066 = t1596*t2003;
  t2067 = t1588*t2023;
  t2070 = t2066 + t2067;
  t2142 = -2.8e-11*t363;
  t2171 = -7.e-6*t121;
  t2177 = 4.e-6*t121;
  t2217 = t619*t1983;
  t2219 = t637*t1884;
  t2224 = t2217 + t2219;
  t2156 = 7.e-6*t121;
  t2261 = 2.8e-11*t363;
  t2193 = -4.e-6*t121;
  t2236 = t2171 + t1265;
  t2240 = t808*t57*t2236;
  t2246 = -6.5e-11*t363*t2003;
  t2250 = t2177 + t1112;
  t2254 = t2250*t2224;
  t2255 = t2240 + t2246 + t2254;
  t2258 = -1.000000000049*t808*t57*t363;
  t2259 = t2156 + t1265;
  t2260 = t2259*t2003;
  t2263 = t121 + t2261;
  t2264 = t2263*t2224;
  t2266 = t2258 + t2260 + t2264;
  t2274 = t255 + t2261;
  t2275 = t808*t57*t2274;
  t2276 = t2193 + t1112;
  t2279 = t2276*t2003;
  t2280 = -1.000000000016*t363*t2224;
  t2281 = t2275 + t2279 + t2280;
  t2354 = -2.8e-11*t1348;
  t2401 = 4.e-6*t1332;
  t2371 = t808*t57*t1412;
  t2373 = t1418*t2003;
  t2375 = t1432*t2224;
  t2380 = t2371 + t2373 + t2375;
  t2414 = t808*t57*t1523;
  t2416 = t1532*t2003;
  t2421 = t1536*t2224;
  t2426 = t2414 + t2416 + t2421;
  t2389 = -7.e-6*t1332;
  t2438 = t1583*t808*t57;
  t2439 = t1588*t2003;
  t2449 = t1596*t2224;
  t2455 = t2438 + t2439 + t2449;
  t2357 = -4.e-6*t1332;
  t2512 = 2.8e-11*t1348;
  t2430 = 7.e-6*t1332;
  p_output1[0]=1.;
  p_output1[1]=t1165*t1204 + t1277*t1305 + t1410*t1440 + t1510*t1539 + t1575*t1609 - 0.038924*(t1440*t1622 + t1539*t1627 + t1609*t1638) - 0.80315*(t1440*t1656 + t1539*t1663 + t1609*t1665) + 0.148705*(t1440*t1670 + t1539*t1686 + t1609*t1694) - 1.*t57*t612*t615 + t646*t916 + t1055*t972;
  p_output1[2]=t1165*t1724 + t1277*t1733 + t1410*t1741 + t1510*t1757 + t1575*t1785 - 0.038924*(t1622*t1741 + t1627*t1757 + t1638*t1785) - 0.80315*(t1656*t1741 + t1663*t1757 + t1665*t1785) + 0.148705*(t1670*t1741 + t1686*t1757 + t1694*t1785) - 1.*t57*t646*t648*t808 - 1.*t612*t754*t808 + t57*t808*t885*t972;
  p_output1[3]=t1277*t1894 + t1165*t1900 + t1510*t1909 + t1410*t1917 + t1575*t1926 - 0.038924*(t1627*t1909 + t1622*t1917 + t1638*t1926) - 0.80315*(t1663*t1909 + t1656*t1917 + t1665*t1926) + 0.148705*(t1686*t1909 + t1670*t1917 + t1694*t1926) + t1884*t646 + t1847*t972;
  p_output1[4]=t1277*t2003 + t1165*t2023 + t1510*t2050 + t1410*t2056 + t1575*t2070 - 0.038924*(t1627*t2050 + t1622*t2056 + t1638*t2070) - 0.80315*(t1663*t2050 + t1656*t2056 + t1665*t2070) + 0.148705*(t1686*t2050 + t1670*t2056 + t1694*t2070) + t1983*(t1971 - 0.15121*t637) + t1884*(t1971 + t642);
  p_output1[5]=t1510*t2255 + t1575*t2266 + t1410*t2281 - 0.038924*(t1627*t2255 + t1638*t2266 + t1622*t2281) - 0.80315*(t1663*t2255 + t1665*t2266 + t1656*t2281) + 0.148705*(t1686*t2255 + t1694*t2266 + t1670*t2281) + t2003*(-1.4640699999999997e-7 - 0.038748999993*(t1144 + t2171) - 1.38024835e-16*t363 - 0.281209000004*(t2177 + t378)) + t2224*(1.0248489999999998e-12 - 0.038748999993*(t2142 + t255) - 0.28120900000849935*t363 - 2.123459e-6*(t2193 + t378)) + (5.856279999999999e-13 - 0.281209000004*(t121 + t2142) - 2.123459e-6*(t1144 + t2156) - 0.0387489999948987*t363)*t57*t808;
  p_output1[6]=(1.8190549999999993e-12 - 0.5031490000160505*t1348 - 0.038922999986*(t1334 + t2354) - 3.6777349999999994e-6*(t1555 + t2357))*t2380 + (-2.598649999999999e-7 - 2.3905277499999995e-16*t1348 - 0.038922999986*(t1487 + t2389) - 0.503149000008*(t1555 + t2401))*t2426 + (1.0394599999999997e-12 - 0.03892299998790722*t1348 - 0.503149000008*(t1332 + t2354) - 3.6777349999999994e-6*(t1487 + t2430))*t2455 + 0.148705*(t2380*(t1461 + t2401) - 6.5e-11*t1348*t2426 + (t1390 + t2389)*t2455) - 0.038924*(t2426*(t1390 + t2430) - 1.000000000049*t1348*t2455 + t2380*(t1332 + t2512)) - 0.80315*(-1.000000000016*t1348*t2380 + (t1461 + t2357)*t2426 + t2455*(t1334 + t2512));
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

#include "J_foot_clearance_RlFootParallelStance.hh"

namespace ParallelStance
{

void J_foot_clearance_RlFootParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
