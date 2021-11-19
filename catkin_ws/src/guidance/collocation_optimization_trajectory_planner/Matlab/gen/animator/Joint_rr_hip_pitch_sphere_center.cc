/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 18:01:42 GMT+01:00
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
  double t697;
  double t762;
  double t813;
  double t1039;
  double t101;
  double t228;
  double t267;
  double t348;
  double t365;
  double t415;
  double t1371;
  double t1373;
  double t206;
  double t1990;
  double t2219;
  double t948;
  double t1555;
  double t2503;
  double t2353;
  double t2369;
  double t2384;
  double t2600;
  double t2616;
  double t2640;
  double t1490;
  double t2679;
  double t1247;
  double t2741;
  double t2280;
  double t2696;
  double t2233;
  double t574;
  double t870;
  double t1309;
  double t1355;
  double t1499;
  double t1520;
  double t1551;
  double t435;
  double t446;
  double t2872;
  double t1574;
  double t1675;
  double t2966;
  double t2078;
  double t2198;
  double t2240;
  double t2262;
  double t2305;
  double t2344;
  double t2346;
  double t2954;
  double t2983;
  double t2984;
  double t3036;
  double t3047;
  double t3050;
  double t2474;
  double t2502;
  double t2515;
  double t2516;
  double t2526;
  double t2533;
  double t2540;
  double t2680;
  double t2698;
  double t3056;
  double t3063;
  double t3099;
  double t2700;
  double t2713;
  double t3128;
  double t3137;
  double t3138;
  double t2725;
  double t2736;
  double t2745;
  double t2764;
  double t2791;
  double t2823;
  double t2824;
  double t2840;
  double t3294;
  double t3320;
  double t3326;
  double t3345;
  double t3347;
  double t3352;
  double t3368;
  double t3388;
  double t3391;
  double t3402;
  double t3411;
  double t3418;
  t697 = Cos(var1[16]);
  t762 = -1.*t697;
  t813 = 1. + t762;
  t1039 = Sin(var1[16]);
  t101 = Cos(var1[4]);
  t228 = Cos(var1[15]);
  t267 = -1.*t228;
  t348 = 1. + t267;
  t365 = -0.15121*t348;
  t415 = Sin(var1[15]);
  t1371 = -1. + t697;
  t1373 = 4.e-6*t1371;
  t206 = Cos(var1[5]);
  t1990 = Sin(var1[5]);
  t2219 = 7.e-6*t813;
  t948 = 2.8e-11*t813;
  t1555 = Sin(var1[4]);
  t2503 = -4.e-6*t1039;
  t2353 = -1.*t101*t206*t415;
  t2369 = -1.*t228*t101*t1990;
  t2384 = t2353 + t2369;
  t2600 = t228*t101*t206;
  t2616 = -1.*t101*t415*t1990;
  t2640 = t2600 + t2616;
  t1490 = -7.e-6*t1039;
  t2679 = -2.8e-11*t813;
  t1247 = -1.*t1039;
  t2741 = 4.e-6*t813;
  t2280 = 7.e-6*t1039;
  t2696 = -7.e-6*t813;
  t2233 = 4.e-6*t1039;
  t574 = 1.5843479999999999e-12*var1[16];
  t870 = -0.03874900000889869*t813;
  t1309 = t948 + t1247;
  t1355 = -0.281211000004*t1309;
  t1499 = t1373 + t1490;
  t1520 = -1.8134809999999998e-6*t1499;
  t1551 = t574 + t870 + t1355 + t1520;
  t435 = -0.15121*t415;
  t446 = t365 + t435;
  t2872 = Sin(var1[3]);
  t1574 = 0.15121*t415;
  t1675 = t365 + t1574;
  t2966 = Cos(var1[3]);
  t2078 = 3.9608699999999997e-7*var1[16];
  t2198 = -1.1787626499999999e-16*t813;
  t2240 = t2219 + t2233;
  t2262 = -0.281211000004*t2240;
  t2305 = t1373 + t2280;
  t2344 = -0.038749000006999997*t2305;
  t2346 = t2078 + t2198 + t2262 + t2344;
  t2954 = t206*t2872*t1555;
  t2983 = t2966*t1990;
  t2984 = t2954 + t2983;
  t3036 = t2966*t206;
  t3047 = -1.*t2872*t1555*t1990;
  t3050 = t3036 + t3047;
  t2474 = -2.7726089999999997e-12*var1[16];
  t2502 = -0.2812110000084994*t813;
  t2515 = t2219 + t2503;
  t2516 = -1.8134809999999998e-6*t2515;
  t2526 = t948 + t1039;
  t2533 = -0.038749000006999997*t2526;
  t2540 = t2474 + t2502 + t2516 + t2533;
  t2680 = t2679 + t1039;
  t2698 = t2696 + t2503;
  t3056 = -1.*t415*t2984;
  t3063 = t228*t3050;
  t3099 = t3056 + t3063;
  t2700 = -1.000000000016*t813;
  t2713 = 1. + t2700;
  t3128 = t228*t2984;
  t3137 = t415*t3050;
  t3138 = t3128 + t3137;
  t2725 = -1.000000000049*t813;
  t2736 = 1. + t2725;
  t2745 = t2741 + t1490;
  t2764 = t2679 + t1247;
  t2791 = t2741 + t2280;
  t2823 = -6.5e-11*t813;
  t2824 = 1. + t2823;
  t2840 = t2696 + t2233;
  t3294 = -1.*t2966*t206*t1555;
  t3320 = t2872*t1990;
  t3326 = t3294 + t3320;
  t3345 = t206*t2872;
  t3347 = t2966*t1555*t1990;
  t3352 = t3345 + t3347;
  t3368 = -1.*t415*t3326;
  t3388 = t228*t3352;
  t3391 = t3368 + t3388;
  t3402 = t228*t3326;
  t3411 = t415*t3352;
  t3418 = t3402 + t3411;
  p_output1[0]=t1551*t1555 - 1.*t101*t1675*t1990 + t2346*t2384 + t2540*t2640 - 0.281209*(t1555*t2680 + t2384*t2698 + t2640*t2713) - 0.03875*(t1555*t2736 + t2384*t2745 + t2640*t2764) - 0.226711*(t1555*t2791 + t2384*t2824 + t2640*t2840) + t101*t206*t446 + var1[0];
  p_output1[1]=-1.*t101*t1551*t2872 + t1675*t3050 + t2346*t3099 + t2540*t3138 - 0.281209*(-1.*t101*t2680*t2872 + t2698*t3099 + t2713*t3138) - 0.03875*(-1.*t101*t2736*t2872 + t2745*t3099 + t2764*t3138) - 0.226711*(-1.*t101*t2791*t2872 + t2824*t3099 + t2840*t3138) + t2984*t446 + var1[1];
  p_output1[2]=t101*t1551*t2966 + t1675*t3352 + t2346*t3391 + t2540*t3418 - 0.281209*(t101*t2680*t2966 + t2698*t3391 + t2713*t3418) - 0.03875*(t101*t2736*t2966 + t2745*t3391 + t2764*t3418) - 0.226711*(t101*t2791*t2966 + t2824*t3391 + t2840*t3418) + t3326*t446 + var1[2];
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
