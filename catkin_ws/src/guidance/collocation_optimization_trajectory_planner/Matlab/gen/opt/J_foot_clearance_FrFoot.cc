/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:18:49 GMT+01:00
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
  double t434;
  double t624;
  double t626;
  double t641;
  double t648;
  double t665;
  double t667;
  double t680;
  double t670;
  double t672;
  double t683;
  double t443;
  double t453;
  double t500;
  double t584;
  double t673;
  double t686;
  double t687;
  double t742;
  double t817;
  double t829;
  double t341;
  double t1011;
  double t1027;
  double t1040;
  double t1105;
  double t1108;
  double t1109;
  double t1131;
  double t1134;
  double t1140;
  double t1144;
  double t1239;
  double t1149;
  double t1159;
  double t1180;
  double t1197;
  double t1218;
  double t1220;
  double t1249;
  double t1250;
  double t1252;
  double t1257;
  double t1283;
  double t1286;
  double t1305;
  double t1308;
  double t1320;
  double t1326;
  double t653;
  double t668;
  double t431;
  double t455;
  double t541;
  double t586;
  double t605;
  double t690;
  double t691;
  double t898;
  double t960;
  double t979;
  double t985;
  double t997;
  double t1096;
  double t1100;
  double t1103;
  double t1143;
  double t1147;
  double t1148;
  double t1409;
  double t1412;
  double t1414;
  double t1423;
  double t1425;
  double t1427;
  double t1237;
  double t1238;
  double t1241;
  double t1242;
  double t1245;
  double t1265;
  double t1273;
  double t1275;
  double t1278;
  double t1279;
  double t1429;
  double t1431;
  double t1436;
  double t1439;
  double t1446;
  double t1450;
  double t1453;
  double t1461;
  double t1339;
  double t1345;
  double t1474;
  double t1476;
  double t1479;
  double t1480;
  double t1380;
  double t1382;
  double t1544;
  double t1545;
  double t1547;
  double t1560;
  double t1567;
  double t1572;
  double t1580;
  double t1590;
  double t1591;
  double t1597;
  double t1598;
  double t1599;
  double t1610;
  double t1611;
  double t1612;
  double t1618;
  double t1620;
  double t1628;
  double t1637;
  double t1638;
  double t1640;
  double t1704;
  double t1709;
  double t1711;
  double t1712;
  double t1721;
  double t1722;
  double t1724;
  double t1729;
  double t1735;
  double t1739;
  double t1742;
  double t1754;
  double t1756;
  double t1762;
  double t1775;
  double t1780;
  double t1785;
  double t1867;
  double t1868;
  double t1869;
  double t1873;
  double t1875;
  double t1876;
  double t1879;
  double t1882;
  double t1884;
  double t1885;
  double t1887;
  double t1892;
  double t1893;
  double t1898;
  double t1950;
  double t1952;
  double t1953;
  double t1954;
  double t1965;
  double t1969;
  double t1973;
  double t1991;
  double t1993;
  double t1994;
  double t1995;
  t434 = Cos(var1[10]);
  t624 = Sin(var1[3]);
  t626 = Cos(var1[9]);
  t641 = -1.*t626;
  t648 = 1. + t641;
  t665 = Sin(var1[9]);
  t667 = -0.15121*t665;
  t680 = Cos(var1[3]);
  t670 = Cos(var1[5]);
  t672 = Sin(var1[4]);
  t683 = Sin(var1[5]);
  t443 = -1.*t434;
  t453 = 1. + t443;
  t500 = -1. + t434;
  t584 = Sin(var1[10]);
  t673 = t670*t624*t672;
  t686 = t680*t683;
  t687 = t673 + t686;
  t742 = t680*t670;
  t817 = -1.*t624*t672*t683;
  t829 = t742 + t817;
  t341 = Cos(var1[4]);
  t1011 = -1.*t665*t687;
  t1027 = t626*t829;
  t1040 = t1011 + t1027;
  t1105 = t626*t687;
  t1108 = t665*t829;
  t1109 = t1105 + t1108;
  t1131 = Cos(var1[11]);
  t1134 = -1.*t1131;
  t1140 = 1. + t1134;
  t1144 = Sin(var1[11]);
  t1239 = -1. + t1131;
  t1149 = -1.*t341*t584*t624;
  t1159 = -4.e-6*t584*t1040;
  t1180 = -1.000000000016*t453;
  t1197 = 1. + t1180;
  t1218 = t1197*t1109;
  t1220 = t1149 + t1159 + t1218;
  t1249 = -1.*t434*t341*t624;
  t1250 = 4.e-6*t453*t1040;
  t1252 = -1.*t584*t1109;
  t1257 = t1249 + t1250 + t1252;
  t1283 = -4.e-6*t453*t341*t624;
  t1286 = 1.6e-11*t500;
  t1305 = 1. + t1286;
  t1308 = t1305*t1040;
  t1320 = 4.e-6*t584*t1109;
  t1326 = t1283 + t1308 + t1320;
  t653 = 0.15121*t648;
  t668 = t653 + t667;
  t431 = -4.9936e-13*var1[10];
  t455 = -0.038749*t453;
  t541 = 6.19984e-13*t500;
  t586 = -0.281210000004*t584;
  t605 = t431 + t455 + t541 + t586;
  t690 = -0.15121*t648;
  t691 = t690 + t667;
  t898 = -1.2484e-7*var1[10];
  t960 = 2.479936e-18*t453;
  t979 = -1.54996e-7*t500;
  t985 = 1.124840000016e-6*t584;
  t997 = t898 + t960 + t979 + t985;
  t1096 = 0.281210000008499*t453;
  t1100 = -0.03874900000062*t584;
  t1103 = t1096 + t1100;
  t1143 = 0.50315000001605*t1140;
  t1147 = -0.0398890000006382*t1144;
  t1148 = t1143 + t1147;
  t1409 = t680*t341*t670*t665;
  t1412 = t626*t680*t341*t683;
  t1414 = t1409 + t1412;
  t1423 = -1.*t626*t680*t341*t670;
  t1425 = t680*t341*t665*t683;
  t1427 = t1423 + t1425;
  t1237 = -5.04e-14*var1[11];
  t1238 = -0.039889*t1140;
  t1241 = 6.38224e-13*t1239;
  t1242 = -0.503150000008*t1144;
  t1245 = t1237 + t1238 + t1241 + t1242;
  t1265 = -1.26e-8*var1[11];
  t1273 = 2.552896e-18*t1140;
  t1275 = -1.59556e-7*t1239;
  t1278 = 2.012600000032e-6*t1144;
  t1279 = t1265 + t1273 + t1275 + t1278;
  t1429 = -1.*t680*t584*t672;
  t1431 = -4.e-6*t584*t1414;
  t1436 = t1197*t1427;
  t1439 = t1429 + t1431 + t1436;
  t1446 = -1.*t434*t680*t672;
  t1450 = 4.e-6*t453*t1414;
  t1453 = -1.*t584*t1427;
  t1461 = t1446 + t1450 + t1453;
  t1339 = 1.6e-11*t1239;
  t1345 = 1. + t1339;
  t1474 = -4.e-6*t453*t680*t672;
  t1476 = t1305*t1414;
  t1479 = 4.e-6*t584*t1427;
  t1480 = t1474 + t1476 + t1479;
  t1380 = -1.000000000016*t1140;
  t1382 = 1. + t1380;
  t1544 = t680*t670*t672;
  t1545 = -1.*t624*t683;
  t1547 = t1544 + t1545;
  t1560 = t670*t624;
  t1567 = t680*t672*t683;
  t1572 = t1560 + t1567;
  t1580 = t665*t1547;
  t1590 = t626*t1572;
  t1591 = t1580 + t1590;
  t1597 = t626*t1547;
  t1598 = -1.*t665*t1572;
  t1599 = t1597 + t1598;
  t1610 = 4.e-6*t584*t1591;
  t1611 = t1305*t1599;
  t1612 = t1610 + t1611;
  t1618 = -1.*t584*t1591;
  t1620 = 4.e-6*t453*t1599;
  t1628 = t1618 + t1620;
  t1637 = t1197*t1591;
  t1638 = -4.e-6*t584*t1599;
  t1640 = t1637 + t1638;
  t1704 = -0.15121*t626;
  t1709 = -1.*t680*t670*t672;
  t1711 = t624*t683;
  t1712 = t1709 + t1711;
  t1721 = -1.*t665*t1712;
  t1722 = t1721 + t1590;
  t1724 = -1.*t626*t1712;
  t1729 = t1724 + t1598;
  t1735 = 4.e-6*t584*t1722;
  t1739 = t1305*t1729;
  t1742 = t1735 + t1739;
  t1754 = -1.*t584*t1722;
  t1756 = 4.e-6*t453*t1729;
  t1762 = t1754 + t1756;
  t1775 = t1197*t1722;
  t1780 = -4.e-6*t584*t1729;
  t1785 = t1775 + t1780;
  t1867 = t626*t1712;
  t1868 = t665*t1572;
  t1869 = t1867 + t1868;
  t1873 = -1.*t680*t341*t584;
  t1875 = -1.*t434*t1869;
  t1876 = t1873 + t1735 + t1875;
  t1879 = 4.e-6*t680*t341*t584;
  t1882 = -1.6e-11*t584*t1722;
  t1884 = 4.e-6*t434*t1869;
  t1885 = t1879 + t1882 + t1884;
  t1887 = t434*t680*t341;
  t1892 = -4.e-6*t434*t1722;
  t1893 = -1.000000000016*t584*t1869;
  t1898 = t1887 + t1892 + t1893;
  t1950 = t680*t341*t584;
  t1952 = -4.e-6*t584*t1722;
  t1953 = t1197*t1869;
  t1954 = t1950 + t1952 + t1953;
  t1965 = 4.e-6*t453*t1722;
  t1969 = -1.*t584*t1869;
  t1973 = t1887 + t1965 + t1969;
  t1991 = 4.e-6*t453*t680*t341;
  t1993 = t1305*t1722;
  t1994 = 4.e-6*t584*t1869;
  t1995 = t1991 + t1993 + t1994;
  p_output1[0]=1.;
  p_output1[1]=t1103*t1109 + t1148*t1220 + t1245*t1257 + t1279*t1326 - 0.041195*(-1.*t1144*t1220 + t1131*t1257 + 4.e-6*t1140*t1326) - 0.14871*(4.e-6*t1144*t1220 + 4.e-6*t1140*t1257 + t1326*t1345) + 0.803147*(t1144*t1257 - 4.e-6*t1144*t1326 + t1220*t1382) - 1.*t341*t605*t624 + t668*t687 + t691*t829 + t1040*t997;
  p_output1[2]=t1103*t1427 + t1148*t1439 + t1245*t1461 + t1279*t1480 - 0.041195*(-1.*t1144*t1439 + t1131*t1461 + 4.e-6*t1140*t1480) + 0.803147*(t1382*t1439 + t1144*t1461 - 4.e-6*t1144*t1480) - 0.14871*(4.e-6*t1144*t1439 + 4.e-6*t1140*t1461 + t1345*t1480) - 1.*t341*t668*t670*t680 - 1.*t605*t672*t680 + t341*t680*t683*t691 + t1414*t997;
  p_output1[3]=t1103*t1591 + t1279*t1612 + t1245*t1628 + t1148*t1640 - 0.041195*(4.e-6*t1140*t1612 + t1131*t1628 - 1.*t1144*t1640) - 0.14871*(t1345*t1612 + 4.e-6*t1140*t1628 + 4.e-6*t1144*t1640) + 0.803147*(-4.e-6*t1144*t1612 + t1144*t1628 + t1382*t1640) + t1572*t668 + t1547*t691 + t1599*t997;
  p_output1[4]=t1103*t1722 + t1279*t1742 + t1245*t1762 + t1148*t1785 - 0.041195*(4.e-6*t1140*t1742 + t1131*t1762 - 1.*t1144*t1785) - 0.14871*(t1345*t1742 + 4.e-6*t1140*t1762 + 4.e-6*t1144*t1785) + 0.803147*(-4.e-6*t1144*t1742 + t1144*t1762 + t1382*t1785) + t1712*(t1704 + 0.15121*t665) + t1572*(t1704 + t667) + t1729*t997;
  p_output1[5]=t1245*t1876 + t1279*t1885 + t1148*t1898 - 0.041195*(t1131*t1876 + 4.e-6*t1140*t1885 - 1.*t1144*t1898) - 0.14871*(4.e-6*t1140*t1876 + t1345*t1885 + 4.e-6*t1144*t1898) + 0.803147*(t1144*t1876 - 4.e-6*t1144*t1885 + t1382*t1898) + t1722*(-1.2484e-7 + 1.124840000016e-6*t434 + 1.5499600000248e-7*t584) + t1869*(-0.03874900000062*t434 + 0.281210000008499*t584) + t341*(-4.9936e-13 + t1100 - 0.281210000004*t434)*t680;
  p_output1[6]=(-0.0398890000006382*t1131 + 0.50315000001605*t1144)*t1954 + (-5.04e-14 - 0.503150000008*t1131 + t1147)*t1973 + (-1.26e-8 + 2.012600000032e-6*t1131 + 1.59556000002553e-7*t1144)*t1995 + 0.803147*(-1.000000000016*t1144*t1954 + t1131*t1973 - 4.e-6*t1131*t1995) - 0.14871*(4.e-6*t1131*t1954 + 4.e-6*t1144*t1973 - 1.6e-11*t1144*t1995) - 0.041195*(-1.*t1131*t1954 - 1.*t1144*t1973 + 4.e-6*t1144*t1995);
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

#include "J_foot_clearance_FrFoot.hh"

namespace TrotStance2
{

void J_foot_clearance_FrFoot_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
