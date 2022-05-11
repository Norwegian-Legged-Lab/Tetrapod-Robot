/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:47:08 GMT+02:00
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
  double t1534;
  double t1596;
  double t1974;
  double t2207;
  double t1944;
  double t2192;
  double t2147;
  double t2223;
  double t2268;
  double t224;
  double t2270;
  double t2273;
  double t2274;
  double t2278;
  double t1848;
  double t2280;
  double t2281;
  double t2282;
  double t2287;
  double t2288;
  double t2289;
  double t2297;
  double t2314;
  double t2360;
  double t2361;
  double t2363;
  double t2369;
  double t2370;
  double t2375;
  double t2382;
  double t2388;
  double t2392;
  double t2424;
  double t2430;
  double t2493;
  double t299;
  double t300;
  double t1869;
  double t1893;
  double t2496;
  double t2500;
  double t2504;
  double t2505;
  double t2201;
  double t2206;
  double t2227;
  double t2237;
  double t2540;
  double t2568;
  double t2569;
  double t2616;
  double t2617;
  double t2618;
  double t2348;
  double t2351;
  double t2620;
  double t2621;
  double t2622;
  double t2389;
  double t2390;
  double t2633;
  double t2634;
  double t2637;
  double t2672;
  double t2676;
  double t2684;
  double t2694;
  double t2699;
  double t2704;
  double t2743;
  double t2744;
  double t2745;
  t1534 = Cos(var1[4]);
  t1596 = Cos(var1[5]);
  t1974 = Sin(var1[4]);
  t2207 = Sin(var1[5]);
  t1944 = Sin(var1[9]);
  t2192 = Cos(var1[9]);
  t2147 = Sin(var1[15]);
  t2223 = Cos(var1[15]);
  t2268 = Sin(var1[10]);
  t224 = Cos(var1[10]);
  t2270 = t2192*t1974;
  t2273 = t1534*t1944*t2207;
  t2274 = t2270 + t2273;
  t2278 = Sin(var1[16]);
  t1848 = Cos(var1[16]);
  t2280 = t2223*t1974;
  t2281 = t1534*t2147*t2207;
  t2282 = t2280 + t2281;
  t2287 = Sin(var1[11]);
  t2288 = -1.*t1534*t1596*t2268;
  t2289 = t224*t2274;
  t2297 = t2288 + t2289;
  t2314 = Cos(var1[11]);
  t2360 = t224*t1534*t1596;
  t2361 = t2268*t2274;
  t2363 = t2360 + t2361;
  t2369 = Sin(var1[17]);
  t2370 = -1.*t1534*t1596*t2278;
  t2375 = t1848*t2282;
  t2382 = t2370 + t2375;
  t2388 = Cos(var1[17]);
  t2392 = t1848*t1534*t1596;
  t2424 = t2278*t2282;
  t2430 = t2392 + t2424;
  t2493 = Sin(var1[3]);
  t299 = -1.*t224;
  t300 = 1. + t299;
  t1869 = -1.*t1848;
  t1893 = 1. + t1869;
  t2496 = t1596*t2493*t1974;
  t2500 = Cos(var1[3]);
  t2504 = t2500*t2207;
  t2505 = t2496 + t2504;
  t2201 = -1.*t2192;
  t2206 = 1. + t2201;
  t2227 = -1.*t2223;
  t2237 = 1. + t2227;
  t2540 = t2500*t1596;
  t2568 = -1.*t2493*t1974*t2207;
  t2569 = t2540 + t2568;
  t2616 = -1.*t2192*t1534*t2493;
  t2617 = -1.*t1944*t2569;
  t2618 = t2616 + t2617;
  t2348 = -1.*t2314;
  t2351 = 1. + t2348;
  t2620 = -1.*t2223*t1534*t2493;
  t2621 = -1.*t2147*t2569;
  t2622 = t2620 + t2621;
  t2389 = -1.*t2388;
  t2390 = 1. + t2389;
  t2633 = -1.*t2268*t2505;
  t2634 = t224*t2618;
  t2637 = t2633 + t2634;
  t2672 = t224*t2505;
  t2676 = t2268*t2618;
  t2684 = t2672 + t2676;
  t2694 = -1.*t2278*t2505;
  t2699 = t1848*t2622;
  t2704 = t2694 + t2699;
  t2743 = t1848*t2505;
  t2744 = t2278*t2622;
  t2745 = t2743 + t2744;
  p_output1[0]=0.325*t1534*t1596*t1893 - 0.1575*t1944*t1974 - 0.1575*t1974*t2147 - 0.1575*t1534*t2206*t2207 + 0.2255*(t1944*t1974 - 1.*t1534*t2192*t2207) + 0.2255*(t1974*t2147 - 1.*t1534*t2207*t2223) - 0.1575*t1534*t2207*t2237 + 0.325*t2268*t2274 - 0.325*t2278*t2282 - 0.575*t2287*t2297 - 0.575*t2351*t2363 - 0.0641*(t2297*t2314 + t2287*t2363) - 0.295*(-1.*t2287*t2297 + t2314*t2363) + 0.575*t2369*t2382 + 0.575*t2390*t2430 + 0.0641*(t2382*t2388 + t2369*t2430) + 0.295*(-1.*t2369*t2382 + t2388*t2430) - 0.325*t1534*t1596*t300;
  p_output1[1]=0.1575*t1534*t1944*t2493 + 0.1575*t1534*t2147*t2493 + 0.325*t1893*t2505 + 0.1575*t2206*t2569 + 0.1575*t2237*t2569 + 0.2255*(-1.*t1534*t1944*t2493 + t2192*t2569) + 0.2255*(-1.*t1534*t2147*t2493 + t2223*t2569) + 0.325*t2268*t2618 - 0.325*t2278*t2622 - 0.575*t2287*t2637 - 0.575*t2351*t2684 - 0.0641*(t2314*t2637 + t2287*t2684) - 0.295*(-1.*t2287*t2637 + t2314*t2684) + 0.575*t2369*t2704 + 0.575*t2390*t2745 + 0.0641*(t2388*t2704 + t2369*t2745) + 0.295*(-1.*t2369*t2704 + t2388*t2745) - 0.325*t2505*t300;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 2, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "step_distance_rear_DiagonalStance.hh"

namespace DiagonalStance
{

void step_distance_rear_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
