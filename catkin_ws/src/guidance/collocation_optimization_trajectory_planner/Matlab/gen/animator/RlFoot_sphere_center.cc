/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 23:17:56 GMT+01:00
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
  double t924;
  double t931;
  double t951;
  double t1153;
  double t41;
  double t561;
  double t654;
  double t684;
  double t701;
  double t745;
  double t1134;
  double t486;
  double t2382;
  double t2021;
  double t2832;
  double t3190;
  double t3203;
  double t3215;
  double t3227;
  double t3053;
  double t2309;
  double t3109;
  double t2964;
  double t2984;
  double t2993;
  double t3162;
  double t3166;
  double t3176;
  double t3265;
  double t2722;
  double t3356;
  double t2886;
  double t3410;
  double t3224;
  double t3450;
  double t3456;
  double t1754;
  double t3349;
  double t3351;
  double t3353;
  double t3361;
  double t3366;
  double t3374;
  double t3389;
  double t3396;
  double t3403;
  double t3514;
  double t3460;
  double t3462;
  double t3463;
  double t3464;
  double t3471;
  double t3478;
  double t3487;
  double t3489;
  double t3535;
  double t3540;
  double t3543;
  double t3566;
  double t3570;
  double t3572;
  double t3573;
  double t3588;
  double t3300;
  double t3594;
  double t3243;
  double t3686;
  double t3443;
  double t3598;
  double t3601;
  double t3422;
  double t865;
  double t987;
  double t1839;
  double t1949;
  double t2130;
  double t2184;
  double t2229;
  double t693;
  double t762;
  double t3814;
  double t2329;
  double t2356;
  double t3840;
  double t2558;
  double t2711;
  double t2758;
  double t2831;
  double t2911;
  double t2925;
  double t2951;
  double t3831;
  double t3855;
  double t3870;
  double t3876;
  double t3880;
  double t3881;
  double t3002;
  double t3013;
  double t3058;
  double t3088;
  double t3134;
  double t3148;
  double t3152;
  double t3186;
  double t3220;
  double t3254;
  double t3260;
  double t3302;
  double t3340;
  double t3345;
  double t3899;
  double t3902;
  double t3913;
  double t3937;
  double t3952;
  double t3953;
  double t3407;
  double t3408;
  double t3423;
  double t3427;
  double t3445;
  double t3446;
  double t3448;
  double t3495;
  double t3501;
  double t3516;
  double t3518;
  double t3520;
  double t3523;
  double t3525;
  double t3595;
  double t3956;
  double t3959;
  double t3960;
  double t3967;
  double t3602;
  double t3969;
  double t3971;
  double t3972;
  double t3976;
  double t3628;
  double t3631;
  double t3990;
  double t3991;
  double t3992;
  double t3994;
  double t3658;
  double t3677;
  double t3693;
  double t3698;
  double t3731;
  double t3735;
  double t3745;
  double t3769;
  double t4035;
  double t4037;
  double t4038;
  double t4041;
  double t4042;
  double t4045;
  double t4047;
  double t4050;
  double t4051;
  double t4055;
  double t4067;
  double t4070;
  double t4076;
  double t4077;
  double t4079;
  double t4082;
  double t4091;
  double t4093;
  double t4095;
  double t4097;
  double t4101;
  double t4108;
  double t4112;
  double t4114;
  t924 = Cos(var1[13]);
  t931 = -1.*t924;
  t951 = 1. + t931;
  t1153 = Sin(var1[13]);
  t41 = Cos(var1[4]);
  t561 = Cos(var1[12]);
  t654 = -1.*t561;
  t684 = 1. + t654;
  t701 = Sin(var1[12]);
  t745 = 0.15121*t701;
  t1134 = 4.e-6*t951;
  t486 = Cos(var1[5]);
  t2382 = Sin(var1[5]);
  t2021 = -2.8e-11*t951;
  t2832 = 7.e-6*t951;
  t3190 = Cos(var1[14]);
  t3203 = -1.*t3190;
  t3215 = 1. + t3203;
  t3227 = Sin(var1[14]);
  t3053 = -1.*t1153;
  t2309 = Sin(var1[4]);
  t3109 = -4.e-6*t1153;
  t2964 = -1.*t41*t486*t701;
  t2984 = -1.*t561*t41*t2382;
  t2993 = t2964 + t2984;
  t3162 = t561*t41*t486;
  t3166 = -1.*t41*t701*t2382;
  t3176 = t3162 + t3166;
  t3265 = 7.e-6*t3215;
  t2722 = -7.e-6*t1153;
  t3356 = -7.e-6*t951;
  t2886 = 4.e-6*t1153;
  t3410 = 4.e-6*t3215;
  t3224 = -2.8e-11*t3215;
  t3450 = -1. + t924;
  t3456 = 4.e-6*t3450;
  t1754 = 7.e-6*t1153;
  t3349 = 2.8e-11*t951;
  t3351 = t3349 + t3053;
  t3353 = t3351*t2309;
  t3361 = t3356 + t3109;
  t3366 = t3361*t2993;
  t3374 = -1.000000000016*t951;
  t3389 = 1. + t3374;
  t3396 = t3389*t3176;
  t3403 = t3353 + t3366 + t3396;
  t3514 = 7.e-6*t3227;
  t3460 = t3456 + t2722;
  t3462 = t3460*t2309;
  t3463 = -6.5e-11*t951;
  t3464 = 1. + t3463;
  t3471 = t3464*t2993;
  t3478 = t3356 + t2886;
  t3487 = t3478*t3176;
  t3489 = t3462 + t3471 + t3487;
  t3535 = -1.000000000049*t951;
  t3540 = 1. + t3535;
  t3543 = t3540*t2309;
  t3566 = t3456 + t1754;
  t3570 = t3566*t2993;
  t3572 = t3349 + t1153;
  t3573 = t3572*t3176;
  t3588 = t3543 + t3570 + t3573;
  t3300 = -4.e-6*t3227;
  t3594 = 2.8e-11*t3215;
  t3243 = -1.*t3227;
  t3686 = -7.e-6*t3215;
  t3443 = 4.e-6*t3227;
  t3598 = -1. + t3190;
  t3601 = 4.e-6*t3598;
  t3422 = -7.e-6*t3227;
  t865 = 5.856279999999999e-13*var1[13];
  t987 = -0.0387489999948987*t951;
  t1839 = t1134 + t1754;
  t1949 = -2.123459e-6*t1839;
  t2130 = t2021 + t1153;
  t2184 = -0.281209000004*t2130;
  t2229 = t865 + t987 + t1949 + t2184;
  t693 = -0.15121*t684;
  t762 = t693 + t745;
  t3814 = Sin(var1[3]);
  t2329 = 0.15121*t684;
  t2356 = t2329 + t745;
  t3840 = Cos(var1[3]);
  t2558 = -1.4640699999999997e-7*var1[13];
  t2711 = -1.38024835e-16*t951;
  t2758 = t1134 + t2722;
  t2831 = -0.038748999993*t2758;
  t2911 = t2832 + t2886;
  t2925 = -0.281209000004*t2911;
  t2951 = t2558 + t2711 + t2831 + t2925;
  t3831 = t486*t3814*t2309;
  t3855 = t3840*t2382;
  t3870 = t3831 + t3855;
  t3876 = t3840*t486;
  t3880 = -1.*t3814*t2309*t2382;
  t3881 = t3876 + t3880;
  t3002 = 1.0248489999999998e-12*var1[13];
  t3013 = -0.28120900000849935*t951;
  t3058 = t2021 + t3053;
  t3088 = -0.038748999993*t3058;
  t3134 = t2832 + t3109;
  t3148 = -2.123459e-6*t3134;
  t3152 = t3002 + t3013 + t3088 + t3148;
  t3186 = 1.8190549999999993e-12*var1[14];
  t3220 = -0.5031490000160505*t3215;
  t3254 = t3224 + t3243;
  t3260 = -0.038922999986*t3254;
  t3302 = t3265 + t3300;
  t3340 = -3.6777349999999994e-6*t3302;
  t3345 = t3186 + t3220 + t3260 + t3340;
  t3899 = -1.*t701*t3870;
  t3902 = t561*t3881;
  t3913 = t3899 + t3902;
  t3937 = t561*t3870;
  t3952 = t701*t3881;
  t3953 = t3937 + t3952;
  t3407 = -2.598649999999999e-7*var1[14];
  t3408 = -2.3905277499999995e-16*t3215;
  t3423 = t3410 + t3422;
  t3427 = -0.038922999986*t3423;
  t3445 = t3265 + t3443;
  t3446 = -0.503149000008*t3445;
  t3448 = t3407 + t3408 + t3427 + t3446;
  t3495 = 1.0394599999999997e-12*var1[14];
  t3501 = -0.03892299998790722*t3215;
  t3516 = t3410 + t3514;
  t3518 = -3.6777349999999994e-6*t3516;
  t3520 = t3224 + t3227;
  t3523 = -0.503149000008*t3520;
  t3525 = t3495 + t3501 + t3518 + t3523;
  t3595 = t3594 + t3227;
  t3956 = -1.*t41*t3351*t3814;
  t3959 = t3361*t3913;
  t3960 = t3389*t3953;
  t3967 = t3956 + t3959 + t3960;
  t3602 = t3601 + t3514;
  t3969 = -1.*t41*t3460*t3814;
  t3971 = t3464*t3913;
  t3972 = t3478*t3953;
  t3976 = t3969 + t3971 + t3972;
  t3628 = -1.000000000049*t3215;
  t3631 = 1. + t3628;
  t3990 = -1.*t3540*t41*t3814;
  t3991 = t3566*t3913;
  t3992 = t3572*t3953;
  t3994 = t3990 + t3991 + t3992;
  t3658 = -1.000000000016*t3215;
  t3677 = 1. + t3658;
  t3693 = t3686 + t3300;
  t3698 = t3594 + t3243;
  t3731 = t3686 + t3443;
  t3735 = -6.5e-11*t3215;
  t3745 = 1. + t3735;
  t3769 = t3601 + t3422;
  t4035 = -1.*t3840*t486*t2309;
  t4037 = t3814*t2382;
  t4038 = t4035 + t4037;
  t4041 = t486*t3814;
  t4042 = t3840*t2309*t2382;
  t4045 = t4041 + t4042;
  t4047 = -1.*t701*t4038;
  t4050 = t561*t4045;
  t4051 = t4047 + t4050;
  t4055 = t561*t4038;
  t4067 = t701*t4045;
  t4070 = t4055 + t4067;
  t4076 = t3840*t41*t3351;
  t4077 = t3361*t4051;
  t4079 = t3389*t4070;
  t4082 = t4076 + t4077 + t4079;
  t4091 = t3840*t41*t3460;
  t4093 = t3464*t4051;
  t4095 = t3478*t4070;
  t4097 = t4091 + t4093 + t4095;
  t4101 = t3540*t3840*t41;
  t4108 = t3566*t4051;
  t4112 = t3572*t4070;
  t4114 = t4101 + t4108 + t4112;
  p_output1[0]=t2229*t2309 + t2951*t2993 + t3152*t3176 + t3345*t3403 + t3448*t3489 + t3525*t3588 - 0.038924*(t3403*t3595 + t3489*t3602 + t3588*t3631) - 0.80315*(t3403*t3677 + t3489*t3693 + t3588*t3698) + 0.148705*(t3403*t3731 + t3489*t3745 + t3588*t3769) - 1.*t2356*t2382*t41 + t41*t486*t762 + var1[0];
  p_output1[1]=t2356*t3881 + t2951*t3913 + t3152*t3953 + t3345*t3967 + t3448*t3976 + t3525*t3994 - 0.038924*(t3595*t3967 + t3602*t3976 + t3631*t3994) - 0.80315*(t3677*t3967 + t3693*t3976 + t3698*t3994) + 0.148705*(t3731*t3967 + t3745*t3976 + t3769*t3994) - 1.*t2229*t3814*t41 + t3870*t762 + var1[1];
  p_output1[2]=t2356*t4045 + t2951*t4051 + t3152*t4070 + t3345*t4082 + t3448*t4097 + t2229*t3840*t41 + t3525*t4114 - 0.038924*(t3595*t4082 + t3602*t4097 + t3631*t4114) - 0.80315*(t3677*t4082 + t3693*t4097 + t3698*t4114) + 0.148705*(t3731*t4082 + t3745*t4097 + t3769*t4114) + t4038*t762 + var1[2];
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

#include "RlFoot_sphere_center.hh"

namespace SymFunction
{

void RlFoot_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
