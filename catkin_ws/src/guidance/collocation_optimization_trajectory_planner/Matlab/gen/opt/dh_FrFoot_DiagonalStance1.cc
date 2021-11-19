/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:27:00 GMT+01:00
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
  double t693;
  double t374;
  double t790;
  double t694;
  double t729;
  double t769;
  double t1382;
  double t483;
  double t524;
  double t809;
  double t1132;
  double t1195;
  double t1353;
  double t1383;
  double t1387;
  double t1085;
  double t1411;
  double t1456;
  double t1466;
  double t1545;
  double t1574;
  double t1658;
  double t1681;
  double t1721;
  double t1806;
  double t1053;
  double t1389;
  double t1393;
  double t1394;
  double t2309;
  double t2318;
  double t2323;
  double t2332;
  double t2333;
  double t2339;
  double t2348;
  double t1807;
  double t1810;
  double t2434;
  double t2450;
  double t2458;
  double t2460;
  double t2485;
  double t2488;
  double t2506;
  double t2515;
  double t2519;
  double t2521;
  double t1388;
  double t1634;
  double t1729;
  double t1735;
  double t1822;
  double t1831;
  double t1862;
  double t1891;
  double t1921;
  double t1944;
  double t2062;
  double t2068;
  double t2074;
  double t2186;
  double t2270;
  double t2366;
  double t2465;
  double t2522;
  double t2524;
  double t2550;
  double t2562;
  double t2576;
  double t2579;
  double t2581;
  double t2598;
  double t892;
  double t996;
  double t1007;
  double t1032;
  double t1997;
  double t2546;
  double t2600;
  double t2620;
  double t3250;
  double t3273;
  double t3283;
  double t3376;
  double t3380;
  double t3391;
  double t2879;
  double t2903;
  double t2905;
  double t2908;
  double t917;
  double t1044;
  double t1052;
  double t3062;
  double t3064;
  double t3066;
  double t3080;
  double t3106;
  double t3139;
  double t3147;
  double t3187;
  double t2977;
  double t3014;
  double t3018;
  double t3035;
  double t3531;
  double t3603;
  double t3625;
  double t3638;
  double t3671;
  double t3705;
  double t3729;
  double t3733;
  double t3742;
  double t3778;
  double t3779;
  double t3794;
  double t3796;
  double t3799;
  double t3801;
  double t3816;
  double t3645;
  double t3717;
  double t3745;
  double t3750;
  double t3761;
  double t3764;
  double t3767;
  double t3771;
  double t3959;
  double t2661;
  double t2767;
  double t2807;
  double t1799;
  double t1892;
  double t1894;
  double t3984;
  double t3469;
  double t3424;
  double t3432;
  double t3453;
  double t3327;
  double t3413;
  double t3414;
  double t4049;
  double t4062;
  double t4065;
  double t3198;
  double t3994;
  double t4002;
  double t4003;
  double t4072;
  double t4083;
  double t4089;
  double t4132;
  double t4152;
  double t4154;
  double t3979;
  double t3981;
  double t3982;
  double t3962;
  double t3965;
  double t3966;
  double t3957;
  double t3926;
  double t3935;
  double t3938;
  double t3945;
  double t3947;
  double t3978;
  double t3985;
  double t3987;
  double t4226;
  double t4212;
  double t4214;
  double t4223;
  double t4207;
  double t4263;
  double t4268;
  double t4269;
  double t4180;
  double t4191;
  double t4192;
  double t4098;
  double t4104;
  double t4112;
  double t4127;
  double t4369;
  double t4372;
  double t4376;
  double t4177;
  double t4344;
  double t4349;
  double t4358;
  double t4377;
  double t4384;
  double t4385;
  double t4393;
  double t4396;
  double t4398;
  double t4609;
  double t4611;
  double t4612;
  double t4613;
  double t4619;
  double t4633;
  double t4652;
  double t4421;
  double t4423;
  double t4424;
  double t4546;
  double t4508;
  double t3954;
  double t3989;
  double t3990;
  double t4779;
  double t4388;
  double t4389;
  double t4392;
  double t4812;
  double t4992;
  double t5004;
  double t5006;
  double t5011;
  double t4963;
  double t4972;
  double t4974;
  double t4981;
  double t4889;
  double t4877;
  double t5061;
  double t5069;
  t693 = Cos(var1[11]);
  t374 = Cos(var1[10]);
  t790 = -1. + t693;
  t694 = -1.*t693;
  t729 = 1. + t694;
  t769 = 1.6e-11*t729;
  t1382 = Sin(var1[11]);
  t483 = -1.*t374;
  t524 = 1. + t483;
  t809 = 1.6e-11*t790;
  t1132 = -1.000000000016*t729;
  t1195 = 1. + t1132;
  t1353 = 0.004352*t1195;
  t1383 = -0.9999910000159999*t1382;
  t1387 = t1353 + t1383;
  t1085 = Sin(var1[10]);
  t1411 = -1. + t769;
  t1456 = 4.e-6*t1411;
  t1466 = 3.999964e-6*t729;
  t1545 = -1.7408e-8*t1382;
  t1574 = t1456 + t1466 + t1545;
  t1658 = 0.999991*t693;
  t1681 = 0.004352*t1382;
  t1721 = t809 + t1658 + t1681;
  t1806 = Cos(var1[9]);
  t1053 = Sin(var1[9]);
  t1389 = -1. + t374;
  t1393 = 1.6e-11*t1389;
  t1394 = 1. + t1393;
  t2309 = -1.26e-8*var1[11];
  t2318 = 1. + t809;
  t2323 = -0.14871*t2318;
  t2332 = -1.64779999997447e-7*t729;
  t2333 = -1.59556e-7*t790;
  t2339 = -1.199987999968e-6*t1382;
  t2348 = t2309 + t2323 + t2332 + t2333 + t2339;
  t1807 = -1.000000000016*t524;
  t1810 = 1. + t1807;
  t2434 = 0.803147*t1195;
  t2450 = 0.50315000001605*t729;
  t2458 = 0.00130540515936178*t1382;
  t2460 = t2434 + t2450 + t2458;
  t2485 = -5.04e-14*var1[11];
  t2488 = -0.03988959484*t729;
  t2506 = 6.38224e-13*t790;
  t2515 = -0.041195*t693;
  t2519 = 0.299996999992*t1382;
  t2521 = t2485 + t2488 + t2506 + t2515 + t2519;
  t1388 = -4.e-6*t1085*t1387;
  t1634 = t1394*t1574;
  t1729 = 4.e-6*t524*t1721;
  t1735 = 0. + t1388 + t1634 + t1729;
  t1822 = t1810*t1387;
  t1831 = 4.e-6*t1085*t1574;
  t1862 = -1.*t1085*t1721;
  t1891 = 0. + t1822 + t1831 + t1862;
  t1921 = -1.*t1806;
  t1944 = 1. + t1921;
  t2062 = -0.15121*t1053;
  t2068 = -1.2484e-7*var1[10];
  t2074 = 2.479936e-18*t524;
  t2186 = -1.54996e-7*t1389;
  t2270 = 1.124840000016e-6*t1085;
  t2366 = t1394*t2348;
  t2465 = -4.e-6*t1085*t2460;
  t2522 = 4.e-6*t524*t2521;
  t2524 = t2068 + t2074 + t2186 + t2270 + t2366 + t2465 + t2522;
  t2550 = 0.281210000008499*t524;
  t2562 = -0.03874900000062*t1085;
  t2576 = 4.e-6*t1085*t2348;
  t2579 = t1810*t2460;
  t2581 = -1.*t1085*t2521;
  t2598 = t2550 + t2562 + t2576 + t2579 + t2581;
  t892 = -1. + t769 + t809;
  t996 = 4.e-6*t790;
  t1007 = -4.e-6*t693;
  t1032 = t996 + t1007;
  t1997 = 0.15121*t1944;
  t2546 = -1.*t1053*t2524;
  t2600 = t1806*t2598;
  t2620 = t1997 + t2062 + t2546 + t2600;
  t3250 = t1394*t892;
  t3273 = 4.e-6*t524*t1032;
  t3283 = t3250 + t3273;
  t3376 = 4.e-6*t892*t1085;
  t3380 = -1.*t1032*t1085;
  t3391 = t3376 + t3380;
  t2879 = -0.15121*t1944;
  t2903 = t1806*t2524;
  t2905 = t1053*t2598;
  t2908 = t2879 + t2062 + t2903 + t2905;
  t917 = 4.e-6*t524*t892;
  t1044 = t374*t1032;
  t1052 = t917 + t1044;
  t3062 = -4.9936e-13*var1[10];
  t3064 = -0.038749*t524;
  t3066 = 6.19984e-13*t1389;
  t3080 = -0.281210000004*t1085;
  t3106 = 4.e-6*t524*t2348;
  t3139 = t1085*t2460;
  t3147 = t374*t2521;
  t3187 = 0. + t3062 + t3064 + t3066 + t3080 + t3106 + t3139 + t3147;
  t2977 = t1085*t1387;
  t3014 = 4.e-6*t524*t1574;
  t3018 = t374*t1721;
  t3035 = 0. + t2977 + t3014 + t3018;
  t3531 = t3062 + t3064 + t3066 + t3080 + t3106 + t3139 + t3147;
  t3603 = -1.7408e-8*t729;
  t3625 = -3.999964e-6*t1382;
  t3638 = t3603 + t3625;
  t3671 = 0.999991*t1195;
  t3705 = t3671 + t1681;
  t3729 = -0.004352*t693;
  t3733 = 0.999991*t1382;
  t3742 = t3729 + t3733;
  t3778 = -1.*t2348*t1574;
  t3779 = -1.*t1387*t2460;
  t3794 = -1.*t1721*t2521;
  t3796 = t3778 + t3779 + t3794;
  t3799 = t892*t2348;
  t3801 = t1032*t2521;
  t3816 = t3799 + t3801;
  t3645 = t1394*t3638;
  t3717 = -4.e-6*t1085*t3705;
  t3745 = 4.e-6*t524*t3742;
  t3750 = 0. + t3645 + t3717 + t3745;
  t3761 = 4.e-6*t1085*t3638;
  t3764 = t1810*t3705;
  t3767 = -1.*t1085*t3742;
  t3771 = 0. + t3761 + t3764 + t3767;
  t3959 = Cos(var1[5]);
  t2661 = t1806*t1735;
  t2767 = t1053*t1891;
  t2807 = 0. + t2661 + t2767;
  t1799 = -1.*t1053*t1735;
  t1892 = t1806*t1891;
  t1894 = 0. + t1799 + t1892;
  t3984 = Sin(var1[5]);
  t3469 = t1052*t3187;
  t3424 = t1806*t3283;
  t3432 = t1053*t3391;
  t3453 = t3424 + t3432;
  t3327 = -1.*t3283*t1053;
  t3413 = t1806*t3391;
  t3414 = t3327 + t3413;
  t4049 = t3959*t3453;
  t4062 = t3414*t3984;
  t4065 = t4049 + t4062;
  t3198 = -1.*t3035*t3187;
  t3994 = t3959*t2807;
  t4002 = t1894*t3984;
  t4003 = 0. + t3994 + t4002;
  t4072 = t3959*t2908;
  t4083 = t2620*t3984;
  t4089 = 0. + t4072 + t4083;
  t4132 = t3959*t2620;
  t4152 = -1.*t2908*t3984;
  t4154 = 0. + t4132 + t4152;
  t3979 = t1806*t3750;
  t3981 = t1053*t3771;
  t3982 = 0. + t3979 + t3981;
  t3962 = -1.*t1053*t3750;
  t3965 = t1806*t3771;
  t3966 = 0. + t3962 + t3965;
  t3957 = Cos(var1[4]);
  t3926 = 4.e-6*t524*t3638;
  t3935 = t1085*t3705;
  t3938 = t374*t3742;
  t3945 = 0. + t3926 + t3935 + t3938;
  t3947 = Sin(var1[4]);
  t3978 = t3959*t3966;
  t3985 = -1.*t3982*t3984;
  t3987 = 0. + t3978 + t3985;
  t4226 = Cos(var1[3]);
  t4212 = t3959*t3982;
  t4214 = t3966*t3984;
  t4223 = 0. + t4212 + t4214;
  t4207 = Sin(var1[3]);
  t4263 = t3957*t3945;
  t4268 = -1.*t3947*t3987;
  t4269 = 0. + t4263 + t4268;
  t4180 = t3959*t1894;
  t4191 = -1.*t2807*t3984;
  t4192 = 0. + t4180 + t4191;
  t4098 = t4065*t4089;
  t4104 = t3959*t3414;
  t4112 = -1.*t3453*t3984;
  t4127 = t4104 + t4112;
  t4369 = t1052*t3947;
  t4372 = t3957*t4127;
  t4376 = t4369 + t4372;
  t4177 = -1.*t4003*t4089;
  t4344 = t3035*t3947;
  t4349 = t3957*t4192;
  t4358 = 0. + t4344 + t4349;
  t4377 = t3187*t3947;
  t4384 = t3957*t4154;
  t4385 = 0. + t4377 + t4384;
  t4393 = t3957*t3187;
  t4396 = -1.*t3947*t4154;
  t4398 = 0. + t4393 + t4396;
  t4609 = t3638*t2348;
  t4611 = t2460*t3705;
  t4612 = t2521*t3742;
  t4613 = t4609 + t4611 + t4612;
  t4619 = -1.*t892*t2348;
  t4633 = -1.*t1032*t2521;
  t4652 = t4619 + t4633;
  t4421 = t3957*t3035;
  t4423 = -1.*t3947*t4192;
  t4424 = 0. + t4421 + t4423;
  t4546 = -1.*t1052*t3187;
  t4508 = t3187*t3945;
  t3954 = t3945*t3947;
  t3989 = t3957*t3987;
  t3990 = 0. + t3954 + t3989;
  t4779 = -1.*t4065*t4089;
  t4388 = t1052*t3957;
  t4389 = -1.*t3947*t4127;
  t4392 = t4388 + t4389;
  t4812 = t4089*t4223;
  t4992 = t2348*t1574;
  t5004 = t1387*t2460;
  t5006 = t1721*t2521;
  t5011 = t4992 + t5004 + t5006;
  t4963 = -1.*t3638*t2348;
  t4972 = -1.*t2460*t3705;
  t4974 = -1.*t2521*t3742;
  t4981 = t4963 + t4972 + t4974;
  t4889 = t3035*t3187;
  t4877 = -1.*t3187*t3945;
  t5061 = t4003*t4089;
  t5069 = -1.*t4089*t4223;
  p_output1[0]=t3990*var2[0] + (0. + t4223*t4226 - 1.*t4207*t4269)*var2[1] + (0. + t4207*t4223 + t4226*t4269)*var2[2] + (t4358*(t4098 + t4376*t4385 + t4392*t4398) + t4376*(t4177 - 1.*t4358*t4385 - 1.*t4398*t4424))*var2[3] + (t4003*(t3469 + t4098 + t4127*t4154) + t4065*(t3198 + t4177 - 1.*t4154*t4192))*var2[4] + (t1052*(-1.*t1894*t2620 - 1.*t2807*t2908 + t3198) + t3035*(t2620*t3414 + t2908*t3453 + t3469))*var2[5] + (t3035*(t2524*t3283 + t2598*t3391 + t1052*t3531) + t1052*(-1.*t1735*t2524 - 1.*t1891*t2598 - 1.*t3035*t3531) - 0.15121*t3750 - 0.15121*t3771)*var2[9] + (1.e-6*t3638 - 0.038749*t3705 - 0.28121*t3742 - 1.*t1574*t3816 + 4.e-6*(-1.*t1032*t3796 - 1.*t1721*t3816) - 1.*t3796*t892)*var2[10] - 1.9353204325022392e-7*var2[11];
  p_output1[1]=t4358*var2[0] + (0. + t4003*t4226 - 1.*t4207*t4424)*var2[1] + (0. + t4003*t4207 + t4226*t4424)*var2[2] + (t3990*(-1.*t4376*t4385 - 1.*t4392*t4398 + t4779) + t4376*(t3990*t4385 + t4269*t4398 + t4812))*var2[3] + (t4223*(-1.*t4127*t4154 + t4546 + t4779) + t4065*(t3987*t4154 + t4508 + t4812))*var2[4] + (t1052*(t2620*t3966 + t2908*t3982 + t4508) + t3945*(-1.*t2620*t3414 - 1.*t2908*t3453 + t4546))*var2[5] + (-0.15121*t1735 - 0.15121*t1891 + (-1.*t2524*t3283 - 1.*t2598*t3391 - 1.*t1052*t3531)*t3945 + t1052*(t2524*t3750 + t2598*t3771 + t3531*t3945))*var2[9] + (-0.038749*t1387 + 1.e-6*t1574 - 0.28121*t1721 - 1.*t3638*t4652 + 4.e-6*(-1.*t1032*t4613 - 1.*t3742*t4652) - 1.*t4613*t892)*var2[10] + 0.29999998115510645*var2[11];
  p_output1[2]=t4376*var2[0] + (t4065*t4226 - 1.*t4207*t4392)*var2[1] + (t4065*t4207 + t4226*t4392)*var2[2] + (t3990*(t4358*t4385 + t4398*t4424 + t5061) + t4358*(-1.*t3990*t4385 - 1.*t4269*t4398 + t5069))*var2[3] + (t4223*(t4154*t4192 + t4889 + t5061) + t4003*(-1.*t3987*t4154 + t4877 + t5069))*var2[4] + (t3035*(-1.*t2620*t3966 - 1.*t2908*t3982 + t4877) + t3945*(t1894*t2620 + t2807*t2908 + t4889))*var2[5] + (-0.15121*t3283 - 0.15121*t3391 + (t1735*t2524 + t1891*t2598 + t3035*t3531)*t3945 + t3035*(-1.*t2524*t3750 - 1.*t2598*t3771 - 1.*t3531*t3945))*var2[9] + (-0.28121*t1032 - 1.*t1574*t4981 - 1.*t3638*t5011 + 4.e-6*(-1.*t1721*t4981 - 1.*t3742*t5011) + 1.e-6*t892)*var2[10] + 1.1914820871506078e-8*var2[11];
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

#include "dh_FrFoot_DiagonalStance1.hh"

namespace DiagonalStance1
{

void dh_FrFoot_DiagonalStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
