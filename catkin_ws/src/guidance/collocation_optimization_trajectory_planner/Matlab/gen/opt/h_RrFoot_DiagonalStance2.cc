/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:30:38 GMT+01:00
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
  double t162;
  double t163;
  double t164;
  double t185;
  double t18;
  double t47;
  double t62;
  double t69;
  double t72;
  double t107;
  double t212;
  double t232;
  double t45;
  double t313;
  double t330;
  double t183;
  double t471;
  double t473;
  double t477;
  double t484;
  double t279;
  double t422;
  double t382;
  double t385;
  double t387;
  double t455;
  double t456;
  double t459;
  double t499;
  double t233;
  double t514;
  double t202;
  double t479;
  double t629;
  double t630;
  double t862;
  double t347;
  double t542;
  double t336;
  double t1201;
  double t524;
  double t527;
  double t546;
  double t556;
  double t563;
  double t564;
  double t574;
  double t576;
  double t1207;
  double t808;
  double t817;
  double t820;
  double t944;
  double t982;
  double t1066;
  double t1069;
  double t1082;
  double t1252;
  double t1278;
  double t1280;
  double t1281;
  double t1282;
  double t1283;
  double t1309;
  double t1341;
  double t606;
  double t1411;
  double t633;
  double t1499;
  double t1375;
  double t485;
  double t154;
  double t174;
  double t204;
  double t208;
  double t250;
  double t251;
  double t262;
  double t122;
  double t136;
  double t1743;
  double t300;
  double t305;
  double t1767;
  double t320;
  double t322;
  double t337;
  double t340;
  double t353;
  double t370;
  double t377;
  double t1752;
  double t1796;
  double t1822;
  double t1841;
  double t1865;
  double t1894;
  double t405;
  double t417;
  double t428;
  double t433;
  double t438;
  double t441;
  double t442;
  double t466;
  double t478;
  double t490;
  double t491;
  double t506;
  double t507;
  double t513;
  double t1938;
  double t1941;
  double t1945;
  double t1972;
  double t1983;
  double t1991;
  double t583;
  double t591;
  double t615;
  double t617;
  double t639;
  double t640;
  double t711;
  double t1151;
  double t1183;
  double t1203;
  double t1204;
  double t1212;
  double t1233;
  double t1251;
  double t1376;
  double t2060;
  double t2062;
  double t2072;
  double t2089;
  double t1420;
  double t2148;
  double t2163;
  double t2193;
  double t2211;
  double t1431;
  double t1464;
  double t2228;
  double t2286;
  double t2318;
  double t2346;
  double t1519;
  double t1522;
  double t1535;
  double t1546;
  double t1601;
  double t1633;
  double t1665;
  double t1676;
  double t2488;
  double t2505;
  double t2514;
  double t2523;
  double t2545;
  double t2554;
  double t2602;
  double t2611;
  double t2617;
  double t2631;
  double t2647;
  double t2683;
  double t2712;
  double t2721;
  double t2740;
  double t2745;
  double t2749;
  double t2752;
  double t2772;
  double t2778;
  double t2873;
  double t2880;
  double t2891;
  double t2894;
  t162 = Cos(var1[16]);
  t163 = -1.*t162;
  t164 = 1. + t163;
  t185 = Sin(var1[16]);
  t18 = Cos(var1[4]);
  t47 = Cos(var1[15]);
  t62 = -1.*t47;
  t69 = 1. + t62;
  t72 = -0.15121*t69;
  t107 = Sin(var1[15]);
  t212 = -1. + t162;
  t232 = 4.e-6*t212;
  t45 = Cos(var1[5]);
  t313 = Sin(var1[5]);
  t330 = 7.e-6*t164;
  t183 = 2.8e-11*t164;
  t471 = Cos(var1[17]);
  t473 = -1.*t471;
  t477 = 1. + t473;
  t484 = Sin(var1[17]);
  t279 = Sin(var1[4]);
  t422 = -4.e-6*t185;
  t382 = -1.*t18*t45*t107;
  t385 = -1.*t47*t18*t313;
  t387 = t382 + t385;
  t455 = t47*t18*t45;
  t456 = -1.*t18*t107*t313;
  t459 = t455 + t456;
  t499 = 2.8e-11*t477;
  t233 = -7.e-6*t185;
  t514 = -2.8e-11*t164;
  t202 = -1.*t185;
  t479 = 7.e-6*t477;
  t629 = -1. + t471;
  t630 = 4.e-6*t629;
  t862 = 4.e-6*t164;
  t347 = 7.e-6*t185;
  t542 = -7.e-6*t164;
  t336 = 4.e-6*t185;
  t1201 = 4.e-6*t484;
  t524 = t514 + t185;
  t527 = t524*t279;
  t546 = t542 + t422;
  t556 = t546*t387;
  t563 = -1.000000000016*t164;
  t564 = 1. + t563;
  t574 = t564*t459;
  t576 = t527 + t556 + t574;
  t1207 = 7.e-6*t484;
  t808 = -1.000000000049*t164;
  t817 = 1. + t808;
  t820 = t817*t279;
  t944 = t862 + t233;
  t982 = t944*t387;
  t1066 = t514 + t202;
  t1069 = t1066*t459;
  t1082 = t820 + t982 + t1069;
  t1252 = t862 + t347;
  t1278 = t1252*t279;
  t1280 = -6.5e-11*t164;
  t1281 = 1. + t1280;
  t1282 = t1281*t387;
  t1283 = t542 + t336;
  t1309 = t1283*t459;
  t1341 = t1278 + t1282 + t1309;
  t606 = -1.*t484;
  t1411 = 4.e-6*t477;
  t633 = -7.e-6*t484;
  t1499 = -2.8e-11*t477;
  t1375 = -7.e-6*t477;
  t485 = -4.e-6*t484;
  t154 = 1.5843479999999999e-12*var1[16];
  t174 = -0.03874900000889869*t164;
  t204 = t183 + t202;
  t208 = -0.281211000004*t204;
  t250 = t232 + t233;
  t251 = -1.8134809999999998e-6*t250;
  t262 = t154 + t174 + t208 + t251;
  t122 = -0.15121*t107;
  t136 = t72 + t122;
  t1743 = Sin(var1[3]);
  t300 = 0.15121*t107;
  t305 = t72 + t300;
  t1767 = Cos(var1[3]);
  t320 = 3.9608699999999997e-7*var1[16];
  t322 = -1.1787626499999999e-16*t164;
  t337 = t330 + t336;
  t340 = -0.281211000004*t337;
  t353 = t232 + t347;
  t370 = -0.038749000006999997*t353;
  t377 = t320 + t322 + t340 + t370;
  t1752 = t45*t1743*t279;
  t1796 = t1767*t313;
  t1822 = t1752 + t1796;
  t1841 = t1767*t45;
  t1865 = -1.*t1743*t279*t313;
  t1894 = t1841 + t1865;
  t405 = -2.7726089999999997e-12*var1[16];
  t417 = -0.2812110000084994*t164;
  t428 = t330 + t422;
  t433 = -1.8134809999999998e-6*t428;
  t438 = t183 + t185;
  t441 = -0.038749000006999997*t438;
  t442 = t405 + t417 + t433 + t441;
  t466 = -1.9784030000000015e-12*var1[17];
  t478 = -0.5031510000160505*t477;
  t490 = t479 + t485;
  t491 = -3.367757e-6*t490;
  t506 = t499 + t484;
  t507 = -0.038575000014*t506;
  t513 = t466 + t478 + t491 + t507;
  t1938 = -1.*t107*t1822;
  t1941 = t47*t1894;
  t1945 = t1938 + t1941;
  t1972 = t47*t1822;
  t1983 = t107*t1894;
  t1991 = t1972 + t1983;
  t583 = 1.1305160000000008e-12*var1[17];
  t591 = -0.03857500001589017*t477;
  t615 = t499 + t606;
  t617 = -0.5031510000080001*t615;
  t639 = t630 + t633;
  t640 = -3.367757e-6*t639;
  t711 = t583 + t591 + t617 + t640;
  t1151 = 2.826290000000002e-7*var1[17];
  t1183 = -2.18904205e-16*t477;
  t1203 = t479 + t1201;
  t1204 = -0.5031510000080001*t1203;
  t1212 = t630 + t1207;
  t1233 = -0.038575000014*t1212;
  t1251 = t1151 + t1183 + t1204 + t1233;
  t1376 = t1375 + t1201;
  t2060 = -1.*t18*t524*t1743;
  t2062 = t546*t1945;
  t2072 = t564*t1991;
  t2089 = t2060 + t2062 + t2072;
  t1420 = t1411 + t1207;
  t2148 = -1.*t817*t18*t1743;
  t2163 = t944*t1945;
  t2193 = t1066*t1991;
  t2211 = t2148 + t2163 + t2193;
  t1431 = -6.5e-11*t477;
  t1464 = 1. + t1431;
  t2228 = -1.*t18*t1252*t1743;
  t2286 = t1281*t1945;
  t2318 = t1283*t1991;
  t2346 = t2228 + t2286 + t2318;
  t1519 = t1499 + t606;
  t1522 = -1.000000000049*t477;
  t1535 = 1. + t1522;
  t1546 = t1411 + t633;
  t1601 = -1.000000000016*t477;
  t1633 = 1. + t1601;
  t1665 = t1499 + t484;
  t1676 = t1375 + t485;
  t2488 = -1.*t1767*t45*t279;
  t2505 = t1743*t313;
  t2514 = t2488 + t2505;
  t2523 = t45*t1743;
  t2545 = t1767*t279*t313;
  t2554 = t2523 + t2545;
  t2602 = -1.*t107*t2514;
  t2611 = t47*t2554;
  t2617 = t2602 + t2611;
  t2631 = t47*t2514;
  t2647 = t107*t2554;
  t2683 = t2631 + t2647;
  t2712 = t1767*t18*t524;
  t2721 = t546*t2617;
  t2740 = t564*t2683;
  t2745 = t2712 + t2721 + t2740;
  t2749 = t817*t1767*t18;
  t2752 = t944*t2617;
  t2772 = t1066*t2683;
  t2778 = t2749 + t2752 + t2772;
  t2873 = t1767*t18*t1252;
  t2880 = t1281*t2617;
  t2891 = t1283*t2683;
  t2894 = t2873 + t2880 + t2891;
  p_output1[0]=t1251*t1341 + t262*t279 - 1.*t18*t305*t313 + t377*t387 + t136*t18*t45 + t442*t459 + t513*t576 - 0.148715*(t1082*t1420 + t1341*t1464 + t1376*t576) - 0.038576*(t1082*t1535 + t1341*t1546 + t1519*t576) - 0.80315*(t1082*t1665 + t1341*t1676 + t1633*t576) + t1082*t711 + var1[0] - 1.*var2[0];
  p_output1[1]=t136*t1822 + t1251*t2346 - 0.148715*(t1376*t2089 + t1420*t2211 + t1464*t2346) - 0.038576*(t1519*t2089 + t1535*t2211 + t1546*t2346) - 0.80315*(t1633*t2089 + t1665*t2211 + t1676*t2346) - 1.*t1743*t18*t262 + t1894*t305 + t1945*t377 + t1991*t442 + t2089*t513 + t2211*t711 + var1[1] - 1.*var2[1];
  p_output1[2]=t136*t2514 + t1767*t18*t262 + t1251*t2894 - 0.148715*(t1376*t2745 + t1420*t2778 + t1464*t2894) - 0.038576*(t1519*t2745 + t1535*t2778 + t1546*t2894) - 0.80315*(t1633*t2745 + t1665*t2778 + t1676*t2894) + t2554*t305 + t2617*t377 + t2683*t442 + t2745*t513 + t2778*t711 + var1[2] - 1.*var2[2];
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

#include "h_RrFoot_DiagonalStance2.hh"

namespace DiagonalStance2
{

void h_RrFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
