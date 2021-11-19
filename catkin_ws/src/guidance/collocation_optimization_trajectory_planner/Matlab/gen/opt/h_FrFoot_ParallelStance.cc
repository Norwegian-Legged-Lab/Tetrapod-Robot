/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:30:07 GMT+01:00
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
  double t553;
  double t63;
  double t94;
  double t209;
  double t257;
  double t323;
  double t360;
  double t558;
  double t650;
  double t749;
  double t876;
  double t70;
  double t1097;
  double t1034;
  double t1225;
  double t1265;
  double t1271;
  double t1312;
  double t1325;
  double t1334;
  double t1345;
  double t1350;
  double t1387;
  double t1401;
  double t1524;
  double t1438;
  double t1449;
  double t1464;
  double t1465;
  double t1472;
  double t1477;
  double t1581;
  double t1586;
  double t1590;
  double t1624;
  double t1820;
  double t1821;
  double t1829;
  double t1836;
  double t1840;
  double t1844;
  double t514;
  double t667;
  double t778;
  double t993;
  double t1016;
  double t320;
  double t405;
  double t2071;
  double t1058;
  double t1096;
  double t2086;
  double t1159;
  double t1170;
  double t1213;
  double t1214;
  double t1219;
  double t2083;
  double t2087;
  double t2088;
  double t2097;
  double t2104;
  double t2110;
  double t1296;
  double t1301;
  double t1304;
  double t1389;
  double t1413;
  double t1416;
  double t2135;
  double t2143;
  double t2147;
  double t2151;
  double t2157;
  double t2162;
  double t1514;
  double t1518;
  double t1530;
  double t1542;
  double t1544;
  double t1716;
  double t1721;
  double t1725;
  double t1765;
  double t1797;
  double t2189;
  double t2200;
  double t2201;
  double t2219;
  double t2227;
  double t2234;
  double t2237;
  double t2240;
  double t1854;
  double t1876;
  double t2250;
  double t2257;
  double t2258;
  double t2262;
  double t1965;
  double t1983;
  double t2380;
  double t2381;
  double t2382;
  double t2396;
  double t2398;
  double t2408;
  double t2415;
  double t2432;
  double t2439;
  double t2459;
  double t2460;
  double t2462;
  double t2471;
  double t2473;
  double t2474;
  double t2475;
  double t2481;
  double t2483;
  double t2485;
  double t2488;
  double t2497;
  double t2498;
  double t2503;
  double t2509;
  t553 = Cos(var1[10]);
  t63 = Cos(var1[4]);
  t94 = Cos(var1[9]);
  t209 = -1.*t94;
  t257 = 1. + t209;
  t323 = Sin(var1[9]);
  t360 = -0.15121*t323;
  t558 = -1.*t553;
  t650 = 1. + t558;
  t749 = -1. + t553;
  t876 = Sin(var1[10]);
  t70 = Cos(var1[5]);
  t1097 = Sin(var1[5]);
  t1034 = Sin(var1[4]);
  t1225 = -1.*t63*t70*t323;
  t1265 = -1.*t94*t63*t1097;
  t1271 = t1225 + t1265;
  t1312 = t94*t63*t70;
  t1325 = -1.*t63*t323*t1097;
  t1334 = t1312 + t1325;
  t1345 = Cos(var1[11]);
  t1350 = -1.*t1345;
  t1387 = 1. + t1350;
  t1401 = Sin(var1[11]);
  t1524 = -1. + t1345;
  t1438 = t876*t1034;
  t1449 = -4.e-6*t876*t1271;
  t1464 = -1.000000000016*t650;
  t1465 = 1. + t1464;
  t1472 = t1465*t1334;
  t1477 = t1438 + t1449 + t1472;
  t1581 = t553*t1034;
  t1586 = 4.e-6*t650*t1271;
  t1590 = -1.*t876*t1334;
  t1624 = t1581 + t1586 + t1590;
  t1820 = 4.e-6*t650*t1034;
  t1821 = 1.6e-11*t749;
  t1829 = 1. + t1821;
  t1836 = t1829*t1271;
  t1840 = 4.e-6*t876*t1334;
  t1844 = t1820 + t1836 + t1840;
  t514 = -4.9936e-13*var1[10];
  t667 = -0.038749*t650;
  t778 = 6.19984e-13*t749;
  t993 = -0.281210000004*t876;
  t1016 = t514 + t667 + t778 + t993;
  t320 = 0.15121*t257;
  t405 = t320 + t360;
  t2071 = Sin(var1[3]);
  t1058 = -0.15121*t257;
  t1096 = t1058 + t360;
  t2086 = Cos(var1[3]);
  t1159 = -1.2484e-7*var1[10];
  t1170 = 2.479936e-18*t650;
  t1213 = -1.54996e-7*t749;
  t1214 = 1.124840000016e-6*t876;
  t1219 = t1159 + t1170 + t1213 + t1214;
  t2083 = t70*t2071*t1034;
  t2087 = t2086*t1097;
  t2088 = t2083 + t2087;
  t2097 = t2086*t70;
  t2104 = -1.*t2071*t1034*t1097;
  t2110 = t2097 + t2104;
  t1296 = 0.281210000008499*t650;
  t1301 = -0.03874900000062*t876;
  t1304 = t1296 + t1301;
  t1389 = 0.50315000001605*t1387;
  t1413 = -0.0398890000006382*t1401;
  t1416 = t1389 + t1413;
  t2135 = -1.*t323*t2088;
  t2143 = t94*t2110;
  t2147 = t2135 + t2143;
  t2151 = t94*t2088;
  t2157 = t323*t2110;
  t2162 = t2151 + t2157;
  t1514 = -5.04e-14*var1[11];
  t1518 = -0.039889*t1387;
  t1530 = 6.38224e-13*t1524;
  t1542 = -0.503150000008*t1401;
  t1544 = t1514 + t1518 + t1530 + t1542;
  t1716 = -1.26e-8*var1[11];
  t1721 = 2.552896e-18*t1387;
  t1725 = -1.59556e-7*t1524;
  t1765 = 2.012600000032e-6*t1401;
  t1797 = t1716 + t1721 + t1725 + t1765;
  t2189 = -1.*t63*t876*t2071;
  t2200 = -4.e-6*t876*t2147;
  t2201 = t1465*t2162;
  t2219 = t2189 + t2200 + t2201;
  t2227 = -1.*t553*t63*t2071;
  t2234 = 4.e-6*t650*t2147;
  t2237 = -1.*t876*t2162;
  t2240 = t2227 + t2234 + t2237;
  t1854 = 1.6e-11*t1524;
  t1876 = 1. + t1854;
  t2250 = -4.e-6*t650*t63*t2071;
  t2257 = t1829*t2147;
  t2258 = 4.e-6*t876*t2162;
  t2262 = t2250 + t2257 + t2258;
  t1965 = -1.000000000016*t1387;
  t1983 = 1. + t1965;
  t2380 = -1.*t2086*t70*t1034;
  t2381 = t2071*t1097;
  t2382 = t2380 + t2381;
  t2396 = t70*t2071;
  t2398 = t2086*t1034*t1097;
  t2408 = t2396 + t2398;
  t2415 = -1.*t323*t2382;
  t2432 = t94*t2408;
  t2439 = t2415 + t2432;
  t2459 = t94*t2382;
  t2460 = t323*t2408;
  t2462 = t2459 + t2460;
  t2471 = t2086*t63*t876;
  t2473 = -4.e-6*t876*t2439;
  t2474 = t1465*t2462;
  t2475 = t2471 + t2473 + t2474;
  t2481 = t553*t2086*t63;
  t2483 = 4.e-6*t650*t2439;
  t2485 = -1.*t876*t2462;
  t2488 = t2481 + t2483 + t2485;
  t2497 = 4.e-6*t650*t2086*t63;
  t2498 = t1829*t2439;
  t2503 = 4.e-6*t876*t2462;
  t2509 = t2497 + t2498 + t2503;
  p_output1[0]=t1016*t1034 + t1219*t1271 + t1304*t1334 + t1416*t1477 + t1544*t1624 + t1797*t1844 - 0.041195*(-1.*t1401*t1477 + t1345*t1624 + 4.e-6*t1387*t1844) - 0.14871*(4.e-6*t1401*t1477 + 4.e-6*t1387*t1624 + t1844*t1876) + 0.803147*(t1401*t1624 - 4.e-6*t1401*t1844 + t1477*t1983) - 1.*t1096*t1097*t63 + t405*t63*t70 + var1[0] - 1.*var2[0];
  p_output1[1]=t1096*t2110 + t1219*t2147 + t1304*t2162 + t1416*t2219 + t1544*t2240 + t1797*t2262 - 0.041195*(-1.*t1401*t2219 + t1345*t2240 + 4.e-6*t1387*t2262) + 0.803147*(t1983*t2219 + t1401*t2240 - 4.e-6*t1401*t2262) - 0.14871*(4.e-6*t1401*t2219 + 4.e-6*t1387*t2240 + t1876*t2262) + t2088*t405 - 1.*t1016*t2071*t63 + var1[1] - 1.*var2[1];
  p_output1[2]=t1096*t2408 + t1219*t2439 + t1304*t2462 + t1416*t2475 + t1544*t2488 + t1797*t2509 - 0.041195*(-1.*t1401*t2475 + t1345*t2488 + 4.e-6*t1387*t2509) + 0.803147*(t1983*t2475 + t1401*t2488 - 4.e-6*t1401*t2509) - 0.14871*(4.e-6*t1401*t2475 + 4.e-6*t1387*t2488 + t1876*t2509) + t2382*t405 + t1016*t2086*t63 + var1[2] - 1.*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_FrFoot_ParallelStance.hh"

namespace ParallelStance
{

void h_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
