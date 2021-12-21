/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:15:50 GMT+01:00
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
  double t278;
  double t368;
  double t394;
  double t475;
  double t614;
  double t617;
  double t618;
  double t628;
  double t629;
  double t632;
  double t730;
  double t651;
  double t678;
  double t745;
  double t558;
  double t566;
  double t690;
  double t754;
  double t781;
  double t825;
  double t837;
  double t870;
  double t890;
  double t462;
  double t1163;
  double t1169;
  double t1174;
  double t1194;
  double t257;
  double t1052;
  double t1029;
  double t1030;
  double t1041;
  double t1103;
  double t1118;
  double t1123;
  double t1220;
  double t593;
  double t1243;
  double t490;
  double t1193;
  double t1334;
  double t1335;
  double t1356;
  double t928;
  double t1268;
  double t894;
  double t1388;
  double t1247;
  double t1253;
  double t1269;
  double t1271;
  double t1276;
  double t1293;
  double t1302;
  double t1312;
  double t1404;
  double t1346;
  double t1352;
  double t1353;
  double t1358;
  double t1372;
  double t1373;
  double t1374;
  double t1376;
  double t1429;
  double t1431;
  double t1432;
  double t1433;
  double t1438;
  double t1440;
  double t1441;
  double t1443;
  double t1317;
  double t1456;
  double t1337;
  double t1476;
  double t1452;
  double t1208;
  double t640;
  double t646;
  double t261;
  double t408;
  double t499;
  double t502;
  double t601;
  double t602;
  double t611;
  double t806;
  double t819;
  double t883;
  double t886;
  double t895;
  double t914;
  double t939;
  double t944;
  double t1006;
  double t1047;
  double t1051;
  double t1058;
  double t1061;
  double t1071;
  double t1078;
  double t1080;
  double t1162;
  double t1184;
  double t1215;
  double t1216;
  double t1221;
  double t1234;
  double t1239;
  double t1557;
  double t1563;
  double t1566;
  double t1569;
  double t1571;
  double t1574;
  double t1314;
  double t1316;
  double t1325;
  double t1330;
  double t1340;
  double t1341;
  double t1343;
  double t1379;
  double t1384;
  double t1394;
  double t1399;
  double t1409;
  double t1424;
  double t1427;
  double t1454;
  double t1581;
  double t1583;
  double t1585;
  double t1587;
  double t1457;
  double t1596;
  double t1600;
  double t1605;
  double t1606;
  double t1461;
  double t1463;
  double t1617;
  double t1619;
  double t1620;
  double t1623;
  double t1478;
  double t1481;
  double t1487;
  double t1501;
  double t1522;
  double t1526;
  double t1534;
  double t1536;
  double t1673;
  double t1681;
  double t1683;
  double t1692;
  double t1695;
  double t1708;
  double t1714;
  double t1716;
  double t1720;
  double t1732;
  double t1733;
  double t1735;
  double t1742;
  double t1746;
  double t1751;
  double t1757;
  double t1758;
  double t1759;
  double t1770;
  double t1778;
  double t1780;
  double t1836;
  double t1843;
  double t1844;
  double t1861;
  double t1863;
  double t1868;
  double t1870;
  double t1874;
  double t1875;
  double t1877;
  double t1881;
  double t1882;
  double t1887;
  double t1890;
  double t1891;
  double t1892;
  double t1961;
  double t1972;
  double t1978;
  double t2033;
  double t2034;
  double t2035;
  double t1957;
  double t2056;
  double t2002;
  double t2039;
  double t2041;
  double t2042;
  double t2045;
  double t2046;
  double t2047;
  double t2052;
  double t2053;
  double t2055;
  double t2057;
  double t2060;
  double t2063;
  double t2072;
  double t2076;
  double t2077;
  double t2078;
  double t2080;
  double t2085;
  double t2119;
  double t2139;
  double t2141;
  double t2147;
  double t2157;
  double t2183;
  double t2184;
  double t2185;
  double t2190;
  double t2127;
  double t2215;
  double t2224;
  double t2232;
  double t2234;
  double t2240;
  double t2167;
  double t2199;
  double t2193;
  t278 = Cos(var1[16]);
  t368 = -1.*t278;
  t394 = 1. + t368;
  t475 = Sin(var1[16]);
  t614 = Sin(var1[3]);
  t617 = Cos(var1[15]);
  t618 = -1.*t617;
  t628 = 1. + t618;
  t629 = -0.15121*t628;
  t632 = Sin(var1[15]);
  t730 = Cos(var1[3]);
  t651 = Cos(var1[5]);
  t678 = Sin(var1[4]);
  t745 = Sin(var1[5]);
  t558 = -1. + t278;
  t566 = 4.e-6*t558;
  t690 = t651*t614*t678;
  t754 = t730*t745;
  t781 = t690 + t754;
  t825 = t730*t651;
  t837 = -1.*t614*t678*t745;
  t870 = t825 + t837;
  t890 = 7.e-6*t394;
  t462 = 2.8e-11*t394;
  t1163 = Cos(var1[17]);
  t1169 = -1.*t1163;
  t1174 = 1. + t1169;
  t1194 = Sin(var1[17]);
  t257 = Cos(var1[4]);
  t1052 = -4.e-6*t475;
  t1029 = -1.*t632*t781;
  t1030 = t617*t870;
  t1041 = t1029 + t1030;
  t1103 = t617*t781;
  t1118 = t632*t870;
  t1123 = t1103 + t1118;
  t1220 = 2.8e-11*t1174;
  t593 = -7.e-6*t475;
  t1243 = -2.8e-11*t394;
  t490 = -1.*t475;
  t1193 = 7.e-6*t1174;
  t1334 = -1. + t1163;
  t1335 = 4.e-6*t1334;
  t1356 = 4.e-6*t394;
  t928 = 7.e-6*t475;
  t1268 = -7.e-6*t394;
  t894 = 4.e-6*t475;
  t1388 = 4.e-6*t1194;
  t1247 = t1243 + t475;
  t1253 = -1.*t257*t1247*t614;
  t1269 = t1268 + t1052;
  t1271 = t1269*t1041;
  t1276 = -1.000000000016*t394;
  t1293 = 1. + t1276;
  t1302 = t1293*t1123;
  t1312 = t1253 + t1271 + t1302;
  t1404 = 7.e-6*t1194;
  t1346 = -1.000000000049*t394;
  t1352 = 1. + t1346;
  t1353 = -1.*t1352*t257*t614;
  t1358 = t1356 + t593;
  t1372 = t1358*t1041;
  t1373 = t1243 + t490;
  t1374 = t1373*t1123;
  t1376 = t1353 + t1372 + t1374;
  t1429 = t1356 + t928;
  t1431 = -1.*t257*t1429*t614;
  t1432 = -6.5e-11*t394;
  t1433 = 1. + t1432;
  t1438 = t1433*t1041;
  t1440 = t1268 + t894;
  t1441 = t1440*t1123;
  t1443 = t1431 + t1438 + t1441;
  t1317 = -1.*t1194;
  t1456 = 4.e-6*t1174;
  t1337 = -7.e-6*t1194;
  t1476 = -2.8e-11*t1174;
  t1452 = -7.e-6*t1174;
  t1208 = -4.e-6*t1194;
  t640 = -0.15121*t632;
  t646 = t629 + t640;
  t261 = 1.5843479999999999e-12*var1[16];
  t408 = -0.03874900000889869*t394;
  t499 = t462 + t490;
  t502 = -0.281211000004*t499;
  t601 = t566 + t593;
  t602 = -1.8134809999999998e-6*t601;
  t611 = t261 + t408 + t502 + t602;
  t806 = 0.15121*t632;
  t819 = t629 + t806;
  t883 = 3.9608699999999997e-7*var1[16];
  t886 = -1.1787626499999999e-16*t394;
  t895 = t890 + t894;
  t914 = -0.281211000004*t895;
  t939 = t566 + t928;
  t944 = -0.038749000006999997*t939;
  t1006 = t883 + t886 + t914 + t944;
  t1047 = -2.7726089999999997e-12*var1[16];
  t1051 = -0.2812110000084994*t394;
  t1058 = t890 + t1052;
  t1061 = -1.8134809999999998e-6*t1058;
  t1071 = t462 + t475;
  t1078 = -0.038749000006999997*t1071;
  t1080 = t1047 + t1051 + t1061 + t1078;
  t1162 = -1.9784030000000015e-12*var1[17];
  t1184 = -0.5031510000160505*t1174;
  t1215 = t1193 + t1208;
  t1216 = -3.367757e-6*t1215;
  t1221 = t1220 + t1194;
  t1234 = -0.038575000014*t1221;
  t1239 = t1162 + t1184 + t1216 + t1234;
  t1557 = t730*t257*t651*t632;
  t1563 = t617*t730*t257*t745;
  t1566 = t1557 + t1563;
  t1569 = -1.*t617*t730*t257*t651;
  t1571 = t730*t257*t632*t745;
  t1574 = t1569 + t1571;
  t1314 = 1.1305160000000008e-12*var1[17];
  t1316 = -0.03857500001589017*t1174;
  t1325 = t1220 + t1317;
  t1330 = -0.5031510000080001*t1325;
  t1340 = t1335 + t1337;
  t1341 = -3.367757e-6*t1340;
  t1343 = t1314 + t1316 + t1330 + t1341;
  t1379 = 2.826290000000002e-7*var1[17];
  t1384 = -2.18904205e-16*t1174;
  t1394 = t1193 + t1388;
  t1399 = -0.5031510000080001*t1394;
  t1409 = t1335 + t1404;
  t1424 = -0.038575000014*t1409;
  t1427 = t1379 + t1384 + t1399 + t1424;
  t1454 = t1452 + t1388;
  t1581 = -1.*t730*t1247*t678;
  t1583 = t1269*t1566;
  t1585 = t1293*t1574;
  t1587 = t1581 + t1583 + t1585;
  t1457 = t1456 + t1404;
  t1596 = -1.*t1352*t730*t678;
  t1600 = t1358*t1566;
  t1605 = t1373*t1574;
  t1606 = t1596 + t1600 + t1605;
  t1461 = -6.5e-11*t1174;
  t1463 = 1. + t1461;
  t1617 = -1.*t730*t1429*t678;
  t1619 = t1433*t1566;
  t1620 = t1440*t1574;
  t1623 = t1617 + t1619 + t1620;
  t1478 = t1476 + t1317;
  t1481 = -1.000000000049*t1174;
  t1487 = 1. + t1481;
  t1501 = t1456 + t1337;
  t1522 = -1.000000000016*t1174;
  t1526 = 1. + t1522;
  t1534 = t1476 + t1194;
  t1536 = t1452 + t1208;
  t1673 = t730*t651*t678;
  t1681 = -1.*t614*t745;
  t1683 = t1673 + t1681;
  t1692 = t651*t614;
  t1695 = t730*t678*t745;
  t1708 = t1692 + t1695;
  t1714 = t632*t1683;
  t1716 = t617*t1708;
  t1720 = t1714 + t1716;
  t1732 = t617*t1683;
  t1733 = -1.*t632*t1708;
  t1735 = t1732 + t1733;
  t1742 = t1440*t1720;
  t1746 = t1433*t1735;
  t1751 = t1742 + t1746;
  t1757 = t1373*t1720;
  t1758 = t1358*t1735;
  t1759 = t1757 + t1758;
  t1770 = t1293*t1720;
  t1778 = t1269*t1735;
  t1780 = t1770 + t1778;
  t1836 = -1.*t730*t651*t678;
  t1843 = t614*t745;
  t1844 = t1836 + t1843;
  t1861 = -1.*t632*t1844;
  t1863 = t1861 + t1716;
  t1868 = -1.*t617*t1844;
  t1870 = t1868 + t1733;
  t1874 = t1440*t1863;
  t1875 = t1433*t1870;
  t1877 = t1874 + t1875;
  t1881 = t1373*t1863;
  t1882 = t1358*t1870;
  t1887 = t1881 + t1882;
  t1890 = t1293*t1863;
  t1891 = t1269*t1870;
  t1892 = t1890 + t1891;
  t1961 = 2.8e-11*t475;
  t1972 = 7.e-6*t278;
  t1978 = 4.e-6*t278;
  t2033 = t617*t1844;
  t2034 = t632*t1708;
  t2035 = t2033 + t2034;
  t1957 = -7.e-6*t278;
  t2056 = -2.8e-11*t475;
  t2002 = -4.e-6*t278;
  t2039 = t1972 + t894;
  t2041 = t730*t257*t2039;
  t2042 = -6.5e-11*t475*t1863;
  t2045 = t1978 + t593;
  t2046 = t2045*t2035;
  t2047 = t2041 + t2042 + t2046;
  t2052 = -1.000000000049*t730*t257*t475;
  t2053 = t1957 + t894;
  t2055 = t2053*t1863;
  t2057 = t368 + t2056;
  t2060 = t2057*t2035;
  t2063 = t2052 + t2055 + t2060;
  t2072 = t278 + t2056;
  t2076 = t730*t257*t2072;
  t2077 = t2002 + t593;
  t2078 = t2077*t1863;
  t2080 = -1.000000000016*t475*t2035;
  t2085 = t2076 + t2078 + t2080;
  t2119 = 2.8e-11*t1194;
  t2139 = t730*t257*t1247;
  t2141 = t1269*t1863;
  t2147 = t1293*t2035;
  t2157 = t2139 + t2141 + t2147;
  t2183 = t1352*t730*t257;
  t2184 = t1358*t1863;
  t2185 = t1373*t2035;
  t2190 = t2183 + t2184 + t2185;
  t2127 = -4.e-6*t1163;
  t2215 = t730*t257*t1429;
  t2224 = t1433*t1863;
  t2232 = t1440*t2035;
  t2234 = t2215 + t2224 + t2232;
  t2240 = -2.8e-11*t1194;
  t2167 = -7.e-6*t1163;
  t2199 = 4.e-6*t1163;
  t2193 = 7.e-6*t1163;
  p_output1[0]=1.;
  p_output1[1]=t1006*t1041 + t1080*t1123 + t1239*t1312 + t1343*t1376 + t1427*t1443 - 0.148715*(t1312*t1454 + t1376*t1457 + t1443*t1463) - 0.038576*(t1312*t1478 + t1376*t1487 + t1443*t1501) - 0.80315*(t1312*t1526 + t1376*t1534 + t1443*t1536) - 1.*t257*t611*t614 + t646*t781 + t819*t870;
  p_output1[2]=t1006*t1566 + t1080*t1574 + t1239*t1587 + t1343*t1606 + t1427*t1623 - 0.148715*(t1454*t1587 + t1457*t1606 + t1463*t1623) - 0.038576*(t1478*t1587 + t1487*t1606 + t1501*t1623) - 0.80315*(t1526*t1587 + t1534*t1606 + t1536*t1623) - 1.*t257*t646*t651*t730 - 1.*t611*t678*t730 + t257*t730*t745*t819;
  p_output1[3]=t1080*t1720 + t1006*t1735 + t1427*t1751 + t1343*t1759 + t1239*t1780 - 0.148715*(t1463*t1751 + t1457*t1759 + t1454*t1780) - 0.038576*(t1501*t1751 + t1487*t1759 + t1478*t1780) - 0.80315*(t1536*t1751 + t1534*t1759 + t1526*t1780) + t1708*t646 + t1683*t819;
  p_output1[4]=t1080*t1863 + t1006*t1870 + t1427*t1877 + t1343*t1887 + t1239*t1892 - 0.148715*(t1463*t1877 + t1457*t1887 + t1454*t1892) - 0.038576*(t1501*t1877 + t1487*t1887 + t1478*t1892) - 0.80315*(t1536*t1877 + t1534*t1887 + t1526*t1892) + t1844*(-0.15121*t617 + t640) + t1708*(0.15121*t617 + t640);
  p_output1[5]=t1427*t2047 + t1343*t2063 + t1239*t2085 - 0.148715*(t1463*t2047 + t1457*t2063 + t1454*t2085) - 0.038576*(t1501*t2047 + t1487*t2063 + t1478*t2085) - 0.80315*(t1536*t2047 + t1534*t2063 + t1526*t2085) + t257*(1.5843479999999999e-12 - 1.8134809999999998e-6*(t1052 + t1957) - 0.281211000004*(t1961 + t368) - 0.03874900000889869*t475)*t730 + t1863*(3.9608699999999997e-7 - 0.038749000006999997*(t1052 + t1972) - 1.1787626499999999e-16*t475 - 0.281211000004*(t1978 + t928)) + t2035*(-2.7726089999999997e-12 - 0.038749000006999997*(t1961 + t278) - 0.2812110000084994*t475 - 1.8134809999999998e-6*(t2002 + t928));
  p_output1[6]=(-1.9784030000000015e-12 - 0.5031510000160505*t1194 - 0.038575000014*(t1163 + t2119) - 3.367757e-6*(t1404 + t2127))*t2157 + (1.1305160000000008e-12 - 0.03857500001589017*t1194 - 0.5031510000080001*(t1169 + t2119) - 3.367757e-6*(t1208 + t2167))*t2190 + (2.826290000000002e-7 - 2.18904205e-16*t1194 - 0.038575000014*(t1208 + t2193) - 0.5031510000080001*(t1404 + t2199))*t2234 - 0.148715*(t2190*(t1388 + t2193) + t2157*(t1337 + t2199) - 6.5e-11*t1194*t2234) - 0.80315*(-1.000000000016*t1194*t2157 + (t1337 + t2127)*t2234 + t2190*(t1163 + t2240)) - 0.038576*(-1.000000000049*t1194*t2190 + (t1388 + t2167)*t2234 + t2157*(t1169 + t2240));
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

#include "J_foot_clearance_RrFootParallelStance2.hh"

namespace ParallelStance2
{

void J_foot_clearance_RrFootParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
