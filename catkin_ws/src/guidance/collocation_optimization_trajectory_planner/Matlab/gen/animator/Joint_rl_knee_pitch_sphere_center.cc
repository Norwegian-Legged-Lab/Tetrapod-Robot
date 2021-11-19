/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 18:01:37 GMT+01:00
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
  double t536;
  double t537;
  double t615;
  double t684;
  double t30;
  double t98;
  double t171;
  double t209;
  double t279;
  double t295;
  double t653;
  double t80;
  double t1146;
  double t991;
  double t1310;
  double t2081;
  double t2083;
  double t2101;
  double t2139;
  double t1869;
  double t1023;
  double t1917;
  double t1344;
  double t1409;
  double t1502;
  double t2022;
  double t2024;
  double t2040;
  double t2179;
  double t1219;
  double t2293;
  double t1319;
  double t2511;
  double t2116;
  double t2655;
  double t2661;
  double t825;
  double t2230;
  double t2243;
  double t2276;
  double t2314;
  double t2367;
  double t2373;
  double t2381;
  double t2384;
  double t2392;
  double t2726;
  double t2673;
  double t2680;
  double t2688;
  double t2695;
  double t2696;
  double t2699;
  double t2708;
  double t2712;
  double t2749;
  double t2769;
  double t2776;
  double t2786;
  double t2808;
  double t2814;
  double t2823;
  double t2828;
  double t2188;
  double t2865;
  double t2145;
  double t3020;
  double t2568;
  double t2916;
  double t2929;
  double t2512;
  double t411;
  double t642;
  double t840;
  double t843;
  double t994;
  double t1007;
  double t1021;
  double t258;
  double t341;
  double t3122;
  double t1038;
  double t1123;
  double t3134;
  double t1190;
  double t1210;
  double t1243;
  double t1293;
  double t1323;
  double t1334;
  double t1340;
  double t3129;
  double t3135;
  double t3136;
  double t3138;
  double t3140;
  double t3141;
  double t1692;
  double t1823;
  double t1893;
  double t1899;
  double t1938;
  double t1952;
  double t1991;
  double t2067;
  double t2106;
  double t2146;
  double t2150;
  double t2190;
  double t2204;
  double t2214;
  double t3148;
  double t3153;
  double t3156;
  double t3164;
  double t3168;
  double t3173;
  double t2474;
  double t2500;
  double t2516;
  double t2540;
  double t2569;
  double t2616;
  double t2632;
  double t2718;
  double t2722;
  double t2734;
  double t2736;
  double t2740;
  double t2745;
  double t2748;
  double t2886;
  double t3180;
  double t3195;
  double t3197;
  double t3202;
  double t2931;
  double t3217;
  double t3224;
  double t3226;
  double t3230;
  double t2961;
  double t2967;
  double t3236;
  double t3239;
  double t3241;
  double t3243;
  double t2996;
  double t3014;
  double t3026;
  double t3049;
  double t3068;
  double t3079;
  double t3087;
  double t3095;
  double t3335;
  double t3338;
  double t3339;
  double t3345;
  double t3347;
  double t3365;
  double t3367;
  double t3373;
  double t3380;
  double t3387;
  double t3388;
  double t3389;
  double t3394;
  double t3395;
  double t3397;
  double t3398;
  double t3404;
  double t3405;
  double t3411;
  double t3414;
  double t3419;
  double t3423;
  double t3425;
  double t3426;
  t536 = Cos(var1[13]);
  t537 = -1.*t536;
  t615 = 1. + t537;
  t684 = Sin(var1[13]);
  t30 = Cos(var1[4]);
  t98 = Cos(var1[12]);
  t171 = -1.*t98;
  t209 = 1. + t171;
  t279 = Sin(var1[12]);
  t295 = 0.15121*t279;
  t653 = 4.e-6*t615;
  t80 = Cos(var1[5]);
  t1146 = Sin(var1[5]);
  t991 = -2.8e-11*t615;
  t1310 = 7.e-6*t615;
  t2081 = Cos(var1[14]);
  t2083 = -1.*t2081;
  t2101 = 1. + t2083;
  t2139 = Sin(var1[14]);
  t1869 = -1.*t684;
  t1023 = Sin(var1[4]);
  t1917 = -4.e-6*t684;
  t1344 = -1.*t30*t80*t279;
  t1409 = -1.*t98*t30*t1146;
  t1502 = t1344 + t1409;
  t2022 = t98*t30*t80;
  t2024 = -1.*t30*t279*t1146;
  t2040 = t2022 + t2024;
  t2179 = 7.e-6*t2101;
  t1219 = -7.e-6*t684;
  t2293 = -7.e-6*t615;
  t1319 = 4.e-6*t684;
  t2511 = 4.e-6*t2101;
  t2116 = -2.8e-11*t2101;
  t2655 = -1. + t536;
  t2661 = 4.e-6*t2655;
  t825 = 7.e-6*t684;
  t2230 = 2.8e-11*t615;
  t2243 = t2230 + t1869;
  t2276 = t2243*t1023;
  t2314 = t2293 + t1917;
  t2367 = t2314*t1502;
  t2373 = -1.000000000016*t615;
  t2381 = 1. + t2373;
  t2384 = t2381*t2040;
  t2392 = t2276 + t2367 + t2384;
  t2726 = 7.e-6*t2139;
  t2673 = t2661 + t1219;
  t2680 = t2673*t1023;
  t2688 = -6.5e-11*t615;
  t2695 = 1. + t2688;
  t2696 = t2695*t1502;
  t2699 = t2293 + t1319;
  t2708 = t2699*t2040;
  t2712 = t2680 + t2696 + t2708;
  t2749 = -1.000000000049*t615;
  t2769 = 1. + t2749;
  t2776 = t2769*t1023;
  t2786 = t2661 + t825;
  t2808 = t2786*t1502;
  t2814 = t2230 + t684;
  t2823 = t2814*t2040;
  t2828 = t2776 + t2808 + t2823;
  t2188 = -4.e-6*t2139;
  t2865 = 2.8e-11*t2101;
  t2145 = -1.*t2139;
  t3020 = -7.e-6*t2101;
  t2568 = 4.e-6*t2139;
  t2916 = -1. + t2081;
  t2929 = 4.e-6*t2916;
  t2512 = -7.e-6*t2139;
  t411 = 5.856279999999999e-13*var1[13];
  t642 = -0.0387489999948987*t615;
  t840 = t653 + t825;
  t843 = -2.123459e-6*t840;
  t994 = t991 + t684;
  t1007 = -0.281209000004*t994;
  t1021 = t411 + t642 + t843 + t1007;
  t258 = -0.15121*t209;
  t341 = t258 + t295;
  t3122 = Sin(var1[3]);
  t1038 = 0.15121*t209;
  t1123 = t1038 + t295;
  t3134 = Cos(var1[3]);
  t1190 = -1.4640699999999997e-7*var1[13];
  t1210 = -1.38024835e-16*t615;
  t1243 = t653 + t1219;
  t1293 = -0.038748999993*t1243;
  t1323 = t1310 + t1319;
  t1334 = -0.281209000004*t1323;
  t1340 = t1190 + t1210 + t1293 + t1334;
  t3129 = t80*t3122*t1023;
  t3135 = t3134*t1146;
  t3136 = t3129 + t3135;
  t3138 = t3134*t80;
  t3140 = -1.*t3122*t1023*t1146;
  t3141 = t3138 + t3140;
  t1692 = 1.0248489999999998e-12*var1[13];
  t1823 = -0.28120900000849935*t615;
  t1893 = t991 + t1869;
  t1899 = -0.038748999993*t1893;
  t1938 = t1310 + t1917;
  t1952 = -2.123459e-6*t1938;
  t1991 = t1692 + t1823 + t1899 + t1952;
  t2067 = 1.8190549999999993e-12*var1[14];
  t2106 = -0.5031490000160505*t2101;
  t2146 = t2116 + t2145;
  t2150 = -0.038922999986*t2146;
  t2190 = t2179 + t2188;
  t2204 = -3.6777349999999994e-6*t2190;
  t2214 = t2067 + t2106 + t2150 + t2204;
  t3148 = -1.*t279*t3136;
  t3153 = t98*t3141;
  t3156 = t3148 + t3153;
  t3164 = t98*t3136;
  t3168 = t279*t3141;
  t3173 = t3164 + t3168;
  t2474 = -2.598649999999999e-7*var1[14];
  t2500 = -2.3905277499999995e-16*t2101;
  t2516 = t2511 + t2512;
  t2540 = -0.038922999986*t2516;
  t2569 = t2179 + t2568;
  t2616 = -0.503149000008*t2569;
  t2632 = t2474 + t2500 + t2540 + t2616;
  t2718 = 1.0394599999999997e-12*var1[14];
  t2722 = -0.03892299998790722*t2101;
  t2734 = t2511 + t2726;
  t2736 = -3.6777349999999994e-6*t2734;
  t2740 = t2116 + t2139;
  t2745 = -0.503149000008*t2740;
  t2748 = t2718 + t2722 + t2736 + t2745;
  t2886 = t2865 + t2139;
  t3180 = -1.*t30*t2243*t3122;
  t3195 = t2314*t3156;
  t3197 = t2381*t3173;
  t3202 = t3180 + t3195 + t3197;
  t2931 = t2929 + t2726;
  t3217 = -1.*t30*t2673*t3122;
  t3224 = t2695*t3156;
  t3226 = t2699*t3173;
  t3230 = t3217 + t3224 + t3226;
  t2961 = -1.000000000049*t2101;
  t2967 = 1. + t2961;
  t3236 = -1.*t2769*t30*t3122;
  t3239 = t2786*t3156;
  t3241 = t2814*t3173;
  t3243 = t3236 + t3239 + t3241;
  t2996 = -1.000000000016*t2101;
  t3014 = 1. + t2996;
  t3026 = t3020 + t2188;
  t3049 = t2865 + t2145;
  t3068 = t3020 + t2568;
  t3079 = -6.5e-11*t2101;
  t3087 = 1. + t3079;
  t3095 = t2929 + t2512;
  t3335 = -1.*t3134*t80*t1023;
  t3338 = t3122*t1146;
  t3339 = t3335 + t3338;
  t3345 = t80*t3122;
  t3347 = t3134*t1023*t1146;
  t3365 = t3345 + t3347;
  t3367 = -1.*t279*t3339;
  t3373 = t98*t3365;
  t3380 = t3367 + t3373;
  t3387 = t98*t3339;
  t3388 = t279*t3365;
  t3389 = t3387 + t3388;
  t3394 = t3134*t30*t2243;
  t3395 = t2314*t3380;
  t3397 = t2381*t3389;
  t3398 = t3394 + t3395 + t3397;
  t3404 = t3134*t30*t2673;
  t3405 = t2695*t3380;
  t3411 = t2699*t3389;
  t3414 = t3404 + t3405 + t3411;
  t3419 = t2769*t3134*t30;
  t3423 = t2786*t3380;
  t3425 = t2814*t3389;
  t3426 = t3419 + t3423 + t3425;
  p_output1[0]=t1021*t1023 + t1340*t1502 + t1991*t2040 + t2214*t2392 + t2632*t2712 + t2748*t2828 - 0.038924*(t2392*t2886 + t2712*t2931 + t2828*t2967) - 1.*t1123*t1146*t30 - 0.50315*(t2392*t3014 + t2712*t3026 + t2828*t3049) + 0.165708*(t2392*t3068 + t2712*t3087 + t2828*t3095) + t30*t341*t80 + var1[0];
  p_output1[1]=-1.*t1021*t30*t3122 + t1123*t3141 + t1340*t3156 + t1991*t3173 + t2214*t3202 + t2632*t3230 + t2748*t3243 - 0.038924*(t2886*t3202 + t2931*t3230 + t2967*t3243) - 0.50315*(t3014*t3202 + t3026*t3230 + t3049*t3243) + 0.165708*(t3068*t3202 + t3087*t3230 + t3095*t3243) + t3136*t341 + var1[1];
  p_output1[2]=t1021*t30*t3134 + t1123*t3365 + t1340*t3380 + t1991*t3389 + t2214*t3398 + t3339*t341 + t2632*t3414 + t2748*t3426 - 0.038924*(t2886*t3398 + t2931*t3414 + t2967*t3426) - 0.50315*(t3014*t3398 + t3026*t3414 + t3049*t3426) + 0.165708*(t3068*t3398 + t3087*t3414 + t3095*t3426) + var1[2];
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

#include "Joint_rl_knee_pitch_sphere_center.hh"

namespace SymFunction
{

void Joint_rl_knee_pitch_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
