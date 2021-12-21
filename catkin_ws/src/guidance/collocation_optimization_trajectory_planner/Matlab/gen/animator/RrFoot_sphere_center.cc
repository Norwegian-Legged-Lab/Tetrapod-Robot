/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 23:17:58 GMT+01:00
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
  double t865;
  double t961;
  double t962;
  double t1214;
  double t177;
  double t433;
  double t445;
  double t504;
  double t521;
  double t562;
  double t1678;
  double t1839;
  double t372;
  double t2522;
  double t2589;
  double t1129;
  double t3001;
  double t3002;
  double t3009;
  double t3025;
  double t2318;
  double t2895;
  double t2801;
  double t2826;
  double t2831;
  double t2927;
  double t2930;
  double t2943;
  double t3058;
  double t1843;
  double t3121;
  double t1393;
  double t3018;
  double t3361;
  double t3366;
  double t3446;
  double t2708;
  double t3147;
  double t2606;
  double t3501;
  double t3131;
  double t3134;
  double t3148;
  double t3154;
  double t3162;
  double t3178;
  double t3186;
  double t3220;
  double t3520;
  double t3423;
  double t3427;
  double t3445;
  double t3462;
  double t3471;
  double t3474;
  double t3478;
  double t3486;
  double t3570;
  double t3572;
  double t3573;
  double t3589;
  double t3596;
  double t3608;
  double t3633;
  double t3640;
  double t3302;
  double t3712;
  double t3396;
  double t3811;
  double t3683;
  double t3035;
  double t772;
  double t987;
  double t1667;
  double t1668;
  double t1949;
  double t2130;
  double t2184;
  double t649;
  double t663;
  double t3960;
  double t2365;
  double t2366;
  double t3972;
  double t2569;
  double t2575;
  double t2660;
  double t2670;
  double t2711;
  double t2758;
  double t2779;
  double t3971;
  double t3987;
  double t3991;
  double t3997;
  double t4004;
  double t4009;
  double t2865;
  double t2881;
  double t2908;
  double t2911;
  double t2916;
  double t2922;
  double t2925;
  double t2994;
  double t3013;
  double t3050;
  double t3056;
  double t3088;
  double t3103;
  double t3113;
  double t4011;
  double t4012;
  double t4013;
  double t4018;
  double t4019;
  double t4020;
  double t3260;
  double t3298;
  double t3340;
  double t3353;
  double t3406;
  double t3407;
  double t3408;
  double t3490;
  double t3495;
  double t3516;
  double t3518;
  double t3523;
  double t3543;
  double t3566;
  double t3688;
  double t4023;
  double t4024;
  double t4027;
  double t4030;
  double t3723;
  double t4034;
  double t4037;
  double t4039;
  double t4041;
  double t3733;
  double t3761;
  double t4046;
  double t4050;
  double t4053;
  double t4055;
  double t3812;
  double t3817;
  double t3820;
  double t3833;
  double t3855;
  double t3871;
  double t3897;
  double t3933;
  double t4108;
  double t4112;
  double t4115;
  double t4132;
  double t4138;
  double t4142;
  double t4147;
  double t4152;
  double t4156;
  double t4164;
  double t4169;
  double t4173;
  double t4183;
  double t4185;
  double t4188;
  double t4191;
  double t4193;
  double t4201;
  double t4211;
  double t4212;
  double t4220;
  double t4221;
  double t4222;
  double t4223;
  t865 = Cos(var1[16]);
  t961 = -1.*t865;
  t962 = 1. + t961;
  t1214 = Sin(var1[16]);
  t177 = Cos(var1[4]);
  t433 = Cos(var1[15]);
  t445 = -1.*t433;
  t504 = 1. + t445;
  t521 = -0.15121*t504;
  t562 = Sin(var1[15]);
  t1678 = -1. + t865;
  t1839 = 4.e-6*t1678;
  t372 = Cos(var1[5]);
  t2522 = Sin(var1[5]);
  t2589 = 7.e-6*t962;
  t1129 = 2.8e-11*t962;
  t3001 = Cos(var1[17]);
  t3002 = -1.*t3001;
  t3009 = 1. + t3002;
  t3025 = Sin(var1[17]);
  t2318 = Sin(var1[4]);
  t2895 = -4.e-6*t1214;
  t2801 = -1.*t177*t372*t562;
  t2826 = -1.*t433*t177*t2522;
  t2831 = t2801 + t2826;
  t2927 = t433*t177*t372;
  t2930 = -1.*t177*t562*t2522;
  t2943 = t2927 + t2930;
  t3058 = 2.8e-11*t3009;
  t1843 = -7.e-6*t1214;
  t3121 = -2.8e-11*t962;
  t1393 = -1.*t1214;
  t3018 = 7.e-6*t3009;
  t3361 = -1. + t3001;
  t3366 = 4.e-6*t3361;
  t3446 = 4.e-6*t962;
  t2708 = 7.e-6*t1214;
  t3147 = -7.e-6*t962;
  t2606 = 4.e-6*t1214;
  t3501 = 4.e-6*t3025;
  t3131 = t3121 + t1214;
  t3134 = t3131*t2318;
  t3148 = t3147 + t2895;
  t3154 = t3148*t2831;
  t3162 = -1.000000000016*t962;
  t3178 = 1. + t3162;
  t3186 = t3178*t2943;
  t3220 = t3134 + t3154 + t3186;
  t3520 = 7.e-6*t3025;
  t3423 = -1.000000000049*t962;
  t3427 = 1. + t3423;
  t3445 = t3427*t2318;
  t3462 = t3446 + t1843;
  t3471 = t3462*t2831;
  t3474 = t3121 + t1393;
  t3478 = t3474*t2943;
  t3486 = t3445 + t3471 + t3478;
  t3570 = t3446 + t2708;
  t3572 = t3570*t2318;
  t3573 = -6.5e-11*t962;
  t3589 = 1. + t3573;
  t3596 = t3589*t2831;
  t3608 = t3147 + t2606;
  t3633 = t3608*t2943;
  t3640 = t3572 + t3596 + t3633;
  t3302 = -1.*t3025;
  t3712 = 4.e-6*t3009;
  t3396 = -7.e-6*t3025;
  t3811 = -2.8e-11*t3009;
  t3683 = -7.e-6*t3009;
  t3035 = -4.e-6*t3025;
  t772 = 1.5843479999999999e-12*var1[16];
  t987 = -0.03874900000889869*t962;
  t1667 = t1129 + t1393;
  t1668 = -0.281211000004*t1667;
  t1949 = t1839 + t1843;
  t2130 = -1.8134809999999998e-6*t1949;
  t2184 = t772 + t987 + t1668 + t2130;
  t649 = -0.15121*t562;
  t663 = t521 + t649;
  t3960 = Sin(var1[3]);
  t2365 = 0.15121*t562;
  t2366 = t521 + t2365;
  t3972 = Cos(var1[3]);
  t2569 = 3.9608699999999997e-7*var1[16];
  t2575 = -1.1787626499999999e-16*t962;
  t2660 = t2589 + t2606;
  t2670 = -0.281211000004*t2660;
  t2711 = t1839 + t2708;
  t2758 = -0.038749000006999997*t2711;
  t2779 = t2569 + t2575 + t2670 + t2758;
  t3971 = t372*t3960*t2318;
  t3987 = t3972*t2522;
  t3991 = t3971 + t3987;
  t3997 = t3972*t372;
  t4004 = -1.*t3960*t2318*t2522;
  t4009 = t3997 + t4004;
  t2865 = -2.7726089999999997e-12*var1[16];
  t2881 = -0.2812110000084994*t962;
  t2908 = t2589 + t2895;
  t2911 = -1.8134809999999998e-6*t2908;
  t2916 = t1129 + t1214;
  t2922 = -0.038749000006999997*t2916;
  t2925 = t2865 + t2881 + t2911 + t2922;
  t2994 = -1.9784030000000015e-12*var1[17];
  t3013 = -0.5031510000160505*t3009;
  t3050 = t3018 + t3035;
  t3056 = -3.367757e-6*t3050;
  t3088 = t3058 + t3025;
  t3103 = -0.038575000014*t3088;
  t3113 = t2994 + t3013 + t3056 + t3103;
  t4011 = -1.*t562*t3991;
  t4012 = t433*t4009;
  t4013 = t4011 + t4012;
  t4018 = t433*t3991;
  t4019 = t562*t4009;
  t4020 = t4018 + t4019;
  t3260 = 1.1305160000000008e-12*var1[17];
  t3298 = -0.03857500001589017*t3009;
  t3340 = t3058 + t3302;
  t3353 = -0.5031510000080001*t3340;
  t3406 = t3366 + t3396;
  t3407 = -3.367757e-6*t3406;
  t3408 = t3260 + t3298 + t3353 + t3407;
  t3490 = 2.826290000000002e-7*var1[17];
  t3495 = -2.18904205e-16*t3009;
  t3516 = t3018 + t3501;
  t3518 = -0.5031510000080001*t3516;
  t3523 = t3366 + t3520;
  t3543 = -0.038575000014*t3523;
  t3566 = t3490 + t3495 + t3518 + t3543;
  t3688 = t3683 + t3501;
  t4023 = -1.*t177*t3131*t3960;
  t4024 = t3148*t4013;
  t4027 = t3178*t4020;
  t4030 = t4023 + t4024 + t4027;
  t3723 = t3712 + t3520;
  t4034 = -1.*t3427*t177*t3960;
  t4037 = t3462*t4013;
  t4039 = t3474*t4020;
  t4041 = t4034 + t4037 + t4039;
  t3733 = -6.5e-11*t3009;
  t3761 = 1. + t3733;
  t4046 = -1.*t177*t3570*t3960;
  t4050 = t3589*t4013;
  t4053 = t3608*t4020;
  t4055 = t4046 + t4050 + t4053;
  t3812 = t3811 + t3302;
  t3817 = -1.000000000049*t3009;
  t3820 = 1. + t3817;
  t3833 = t3712 + t3396;
  t3855 = -1.000000000016*t3009;
  t3871 = 1. + t3855;
  t3897 = t3811 + t3025;
  t3933 = t3683 + t3035;
  t4108 = -1.*t3972*t372*t2318;
  t4112 = t3960*t2522;
  t4115 = t4108 + t4112;
  t4132 = t372*t3960;
  t4138 = t3972*t2318*t2522;
  t4142 = t4132 + t4138;
  t4147 = -1.*t562*t4115;
  t4152 = t433*t4142;
  t4156 = t4147 + t4152;
  t4164 = t433*t4115;
  t4169 = t562*t4142;
  t4173 = t4164 + t4169;
  t4183 = t3972*t177*t3131;
  t4185 = t3148*t4156;
  t4188 = t3178*t4173;
  t4191 = t4183 + t4185 + t4188;
  t4193 = t3427*t3972*t177;
  t4201 = t3462*t4156;
  t4211 = t3474*t4173;
  t4212 = t4193 + t4201 + t4211;
  t4220 = t3972*t177*t3570;
  t4221 = t3589*t4156;
  t4222 = t3608*t4173;
  t4223 = t4220 + t4221 + t4222;
  p_output1[0]=t2184*t2318 - 1.*t177*t2366*t2522 + t2779*t2831 + t2925*t2943 + t3113*t3220 + t3408*t3486 + t3566*t3640 - 0.148715*(t3220*t3688 + t3486*t3723 + t3640*t3761) - 0.038576*(t3220*t3812 + t3486*t3820 + t3640*t3833) - 0.80315*(t3220*t3871 + t3486*t3897 + t3640*t3933) + t177*t372*t663 + var1[0];
  p_output1[1]=-1.*t177*t2184*t3960 + t2366*t4009 + t2779*t4013 + t2925*t4020 + t3113*t4030 + t3408*t4041 + t3566*t4055 - 0.148715*(t3688*t4030 + t3723*t4041 + t3761*t4055) - 0.038576*(t3812*t4030 + t3820*t4041 + t3833*t4055) - 0.80315*(t3871*t4030 + t3897*t4041 + t3933*t4055) + t3991*t663 + var1[1];
  p_output1[2]=t177*t2184*t3972 + t2366*t4142 + t2779*t4156 + t2925*t4173 + t3113*t4191 + t3408*t4212 + t3566*t4223 - 0.148715*(t3688*t4191 + t3723*t4212 + t3761*t4223) - 0.038576*(t3812*t4191 + t3820*t4212 + t3833*t4223) - 0.80315*(t3871*t4191 + t3897*t4212 + t3933*t4223) + t4115*t663 + var1[2];
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

#include "RrFoot_sphere_center.hh"

namespace SymFunction
{

void RrFoot_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
