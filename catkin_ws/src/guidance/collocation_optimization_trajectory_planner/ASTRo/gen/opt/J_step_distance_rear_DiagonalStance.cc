/*
 * Automatically Generated from Mathematica.
 * Thu 26 May 2022 14:47:37 GMT+02:00
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
  double t1025;
  double t1080;
  double t1120;
  double t1081;
  double t1096;
  double t1097;
  double t1115;
  double t1118;
  double t1147;
  double t1164;
  double t1172;
  double t1182;
  double t1195;
  double t1210;
  double t1051;
  double t1240;
  double t1243;
  double t1244;
  double t1258;
  double t1069;
  double t1266;
  double t1290;
  double t1294;
  double t1298;
  double t1300;
  double t1304;
  double t1305;
  double t1306;
  double t1308;
  double t1309;
  double t1310;
  double t1314;
  double t1316;
  double t1320;
  double t1321;
  double t1322;
  double t1324;
  double t1325;
  double t1326;
  double t1330;
  double t1202;
  double t1206;
  double t1212;
  double t1213;
  double t1112;
  double t1119;
  double t1196;
  double t1197;
  double t1241;
  double t1242;
  double t1301;
  double t1303;
  double t1356;
  double t1357;
  double t1358;
  double t1273;
  double t1283;
  double t1318;
  double t1319;
  double t1365;
  double t1366;
  double t1367;
  double t1399;
  double t1359;
  double t1360;
  double t1361;
  double t1371;
  double t1372;
  double t1373;
  double t1376;
  double t1381;
  double t1382;
  double t1383;
  double t1384;
  double t1410;
  double t1411;
  double t1412;
  double t1414;
  double t1415;
  double t1416;
  double t1418;
  double t1419;
  double t1420;
  double t1427;
  double t1428;
  double t1429;
  double t1368;
  double t1369;
  double t1370;
  double t1377;
  double t1378;
  double t1379;
  double t1380;
  double t1385;
  double t1386;
  double t1387;
  double t1391;
  double t1445;
  double t1446;
  double t1447;
  double t1449;
  double t1450;
  double t1451;
  double t1453;
  double t1454;
  double t1455;
  double t1462;
  double t1463;
  double t1464;
  double t1472;
  double t1475;
  double t1476;
  double t1477;
  double t1478;
  double t1481;
  double t1482;
  double t1483;
  double t1494;
  double t1495;
  double t1496;
  double t1498;
  double t1499;
  double t1500;
  double t1502;
  double t1503;
  double t1504;
  double t1506;
  double t1507;
  double t1508;
  double t1510;
  double t1511;
  double t1512;
  double t1514;
  double t1515;
  double t1516;
  double t1541;
  double t1542;
  double t1543;
  double t1545;
  double t1546;
  double t1547;
  double t1549;
  double t1550;
  double t1551;
  double t1553;
  double t1554;
  double t1555;
  double t1557;
  double t1558;
  double t1559;
  double t1561;
  double t1562;
  double t1563;
  double t1574;
  double t1575;
  double t1576;
  double t1579;
  double t1580;
  double t1581;
  double t1584;
  double t1585;
  double t1586;
  double t1590;
  double t1591;
  double t1592;
  double t1400;
  double t1401;
  double t1403;
  double t1614;
  double t1615;
  double t1616;
  double t1619;
  double t1620;
  double t1597;
  double t1633;
  double t1634;
  double t1635;
  double t1637;
  double t1638;
  double t1639;
  double t1641;
  double t1642;
  double t1643;
  double t1650;
  double t1651;
  double t1652;
  double t1437;
  double t1438;
  double t1440;
  double t1441;
  double t1662;
  double t1663;
  double t1601;
  double t1676;
  double t1677;
  double t1678;
  double t1680;
  double t1681;
  double t1682;
  double t1684;
  double t1685;
  double t1686;
  double t1693;
  double t1694;
  double t1695;
  t1025 = Cos(var1[4]);
  t1080 = Cos(var1[5]);
  t1120 = Sin(var1[4]);
  t1081 = Cos(var1[9]);
  t1096 = -1.*t1081;
  t1097 = 1. + t1096;
  t1115 = Sin(var1[9]);
  t1118 = 0.15121*t1115;
  t1147 = Cos(var1[15]);
  t1164 = -1.*t1147;
  t1172 = 1. + t1164;
  t1182 = -0.15121*t1172;
  t1195 = Sin(var1[15]);
  t1210 = Sin(var1[5]);
  t1051 = Sin(var1[10]);
  t1240 = Cos(var1[10]);
  t1243 = -1.*t1081*t1080*t1120;
  t1244 = t1115*t1120*t1210;
  t1258 = t1243 + t1244;
  t1069 = Sin(var1[16]);
  t1266 = Cos(var1[16]);
  t1290 = -1.*t1147*t1080*t1120;
  t1294 = t1195*t1120*t1210;
  t1298 = t1290 + t1294;
  t1300 = Cos(var1[11]);
  t1304 = t1025*t1051;
  t1305 = t1240*t1258;
  t1306 = t1304 + t1305;
  t1308 = Sin(var1[11]);
  t1309 = t1240*t1025;
  t1310 = -1.*t1051*t1258;
  t1314 = t1309 + t1310;
  t1316 = Cos(var1[17]);
  t1320 = t1025*t1069;
  t1321 = t1266*t1298;
  t1322 = t1320 + t1321;
  t1324 = Sin(var1[17]);
  t1325 = t1266*t1025;
  t1326 = -1.*t1069*t1298;
  t1330 = t1325 + t1326;
  t1202 = 0.15121*t1097;
  t1206 = t1202 + t1118;
  t1212 = 0.15121*t1195;
  t1213 = t1182 + t1212;
  t1112 = -0.15121*t1097;
  t1119 = t1112 + t1118;
  t1196 = -0.15121*t1195;
  t1197 = t1182 + t1196;
  t1241 = -1.*t1240;
  t1242 = 1. + t1241;
  t1301 = -1.*t1300;
  t1303 = 1. + t1301;
  t1356 = -1.*t1025*t1080*t1115;
  t1357 = -1.*t1081*t1025*t1210;
  t1358 = t1356 + t1357;
  t1273 = -1.*t1266;
  t1283 = 1. + t1273;
  t1318 = -1.*t1316;
  t1319 = 1. + t1318;
  t1365 = -1.*t1025*t1080*t1195;
  t1366 = -1.*t1147*t1025*t1210;
  t1367 = t1365 + t1366;
  t1399 = 0.15121*t1081;
  t1359 = -0.28121*t1242*t1358;
  t1360 = -0.50321*t1240*t1303*t1358;
  t1361 = 0.50321*t1051*t1308*t1358;
  t1371 = -1.*t1081*t1025*t1080;
  t1372 = t1025*t1115*t1210;
  t1373 = t1371 + t1372;
  t1376 = 0.15121*t1373;
  t1381 = t1240*t1300*t1358;
  t1382 = t1051*t1308*t1358;
  t1383 = t1381 + t1382;
  t1384 = -0.19821*t1383;
  t1410 = t1081*t1025*t1080;
  t1411 = -1.*t1025*t1115*t1210;
  t1412 = t1410 + t1411;
  t1414 = -1.*t1051*t1120;
  t1415 = -1.*t1240*t1412;
  t1416 = t1414 + t1415;
  t1418 = t1240*t1120;
  t1419 = -1.*t1051*t1412;
  t1420 = t1418 + t1419;
  t1427 = t1051*t1120;
  t1428 = t1240*t1412;
  t1429 = t1427 + t1428;
  t1368 = 0.28121*t1283*t1367;
  t1369 = 0.50321*t1266*t1319*t1367;
  t1370 = -0.50321*t1069*t1324*t1367;
  t1377 = -1.*t1147*t1025*t1080;
  t1378 = t1025*t1195*t1210;
  t1379 = t1377 + t1378;
  t1380 = 0.15121*t1379;
  t1385 = t1266*t1316*t1367;
  t1386 = t1069*t1324*t1367;
  t1387 = t1385 + t1386;
  t1391 = 0.19821*t1387;
  t1445 = t1147*t1025*t1080;
  t1446 = -1.*t1025*t1195*t1210;
  t1447 = t1445 + t1446;
  t1449 = -1.*t1069*t1120;
  t1450 = -1.*t1266*t1447;
  t1451 = t1449 + t1450;
  t1453 = t1266*t1120;
  t1454 = -1.*t1069*t1447;
  t1455 = t1453 + t1454;
  t1462 = t1069*t1120;
  t1463 = t1266*t1447;
  t1464 = t1462 + t1463;
  t1472 = Cos(var1[3]);
  t1475 = t1472*t1080*t1120;
  t1476 = Sin(var1[3]);
  t1477 = -1.*t1476*t1210;
  t1478 = t1475 + t1477;
  t1481 = -1.*t1080*t1476;
  t1482 = -1.*t1472*t1120*t1210;
  t1483 = t1481 + t1482;
  t1494 = t1081*t1478;
  t1495 = t1115*t1483;
  t1496 = t1494 + t1495;
  t1498 = t1147*t1478;
  t1499 = t1195*t1483;
  t1500 = t1498 + t1499;
  t1502 = -1.*t1472*t1025*t1051;
  t1503 = t1240*t1496;
  t1504 = t1502 + t1503;
  t1506 = -1.*t1240*t1472*t1025;
  t1507 = -1.*t1051*t1496;
  t1508 = t1506 + t1507;
  t1510 = -1.*t1472*t1025*t1069;
  t1511 = t1266*t1500;
  t1512 = t1510 + t1511;
  t1514 = -1.*t1266*t1472*t1025;
  t1515 = -1.*t1069*t1500;
  t1516 = t1514 + t1515;
  t1541 = t1081*t1025*t1080*t1476;
  t1542 = -1.*t1025*t1115*t1476*t1210;
  t1543 = t1541 + t1542;
  t1545 = t1147*t1025*t1080*t1476;
  t1546 = -1.*t1025*t1195*t1476*t1210;
  t1547 = t1545 + t1546;
  t1549 = t1051*t1476*t1120;
  t1550 = t1240*t1543;
  t1551 = t1549 + t1550;
  t1553 = t1240*t1476*t1120;
  t1554 = -1.*t1051*t1543;
  t1555 = t1553 + t1554;
  t1557 = t1069*t1476*t1120;
  t1558 = t1266*t1547;
  t1559 = t1557 + t1558;
  t1561 = t1266*t1476*t1120;
  t1562 = -1.*t1069*t1547;
  t1563 = t1561 + t1562;
  t1574 = -1.*t1080*t1476*t1120;
  t1575 = -1.*t1472*t1210;
  t1576 = t1574 + t1575;
  t1579 = t1472*t1080;
  t1580 = -1.*t1476*t1120*t1210;
  t1581 = t1579 + t1580;
  t1584 = t1115*t1576;
  t1585 = t1081*t1581;
  t1586 = t1584 + t1585;
  t1590 = t1195*t1576;
  t1591 = t1147*t1581;
  t1592 = t1590 + t1591;
  t1400 = -0.15121*t1115;
  t1401 = t1399 + t1400;
  t1403 = t1399 + t1118;
  t1614 = t1080*t1476*t1120;
  t1615 = t1472*t1210;
  t1616 = t1614 + t1615;
  t1619 = -1.*t1115*t1616;
  t1620 = t1619 + t1585;
  t1597 = -1.*t1115*t1581;
  t1633 = t1081*t1616;
  t1634 = t1115*t1581;
  t1635 = t1633 + t1634;
  t1637 = t1025*t1051*t1476;
  t1638 = -1.*t1240*t1635;
  t1639 = t1637 + t1638;
  t1641 = -1.*t1240*t1025*t1476;
  t1642 = -1.*t1051*t1635;
  t1643 = t1641 + t1642;
  t1650 = -1.*t1025*t1051*t1476;
  t1651 = t1240*t1635;
  t1652 = t1650 + t1651;
  t1437 = -0.15121*t1147;
  t1438 = t1437 + t1196;
  t1440 = 0.15121*t1147;
  t1441 = t1440 + t1196;
  t1662 = -1.*t1195*t1616;
  t1663 = t1662 + t1591;
  t1601 = -1.*t1195*t1581;
  t1676 = t1147*t1616;
  t1677 = t1195*t1581;
  t1678 = t1676 + t1677;
  t1680 = t1025*t1069*t1476;
  t1681 = -1.*t1266*t1678;
  t1682 = t1680 + t1681;
  t1684 = -1.*t1266*t1025*t1476;
  t1685 = -1.*t1069*t1678;
  t1686 = t1684 + t1685;
  t1693 = -1.*t1025*t1069*t1476;
  t1694 = t1266*t1678;
  t1695 = t1693 + t1694;
  p_output1[0]=0.28121*t1025*t1051 - 0.28121*t1025*t1069 - 1.*t1080*t1119*t1120 + t1080*t1120*t1197 + t1120*t1206*t1210 + 0.15121*(t1080*t1115*t1120 + t1081*t1120*t1210) + 0.15121*(t1080*t1120*t1195 + t1120*t1147*t1210) - 1.*t1120*t1210*t1213 - 0.28121*t1242*t1258 + 0.28121*t1283*t1298 - 0.50321*t1303*t1306 - 0.50321*t1308*t1314 - 0.19821*(t1300*t1306 - 1.*t1308*t1314) + 0.50321*t1319*t1322 + 0.50321*t1324*t1330 + 0.19821*(t1316*t1322 - 1.*t1324*t1330);
  p_output1[1]=-1.*t1025*t1080*t1206 - 1.*t1025*t1119*t1210 + t1025*t1197*t1210 + t1025*t1080*t1213 + t1359 + t1360 + t1361 + t1368 + t1369 + t1370 + t1376 + t1380 + t1384 + t1391;
  p_output1[2]=t1359 + t1360 + t1361 + t1376 + t1384 + t1025*t1080*t1401 - 1.*t1025*t1210*t1403;
  p_output1[3]=0.28121*t1120*t1240 - 0.28121*t1051*t1412 - 0.50321*t1308*t1416 - 0.50321*t1303*t1420 - 0.19821*(-1.*t1308*t1416 + t1300*t1420);
  p_output1[4]=-0.50321*t1300*t1420 - 0.50321*t1308*t1429 - 0.19821*(-1.*t1300*t1420 - 1.*t1308*t1429);
  p_output1[5]=t1368 + t1369 + t1370 + t1380 + t1391 - 1.*t1025*t1080*t1438 + t1025*t1210*t1441;
  p_output1[6]=-0.28121*t1120*t1266 + 0.28121*t1069*t1447 + 0.50321*t1324*t1451 + 0.50321*t1319*t1455 + 0.19821*(-1.*t1324*t1451 + t1316*t1455);
  p_output1[7]=0.50321*t1316*t1455 + 0.50321*t1324*t1464 + 0.19821*(-1.*t1316*t1455 - 1.*t1324*t1464);
  p_output1[8]=-0.28121*t1025*t1051*t1472 + 0.28121*t1025*t1069*t1472 + t1119*t1478 - 1.*t1197*t1478 + t1206*t1483 - 1.*t1213*t1483 + 0.15121*(-1.*t1115*t1478 + t1081*t1483) + 0.15121*(-1.*t1195*t1478 + t1147*t1483) - 0.28121*t1242*t1496 + 0.28121*t1283*t1500 - 0.50321*t1303*t1504 - 0.50321*t1308*t1508 - 0.19821*(t1300*t1504 - 1.*t1308*t1508) + 0.50321*t1319*t1512 + 0.50321*t1324*t1516 + 0.19821*(t1316*t1512 - 1.*t1324*t1516);
  p_output1[9]=t1025*t1080*t1119*t1476 + 0.28121*t1051*t1120*t1476 - 0.28121*t1069*t1120*t1476 - 1.*t1025*t1080*t1197*t1476 - 1.*t1025*t1206*t1210*t1476 + t1025*t1210*t1213*t1476 + 0.15121*(-1.*t1025*t1080*t1115*t1476 - 1.*t1025*t1081*t1210*t1476) + 0.15121*(-1.*t1025*t1080*t1195*t1476 - 1.*t1025*t1147*t1210*t1476) - 0.28121*t1242*t1543 + 0.28121*t1283*t1547 - 0.50321*t1303*t1551 - 0.50321*t1308*t1555 - 0.19821*(t1300*t1551 - 1.*t1308*t1555) + 0.50321*t1319*t1559 + 0.50321*t1324*t1563 + 0.19821*(t1316*t1559 - 1.*t1324*t1563);
  p_output1[10]=t1206*t1576 - 1.*t1213*t1576 + t1119*t1581 - 1.*t1197*t1581 - 0.28121*t1242*t1586 - 0.50321*t1240*t1303*t1586 + 0.50321*t1051*t1308*t1586 - 0.19821*(t1240*t1300*t1586 + t1051*t1308*t1586) + 0.28121*t1283*t1592 + 0.50321*t1266*t1319*t1592 - 0.50321*t1069*t1324*t1592 + 0.19821*(t1266*t1316*t1592 + t1069*t1324*t1592) + 0.15121*(t1081*t1576 + t1597) + 0.15121*(t1147*t1576 + t1601);
  p_output1[11]=t1403*t1581 + t1401*t1616 + 0.15121*(t1597 - 1.*t1081*t1616) - 0.28121*t1242*t1620 - 0.50321*t1240*t1303*t1620 + 0.50321*t1051*t1308*t1620 - 0.19821*(t1240*t1300*t1620 + t1051*t1308*t1620);
  p_output1[12]=-0.28121*t1025*t1240*t1476 - 0.28121*t1051*t1635 - 0.50321*t1308*t1639 - 0.50321*t1303*t1643 - 0.19821*(-1.*t1308*t1639 + t1300*t1643);
  p_output1[13]=-0.50321*t1300*t1643 - 0.50321*t1308*t1652 - 0.19821*(-1.*t1300*t1643 - 1.*t1308*t1652);
  p_output1[14]=-1.*t1441*t1581 - 1.*t1438*t1616 + 0.15121*(t1601 - 1.*t1147*t1616) + 0.28121*t1283*t1663 + 0.50321*t1266*t1319*t1663 - 0.50321*t1069*t1324*t1663 + 0.19821*(t1266*t1316*t1663 + t1069*t1324*t1663);
  p_output1[15]=0.28121*t1025*t1266*t1476 + 0.28121*t1069*t1678 + 0.50321*t1324*t1682 + 0.50321*t1319*t1686 + 0.19821*(-1.*t1324*t1682 + t1316*t1686);
  p_output1[16]=0.50321*t1316*t1686 + 0.50321*t1324*t1695 + 0.19821*(-1.*t1316*t1686 - 1.*t1324*t1695);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_step_distance_rear_DiagonalStance.hh"

namespace DiagonalStance
{

void J_step_distance_rear_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
