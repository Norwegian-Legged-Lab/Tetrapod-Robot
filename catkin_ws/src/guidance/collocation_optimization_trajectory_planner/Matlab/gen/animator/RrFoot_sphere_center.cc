/*
 * Automatically Generated from Mathematica.
 * Fri 4 Feb 2022 15:52:15 GMT+01:00
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
  double t551;
  double t592;
  double t720;
  double t1016;
  double t143;
  double t205;
  double t208;
  double t259;
  double t333;
  double t337;
  double t1159;
  double t1164;
  double t200;
  double t1196;
  double t1209;
  double t847;
  double t1381;
  double t1384;
  double t1385;
  double t1389;
  double t1188;
  double t1336;
  double t1302;
  double t1309;
  double t1314;
  double t1350;
  double t1357;
  double t1360;
  double t1394;
  double t1169;
  double t1404;
  double t1061;
  double t1388;
  double t1442;
  double t1443;
  double t1468;
  double t1238;
  double t1408;
  double t1210;
  double t1507;
  double t1405;
  double t1406;
  double t1411;
  double t1415;
  double t1420;
  double t1421;
  double t1422;
  double t1425;
  double t1517;
  double t1459;
  double t1461;
  double t1462;
  double t1475;
  double t1481;
  double t1482;
  double t1488;
  double t1491;
  double t1522;
  double t1523;
  double t1524;
  double t1525;
  double t1526;
  double t1527;
  double t1528;
  double t1529;
  double t1434;
  double t1534;
  double t1444;
  double t1545;
  double t1531;
  double t1390;
  double t459;
  double t739;
  double t1091;
  double t1133;
  double t1179;
  double t1180;
  double t1187;
  double t349;
  double t433;
  double t1571;
  double t1191;
  double t1192;
  double t1574;
  double t1200;
  double t1207;
  double t1226;
  double t1234;
  double t1239;
  double t1272;
  double t1285;
  double t1573;
  double t1575;
  double t1576;
  double t1578;
  double t1579;
  double t1580;
  double t1326;
  double t1327;
  double t1340;
  double t1341;
  double t1344;
  double t1348;
  double t1349;
  double t1370;
  double t1386;
  double t1392;
  double t1393;
  double t1396;
  double t1402;
  double t1403;
  double t1583;
  double t1584;
  double t1585;
  double t1587;
  double t1588;
  double t1589;
  double t1431;
  double t1433;
  double t1437;
  double t1440;
  double t1445;
  double t1447;
  double t1450;
  double t1498;
  double t1502;
  double t1513;
  double t1515;
  double t1518;
  double t1520;
  double t1521;
  double t1532;
  double t1591;
  double t1592;
  double t1593;
  double t1594;
  double t1535;
  double t1596;
  double t1597;
  double t1598;
  double t1599;
  double t1537;
  double t1539;
  double t1601;
  double t1602;
  double t1603;
  double t1604;
  double t1547;
  double t1550;
  double t1551;
  double t1554;
  double t1559;
  double t1560;
  double t1563;
  double t1565;
  double t1623;
  double t1624;
  double t1625;
  double t1627;
  double t1628;
  double t1629;
  double t1631;
  double t1632;
  double t1633;
  double t1635;
  double t1636;
  double t1637;
  double t1639;
  double t1640;
  double t1641;
  double t1642;
  double t1644;
  double t1645;
  double t1646;
  double t1647;
  double t1651;
  double t1652;
  double t1653;
  double t1654;
  t551 = Cos(var1[16]);
  t592 = -1.*t551;
  t720 = 1. + t592;
  t1016 = Sin(var1[16]);
  t143 = Cos(var1[4]);
  t205 = Cos(var1[15]);
  t208 = -1.*t205;
  t259 = 1. + t208;
  t333 = -0.15121*t259;
  t337 = Sin(var1[15]);
  t1159 = -1. + t551;
  t1164 = 4.e-6*t1159;
  t200 = Cos(var1[5]);
  t1196 = Sin(var1[5]);
  t1209 = 7.e-6*t720;
  t847 = 2.8e-11*t720;
  t1381 = Cos(var1[17]);
  t1384 = -1.*t1381;
  t1385 = 1. + t1384;
  t1389 = Sin(var1[17]);
  t1188 = Sin(var1[4]);
  t1336 = -4.e-6*t1016;
  t1302 = -1.*t143*t200*t337;
  t1309 = -1.*t205*t143*t1196;
  t1314 = t1302 + t1309;
  t1350 = t205*t143*t200;
  t1357 = -1.*t143*t337*t1196;
  t1360 = t1350 + t1357;
  t1394 = 2.8e-11*t1385;
  t1169 = -7.e-6*t1016;
  t1404 = -2.8e-11*t720;
  t1061 = -1.*t1016;
  t1388 = 7.e-6*t1385;
  t1442 = -1. + t1381;
  t1443 = 4.e-6*t1442;
  t1468 = 4.e-6*t720;
  t1238 = 7.e-6*t1016;
  t1408 = -7.e-6*t720;
  t1210 = 4.e-6*t1016;
  t1507 = 4.e-6*t1389;
  t1405 = t1404 + t1016;
  t1406 = t1405*t1188;
  t1411 = t1408 + t1336;
  t1415 = t1411*t1314;
  t1420 = -1.000000000016*t720;
  t1421 = 1. + t1420;
  t1422 = t1421*t1360;
  t1425 = t1406 + t1415 + t1422;
  t1517 = 7.e-6*t1389;
  t1459 = -1.000000000049*t720;
  t1461 = 1. + t1459;
  t1462 = t1461*t1188;
  t1475 = t1468 + t1169;
  t1481 = t1475*t1314;
  t1482 = t1404 + t1061;
  t1488 = t1482*t1360;
  t1491 = t1462 + t1481 + t1488;
  t1522 = t1468 + t1238;
  t1523 = t1522*t1188;
  t1524 = -6.5e-11*t720;
  t1525 = 1. + t1524;
  t1526 = t1525*t1314;
  t1527 = t1408 + t1210;
  t1528 = t1527*t1360;
  t1529 = t1523 + t1526 + t1528;
  t1434 = -1.*t1389;
  t1534 = 4.e-6*t1385;
  t1444 = -7.e-6*t1389;
  t1545 = -2.8e-11*t1385;
  t1531 = -7.e-6*t1385;
  t1390 = -4.e-6*t1389;
  t459 = 1.5843479999999999e-12*var1[16];
  t739 = -0.03874900000889869*t720;
  t1091 = t847 + t1061;
  t1133 = -0.281211000004*t1091;
  t1179 = t1164 + t1169;
  t1180 = -1.8134809999999998e-6*t1179;
  t1187 = t459 + t739 + t1133 + t1180;
  t349 = -0.15121*t337;
  t433 = t333 + t349;
  t1571 = Sin(var1[3]);
  t1191 = 0.15121*t337;
  t1192 = t333 + t1191;
  t1574 = Cos(var1[3]);
  t1200 = 3.9608699999999997e-7*var1[16];
  t1207 = -1.1787626499999999e-16*t720;
  t1226 = t1209 + t1210;
  t1234 = -0.281211000004*t1226;
  t1239 = t1164 + t1238;
  t1272 = -0.038749000006999997*t1239;
  t1285 = t1200 + t1207 + t1234 + t1272;
  t1573 = t200*t1571*t1188;
  t1575 = t1574*t1196;
  t1576 = t1573 + t1575;
  t1578 = t1574*t200;
  t1579 = -1.*t1571*t1188*t1196;
  t1580 = t1578 + t1579;
  t1326 = -2.7726089999999997e-12*var1[16];
  t1327 = -0.2812110000084994*t720;
  t1340 = t1209 + t1336;
  t1341 = -1.8134809999999998e-6*t1340;
  t1344 = t847 + t1016;
  t1348 = -0.038749000006999997*t1344;
  t1349 = t1326 + t1327 + t1341 + t1348;
  t1370 = -1.9784030000000015e-12*var1[17];
  t1386 = -0.5031510000160505*t1385;
  t1392 = t1388 + t1390;
  t1393 = -3.367757e-6*t1392;
  t1396 = t1394 + t1389;
  t1402 = -0.038575000014*t1396;
  t1403 = t1370 + t1386 + t1393 + t1402;
  t1583 = -1.*t337*t1576;
  t1584 = t205*t1580;
  t1585 = t1583 + t1584;
  t1587 = t205*t1576;
  t1588 = t337*t1580;
  t1589 = t1587 + t1588;
  t1431 = 1.1305160000000008e-12*var1[17];
  t1433 = -0.03857500001589017*t1385;
  t1437 = t1394 + t1434;
  t1440 = -0.5031510000080001*t1437;
  t1445 = t1443 + t1444;
  t1447 = -3.367757e-6*t1445;
  t1450 = t1431 + t1433 + t1440 + t1447;
  t1498 = 2.826290000000002e-7*var1[17];
  t1502 = -2.18904205e-16*t1385;
  t1513 = t1388 + t1507;
  t1515 = -0.5031510000080001*t1513;
  t1518 = t1443 + t1517;
  t1520 = -0.038575000014*t1518;
  t1521 = t1498 + t1502 + t1515 + t1520;
  t1532 = t1531 + t1507;
  t1591 = -1.*t143*t1405*t1571;
  t1592 = t1411*t1585;
  t1593 = t1421*t1589;
  t1594 = t1591 + t1592 + t1593;
  t1535 = t1534 + t1517;
  t1596 = -1.*t1461*t143*t1571;
  t1597 = t1475*t1585;
  t1598 = t1482*t1589;
  t1599 = t1596 + t1597 + t1598;
  t1537 = -6.5e-11*t1385;
  t1539 = 1. + t1537;
  t1601 = -1.*t143*t1522*t1571;
  t1602 = t1525*t1585;
  t1603 = t1527*t1589;
  t1604 = t1601 + t1602 + t1603;
  t1547 = t1545 + t1434;
  t1550 = -1.000000000049*t1385;
  t1551 = 1. + t1550;
  t1554 = t1534 + t1444;
  t1559 = -1.000000000016*t1385;
  t1560 = 1. + t1559;
  t1563 = t1545 + t1389;
  t1565 = t1531 + t1390;
  t1623 = -1.*t1574*t200*t1188;
  t1624 = t1571*t1196;
  t1625 = t1623 + t1624;
  t1627 = t200*t1571;
  t1628 = t1574*t1188*t1196;
  t1629 = t1627 + t1628;
  t1631 = -1.*t337*t1625;
  t1632 = t205*t1629;
  t1633 = t1631 + t1632;
  t1635 = t205*t1625;
  t1636 = t337*t1629;
  t1637 = t1635 + t1636;
  t1639 = t1574*t143*t1405;
  t1640 = t1411*t1633;
  t1641 = t1421*t1637;
  t1642 = t1639 + t1640 + t1641;
  t1644 = t1461*t1574*t143;
  t1645 = t1475*t1633;
  t1646 = t1482*t1637;
  t1647 = t1644 + t1645 + t1646;
  t1651 = t1574*t143*t1522;
  t1652 = t1525*t1633;
  t1653 = t1527*t1637;
  t1654 = t1651 + t1652 + t1653;
  p_output1[0]=t1187*t1188 + t1285*t1314 + t1349*t1360 + t1403*t1425 - 1.*t1192*t1196*t143 + t1450*t1491 + t1521*t1529 - 0.148715*(t1425*t1532 + t1491*t1535 + t1529*t1539) - 0.038576*(t1425*t1547 + t1491*t1551 + t1529*t1554) - 0.80315*(t1425*t1560 + t1491*t1563 + t1529*t1565) + t143*t200*t433 + var1[0];
  p_output1[1]=-1.*t1187*t143*t1571 + t1192*t1580 + t1285*t1585 + t1349*t1589 + t1403*t1594 + t1450*t1599 + t1521*t1604 - 0.148715*(t1532*t1594 + t1535*t1599 + t1539*t1604) - 0.038576*(t1547*t1594 + t1551*t1599 + t1554*t1604) - 0.80315*(t1560*t1594 + t1563*t1599 + t1565*t1604) + t1576*t433 + var1[1];
  p_output1[2]=t1187*t143*t1574 + t1192*t1629 + t1285*t1633 + t1349*t1637 + t1403*t1642 + t1450*t1647 + t1521*t1654 - 0.148715*(t1532*t1642 + t1535*t1647 + t1539*t1654) - 0.038576*(t1547*t1642 + t1551*t1647 + t1554*t1654) - 0.80315*(t1560*t1642 + t1563*t1647 + t1565*t1654) + t1625*t433 + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "RrFoot_sphere_center.hh"

namespace SymFunction
{

void RrFoot_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
