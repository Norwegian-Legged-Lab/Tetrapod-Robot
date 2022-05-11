/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 23:17:28 GMT+01:00
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
  double t162;
  double t172;
  double t211;
  double t221;
  double t358;
  double t860;
  double t366;
  double t750;
  double t910;
  double t73;
  double t78;
  double t91;
  double t246;
  double t821;
  double t938;
  double t952;
  double t326;
  double t1105;
  double t1124;
  double t1181;
  double t143;
  double t1520;
  double t212;
  double t232;
  double t242;
  double t325;
  double t339;
  double t348;
  double t971;
  double t982;
  double t997;
  double t1269;
  double t1374;
  double t2102;
  double t1653;
  double t1703;
  double t1732;
  double t1821;
  double t1888;
  double t1910;
  double t2026;
  double t2067;
  double t2080;
  double t2083;
  double t2206;
  double t2208;
  double t2217;
  double t2223;
  double t2224;
  double t2226;
  double t2229;
  double t2245;
  double t2251;
  double t142;
  double t2289;
  double t149;
  double t150;
  double t2519;
  double t2562;
  double t2559;
  double t2577;
  double t2610;
  double t2637;
  double t2646;
  double t2651;
  double t1482;
  double t1485;
  double t2630;
  double t2682;
  double t2715;
  double t2751;
  double t2761;
  double t2785;
  double t2158;
  double t2180;
  double t2294;
  double t2542;
  double t2732;
  double t2796;
  double t2806;
  double t2301;
  double t2331;
  double t2810;
  double t2811;
  double t2812;
  double t2836;
  double t2345;
  double t2352;
  double t2852;
  double t2861;
  double t2866;
  double t2869;
  double t2419;
  double t2427;
  double t2437;
  double t2438;
  double t2465;
  double t2479;
  double t2982;
  double t3013;
  double t3016;
  double t3039;
  double t3055;
  double t3061;
  double t3028;
  double t3068;
  double t3077;
  double t3117;
  double t3122;
  double t3155;
  double t2970;
  double t3082;
  double t3162;
  double t3166;
  double t3171;
  double t3178;
  double t3191;
  double t3206;
  double t3229;
  double t3230;
  double t3248;
  double t3250;
  t162 = Cos(var1[13]);
  t172 = -1.*t162;
  t211 = 1. + t172;
  t221 = Sin(var1[13]);
  t358 = Cos(var1[4]);
  t860 = Cos(var1[12]);
  t366 = Cos(var1[5]);
  t750 = Sin(var1[12]);
  t910 = Sin(var1[5]);
  t73 = Cos(var1[14]);
  t78 = -1.*t73;
  t91 = 1. + t78;
  t246 = Sin(var1[4]);
  t821 = -1.*t358*t366*t750;
  t938 = -1.*t860*t358*t910;
  t952 = t821 + t938;
  t326 = -7.e-6*t211;
  t1105 = t860*t358*t366;
  t1124 = -1.*t358*t750*t910;
  t1181 = t1105 + t1124;
  t143 = Sin(var1[14]);
  t1520 = -4.e-6*t211;
  t212 = 2.7999999999999997e-11*t211;
  t232 = -1.*t221;
  t242 = t212 + t232;
  t325 = t242*t246;
  t339 = -4.e-6*t221;
  t348 = t326 + t339;
  t971 = t348*t952;
  t982 = -1.000000000016*t211;
  t997 = 1. + t982;
  t1269 = t997*t1181;
  t1374 = t325 + t971 + t1269;
  t2102 = -4.e-6*t91;
  t1653 = -7.e-6*t221;
  t1703 = t1520 + t1653;
  t1732 = t1703*t246;
  t1821 = -6.5e-11*t211;
  t1888 = 1. + t1821;
  t1910 = t1888*t952;
  t2026 = 4.e-6*t221;
  t2067 = t326 + t2026;
  t2080 = t2067*t1181;
  t2083 = t1732 + t1910 + t2080;
  t2206 = -1.000000000049*t211;
  t2208 = 1. + t2206;
  t2217 = t2208*t246;
  t2223 = 7.e-6*t221;
  t2224 = t1520 + t2223;
  t2226 = t2224*t952;
  t2229 = t212 + t221;
  t2245 = t2229*t1181;
  t2251 = t2217 + t2226 + t2245;
  t142 = -7.e-6*t91;
  t2289 = 2.7999999999999997e-11*t91;
  t149 = 4.e-6*t143;
  t150 = t142 + t149;
  t2519 = Sin(var1[3]);
  t2562 = Cos(var1[3]);
  t2559 = t366*t2519*t246;
  t2577 = t2562*t910;
  t2610 = t2559 + t2577;
  t2637 = t2562*t366;
  t2646 = -1.*t2519*t246*t910;
  t2651 = t2637 + t2646;
  t1482 = -6.5e-11*t91;
  t1485 = 1. + t1482;
  t2630 = -1.*t750*t2610;
  t2682 = t860*t2651;
  t2715 = t2630 + t2682;
  t2751 = t860*t2610;
  t2761 = t750*t2651;
  t2785 = t2751 + t2761;
  t2158 = -7.e-6*t143;
  t2180 = t2102 + t2158;
  t2294 = t2289 + t143;
  t2542 = -1.*t358*t242*t2519;
  t2732 = t348*t2715;
  t2796 = t997*t2785;
  t2806 = t2542 + t2732 + t2796;
  t2301 = 7.e-6*t143;
  t2331 = t2102 + t2301;
  t2810 = -1.*t358*t1703*t2519;
  t2811 = t1888*t2715;
  t2812 = t2067*t2785;
  t2836 = t2810 + t2811 + t2812;
  t2345 = -1.000000000049*t91;
  t2352 = 1. + t2345;
  t2852 = -1.*t2208*t358*t2519;
  t2861 = t2224*t2715;
  t2866 = t2229*t2785;
  t2869 = t2852 + t2861 + t2866;
  t2419 = -1.000000000016*t91;
  t2427 = 1. + t2419;
  t2437 = -4.e-6*t143;
  t2438 = t142 + t2437;
  t2465 = -1.*t143;
  t2479 = t2289 + t2465;
  t2982 = -1.*t2562*t366*t246;
  t3013 = t2519*t910;
  t3016 = t2982 + t3013;
  t3039 = t366*t2519;
  t3055 = t2562*t246*t910;
  t3061 = t3039 + t3055;
  t3028 = -1.*t750*t3016;
  t3068 = t860*t3061;
  t3077 = t3028 + t3068;
  t3117 = t860*t3016;
  t3122 = t750*t3061;
  t3155 = t3117 + t3122;
  t2970 = t2562*t358*t242;
  t3082 = t348*t3077;
  t3162 = t997*t3155;
  t3166 = t2970 + t3082 + t3162;
  t3171 = t2562*t358*t1703;
  t3178 = t1888*t3077;
  t3191 = t2067*t3155;
  t3206 = t3171 + t3178 + t3191;
  t3229 = t2208*t2562*t358;
  t3230 = t2224*t3077;
  t3248 = t2229*t3155;
  t3250 = t3229 + t3230 + t3248;
  p_output1[0]=t1374*t150 + t1485*t2083 + t2180*t2251 - 4.e-6*(t1374*t2294 + t2083*t2331 + t2251*t2352) - 7.e-6*(t1374*t2427 + t2083*t2438 + t2251*t2479);
  p_output1[1]=t150*t2806 + t1485*t2836 + t2180*t2869 - 4.e-6*(t2294*t2806 + t2331*t2836 + t2352*t2869) - 7.e-6*(t2427*t2806 + t2438*t2836 + t2479*t2869);
  p_output1[2]=t150*t3166 + t1485*t3206 + t2180*t3250 - 4.e-6*(t2294*t3166 + t2331*t3206 + t2352*t3250) - 7.e-6*(t2427*t3166 + t2438*t3206 + t2479*t3250);
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
