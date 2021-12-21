/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:15:07 GMT+01:00
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
  double t152;
  double t221;
  double t258;
  double t416;
  double t532;
  double t624;
  double t173;
  double t1224;
  double t1958;
  double t1968;
  double t1976;
  double t1979;
  double t2127;
  double t2182;
  double t1799;
  double t1895;
  double t1918;
  double t2031;
  double t2033;
  double t2042;
  double t2205;
  double t2215;
  double t2222;
  double t2232;
  double t2183;
  double t2190;
  double t2191;
  double t2193;
  double t2195;
  double t2199;
  double t2465;
  double t2303;
  double t2322;
  double t2385;
  double t2387;
  double t2248;
  double t2252;
  double t2255;
  double t2256;
  double t2257;
  double t2259;
  double t674;
  double t765;
  double t2633;
  double t2616;
  double t1518;
  double t1541;
  double t2623;
  double t2636;
  double t2637;
  double t2651;
  double t2652;
  double t2656;
  double t1943;
  double t1978;
  double t1990;
  double t2008;
  double t2056;
  double t2094;
  double t2095;
  double t2152;
  double t2164;
  double t2176;
  double t2178;
  double t2674;
  double t2682;
  double t2690;
  double t2695;
  double t2705;
  double t2706;
  double t2200;
  double t2224;
  double t2240;
  double t2244;
  double t2263;
  double t2264;
  double t2265;
  double t2400;
  double t2436;
  double t2448;
  double t2450;
  double t2469;
  double t2485;
  double t2723;
  double t2727;
  double t2740;
  double t2741;
  double t2805;
  double t2808;
  double t2810;
  double t2821;
  double t2746;
  double t2785;
  double t2792;
  double t2794;
  double t2549;
  double t2555;
  double t3009;
  double t3019;
  double t3026;
  double t3043;
  double t3049;
  double t3062;
  double t3075;
  double t3078;
  double t3079;
  double t3082;
  double t3083;
  double t3091;
  double t3095;
  double t3096;
  double t3098;
  double t3107;
  double t3223;
  double t3231;
  double t3245;
  double t3249;
  double t3109;
  double t3117;
  double t3121;
  double t3126;
  t152 = Cos(var1[4]);
  t221 = Cos(var1[6]);
  t258 = -1.*t221;
  t416 = 1. + t258;
  t532 = 0.15121*t416;
  t624 = Sin(var1[6]);
  t173 = Sin(var1[5]);
  t1224 = Cos(var1[5]);
  t1958 = Cos(var1[7]);
  t1968 = -1.*t1958;
  t1976 = 1. + t1968;
  t1979 = Sin(var1[7]);
  t2127 = Sin(var1[4]);
  t2182 = -1. + t1958;
  t1799 = -1.*t152*t221*t173;
  t1895 = -1.*t152*t1224*t624;
  t1918 = t1799 + t1895;
  t2031 = t152*t1224*t221;
  t2033 = -1.*t152*t173*t624;
  t2042 = t2031 + t2033;
  t2205 = Cos(var1[8]);
  t2215 = -1.*t2205;
  t2222 = 1. + t2215;
  t2232 = Sin(var1[8]);
  t2183 = 4.e-6*t2182*t2127;
  t2190 = 1.6e-11*t2182;
  t2191 = 1. + t2190;
  t2193 = t2191*t1918;
  t2195 = 4.e-6*t2042*t1979;
  t2199 = t2183 + t2193 + t2195;
  t2465 = -1. + t2205;
  t2303 = t1958*t2127;
  t2322 = 4.e-6*t2182*t1918;
  t2385 = t2042*t1979;
  t2387 = t2303 + t2322 + t2385;
  t2248 = -1.000000000016*t1976;
  t2252 = 1. + t2248;
  t2255 = t2252*t2042;
  t2256 = -1.*t2127*t1979;
  t2257 = -4.e-6*t1918*t1979;
  t2259 = t2255 + t2256 + t2257;
  t674 = -0.15121*t624;
  t765 = t532 + t674;
  t2633 = Sin(var1[3]);
  t2616 = Cos(var1[3]);
  t1518 = 0.15121*t624;
  t1541 = t532 + t1518;
  t2623 = t2616*t1224;
  t2636 = -1.*t2633*t2127*t173;
  t2637 = t2623 + t2636;
  t2651 = t1224*t2633*t2127;
  t2652 = t2616*t173;
  t2656 = t2651 + t2652;
  t1943 = -1.2484e-7*var1[7];
  t1978 = -1.5499600000248e-7*t1976;
  t1990 = 1.124840000016e-6*t1979;
  t2008 = t1943 + t1978 + t1990;
  t2056 = 0.281210000008499*t1976;
  t2094 = 0.03874900000062*t1979;
  t2095 = t2056 + t2094;
  t2152 = 4.9936e-13*var1[7];
  t2164 = -0.03874900000062*t1976;
  t2176 = 0.281210000004*t1979;
  t2178 = t2152 + t2164 + t2176;
  t2674 = t221*t2637;
  t2682 = -1.*t2656*t624;
  t2690 = t2674 + t2682;
  t2695 = t221*t2656;
  t2705 = t2637*t624;
  t2706 = t2695 + t2705;
  t2200 = -1.284e-8*var1[8];
  t2224 = -1.5499600000248e-7*t2222;
  t2240 = 2.012840000032e-6*t2232;
  t2244 = t2200 + t2224 + t2240;
  t2263 = 0.503210000016051*t2222;
  t2264 = 0.03874900000062*t2232;
  t2265 = t2263 + t2264;
  t2400 = 5.136e-14*var1[8];
  t2436 = -0.03874900000062*t2222;
  t2448 = 0.503210000008*t2232;
  t2450 = t2400 + t2436 + t2448;
  t2469 = 1.6e-11*t2465;
  t2485 = 1. + t2469;
  t2723 = -4.e-6*t152*t2182*t2633;
  t2727 = t2191*t2690;
  t2740 = 4.e-6*t2706*t1979;
  t2741 = t2723 + t2727 + t2740;
  t2805 = -1.*t152*t1958*t2633;
  t2808 = 4.e-6*t2182*t2690;
  t2810 = t2706*t1979;
  t2821 = t2805 + t2808 + t2810;
  t2746 = t2252*t2706;
  t2785 = t152*t2633*t1979;
  t2792 = -4.e-6*t2690*t1979;
  t2794 = t2746 + t2785 + t2792;
  t2549 = -1.000000000016*t2222;
  t2555 = 1. + t2549;
  t3009 = t1224*t2633;
  t3019 = t2616*t2127*t173;
  t3026 = t3009 + t3019;
  t3043 = -1.*t2616*t1224*t2127;
  t3049 = t2633*t173;
  t3062 = t3043 + t3049;
  t3075 = t221*t3026;
  t3078 = -1.*t3062*t624;
  t3079 = t3075 + t3078;
  t3082 = t221*t3062;
  t3083 = t3026*t624;
  t3091 = t3082 + t3083;
  t3095 = 4.e-6*t2616*t152*t2182;
  t3096 = t2191*t3079;
  t3098 = 4.e-6*t3091*t1979;
  t3107 = t3095 + t3096 + t3098;
  t3223 = t2616*t152*t1958;
  t3231 = 4.e-6*t2182*t3079;
  t3245 = t3091*t1979;
  t3249 = t3223 + t3231 + t3245;
  t3109 = t2252*t3091;
  t3117 = -1.*t2616*t152*t1979;
  t3121 = -4.e-6*t3079*t1979;
  t3126 = t3109 + t3117 + t3121;
  p_output1[0]=t1224*t152*t1541 + t1918*t2008 + t2042*t2095 + t2127*t2178 + t2199*t2244 + t2259*t2265 + t2387*t2450 - 0.03875*(t2232*t2259 + t2205*t2387 + 4.e-6*t2199*t2465) + 0.14871*(4.e-6*t2232*t2259 + 4.e-6*t2387*t2465 + t2199*t2485) + 0.80321*(-4.e-6*t2199*t2232 - 1.*t2232*t2387 + t2259*t2555) - 1.*t152*t173*t765 + var1[0] - 1.*var2[0];
  p_output1[1]=-1.*t152*t2178*t2633 + t1541*t2656 + t2008*t2690 + t2095*t2706 + t2244*t2741 + t2265*t2794 + t2450*t2821 - 0.03875*(4.e-6*t2465*t2741 + t2232*t2794 + t2205*t2821) + 0.80321*(-4.e-6*t2232*t2741 + t2555*t2794 - 1.*t2232*t2821) + 0.14871*(t2485*t2741 + 4.e-6*t2232*t2794 + 4.e-6*t2465*t2821) + t2637*t765 + var1[1] - 1.*var2[1];
  p_output1[2]=t152*t2178*t2616 + t1541*t3062 + t2008*t3079 + t2095*t3091 + t2244*t3107 + t2265*t3126 + t2450*t3249 - 0.03875*(4.e-6*t2465*t3107 + t2232*t3126 + t2205*t3249) + 0.80321*(-4.e-6*t2232*t3107 + t2555*t3126 - 1.*t2232*t3249) + 0.14871*(t2485*t3107 + 4.e-6*t2232*t3126 + 4.e-6*t2465*t3249) + t3026*t765 + var1[2] - 1.*var2[2];
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

#include "h_FlFoot_ParallelStance2.hh"

namespace ParallelStance2
{

void h_FlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
