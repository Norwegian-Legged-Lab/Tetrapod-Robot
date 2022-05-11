/*
 * Automatically Generated from Mathematica.
 * Fri 4 Feb 2022 15:52:08 GMT+01:00
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
  double t646;
  double t659;
  double t667;
  double t1154;
  double t117;
  double t201;
  double t217;
  double t226;
  double t234;
  double t266;
  double t2206;
  double t2208;
  double t154;
  double t3056;
  double t3097;
  double t1033;
  double t2998;
  double t3187;
  double t3153;
  double t3167;
  double t3169;
  double t3196;
  double t3197;
  double t3198;
  double t2567;
  double t3200;
  double t1253;
  double t3222;
  double t3138;
  double t3204;
  double t3128;
  double t472;
  double t698;
  double t1319;
  double t2102;
  double t2768;
  double t2996;
  double t2997;
  double t340;
  double t461;
  double t3252;
  double t3024;
  double t3035;
  double t3278;
  double t3068;
  double t3094;
  double t3135;
  double t3137;
  double t3143;
  double t3144;
  double t3146;
  double t3268;
  double t3314;
  double t3315;
  double t3334;
  double t3343;
  double t3365;
  double t3179;
  double t3183;
  double t3191;
  double t3192;
  double t3193;
  double t3194;
  double t3195;
  double t3202;
  double t3205;
  double t3389;
  double t3396;
  double t3402;
  double t3207;
  double t3208;
  double t3450;
  double t3480;
  double t3509;
  double t3216;
  double t3217;
  double t3223;
  double t3226;
  double t3233;
  double t3236;
  double t3237;
  double t3240;
  double t3810;
  double t3822;
  double t3823;
  double t3833;
  double t3846;
  double t3855;
  double t3865;
  double t3869;
  double t3874;
  double t3879;
  double t3880;
  double t3884;
  t646 = Cos(var1[16]);
  t659 = -1.*t646;
  t667 = 1. + t659;
  t1154 = Sin(var1[16]);
  t117 = Cos(var1[4]);
  t201 = Cos(var1[15]);
  t217 = -1.*t201;
  t226 = 1. + t217;
  t234 = -0.15121*t226;
  t266 = Sin(var1[15]);
  t2206 = -1. + t646;
  t2208 = 4.e-6*t2206;
  t154 = Cos(var1[5]);
  t3056 = Sin(var1[5]);
  t3097 = 7.e-6*t667;
  t1033 = 2.8e-11*t667;
  t2998 = Sin(var1[4]);
  t3187 = -4.e-6*t1154;
  t3153 = -1.*t117*t154*t266;
  t3167 = -1.*t201*t117*t3056;
  t3169 = t3153 + t3167;
  t3196 = t201*t117*t154;
  t3197 = -1.*t117*t266*t3056;
  t3198 = t3196 + t3197;
  t2567 = -7.e-6*t1154;
  t3200 = -2.8e-11*t667;
  t1253 = -1.*t1154;
  t3222 = 4.e-6*t667;
  t3138 = 7.e-6*t1154;
  t3204 = -7.e-6*t667;
  t3128 = 4.e-6*t1154;
  t472 = 1.5843479999999999e-12*var1[16];
  t698 = -0.03874900000889869*t667;
  t1319 = t1033 + t1253;
  t2102 = -0.281211000004*t1319;
  t2768 = t2208 + t2567;
  t2996 = -1.8134809999999998e-6*t2768;
  t2997 = t472 + t698 + t2102 + t2996;
  t340 = -0.15121*t266;
  t461 = t234 + t340;
  t3252 = Sin(var1[3]);
  t3024 = 0.15121*t266;
  t3035 = t234 + t3024;
  t3278 = Cos(var1[3]);
  t3068 = 3.9608699999999997e-7*var1[16];
  t3094 = -1.1787626499999999e-16*t667;
  t3135 = t3097 + t3128;
  t3137 = -0.281211000004*t3135;
  t3143 = t2208 + t3138;
  t3144 = -0.038749000006999997*t3143;
  t3146 = t3068 + t3094 + t3137 + t3144;
  t3268 = t154*t3252*t2998;
  t3314 = t3278*t3056;
  t3315 = t3268 + t3314;
  t3334 = t3278*t154;
  t3343 = -1.*t3252*t2998*t3056;
  t3365 = t3334 + t3343;
  t3179 = -2.7726089999999997e-12*var1[16];
  t3183 = -0.2812110000084994*t667;
  t3191 = t3097 + t3187;
  t3192 = -1.8134809999999998e-6*t3191;
  t3193 = t1033 + t1154;
  t3194 = -0.038749000006999997*t3193;
  t3195 = t3179 + t3183 + t3192 + t3194;
  t3202 = t3200 + t1154;
  t3205 = t3204 + t3187;
  t3389 = -1.*t266*t3315;
  t3396 = t201*t3365;
  t3402 = t3389 + t3396;
  t3207 = -1.000000000016*t667;
  t3208 = 1. + t3207;
  t3450 = t201*t3315;
  t3480 = t266*t3365;
  t3509 = t3450 + t3480;
  t3216 = -1.000000000049*t667;
  t3217 = 1. + t3216;
  t3223 = t3222 + t2567;
  t3226 = t3200 + t1253;
  t3233 = t3222 + t3138;
  t3236 = -6.5e-11*t667;
  t3237 = 1. + t3236;
  t3240 = t3204 + t3128;
  t3810 = -1.*t3278*t154*t2998;
  t3822 = t3252*t3056;
  t3823 = t3810 + t3822;
  t3833 = t154*t3252;
  t3846 = t3278*t2998*t3056;
  t3855 = t3833 + t3846;
  t3865 = -1.*t266*t3823;
  t3869 = t201*t3855;
  t3874 = t3865 + t3869;
  t3879 = t201*t3823;
  t3880 = t266*t3855;
  t3884 = t3879 + t3880;
  p_output1[0]=t2997*t2998 - 1.*t117*t3035*t3056 + t3146*t3169 + t3195*t3198 - 0.281209*(t2998*t3202 + t3169*t3205 + t3198*t3208) - 0.03875*(t2998*t3217 + t3169*t3223 + t3198*t3226) - 0.226711*(t2998*t3233 + t3169*t3237 + t3198*t3240) + t117*t154*t461 + var1[0];
  p_output1[1]=-1.*t117*t2997*t3252 + t3035*t3365 + t3146*t3402 + t3195*t3509 - 0.281209*(-1.*t117*t3202*t3252 + t3205*t3402 + t3208*t3509) - 0.03875*(-1.*t117*t3217*t3252 + t3223*t3402 + t3226*t3509) - 0.226711*(-1.*t117*t3233*t3252 + t3237*t3402 + t3240*t3509) + t3315*t461 + var1[1];
  p_output1[2]=t117*t2997*t3278 + t3035*t3855 + t3146*t3874 + t3195*t3884 - 0.281209*(t117*t3202*t3278 + t3205*t3874 + t3208*t3884) - 0.03875*(t117*t3217*t3278 + t3223*t3874 + t3226*t3884) - 0.226711*(t117*t3233*t3278 + t3237*t3874 + t3240*t3884) + t3823*t461 + var1[2];
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

#include "Joint_rr_hip_pitch_sphere_center.hh"

namespace SymFunction
{

void Joint_rr_hip_pitch_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
