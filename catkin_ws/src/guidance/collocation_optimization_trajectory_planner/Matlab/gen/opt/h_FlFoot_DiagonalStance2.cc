/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:30:30 GMT+01:00
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
  double t43;
  double t152;
  double t226;
  double t277;
  double t366;
  double t367;
  double t81;
  double t469;
  double t1347;
  double t1425;
  double t1475;
  double t1605;
  double t2025;
  double t2097;
  double t994;
  double t1123;
  double t1156;
  double t1649;
  double t1692;
  double t1800;
  double t2162;
  double t2164;
  double t2165;
  double t2196;
  double t2133;
  double t2135;
  double t2136;
  double t2142;
  double t2144;
  double t2150;
  double t2384;
  double t2295;
  double t2304;
  double t2344;
  double t2355;
  double t2241;
  double t2242;
  double t2244;
  double t2266;
  double t2268;
  double t2269;
  double t383;
  double t398;
  double t2633;
  double t2588;
  double t794;
  double t810;
  double t2609;
  double t2637;
  double t2639;
  double t2645;
  double t2649;
  double t2650;
  double t1273;
  double t1492;
  double t1614;
  double t1617;
  double t1863;
  double t1866;
  double t1903;
  double t2048;
  double t2052;
  double t2055;
  double t2070;
  double t2656;
  double t2672;
  double t2674;
  double t2684;
  double t2689;
  double t2692;
  double t2158;
  double t2181;
  double t2205;
  double t2219;
  double t2270;
  double t2288;
  double t2290;
  double t2367;
  double t2378;
  double t2381;
  double t2382;
  double t2387;
  double t2388;
  double t2709;
  double t2710;
  double t2722;
  double t2723;
  double t2773;
  double t2774;
  double t2780;
  double t2785;
  double t2736;
  double t2743;
  double t2748;
  double t2751;
  double t2439;
  double t2444;
  double t2871;
  double t2879;
  double t2883;
  double t2934;
  double t2946;
  double t2961;
  double t2988;
  double t2989;
  double t2990;
  double t3011;
  double t3013;
  double t3016;
  double t3025;
  double t3028;
  double t3038;
  double t3042;
  double t3178;
  double t3179;
  double t3180;
  double t3189;
  double t3056;
  double t3069;
  double t3070;
  double t3170;
  t43 = Cos(var1[4]);
  t152 = Cos(var1[6]);
  t226 = -1.*t152;
  t277 = 1. + t226;
  t366 = 0.15121*t277;
  t367 = Sin(var1[6]);
  t81 = Sin(var1[5]);
  t469 = Cos(var1[5]);
  t1347 = Cos(var1[7]);
  t1425 = -1.*t1347;
  t1475 = 1. + t1425;
  t1605 = Sin(var1[7]);
  t2025 = Sin(var1[4]);
  t2097 = -1. + t1347;
  t994 = -1.*t43*t152*t81;
  t1123 = -1.*t43*t469*t367;
  t1156 = t994 + t1123;
  t1649 = t43*t469*t152;
  t1692 = -1.*t43*t81*t367;
  t1800 = t1649 + t1692;
  t2162 = Cos(var1[8]);
  t2164 = -1.*t2162;
  t2165 = 1. + t2164;
  t2196 = Sin(var1[8]);
  t2133 = 4.e-6*t2097*t2025;
  t2135 = 1.6e-11*t2097;
  t2136 = 1. + t2135;
  t2142 = t2136*t1156;
  t2144 = 4.e-6*t1800*t1605;
  t2150 = t2133 + t2142 + t2144;
  t2384 = -1. + t2162;
  t2295 = t1347*t2025;
  t2304 = 4.e-6*t2097*t1156;
  t2344 = t1800*t1605;
  t2355 = t2295 + t2304 + t2344;
  t2241 = -1.000000000016*t1475;
  t2242 = 1. + t2241;
  t2244 = t2242*t1800;
  t2266 = -1.*t2025*t1605;
  t2268 = -4.e-6*t1156*t1605;
  t2269 = t2244 + t2266 + t2268;
  t383 = -0.15121*t367;
  t398 = t366 + t383;
  t2633 = Sin(var1[3]);
  t2588 = Cos(var1[3]);
  t794 = 0.15121*t367;
  t810 = t366 + t794;
  t2609 = t2588*t469;
  t2637 = -1.*t2633*t2025*t81;
  t2639 = t2609 + t2637;
  t2645 = t469*t2633*t2025;
  t2649 = t2588*t81;
  t2650 = t2645 + t2649;
  t1273 = -1.2484e-7*var1[7];
  t1492 = -1.5499600000248e-7*t1475;
  t1614 = 1.124840000016e-6*t1605;
  t1617 = t1273 + t1492 + t1614;
  t1863 = 0.281210000008499*t1475;
  t1866 = 0.03874900000062*t1605;
  t1903 = t1863 + t1866;
  t2048 = 4.9936e-13*var1[7];
  t2052 = -0.03874900000062*t1475;
  t2055 = 0.281210000004*t1605;
  t2070 = t2048 + t2052 + t2055;
  t2656 = t152*t2639;
  t2672 = -1.*t2650*t367;
  t2674 = t2656 + t2672;
  t2684 = t152*t2650;
  t2689 = t2639*t367;
  t2692 = t2684 + t2689;
  t2158 = -1.284e-8*var1[8];
  t2181 = -1.5499600000248e-7*t2165;
  t2205 = 2.012840000032e-6*t2196;
  t2219 = t2158 + t2181 + t2205;
  t2270 = 0.503210000016051*t2165;
  t2288 = 0.03874900000062*t2196;
  t2290 = t2270 + t2288;
  t2367 = 5.136e-14*var1[8];
  t2378 = -0.03874900000062*t2165;
  t2381 = 0.503210000008*t2196;
  t2382 = t2367 + t2378 + t2381;
  t2387 = 1.6e-11*t2384;
  t2388 = 1. + t2387;
  t2709 = -4.e-6*t43*t2097*t2633;
  t2710 = t2136*t2674;
  t2722 = 4.e-6*t2692*t1605;
  t2723 = t2709 + t2710 + t2722;
  t2773 = -1.*t43*t1347*t2633;
  t2774 = 4.e-6*t2097*t2674;
  t2780 = t2692*t1605;
  t2785 = t2773 + t2774 + t2780;
  t2736 = t2242*t2692;
  t2743 = t43*t2633*t1605;
  t2748 = -4.e-6*t2674*t1605;
  t2751 = t2736 + t2743 + t2748;
  t2439 = -1.000000000016*t2165;
  t2444 = 1. + t2439;
  t2871 = t469*t2633;
  t2879 = t2588*t2025*t81;
  t2883 = t2871 + t2879;
  t2934 = -1.*t2588*t469*t2025;
  t2946 = t2633*t81;
  t2961 = t2934 + t2946;
  t2988 = t152*t2883;
  t2989 = -1.*t2961*t367;
  t2990 = t2988 + t2989;
  t3011 = t152*t2961;
  t3013 = t2883*t367;
  t3016 = t3011 + t3013;
  t3025 = 4.e-6*t2588*t43*t2097;
  t3028 = t2136*t2990;
  t3038 = 4.e-6*t3016*t1605;
  t3042 = t3025 + t3028 + t3038;
  t3178 = t2588*t43*t1347;
  t3179 = 4.e-6*t2097*t2990;
  t3180 = t3016*t1605;
  t3189 = t3178 + t3179 + t3180;
  t3056 = t2242*t3016;
  t3069 = -1.*t2588*t43*t1605;
  t3070 = -4.e-6*t2990*t1605;
  t3170 = t3056 + t3069 + t3070;
  p_output1[0]=t1156*t1617 + t1800*t1903 + t2025*t2070 + t2150*t2219 + t2269*t2290 + t2355*t2382 - 0.03875*(t2196*t2269 + t2162*t2355 + 4.e-6*t2150*t2384) + 0.14871*(4.e-6*t2196*t2269 + 4.e-6*t2355*t2384 + t2150*t2388) + 0.80321*(-4.e-6*t2150*t2196 - 1.*t2196*t2355 + t2269*t2444) - 1.*t398*t43*t81 + t43*t469*t810 + var1[0] - 1.*var2[0];
  p_output1[1]=t1617*t2674 + t1903*t2692 + t2219*t2723 + t2290*t2751 + t2382*t2785 - 0.03875*(4.e-6*t2384*t2723 + t2196*t2751 + t2162*t2785) + 0.80321*(-4.e-6*t2196*t2723 + t2444*t2751 - 1.*t2196*t2785) + 0.14871*(t2388*t2723 + 4.e-6*t2196*t2751 + 4.e-6*t2384*t2785) + t2639*t398 - 1.*t2070*t2633*t43 + t2650*t810 + var1[1] - 1.*var2[1];
  p_output1[2]=t1617*t2990 + t1903*t3016 + t2219*t3042 + t2290*t3170 + t2382*t3189 - 0.03875*(4.e-6*t2384*t3042 + t2196*t3170 + t2162*t3189) + 0.80321*(-4.e-6*t2196*t3042 + t2444*t3170 - 1.*t2196*t3189) + 0.14871*(t2388*t3042 + 4.e-6*t2196*t3170 + 4.e-6*t2384*t3189) + t2883*t398 + t2070*t2588*t43 + t2961*t810 + var1[2] - 1.*var2[2];
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

#include "h_FlFoot_DiagonalStance2.hh"

namespace DiagonalStance2
{

void h_FlFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
