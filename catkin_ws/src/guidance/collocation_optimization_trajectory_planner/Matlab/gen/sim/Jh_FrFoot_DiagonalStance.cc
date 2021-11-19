/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:10:33 GMT+01:00
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
  double t128;
  double t240;
  double t255;
  double t326;
  double t10;
  double t302;
  double t333;
  double t337;
  double t437;
  double t449;
  double t492;
  double t502;
  double t524;
  double t526;
  double t25;
  double t109;
  double t567;
  double t583;
  double t601;
  double t706;
  double t644;
  double t651;
  double t661;
  double t668;
  double t675;
  double t679;
  double t687;
  double t631;
  double t707;
  double t708;
  double t711;
  double t728;
  double t734;
  double t744;
  double t614;
  double t628;
  double t629;
  double t842;
  double t852;
  double t861;
  double t895;
  double t896;
  double t925;
  double t931;
  double t932;
  double t938;
  double t950;
  double t953;
  double t961;
  double t974;
  double t990;
  double t995;
  double t1007;
  double t1008;
  double t1016;
  double t1018;
  double t1020;
  double t1024;
  double t805;
  double t1129;
  double t1135;
  double t1141;
  double t1164;
  double t1200;
  double t1203;
  double t1207;
  double t1218;
  double t1220;
  double t1230;
  double t774;
  double t782;
  double t788;
  double t694;
  double t749;
  double t753;
  double t363;
  double t565;
  double t611;
  double t612;
  double t767;
  double t810;
  double t820;
  double t1264;
  double t1095;
  double t1099;
  double t1101;
  double t1015;
  double t1056;
  double t1064;
  double t1282;
  double t891;
  double t948;
  double t978;
  double t983;
  double t1083;
  double t1107;
  double t1115;
  double t1244;
  double t1246;
  double t1249;
  double t1208;
  double t1233;
  double t1234;
  double t1134;
  double t1166;
  double t1169;
  double t1243;
  double t1255;
  double t1257;
  double t1273;
  double t1274;
  double t1277;
  double t1283;
  double t1285;
  double t1286;
  double t1294;
  double t1298;
  double t1304;
  double t1318;
  double t1319;
  double t1322;
  double t1329;
  double t1336;
  double t1339;
  double t1354;
  double t1357;
  double t1358;
  double t988;
  double t1116;
  double t1125;
  double t1459;
  double t1460;
  double t1468;
  double t1469;
  double t1474;
  double t1478;
  double t1480;
  double t1504;
  double t1508;
  double t1514;
  double t1517;
  double t1530;
  double t1539;
  double t1545;
  double t1547;
  double t1548;
  double t1549;
  double t1404;
  double t1406;
  double t1442;
  double t1443;
  double t1448;
  double t1455;
  double t1458;
  double t1493;
  double t1529;
  double t1553;
  double t1558;
  double t1565;
  double t1567;
  double t1568;
  double t1571;
  double t1573;
  double t1594;
  double t1182;
  double t1258;
  double t1262;
  double t1611;
  double t1625;
  double t1627;
  double t1631;
  double t1413;
  double t1560;
  double t1599;
  double t1603;
  double t1676;
  double t1686;
  double t1689;
  double t1699;
  double t1700;
  double t1712;
  double t1713;
  double t1718;
  double t1726;
  double t1731;
  double t1740;
  double t1610;
  double t1642;
  double t1646;
  double t1725;
  double t1751;
  double t1753;
  double t1768;
  double t1769;
  double t1770;
  double t623;
  double t825;
  double t832;
  double t1654;
  double t1812;
  double t1856;
  double t1867;
  double t1971;
  double t2030;
  double t2137;
  double t2113;
  double t2203;
  double t2173;
  double t2239;
  double t2231;
  double t2422;
  double t2626;
  double t2627;
  double t2636;
  double t2640;
  double t2655;
  double t2661;
  double t2673;
  double t2728;
  double t2729;
  double t2730;
  double t2735;
  double t2745;
  double t2748;
  double t2753;
  double t2827;
  double t2834;
  double t2835;
  double t2841;
  double t2803;
  double t2809;
  double t2816;
  double t2817;
  t128 = Cos(var1[11]);
  t240 = -1.*t128;
  t255 = 1. + t240;
  t326 = Sin(var1[11]);
  t10 = Cos(var1[10]);
  t302 = -1.7408e-8*t255;
  t333 = -3.999964e-6*t326;
  t337 = t302 + t333;
  t437 = Sin(var1[10]);
  t449 = -1.000000000016*t255;
  t492 = 1. + t449;
  t502 = 0.999991*t492;
  t524 = 0.004352*t326;
  t526 = t502 + t524;
  t25 = -1.*t10;
  t109 = 1. + t25;
  t567 = -0.004352*t128;
  t583 = 0.999991*t326;
  t601 = t567 + t583;
  t706 = Cos(var1[9]);
  t644 = -1. + t10;
  t651 = 1.6e-11*t644;
  t661 = 1. + t651;
  t668 = t661*t337;
  t675 = -4.e-6*t437*t526;
  t679 = 4.e-6*t109*t601;
  t687 = 0. + t668 + t675 + t679;
  t631 = Sin(var1[9]);
  t707 = 4.e-6*t437*t337;
  t708 = -1.000000000016*t109;
  t711 = 1. + t708;
  t728 = t711*t526;
  t734 = -1.*t437*t601;
  t744 = 0. + t707 + t728 + t734;
  t614 = Sin(var1[4]);
  t628 = Cos(var1[4]);
  t629 = Cos(var1[5]);
  t842 = 0.004352*t492;
  t852 = -0.9999910000159999*t326;
  t861 = t842 + t852;
  t895 = 1.6e-11*t255;
  t896 = -1. + t895;
  t925 = 4.e-6*t896;
  t931 = 3.999964e-6*t255;
  t932 = -1.7408e-8*t326;
  t938 = t925 + t931 + t932;
  t950 = -1. + t128;
  t953 = 1.6e-11*t950;
  t961 = 0.999991*t128;
  t974 = t953 + t961 + t524;
  t990 = -4.e-6*t437*t861;
  t995 = t661*t938;
  t1007 = 4.e-6*t109*t974;
  t1008 = 0. + t990 + t995 + t1007;
  t1016 = t711*t861;
  t1018 = 4.e-6*t437*t938;
  t1020 = -1.*t437*t974;
  t1024 = 0. + t1016 + t1018 + t1020;
  t805 = Sin(var1[5]);
  t1129 = -1. + t895 + t953;
  t1135 = 4.e-6*t950;
  t1141 = -4.e-6*t128;
  t1164 = t1135 + t1141;
  t1200 = t661*t1129;
  t1203 = 4.e-6*t109*t1164;
  t1207 = t1200 + t1203;
  t1218 = 4.e-6*t1129*t437;
  t1220 = -1.*t1164*t437;
  t1230 = t1218 + t1220;
  t774 = t706*t687;
  t782 = t631*t744;
  t788 = 0. + t774 + t782;
  t694 = -1.*t631*t687;
  t749 = t706*t744;
  t753 = 0. + t694 + t749;
  t363 = 4.e-6*t109*t337;
  t565 = t437*t526;
  t611 = t10*t601;
  t612 = 0. + t363 + t565 + t611;
  t767 = t629*t753;
  t810 = -1.*t788*t805;
  t820 = 0. + t767 + t810;
  t1264 = Cos(var1[3]);
  t1095 = t706*t1008;
  t1099 = t631*t1024;
  t1101 = 0. + t1095 + t1099;
  t1015 = -1.*t631*t1008;
  t1056 = t706*t1024;
  t1064 = 0. + t1015 + t1056;
  t1282 = Sin(var1[3]);
  t891 = t437*t861;
  t948 = 4.e-6*t109*t938;
  t978 = t10*t974;
  t983 = 0. + t891 + t948 + t978;
  t1083 = t629*t1064;
  t1107 = -1.*t1101*t805;
  t1115 = 0. + t1083 + t1107;
  t1244 = t706*t1207;
  t1246 = t631*t1230;
  t1249 = t1244 + t1246;
  t1208 = -1.*t1207*t631;
  t1233 = t706*t1230;
  t1234 = t1208 + t1233;
  t1134 = 4.e-6*t109*t1129;
  t1166 = t10*t1164;
  t1169 = t1134 + t1166;
  t1243 = t629*t1234;
  t1255 = -1.*t1249*t805;
  t1257 = t1243 + t1255;
  t1273 = t629*t788;
  t1274 = t753*t805;
  t1277 = 0. + t1273 + t1274;
  t1283 = t628*t612;
  t1285 = -1.*t614*t820;
  t1286 = 0. + t1283 + t1285;
  t1294 = t629*t1101;
  t1298 = t1064*t805;
  t1304 = 0. + t1294 + t1298;
  t1318 = t628*t983;
  t1319 = -1.*t614*t1115;
  t1322 = 0. + t1318 + t1319;
  t1329 = t629*t1249;
  t1336 = t1234*t805;
  t1339 = t1329 + t1336;
  t1354 = t1169*t628;
  t1357 = -1.*t614*t1257;
  t1358 = t1354 + t1357;
  t988 = t983*t614;
  t1116 = t628*t1115;
  t1125 = 0. + t988 + t1116;
  t1459 = -1.26e-8*var1[11];
  t1460 = 1. + t953;
  t1468 = -0.14871*t1460;
  t1469 = -1.64779999997447e-7*t255;
  t1474 = -1.59556e-7*t950;
  t1478 = -1.199987999968e-6*t326;
  t1480 = t1459 + t1468 + t1469 + t1474 + t1478;
  t1504 = 0.803147*t492;
  t1508 = 0.50315000001605*t255;
  t1514 = 0.00130540515936178*t326;
  t1517 = t1504 + t1508 + t1514;
  t1530 = -5.04e-14*var1[11];
  t1539 = -0.03988959484*t255;
  t1545 = 6.38224e-13*t950;
  t1547 = -0.041195*t128;
  t1548 = 0.299996999992*t326;
  t1549 = t1530 + t1539 + t1545 + t1547 + t1548;
  t1404 = -1.*t706;
  t1406 = 1. + t1404;
  t1442 = -0.15121*t631;
  t1443 = -1.2484e-7*var1[10];
  t1448 = 2.479936e-18*t109;
  t1455 = -1.54996e-7*t644;
  t1458 = 1.124840000016e-6*t437;
  t1493 = t661*t1480;
  t1529 = -4.e-6*t437*t1517;
  t1553 = 4.e-6*t109*t1549;
  t1558 = t1443 + t1448 + t1455 + t1458 + t1493 + t1529 + t1553;
  t1565 = 0.281210000008499*t109;
  t1567 = -0.03874900000062*t437;
  t1568 = 4.e-6*t437*t1480;
  t1571 = t711*t1517;
  t1573 = -1.*t437*t1549;
  t1594 = t1565 + t1567 + t1568 + t1571 + t1573;
  t1182 = t1169*t614;
  t1258 = t628*t1257;
  t1262 = t1182 + t1258;
  t1611 = 0.15121*t1406;
  t1625 = -1.*t631*t1558;
  t1627 = t706*t1594;
  t1631 = t1611 + t1442 + t1625 + t1627;
  t1413 = -0.15121*t1406;
  t1560 = t706*t1558;
  t1599 = t631*t1594;
  t1603 = t1413 + t1442 + t1560 + t1599;
  t1676 = -4.9936e-13*var1[10];
  t1686 = -0.038749*t109;
  t1689 = 6.19984e-13*t644;
  t1699 = -0.281210000004*t437;
  t1700 = 4.e-6*t109*t1480;
  t1712 = t437*t1517;
  t1713 = t10*t1549;
  t1718 = 0. + t1676 + t1686 + t1689 + t1699 + t1700 + t1712 + t1713;
  t1726 = t629*t1631;
  t1731 = -1.*t1603*t805;
  t1740 = 0. + t1726 + t1731;
  t1610 = t629*t1603;
  t1642 = t1631*t805;
  t1646 = 0. + t1610 + t1642;
  t1725 = t1718*t614;
  t1751 = t628*t1740;
  t1753 = 0. + t1725 + t1751;
  t1768 = t628*t1718;
  t1769 = -1.*t614*t1740;
  t1770 = 0. + t1768 + t1769;
  t623 = t612*t614;
  t825 = t628*t820;
  t832 = 0. + t623 + t825;
  t1654 = t1339*t1646;
  t1812 = -1.*t1304*t1646;
  t1856 = -1.*t1339*t1646;
  t1867 = t1646*t1277;
  t1971 = t1304*t1646;
  t2030 = -1.*t1646*t1277;
  t2137 = -1.*t983*t1718;
  t2113 = t1169*t1718;
  t2203 = t1718*t612;
  t2173 = -1.*t1169*t1718;
  t2239 = -1.*t1718*t612;
  t2231 = t983*t1718;
  t2422 = t1676 + t1686 + t1689 + t1699 + t1700 + t1712 + t1713;
  t2626 = -1.*t1480*t938;
  t2627 = -1.*t861*t1517;
  t2636 = -1.*t974*t1549;
  t2640 = t2626 + t2627 + t2636;
  t2655 = t1129*t1480;
  t2661 = t1164*t1549;
  t2673 = t2655 + t2661;
  t2728 = t337*t1480;
  t2729 = t1517*t526;
  t2730 = t1549*t601;
  t2735 = t2728 + t2729 + t2730;
  t2745 = -1.*t1129*t1480;
  t2748 = -1.*t1164*t1549;
  t2753 = t2745 + t2748;
  t2827 = t1480*t938;
  t2834 = t861*t1517;
  t2835 = t974*t1549;
  t2841 = t2827 + t2834 + t2835;
  t2803 = -1.*t337*t1480;
  t2809 = -1.*t1517*t526;
  t2816 = -1.*t1549*t601;
  t2817 = t2803 + t2809 + t2816;
  p_output1[0]=t832;
  p_output1[1]=t1125;
  p_output1[2]=t1262;
  p_output1[3]=0. + t1264*t1277 - 1.*t1282*t1286;
  p_output1[4]=0. + t1264*t1304 - 1.*t1282*t1322;
  p_output1[5]=t1264*t1339 - 1.*t1282*t1358;
  p_output1[6]=0. + t1277*t1282 + t1264*t1286;
  p_output1[7]=0. + t1282*t1304 + t1264*t1322;
  p_output1[8]=t1282*t1339 + t1264*t1358;
  p_output1[9]=t1125*(t1654 + t1262*t1753 + t1358*t1770) + t1262*(-1.*t1125*t1753 - 1.*t1322*t1770 + t1812);
  p_output1[10]=(-1.*t1262*t1753 - 1.*t1358*t1770 + t1856)*t832 + t1262*(t1286*t1770 + t1867 + t1753*t832);
  p_output1[11]=(t1125*t1753 + t1322*t1770 + t1971)*t832 + t1125*(-1.*t1286*t1770 + t2030 - 1.*t1753*t832);
  p_output1[12]=t1304*(t1654 + t1257*t1740 + t2113) + t1339*(-1.*t1115*t1740 + t1812 + t2137);
  p_output1[13]=t1277*(-1.*t1257*t1740 + t1856 + t2173) + t1339*(t1867 + t2203 + t1740*t820);
  p_output1[14]=t1277*(t1115*t1740 + t1971 + t2231) + t1304*(t2030 + t2239 - 1.*t1740*t820);
  p_output1[15]=t1169*(-1.*t1101*t1603 - 1.*t1064*t1631 + t2137) + (t1249*t1603 + t1234*t1631 + t2113)*t983;
  p_output1[16]=(-1.*t1249*t1603 - 1.*t1234*t1631 + t2173)*t612 + t1169*(t2203 + t1631*t753 + t1603*t788);
  p_output1[17]=(t1101*t1603 + t1064*t1631 + t2231)*t612 + (t2239 - 1.*t1631*t753 - 1.*t1603*t788)*t983;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.15121*t687 - 0.15121*t744 + (t1207*t1558 + t1230*t1594 + t1169*t2422)*t983 + t1169*(-1.*t1008*t1558 - 1.*t1024*t1594 - 1.*t2422*t983);
  p_output1[28]=-0.15121*t1008 - 0.15121*t1024 + (-1.*t1207*t1558 - 1.*t1230*t1594 - 1.*t1169*t2422)*t612 + t1169*(t2422*t612 + t1558*t687 + t1594*t744);
  p_output1[29]=-0.15121*t1207 - 0.15121*t1230 + (-1.*t2422*t612 - 1.*t1558*t687 - 1.*t1594*t744)*t983 + t612*(t1008*t1558 + t1024*t1594 + t2422*t983);
  p_output1[30]=-1.*t1129*t2640 + 1.e-6*t337 - 0.038749*t526 - 0.28121*t601 - 1.*t2673*t938 + 4.e-6*(-1.*t1164*t2640 - 1.*t2673*t974);
  p_output1[31]=-1.*t1129*t2735 - 1.*t2753*t337 + 4.e-6*(-1.*t1164*t2735 - 1.*t2753*t601) - 0.038749*t861 + 1.e-6*t938 - 0.28121*t974;
  p_output1[32]=1.e-6*t1129 - 0.28121*t1164 - 1.*t2841*t337 - 1.*t2817*t938 + 4.e-6*(-1.*t2841*t601 - 1.*t2817*t974);
  p_output1[33]=-1.9353204325022392e-7;
  p_output1[34]=0.29999998115510645;
  p_output1[35]=1.1914820871506078e-8;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
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

#include "Jh_FrFoot_DiagonalStance.hh"

namespace SymFunction
{

void Jh_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
