/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:07:35 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t990;
  double t855;
  double t1022;
  double t1171;
  double t1114;
  double t1149;
  double t1182;
  double t851;
  double t1150;
  double t1203;
  double t1204;
  double t1033;
  double t1251;
  double t1252;
  double t1264;
  double t1227;
  double t1322;
  double t1326;
  double t1269;
  double t1278;
  double t1279;
  double t1298;
  double t1299;
  double t1303;
  double t1304;
  double t1307;
  double t1308;
  double t1327;
  double t1332;
  double t1333;
  double t1343;
  double t1346;
  double t1347;
  double t1351;
  double t1354;
  double t1356;
  double t1364;
  double t1367;
  double t1368;
  double t1372;
  double t1375;
  double t1377;
  double t1224;
  double t1283;
  double t1284;
  double t1416;
  double t1417;
  double t1419;
  double t1422;
  double t1423;
  double t1424;
  double t1425;
  double t1426;
  double t1428;
  double t988;
  double t1057;
  double t1058;
  double t1414;
  double t1421;
  double t1429;
  double t1430;
  double t1434;
  double t1435;
  double t1436;
  double t1437;
  double t1439;
  double t1440;
  double t1410;
  double t1411;
  double t1412;
  double t1413;
  double t1431;
  double t1432;
  double t1449;
  double t1450;
  double t1451;
  double t1458;
  double t1459;
  double t1460;
  double t1433;
  double t1441;
  double t1442;
  double t1456;
  double t1461;
  double t1462;
  double t1464;
  double t1465;
  double t1466;
  double t1291;
  double t1311;
  double t1312;
  double t1443;
  double t1470;
  double t1479;
  double t1487;
  double t1494;
  double t1501;
  double t1593;
  double t1613;
  double t1512;
  double t1520;
  double t1574;
  double t1541;
  double t1669;
  double t1660;
  t990 = Cos(var1[12]);
  t855 = Sin(var1[4]);
  t1022 = Cos(var1[4]);
  t1171 = Cos(var1[13]);
  t1114 = Cos(var1[14]);
  t1149 = Sin(var1[13]);
  t1182 = Sin(var1[14]);
  t851 = Sin(var1[12]);
  t1150 = t1114*t1149;
  t1203 = -1.*t1171*t1182;
  t1204 = t1150 + t1203;
  t1033 = Sin(var1[5]);
  t1251 = t1171*t1114;
  t1252 = t1149*t1182;
  t1264 = t1251 + t1252;
  t1227 = Cos(var1[5]);
  t1322 = Cos(var1[3]);
  t1326 = Sin(var1[3]);
  t1269 = t1227*t1264;
  t1278 = t851*t1204*t1033;
  t1279 = t1269 + t1278;
  t1298 = -1.*t1114*t1149;
  t1299 = t1171*t1182;
  t1303 = t1298 + t1299;
  t1304 = t1227*t1303;
  t1307 = t851*t1264*t1033;
  t1308 = t1304 + t1307;
  t1327 = t1022*t851;
  t1332 = t990*t855*t1033;
  t1333 = t1327 + t1332;
  t1343 = -1.*t1227*t851*t1204;
  t1346 = t1264*t1033;
  t1347 = t1343 + t1346;
  t1351 = t990*t1022*t1204;
  t1354 = -1.*t855*t1279;
  t1356 = t1351 + t1354;
  t1364 = -1.*t1227*t851*t1264;
  t1367 = t1303*t1033;
  t1368 = t1364 + t1367;
  t1372 = t990*t1022*t1264;
  t1375 = -1.*t855*t1308;
  t1377 = t1372 + t1375;
  t1224 = t990*t1204*t855;
  t1283 = t1022*t1279;
  t1284 = t1224 + t1283;
  t1416 = -0.0641*t1114;
  t1417 = -0.28*t1182;
  t1419 = t1416 + t1417;
  t1422 = -1.*t1114;
  t1423 = 1. + t1422;
  t1424 = 0.075*t1423;
  t1425 = 0.355*t1114;
  t1426 = -0.0641*t1182;
  t1428 = t1424 + t1425 + t1426;
  t988 = t851*t855;
  t1057 = -1.*t990*t1022*t1033;
  t1058 = t988 + t1057;
  t1414 = -0.325*t1149;
  t1421 = t1171*t1419;
  t1429 = t1149*t1428;
  t1430 = t1414 + t1421 + t1429;
  t1434 = -1.*t1171;
  t1435 = 1. + t1434;
  t1436 = 0.325*t1435;
  t1437 = -1.*t1149*t1419;
  t1439 = t1171*t1428;
  t1440 = t1436 + t1437 + t1439;
  t1410 = -1.*t990;
  t1411 = 1. + t1410;
  t1412 = -0.1575*t1411;
  t1413 = -0.2255*t990;
  t1431 = -1.*t851*t1430;
  t1432 = t1412 + t1413 + t1431;
  t1449 = -0.068*t851;
  t1450 = t990*t1430;
  t1451 = t1449 + t1450;
  t1458 = t1227*t1440;
  t1459 = -1.*t1432*t1033;
  t1460 = t1458 + t1459;
  t1433 = t1227*t1432;
  t1441 = t1440*t1033;
  t1442 = t1433 + t1441;
  t1456 = t1451*t855;
  t1461 = t1022*t1460;
  t1462 = t1456 + t1461;
  t1464 = t1022*t1451;
  t1465 = -1.*t855*t1460;
  t1466 = t1464 + t1465;
  t1291 = t990*t1264*t855;
  t1311 = t1022*t1308;
  t1312 = t1291 + t1311;
  t1443 = t990*t1227*t1442;
  t1470 = -1.*t1442*t1347;
  t1479 = t1442*t1347;
  t1487 = -1.*t1442*t1368;
  t1494 = -1.*t990*t1227*t1442;
  t1501 = t1442*t1368;
  t1593 = -1.*t851*t1451;
  t1613 = t990*t1451*t1264;
  t1512 = t851*t1451;
  t1520 = -1.*t990*t1451*t1204;
  t1574 = -1.*t990*t1451*t1264;
  t1541 = t990*t1451*t1204;
  t1669 = t1440*t1264;
  t1660 = -1.*t1440*t1303;
  p_output1[0]=t1284*var2[0] + t1058*var2[1] + t1312*var2[2];
  p_output1[1]=(t1322*t1347 - 1.*t1326*t1356)*var2[0] + (-1.*t1326*t1333 + t1227*t1322*t990)*var2[1] + (t1322*t1368 - 1.*t1326*t1377)*var2[2];
  p_output1[2]=(t1326*t1347 + t1322*t1356)*var2[0] + (t1322*t1333 + t1227*t1326*t990)*var2[1] + (t1326*t1368 + t1322*t1377)*var2[2];
  p_output1[3]=(t1312*(-1.*t1058*t1462 - 1.*t1333*t1466 + t1494) + t1058*(t1312*t1462 + t1377*t1466 + t1501))*var2[0] + (t1312*(t1284*t1462 + t1356*t1466 + t1479) + t1284*(-1.*t1312*t1462 - 1.*t1377*t1466 + t1487))*var2[1] + (t1284*(t1443 + t1058*t1462 + t1333*t1466) + t1058*(-1.*t1284*t1462 - 1.*t1356*t1466 + t1470))*var2[2];
  p_output1[4]=(t1227*(t1308*t1460 + t1501 + t1613)*t990 + t1368*(t1494 + t1593 + t1033*t1460*t990))*var2[0] + (t1368*(t1279*t1460 + t1479 + t1541) + t1347*(-1.*t1308*t1460 + t1487 + t1574))*var2[1] + (t1227*(-1.*t1279*t1460 + t1470 + t1520)*t990 + t1347*(t1443 + t1512 - 1.*t1033*t1460*t990))*var2[2];
  p_output1[5]=(t851*(t1303*t1440 + t1613 - 1.*t1264*t1432*t851) + t1264*t990*(t1593 - 1.*t1432*t990))*var2[0] + (t1264*(t1541 + t1669 - 1.*t1204*t1432*t851)*t990 + t1204*(t1574 + t1660 + t1264*t1432*t851)*t990)*var2[1] + (t851*(-1.*t1264*t1440 + t1520 + t1204*t1432*t851) + t1204*t990*(t1512 + t1432*t990))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.1575*t1204 + 0.2255*t1303)*var2[0] + (t1264*(-1.*t1264*t1430 + t1660) + t1303*(t1204*t1430 + t1669))*var2[1] - 0.068*t1264*var2[2];
  p_output1[13]=(0.325*t1182 - 1.*t1114*t1419 - 1.*t1182*t1428)*var2[0] + (-0.325*t1114 - 1.*t1182*t1419 + t1114*t1428)*var2[2];
  p_output1[14]=-0.0641*var2[0] - 0.28*var2[2];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fFrFoot_vec_ParallelStance.hh"

namespace ParallelStance
{

void fFrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
