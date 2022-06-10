/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:49:27 GMT+02:00
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
  double t896;
  double t520;
  double t805;
  double t902;
  double t1215;
  double t1217;
  double t1220;
  double t1178;
  double t1211;
  double t1224;
  double t1183;
  double t1227;
  double t919;
  double t1334;
  double t1348;
  double t1351;
  double t874;
  double t906;
  double t908;
  double t1221;
  double t1234;
  double t1253;
  double t1488;
  double t1276;
  double t1281;
  double t1284;
  double t1465;
  double t1356;
  double t1358;
  double t1361;
  double t1479;
  double t1481;
  double t1484;
  double t1495;
  double t1504;
  double t1514;
  double t1523;
  double t1525;
  double t1531;
  double t1548;
  double t1555;
  double t1558;
  double t1575;
  double t1580;
  double t1584;
  double t1325;
  double t1363;
  double t1441;
  double t1626;
  double t1629;
  double t1649;
  double t1655;
  double t1656;
  double t1659;
  double t1660;
  double t1661;
  double t1666;
  double t1681;
  double t1700;
  double t1701;
  double t1702;
  double t1725;
  double t1730;
  double t1732;
  double t1631;
  double t1633;
  double t1641;
  double t1710;
  double t1715;
  double t1743;
  double t1751;
  double t1756;
  double t1757;
  double t1765;
  double t1766;
  double t1769;
  double t1721;
  double t1733;
  double t1734;
  double t1758;
  double t1771;
  double t1772;
  double t1776;
  double t1777;
  double t1778;
  double t1020;
  double t1268;
  double t1273;
  double t1741;
  double t1807;
  double t1824;
  double t1831;
  double t1841;
  double t1853;
  double t1918;
  double t1933;
  t896 = Cos(var1[13]);
  t520 = Cos(var1[14]);
  t805 = Sin(var1[13]);
  t902 = Sin(var1[14]);
  t1215 = t896*t520;
  t1217 = t805*t902;
  t1220 = t1215 + t1217;
  t1178 = Cos(var1[4]);
  t1211 = Cos(var1[5]);
  t1224 = Sin(var1[12]);
  t1183 = Cos(var1[12]);
  t1227 = Sin(var1[5]);
  t919 = Sin(var1[4]);
  t1334 = t520*t805;
  t1348 = -1.*t896*t902;
  t1351 = t1334 + t1348;
  t874 = -1.*t520*t805;
  t906 = t896*t902;
  t908 = t874 + t906;
  t1221 = t1183*t1211*t1220;
  t1234 = -1.*t1224*t1220*t1227;
  t1253 = t1221 + t1234;
  t1488 = Sin(var1[3]);
  t1276 = -1.*t1211*t1224;
  t1281 = -1.*t1183*t1227;
  t1284 = t1276 + t1281;
  t1465 = Cos(var1[3]);
  t1356 = t1183*t1211*t1351;
  t1358 = -1.*t1224*t1351*t1227;
  t1361 = t1356 + t1358;
  t1479 = t1211*t1224*t1220;
  t1481 = t1183*t1220*t1227;
  t1484 = t1479 + t1481;
  t1495 = t1178*t908;
  t1504 = -1.*t919*t1253;
  t1514 = t1495 + t1504;
  t1523 = t1183*t1211;
  t1525 = -1.*t1224*t1227;
  t1531 = t1523 + t1525;
  t1548 = t1211*t1224*t1351;
  t1555 = t1183*t1351*t1227;
  t1558 = t1548 + t1555;
  t1575 = t1178*t1220;
  t1580 = -1.*t919*t1361;
  t1584 = t1575 + t1580;
  t1325 = t1220*t919;
  t1363 = t1178*t1361;
  t1441 = t1325 + t1363;
  t1626 = -1.*t1183;
  t1629 = 1. + t1626;
  t1649 = -1.*t896;
  t1655 = 1. + t1649;
  t1656 = 0.28121*t1655;
  t1659 = -1.*t520;
  t1660 = 1. + t1659;
  t1661 = 0.50321*t1660;
  t1666 = 0.19821*t520;
  t1681 = t1661 + t1666;
  t1700 = t896*t1681;
  t1701 = -0.305*t805*t902;
  t1702 = t1656 + t1700 + t1701;
  t1725 = 0.15121*t1629;
  t1730 = t1183*t1702;
  t1732 = t1725 + t1730;
  t1631 = -0.15121*t1629;
  t1633 = -0.15121*t1183;
  t1641 = -0.15121*t1224;
  t1710 = t1224*t1702;
  t1715 = t1631 + t1633 + t1641 + t1710;
  t1743 = 0.28121*t805;
  t1751 = -1.*t1681*t805;
  t1756 = -0.305*t896*t902;
  t1757 = t1743 + t1751 + t1756;
  t1765 = t1211*t1732;
  t1766 = -1.*t1715*t1227;
  t1769 = t1765 + t1766;
  t1721 = t1211*t1715;
  t1733 = t1732*t1227;
  t1734 = t1721 + t1733;
  t1758 = t1757*t919;
  t1771 = t1178*t1769;
  t1772 = t1758 + t1771;
  t1776 = t1178*t1757;
  t1777 = -1.*t919*t1769;
  t1778 = t1776 + t1777;
  t1020 = t908*t919;
  t1268 = t1178*t1253;
  t1273 = t1020 + t1268;
  t1741 = -1.*t1531*t1734;
  t1807 = t1558*t1734;
  t1824 = -1.*t1558*t1734;
  t1831 = t1484*t1734;
  t1841 = t1531*t1734;
  t1853 = -1.*t1484*t1734;
  t1918 = -1.*t1757*t1220;
  t1933 = t1757*t908;
  p_output1[0]=t1273;
  p_output1[1]=t1178*t1284;
  p_output1[2]=t1441;
  p_output1[3]=t1465*t1484 - 1.*t1488*t1514;
  p_output1[4]=t1465*t1531 + t1284*t1488*t919;
  p_output1[5]=t1465*t1558 - 1.*t1488*t1584;
  p_output1[6]=t1484*t1488 + t1465*t1514;
  p_output1[7]=t1488*t1531 - 1.*t1284*t1465*t919;
  p_output1[8]=t1488*t1558 + t1465*t1584;
  p_output1[9]=t1178*t1284*(t1441*t1772 + t1584*t1778 + t1807) + t1441*(t1741 - 1.*t1178*t1284*t1772 + t1284*t1778*t919);
  p_output1[10]=t1273*(-1.*t1441*t1772 - 1.*t1584*t1778 + t1824) + t1441*(t1273*t1772 + t1514*t1778 + t1831);
  p_output1[11]=t1178*t1284*(-1.*t1273*t1772 - 1.*t1514*t1778 + t1853) + t1273*(t1178*t1284*t1772 + t1841 - 1.*t1284*t1778*t919);
  p_output1[12]=t1558*(t1741 - 1.*t1284*t1769) + t1531*(t1220*t1757 + t1361*t1769 + t1807);
  p_output1[13]=t1484*(-1.*t1361*t1769 + t1824 + t1918) + t1558*(t1253*t1769 + t1831 + t1933);
  p_output1[14]=t1484*(t1284*t1769 + t1841) + t1531*(-1.*t1253*t1769 + t1853 - 1.*t1757*t908);
  p_output1[15]=t1220*(-1.*t1183*t1715 + t1224*t1732);
  p_output1[16]=t1220*(t1220*t1224*t1715 + t1183*t1220*t1732 + t1933) + (-1.*t1224*t1351*t1715 - 1.*t1183*t1351*t1732 + t1918)*t908;
  p_output1[17]=(t1183*t1715 - 1.*t1224*t1732)*t908;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=-0.15121 + t1220*(t1220*t1702 + t1933) + (-1.*t1351*t1702 + t1918)*t908;
  p_output1[38]=-0.15121*t1351 - 0.15121*t908;
  p_output1[39]=0.28121*t902 - 1.*t1681*t902 - 0.305*t520*t902;
  p_output1[40]=0;
  p_output1[41]=0.28121*t520 - 1.*t1681*t520 + 0.305*Power(t902,2);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=-0.305;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_FrFoot_ParallelStance.hh"

namespace SymFunction
{

void Jh_FrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
