/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:28:24 GMT+01:00
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
  double t334;
  double t187;
  double t476;
  double t426;
  double t439;
  double t443;
  double t1135;
  double t242;
  double t292;
  double t536;
  double t1050;
  double t1059;
  double t1113;
  double t1155;
  double t1165;
  double t940;
  double t1267;
  double t1274;
  double t1308;
  double t1314;
  double t1346;
  double t1383;
  double t1394;
  double t1415;
  double t1543;
  double t939;
  double t1209;
  double t1212;
  double t1220;
  double t1944;
  double t1948;
  double t1968;
  double t1972;
  double t1973;
  double t1976;
  double t1977;
  double t1571;
  double t1598;
  double t1996;
  double t2013;
  double t2016;
  double t2024;
  double t2040;
  double t2053;
  double t2062;
  double t2067;
  double t2071;
  double t2092;
  double t1178;
  double t1373;
  double t1435;
  double t1452;
  double t1647;
  double t1660;
  double t1664;
  double t1735;
  double t1866;
  double t1896;
  double t1903;
  double t1907;
  double t1934;
  double t1938;
  double t1939;
  double t1982;
  double t2032;
  double t2128;
  double t2136;
  double t2229;
  double t2234;
  double t2276;
  double t2300;
  double t2302;
  double t2318;
  double t619;
  double t682;
  double t692;
  double t750;
  double t1898;
  double t2222;
  double t2330;
  double t2342;
  double t2629;
  double t2636;
  double t2640;
  double t2649;
  double t2665;
  double t2673;
  double t2388;
  double t2405;
  double t2431;
  double t2433;
  double t661;
  double t775;
  double t931;
  double t2522;
  double t2543;
  double t2560;
  double t2585;
  double t2588;
  double t2589;
  double t2590;
  double t2595;
  double t2464;
  double t2477;
  double t2480;
  double t2497;
  double t2798;
  double t2891;
  double t2893;
  double t2896;
  double t2902;
  double t2904;
  double t2908;
  double t2910;
  double t2911;
  double t3001;
  double t3005;
  double t3007;
  double t3010;
  double t3030;
  double t3032;
  double t3040;
  double t2901;
  double t2906;
  double t2915;
  double t2917;
  double t2926;
  double t2931;
  double t2944;
  double t2969;
  double t3316;
  double t2359;
  double t2360;
  double t2379;
  double t1537;
  double t1816;
  double t1821;
  double t3389;
  double t2729;
  double t2695;
  double t2698;
  double t2724;
  double t2641;
  double t2678;
  double t2681;
  double t3483;
  double t3487;
  double t3499;
  double t2610;
  double t3466;
  double t3471;
  double t3480;
  double t3522;
  double t3523;
  double t3535;
  double t3558;
  double t3563;
  double t3569;
  double t3350;
  double t3365;
  double t3370;
  double t3327;
  double t3333;
  double t3343;
  double t3315;
  double t3257;
  double t3261;
  double t3283;
  double t3298;
  double t3304;
  double t3349;
  double t3407;
  double t3419;
  double t3707;
  double t3656;
  double t3687;
  double t3693;
  double t3648;
  double t3712;
  double t3715;
  double t3716;
  double t3586;
  double t3589;
  double t3606;
  double t3540;
  double t3541;
  double t3549;
  double t3553;
  double t3806;
  double t3807;
  double t3808;
  double t3585;
  double t3796;
  double t3799;
  double t3800;
  double t3809;
  double t3810;
  double t3812;
  double t3838;
  double t3839;
  double t3843;
  double t4078;
  double t4092;
  double t4093;
  double t4095;
  double t4103;
  double t4106;
  double t4107;
  double t3865;
  double t3873;
  double t3892;
  double t3956;
  double t3934;
  double t3307;
  double t3425;
  double t3439;
  double t4201;
  double t3828;
  double t3832;
  double t3837;
  double t4231;
  double t4375;
  double t4389;
  double t4408;
  double t4423;
  double t4337;
  double t4344;
  double t4348;
  double t4372;
  double t4283;
  double t4275;
  double t4479;
  double t4488;
  t334 = Cos(var1[11]);
  t187 = Cos(var1[10]);
  t476 = -1. + t334;
  t426 = -1.*t334;
  t439 = 1. + t426;
  t443 = 1.6e-11*t439;
  t1135 = Sin(var1[11]);
  t242 = -1.*t187;
  t292 = 1. + t242;
  t536 = 1.6e-11*t476;
  t1050 = -1.000000000016*t439;
  t1059 = 1. + t1050;
  t1113 = 0.004352*t1059;
  t1155 = -0.9999910000159999*t1135;
  t1165 = t1113 + t1155;
  t940 = Sin(var1[10]);
  t1267 = -1. + t443;
  t1274 = 4.e-6*t1267;
  t1308 = 3.999964e-6*t439;
  t1314 = -1.7408e-8*t1135;
  t1346 = t1274 + t1308 + t1314;
  t1383 = 0.999991*t334;
  t1394 = 0.004352*t1135;
  t1415 = t536 + t1383 + t1394;
  t1543 = Cos(var1[9]);
  t939 = Sin(var1[9]);
  t1209 = -1. + t187;
  t1212 = 1.6e-11*t1209;
  t1220 = 1. + t1212;
  t1944 = -1.26e-8*var1[11];
  t1948 = 1. + t536;
  t1968 = -0.14871*t1948;
  t1972 = -1.64779999997447e-7*t439;
  t1973 = -1.59556e-7*t476;
  t1976 = -1.199987999968e-6*t1135;
  t1977 = t1944 + t1968 + t1972 + t1973 + t1976;
  t1571 = -1.000000000016*t292;
  t1598 = 1. + t1571;
  t1996 = 0.803147*t1059;
  t2013 = 0.50315000001605*t439;
  t2016 = 0.00130540515936178*t1135;
  t2024 = t1996 + t2013 + t2016;
  t2040 = -5.04e-14*var1[11];
  t2053 = -0.03988959484*t439;
  t2062 = 6.38224e-13*t476;
  t2067 = -0.041195*t334;
  t2071 = 0.299996999992*t1135;
  t2092 = t2040 + t2053 + t2062 + t2067 + t2071;
  t1178 = -4.e-6*t940*t1165;
  t1373 = t1220*t1346;
  t1435 = 4.e-6*t292*t1415;
  t1452 = 0. + t1178 + t1373 + t1435;
  t1647 = t1598*t1165;
  t1660 = 4.e-6*t940*t1346;
  t1664 = -1.*t940*t1415;
  t1735 = 0. + t1647 + t1660 + t1664;
  t1866 = -1.*t1543;
  t1896 = 1. + t1866;
  t1903 = -0.15121*t939;
  t1907 = -1.2484e-7*var1[10];
  t1934 = 2.479936e-18*t292;
  t1938 = -1.54996e-7*t1209;
  t1939 = 1.124840000016e-6*t940;
  t1982 = t1220*t1977;
  t2032 = -4.e-6*t940*t2024;
  t2128 = 4.e-6*t292*t2092;
  t2136 = t1907 + t1934 + t1938 + t1939 + t1982 + t2032 + t2128;
  t2229 = 0.281210000008499*t292;
  t2234 = -0.03874900000062*t940;
  t2276 = 4.e-6*t940*t1977;
  t2300 = t1598*t2024;
  t2302 = -1.*t940*t2092;
  t2318 = t2229 + t2234 + t2276 + t2300 + t2302;
  t619 = -1. + t443 + t536;
  t682 = 4.e-6*t476;
  t692 = -4.e-6*t334;
  t750 = t682 + t692;
  t1898 = 0.15121*t1896;
  t2222 = -1.*t939*t2136;
  t2330 = t1543*t2318;
  t2342 = t1898 + t1903 + t2222 + t2330;
  t2629 = t1220*t619;
  t2636 = 4.e-6*t292*t750;
  t2640 = t2629 + t2636;
  t2649 = 4.e-6*t619*t940;
  t2665 = -1.*t750*t940;
  t2673 = t2649 + t2665;
  t2388 = -0.15121*t1896;
  t2405 = t1543*t2136;
  t2431 = t939*t2318;
  t2433 = t2388 + t1903 + t2405 + t2431;
  t661 = 4.e-6*t292*t619;
  t775 = t187*t750;
  t931 = t661 + t775;
  t2522 = -4.9936e-13*var1[10];
  t2543 = -0.038749*t292;
  t2560 = 6.19984e-13*t1209;
  t2585 = -0.281210000004*t940;
  t2588 = 4.e-6*t292*t1977;
  t2589 = t940*t2024;
  t2590 = t187*t2092;
  t2595 = 0. + t2522 + t2543 + t2560 + t2585 + t2588 + t2589 + t2590;
  t2464 = t940*t1165;
  t2477 = 4.e-6*t292*t1346;
  t2480 = t187*t1415;
  t2497 = 0. + t2464 + t2477 + t2480;
  t2798 = t2522 + t2543 + t2560 + t2585 + t2588 + t2589 + t2590;
  t2891 = -1.7408e-8*t439;
  t2893 = -3.999964e-6*t1135;
  t2896 = t2891 + t2893;
  t2902 = 0.999991*t1059;
  t2904 = t2902 + t1394;
  t2908 = -0.004352*t334;
  t2910 = 0.999991*t1135;
  t2911 = t2908 + t2910;
  t3001 = -1.*t1977*t1346;
  t3005 = -1.*t1165*t2024;
  t3007 = -1.*t1415*t2092;
  t3010 = t3001 + t3005 + t3007;
  t3030 = t619*t1977;
  t3032 = t750*t2092;
  t3040 = t3030 + t3032;
  t2901 = t1220*t2896;
  t2906 = -4.e-6*t940*t2904;
  t2915 = 4.e-6*t292*t2911;
  t2917 = 0. + t2901 + t2906 + t2915;
  t2926 = 4.e-6*t940*t2896;
  t2931 = t1598*t2904;
  t2944 = -1.*t940*t2911;
  t2969 = 0. + t2926 + t2931 + t2944;
  t3316 = Cos(var1[5]);
  t2359 = t1543*t1452;
  t2360 = t939*t1735;
  t2379 = 0. + t2359 + t2360;
  t1537 = -1.*t939*t1452;
  t1816 = t1543*t1735;
  t1821 = 0. + t1537 + t1816;
  t3389 = Sin(var1[5]);
  t2729 = t931*t2595;
  t2695 = t1543*t2640;
  t2698 = t939*t2673;
  t2724 = t2695 + t2698;
  t2641 = -1.*t2640*t939;
  t2678 = t1543*t2673;
  t2681 = t2641 + t2678;
  t3483 = t3316*t2724;
  t3487 = t2681*t3389;
  t3499 = t3483 + t3487;
  t2610 = -1.*t2497*t2595;
  t3466 = t3316*t2379;
  t3471 = t1821*t3389;
  t3480 = 0. + t3466 + t3471;
  t3522 = t3316*t2433;
  t3523 = t2342*t3389;
  t3535 = 0. + t3522 + t3523;
  t3558 = t3316*t2342;
  t3563 = -1.*t2433*t3389;
  t3569 = 0. + t3558 + t3563;
  t3350 = t1543*t2917;
  t3365 = t939*t2969;
  t3370 = 0. + t3350 + t3365;
  t3327 = -1.*t939*t2917;
  t3333 = t1543*t2969;
  t3343 = 0. + t3327 + t3333;
  t3315 = Cos(var1[4]);
  t3257 = 4.e-6*t292*t2896;
  t3261 = t940*t2904;
  t3283 = t187*t2911;
  t3298 = 0. + t3257 + t3261 + t3283;
  t3304 = Sin(var1[4]);
  t3349 = t3316*t3343;
  t3407 = -1.*t3370*t3389;
  t3419 = 0. + t3349 + t3407;
  t3707 = Cos(var1[3]);
  t3656 = t3316*t3370;
  t3687 = t3343*t3389;
  t3693 = 0. + t3656 + t3687;
  t3648 = Sin(var1[3]);
  t3712 = t3315*t3298;
  t3715 = -1.*t3304*t3419;
  t3716 = 0. + t3712 + t3715;
  t3586 = t3316*t1821;
  t3589 = -1.*t2379*t3389;
  t3606 = 0. + t3586 + t3589;
  t3540 = t3499*t3535;
  t3541 = t3316*t2681;
  t3549 = -1.*t2724*t3389;
  t3553 = t3541 + t3549;
  t3806 = t931*t3304;
  t3807 = t3315*t3553;
  t3808 = t3806 + t3807;
  t3585 = -1.*t3480*t3535;
  t3796 = t2497*t3304;
  t3799 = t3315*t3606;
  t3800 = 0. + t3796 + t3799;
  t3809 = t2595*t3304;
  t3810 = t3315*t3569;
  t3812 = 0. + t3809 + t3810;
  t3838 = t3315*t2595;
  t3839 = -1.*t3304*t3569;
  t3843 = 0. + t3838 + t3839;
  t4078 = t2896*t1977;
  t4092 = t2024*t2904;
  t4093 = t2092*t2911;
  t4095 = t4078 + t4092 + t4093;
  t4103 = -1.*t619*t1977;
  t4106 = -1.*t750*t2092;
  t4107 = t4103 + t4106;
  t3865 = t3315*t2497;
  t3873 = -1.*t3304*t3606;
  t3892 = 0. + t3865 + t3873;
  t3956 = -1.*t931*t2595;
  t3934 = t2595*t3298;
  t3307 = t3298*t3304;
  t3425 = t3315*t3419;
  t3439 = 0. + t3307 + t3425;
  t4201 = -1.*t3499*t3535;
  t3828 = t931*t3315;
  t3832 = -1.*t3304*t3553;
  t3837 = t3828 + t3832;
  t4231 = t3535*t3693;
  t4375 = t1977*t1346;
  t4389 = t1165*t2024;
  t4408 = t1415*t2092;
  t4423 = t4375 + t4389 + t4408;
  t4337 = -1.*t2896*t1977;
  t4344 = -1.*t2024*t2904;
  t4348 = -1.*t2092*t2911;
  t4372 = t4337 + t4344 + t4348;
  t4283 = t2497*t2595;
  t4275 = -1.*t2595*t3298;
  t4479 = t3480*t3535;
  t4488 = -1.*t3535*t3693;
  p_output1[0]=t3439*var2[0] + (0. + t3693*t3707 - 1.*t3648*t3716)*var2[1] + (0. + t3648*t3693 + t3707*t3716)*var2[2] + (t3800*(t3540 + t3808*t3812 + t3837*t3843) + t3808*(t3585 - 1.*t3800*t3812 - 1.*t3843*t3892))*var2[3] + (t3480*(t2729 + t3540 + t3553*t3569) + t3499*(t2610 + t3585 - 1.*t3569*t3606))*var2[4] + (t2497*(t2342*t2681 + t2433*t2724 + t2729) + (-1.*t1821*t2342 - 1.*t2379*t2433 + t2610)*t931)*var2[5] + (-0.15121*t2917 - 0.15121*t2969 + (-1.*t1452*t2136 - 1.*t1735*t2318 - 1.*t2497*t2798)*t931 + t2497*(t2136*t2640 + t2318*t2673 + t2798*t931))*var2[9] + (1.e-6*t2896 - 0.038749*t2904 - 0.28121*t2911 - 1.*t1346*t3040 - 1.*t3010*t619 + 4.e-6*(-1.*t1415*t3040 - 1.*t3010*t750))*var2[10] - 1.9353204325022392e-7*var2[11];
  p_output1[1]=t3800*var2[0] + (0. + t3480*t3707 - 1.*t3648*t3892)*var2[1] + (0. + t3480*t3648 + t3707*t3892)*var2[2] + (t3439*(-1.*t3808*t3812 - 1.*t3837*t3843 + t4201) + t3808*(t3439*t3812 + t3716*t3843 + t4231))*var2[3] + (t3693*(-1.*t3553*t3569 + t3956 + t4201) + t3499*(t3419*t3569 + t3934 + t4231))*var2[4] + (t3298*(-1.*t2342*t2681 - 1.*t2433*t2724 + t3956) + (t2342*t3343 + t2433*t3370 + t3934)*t931)*var2[5] + (-0.15121*t1452 - 0.15121*t1735 + (t2136*t2917 + t2318*t2969 + t2798*t3298)*t931 + t3298*(-1.*t2136*t2640 - 1.*t2318*t2673 - 1.*t2798*t931))*var2[9] + (-0.038749*t1165 + 1.e-6*t1346 - 0.28121*t1415 - 1.*t2896*t4107 - 1.*t4095*t619 + 4.e-6*(-1.*t2911*t4107 - 1.*t4095*t750))*var2[10] + 0.29999998115510645*var2[11];
  p_output1[2]=t3808*var2[0] + (t3499*t3707 - 1.*t3648*t3837)*var2[1] + (t3499*t3648 + t3707*t3837)*var2[2] + (t3439*(t3800*t3812 + t3843*t3892 + t4479) + t3800*(-1.*t3439*t3812 - 1.*t3716*t3843 + t4488))*var2[3] + (t3693*(t3569*t3606 + t4283 + t4479) + t3480*(-1.*t3419*t3569 + t4275 + t4488))*var2[4] + (t2497*(-1.*t2342*t3343 - 1.*t2433*t3370 + t4275) + t3298*(t1821*t2342 + t2379*t2433 + t4283))*var2[5] + (-0.15121*t2640 - 0.15121*t2673 + (t1452*t2136 + t1735*t2318 + t2497*t2798)*t3298 + t2497*(-1.*t2136*t2917 - 1.*t2318*t2969 - 1.*t2798*t3298))*var2[9] + (-1.*t1346*t4372 - 1.*t2896*t4423 + 4.e-6*(-1.*t1415*t4372 - 1.*t2911*t4423) + 1.e-6*t619 - 0.28121*t750)*var2[10] + 1.1914820871506078e-8*var2[11];
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
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
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

#include "dh_FrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void dh_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
