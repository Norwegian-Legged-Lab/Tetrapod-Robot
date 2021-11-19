/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 18:01:38 GMT+01:00
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
  double t843;
  double t871;
  double t994;
  double t1026;
  double t1303;
  double t1692;
  double t1323;
  double t1334;
  double t1750;
  double t29;
  double t226;
  double t344;
  double t1193;
  double t1607;
  double t1821;
  double t1823;
  double t1243;
  double t1899;
  double t1938;
  double t1952;
  double t553;
  double t2106;
  double t1007;
  double t1157;
  double t1190;
  double t1210;
  double t1277;
  double t1293;
  double t1830;
  double t1838;
  double t1893;
  double t1983;
  double t2022;
  double t2500;
  double t2146;
  double t2150;
  double t2190;
  double t2204;
  double t2276;
  double t2314;
  double t2344;
  double t2367;
  double t2384;
  double t2461;
  double t2546;
  double t2569;
  double t2616;
  double t2661;
  double t2680;
  double t2696;
  double t2699;
  double t2708;
  double t2715;
  double t411;
  double t2722;
  double t642;
  double t840;
  double t3076;
  double t3109;
  double t3099;
  double t3115;
  double t3117;
  double t3128;
  double t3129;
  double t3135;
  double t2050;
  double t2067;
  double t3120;
  double t3137;
  double t3138;
  double t3153;
  double t3159;
  double t3164;
  double t2516;
  double t2540;
  double t2734;
  double t3092;
  double t3146;
  double t3168;
  double t3176;
  double t2740;
  double t2745;
  double t3197;
  double t3212;
  double t3224;
  double t3226;
  double t2786;
  double t2808;
  double t3239;
  double t3241;
  double t3245;
  double t3247;
  double t2842;
  double t2894;
  double t2954;
  double t2983;
  double t2995;
  double t3016;
  double t3325;
  double t3329;
  double t3330;
  double t3344;
  double t3345;
  double t3347;
  double t3338;
  double t3366;
  double t3368;
  double t3386;
  double t3387;
  double t3388;
  double t3317;
  double t3373;
  double t3390;
  double t3394;
  double t3397;
  double t3402;
  double t3404;
  double t3405;
  double t3417;
  double t3419;
  double t3423;
  double t3425;
  t843 = Cos(var1[13]);
  t871 = -1.*t843;
  t994 = 1. + t871;
  t1026 = Sin(var1[13]);
  t1303 = Cos(var1[4]);
  t1692 = Cos(var1[12]);
  t1323 = Cos(var1[5]);
  t1334 = Sin(var1[12]);
  t1750 = Sin(var1[5]);
  t29 = Cos(var1[14]);
  t226 = -1.*t29;
  t344 = 1. + t226;
  t1193 = Sin(var1[4]);
  t1607 = -1.*t1303*t1323*t1334;
  t1821 = -1.*t1692*t1303*t1750;
  t1823 = t1607 + t1821;
  t1243 = -7.e-6*t994;
  t1899 = t1692*t1303*t1323;
  t1938 = -1.*t1303*t1334*t1750;
  t1952 = t1899 + t1938;
  t553 = Sin(var1[14]);
  t2106 = -4.e-6*t994;
  t1007 = 2.7999999999999997e-11*t994;
  t1157 = -1.*t1026;
  t1190 = t1007 + t1157;
  t1210 = t1190*t1193;
  t1277 = -4.e-6*t1026;
  t1293 = t1243 + t1277;
  t1830 = t1293*t1823;
  t1838 = -1.000000000016*t994;
  t1893 = 1. + t1838;
  t1983 = t1893*t1952;
  t2022 = t1210 + t1830 + t1983;
  t2500 = -4.e-6*t344;
  t2146 = -7.e-6*t1026;
  t2150 = t2106 + t2146;
  t2190 = t2150*t1193;
  t2204 = -6.5e-11*t994;
  t2276 = 1. + t2204;
  t2314 = t2276*t1823;
  t2344 = 4.e-6*t1026;
  t2367 = t1243 + t2344;
  t2384 = t2367*t1952;
  t2461 = t2190 + t2314 + t2384;
  t2546 = -1.000000000049*t994;
  t2569 = 1. + t2546;
  t2616 = t2569*t1193;
  t2661 = 7.e-6*t1026;
  t2680 = t2106 + t2661;
  t2696 = t2680*t1823;
  t2699 = t1007 + t1026;
  t2708 = t2699*t1952;
  t2715 = t2616 + t2696 + t2708;
  t411 = -7.e-6*t344;
  t2722 = 2.7999999999999997e-11*t344;
  t642 = 4.e-6*t553;
  t840 = t411 + t642;
  t3076 = Sin(var1[3]);
  t3109 = Cos(var1[3]);
  t3099 = t1323*t3076*t1193;
  t3115 = t3109*t1750;
  t3117 = t3099 + t3115;
  t3128 = t3109*t1323;
  t3129 = -1.*t3076*t1193*t1750;
  t3135 = t3128 + t3129;
  t2050 = -6.5e-11*t344;
  t2067 = 1. + t2050;
  t3120 = -1.*t1334*t3117;
  t3137 = t1692*t3135;
  t3138 = t3120 + t3137;
  t3153 = t1692*t3117;
  t3159 = t1334*t3135;
  t3164 = t3153 + t3159;
  t2516 = -7.e-6*t553;
  t2540 = t2500 + t2516;
  t2734 = t2722 + t553;
  t3092 = -1.*t1303*t1190*t3076;
  t3146 = t1293*t3138;
  t3168 = t1893*t3164;
  t3176 = t3092 + t3146 + t3168;
  t2740 = 7.e-6*t553;
  t2745 = t2500 + t2740;
  t3197 = -1.*t1303*t2150*t3076;
  t3212 = t2276*t3138;
  t3224 = t2367*t3164;
  t3226 = t3197 + t3212 + t3224;
  t2786 = -1.000000000049*t344;
  t2808 = 1. + t2786;
  t3239 = -1.*t2569*t1303*t3076;
  t3241 = t2680*t3138;
  t3245 = t2699*t3164;
  t3247 = t3239 + t3241 + t3245;
  t2842 = -1.000000000016*t344;
  t2894 = 1. + t2842;
  t2954 = -4.e-6*t553;
  t2983 = t411 + t2954;
  t2995 = -1.*t553;
  t3016 = t2722 + t2995;
  t3325 = -1.*t3109*t1323*t1193;
  t3329 = t3076*t1750;
  t3330 = t3325 + t3329;
  t3344 = t1323*t3076;
  t3345 = t3109*t1193*t1750;
  t3347 = t3344 + t3345;
  t3338 = -1.*t1334*t3330;
  t3366 = t1692*t3347;
  t3368 = t3338 + t3366;
  t3386 = t1692*t3330;
  t3387 = t1334*t3347;
  t3388 = t3386 + t3387;
  t3317 = t3109*t1303*t1190;
  t3373 = t1293*t3368;
  t3390 = t1893*t3388;
  t3394 = t3317 + t3373 + t3390;
  t3397 = t3109*t1303*t2150;
  t3402 = t2276*t3368;
  t3404 = t2367*t3388;
  t3405 = t3397 + t3402 + t3404;
  t3417 = t2569*t3109*t1303;
  t3419 = t2680*t3368;
  t3423 = t2699*t3388;
  t3425 = t3417 + t3419 + t3423;
  p_output1[0]=t2067*t2461 + t2540*t2715 - 4.e-6*(t2022*t2734 + t2461*t2745 + t2715*t2808) - 7.e-6*(t2022*t2894 + t2461*t2983 + t2715*t3016) + t2022*t840;
  p_output1[1]=t2067*t3226 + t2540*t3247 - 4.e-6*(t2734*t3176 + t2745*t3226 + t2808*t3247) - 7.e-6*(t2894*t3176 + t2983*t3226 + t3016*t3247) + t3176*t840;
  p_output1[2]=t2067*t3405 + t2540*t3425 - 4.e-6*(t2734*t3394 + t2745*t3405 + t2808*t3425) - 7.e-6*(t2894*t3394 + t2983*t3405 + t3016*t3425) + t3394*t840;
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

#include "Joint_rl_knee_pitch_axis.hh"

namespace SymFunction
{

void Joint_rl_knee_pitch_axis_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
