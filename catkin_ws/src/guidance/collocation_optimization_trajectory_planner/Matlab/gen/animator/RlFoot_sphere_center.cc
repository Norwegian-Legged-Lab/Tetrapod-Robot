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
  double t1079;
  double t1083;
  double t1087;
  double t1100;
  double t59;
  double t176;
  double t314;
  double t563;
  double t904;
  double t955;
  double t1099;
  double t94;
  double t1186;
  double t1160;
  double t1197;
  double t1304;
  double t1307;
  double t1308;
  double t1312;
  double t1214;
  double t1178;
  double t1237;
  double t1202;
  double t1204;
  double t1205;
  double t1272;
  double t1275;
  double t1282;
  double t1319;
  double t1190;
  double t1338;
  double t1198;
  double t1352;
  double t1311;
  double t1378;
  double t1379;
  double t1127;
  double t1331;
  double t1335;
  double t1336;
  double t1340;
  double t1341;
  double t1342;
  double t1343;
  double t1344;
  double t1346;
  double t1391;
  double t1380;
  double t1381;
  double t1382;
  double t1383;
  double t1384;
  double t1385;
  double t1386;
  double t1387;
  double t1398;
  double t1399;
  double t1402;
  double t1403;
  double t1404;
  double t1405;
  double t1406;
  double t1407;
  double t1325;
  double t1409;
  double t1313;
  double t1426;
  double t1361;
  double t1412;
  double t1413;
  double t1354;
  double t1061;
  double t1091;
  double t1133;
  double t1159;
  double t1164;
  double t1169;
  double t1174;
  double t672;
  double t1012;
  double t1446;
  double t1182;
  double t1185;
  double t1451;
  double t1188;
  double t1189;
  double t1191;
  double t1192;
  double t1199;
  double t1200;
  double t1201;
  double t1450;
  double t1459;
  double t1460;
  double t1462;
  double t1463;
  double t1464;
  double t1209;
  double t1210;
  double t1226;
  double t1234;
  double t1238;
  double t1239;
  double t1262;
  double t1302;
  double t1309;
  double t1314;
  double t1316;
  double t1326;
  double t1327;
  double t1329;
  double t1470;
  double t1475;
  double t1477;
  double t1482;
  double t1488;
  double t1489;
  double t1349;
  double t1350;
  double t1357;
  double t1360;
  double t1368;
  double t1370;
  double t1373;
  double t1389;
  double t1390;
  double t1392;
  double t1393;
  double t1394;
  double t1396;
  double t1397;
  double t1410;
  double t1492;
  double t1497;
  double t1498;
  double t1501;
  double t1414;
  double t1505;
  double t1507;
  double t1513;
  double t1514;
  double t1416;
  double t1418;
  double t1516;
  double t1517;
  double t1518;
  double t1519;
  double t1423;
  double t1424;
  double t1427;
  double t1430;
  double t1436;
  double t1438;
  double t1439;
  double t1441;
  double t1538;
  double t1539;
  double t1540;
  double t1542;
  double t1543;
  double t1544;
  double t1546;
  double t1547;
  double t1548;
  double t1550;
  double t1551;
  double t1552;
  double t1554;
  double t1555;
  double t1556;
  double t1557;
  double t1559;
  double t1560;
  double t1561;
  double t1562;
  double t1564;
  double t1565;
  double t1566;
  double t1567;
  t1079 = Cos(var1[13]);
  t1083 = -1.*t1079;
  t1087 = 1. + t1083;
  t1100 = Sin(var1[13]);
  t59 = Cos(var1[4]);
  t176 = Cos(var1[12]);
  t314 = -1.*t176;
  t563 = 1. + t314;
  t904 = Sin(var1[12]);
  t955 = 0.15121*t904;
  t1099 = 4.e-6*t1087;
  t94 = Cos(var1[5]);
  t1186 = Sin(var1[5]);
  t1160 = -2.8e-11*t1087;
  t1197 = 7.e-6*t1087;
  t1304 = Cos(var1[14]);
  t1307 = -1.*t1304;
  t1308 = 1. + t1307;
  t1312 = Sin(var1[14]);
  t1214 = -1.*t1100;
  t1178 = Sin(var1[4]);
  t1237 = -4.e-6*t1100;
  t1202 = -1.*t59*t94*t904;
  t1204 = -1.*t176*t59*t1186;
  t1205 = t1202 + t1204;
  t1272 = t176*t59*t94;
  t1275 = -1.*t59*t904*t1186;
  t1282 = t1272 + t1275;
  t1319 = 7.e-6*t1308;
  t1190 = -7.e-6*t1100;
  t1338 = -7.e-6*t1087;
  t1198 = 4.e-6*t1100;
  t1352 = 4.e-6*t1308;
  t1311 = -2.8e-11*t1308;
  t1378 = -1. + t1079;
  t1379 = 4.e-6*t1378;
  t1127 = 7.e-6*t1100;
  t1331 = 2.8e-11*t1087;
  t1335 = t1331 + t1214;
  t1336 = t1335*t1178;
  t1340 = t1338 + t1237;
  t1341 = t1340*t1205;
  t1342 = -1.000000000016*t1087;
  t1343 = 1. + t1342;
  t1344 = t1343*t1282;
  t1346 = t1336 + t1341 + t1344;
  t1391 = 7.e-6*t1312;
  t1380 = t1379 + t1190;
  t1381 = t1380*t1178;
  t1382 = -6.5e-11*t1087;
  t1383 = 1. + t1382;
  t1384 = t1383*t1205;
  t1385 = t1338 + t1198;
  t1386 = t1385*t1282;
  t1387 = t1381 + t1384 + t1386;
  t1398 = -1.000000000049*t1087;
  t1399 = 1. + t1398;
  t1402 = t1399*t1178;
  t1403 = t1379 + t1127;
  t1404 = t1403*t1205;
  t1405 = t1331 + t1100;
  t1406 = t1405*t1282;
  t1407 = t1402 + t1404 + t1406;
  t1325 = -4.e-6*t1312;
  t1409 = 2.8e-11*t1308;
  t1313 = -1.*t1312;
  t1426 = -7.e-6*t1308;
  t1361 = 4.e-6*t1312;
  t1412 = -1. + t1304;
  t1413 = 4.e-6*t1412;
  t1354 = -7.e-6*t1312;
  t1061 = 5.856279999999999e-13*var1[13];
  t1091 = -0.0387489999948987*t1087;
  t1133 = t1099 + t1127;
  t1159 = -2.123459e-6*t1133;
  t1164 = t1160 + t1100;
  t1169 = -0.281209000004*t1164;
  t1174 = t1061 + t1091 + t1159 + t1169;
  t672 = -0.15121*t563;
  t1012 = t672 + t955;
  t1446 = Sin(var1[3]);
  t1182 = 0.15121*t563;
  t1185 = t1182 + t955;
  t1451 = Cos(var1[3]);
  t1188 = -1.4640699999999997e-7*var1[13];
  t1189 = -1.38024835e-16*t1087;
  t1191 = t1099 + t1190;
  t1192 = -0.038748999993*t1191;
  t1199 = t1197 + t1198;
  t1200 = -0.281209000004*t1199;
  t1201 = t1188 + t1189 + t1192 + t1200;
  t1450 = t94*t1446*t1178;
  t1459 = t1451*t1186;
  t1460 = t1450 + t1459;
  t1462 = t1451*t94;
  t1463 = -1.*t1446*t1178*t1186;
  t1464 = t1462 + t1463;
  t1209 = 1.0248489999999998e-12*var1[13];
  t1210 = -0.28120900000849935*t1087;
  t1226 = t1160 + t1214;
  t1234 = -0.038748999993*t1226;
  t1238 = t1197 + t1237;
  t1239 = -2.123459e-6*t1238;
  t1262 = t1209 + t1210 + t1234 + t1239;
  t1302 = 1.8190549999999993e-12*var1[14];
  t1309 = -0.5031490000160505*t1308;
  t1314 = t1311 + t1313;
  t1316 = -0.038922999986*t1314;
  t1326 = t1319 + t1325;
  t1327 = -3.6777349999999994e-6*t1326;
  t1329 = t1302 + t1309 + t1316 + t1327;
  t1470 = -1.*t904*t1460;
  t1475 = t176*t1464;
  t1477 = t1470 + t1475;
  t1482 = t176*t1460;
  t1488 = t904*t1464;
  t1489 = t1482 + t1488;
  t1349 = -2.598649999999999e-7*var1[14];
  t1350 = -2.3905277499999995e-16*t1308;
  t1357 = t1352 + t1354;
  t1360 = -0.038922999986*t1357;
  t1368 = t1319 + t1361;
  t1370 = -0.503149000008*t1368;
  t1373 = t1349 + t1350 + t1360 + t1370;
  t1389 = 1.0394599999999997e-12*var1[14];
  t1390 = -0.03892299998790722*t1308;
  t1392 = t1352 + t1391;
  t1393 = -3.6777349999999994e-6*t1392;
  t1394 = t1311 + t1312;
  t1396 = -0.503149000008*t1394;
  t1397 = t1389 + t1390 + t1393 + t1396;
  t1410 = t1409 + t1312;
  t1492 = -1.*t59*t1335*t1446;
  t1497 = t1340*t1477;
  t1498 = t1343*t1489;
  t1501 = t1492 + t1497 + t1498;
  t1414 = t1413 + t1391;
  t1505 = -1.*t59*t1380*t1446;
  t1507 = t1383*t1477;
  t1513 = t1385*t1489;
  t1514 = t1505 + t1507 + t1513;
  t1416 = -1.000000000049*t1308;
  t1418 = 1. + t1416;
  t1516 = -1.*t1399*t59*t1446;
  t1517 = t1403*t1477;
  t1518 = t1405*t1489;
  t1519 = t1516 + t1517 + t1518;
  t1423 = -1.000000000016*t1308;
  t1424 = 1. + t1423;
  t1427 = t1426 + t1325;
  t1430 = t1409 + t1313;
  t1436 = t1426 + t1361;
  t1438 = -6.5e-11*t1308;
  t1439 = 1. + t1438;
  t1441 = t1413 + t1354;
  t1538 = -1.*t1451*t94*t1178;
  t1539 = t1446*t1186;
  t1540 = t1538 + t1539;
  t1542 = t94*t1446;
  t1543 = t1451*t1178*t1186;
  t1544 = t1542 + t1543;
  t1546 = -1.*t904*t1540;
  t1547 = t176*t1544;
  t1548 = t1546 + t1547;
  t1550 = t176*t1540;
  t1551 = t904*t1544;
  t1552 = t1550 + t1551;
  t1554 = t1451*t59*t1335;
  t1555 = t1340*t1548;
  t1556 = t1343*t1552;
  t1557 = t1554 + t1555 + t1556;
  t1559 = t1451*t59*t1380;
  t1560 = t1383*t1548;
  t1561 = t1385*t1552;
  t1562 = t1559 + t1560 + t1561;
  t1564 = t1399*t1451*t59;
  t1565 = t1403*t1548;
  t1566 = t1405*t1552;
  t1567 = t1564 + t1565 + t1566;
  p_output1[0]=t1174*t1178 + t1201*t1205 + t1262*t1282 + t1329*t1346 + t1373*t1387 + t1397*t1407 - 0.038924*(t1346*t1410 + t1387*t1414 + t1407*t1418) - 0.80315*(t1346*t1424 + t1387*t1427 + t1407*t1430) + 0.148705*(t1346*t1436 + t1387*t1439 + t1407*t1441) - 1.*t1185*t1186*t59 + t1012*t59*t94 + var1[0];
  p_output1[1]=t1012*t1460 + t1185*t1464 + t1201*t1477 + t1262*t1489 + t1329*t1501 + t1373*t1514 + t1397*t1519 - 0.038924*(t1410*t1501 + t1414*t1514 + t1418*t1519) - 0.80315*(t1424*t1501 + t1427*t1514 + t1430*t1519) + 0.148705*(t1436*t1501 + t1439*t1514 + t1441*t1519) - 1.*t1174*t1446*t59 + var1[1];
  p_output1[2]=t1012*t1540 + t1185*t1544 + t1201*t1548 + t1262*t1552 + t1329*t1557 + t1373*t1562 + t1397*t1567 - 0.038924*(t1410*t1557 + t1414*t1562 + t1418*t1567) - 0.80315*(t1424*t1557 + t1427*t1562 + t1430*t1567) + 0.148705*(t1436*t1557 + t1439*t1562 + t1441*t1567) + t1174*t1451*t59 + var1[2];
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

#include "RlFoot_sphere_center.hh"

namespace SymFunction
{

void RlFoot_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
