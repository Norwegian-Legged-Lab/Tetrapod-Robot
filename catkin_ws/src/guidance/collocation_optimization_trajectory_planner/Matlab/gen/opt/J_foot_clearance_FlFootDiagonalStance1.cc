/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:27:37 GMT+01:00
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
  double t513;
  double t616;
  double t619;
  double t508;
  double t627;
  double t709;
  double t710;
  double t711;
  double t723;
  double t727;
  double t541;
  double t691;
  double t704;
  double t764;
  double t799;
  double t814;
  double t1167;
  double t1215;
  double t1224;
  double t1227;
  double t1311;
  double t1351;
  double t1081;
  double t1108;
  double t1124;
  double t1257;
  double t1262;
  double t1268;
  double t1376;
  double t1377;
  double t1380;
  double t1402;
  double t1355;
  double t1357;
  double t1360;
  double t1368;
  double t1370;
  double t1372;
  double t1474;
  double t1447;
  double t1449;
  double t1454;
  double t1458;
  double t1412;
  double t1416;
  double t1417;
  double t1421;
  double t1426;
  double t1427;
  double t731;
  double t733;
  double t838;
  double t867;
  double t1134;
  double t1226;
  double t1246;
  double t1251;
  double t1287;
  double t1295;
  double t1300;
  double t1329;
  double t1334;
  double t1338;
  double t1347;
  double t1557;
  double t1562;
  double t1567;
  double t1583;
  double t1584;
  double t1587;
  double t1375;
  double t1385;
  double t1403;
  double t1410;
  double t1430;
  double t1431;
  double t1437;
  double t1463;
  double t1465;
  double t1469;
  double t1472;
  double t1478;
  double t1479;
  double t1598;
  double t1604;
  double t1607;
  double t1610;
  double t1638;
  double t1642;
  double t1656;
  double t1657;
  double t1615;
  double t1619;
  double t1621;
  double t1622;
  double t1508;
  double t1509;
  double t1717;
  double t1720;
  double t1721;
  double t1728;
  double t1729;
  double t1732;
  double t1738;
  double t1742;
  double t1743;
  double t1746;
  double t1748;
  double t1752;
  double t1770;
  double t1777;
  double t1780;
  double t1755;
  double t1761;
  double t1762;
  double t1788;
  double t1789;
  double t1790;
  double t1857;
  double t1860;
  double t1862;
  double t1878;
  double t1879;
  double t1884;
  double t1889;
  double t1903;
  double t1904;
  double t1905;
  double t1897;
  double t1898;
  double t1900;
  double t1914;
  double t1925;
  double t1931;
  double t1989;
  double t1991;
  double t1994;
  double t2026;
  double t2030;
  double t2033;
  double t2034;
  double t2037;
  double t2038;
  double t2042;
  double t2051;
  double t2006;
  double t2011;
  double t2013;
  double t2015;
  double t2126;
  double t2129;
  double t2130;
  double t2132;
  double t2115;
  double t2116;
  double t2117;
  double t2118;
  double t2156;
  double t2162;
  t513 = Cos(var1[5]);
  t616 = Sin(var1[3]);
  t619 = Sin(var1[4]);
  t508 = Cos(var1[3]);
  t627 = Sin(var1[5]);
  t709 = Cos(var1[6]);
  t710 = -1.*t709;
  t711 = 1. + t710;
  t723 = 0.15121*t711;
  t727 = Sin(var1[6]);
  t541 = t508*t513;
  t691 = -1.*t616*t619*t627;
  t704 = t541 + t691;
  t764 = t513*t616*t619;
  t799 = t508*t627;
  t814 = t764 + t799;
  t1167 = Cos(var1[7]);
  t1215 = -1.*t1167;
  t1224 = 1. + t1215;
  t1227 = Sin(var1[7]);
  t1311 = Cos(var1[4]);
  t1351 = -1. + t1167;
  t1081 = t709*t704;
  t1108 = -1.*t814*t727;
  t1124 = t1081 + t1108;
  t1257 = t709*t814;
  t1262 = t704*t727;
  t1268 = t1257 + t1262;
  t1376 = Cos(var1[8]);
  t1377 = -1.*t1376;
  t1380 = 1. + t1377;
  t1402 = Sin(var1[8]);
  t1355 = -4.e-6*t1311*t1351*t616;
  t1357 = 1.6e-11*t1351;
  t1360 = 1. + t1357;
  t1368 = t1360*t1124;
  t1370 = 4.e-6*t1268*t1227;
  t1372 = t1355 + t1368 + t1370;
  t1474 = -1. + t1376;
  t1447 = -1.*t1311*t1167*t616;
  t1449 = 4.e-6*t1351*t1124;
  t1454 = t1268*t1227;
  t1458 = t1447 + t1449 + t1454;
  t1412 = -1.000000000016*t1224;
  t1416 = 1. + t1412;
  t1417 = t1416*t1268;
  t1421 = t1311*t616*t1227;
  t1426 = -4.e-6*t1124*t1227;
  t1427 = t1417 + t1421 + t1426;
  t731 = -0.15121*t727;
  t733 = t723 + t731;
  t838 = 0.15121*t727;
  t867 = t723 + t838;
  t1134 = -1.2484e-7*var1[7];
  t1226 = -1.5499600000248e-7*t1224;
  t1246 = 1.124840000016e-6*t1227;
  t1251 = t1134 + t1226 + t1246;
  t1287 = 0.281210000008499*t1224;
  t1295 = 0.03874900000062*t1227;
  t1300 = t1287 + t1295;
  t1329 = 4.9936e-13*var1[7];
  t1334 = -0.03874900000062*t1224;
  t1338 = 0.281210000004*t1227;
  t1347 = t1329 + t1334 + t1338;
  t1557 = t508*t1311*t709*t627;
  t1562 = t508*t1311*t513*t727;
  t1567 = t1557 + t1562;
  t1583 = -1.*t508*t1311*t513*t709;
  t1584 = t508*t1311*t627*t727;
  t1587 = t1583 + t1584;
  t1375 = -1.284e-8*var1[8];
  t1385 = -1.5499600000248e-7*t1380;
  t1403 = 2.012840000032e-6*t1402;
  t1410 = t1375 + t1385 + t1403;
  t1430 = 0.503210000016051*t1380;
  t1431 = 0.03874900000062*t1402;
  t1437 = t1430 + t1431;
  t1463 = 5.136e-14*var1[8];
  t1465 = -0.03874900000062*t1380;
  t1469 = 0.503210000008*t1402;
  t1472 = t1463 + t1465 + t1469;
  t1478 = 1.6e-11*t1474;
  t1479 = 1. + t1478;
  t1598 = -4.e-6*t508*t1351*t619;
  t1604 = t1360*t1567;
  t1607 = 4.e-6*t1587*t1227;
  t1610 = t1598 + t1604 + t1607;
  t1638 = -1.*t508*t1167*t619;
  t1642 = 4.e-6*t1351*t1567;
  t1656 = t1587*t1227;
  t1657 = t1638 + t1642 + t1656;
  t1615 = t1416*t1587;
  t1619 = t508*t619*t1227;
  t1621 = -4.e-6*t1567*t1227;
  t1622 = t1615 + t1619 + t1621;
  t1508 = -1.000000000016*t1380;
  t1509 = 1. + t1508;
  t1717 = t508*t513*t619;
  t1720 = -1.*t616*t627;
  t1721 = t1717 + t1720;
  t1728 = t513*t616;
  t1729 = t508*t619*t627;
  t1732 = t1728 + t1729;
  t1738 = t709*t1721;
  t1742 = -1.*t1732*t727;
  t1743 = t1738 + t1742;
  t1746 = t709*t1732;
  t1748 = t1721*t727;
  t1752 = t1746 + t1748;
  t1770 = t1416*t1752;
  t1777 = -4.e-6*t1743*t1227;
  t1780 = t1770 + t1777;
  t1755 = t1360*t1743;
  t1761 = 4.e-6*t1752*t1227;
  t1762 = t1755 + t1761;
  t1788 = 4.e-6*t1351*t1743;
  t1789 = t1752*t1227;
  t1790 = t1788 + t1789;
  t1857 = -1.*t508*t513*t619;
  t1860 = t616*t627;
  t1862 = t1857 + t1860;
  t1878 = -1.*t709*t1862;
  t1879 = t1878 + t1742;
  t1884 = -1.*t1862*t727;
  t1889 = t1746 + t1884;
  t1903 = t1416*t1889;
  t1904 = -4.e-6*t1879*t1227;
  t1905 = t1903 + t1904;
  t1897 = t1360*t1879;
  t1898 = 4.e-6*t1889*t1227;
  t1900 = t1897 + t1898;
  t1914 = 4.e-6*t1351*t1879;
  t1925 = t1889*t1227;
  t1931 = t1914 + t1925;
  t1989 = t709*t1862;
  t1991 = t1732*t727;
  t1994 = t1989 + t1991;
  t2026 = -1.*t508*t1311*t1167;
  t2030 = -4.e-6*t1167*t1889;
  t2033 = -1.000000000016*t1994*t1227;
  t2034 = t2026 + t2030 + t2033;
  t2037 = t1167*t1994;
  t2038 = -1.*t508*t1311*t1227;
  t2042 = -4.e-6*t1889*t1227;
  t2051 = t2037 + t2038 + t2042;
  t2006 = 4.e-6*t1167*t1994;
  t2011 = -4.e-6*t508*t1311*t1227;
  t2013 = -1.6e-11*t1889*t1227;
  t2015 = t2006 + t2011 + t2013;
  t2126 = 4.e-6*t508*t1311*t1351;
  t2129 = t1360*t1889;
  t2130 = 4.e-6*t1994*t1227;
  t2132 = t2126 + t2129 + t2130;
  t2115 = t508*t1311*t1167;
  t2116 = 4.e-6*t1351*t1889;
  t2117 = t1994*t1227;
  t2118 = t2115 + t2116 + t2117;
  t2156 = t1416*t1994;
  t2162 = t2156 + t2038 + t2042;
  p_output1[0]=1.;
  p_output1[1]=t1124*t1251 + t1268*t1300 + t1372*t1410 + t1427*t1437 + t1458*t1472 - 0.03875*(t1402*t1427 + t1376*t1458 + 4.e-6*t1372*t1474) + 0.14871*(4.e-6*t1402*t1427 + 4.e-6*t1458*t1474 + t1372*t1479) + 0.80321*(-4.e-6*t1372*t1402 - 1.*t1402*t1458 + t1427*t1509) - 1.*t1311*t1347*t616 + t704*t733 + t814*t867;
  p_output1[2]=t1251*t1567 + t1300*t1587 + t1410*t1610 + t1437*t1622 + t1472*t1657 - 0.03875*(4.e-6*t1474*t1610 + t1402*t1622 + t1376*t1657) + 0.80321*(-4.e-6*t1402*t1610 + t1509*t1622 - 1.*t1402*t1657) + 0.14871*(t1479*t1610 + 4.e-6*t1402*t1622 + 4.e-6*t1474*t1657) - 1.*t1347*t508*t619 + t1311*t508*t627*t733 - 1.*t1311*t508*t513*t867;
  p_output1[3]=t1251*t1743 + t1300*t1752 + t1410*t1762 + t1437*t1780 + t1472*t1790 - 0.03875*(4.e-6*t1474*t1762 + t1402*t1780 + t1376*t1790) + 0.80321*(-4.e-6*t1402*t1762 + t1509*t1780 - 1.*t1402*t1790) + 0.14871*(t1479*t1762 + 4.e-6*t1402*t1780 + 4.e-6*t1474*t1790) + t1721*t733 + t1732*t867;
  p_output1[4]=t1251*t1879 + t1300*t1889 + t1410*t1900 + t1437*t1905 + t1472*t1931 - 0.03875*(4.e-6*t1474*t1900 + t1402*t1905 + t1376*t1931) + 0.80321*(-4.e-6*t1402*t1900 + t1509*t1905 - 1.*t1402*t1931) + 0.14871*(t1479*t1900 + 4.e-6*t1402*t1905 + 4.e-6*t1474*t1931) + t1732*(-0.15121*t709 + t838) + t1862*(0.15121*t709 + t838);
  p_output1[5]=(-1.2484e-7 + 1.124840000016e-6*t1167 - 1.5499600000248e-7*t1227)*t1889 + (0.03874900000062*t1167 + 0.281210000008499*t1227)*t1994 + t1410*t2015 + t1437*t2034 + t1472*t2051 - 0.03875*(4.e-6*t1474*t2015 + t1402*t2034 + t1376*t2051) + 0.80321*(-4.e-6*t1402*t2015 + t1509*t2034 - 1.*t1402*t2051) + 0.14871*(t1479*t2015 + 4.e-6*t1402*t2034 + 4.e-6*t1474*t2051) + (4.9936e-13 + 0.281210000004*t1167 - 0.03874900000062*t1227)*t1311*t508;
  p_output1[6]=(5.136e-14 + 0.503210000008*t1376 - 0.03874900000062*t1402)*t2118 + (-1.284e-8 + 2.012840000032e-6*t1376 - 1.5499600000248e-7*t1402)*t2132 + (0.03874900000062*t1376 + 0.503210000016051*t1402)*t2162 + 0.14871*(-4.e-6*t1402*t2118 - 1.6e-11*t1402*t2132 + 4.e-6*t1376*t2162) - 0.03875*(-1.*t1402*t2118 - 4.e-6*t1402*t2132 + t1376*t2162) + 0.80321*(-1.*t1376*t2118 - 4.e-6*t1376*t2132 - 1.000000000016*t1402*t2162);
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

#include "J_foot_clearance_FlFootDiagonalStance1.hh"

namespace DiagonalStance1
{

void J_foot_clearance_FlFootDiagonalStance1_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
