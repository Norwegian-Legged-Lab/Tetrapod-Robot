/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:10:46 GMT+01:00
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
  double t362;
  double t414;
  double t432;
  double t471;
  double t276;
  double t441;
  double t475;
  double t479;
  double t517;
  double t519;
  double t547;
  double t551;
  double t554;
  double t558;
  double t351;
  double t352;
  double t561;
  double t568;
  double t587;
  double t714;
  double t638;
  double t659;
  double t666;
  double t685;
  double t686;
  double t693;
  double t700;
  double t626;
  double t719;
  double t730;
  double t731;
  double t735;
  double t738;
  double t740;
  double t621;
  double t780;
  double t813;
  double t823;
  double t705;
  double t748;
  double t752;
  double t856;
  double t619;
  double t493;
  double t560;
  double t591;
  double t598;
  double t600;
  double t759;
  double t875;
  double t885;
  double t947;
  double t920;
  double t934;
  double t944;
  double t915;
  double t972;
  double t977;
  double t984;
  double t1038;
  double t1045;
  double t1050;
  double t1065;
  double t1071;
  double t1079;
  double t1081;
  double t1092;
  double t1098;
  double t1102;
  double t1108;
  double t1137;
  double t1138;
  double t1163;
  double t1174;
  double t1175;
  double t1180;
  double t1189;
  double t1190;
  double t1204;
  double t1216;
  double t1296;
  double t1303;
  double t1305;
  double t1306;
  double t1301;
  double t1308;
  double t1336;
  double t1338;
  double t1340;
  double t1356;
  double t1436;
  double t1438;
  double t1443;
  double t1444;
  double t1445;
  double t1449;
  double t1454;
  double t1496;
  double t1509;
  double t1514;
  double t1532;
  double t1543;
  double t1546;
  double t1547;
  double t1561;
  double t1569;
  double t1570;
  double t1391;
  double t1393;
  double t1400;
  double t1403;
  double t1417;
  double t1419;
  double t1429;
  double t1481;
  double t1541;
  double t1574;
  double t1575;
  double t1578;
  double t1581;
  double t1586;
  double t1591;
  double t1596;
  double t1597;
  double t1374;
  double t1375;
  double t1377;
  double t1337;
  double t1368;
  double t1370;
  double t1616;
  double t1629;
  double t1632;
  double t1633;
  double t1399;
  double t1577;
  double t1600;
  double t1606;
  double t1641;
  double t1647;
  double t1648;
  double t1652;
  double t1657;
  double t1658;
  double t1665;
  double t1666;
  double t1669;
  double t1670;
  double t1679;
  double t1681;
  double t1682;
  double t1684;
  double t1707;
  double t1710;
  double t1725;
  double t1649;
  double t1659;
  double t1660;
  double t1232;
  double t1236;
  double t1253;
  double t1181;
  double t1218;
  double t1227;
  double t1613;
  double t1637;
  double t1638;
  double t1057;
  double t1100;
  double t1141;
  double t1145;
  double t1158;
  double t1231;
  double t1260;
  double t1263;
  double t1283;
  double t1288;
  double t1705;
  double t1731;
  double t1733;
  double t1755;
  double t1766;
  double t1768;
  double t1793;
  double t1798;
  double t1804;
  double t1373;
  double t1380;
  double t1388;
  double t1639;
  double t1805;
  double t1858;
  double t1840;
  double t1914;
  double t1985;
  double t1988;
  double t2001;
  double t2004;
  double t2009;
  double t2012;
  double t2018;
  double t1811;
  double t1819;
  double t1828;
  double t603;
  double t904;
  double t905;
  double t1739;
  double t1749;
  double t1752;
  double t2075;
  double t2094;
  double t2140;
  double t2121;
  double t2246;
  double t2247;
  double t2249;
  double t2251;
  double t2262;
  double t2266;
  double t2267;
  double t2326;
  double t2352;
  double t2395;
  double t2382;
  double t2606;
  double t2608;
  double t2610;
  double t2614;
  double t2572;
  double t2587;
  double t2589;
  double t2592;
  t362 = Cos(var1[11]);
  t414 = -1.*t362;
  t432 = 1. + t414;
  t471 = Sin(var1[11]);
  t276 = Cos(var1[10]);
  t441 = -1.7408e-8*t432;
  t475 = -3.999964e-6*t471;
  t479 = t441 + t475;
  t517 = Sin(var1[10]);
  t519 = -1.000000000016*t432;
  t547 = 1. + t519;
  t551 = 0.999991*t547;
  t554 = 0.004352*t471;
  t558 = t551 + t554;
  t351 = -1.*t276;
  t352 = 1. + t351;
  t561 = -0.004352*t362;
  t568 = 0.999991*t471;
  t587 = t561 + t568;
  t714 = Cos(var1[9]);
  t638 = -1. + t276;
  t659 = 1.6e-11*t638;
  t666 = 1. + t659;
  t685 = t666*t479;
  t686 = -4.e-6*t517*t558;
  t693 = 4.e-6*t352*t587;
  t700 = 0. + t685 + t686 + t693;
  t626 = Sin(var1[9]);
  t719 = 4.e-6*t517*t479;
  t730 = -1.000000000016*t352;
  t731 = 1. + t730;
  t735 = t731*t558;
  t738 = -1.*t517*t587;
  t740 = 0. + t719 + t735 + t738;
  t621 = Cos(var1[5]);
  t780 = t714*t700;
  t813 = t626*t740;
  t823 = 0. + t780 + t813;
  t705 = -1.*t626*t700;
  t748 = t714*t740;
  t752 = 0. + t705 + t748;
  t856 = Sin(var1[5]);
  t619 = Cos(var1[4]);
  t493 = 4.e-6*t352*t479;
  t560 = t517*t558;
  t591 = t276*t587;
  t598 = 0. + t493 + t560 + t591;
  t600 = Sin(var1[4]);
  t759 = t621*t752;
  t875 = -1.*t823*t856;
  t885 = 0. + t759 + t875;
  t947 = Sin(var1[3]);
  t920 = t621*t823;
  t934 = t752*t856;
  t944 = 0. + t920 + t934;
  t915 = Cos(var1[3]);
  t972 = t619*t598;
  t977 = -1.*t600*t885;
  t984 = 0. + t972 + t977;
  t1038 = 0.004352*t547;
  t1045 = -0.9999910000159999*t471;
  t1050 = t1038 + t1045;
  t1065 = 1.6e-11*t432;
  t1071 = -1. + t1065;
  t1079 = 4.e-6*t1071;
  t1081 = 3.999964e-6*t432;
  t1092 = -1.7408e-8*t471;
  t1098 = t1079 + t1081 + t1092;
  t1102 = -1. + t362;
  t1108 = 1.6e-11*t1102;
  t1137 = 0.999991*t362;
  t1138 = t1108 + t1137 + t554;
  t1163 = -4.e-6*t517*t1050;
  t1174 = t666*t1098;
  t1175 = 4.e-6*t352*t1138;
  t1180 = 0. + t1163 + t1174 + t1175;
  t1189 = t731*t1050;
  t1190 = 4.e-6*t517*t1098;
  t1204 = -1.*t517*t1138;
  t1216 = 0. + t1189 + t1190 + t1204;
  t1296 = -1. + t1065 + t1108;
  t1303 = 4.e-6*t1102;
  t1305 = -4.e-6*t362;
  t1306 = t1303 + t1305;
  t1301 = t666*t1296;
  t1308 = 4.e-6*t352*t1306;
  t1336 = t1301 + t1308;
  t1338 = 4.e-6*t1296*t517;
  t1340 = -1.*t1306*t517;
  t1356 = t1338 + t1340;
  t1436 = -1.26e-8*var1[11];
  t1438 = 1. + t1108;
  t1443 = -0.14871*t1438;
  t1444 = -1.64779999997447e-7*t432;
  t1445 = -1.59556e-7*t1102;
  t1449 = -1.199987999968e-6*t471;
  t1454 = t1436 + t1443 + t1444 + t1445 + t1449;
  t1496 = 0.803147*t547;
  t1509 = 0.50315000001605*t432;
  t1514 = 0.00130540515936178*t471;
  t1532 = t1496 + t1509 + t1514;
  t1543 = -5.04e-14*var1[11];
  t1546 = -0.03988959484*t432;
  t1547 = 6.38224e-13*t1102;
  t1561 = -0.041195*t362;
  t1569 = 0.299996999992*t471;
  t1570 = t1543 + t1546 + t1547 + t1561 + t1569;
  t1391 = -1.*t714;
  t1393 = 1. + t1391;
  t1400 = -0.15121*t626;
  t1403 = -1.2484e-7*var1[10];
  t1417 = 2.479936e-18*t352;
  t1419 = -1.54996e-7*t638;
  t1429 = 1.124840000016e-6*t517;
  t1481 = t666*t1454;
  t1541 = -4.e-6*t517*t1532;
  t1574 = 4.e-6*t352*t1570;
  t1575 = t1403 + t1417 + t1419 + t1429 + t1481 + t1541 + t1574;
  t1578 = 0.281210000008499*t352;
  t1581 = -0.03874900000062*t517;
  t1586 = 4.e-6*t517*t1454;
  t1591 = t731*t1532;
  t1596 = -1.*t517*t1570;
  t1597 = t1578 + t1581 + t1586 + t1591 + t1596;
  t1374 = -1.*t1336*t626;
  t1375 = t714*t1356;
  t1377 = t1374 + t1375;
  t1337 = t714*t1336;
  t1368 = t626*t1356;
  t1370 = t1337 + t1368;
  t1616 = 0.15121*t1393;
  t1629 = -1.*t626*t1575;
  t1632 = t714*t1597;
  t1633 = t1616 + t1400 + t1629 + t1632;
  t1399 = -0.15121*t1393;
  t1577 = t714*t1575;
  t1600 = t626*t1597;
  t1606 = t1399 + t1400 + t1577 + t1600;
  t1641 = 4.e-6*t352*t1296;
  t1647 = t276*t1306;
  t1648 = t1641 + t1647;
  t1652 = t621*t1377;
  t1657 = -1.*t1370*t856;
  t1658 = t1652 + t1657;
  t1665 = -4.9936e-13*var1[10];
  t1666 = -0.038749*t352;
  t1669 = 6.19984e-13*t638;
  t1670 = -0.281210000004*t517;
  t1679 = 4.e-6*t352*t1454;
  t1681 = t517*t1532;
  t1682 = t276*t1570;
  t1684 = 0. + t1665 + t1666 + t1669 + t1670 + t1679 + t1681 + t1682;
  t1707 = t621*t1633;
  t1710 = -1.*t1606*t856;
  t1725 = 0. + t1707 + t1710;
  t1649 = t1648*t600;
  t1659 = t619*t1658;
  t1660 = t1649 + t1659;
  t1232 = t714*t1180;
  t1236 = t626*t1216;
  t1253 = 0. + t1232 + t1236;
  t1181 = -1.*t626*t1180;
  t1218 = t714*t1216;
  t1227 = 0. + t1181 + t1218;
  t1613 = t621*t1606;
  t1637 = t1633*t856;
  t1638 = 0. + t1613 + t1637;
  t1057 = t517*t1050;
  t1100 = 4.e-6*t352*t1098;
  t1141 = t276*t1138;
  t1145 = 0. + t1057 + t1100 + t1141;
  t1158 = t1145*t600;
  t1231 = t621*t1227;
  t1260 = -1.*t1253*t856;
  t1263 = 0. + t1231 + t1260;
  t1283 = t619*t1263;
  t1288 = 0. + t1158 + t1283;
  t1705 = t1684*t600;
  t1731 = t619*t1725;
  t1733 = 0. + t1705 + t1731;
  t1755 = t619*t1684;
  t1766 = -1.*t600*t1725;
  t1768 = 0. + t1755 + t1766;
  t1793 = t621*t1253;
  t1798 = t1227*t856;
  t1804 = 0. + t1793 + t1798;
  t1373 = t621*t1370;
  t1380 = t1377*t856;
  t1388 = t1373 + t1380;
  t1639 = t1388*t1638;
  t1805 = -1.*t1804*t1638;
  t1858 = -1.*t1145*t1684;
  t1840 = t1648*t1684;
  t1914 = t1665 + t1666 + t1669 + t1670 + t1679 + t1681 + t1682;
  t1985 = -1.*t1454*t1098;
  t1988 = -1.*t1050*t1532;
  t2001 = -1.*t1138*t1570;
  t2004 = t1985 + t1988 + t2001;
  t2009 = t1296*t1454;
  t2012 = t1306*t1570;
  t2018 = t2009 + t2012;
  t1811 = t619*t1145;
  t1819 = -1.*t600*t1263;
  t1828 = 0. + t1811 + t1819;
  t603 = t598*t600;
  t904 = t619*t885;
  t905 = 0. + t603 + t904;
  t1739 = t1648*t619;
  t1749 = -1.*t600*t1658;
  t1752 = t1739 + t1749;
  t2075 = -1.*t1388*t1638;
  t2094 = t1638*t944;
  t2140 = t1684*t598;
  t2121 = -1.*t1648*t1684;
  t2246 = t479*t1454;
  t2247 = t1532*t558;
  t2249 = t1570*t587;
  t2251 = t2246 + t2247 + t2249;
  t2262 = -1.*t1296*t1454;
  t2266 = -1.*t1306*t1570;
  t2267 = t2262 + t2266;
  t2326 = t1804*t1638;
  t2352 = -1.*t1638*t944;
  t2395 = -1.*t1684*t598;
  t2382 = t1145*t1684;
  t2606 = t1454*t1098;
  t2608 = t1050*t1532;
  t2610 = t1138*t1570;
  t2614 = t2606 + t2608 + t2610;
  t2572 = -1.*t479*t1454;
  t2587 = -1.*t1532*t558;
  t2589 = -1.*t1570*t587;
  t2592 = t2572 + t2587 + t2589;
  p_output1[0]=t905;
  p_output1[1]=0. + t915*t944 - 1.*t947*t984;
  p_output1[2]=0. + t944*t947 + t915*t984;
  p_output1[3]=t1288*(t1639 + t1660*t1733 + t1752*t1768) + t1660*(-1.*t1288*t1733 + t1805 - 1.*t1768*t1828);
  p_output1[4]=t1804*(t1639 + t1658*t1725 + t1840) + t1388*(-1.*t1263*t1725 + t1805 + t1858);
  p_output1[5]=t1145*(t1370*t1606 + t1377*t1633 + t1840) + t1648*(-1.*t1253*t1606 - 1.*t1227*t1633 + t1858);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t1648*(-1.*t1180*t1575 - 1.*t1216*t1597 - 1.*t1145*t1914) + t1145*(t1336*t1575 + t1356*t1597 + t1648*t1914) - 0.15121*t700 - 0.15121*t740;
  p_output1[10]=-1.*t1296*t2004 - 1.*t1098*t2018 + 4.e-6*(-1.*t1306*t2004 - 1.*t1138*t2018) + 1.e-6*t479 - 0.038749*t558 - 0.28121*t587;
  p_output1[11]=-1.9353204325022392e-7;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t1288;
  p_output1[19]=0. + t1804*t915 - 1.*t1828*t947;
  p_output1[20]=0. + t1828*t915 + t1804*t947;
  p_output1[21]=(-1.*t1660*t1733 - 1.*t1752*t1768 + t2075)*t905 + t1660*(t2094 + t1733*t905 + t1768*t984);
  p_output1[22]=t1388*(t2094 + t2140 + t1725*t885) + (-1.*t1658*t1725 + t2075 + t2121)*t944;
  p_output1[23]=(-1.*t1370*t1606 - 1.*t1377*t1633 + t2121)*t598 + t1648*(t2140 + t1633*t752 + t1606*t823);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.15121*t1180 - 0.15121*t1216 + (-1.*t1336*t1575 - 1.*t1356*t1597 - 1.*t1648*t1914)*t598 + t1648*(t1914*t598 + t1575*t700 + t1597*t740);
  p_output1[28]=-0.038749*t1050 + 1.e-6*t1098 - 0.28121*t1138 - 1.*t1296*t2251 - 1.*t2267*t479 + 4.e-6*(-1.*t1306*t2251 - 1.*t2267*t587);
  p_output1[29]=0.29999998115510645;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t1660;
  p_output1[37]=t1388*t915 - 1.*t1752*t947;
  p_output1[38]=t1752*t915 + t1388*t947;
  p_output1[39]=(t1288*t1733 + t1768*t1828 + t2326)*t905 + t1288*(t2352 - 1.*t1733*t905 - 1.*t1768*t984);
  p_output1[40]=t1804*(t2352 + t2395 - 1.*t1725*t885) + (t1263*t1725 + t2326 + t2382)*t944;
  p_output1[41]=(t1253*t1606 + t1227*t1633 + t2382)*t598 + t1145*(t2395 - 1.*t1633*t752 - 1.*t1606*t823);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=-0.15121*t1336 - 0.15121*t1356 + (t1180*t1575 + t1216*t1597 + t1145*t1914)*t598 + t1145*(-1.*t1914*t598 - 1.*t1575*t700 - 1.*t1597*t740);
  p_output1[46]=1.e-6*t1296 - 0.28121*t1306 - 1.*t1098*t2592 - 1.*t2614*t479 + 4.e-6*(-1.*t1138*t2592 - 1.*t2614*t587);
  p_output1[47]=1.1914820871506078e-8;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fFrFoot_map_DiagonalStance.hh"

namespace SymFunction
{

void fFrFoot_map_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
