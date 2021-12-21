/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:09:28 GMT+01:00
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
  double t289;
  double t57;
  double t85;
  double t100;
  double t110;
  double t163;
  double t184;
  double t306;
  double t311;
  double t486;
  double t572;
  double t83;
  double t713;
  double t617;
  double t847;
  double t860;
  double t870;
  double t927;
  double t934;
  double t965;
  double t986;
  double t988;
  double t1002;
  double t1022;
  double t1233;
  double t1121;
  double t1123;
  double t1134;
  double t1140;
  double t1155;
  double t1166;
  double t1316;
  double t1340;
  double t1359;
  double t1369;
  double t1439;
  double t1441;
  double t1448;
  double t1468;
  double t1513;
  double t1523;
  double t252;
  double t379;
  double t542;
  double t615;
  double t616;
  double t155;
  double t232;
  double t1840;
  double t636;
  double t697;
  double t1858;
  double t762;
  double t780;
  double t813;
  double t819;
  double t836;
  double t1848;
  double t1870;
  double t1887;
  double t1932;
  double t1935;
  double t1947;
  double t888;
  double t907;
  double t916;
  double t1004;
  double t1026;
  double t1079;
  double t1953;
  double t1957;
  double t1983;
  double t1986;
  double t2018;
  double t2035;
  double t1208;
  double t1221;
  double t1252;
  double t1254;
  double t1279;
  double t1397;
  double t1411;
  double t1413;
  double t1415;
  double t1431;
  double t2044;
  double t2045;
  double t2052;
  double t2053;
  double t2068;
  double t2089;
  double t2121;
  double t2123;
  double t1625;
  double t1633;
  double t2144;
  double t2150;
  double t2159;
  double t2168;
  double t1772;
  double t1776;
  double t2359;
  double t2360;
  double t2362;
  double t2368;
  double t2384;
  double t2394;
  double t2401;
  double t2406;
  double t2411;
  double t2436;
  double t2440;
  double t2456;
  double t2483;
  double t2492;
  double t2501;
  double t2502;
  double t2508;
  double t2510;
  double t2511;
  double t2526;
  double t2547;
  double t2550;
  double t2577;
  double t2586;
  t289 = Cos(var1[10]);
  t57 = Cos(var1[4]);
  t85 = Cos(var1[9]);
  t100 = -1.*t85;
  t110 = 1. + t100;
  t163 = Sin(var1[9]);
  t184 = -0.15121*t163;
  t306 = -1.*t289;
  t311 = 1. + t306;
  t486 = -1. + t289;
  t572 = Sin(var1[10]);
  t83 = Cos(var1[5]);
  t713 = Sin(var1[5]);
  t617 = Sin(var1[4]);
  t847 = -1.*t57*t83*t163;
  t860 = -1.*t85*t57*t713;
  t870 = t847 + t860;
  t927 = t85*t57*t83;
  t934 = -1.*t57*t163*t713;
  t965 = t927 + t934;
  t986 = Cos(var1[11]);
  t988 = -1.*t986;
  t1002 = 1. + t988;
  t1022 = Sin(var1[11]);
  t1233 = -1. + t986;
  t1121 = t572*t617;
  t1123 = -4.e-6*t572*t870;
  t1134 = -1.000000000016*t311;
  t1140 = 1. + t1134;
  t1155 = t1140*t965;
  t1166 = t1121 + t1123 + t1155;
  t1316 = t289*t617;
  t1340 = 4.e-6*t311*t870;
  t1359 = -1.*t572*t965;
  t1369 = t1316 + t1340 + t1359;
  t1439 = 4.e-6*t311*t617;
  t1441 = 1.6e-11*t486;
  t1448 = 1. + t1441;
  t1468 = t1448*t870;
  t1513 = 4.e-6*t572*t965;
  t1523 = t1439 + t1468 + t1513;
  t252 = -4.9936e-13*var1[10];
  t379 = -0.038749*t311;
  t542 = 6.19984e-13*t486;
  t615 = -0.281210000004*t572;
  t616 = t252 + t379 + t542 + t615;
  t155 = 0.15121*t110;
  t232 = t155 + t184;
  t1840 = Sin(var1[3]);
  t636 = -0.15121*t110;
  t697 = t636 + t184;
  t1858 = Cos(var1[3]);
  t762 = -1.2484e-7*var1[10];
  t780 = 2.479936e-18*t311;
  t813 = -1.54996e-7*t486;
  t819 = 1.124840000016e-6*t572;
  t836 = t762 + t780 + t813 + t819;
  t1848 = t83*t1840*t617;
  t1870 = t1858*t713;
  t1887 = t1848 + t1870;
  t1932 = t1858*t83;
  t1935 = -1.*t1840*t617*t713;
  t1947 = t1932 + t1935;
  t888 = 0.281210000008499*t311;
  t907 = -0.03874900000062*t572;
  t916 = t888 + t907;
  t1004 = 0.50315000001605*t1002;
  t1026 = -0.0398890000006382*t1022;
  t1079 = t1004 + t1026;
  t1953 = -1.*t163*t1887;
  t1957 = t85*t1947;
  t1983 = t1953 + t1957;
  t1986 = t85*t1887;
  t2018 = t163*t1947;
  t2035 = t1986 + t2018;
  t1208 = -5.04e-14*var1[11];
  t1221 = -0.039889*t1002;
  t1252 = 6.38224e-13*t1233;
  t1254 = -0.503150000008*t1022;
  t1279 = t1208 + t1221 + t1252 + t1254;
  t1397 = -1.26e-8*var1[11];
  t1411 = 2.552896e-18*t1002;
  t1413 = -1.59556e-7*t1233;
  t1415 = 2.012600000032e-6*t1022;
  t1431 = t1397 + t1411 + t1413 + t1415;
  t2044 = -1.*t57*t572*t1840;
  t2045 = -4.e-6*t572*t1983;
  t2052 = t1140*t2035;
  t2053 = t2044 + t2045 + t2052;
  t2068 = -1.*t289*t57*t1840;
  t2089 = 4.e-6*t311*t1983;
  t2121 = -1.*t572*t2035;
  t2123 = t2068 + t2089 + t2121;
  t1625 = 1.6e-11*t1233;
  t1633 = 1. + t1625;
  t2144 = -4.e-6*t311*t57*t1840;
  t2150 = t1448*t1983;
  t2159 = 4.e-6*t572*t2035;
  t2168 = t2144 + t2150 + t2159;
  t1772 = -1.000000000016*t1002;
  t1776 = 1. + t1772;
  t2359 = -1.*t1858*t83*t617;
  t2360 = t1840*t713;
  t2362 = t2359 + t2360;
  t2368 = t83*t1840;
  t2384 = t1858*t617*t713;
  t2394 = t2368 + t2384;
  t2401 = -1.*t163*t2362;
  t2406 = t85*t2394;
  t2411 = t2401 + t2406;
  t2436 = t85*t2362;
  t2440 = t163*t2394;
  t2456 = t2436 + t2440;
  t2483 = t1858*t57*t572;
  t2492 = -4.e-6*t572*t2411;
  t2501 = t1140*t2456;
  t2502 = t2483 + t2492 + t2501;
  t2508 = t289*t1858*t57;
  t2510 = 4.e-6*t311*t2411;
  t2511 = -1.*t572*t2456;
  t2526 = t2508 + t2510 + t2511;
  t2547 = 4.e-6*t311*t1858*t57;
  t2550 = t1448*t2411;
  t2577 = 4.e-6*t572*t2456;
  t2586 = t2547 + t2550 + t2577;
  p_output1[0]=t1079*t1166 + t1279*t1369 + t1431*t1523 - 0.14871*(4.e-6*t1022*t1166 + 4.e-6*t1002*t1369 + t1523*t1633) + 0.803147*(t1022*t1369 - 4.e-6*t1022*t1523 + t1166*t1776) + t616*t617 - 1.*t57*t697*t713 + t232*t57*t83 + t836*t870 + t916*t965 - 0.041195*(-1.*t1022*t1166 + 4.e-6*t1002*t1523 + t1369*t986) + var1[0] - 1.*var2[0];
  p_output1[1]=t1079*t2053 + t1279*t2123 + t1431*t2168 + 0.803147*(t1776*t2053 + t1022*t2123 - 4.e-6*t1022*t2168) - 0.14871*(4.e-6*t1022*t2053 + 4.e-6*t1002*t2123 + t1633*t2168) + t1887*t232 - 1.*t1840*t57*t616 + t1947*t697 + t1983*t836 + t2035*t916 - 0.041195*(-1.*t1022*t2053 + 4.e-6*t1002*t2168 + t2123*t986) + var1[1] - 1.*var2[1];
  p_output1[2]=t232*t2362 + t1079*t2502 + t1279*t2526 + t1431*t2586 + 0.803147*(t1776*t2502 + t1022*t2526 - 4.e-6*t1022*t2586) - 0.14871*(4.e-6*t1022*t2502 + 4.e-6*t1002*t2526 + t1633*t2586) + t1858*t57*t616 + t2394*t697 + t2411*t836 + t2456*t916 - 0.041195*(-1.*t1022*t2502 + 4.e-6*t1002*t2586 + t2526*t986) + var1[2] - 1.*var2[2];
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

#include "h_FrFoot_DiagonalStance1.hh"

namespace DiagonalStance1
{

void h_FrFoot_DiagonalStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
