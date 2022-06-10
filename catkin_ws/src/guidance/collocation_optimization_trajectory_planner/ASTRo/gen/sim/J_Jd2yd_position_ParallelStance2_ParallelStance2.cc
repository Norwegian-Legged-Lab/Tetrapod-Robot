/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:31:56 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3)
{
  double t100;
  double t246;
  double t596;
  double t606;
  double t638;
  double t1528;
  double t1559;
  double t1569;
  double t1573;
  double t1597;
  double t1598;
  double t1610;
  double t1611;
  double t1612;
  double t1613;
  double t1619;
  double t1616;
  double t1621;
  double t1718;
  double t1746;
  double t1751;
  double t1614;
  double t1615;
  double t1617;
  double t1618;
  double t1632;
  double t1633;
  double t1696;
  double t1700;
  t100 = -1.*var3[0];
  t246 = t100 + var3[1];
  t596 = Power(t246,-5);
  t606 = t100 + var1[0];
  t638 = Power(t606,2);
  t1528 = Power(t246,-4);
  t1559 = 1/t246;
  t1569 = -1.*t1559*t606;
  t1573 = 1. + t1569;
  t1597 = Power(t246,-3);
  t1598 = Power(t1573,2);
  t1610 = Power(t246,-2);
  t1611 = Power(t1573,3);
  t1612 = 20.*t1610*t1611;
  t1613 = 60.*t1597*t606*t1598;
  t1619 = Power(t606,3);
  t1616 = 60.*t1528*t638*t1573;
  t1621 = 20.*t596*t1619;
  t1718 = Power(t246,-6);
  t1746 = -1.*t1610*t606;
  t1751 = t1559 + t1746;
  t1614 = -40.*t1610*t1611;
  t1615 = t1613 + t1614;
  t1617 = -120.*t1597*t606*t1598;
  t1618 = t1616 + t1617 + t1612;
  t1632 = -120.*t1528*t638*t1573;
  t1633 = t1621 + t1632 + t1613;
  t1696 = -40.*t596*t1619;
  t1700 = t1696 + t1616;
  p_output1[0]=-60.*t1597*t1598*var2[0] + 180.*t1597*t1598*var2[14] - 120.*t1528*t1573*t606*var2[14] - 180.*t1597*t1598*var2[28] + 360.*t1528*t1573*t606*var2[28] - 60.*t596*t638*var2[28] + 60.*t1597*t1598*var2[42] - 360.*t1528*t1573*t606*var2[42] + 180.*t596*t638*var2[42] + 120.*t1528*t1573*t606*var2[56] - 180.*t596*t638*var2[56] + 60.*t596*t638*var2[70];
  p_output1[1]=t1612;
  p_output1[2]=t1615;
  p_output1[3]=t1618;
  p_output1[4]=t1633;
  p_output1[5]=t1700;
  p_output1[6]=t1621;
  p_output1[7]=40.*t1597*t1611*var2[0] + 60.*t1598*t1610*t1751*var2[0] - 60.*t1597*t1598*var2[14] - 80.*t1597*t1611*var2[14] - 120.*t1598*t1610*t1751*var2[14] + 180.*t1528*t1598*t606*var2[14] + 120.*t1573*t1597*t1751*t606*var2[14] + 120.*t1597*t1598*var2[28] + 40.*t1597*t1611*var2[28] + 60.*t1598*t1610*t1751*var2[28] - 120.*t1528*t1573*t606*var2[28] - 360.*t1528*t1598*t606*var2[28] - 240.*t1573*t1597*t1751*t606*var2[28] + 60.*t1528*t1751*t638*var2[28] + 240.*t1573*t596*t638*var2[28] - 60.*t1597*t1598*var2[42] + 100.*t1619*t1718*var2[42] + 240.*t1528*t1573*t606*var2[42] + 180.*t1528*t1598*t606*var2[42] + 120.*t1573*t1597*t1751*t606*var2[42] - 120.*t1528*t1751*t638*var2[42] - 60.*t596*t638*var2[42] - 480.*t1573*t596*t638*var2[42] - 200.*t1619*t1718*var2[56] - 120.*t1528*t1573*t606*var2[56] + 60.*t1528*t1751*t638*var2[56] + 120.*t596*t638*var2[56] + 240.*t1573*t596*t638*var2[56] + 100.*t1619*t1718*var2[70] - 60.*t596*t638*var2[70];
  p_output1[8]=-40.*t1597*t1611*var2[0] + 60.*t1528*t1598*t606*var2[0] + 80.*t1597*t1611*var2[14] - 300.*t1528*t1598*t606*var2[14] + 120.*t1573*t596*t638*var2[14] - 40.*t1597*t1611*var2[28] + 60.*t1619*t1718*var2[28] + 420.*t1528*t1598*t606*var2[28] - 480.*t1573*t596*t638*var2[28] - 220.*t1619*t1718*var2[42] - 180.*t1528*t1598*t606*var2[42] + 600.*t1573*t596*t638*var2[42] + 260.*t1619*t1718*var2[56] - 240.*t1573*t596*t638*var2[56] - 100.*t1619*t1718*var2[70];
  p_output1[9]=-60.*t1597*t1598*var2[1] + 180.*t1597*t1598*var2[15] - 120.*t1528*t1573*t606*var2[15] - 180.*t1597*t1598*var2[29] + 360.*t1528*t1573*t606*var2[29] - 60.*t596*t638*var2[29] + 60.*t1597*t1598*var2[43] - 360.*t1528*t1573*t606*var2[43] + 180.*t596*t638*var2[43] + 120.*t1528*t1573*t606*var2[57] - 180.*t596*t638*var2[57] + 60.*t596*t638*var2[71];
  p_output1[10]=t1612;
  p_output1[11]=t1615;
  p_output1[12]=t1618;
  p_output1[13]=t1633;
  p_output1[14]=t1700;
  p_output1[15]=t1621;
  p_output1[16]=40.*t1597*t1611*var2[1] + 60.*t1598*t1610*t1751*var2[1] - 60.*t1597*t1598*var2[15] - 80.*t1597*t1611*var2[15] - 120.*t1598*t1610*t1751*var2[15] + 180.*t1528*t1598*t606*var2[15] + 120.*t1573*t1597*t1751*t606*var2[15] + 120.*t1597*t1598*var2[29] + 40.*t1597*t1611*var2[29] + 60.*t1598*t1610*t1751*var2[29] - 120.*t1528*t1573*t606*var2[29] - 360.*t1528*t1598*t606*var2[29] - 240.*t1573*t1597*t1751*t606*var2[29] + 60.*t1528*t1751*t638*var2[29] + 240.*t1573*t596*t638*var2[29] - 60.*t1597*t1598*var2[43] + 100.*t1619*t1718*var2[43] + 240.*t1528*t1573*t606*var2[43] + 180.*t1528*t1598*t606*var2[43] + 120.*t1573*t1597*t1751*t606*var2[43] - 120.*t1528*t1751*t638*var2[43] - 60.*t596*t638*var2[43] - 480.*t1573*t596*t638*var2[43] - 200.*t1619*t1718*var2[57] - 120.*t1528*t1573*t606*var2[57] + 60.*t1528*t1751*t638*var2[57] + 120.*t596*t638*var2[57] + 240.*t1573*t596*t638*var2[57] + 100.*t1619*t1718*var2[71] - 60.*t596*t638*var2[71];
  p_output1[17]=-40.*t1597*t1611*var2[1] + 60.*t1528*t1598*t606*var2[1] + 80.*t1597*t1611*var2[15] - 300.*t1528*t1598*t606*var2[15] + 120.*t1573*t596*t638*var2[15] - 40.*t1597*t1611*var2[29] + 60.*t1619*t1718*var2[29] + 420.*t1528*t1598*t606*var2[29] - 480.*t1573*t596*t638*var2[29] - 220.*t1619*t1718*var2[43] - 180.*t1528*t1598*t606*var2[43] + 600.*t1573*t596*t638*var2[43] + 260.*t1619*t1718*var2[57] - 240.*t1573*t596*t638*var2[57] - 100.*t1619*t1718*var2[71];
  p_output1[18]=-60.*t1597*t1598*var2[2] + 180.*t1597*t1598*var2[16] - 120.*t1528*t1573*t606*var2[16] - 180.*t1597*t1598*var2[30] + 360.*t1528*t1573*t606*var2[30] - 60.*t596*t638*var2[30] + 60.*t1597*t1598*var2[44] - 360.*t1528*t1573*t606*var2[44] + 180.*t596*t638*var2[44] + 120.*t1528*t1573*t606*var2[58] - 180.*t596*t638*var2[58] + 60.*t596*t638*var2[72];
  p_output1[19]=t1612;
  p_output1[20]=t1615;
  p_output1[21]=t1618;
  p_output1[22]=t1633;
  p_output1[23]=t1700;
  p_output1[24]=t1621;
  p_output1[25]=40.*t1597*t1611*var2[2] + 60.*t1598*t1610*t1751*var2[2] - 60.*t1597*t1598*var2[16] - 80.*t1597*t1611*var2[16] - 120.*t1598*t1610*t1751*var2[16] + 180.*t1528*t1598*t606*var2[16] + 120.*t1573*t1597*t1751*t606*var2[16] + 120.*t1597*t1598*var2[30] + 40.*t1597*t1611*var2[30] + 60.*t1598*t1610*t1751*var2[30] - 120.*t1528*t1573*t606*var2[30] - 360.*t1528*t1598*t606*var2[30] - 240.*t1573*t1597*t1751*t606*var2[30] + 60.*t1528*t1751*t638*var2[30] + 240.*t1573*t596*t638*var2[30] - 60.*t1597*t1598*var2[44] + 100.*t1619*t1718*var2[44] + 240.*t1528*t1573*t606*var2[44] + 180.*t1528*t1598*t606*var2[44] + 120.*t1573*t1597*t1751*t606*var2[44] - 120.*t1528*t1751*t638*var2[44] - 60.*t596*t638*var2[44] - 480.*t1573*t596*t638*var2[44] - 200.*t1619*t1718*var2[58] - 120.*t1528*t1573*t606*var2[58] + 60.*t1528*t1751*t638*var2[58] + 120.*t596*t638*var2[58] + 240.*t1573*t596*t638*var2[58] + 100.*t1619*t1718*var2[72] - 60.*t596*t638*var2[72];
  p_output1[26]=-40.*t1597*t1611*var2[2] + 60.*t1528*t1598*t606*var2[2] + 80.*t1597*t1611*var2[16] - 300.*t1528*t1598*t606*var2[16] + 120.*t1573*t596*t638*var2[16] - 40.*t1597*t1611*var2[30] + 60.*t1619*t1718*var2[30] + 420.*t1528*t1598*t606*var2[30] - 480.*t1573*t596*t638*var2[30] - 220.*t1619*t1718*var2[44] - 180.*t1528*t1598*t606*var2[44] + 600.*t1573*t596*t638*var2[44] + 260.*t1619*t1718*var2[58] - 240.*t1573*t596*t638*var2[58] - 100.*t1619*t1718*var2[72];
  p_output1[27]=-60.*t1597*t1598*var2[3] + 180.*t1597*t1598*var2[17] - 120.*t1528*t1573*t606*var2[17] - 180.*t1597*t1598*var2[31] + 360.*t1528*t1573*t606*var2[31] - 60.*t596*t638*var2[31] + 60.*t1597*t1598*var2[45] - 360.*t1528*t1573*t606*var2[45] + 180.*t596*t638*var2[45] + 120.*t1528*t1573*t606*var2[59] - 180.*t596*t638*var2[59] + 60.*t596*t638*var2[73];
  p_output1[28]=t1612;
  p_output1[29]=t1615;
  p_output1[30]=t1618;
  p_output1[31]=t1633;
  p_output1[32]=t1700;
  p_output1[33]=t1621;
  p_output1[34]=40.*t1597*t1611*var2[3] + 60.*t1598*t1610*t1751*var2[3] - 60.*t1597*t1598*var2[17] - 80.*t1597*t1611*var2[17] - 120.*t1598*t1610*t1751*var2[17] + 180.*t1528*t1598*t606*var2[17] + 120.*t1573*t1597*t1751*t606*var2[17] + 120.*t1597*t1598*var2[31] + 40.*t1597*t1611*var2[31] + 60.*t1598*t1610*t1751*var2[31] - 120.*t1528*t1573*t606*var2[31] - 360.*t1528*t1598*t606*var2[31] - 240.*t1573*t1597*t1751*t606*var2[31] + 60.*t1528*t1751*t638*var2[31] + 240.*t1573*t596*t638*var2[31] - 60.*t1597*t1598*var2[45] + 100.*t1619*t1718*var2[45] + 240.*t1528*t1573*t606*var2[45] + 180.*t1528*t1598*t606*var2[45] + 120.*t1573*t1597*t1751*t606*var2[45] - 120.*t1528*t1751*t638*var2[45] - 60.*t596*t638*var2[45] - 480.*t1573*t596*t638*var2[45] - 200.*t1619*t1718*var2[59] - 120.*t1528*t1573*t606*var2[59] + 60.*t1528*t1751*t638*var2[59] + 120.*t596*t638*var2[59] + 240.*t1573*t596*t638*var2[59] + 100.*t1619*t1718*var2[73] - 60.*t596*t638*var2[73];
  p_output1[35]=-40.*t1597*t1611*var2[3] + 60.*t1528*t1598*t606*var2[3] + 80.*t1597*t1611*var2[17] - 300.*t1528*t1598*t606*var2[17] + 120.*t1573*t596*t638*var2[17] - 40.*t1597*t1611*var2[31] + 60.*t1619*t1718*var2[31] + 420.*t1528*t1598*t606*var2[31] - 480.*t1573*t596*t638*var2[31] - 220.*t1619*t1718*var2[45] - 180.*t1528*t1598*t606*var2[45] + 600.*t1573*t596*t638*var2[45] + 260.*t1619*t1718*var2[59] - 240.*t1573*t596*t638*var2[59] - 100.*t1619*t1718*var2[73];
  p_output1[36]=-60.*t1597*t1598*var2[4] + 180.*t1597*t1598*var2[18] - 120.*t1528*t1573*t606*var2[18] - 180.*t1597*t1598*var2[32] + 360.*t1528*t1573*t606*var2[32] - 60.*t596*t638*var2[32] + 60.*t1597*t1598*var2[46] - 360.*t1528*t1573*t606*var2[46] + 180.*t596*t638*var2[46] + 120.*t1528*t1573*t606*var2[60] - 180.*t596*t638*var2[60] + 60.*t596*t638*var2[74];
  p_output1[37]=t1612;
  p_output1[38]=t1615;
  p_output1[39]=t1618;
  p_output1[40]=t1633;
  p_output1[41]=t1700;
  p_output1[42]=t1621;
  p_output1[43]=40.*t1597*t1611*var2[4] + 60.*t1598*t1610*t1751*var2[4] - 60.*t1597*t1598*var2[18] - 80.*t1597*t1611*var2[18] - 120.*t1598*t1610*t1751*var2[18] + 180.*t1528*t1598*t606*var2[18] + 120.*t1573*t1597*t1751*t606*var2[18] + 120.*t1597*t1598*var2[32] + 40.*t1597*t1611*var2[32] + 60.*t1598*t1610*t1751*var2[32] - 120.*t1528*t1573*t606*var2[32] - 360.*t1528*t1598*t606*var2[32] - 240.*t1573*t1597*t1751*t606*var2[32] + 60.*t1528*t1751*t638*var2[32] + 240.*t1573*t596*t638*var2[32] - 60.*t1597*t1598*var2[46] + 100.*t1619*t1718*var2[46] + 240.*t1528*t1573*t606*var2[46] + 180.*t1528*t1598*t606*var2[46] + 120.*t1573*t1597*t1751*t606*var2[46] - 120.*t1528*t1751*t638*var2[46] - 60.*t596*t638*var2[46] - 480.*t1573*t596*t638*var2[46] - 200.*t1619*t1718*var2[60] - 120.*t1528*t1573*t606*var2[60] + 60.*t1528*t1751*t638*var2[60] + 120.*t596*t638*var2[60] + 240.*t1573*t596*t638*var2[60] + 100.*t1619*t1718*var2[74] - 60.*t596*t638*var2[74];
  p_output1[44]=-40.*t1597*t1611*var2[4] + 60.*t1528*t1598*t606*var2[4] + 80.*t1597*t1611*var2[18] - 300.*t1528*t1598*t606*var2[18] + 120.*t1573*t596*t638*var2[18] - 40.*t1597*t1611*var2[32] + 60.*t1619*t1718*var2[32] + 420.*t1528*t1598*t606*var2[32] - 480.*t1573*t596*t638*var2[32] - 220.*t1619*t1718*var2[46] - 180.*t1528*t1598*t606*var2[46] + 600.*t1573*t596*t638*var2[46] + 260.*t1619*t1718*var2[60] - 240.*t1573*t596*t638*var2[60] - 100.*t1619*t1718*var2[74];
  p_output1[45]=-60.*t1597*t1598*var2[5] + 180.*t1597*t1598*var2[19] - 120.*t1528*t1573*t606*var2[19] - 180.*t1597*t1598*var2[33] + 360.*t1528*t1573*t606*var2[33] - 60.*t596*t638*var2[33] + 60.*t1597*t1598*var2[47] - 360.*t1528*t1573*t606*var2[47] + 180.*t596*t638*var2[47] + 120.*t1528*t1573*t606*var2[61] - 180.*t596*t638*var2[61] + 60.*t596*t638*var2[75];
  p_output1[46]=t1612;
  p_output1[47]=t1615;
  p_output1[48]=t1618;
  p_output1[49]=t1633;
  p_output1[50]=t1700;
  p_output1[51]=t1621;
  p_output1[52]=40.*t1597*t1611*var2[5] + 60.*t1598*t1610*t1751*var2[5] - 60.*t1597*t1598*var2[19] - 80.*t1597*t1611*var2[19] - 120.*t1598*t1610*t1751*var2[19] + 180.*t1528*t1598*t606*var2[19] + 120.*t1573*t1597*t1751*t606*var2[19] + 120.*t1597*t1598*var2[33] + 40.*t1597*t1611*var2[33] + 60.*t1598*t1610*t1751*var2[33] - 120.*t1528*t1573*t606*var2[33] - 360.*t1528*t1598*t606*var2[33] - 240.*t1573*t1597*t1751*t606*var2[33] + 60.*t1528*t1751*t638*var2[33] + 240.*t1573*t596*t638*var2[33] - 60.*t1597*t1598*var2[47] + 100.*t1619*t1718*var2[47] + 240.*t1528*t1573*t606*var2[47] + 180.*t1528*t1598*t606*var2[47] + 120.*t1573*t1597*t1751*t606*var2[47] - 120.*t1528*t1751*t638*var2[47] - 60.*t596*t638*var2[47] - 480.*t1573*t596*t638*var2[47] - 200.*t1619*t1718*var2[61] - 120.*t1528*t1573*t606*var2[61] + 60.*t1528*t1751*t638*var2[61] + 120.*t596*t638*var2[61] + 240.*t1573*t596*t638*var2[61] + 100.*t1619*t1718*var2[75] - 60.*t596*t638*var2[75];
  p_output1[53]=-40.*t1597*t1611*var2[5] + 60.*t1528*t1598*t606*var2[5] + 80.*t1597*t1611*var2[19] - 300.*t1528*t1598*t606*var2[19] + 120.*t1573*t596*t638*var2[19] - 40.*t1597*t1611*var2[33] + 60.*t1619*t1718*var2[33] + 420.*t1528*t1598*t606*var2[33] - 480.*t1573*t596*t638*var2[33] - 220.*t1619*t1718*var2[47] - 180.*t1528*t1598*t606*var2[47] + 600.*t1573*t596*t638*var2[47] + 260.*t1619*t1718*var2[61] - 240.*t1573*t596*t638*var2[61] - 100.*t1619*t1718*var2[75];
  p_output1[54]=-60.*t1597*t1598*var2[6] + 180.*t1597*t1598*var2[20] - 120.*t1528*t1573*t606*var2[20] - 180.*t1597*t1598*var2[34] + 360.*t1528*t1573*t606*var2[34] - 60.*t596*t638*var2[34] + 60.*t1597*t1598*var2[48] - 360.*t1528*t1573*t606*var2[48] + 180.*t596*t638*var2[48] + 120.*t1528*t1573*t606*var2[62] - 180.*t596*t638*var2[62] + 60.*t596*t638*var2[76];
  p_output1[55]=t1612;
  p_output1[56]=t1615;
  p_output1[57]=t1618;
  p_output1[58]=t1633;
  p_output1[59]=t1700;
  p_output1[60]=t1621;
  p_output1[61]=40.*t1597*t1611*var2[6] + 60.*t1598*t1610*t1751*var2[6] - 60.*t1597*t1598*var2[20] - 80.*t1597*t1611*var2[20] - 120.*t1598*t1610*t1751*var2[20] + 180.*t1528*t1598*t606*var2[20] + 120.*t1573*t1597*t1751*t606*var2[20] + 120.*t1597*t1598*var2[34] + 40.*t1597*t1611*var2[34] + 60.*t1598*t1610*t1751*var2[34] - 120.*t1528*t1573*t606*var2[34] - 360.*t1528*t1598*t606*var2[34] - 240.*t1573*t1597*t1751*t606*var2[34] + 60.*t1528*t1751*t638*var2[34] + 240.*t1573*t596*t638*var2[34] - 60.*t1597*t1598*var2[48] + 100.*t1619*t1718*var2[48] + 240.*t1528*t1573*t606*var2[48] + 180.*t1528*t1598*t606*var2[48] + 120.*t1573*t1597*t1751*t606*var2[48] - 120.*t1528*t1751*t638*var2[48] - 60.*t596*t638*var2[48] - 480.*t1573*t596*t638*var2[48] - 200.*t1619*t1718*var2[62] - 120.*t1528*t1573*t606*var2[62] + 60.*t1528*t1751*t638*var2[62] + 120.*t596*t638*var2[62] + 240.*t1573*t596*t638*var2[62] + 100.*t1619*t1718*var2[76] - 60.*t596*t638*var2[76];
  p_output1[62]=-40.*t1597*t1611*var2[6] + 60.*t1528*t1598*t606*var2[6] + 80.*t1597*t1611*var2[20] - 300.*t1528*t1598*t606*var2[20] + 120.*t1573*t596*t638*var2[20] - 40.*t1597*t1611*var2[34] + 60.*t1619*t1718*var2[34] + 420.*t1528*t1598*t606*var2[34] - 480.*t1573*t596*t638*var2[34] - 220.*t1619*t1718*var2[48] - 180.*t1528*t1598*t606*var2[48] + 600.*t1573*t596*t638*var2[48] + 260.*t1619*t1718*var2[62] - 240.*t1573*t596*t638*var2[62] - 100.*t1619*t1718*var2[76];
  p_output1[63]=-60.*t1597*t1598*var2[7] + 180.*t1597*t1598*var2[21] - 120.*t1528*t1573*t606*var2[21] - 180.*t1597*t1598*var2[35] + 360.*t1528*t1573*t606*var2[35] - 60.*t596*t638*var2[35] + 60.*t1597*t1598*var2[49] - 360.*t1528*t1573*t606*var2[49] + 180.*t596*t638*var2[49] + 120.*t1528*t1573*t606*var2[63] - 180.*t596*t638*var2[63] + 60.*t596*t638*var2[77];
  p_output1[64]=t1612;
  p_output1[65]=t1615;
  p_output1[66]=t1618;
  p_output1[67]=t1633;
  p_output1[68]=t1700;
  p_output1[69]=t1621;
  p_output1[70]=40.*t1597*t1611*var2[7] + 60.*t1598*t1610*t1751*var2[7] - 60.*t1597*t1598*var2[21] - 80.*t1597*t1611*var2[21] - 120.*t1598*t1610*t1751*var2[21] + 180.*t1528*t1598*t606*var2[21] + 120.*t1573*t1597*t1751*t606*var2[21] + 120.*t1597*t1598*var2[35] + 40.*t1597*t1611*var2[35] + 60.*t1598*t1610*t1751*var2[35] - 120.*t1528*t1573*t606*var2[35] - 360.*t1528*t1598*t606*var2[35] - 240.*t1573*t1597*t1751*t606*var2[35] + 60.*t1528*t1751*t638*var2[35] + 240.*t1573*t596*t638*var2[35] - 60.*t1597*t1598*var2[49] + 100.*t1619*t1718*var2[49] + 240.*t1528*t1573*t606*var2[49] + 180.*t1528*t1598*t606*var2[49] + 120.*t1573*t1597*t1751*t606*var2[49] - 120.*t1528*t1751*t638*var2[49] - 60.*t596*t638*var2[49] - 480.*t1573*t596*t638*var2[49] - 200.*t1619*t1718*var2[63] - 120.*t1528*t1573*t606*var2[63] + 60.*t1528*t1751*t638*var2[63] + 120.*t596*t638*var2[63] + 240.*t1573*t596*t638*var2[63] + 100.*t1619*t1718*var2[77] - 60.*t596*t638*var2[77];
  p_output1[71]=-40.*t1597*t1611*var2[7] + 60.*t1528*t1598*t606*var2[7] + 80.*t1597*t1611*var2[21] - 300.*t1528*t1598*t606*var2[21] + 120.*t1573*t596*t638*var2[21] - 40.*t1597*t1611*var2[35] + 60.*t1619*t1718*var2[35] + 420.*t1528*t1598*t606*var2[35] - 480.*t1573*t596*t638*var2[35] - 220.*t1619*t1718*var2[49] - 180.*t1528*t1598*t606*var2[49] + 600.*t1573*t596*t638*var2[49] + 260.*t1619*t1718*var2[63] - 240.*t1573*t596*t638*var2[63] - 100.*t1619*t1718*var2[77];
  p_output1[72]=-60.*t1597*t1598*var2[8] + 180.*t1597*t1598*var2[22] - 120.*t1528*t1573*t606*var2[22] - 180.*t1597*t1598*var2[36] + 360.*t1528*t1573*t606*var2[36] - 60.*t596*t638*var2[36] + 60.*t1597*t1598*var2[50] - 360.*t1528*t1573*t606*var2[50] + 180.*t596*t638*var2[50] + 120.*t1528*t1573*t606*var2[64] - 180.*t596*t638*var2[64] + 60.*t596*t638*var2[78];
  p_output1[73]=t1612;
  p_output1[74]=t1615;
  p_output1[75]=t1618;
  p_output1[76]=t1633;
  p_output1[77]=t1700;
  p_output1[78]=t1621;
  p_output1[79]=40.*t1597*t1611*var2[8] + 60.*t1598*t1610*t1751*var2[8] - 60.*t1597*t1598*var2[22] - 80.*t1597*t1611*var2[22] - 120.*t1598*t1610*t1751*var2[22] + 180.*t1528*t1598*t606*var2[22] + 120.*t1573*t1597*t1751*t606*var2[22] + 120.*t1597*t1598*var2[36] + 40.*t1597*t1611*var2[36] + 60.*t1598*t1610*t1751*var2[36] - 120.*t1528*t1573*t606*var2[36] - 360.*t1528*t1598*t606*var2[36] - 240.*t1573*t1597*t1751*t606*var2[36] + 60.*t1528*t1751*t638*var2[36] + 240.*t1573*t596*t638*var2[36] - 60.*t1597*t1598*var2[50] + 100.*t1619*t1718*var2[50] + 240.*t1528*t1573*t606*var2[50] + 180.*t1528*t1598*t606*var2[50] + 120.*t1573*t1597*t1751*t606*var2[50] - 120.*t1528*t1751*t638*var2[50] - 60.*t596*t638*var2[50] - 480.*t1573*t596*t638*var2[50] - 200.*t1619*t1718*var2[64] - 120.*t1528*t1573*t606*var2[64] + 60.*t1528*t1751*t638*var2[64] + 120.*t596*t638*var2[64] + 240.*t1573*t596*t638*var2[64] + 100.*t1619*t1718*var2[78] - 60.*t596*t638*var2[78];
  p_output1[80]=-40.*t1597*t1611*var2[8] + 60.*t1528*t1598*t606*var2[8] + 80.*t1597*t1611*var2[22] - 300.*t1528*t1598*t606*var2[22] + 120.*t1573*t596*t638*var2[22] - 40.*t1597*t1611*var2[36] + 60.*t1619*t1718*var2[36] + 420.*t1528*t1598*t606*var2[36] - 480.*t1573*t596*t638*var2[36] - 220.*t1619*t1718*var2[50] - 180.*t1528*t1598*t606*var2[50] + 600.*t1573*t596*t638*var2[50] + 260.*t1619*t1718*var2[64] - 240.*t1573*t596*t638*var2[64] - 100.*t1619*t1718*var2[78];
  p_output1[81]=-60.*t1597*t1598*var2[9] + 180.*t1597*t1598*var2[23] - 120.*t1528*t1573*t606*var2[23] - 180.*t1597*t1598*var2[37] + 360.*t1528*t1573*t606*var2[37] - 60.*t596*t638*var2[37] + 60.*t1597*t1598*var2[51] - 360.*t1528*t1573*t606*var2[51] + 180.*t596*t638*var2[51] + 120.*t1528*t1573*t606*var2[65] - 180.*t596*t638*var2[65] + 60.*t596*t638*var2[79];
  p_output1[82]=t1612;
  p_output1[83]=t1615;
  p_output1[84]=t1618;
  p_output1[85]=t1633;
  p_output1[86]=t1700;
  p_output1[87]=t1621;
  p_output1[88]=40.*t1597*t1611*var2[9] + 60.*t1598*t1610*t1751*var2[9] - 60.*t1597*t1598*var2[23] - 80.*t1597*t1611*var2[23] - 120.*t1598*t1610*t1751*var2[23] + 180.*t1528*t1598*t606*var2[23] + 120.*t1573*t1597*t1751*t606*var2[23] + 120.*t1597*t1598*var2[37] + 40.*t1597*t1611*var2[37] + 60.*t1598*t1610*t1751*var2[37] - 120.*t1528*t1573*t606*var2[37] - 360.*t1528*t1598*t606*var2[37] - 240.*t1573*t1597*t1751*t606*var2[37] + 60.*t1528*t1751*t638*var2[37] + 240.*t1573*t596*t638*var2[37] - 60.*t1597*t1598*var2[51] + 100.*t1619*t1718*var2[51] + 240.*t1528*t1573*t606*var2[51] + 180.*t1528*t1598*t606*var2[51] + 120.*t1573*t1597*t1751*t606*var2[51] - 120.*t1528*t1751*t638*var2[51] - 60.*t596*t638*var2[51] - 480.*t1573*t596*t638*var2[51] - 200.*t1619*t1718*var2[65] - 120.*t1528*t1573*t606*var2[65] + 60.*t1528*t1751*t638*var2[65] + 120.*t596*t638*var2[65] + 240.*t1573*t596*t638*var2[65] + 100.*t1619*t1718*var2[79] - 60.*t596*t638*var2[79];
  p_output1[89]=-40.*t1597*t1611*var2[9] + 60.*t1528*t1598*t606*var2[9] + 80.*t1597*t1611*var2[23] - 300.*t1528*t1598*t606*var2[23] + 120.*t1573*t596*t638*var2[23] - 40.*t1597*t1611*var2[37] + 60.*t1619*t1718*var2[37] + 420.*t1528*t1598*t606*var2[37] - 480.*t1573*t596*t638*var2[37] - 220.*t1619*t1718*var2[51] - 180.*t1528*t1598*t606*var2[51] + 600.*t1573*t596*t638*var2[51] + 260.*t1619*t1718*var2[65] - 240.*t1573*t596*t638*var2[65] - 100.*t1619*t1718*var2[79];
  p_output1[90]=-60.*t1597*t1598*var2[10] + 180.*t1597*t1598*var2[24] - 120.*t1528*t1573*t606*var2[24] - 180.*t1597*t1598*var2[38] + 360.*t1528*t1573*t606*var2[38] - 60.*t596*t638*var2[38] + 60.*t1597*t1598*var2[52] - 360.*t1528*t1573*t606*var2[52] + 180.*t596*t638*var2[52] + 120.*t1528*t1573*t606*var2[66] - 180.*t596*t638*var2[66] + 60.*t596*t638*var2[80];
  p_output1[91]=t1612;
  p_output1[92]=t1615;
  p_output1[93]=t1618;
  p_output1[94]=t1633;
  p_output1[95]=t1700;
  p_output1[96]=t1621;
  p_output1[97]=40.*t1597*t1611*var2[10] + 60.*t1598*t1610*t1751*var2[10] - 60.*t1597*t1598*var2[24] - 80.*t1597*t1611*var2[24] - 120.*t1598*t1610*t1751*var2[24] + 180.*t1528*t1598*t606*var2[24] + 120.*t1573*t1597*t1751*t606*var2[24] + 120.*t1597*t1598*var2[38] + 40.*t1597*t1611*var2[38] + 60.*t1598*t1610*t1751*var2[38] - 120.*t1528*t1573*t606*var2[38] - 360.*t1528*t1598*t606*var2[38] - 240.*t1573*t1597*t1751*t606*var2[38] + 60.*t1528*t1751*t638*var2[38] + 240.*t1573*t596*t638*var2[38] - 60.*t1597*t1598*var2[52] + 100.*t1619*t1718*var2[52] + 240.*t1528*t1573*t606*var2[52] + 180.*t1528*t1598*t606*var2[52] + 120.*t1573*t1597*t1751*t606*var2[52] - 120.*t1528*t1751*t638*var2[52] - 60.*t596*t638*var2[52] - 480.*t1573*t596*t638*var2[52] - 200.*t1619*t1718*var2[66] - 120.*t1528*t1573*t606*var2[66] + 60.*t1528*t1751*t638*var2[66] + 120.*t596*t638*var2[66] + 240.*t1573*t596*t638*var2[66] + 100.*t1619*t1718*var2[80] - 60.*t596*t638*var2[80];
  p_output1[98]=-40.*t1597*t1611*var2[10] + 60.*t1528*t1598*t606*var2[10] + 80.*t1597*t1611*var2[24] - 300.*t1528*t1598*t606*var2[24] + 120.*t1573*t596*t638*var2[24] - 40.*t1597*t1611*var2[38] + 60.*t1619*t1718*var2[38] + 420.*t1528*t1598*t606*var2[38] - 480.*t1573*t596*t638*var2[38] - 220.*t1619*t1718*var2[52] - 180.*t1528*t1598*t606*var2[52] + 600.*t1573*t596*t638*var2[52] + 260.*t1619*t1718*var2[66] - 240.*t1573*t596*t638*var2[66] - 100.*t1619*t1718*var2[80];
  p_output1[99]=-60.*t1597*t1598*var2[11] + 180.*t1597*t1598*var2[25] - 120.*t1528*t1573*t606*var2[25] - 180.*t1597*t1598*var2[39] + 360.*t1528*t1573*t606*var2[39] - 60.*t596*t638*var2[39] + 60.*t1597*t1598*var2[53] - 360.*t1528*t1573*t606*var2[53] + 180.*t596*t638*var2[53] + 120.*t1528*t1573*t606*var2[67] - 180.*t596*t638*var2[67] + 60.*t596*t638*var2[81];
  p_output1[100]=t1612;
  p_output1[101]=t1615;
  p_output1[102]=t1618;
  p_output1[103]=t1633;
  p_output1[104]=t1700;
  p_output1[105]=t1621;
  p_output1[106]=40.*t1597*t1611*var2[11] + 60.*t1598*t1610*t1751*var2[11] - 60.*t1597*t1598*var2[25] - 80.*t1597*t1611*var2[25] - 120.*t1598*t1610*t1751*var2[25] + 180.*t1528*t1598*t606*var2[25] + 120.*t1573*t1597*t1751*t606*var2[25] + 120.*t1597*t1598*var2[39] + 40.*t1597*t1611*var2[39] + 60.*t1598*t1610*t1751*var2[39] - 120.*t1528*t1573*t606*var2[39] - 360.*t1528*t1598*t606*var2[39] - 240.*t1573*t1597*t1751*t606*var2[39] + 60.*t1528*t1751*t638*var2[39] + 240.*t1573*t596*t638*var2[39] - 60.*t1597*t1598*var2[53] + 100.*t1619*t1718*var2[53] + 240.*t1528*t1573*t606*var2[53] + 180.*t1528*t1598*t606*var2[53] + 120.*t1573*t1597*t1751*t606*var2[53] - 120.*t1528*t1751*t638*var2[53] - 60.*t596*t638*var2[53] - 480.*t1573*t596*t638*var2[53] - 200.*t1619*t1718*var2[67] - 120.*t1528*t1573*t606*var2[67] + 60.*t1528*t1751*t638*var2[67] + 120.*t596*t638*var2[67] + 240.*t1573*t596*t638*var2[67] + 100.*t1619*t1718*var2[81] - 60.*t596*t638*var2[81];
  p_output1[107]=-40.*t1597*t1611*var2[11] + 60.*t1528*t1598*t606*var2[11] + 80.*t1597*t1611*var2[25] - 300.*t1528*t1598*t606*var2[25] + 120.*t1573*t596*t638*var2[25] - 40.*t1597*t1611*var2[39] + 60.*t1619*t1718*var2[39] + 420.*t1528*t1598*t606*var2[39] - 480.*t1573*t596*t638*var2[39] - 220.*t1619*t1718*var2[53] - 180.*t1528*t1598*t606*var2[53] + 600.*t1573*t596*t638*var2[53] + 260.*t1619*t1718*var2[67] - 240.*t1573*t596*t638*var2[67] - 100.*t1619*t1718*var2[81];
  p_output1[108]=-60.*t1597*t1598*var2[12] + 180.*t1597*t1598*var2[26] - 120.*t1528*t1573*t606*var2[26] - 180.*t1597*t1598*var2[40] + 360.*t1528*t1573*t606*var2[40] - 60.*t596*t638*var2[40] + 60.*t1597*t1598*var2[54] - 360.*t1528*t1573*t606*var2[54] + 180.*t596*t638*var2[54] + 120.*t1528*t1573*t606*var2[68] - 180.*t596*t638*var2[68] + 60.*t596*t638*var2[82];
  p_output1[109]=t1612;
  p_output1[110]=t1615;
  p_output1[111]=t1618;
  p_output1[112]=t1633;
  p_output1[113]=t1700;
  p_output1[114]=t1621;
  p_output1[115]=40.*t1597*t1611*var2[12] + 60.*t1598*t1610*t1751*var2[12] - 60.*t1597*t1598*var2[26] - 80.*t1597*t1611*var2[26] - 120.*t1598*t1610*t1751*var2[26] + 180.*t1528*t1598*t606*var2[26] + 120.*t1573*t1597*t1751*t606*var2[26] + 120.*t1597*t1598*var2[40] + 40.*t1597*t1611*var2[40] + 60.*t1598*t1610*t1751*var2[40] - 120.*t1528*t1573*t606*var2[40] - 360.*t1528*t1598*t606*var2[40] - 240.*t1573*t1597*t1751*t606*var2[40] + 60.*t1528*t1751*t638*var2[40] + 240.*t1573*t596*t638*var2[40] - 60.*t1597*t1598*var2[54] + 100.*t1619*t1718*var2[54] + 240.*t1528*t1573*t606*var2[54] + 180.*t1528*t1598*t606*var2[54] + 120.*t1573*t1597*t1751*t606*var2[54] - 120.*t1528*t1751*t638*var2[54] - 60.*t596*t638*var2[54] - 480.*t1573*t596*t638*var2[54] - 200.*t1619*t1718*var2[68] - 120.*t1528*t1573*t606*var2[68] + 60.*t1528*t1751*t638*var2[68] + 120.*t596*t638*var2[68] + 240.*t1573*t596*t638*var2[68] + 100.*t1619*t1718*var2[82] - 60.*t596*t638*var2[82];
  p_output1[116]=-40.*t1597*t1611*var2[12] + 60.*t1528*t1598*t606*var2[12] + 80.*t1597*t1611*var2[26] - 300.*t1528*t1598*t606*var2[26] + 120.*t1573*t596*t638*var2[26] - 40.*t1597*t1611*var2[40] + 60.*t1619*t1718*var2[40] + 420.*t1528*t1598*t606*var2[40] - 480.*t1573*t596*t638*var2[40] - 220.*t1619*t1718*var2[54] - 180.*t1528*t1598*t606*var2[54] + 600.*t1573*t596*t638*var2[54] + 260.*t1619*t1718*var2[68] - 240.*t1573*t596*t638*var2[68] - 100.*t1619*t1718*var2[82];
  p_output1[117]=-60.*t1597*t1598*var2[13] + 180.*t1597*t1598*var2[27] - 120.*t1528*t1573*t606*var2[27] - 180.*t1597*t1598*var2[41] + 360.*t1528*t1573*t606*var2[41] - 60.*t596*t638*var2[41] + 60.*t1597*t1598*var2[55] - 360.*t1528*t1573*t606*var2[55] + 180.*t596*t638*var2[55] + 120.*t1528*t1573*t606*var2[69] - 180.*t596*t638*var2[69] + 60.*t596*t638*var2[83];
  p_output1[118]=t1612;
  p_output1[119]=t1615;
  p_output1[120]=t1618;
  p_output1[121]=t1633;
  p_output1[122]=t1700;
  p_output1[123]=t1621;
  p_output1[124]=40.*t1597*t1611*var2[13] + 60.*t1598*t1610*t1751*var2[13] - 60.*t1597*t1598*var2[27] - 80.*t1597*t1611*var2[27] - 120.*t1598*t1610*t1751*var2[27] + 180.*t1528*t1598*t606*var2[27] + 120.*t1573*t1597*t1751*t606*var2[27] + 120.*t1597*t1598*var2[41] + 40.*t1597*t1611*var2[41] + 60.*t1598*t1610*t1751*var2[41] - 120.*t1528*t1573*t606*var2[41] - 360.*t1528*t1598*t606*var2[41] - 240.*t1573*t1597*t1751*t606*var2[41] + 60.*t1528*t1751*t638*var2[41] + 240.*t1573*t596*t638*var2[41] - 60.*t1597*t1598*var2[55] + 100.*t1619*t1718*var2[55] + 240.*t1528*t1573*t606*var2[55] + 180.*t1528*t1598*t606*var2[55] + 120.*t1573*t1597*t1751*t606*var2[55] - 120.*t1528*t1751*t638*var2[55] - 60.*t596*t638*var2[55] - 480.*t1573*t596*t638*var2[55] - 200.*t1619*t1718*var2[69] - 120.*t1528*t1573*t606*var2[69] + 60.*t1528*t1751*t638*var2[69] + 120.*t596*t638*var2[69] + 240.*t1573*t596*t638*var2[69] + 100.*t1619*t1718*var2[83] - 60.*t596*t638*var2[83];
  p_output1[125]=-40.*t1597*t1611*var2[13] + 60.*t1528*t1598*t606*var2[13] + 80.*t1597*t1611*var2[27] - 300.*t1528*t1598*t606*var2[27] + 120.*t1573*t596*t638*var2[27] - 40.*t1597*t1611*var2[41] + 60.*t1619*t1718*var2[41] + 420.*t1528*t1598*t606*var2[41] - 480.*t1573*t596*t638*var2[41] - 220.*t1619*t1718*var2[55] - 180.*t1528*t1598*t606*var2[55] + 600.*t1573*t596*t638*var2[55] + 260.*t1619*t1718*var2[69] - 240.*t1573*t596*t638*var2[69] - 100.*t1619*t1718*var2[83];
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

  double *var1,*var2,*var3;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 3)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Three input(s) required (var1,var2,var3).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 84 && ncols == 1) && 
      !(mrows == 1 && ncols == 84))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 126, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "J_Jd2yd_position_ParallelStance2_ParallelStance2.hh"

namespace SymFunction
{

void J_Jd2yd_position_ParallelStance2_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
