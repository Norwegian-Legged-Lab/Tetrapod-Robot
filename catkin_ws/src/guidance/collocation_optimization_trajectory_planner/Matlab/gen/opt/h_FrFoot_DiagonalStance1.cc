/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:26:58 GMT+01:00
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
  double t49;
  double t36;
  double t40;
  double t41;
  double t42;
  double t44;
  double t45;
  double t52;
  double t53;
  double t295;
  double t333;
  double t39;
  double t470;
  double t377;
  double t708;
  double t753;
  double t791;
  double t858;
  double t859;
  double t864;
  double t908;
  double t909;
  double t912;
  double t969;
  double t1137;
  double t992;
  double t994;
  double t1008;
  double t1019;
  double t1024;
  double t1047;
  double t1195;
  double t1213;
  double t1265;
  double t1283;
  double t1333;
  double t1352;
  double t1356;
  double t1364;
  double t1450;
  double t1451;
  double t48;
  double t126;
  double t304;
  double t341;
  double t372;
  double t43;
  double t46;
  double t1931;
  double t411;
  double t445;
  double t1972;
  double t527;
  double t539;
  double t556;
  double t577;
  double t645;
  double t1944;
  double t1988;
  double t2021;
  double t2055;
  double t2059;
  double t2062;
  double t815;
  double t841;
  double t852;
  double t953;
  double t973;
  double t981;
  double t2093;
  double t2107;
  double t2108;
  double t2151;
  double t2186;
  double t2198;
  double t1077;
  double t1124;
  double t1148;
  double t1154;
  double t1155;
  double t1300;
  double t1301;
  double t1302;
  double t1323;
  double t1328;
  double t2215;
  double t2229;
  double t2232;
  double t2248;
  double t2284;
  double t2299;
  double t2306;
  double t2307;
  double t1486;
  double t1522;
  double t2311;
  double t2312;
  double t2335;
  double t2340;
  double t1788;
  double t1795;
  double t2548;
  double t2550;
  double t2570;
  double t2579;
  double t2581;
  double t2598;
  double t2619;
  double t2620;
  double t2623;
  double t2643;
  double t2649;
  double t2657;
  double t2661;
  double t2667;
  double t2670;
  double t2695;
  double t2717;
  double t2718;
  double t2757;
  double t2758;
  double t2791;
  double t2811;
  double t2814;
  double t2818;
  t49 = Cos(var1[10]);
  t36 = Cos(var1[4]);
  t40 = Cos(var1[9]);
  t41 = -1.*t40;
  t42 = 1. + t41;
  t44 = Sin(var1[9]);
  t45 = -0.15121*t44;
  t52 = -1.*t49;
  t53 = 1. + t52;
  t295 = -1. + t49;
  t333 = Sin(var1[10]);
  t39 = Cos(var1[5]);
  t470 = Sin(var1[5]);
  t377 = Sin(var1[4]);
  t708 = -1.*t36*t39*t44;
  t753 = -1.*t40*t36*t470;
  t791 = t708 + t753;
  t858 = t40*t36*t39;
  t859 = -1.*t36*t44*t470;
  t864 = t858 + t859;
  t908 = Cos(var1[11]);
  t909 = -1.*t908;
  t912 = 1. + t909;
  t969 = Sin(var1[11]);
  t1137 = -1. + t908;
  t992 = t333*t377;
  t994 = -4.e-6*t333*t791;
  t1008 = -1.000000000016*t53;
  t1019 = 1. + t1008;
  t1024 = t1019*t864;
  t1047 = t992 + t994 + t1024;
  t1195 = t49*t377;
  t1213 = 4.e-6*t53*t791;
  t1265 = -1.*t333*t864;
  t1283 = t1195 + t1213 + t1265;
  t1333 = 4.e-6*t53*t377;
  t1352 = 1.6e-11*t295;
  t1356 = 1. + t1352;
  t1364 = t1356*t791;
  t1450 = 4.e-6*t333*t864;
  t1451 = t1333 + t1364 + t1450;
  t48 = -4.9936e-13*var1[10];
  t126 = -0.038749*t53;
  t304 = 6.19984e-13*t295;
  t341 = -0.281210000004*t333;
  t372 = t48 + t126 + t304 + t341;
  t43 = 0.15121*t42;
  t46 = t43 + t45;
  t1931 = Sin(var1[3]);
  t411 = -0.15121*t42;
  t445 = t411 + t45;
  t1972 = Cos(var1[3]);
  t527 = -1.2484e-7*var1[10];
  t539 = 2.479936e-18*t53;
  t556 = -1.54996e-7*t295;
  t577 = 1.124840000016e-6*t333;
  t645 = t527 + t539 + t556 + t577;
  t1944 = t39*t1931*t377;
  t1988 = t1972*t470;
  t2021 = t1944 + t1988;
  t2055 = t1972*t39;
  t2059 = -1.*t1931*t377*t470;
  t2062 = t2055 + t2059;
  t815 = 0.281210000008499*t53;
  t841 = -0.03874900000062*t333;
  t852 = t815 + t841;
  t953 = 0.50315000001605*t912;
  t973 = -0.0398890000006382*t969;
  t981 = t953 + t973;
  t2093 = -1.*t44*t2021;
  t2107 = t40*t2062;
  t2108 = t2093 + t2107;
  t2151 = t40*t2021;
  t2186 = t44*t2062;
  t2198 = t2151 + t2186;
  t1077 = -5.04e-14*var1[11];
  t1124 = -0.039889*t912;
  t1148 = 6.38224e-13*t1137;
  t1154 = -0.503150000008*t969;
  t1155 = t1077 + t1124 + t1148 + t1154;
  t1300 = -1.26e-8*var1[11];
  t1301 = 2.552896e-18*t912;
  t1302 = -1.59556e-7*t1137;
  t1323 = 2.012600000032e-6*t969;
  t1328 = t1300 + t1301 + t1302 + t1323;
  t2215 = -1.*t36*t333*t1931;
  t2229 = -4.e-6*t333*t2108;
  t2232 = t1019*t2198;
  t2248 = t2215 + t2229 + t2232;
  t2284 = -1.*t49*t36*t1931;
  t2299 = 4.e-6*t53*t2108;
  t2306 = -1.*t333*t2198;
  t2307 = t2284 + t2299 + t2306;
  t1486 = 1.6e-11*t1137;
  t1522 = 1. + t1486;
  t2311 = -4.e-6*t53*t36*t1931;
  t2312 = t1356*t2108;
  t2335 = 4.e-6*t333*t2198;
  t2340 = t2311 + t2312 + t2335;
  t1788 = -1.000000000016*t912;
  t1795 = 1. + t1788;
  t2548 = -1.*t1972*t39*t377;
  t2550 = t1931*t470;
  t2570 = t2548 + t2550;
  t2579 = t39*t1931;
  t2581 = t1972*t377*t470;
  t2598 = t2579 + t2581;
  t2619 = -1.*t44*t2570;
  t2620 = t40*t2598;
  t2623 = t2619 + t2620;
  t2643 = t40*t2570;
  t2649 = t44*t2598;
  t2657 = t2643 + t2649;
  t2661 = t1972*t36*t333;
  t2667 = -4.e-6*t333*t2623;
  t2670 = t1019*t2657;
  t2695 = t2661 + t2667 + t2670;
  t2717 = t49*t1972*t36;
  t2718 = 4.e-6*t53*t2623;
  t2757 = -1.*t333*t2657;
  t2758 = t2717 + t2718 + t2757;
  t2791 = 4.e-6*t53*t1972*t36;
  t2811 = t1356*t2623;
  t2814 = 4.e-6*t333*t2657;
  t2818 = t2791 + t2811 + t2814;
  p_output1[0]=t1155*t1283 + t1328*t1451 + t372*t377 + t36*t39*t46 - 1.*t36*t445*t470 + t645*t791 + t852*t864 - 0.041195*(t1283*t908 + 4.e-6*t1451*t912 - 1.*t1047*t969) - 0.14871*(t1451*t1522 + 4.e-6*t1283*t912 + 4.e-6*t1047*t969) + 0.803147*(t1047*t1795 + t1283*t969 - 4.e-6*t1451*t969) + t1047*t981 + var1[0] - 1.*var2[0];
  p_output1[1]=t1155*t2307 + t1328*t2340 - 1.*t1931*t36*t372 + t2062*t445 + t2021*t46 + t2108*t645 + t2198*t852 - 0.041195*(t2307*t908 + 4.e-6*t2340*t912 - 1.*t2248*t969) - 0.14871*(t1522*t2340 + 4.e-6*t2307*t912 + 4.e-6*t2248*t969) + 0.803147*(t1795*t2248 + t2307*t969 - 4.e-6*t2340*t969) + t2248*t981 + var1[1] - 1.*var2[1];
  p_output1[2]=t1155*t2758 + t1328*t2818 + t1972*t36*t372 + t2598*t445 + t2570*t46 + t2623*t645 + t2657*t852 - 0.041195*(t2758*t908 + 4.e-6*t2818*t912 - 1.*t2695*t969) - 0.14871*(t1522*t2818 + 4.e-6*t2758*t912 + 4.e-6*t2695*t969) + 0.803147*(t1795*t2695 + t2758*t969 - 4.e-6*t2818*t969) + t2695*t981 + var1[2] - 1.*var2[2];
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
