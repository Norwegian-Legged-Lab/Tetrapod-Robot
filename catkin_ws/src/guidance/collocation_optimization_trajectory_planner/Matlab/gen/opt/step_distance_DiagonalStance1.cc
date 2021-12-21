/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:10:14 GMT+01:00
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
  double t1526;
  double t37;
  double t324;
  double t349;
  double t494;
  double t887;
  double t1325;
  double t1631;
  double t1636;
  double t1659;
  double t1690;
  double t60;
  double t1869;
  double t1801;
  double t1980;
  double t1983;
  double t2005;
  double t2114;
  double t2121;
  double t2132;
  double t2150;
  double t2160;
  double t2165;
  double t2193;
  double t2380;
  double t2243;
  double t2293;
  double t2296;
  double t2312;
  double t2326;
  double t2327;
  double t2417;
  double t2420;
  double t2425;
  double t2427;
  double t2457;
  double t2458;
  double t2467;
  double t2486;
  double t2502;
  double t2524;
  double t2684;
  double t2688;
  double t2705;
  double t2708;
  double t2710;
  double t2741;
  double t2744;
  double t2747;
  double t2755;
  double t2843;
  double t2729;
  double t2731;
  double t2734;
  double t2766;
  double t2772;
  double t2773;
  double t2901;
  double t2906;
  double t2909;
  double t2913;
  double t2844;
  double t2849;
  double t2854;
  double t2866;
  double t2875;
  double t2884;
  double t3059;
  double t2963;
  double t2965;
  double t2972;
  double t3007;
  double t2921;
  double t2926;
  double t2927;
  double t2939;
  double t2946;
  double t2948;
  double t1476;
  double t1654;
  double t1681;
  double t1695;
  double t1739;
  double t884;
  double t1352;
  double t3205;
  double t1843;
  double t1861;
  double t3217;
  double t1921;
  double t1939;
  double t1942;
  double t1953;
  double t1954;
  double t3211;
  double t3219;
  double t3226;
  double t3248;
  double t3249;
  double t3250;
  double t2056;
  double t2068;
  double t2102;
  double t2173;
  double t2216;
  double t2241;
  double t3265;
  double t3277;
  double t3280;
  double t3283;
  double t3286;
  double t3304;
  double t2366;
  double t2368;
  double t2390;
  double t2411;
  double t2412;
  double t2430;
  double t2440;
  double t2442;
  double t2444;
  double t2456;
  double t3315;
  double t3316;
  double t3318;
  double t3325;
  double t3332;
  double t3337;
  double t3340;
  double t3341;
  double t2559;
  double t2565;
  double t3348;
  double t3354;
  double t3357;
  double t3370;
  double t2603;
  double t2609;
  double t2712;
  double t2716;
  double t2724;
  double t2726;
  double t2736;
  double t2754;
  double t2760;
  double t2761;
  double t2774;
  double t2780;
  double t2785;
  double t2789;
  double t2790;
  double t2796;
  double t2799;
  double t3463;
  double t3484;
  double t3488;
  double t3501;
  double t3504;
  double t3517;
  double t2893;
  double t2911;
  double t2916;
  double t2917;
  double t2950;
  double t2951;
  double t2955;
  double t3010;
  double t3013;
  double t3014;
  double t3029;
  double t3066;
  double t3089;
  double t3545;
  double t3552;
  double t3565;
  double t3572;
  double t3610;
  double t3614;
  double t3615;
  double t3623;
  double t3586;
  double t3587;
  double t3590;
  double t3596;
  double t3145;
  double t3151;
  t1526 = Cos(var1[10]);
  t37 = Cos(var1[4]);
  t324 = Cos(var1[9]);
  t349 = -1.*t324;
  t494 = 1. + t349;
  t887 = Sin(var1[9]);
  t1325 = -0.15121*t887;
  t1631 = -1.*t1526;
  t1636 = 1. + t1631;
  t1659 = -1. + t1526;
  t1690 = Sin(var1[10]);
  t60 = Cos(var1[5]);
  t1869 = Sin(var1[5]);
  t1801 = Sin(var1[4]);
  t1980 = -1.*t37*t60*t887;
  t1983 = -1.*t324*t37*t1869;
  t2005 = t1980 + t1983;
  t2114 = t324*t37*t60;
  t2121 = -1.*t37*t887*t1869;
  t2132 = t2114 + t2121;
  t2150 = Cos(var1[11]);
  t2160 = -1.*t2150;
  t2165 = 1. + t2160;
  t2193 = Sin(var1[11]);
  t2380 = -1. + t2150;
  t2243 = t1690*t1801;
  t2293 = -4.e-6*t1690*t2005;
  t2296 = -1.000000000016*t1636;
  t2312 = 1. + t2296;
  t2326 = t2312*t2132;
  t2327 = t2243 + t2293 + t2326;
  t2417 = t1526*t1801;
  t2420 = 4.e-6*t1636*t2005;
  t2425 = -1.*t1690*t2132;
  t2427 = t2417 + t2420 + t2425;
  t2457 = 4.e-6*t1636*t1801;
  t2458 = 1.6e-11*t1659;
  t2467 = 1. + t2458;
  t2486 = t2467*t2005;
  t2502 = 4.e-6*t1690*t2132;
  t2524 = t2457 + t2486 + t2502;
  t2684 = Cos(var1[6]);
  t2688 = -1.*t2684;
  t2705 = 1. + t2688;
  t2708 = 0.15121*t2705;
  t2710 = Sin(var1[6]);
  t2741 = Cos(var1[7]);
  t2744 = -1.*t2741;
  t2747 = 1. + t2744;
  t2755 = Sin(var1[7]);
  t2843 = -1. + t2741;
  t2729 = -1.*t37*t2684*t1869;
  t2731 = -1.*t37*t60*t2710;
  t2734 = t2729 + t2731;
  t2766 = t37*t60*t2684;
  t2772 = -1.*t37*t1869*t2710;
  t2773 = t2766 + t2772;
  t2901 = Cos(var1[8]);
  t2906 = -1.*t2901;
  t2909 = 1. + t2906;
  t2913 = Sin(var1[8]);
  t2844 = 4.e-6*t2843*t1801;
  t2849 = 1.6e-11*t2843;
  t2854 = 1. + t2849;
  t2866 = t2854*t2734;
  t2875 = 4.e-6*t2773*t2755;
  t2884 = t2844 + t2866 + t2875;
  t3059 = -1. + t2901;
  t2963 = t2741*t1801;
  t2965 = 4.e-6*t2843*t2734;
  t2972 = t2773*t2755;
  t3007 = t2963 + t2965 + t2972;
  t2921 = -1.000000000016*t2747;
  t2926 = 1. + t2921;
  t2927 = t2926*t2773;
  t2939 = -1.*t1801*t2755;
  t2946 = -4.e-6*t2734*t2755;
  t2948 = t2927 + t2939 + t2946;
  t1476 = -4.9936e-13*var1[10];
  t1654 = -0.038749*t1636;
  t1681 = 6.19984e-13*t1659;
  t1695 = -0.281210000004*t1690;
  t1739 = t1476 + t1654 + t1681 + t1695;
  t884 = 0.15121*t494;
  t1352 = t884 + t1325;
  t3205 = Sin(var1[3]);
  t1843 = -0.15121*t494;
  t1861 = t1843 + t1325;
  t3217 = Cos(var1[3]);
  t1921 = -1.2484e-7*var1[10];
  t1939 = 2.479936e-18*t1636;
  t1942 = -1.54996e-7*t1659;
  t1953 = 1.124840000016e-6*t1690;
  t1954 = t1921 + t1939 + t1942 + t1953;
  t3211 = t60*t3205*t1801;
  t3219 = t3217*t1869;
  t3226 = t3211 + t3219;
  t3248 = t3217*t60;
  t3249 = -1.*t3205*t1801*t1869;
  t3250 = t3248 + t3249;
  t2056 = 0.281210000008499*t1636;
  t2068 = -0.03874900000062*t1690;
  t2102 = t2056 + t2068;
  t2173 = 0.50315000001605*t2165;
  t2216 = -0.0398890000006382*t2193;
  t2241 = t2173 + t2216;
  t3265 = -1.*t887*t3226;
  t3277 = t324*t3250;
  t3280 = t3265 + t3277;
  t3283 = t324*t3226;
  t3286 = t887*t3250;
  t3304 = t3283 + t3286;
  t2366 = -5.04e-14*var1[11];
  t2368 = -0.039889*t2165;
  t2390 = 6.38224e-13*t2380;
  t2411 = -0.503150000008*t2193;
  t2412 = t2366 + t2368 + t2390 + t2411;
  t2430 = -1.26e-8*var1[11];
  t2440 = 2.552896e-18*t2165;
  t2442 = -1.59556e-7*t2380;
  t2444 = 2.012600000032e-6*t2193;
  t2456 = t2430 + t2440 + t2442 + t2444;
  t3315 = -1.*t37*t1690*t3205;
  t3316 = -4.e-6*t1690*t3280;
  t3318 = t2312*t3304;
  t3325 = t3315 + t3316 + t3318;
  t3332 = -1.*t1526*t37*t3205;
  t3337 = 4.e-6*t1636*t3280;
  t3340 = -1.*t1690*t3304;
  t3341 = t3332 + t3337 + t3340;
  t2559 = 1.6e-11*t2380;
  t2565 = 1. + t2559;
  t3348 = -4.e-6*t1636*t37*t3205;
  t3354 = t2467*t3280;
  t3357 = 4.e-6*t1690*t3304;
  t3370 = t3348 + t3354 + t3357;
  t2603 = -1.000000000016*t2165;
  t2609 = 1. + t2603;
  t2712 = -0.15121*t2710;
  t2716 = t2708 + t2712;
  t2724 = 0.15121*t2710;
  t2726 = t2708 + t2724;
  t2736 = -1.2484e-7*var1[7];
  t2754 = -1.5499600000248e-7*t2747;
  t2760 = 1.124840000016e-6*t2755;
  t2761 = t2736 + t2754 + t2760;
  t2774 = 0.281210000008499*t2747;
  t2780 = 0.03874900000062*t2755;
  t2785 = t2774 + t2780;
  t2789 = 4.9936e-13*var1[7];
  t2790 = -0.03874900000062*t2747;
  t2796 = 0.281210000004*t2755;
  t2799 = t2789 + t2790 + t2796;
  t3463 = t2684*t3250;
  t3484 = -1.*t3226*t2710;
  t3488 = t3463 + t3484;
  t3501 = t2684*t3226;
  t3504 = t3250*t2710;
  t3517 = t3501 + t3504;
  t2893 = -1.284e-8*var1[8];
  t2911 = -1.5499600000248e-7*t2909;
  t2916 = 2.012840000032e-6*t2913;
  t2917 = t2893 + t2911 + t2916;
  t2950 = 0.503210000016051*t2909;
  t2951 = 0.03874900000062*t2913;
  t2955 = t2950 + t2951;
  t3010 = 5.136e-14*var1[8];
  t3013 = -0.03874900000062*t2909;
  t3014 = 0.503210000008*t2913;
  t3029 = t3010 + t3013 + t3014;
  t3066 = 1.6e-11*t3059;
  t3089 = 1. + t3066;
  t3545 = -4.e-6*t37*t2843*t3205;
  t3552 = t2854*t3488;
  t3565 = 4.e-6*t3517*t2755;
  t3572 = t3545 + t3552 + t3565;
  t3610 = -1.*t37*t2741*t3205;
  t3614 = 4.e-6*t2843*t3488;
  t3615 = t3517*t2755;
  t3623 = t3610 + t3614 + t3615;
  t3586 = t2926*t3517;
  t3587 = t37*t3205*t2755;
  t3590 = -4.e-6*t3488*t2755;
  t3596 = t3586 + t3587 + t3590;
  t3145 = -1.000000000016*t2909;
  t3151 = 1. + t3145;
  p_output1[0]=t1739*t1801 + t1954*t2005 + t2102*t2132 + t2241*t2327 + t2412*t2427 + t2456*t2524 - 0.041195*(-1.*t2193*t2327 + t2150*t2427 + 4.e-6*t2165*t2524) - 0.14871*(4.e-6*t2193*t2327 + 4.e-6*t2165*t2427 + t2524*t2565) + 0.803147*(t2193*t2427 - 4.e-6*t2193*t2524 + t2327*t2609) - 1.*t2734*t2761 - 1.*t2773*t2785 - 1.*t1801*t2799 - 1.*t2884*t2917 - 1.*t2948*t2955 - 1.*t3007*t3029 + 0.03875*(t2913*t2948 + t2901*t3007 + 4.e-6*t2884*t3059) - 0.14871*(4.e-6*t2913*t2948 + 4.e-6*t3007*t3059 + t2884*t3089) - 0.80321*(-4.e-6*t2884*t2913 - 1.*t2913*t3007 + t2948*t3151) - 1.*t1861*t1869*t37 + t1869*t2716*t37 + t1352*t37*t60 - 1.*t2726*t37*t60;
  p_output1[1]=t1352*t3226 - 1.*t2726*t3226 + t1861*t3250 - 1.*t2716*t3250 + t1954*t3280 + t2102*t3304 + t2241*t3325 + t2412*t3341 + t2456*t3370 - 0.041195*(-1.*t2193*t3325 + t2150*t3341 + 4.e-6*t2165*t3370) + 0.803147*(t2609*t3325 + t2193*t3341 - 4.e-6*t2193*t3370) - 0.14871*(4.e-6*t2193*t3325 + 4.e-6*t2165*t3341 + t2565*t3370) - 1.*t2761*t3488 - 1.*t2785*t3517 - 1.*t2917*t3572 - 1.*t2955*t3596 - 1.*t3029*t3623 + 0.03875*(4.e-6*t3059*t3572 + t2913*t3596 + t2901*t3623) - 0.80321*(-4.e-6*t2913*t3572 + t3151*t3596 - 1.*t2913*t3623) - 0.14871*(t3089*t3572 + 4.e-6*t2913*t3596 + 4.e-6*t3059*t3623) - 1.*t1739*t3205*t37 + t2799*t3205*t37;
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

#include "step_distance_DiagonalStance1.hh"

namespace DiagonalStance1
{

void step_distance_DiagonalStance1_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
