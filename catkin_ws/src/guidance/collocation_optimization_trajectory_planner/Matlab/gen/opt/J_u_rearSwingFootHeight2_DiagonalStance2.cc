/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:14:12 GMT+01:00
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
  double t211;
  double t252;
  double t254;
  double t350;
  double t598;
  double t605;
  double t638;
  double t644;
  double t650;
  double t664;
  double t763;
  double t692;
  double t705;
  double t774;
  double t326;
  double t728;
  double t797;
  double t822;
  double t949;
  double t964;
  double t967;
  double t525;
  double t1032;
  double t1483;
  double t1496;
  double t1536;
  double t1674;
  double t128;
  double t1313;
  double t1354;
  double t1194;
  double t1196;
  double t1204;
  double t1388;
  double t1390;
  double t1403;
  double t1739;
  double t984;
  double t1904;
  double t1080;
  double t2047;
  double t1544;
  double t2158;
  double t2196;
  double t369;
  double t1837;
  double t1849;
  double t1869;
  double t1940;
  double t1946;
  double t1974;
  double t2003;
  double t2008;
  double t2011;
  double t2358;
  double t2208;
  double t2220;
  double t2222;
  double t2224;
  double t2259;
  double t2263;
  double t2273;
  double t2274;
  double t2391;
  double t2394;
  double t2400;
  double t2407;
  double t2410;
  double t2420;
  double t2438;
  double t2442;
  double t1742;
  double t2446;
  double t1722;
  double t2513;
  double t2101;
  double t2460;
  double t2467;
  double t2054;
  double t645;
  double t671;
  double t162;
  double t268;
  double t438;
  double t461;
  double t535;
  double t558;
  double t595;
  double t923;
  double t931;
  double t976;
  double t980;
  double t985;
  double t992;
  double t1164;
  double t1168;
  double t1188;
  double t1294;
  double t1312;
  double t1335;
  double t1340;
  double t1364;
  double t1370;
  double t1371;
  double t1436;
  double t1542;
  double t1723;
  double t1728;
  double t1747;
  double t1758;
  double t1834;
  double t2666;
  double t2668;
  double t2675;
  double t2680;
  double t2691;
  double t2700;
  double t2027;
  double t2029;
  double t2076;
  double t2082;
  double t2119;
  double t2130;
  double t2153;
  double t2293;
  double t2343;
  double t2367;
  double t2373;
  double t2375;
  double t2376;
  double t2382;
  double t2449;
  double t2720;
  double t2722;
  double t2726;
  double t2759;
  double t2468;
  double t2762;
  double t2766;
  double t2801;
  double t2804;
  double t2476;
  double t2479;
  double t2827;
  double t2832;
  double t2836;
  double t2850;
  double t2503;
  double t2504;
  double t2514;
  double t2528;
  double t2585;
  double t2600;
  double t2608;
  double t2627;
  double t2980;
  double t2985;
  double t2987;
  double t3010;
  double t3017;
  double t3021;
  double t3047;
  double t3049;
  double t3060;
  double t3067;
  double t3074;
  double t3087;
  double t3110;
  double t3114;
  double t3118;
  double t3133;
  double t3137;
  double t3138;
  double t3145;
  double t3166;
  double t3175;
  double t3266;
  double t3275;
  double t3276;
  double t3277;
  double t3282;
  double t3288;
  double t3299;
  double t3305;
  double t3320;
  double t3340;
  double t3348;
  double t3353;
  double t3354;
  double t3355;
  double t3365;
  double t3370;
  double t3373;
  double t3481;
  double t3502;
  double t3531;
  double t3608;
  double t3609;
  double t3610;
  double t3491;
  double t3677;
  double t3599;
  double t3624;
  double t3625;
  double t3627;
  double t3634;
  double t3641;
  double t3644;
  double t3670;
  double t3671;
  double t3676;
  double t3678;
  double t3679;
  double t3681;
  double t3683;
  double t3684;
  double t3686;
  double t3688;
  double t3689;
  double t3694;
  double t3755;
  double t3822;
  double t3782;
  double t3796;
  double t3802;
  double t3805;
  double t3831;
  double t3837;
  double t3842;
  double t3843;
  double t3815;
  double t3877;
  double t3879;
  double t3881;
  double t3882;
  double t3764;
  double t3926;
  double t3868;
  t211 = Cos(var1[13]);
  t252 = -1.*t211;
  t254 = 1. + t252;
  t350 = Sin(var1[13]);
  t598 = Sin(var1[3]);
  t605 = Cos(var1[12]);
  t638 = -1.*t605;
  t644 = 1. + t638;
  t650 = Sin(var1[12]);
  t664 = 0.15121*t650;
  t763 = Cos(var1[3]);
  t692 = Cos(var1[5]);
  t705 = Sin(var1[4]);
  t774 = Sin(var1[5]);
  t326 = 4.e-6*t254;
  t728 = t692*t598*t705;
  t797 = t763*t774;
  t822 = t728 + t797;
  t949 = t763*t692;
  t964 = -1.*t598*t705*t774;
  t967 = t949 + t964;
  t525 = -2.8e-11*t254;
  t1032 = 7.e-6*t254;
  t1483 = Cos(var1[14]);
  t1496 = -1.*t1483;
  t1536 = 1. + t1496;
  t1674 = Sin(var1[14]);
  t128 = Cos(var1[4]);
  t1313 = -1.*t350;
  t1354 = -4.e-6*t350;
  t1194 = -1.*t650*t822;
  t1196 = t605*t967;
  t1204 = t1194 + t1196;
  t1388 = t605*t822;
  t1390 = t650*t967;
  t1403 = t1388 + t1390;
  t1739 = 7.e-6*t1536;
  t984 = -7.e-6*t350;
  t1904 = -7.e-6*t254;
  t1080 = 4.e-6*t350;
  t2047 = 4.e-6*t1536;
  t1544 = -2.8e-11*t1536;
  t2158 = -1. + t211;
  t2196 = 4.e-6*t2158;
  t369 = 7.e-6*t350;
  t1837 = 2.8e-11*t254;
  t1849 = t1837 + t1313;
  t1869 = -1.*t128*t1849*t598;
  t1940 = t1904 + t1354;
  t1946 = t1940*t1204;
  t1974 = -1.000000000016*t254;
  t2003 = 1. + t1974;
  t2008 = t2003*t1403;
  t2011 = t1869 + t1946 + t2008;
  t2358 = 7.e-6*t1674;
  t2208 = t2196 + t984;
  t2220 = -1.*t128*t2208*t598;
  t2222 = -6.5e-11*t254;
  t2224 = 1. + t2222;
  t2259 = t2224*t1204;
  t2263 = t1904 + t1080;
  t2273 = t2263*t1403;
  t2274 = t2220 + t2259 + t2273;
  t2391 = -1.000000000049*t254;
  t2394 = 1. + t2391;
  t2400 = -1.*t2394*t128*t598;
  t2407 = t2196 + t369;
  t2410 = t2407*t1204;
  t2420 = t1837 + t350;
  t2438 = t2420*t1403;
  t2442 = t2400 + t2410 + t2438;
  t1742 = -4.e-6*t1674;
  t2446 = 2.8e-11*t1536;
  t1722 = -1.*t1674;
  t2513 = -7.e-6*t1536;
  t2101 = 4.e-6*t1674;
  t2460 = -1. + t1483;
  t2467 = 4.e-6*t2460;
  t2054 = -7.e-6*t1674;
  t645 = -0.15121*t644;
  t671 = t645 + t664;
  t162 = 5.856279999999999e-13*var1[13];
  t268 = -0.0387489999948987*t254;
  t438 = t326 + t369;
  t461 = -2.123459e-6*t438;
  t535 = t525 + t350;
  t558 = -0.281209000004*t535;
  t595 = t162 + t268 + t461 + t558;
  t923 = 0.15121*t644;
  t931 = t923 + t664;
  t976 = -1.4640699999999997e-7*var1[13];
  t980 = -1.38024835e-16*t254;
  t985 = t326 + t984;
  t992 = -0.038748999993*t985;
  t1164 = t1032 + t1080;
  t1168 = -0.281209000004*t1164;
  t1188 = t976 + t980 + t992 + t1168;
  t1294 = 1.0248489999999998e-12*var1[13];
  t1312 = -0.28120900000849935*t254;
  t1335 = t525 + t1313;
  t1340 = -0.038748999993*t1335;
  t1364 = t1032 + t1354;
  t1370 = -2.123459e-6*t1364;
  t1371 = t1294 + t1312 + t1340 + t1370;
  t1436 = 1.8190549999999993e-12*var1[14];
  t1542 = -0.5031490000160505*t1536;
  t1723 = t1544 + t1722;
  t1728 = -0.038922999986*t1723;
  t1747 = t1739 + t1742;
  t1758 = -3.6777349999999994e-6*t1747;
  t1834 = t1436 + t1542 + t1728 + t1758;
  t2666 = t763*t128*t692*t650;
  t2668 = t605*t763*t128*t774;
  t2675 = t2666 + t2668;
  t2680 = -1.*t605*t763*t128*t692;
  t2691 = t763*t128*t650*t774;
  t2700 = t2680 + t2691;
  t2027 = -2.598649999999999e-7*var1[14];
  t2029 = -2.3905277499999995e-16*t1536;
  t2076 = t2047 + t2054;
  t2082 = -0.038922999986*t2076;
  t2119 = t1739 + t2101;
  t2130 = -0.503149000008*t2119;
  t2153 = t2027 + t2029 + t2082 + t2130;
  t2293 = 1.0394599999999997e-12*var1[14];
  t2343 = -0.03892299998790722*t1536;
  t2367 = t2047 + t2358;
  t2373 = -3.6777349999999994e-6*t2367;
  t2375 = t1544 + t1674;
  t2376 = -0.503149000008*t2375;
  t2382 = t2293 + t2343 + t2373 + t2376;
  t2449 = t2446 + t1674;
  t2720 = -1.*t763*t1849*t705;
  t2722 = t1940*t2675;
  t2726 = t2003*t2700;
  t2759 = t2720 + t2722 + t2726;
  t2468 = t2467 + t2358;
  t2762 = -1.*t763*t2208*t705;
  t2766 = t2224*t2675;
  t2801 = t2263*t2700;
  t2804 = t2762 + t2766 + t2801;
  t2476 = -1.000000000049*t1536;
  t2479 = 1. + t2476;
  t2827 = -1.*t2394*t763*t705;
  t2832 = t2407*t2675;
  t2836 = t2420*t2700;
  t2850 = t2827 + t2832 + t2836;
  t2503 = -1.000000000016*t1536;
  t2504 = 1. + t2503;
  t2514 = t2513 + t1742;
  t2528 = t2446 + t1722;
  t2585 = t2513 + t2101;
  t2600 = -6.5e-11*t1536;
  t2608 = 1. + t2600;
  t2627 = t2467 + t2054;
  t2980 = t763*t692*t705;
  t2985 = -1.*t598*t774;
  t2987 = t2980 + t2985;
  t3010 = t692*t598;
  t3017 = t763*t705*t774;
  t3021 = t3010 + t3017;
  t3047 = t650*t2987;
  t3049 = t605*t3021;
  t3060 = t3047 + t3049;
  t3067 = t605*t2987;
  t3074 = -1.*t650*t3021;
  t3087 = t3067 + t3074;
  t3110 = t2263*t3060;
  t3114 = t2224*t3087;
  t3118 = t3110 + t3114;
  t3133 = t2003*t3060;
  t3137 = t1940*t3087;
  t3138 = t3133 + t3137;
  t3145 = t2420*t3060;
  t3166 = t2407*t3087;
  t3175 = t3145 + t3166;
  t3266 = 0.15121*t605;
  t3275 = -1.*t763*t692*t705;
  t3276 = t598*t774;
  t3277 = t3275 + t3276;
  t3282 = -1.*t650*t3277;
  t3288 = t3282 + t3049;
  t3299 = -1.*t605*t3277;
  t3305 = t3299 + t3074;
  t3320 = t2263*t3288;
  t3340 = t2224*t3305;
  t3348 = t3320 + t3340;
  t3353 = t2003*t3288;
  t3354 = t1940*t3305;
  t3355 = t3353 + t3354;
  t3365 = t2420*t3288;
  t3370 = t2407*t3305;
  t3373 = t3365 + t3370;
  t3481 = -2.8e-11*t350;
  t3502 = -7.e-6*t211;
  t3531 = 4.e-6*t211;
  t3608 = t605*t3277;
  t3609 = t650*t3021;
  t3610 = t3608 + t3609;
  t3491 = 7.e-6*t211;
  t3677 = 2.8e-11*t350;
  t3599 = -4.e-6*t211;
  t3624 = t3502 + t1354;
  t3625 = t763*t128*t3624;
  t3627 = -6.5e-11*t350*t3288;
  t3634 = t3531 + t984;
  t3641 = t3634*t3610;
  t3644 = t3625 + t3627 + t3641;
  t3670 = -1.000000000049*t763*t128*t350;
  t3671 = t3491 + t1354;
  t3676 = t3671*t3288;
  t3678 = t211 + t3677;
  t3679 = t3678*t3610;
  t3681 = t3670 + t3676 + t3679;
  t3683 = t252 + t3677;
  t3684 = t763*t128*t3683;
  t3686 = t3599 + t984;
  t3688 = t3686*t3288;
  t3689 = -1.000000000016*t350*t3610;
  t3694 = t3684 + t3688 + t3689;
  t3755 = -2.8e-11*t1674;
  t3822 = 4.e-6*t1483;
  t3782 = t763*t128*t1849;
  t3796 = t1940*t3288;
  t3802 = t2003*t3610;
  t3805 = t3782 + t3796 + t3802;
  t3831 = t763*t128*t2208;
  t3837 = t2224*t3288;
  t3842 = t2263*t3610;
  t3843 = t3831 + t3837 + t3842;
  t3815 = -7.e-6*t1483;
  t3877 = t2394*t763*t128;
  t3879 = t2407*t3288;
  t3881 = t2420*t3610;
  t3882 = t3877 + t3879 + t3881;
  t3764 = -4.e-6*t1483;
  t3926 = 2.8e-11*t1674;
  t3868 = 7.e-6*t1483;
  p_output1[0]=1.;
  p_output1[1]=t1188*t1204 + t1371*t1403 + t1834*t2011 + t2153*t2274 + t2382*t2442 - 0.038924*(t2011*t2449 + t2274*t2468 + t2442*t2479) - 0.80315*(t2011*t2504 + t2274*t2514 + t2442*t2528) + 0.148705*(t2011*t2585 + t2274*t2608 + t2442*t2627) - 1.*t128*t595*t598 + t671*t822 + t931*t967;
  p_output1[2]=t1188*t2675 + t1371*t2700 + t1834*t2759 + t2153*t2804 + t2382*t2850 - 0.038924*(t2449*t2759 + t2468*t2804 + t2479*t2850) - 0.80315*(t2504*t2759 + t2514*t2804 + t2528*t2850) + 0.148705*(t2585*t2759 + t2608*t2804 + t2627*t2850) - 1.*t128*t671*t692*t763 - 1.*t595*t705*t763 + t128*t763*t774*t931;
  p_output1[3]=t1371*t3060 + t1188*t3087 + t2153*t3118 + t1834*t3138 + t2382*t3175 - 0.038924*(t2468*t3118 + t2449*t3138 + t2479*t3175) - 0.80315*(t2514*t3118 + t2504*t3138 + t2528*t3175) + 0.148705*(t2608*t3118 + t2585*t3138 + t2627*t3175) + t3021*t671 + t2987*t931;
  p_output1[4]=t1371*t3288 + t1188*t3305 + t2153*t3348 + t1834*t3355 + t2382*t3373 - 0.038924*(t2468*t3348 + t2449*t3355 + t2479*t3373) - 0.80315*(t2514*t3348 + t2504*t3355 + t2528*t3373) + 0.148705*(t2608*t3348 + t2585*t3355 + t2627*t3373) + t3277*(t3266 - 0.15121*t650) + t3021*(t3266 + t664);
  p_output1[5]=t2153*t3644 + t2382*t3681 + t3288*(-1.4640699999999997e-7 - 1.38024835e-16*t350 - 0.038748999993*(t1080 + t3502) - 0.281209000004*(t3531 + t369)) + t3610*(1.0248489999999998e-12 - 0.038748999993*(t252 + t3481) - 0.28120900000849935*t350 - 2.123459e-6*(t3599 + t369)) + t1834*t3694 - 0.038924*(t2468*t3644 + t2479*t3681 + t2449*t3694) - 0.80315*(t2514*t3644 + t2528*t3681 + t2504*t3694) + 0.148705*(t2608*t3644 + t2627*t3681 + t2585*t3694) + t128*(5.856279999999999e-13 - 0.281209000004*(t211 + t3481) - 2.123459e-6*(t1080 + t3491) - 0.0387489999948987*t350)*t763;
  p_output1[6]=(1.8190549999999993e-12 - 0.5031490000160505*t1674 - 0.038922999986*(t1496 + t3755) - 3.6777349999999994e-6*(t2358 + t3764))*t3805 + (-2.598649999999999e-7 - 2.3905277499999995e-16*t1674 - 0.038922999986*(t2101 + t3815) - 0.503149000008*(t2358 + t3822))*t3843 + (1.0394599999999997e-12 - 0.03892299998790722*t1674 - 0.503149000008*(t1483 + t3755) - 3.6777349999999994e-6*(t2101 + t3868))*t3882 + 0.148705*(t3805*(t2054 + t3822) - 6.5e-11*t1674*t3843 + (t1742 + t3815)*t3882) - 0.038924*(t3843*(t1742 + t3868) - 1.000000000049*t1674*t3882 + t3805*(t1483 + t3926)) - 0.80315*(-1.000000000016*t1674*t3805 + (t2054 + t3764)*t3843 + t3882*(t1496 + t3926));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_u_rearSwingFootHeight2_DiagonalStance2.hh"

namespace DiagonalStance2
{

void J_u_rearSwingFootHeight2_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
