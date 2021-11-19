/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:32:10 GMT+01:00
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
  double t213;
  double t351;
  double t416;
  double t516;
  double t1073;
  double t1192;
  double t245;
  double t1622;
  double t2060;
  double t2084;
  double t2086;
  double t2134;
  double t2215;
  double t2315;
  double t1803;
  double t1833;
  double t1997;
  double t2163;
  double t2165;
  double t2174;
  double t2355;
  double t2358;
  double t2361;
  double t2375;
  double t2317;
  double t2319;
  double t2339;
  double t2340;
  double t2348;
  double t2352;
  double t2592;
  double t2427;
  double t2430;
  double t2443;
  double t2445;
  double t2397;
  double t2402;
  double t2404;
  double t2405;
  double t2406;
  double t2410;
  double t1422;
  double t1521;
  double t2747;
  double t2741;
  double t1686;
  double t1718;
  double t2746;
  double t2750;
  double t2753;
  double t2759;
  double t2774;
  double t2783;
  double t2045;
  double t2092;
  double t2135;
  double t2136;
  double t2181;
  double t2182;
  double t2187;
  double t2218;
  double t2220;
  double t2252;
  double t2281;
  double t2786;
  double t2796;
  double t2800;
  double t2821;
  double t2823;
  double t2830;
  double t2353;
  double t2366;
  double t2376;
  double t2381;
  double t2411;
  double t2412;
  double t2414;
  double t2454;
  double t2461;
  double t2470;
  double t2471;
  double t2604;
  double t2637;
  double t2839;
  double t2853;
  double t2856;
  double t2859;
  double t2890;
  double t2901;
  double t2905;
  double t2912;
  double t2863;
  double t2865;
  double t2870;
  double t2874;
  double t2704;
  double t2708;
  double t3074;
  double t3101;
  double t3107;
  double t3214;
  double t3229;
  double t3244;
  double t3255;
  double t3257;
  double t3261;
  double t3268;
  double t3271;
  double t3275;
  double t3284;
  double t3296;
  double t3298;
  double t3302;
  double t3335;
  double t3339;
  double t3341;
  double t3343;
  double t3313;
  double t3321;
  double t3330;
  double t3331;
  t213 = Cos(var1[4]);
  t351 = Cos(var1[6]);
  t416 = -1.*t351;
  t516 = 1. + t416;
  t1073 = 0.15121*t516;
  t1192 = Sin(var1[6]);
  t245 = Sin(var1[5]);
  t1622 = Cos(var1[5]);
  t2060 = Cos(var1[7]);
  t2084 = -1.*t2060;
  t2086 = 1. + t2084;
  t2134 = Sin(var1[7]);
  t2215 = Sin(var1[4]);
  t2315 = -1. + t2060;
  t1803 = -1.*t213*t351*t245;
  t1833 = -1.*t213*t1622*t1192;
  t1997 = t1803 + t1833;
  t2163 = t213*t1622*t351;
  t2165 = -1.*t213*t245*t1192;
  t2174 = t2163 + t2165;
  t2355 = Cos(var1[8]);
  t2358 = -1.*t2355;
  t2361 = 1. + t2358;
  t2375 = Sin(var1[8]);
  t2317 = 4.e-6*t2315*t2215;
  t2319 = 1.6e-11*t2315;
  t2339 = 1. + t2319;
  t2340 = t2339*t1997;
  t2348 = 4.e-6*t2174*t2134;
  t2352 = t2317 + t2340 + t2348;
  t2592 = -1. + t2355;
  t2427 = t2060*t2215;
  t2430 = 4.e-6*t2315*t1997;
  t2443 = t2174*t2134;
  t2445 = t2427 + t2430 + t2443;
  t2397 = -1.000000000016*t2086;
  t2402 = 1. + t2397;
  t2404 = t2402*t2174;
  t2405 = -1.*t2215*t2134;
  t2406 = -4.e-6*t1997*t2134;
  t2410 = t2404 + t2405 + t2406;
  t1422 = -0.15121*t1192;
  t1521 = t1073 + t1422;
  t2747 = Sin(var1[3]);
  t2741 = Cos(var1[3]);
  t1686 = 0.15121*t1192;
  t1718 = t1073 + t1686;
  t2746 = t2741*t1622;
  t2750 = -1.*t2747*t2215*t245;
  t2753 = t2746 + t2750;
  t2759 = t1622*t2747*t2215;
  t2774 = t2741*t245;
  t2783 = t2759 + t2774;
  t2045 = -1.2484e-7*var1[7];
  t2092 = -1.5499600000248e-7*t2086;
  t2135 = 1.124840000016e-6*t2134;
  t2136 = t2045 + t2092 + t2135;
  t2181 = 0.281210000008499*t2086;
  t2182 = 0.03874900000062*t2134;
  t2187 = t2181 + t2182;
  t2218 = 4.9936e-13*var1[7];
  t2220 = -0.03874900000062*t2086;
  t2252 = 0.281210000004*t2134;
  t2281 = t2218 + t2220 + t2252;
  t2786 = t351*t2753;
  t2796 = -1.*t2783*t1192;
  t2800 = t2786 + t2796;
  t2821 = t351*t2783;
  t2823 = t2753*t1192;
  t2830 = t2821 + t2823;
  t2353 = -1.284e-8*var1[8];
  t2366 = -1.5499600000248e-7*t2361;
  t2376 = 2.012840000032e-6*t2375;
  t2381 = t2353 + t2366 + t2376;
  t2411 = 0.503210000016051*t2361;
  t2412 = 0.03874900000062*t2375;
  t2414 = t2411 + t2412;
  t2454 = 5.136e-14*var1[8];
  t2461 = -0.03874900000062*t2361;
  t2470 = 0.503210000008*t2375;
  t2471 = t2454 + t2461 + t2470;
  t2604 = 1.6e-11*t2592;
  t2637 = 1. + t2604;
  t2839 = -4.e-6*t213*t2315*t2747;
  t2853 = t2339*t2800;
  t2856 = 4.e-6*t2830*t2134;
  t2859 = t2839 + t2853 + t2856;
  t2890 = -1.*t213*t2060*t2747;
  t2901 = 4.e-6*t2315*t2800;
  t2905 = t2830*t2134;
  t2912 = t2890 + t2901 + t2905;
  t2863 = t2402*t2830;
  t2865 = t213*t2747*t2134;
  t2870 = -4.e-6*t2800*t2134;
  t2874 = t2863 + t2865 + t2870;
  t2704 = -1.000000000016*t2361;
  t2708 = 1. + t2704;
  t3074 = t1622*t2747;
  t3101 = t2741*t2215*t245;
  t3107 = t3074 + t3101;
  t3214 = -1.*t2741*t1622*t2215;
  t3229 = t2747*t245;
  t3244 = t3214 + t3229;
  t3255 = t351*t3107;
  t3257 = -1.*t3244*t1192;
  t3261 = t3255 + t3257;
  t3268 = t351*t3244;
  t3271 = t3107*t1192;
  t3275 = t3268 + t3271;
  t3284 = 4.e-6*t2741*t213*t2315;
  t3296 = t2339*t3261;
  t3298 = 4.e-6*t3275*t2134;
  t3302 = t3284 + t3296 + t3298;
  t3335 = t2741*t213*t2060;
  t3339 = 4.e-6*t2315*t3261;
  t3341 = t3275*t2134;
  t3343 = t3335 + t3339 + t3341;
  t3313 = t2402*t3275;
  t3321 = -1.*t2741*t213*t2134;
  t3330 = -4.e-6*t3261*t2134;
  t3331 = t3313 + t3321 + t3330;
  p_output1[0]=t1622*t1718*t213 + t1997*t2136 + t2174*t2187 + t2215*t2281 + t2352*t2381 + t2410*t2414 - 1.*t1521*t213*t245 + t2445*t2471 - 0.03875*(t2375*t2410 + t2355*t2445 + 4.e-6*t2352*t2592) + 0.14871*(4.e-6*t2375*t2410 + 4.e-6*t2445*t2592 + t2352*t2637) + 0.80321*(-4.e-6*t2352*t2375 - 1.*t2375*t2445 + t2410*t2708) + var1[0] - 1.*var2[0];
  p_output1[1]=-1.*t213*t2281*t2747 + t1521*t2753 + t1718*t2783 + t2136*t2800 + t2187*t2830 + t2381*t2859 + t2414*t2874 + t2471*t2912 - 0.03875*(4.e-6*t2592*t2859 + t2375*t2874 + t2355*t2912) + 0.80321*(-4.e-6*t2375*t2859 + t2708*t2874 - 1.*t2375*t2912) + 0.14871*(t2637*t2859 + 4.e-6*t2375*t2874 + 4.e-6*t2592*t2912) + var1[1] - 1.*var2[1];
  p_output1[2]=t213*t2281*t2741 + t1521*t3107 + t1718*t3244 + t2136*t3261 + t2187*t3275 + t2381*t3302 + t2414*t3331 + t2471*t3343 - 0.03875*(4.e-6*t2592*t3302 + t2375*t3331 + t2355*t3343) + 0.80321*(-4.e-6*t2375*t3302 + t2708*t3331 - 1.*t2375*t3343) + 0.14871*(t2637*t3302 + 4.e-6*t2375*t3331 + 4.e-6*t2592*t3343) + var1[2] - 1.*var2[2];
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
