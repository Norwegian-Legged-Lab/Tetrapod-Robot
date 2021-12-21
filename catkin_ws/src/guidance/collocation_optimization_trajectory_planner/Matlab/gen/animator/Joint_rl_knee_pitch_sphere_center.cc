/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 23:17:26 GMT+01:00
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
  double t80;
  double t82;
  double t87;
  double t111;
  double t33;
  double t42;
  double t50;
  double t60;
  double t67;
  double t68;
  double t100;
  double t37;
  double t209;
  double t146;
  double t270;
  double t1200;
  double t1227;
  double t1244;
  double t1321;
  double t934;
  double t161;
  double t963;
  double t510;
  double t690;
  double t746;
  double t1105;
  double t1106;
  double t1108;
  double t1455;
  double t228;
  double t1691;
  double t271;
  double t2030;
  double t1302;
  double t2124;
  double t2128;
  double t137;
  double t1516;
  double t1647;
  double t1653;
  double t1703;
  double t1732;
  double t1750;
  double t1807;
  double t1821;
  double t1867;
  double t2225;
  double t2149;
  double t2158;
  double t2159;
  double t2168;
  double t2180;
  double t2206;
  double t2208;
  double t2209;
  double t2267;
  double t2268;
  double t2275;
  double t2289;
  double t2294;
  double t2295;
  double t2301;
  double t2314;
  double t1468;
  double t2333;
  double t1337;
  double t2407;
  double t2087;
  double t2338;
  double t2340;
  double t2040;
  double t78;
  double t91;
  double t142;
  double t143;
  double t149;
  double t150;
  double t158;
  double t63;
  double t72;
  double t2501;
  double t163;
  double t206;
  double t2535;
  double t212;
  double t221;
  double t232;
  double t246;
  double t348;
  double t358;
  double t473;
  double t2519;
  double t2542;
  double t2549;
  double t2577;
  double t2582;
  double t2583;
  double t860;
  double t910;
  double t938;
  double t952;
  double t971;
  double t997;
  double t1059;
  double t1181;
  double t1269;
  double t1374;
  double t1430;
  double t1482;
  double t1485;
  double t1510;
  double t2617;
  double t2630;
  double t2631;
  double t2646;
  double t2651;
  double t2664;
  double t1910;
  double t2026;
  double t2067;
  double t2083;
  double t2092;
  double t2102;
  double t2103;
  double t2223;
  double t2224;
  double t2226;
  double t2229;
  double t2245;
  double t2251;
  double t2261;
  double t2334;
  double t2709;
  double t2715;
  double t2732;
  double t2740;
  double t2342;
  double t2756;
  double t2761;
  double t2785;
  double t2789;
  double t2349;
  double t2350;
  double t2799;
  double t2806;
  double t2807;
  double t2808;
  double t2385;
  double t2394;
  double t2412;
  double t2423;
  double t2452;
  double t2460;
  double t2461;
  double t2468;
  double t2945;
  double t2953;
  double t2961;
  double t2970;
  double t2982;
  double t3000;
  double t3036;
  double t3039;
  double t3041;
  double t3061;
  double t3068;
  double t3076;
  double t3082;
  double t3117;
  double t3122;
  double t3130;
  double t3162;
  double t3166;
  double t3171;
  double t3173;
  double t3191;
  double t3206;
  double t3207;
  double t3221;
  t80 = Cos(var1[13]);
  t82 = -1.*t80;
  t87 = 1. + t82;
  t111 = Sin(var1[13]);
  t33 = Cos(var1[4]);
  t42 = Cos(var1[12]);
  t50 = -1.*t42;
  t60 = 1. + t50;
  t67 = Sin(var1[12]);
  t68 = 0.15121*t67;
  t100 = 4.e-6*t87;
  t37 = Cos(var1[5]);
  t209 = Sin(var1[5]);
  t146 = -2.8e-11*t87;
  t270 = 7.e-6*t87;
  t1200 = Cos(var1[14]);
  t1227 = -1.*t1200;
  t1244 = 1. + t1227;
  t1321 = Sin(var1[14]);
  t934 = -1.*t111;
  t161 = Sin(var1[4]);
  t963 = -4.e-6*t111;
  t510 = -1.*t33*t37*t67;
  t690 = -1.*t42*t33*t209;
  t746 = t510 + t690;
  t1105 = t42*t33*t37;
  t1106 = -1.*t33*t67*t209;
  t1108 = t1105 + t1106;
  t1455 = 7.e-6*t1244;
  t228 = -7.e-6*t111;
  t1691 = -7.e-6*t87;
  t271 = 4.e-6*t111;
  t2030 = 4.e-6*t1244;
  t1302 = -2.8e-11*t1244;
  t2124 = -1. + t80;
  t2128 = 4.e-6*t2124;
  t137 = 7.e-6*t111;
  t1516 = 2.8e-11*t87;
  t1647 = t1516 + t934;
  t1653 = t1647*t161;
  t1703 = t1691 + t963;
  t1732 = t1703*t746;
  t1750 = -1.000000000016*t87;
  t1807 = 1. + t1750;
  t1821 = t1807*t1108;
  t1867 = t1653 + t1732 + t1821;
  t2225 = 7.e-6*t1321;
  t2149 = t2128 + t228;
  t2158 = t2149*t161;
  t2159 = -6.5e-11*t87;
  t2168 = 1. + t2159;
  t2180 = t2168*t746;
  t2206 = t1691 + t271;
  t2208 = t2206*t1108;
  t2209 = t2158 + t2180 + t2208;
  t2267 = -1.000000000049*t87;
  t2268 = 1. + t2267;
  t2275 = t2268*t161;
  t2289 = t2128 + t137;
  t2294 = t2289*t746;
  t2295 = t1516 + t111;
  t2301 = t2295*t1108;
  t2314 = t2275 + t2294 + t2301;
  t1468 = -4.e-6*t1321;
  t2333 = 2.8e-11*t1244;
  t1337 = -1.*t1321;
  t2407 = -7.e-6*t1244;
  t2087 = 4.e-6*t1321;
  t2338 = -1. + t1200;
  t2340 = 4.e-6*t2338;
  t2040 = -7.e-6*t1321;
  t78 = 5.856279999999999e-13*var1[13];
  t91 = -0.0387489999948987*t87;
  t142 = t100 + t137;
  t143 = -2.123459e-6*t142;
  t149 = t146 + t111;
  t150 = -0.281209000004*t149;
  t158 = t78 + t91 + t143 + t150;
  t63 = -0.15121*t60;
  t72 = t63 + t68;
  t2501 = Sin(var1[3]);
  t163 = 0.15121*t60;
  t206 = t163 + t68;
  t2535 = Cos(var1[3]);
  t212 = -1.4640699999999997e-7*var1[13];
  t221 = -1.38024835e-16*t87;
  t232 = t100 + t228;
  t246 = -0.038748999993*t232;
  t348 = t270 + t271;
  t358 = -0.281209000004*t348;
  t473 = t212 + t221 + t246 + t358;
  t2519 = t37*t2501*t161;
  t2542 = t2535*t209;
  t2549 = t2519 + t2542;
  t2577 = t2535*t37;
  t2582 = -1.*t2501*t161*t209;
  t2583 = t2577 + t2582;
  t860 = 1.0248489999999998e-12*var1[13];
  t910 = -0.28120900000849935*t87;
  t938 = t146 + t934;
  t952 = -0.038748999993*t938;
  t971 = t270 + t963;
  t997 = -2.123459e-6*t971;
  t1059 = t860 + t910 + t952 + t997;
  t1181 = 1.8190549999999993e-12*var1[14];
  t1269 = -0.5031490000160505*t1244;
  t1374 = t1302 + t1337;
  t1430 = -0.038922999986*t1374;
  t1482 = t1455 + t1468;
  t1485 = -3.6777349999999994e-6*t1482;
  t1510 = t1181 + t1269 + t1430 + t1485;
  t2617 = -1.*t67*t2549;
  t2630 = t42*t2583;
  t2631 = t2617 + t2630;
  t2646 = t42*t2549;
  t2651 = t67*t2583;
  t2664 = t2646 + t2651;
  t1910 = -2.598649999999999e-7*var1[14];
  t2026 = -2.3905277499999995e-16*t1244;
  t2067 = t2030 + t2040;
  t2083 = -0.038922999986*t2067;
  t2092 = t1455 + t2087;
  t2102 = -0.503149000008*t2092;
  t2103 = t1910 + t2026 + t2083 + t2102;
  t2223 = 1.0394599999999997e-12*var1[14];
  t2224 = -0.03892299998790722*t1244;
  t2226 = t2030 + t2225;
  t2229 = -3.6777349999999994e-6*t2226;
  t2245 = t1302 + t1321;
  t2251 = -0.503149000008*t2245;
  t2261 = t2223 + t2224 + t2229 + t2251;
  t2334 = t2333 + t1321;
  t2709 = -1.*t33*t1647*t2501;
  t2715 = t1703*t2631;
  t2732 = t1807*t2664;
  t2740 = t2709 + t2715 + t2732;
  t2342 = t2340 + t2225;
  t2756 = -1.*t33*t2149*t2501;
  t2761 = t2168*t2631;
  t2785 = t2206*t2664;
  t2789 = t2756 + t2761 + t2785;
  t2349 = -1.000000000049*t1244;
  t2350 = 1. + t2349;
  t2799 = -1.*t2268*t33*t2501;
  t2806 = t2289*t2631;
  t2807 = t2295*t2664;
  t2808 = t2799 + t2806 + t2807;
  t2385 = -1.000000000016*t1244;
  t2394 = 1. + t2385;
  t2412 = t2407 + t1468;
  t2423 = t2333 + t1337;
  t2452 = t2407 + t2087;
  t2460 = -6.5e-11*t1244;
  t2461 = 1. + t2460;
  t2468 = t2340 + t2040;
  t2945 = -1.*t2535*t37*t161;
  t2953 = t2501*t209;
  t2961 = t2945 + t2953;
  t2970 = t37*t2501;
  t2982 = t2535*t161*t209;
  t3000 = t2970 + t2982;
  t3036 = -1.*t67*t2961;
  t3039 = t42*t3000;
  t3041 = t3036 + t3039;
  t3061 = t42*t2961;
  t3068 = t67*t3000;
  t3076 = t3061 + t3068;
  t3082 = t2535*t33*t1647;
  t3117 = t1703*t3041;
  t3122 = t1807*t3076;
  t3130 = t3082 + t3117 + t3122;
  t3162 = t2535*t33*t2149;
  t3166 = t2168*t3041;
  t3171 = t2206*t3076;
  t3173 = t3162 + t3166 + t3171;
  t3191 = t2268*t2535*t33;
  t3206 = t2289*t3041;
  t3207 = t2295*t3076;
  t3221 = t3191 + t3206 + t3207;
  p_output1[0]=t1059*t1108 + t158*t161 + t1510*t1867 + t2103*t2209 + t2261*t2314 - 0.038924*(t1867*t2334 + t2209*t2342 + t2314*t2350) - 0.50315*(t1867*t2394 + t2209*t2412 + t2314*t2423) + 0.165708*(t1867*t2452 + t2209*t2461 + t2314*t2468) - 1.*t206*t209*t33 + t33*t37*t72 + t473*t746 + var1[0];
  p_output1[1]=t206*t2583 + t1059*t2664 + t1510*t2740 + t2103*t2789 + t2261*t2808 - 0.038924*(t2334*t2740 + t2342*t2789 + t2350*t2808) - 0.50315*(t2394*t2740 + t2412*t2789 + t2423*t2808) + 0.165708*(t2452*t2740 + t2461*t2789 + t2468*t2808) - 1.*t158*t2501*t33 + t2631*t473 + t2549*t72 + var1[1];
  p_output1[2]=t206*t3000 + t1059*t3076 + t1510*t3130 + t2103*t3173 + t2261*t3221 - 0.038924*(t2334*t3130 + t2342*t3173 + t2350*t3221) - 0.50315*(t2394*t3130 + t2412*t3173 + t2423*t3221) + 0.165708*(t2452*t3130 + t2461*t3173 + t2468*t3221) + t158*t2535*t33 + t3041*t473 + t2961*t72 + var1[2];
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
