/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 22:33:19 GMT+01:00
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
  double t727;
  double t183;
  double t1571;
  double t882;
  double t1269;
  double t1276;
  double t2237;
  double t273;
  double t284;
  double t1635;
  double t2082;
  double t2094;
  double t2208;
  double t2290;
  double t2302;
  double t1979;
  double t2490;
  double t2491;
  double t2501;
  double t2521;
  double t2554;
  double t2573;
  double t2592;
  double t2630;
  double t2711;
  double t1962;
  double t2331;
  double t2361;
  double t2432;
  double t3004;
  double t3024;
  double t3025;
  double t3031;
  double t3052;
  double t3066;
  double t3089;
  double t2712;
  double t2713;
  double t3094;
  double t3107;
  double t3141;
  double t3192;
  double t3235;
  double t3246;
  double t3247;
  double t3261;
  double t3269;
  double t3272;
  double t2303;
  double t2555;
  double t2673;
  double t2679;
  double t2724;
  double t2731;
  double t2735;
  double t2737;
  double t2869;
  double t2915;
  double t2922;
  double t2929;
  double t2942;
  double t2968;
  double t2989;
  double t3093;
  double t3197;
  double t3283;
  double t3292;
  double t3327;
  double t3367;
  double t3370;
  double t3377;
  double t3388;
  double t3442;
  double t1706;
  double t1860;
  double t1870;
  double t1872;
  double t2919;
  double t3306;
  double t3446;
  double t3450;
  double t3697;
  double t3715;
  double t3724;
  double t3756;
  double t3770;
  double t3776;
  double t3514;
  double t3555;
  double t3566;
  double t3569;
  double t1838;
  double t1882;
  double t1952;
  double t3638;
  double t3648;
  double t3655;
  double t3660;
  double t3663;
  double t3675;
  double t3682;
  double t3690;
  double t3596;
  double t3618;
  double t3632;
  double t3634;
  double t4084;
  double t4121;
  double t4122;
  double t4126;
  double t4129;
  double t4132;
  double t4144;
  double t4152;
  double t4165;
  double t4271;
  double t4272;
  double t4273;
  double t4280;
  double t4310;
  double t4323;
  double t4346;
  double t4127;
  double t4140;
  double t4168;
  double t4186;
  double t4190;
  double t4196;
  double t4212;
  double t4222;
  double t4525;
  double t3465;
  double t3480;
  double t3493;
  double t2709;
  double t2796;
  double t2827;
  double t4604;
  double t3935;
  double t3810;
  double t3823;
  double t3891;
  double t3728;
  double t3791;
  double t3803;
  double t4693;
  double t4695;
  double t4707;
  double t3693;
  double t4627;
  double t4648;
  double t4659;
  double t4736;
  double t4739;
  double t4740;
  double t4759;
  double t4779;
  double t4781;
  double t4587;
  double t4600;
  double t4602;
  double t4544;
  double t4553;
  double t4555;
  double t4503;
  double t4440;
  double t4457;
  double t4463;
  double t4485;
  double t4487;
  double t4585;
  double t4608;
  double t4613;
  double t5075;
  double t4988;
  double t5013;
  double t5048;
  double t4985;
  double t5086;
  double t5090;
  double t5096;
  double t4891;
  double t4912;
  double t4914;
  double t4748;
  double t4749;
  double t4754;
  double t4758;
  double t5180;
  double t5272;
  double t5299;
  double t4889;
  double t5151;
  double t5153;
  double t5176;
  double t5324;
  double t5326;
  double t5355;
  double t5396;
  double t5403;
  double t5404;
  double t5683;
  double t5691;
  double t5694;
  double t5700;
  double t5716;
  double t5723;
  double t5724;
  double t5418;
  double t5426;
  double t5429;
  double t5581;
  double t5502;
  double t4494;
  double t4614;
  double t4616;
  double t5845;
  double t5375;
  double t5380;
  double t5384;
  double t5884;
  double t6340;
  double t6353;
  double t6360;
  double t6370;
  double t6297;
  double t6303;
  double t6319;
  double t6331;
  double t6114;
  double t6074;
  double t6565;
  double t6607;
  t727 = Cos(var1[11]);
  t183 = Cos(var1[10]);
  t1571 = -1. + t727;
  t882 = -1.*t727;
  t1269 = 1. + t882;
  t1276 = 1.6e-11*t1269;
  t2237 = Sin(var1[11]);
  t273 = -1.*t183;
  t284 = 1. + t273;
  t1635 = 1.6e-11*t1571;
  t2082 = -1.000000000016*t1269;
  t2094 = 1. + t2082;
  t2208 = 0.004352*t2094;
  t2290 = -0.9999910000159999*t2237;
  t2302 = t2208 + t2290;
  t1979 = Sin(var1[10]);
  t2490 = -1. + t1276;
  t2491 = 4.e-6*t2490;
  t2501 = 3.999964e-6*t1269;
  t2521 = -1.7408e-8*t2237;
  t2554 = t2491 + t2501 + t2521;
  t2573 = 0.999991*t727;
  t2592 = 0.004352*t2237;
  t2630 = t1635 + t2573 + t2592;
  t2711 = Cos(var1[9]);
  t1962 = Sin(var1[9]);
  t2331 = -1. + t183;
  t2361 = 1.6e-11*t2331;
  t2432 = 1. + t2361;
  t3004 = -1.26e-8*var1[11];
  t3024 = 1. + t1635;
  t3025 = -0.14871*t3024;
  t3031 = -1.64779999997447e-7*t1269;
  t3052 = -1.59556e-7*t1571;
  t3066 = -1.199987999968e-6*t2237;
  t3089 = t3004 + t3025 + t3031 + t3052 + t3066;
  t2712 = -1.000000000016*t284;
  t2713 = 1. + t2712;
  t3094 = 0.803147*t2094;
  t3107 = 0.50315000001605*t1269;
  t3141 = 0.00130540515936178*t2237;
  t3192 = t3094 + t3107 + t3141;
  t3235 = -5.04e-14*var1[11];
  t3246 = -0.03988959484*t1269;
  t3247 = 6.38224e-13*t1571;
  t3261 = -0.041195*t727;
  t3269 = 0.299996999992*t2237;
  t3272 = t3235 + t3246 + t3247 + t3261 + t3269;
  t2303 = -4.e-6*t1979*t2302;
  t2555 = t2432*t2554;
  t2673 = 4.e-6*t284*t2630;
  t2679 = 0. + t2303 + t2555 + t2673;
  t2724 = t2713*t2302;
  t2731 = 4.e-6*t1979*t2554;
  t2735 = -1.*t1979*t2630;
  t2737 = 0. + t2724 + t2731 + t2735;
  t2869 = -1.*t2711;
  t2915 = 1. + t2869;
  t2922 = -0.15121*t1962;
  t2929 = -1.2484e-7*var1[10];
  t2942 = 2.479936e-18*t284;
  t2968 = -1.54996e-7*t2331;
  t2989 = 1.124840000016e-6*t1979;
  t3093 = t2432*t3089;
  t3197 = -4.e-6*t1979*t3192;
  t3283 = 4.e-6*t284*t3272;
  t3292 = t2929 + t2942 + t2968 + t2989 + t3093 + t3197 + t3283;
  t3327 = 0.281210000008499*t284;
  t3367 = -0.03874900000062*t1979;
  t3370 = 4.e-6*t1979*t3089;
  t3377 = t2713*t3192;
  t3388 = -1.*t1979*t3272;
  t3442 = t3327 + t3367 + t3370 + t3377 + t3388;
  t1706 = -1. + t1276 + t1635;
  t1860 = 4.e-6*t1571;
  t1870 = -4.e-6*t727;
  t1872 = t1860 + t1870;
  t2919 = 0.15121*t2915;
  t3306 = -1.*t1962*t3292;
  t3446 = t2711*t3442;
  t3450 = t2919 + t2922 + t3306 + t3446;
  t3697 = t2432*t1706;
  t3715 = 4.e-6*t284*t1872;
  t3724 = t3697 + t3715;
  t3756 = 4.e-6*t1706*t1979;
  t3770 = -1.*t1872*t1979;
  t3776 = t3756 + t3770;
  t3514 = -0.15121*t2915;
  t3555 = t2711*t3292;
  t3566 = t1962*t3442;
  t3569 = t3514 + t2922 + t3555 + t3566;
  t1838 = 4.e-6*t284*t1706;
  t1882 = t183*t1872;
  t1952 = t1838 + t1882;
  t3638 = -4.9936e-13*var1[10];
  t3648 = -0.038749*t284;
  t3655 = 6.19984e-13*t2331;
  t3660 = -0.281210000004*t1979;
  t3663 = 4.e-6*t284*t3089;
  t3675 = t1979*t3192;
  t3682 = t183*t3272;
  t3690 = 0. + t3638 + t3648 + t3655 + t3660 + t3663 + t3675 + t3682;
  t3596 = t1979*t2302;
  t3618 = 4.e-6*t284*t2554;
  t3632 = t183*t2630;
  t3634 = 0. + t3596 + t3618 + t3632;
  t4084 = t3638 + t3648 + t3655 + t3660 + t3663 + t3675 + t3682;
  t4121 = -1.7408e-8*t1269;
  t4122 = -3.999964e-6*t2237;
  t4126 = t4121 + t4122;
  t4129 = 0.999991*t2094;
  t4132 = t4129 + t2592;
  t4144 = -0.004352*t727;
  t4152 = 0.999991*t2237;
  t4165 = t4144 + t4152;
  t4271 = -1.*t3089*t2554;
  t4272 = -1.*t2302*t3192;
  t4273 = -1.*t2630*t3272;
  t4280 = t4271 + t4272 + t4273;
  t4310 = t1706*t3089;
  t4323 = t1872*t3272;
  t4346 = t4310 + t4323;
  t4127 = t2432*t4126;
  t4140 = -4.e-6*t1979*t4132;
  t4168 = 4.e-6*t284*t4165;
  t4186 = 0. + t4127 + t4140 + t4168;
  t4190 = 4.e-6*t1979*t4126;
  t4196 = t2713*t4132;
  t4212 = -1.*t1979*t4165;
  t4222 = 0. + t4190 + t4196 + t4212;
  t4525 = Cos(var1[5]);
  t3465 = t2711*t2679;
  t3480 = t1962*t2737;
  t3493 = 0. + t3465 + t3480;
  t2709 = -1.*t1962*t2679;
  t2796 = t2711*t2737;
  t2827 = 0. + t2709 + t2796;
  t4604 = Sin(var1[5]);
  t3935 = t1952*t3690;
  t3810 = t2711*t3724;
  t3823 = t1962*t3776;
  t3891 = t3810 + t3823;
  t3728 = -1.*t3724*t1962;
  t3791 = t2711*t3776;
  t3803 = t3728 + t3791;
  t4693 = t4525*t3891;
  t4695 = t3803*t4604;
  t4707 = t4693 + t4695;
  t3693 = -1.*t3634*t3690;
  t4627 = t4525*t3493;
  t4648 = t2827*t4604;
  t4659 = 0. + t4627 + t4648;
  t4736 = t4525*t3569;
  t4739 = t3450*t4604;
  t4740 = 0. + t4736 + t4739;
  t4759 = t4525*t3450;
  t4779 = -1.*t3569*t4604;
  t4781 = 0. + t4759 + t4779;
  t4587 = t2711*t4186;
  t4600 = t1962*t4222;
  t4602 = 0. + t4587 + t4600;
  t4544 = -1.*t1962*t4186;
  t4553 = t2711*t4222;
  t4555 = 0. + t4544 + t4553;
  t4503 = Cos(var1[4]);
  t4440 = 4.e-6*t284*t4126;
  t4457 = t1979*t4132;
  t4463 = t183*t4165;
  t4485 = 0. + t4440 + t4457 + t4463;
  t4487 = Sin(var1[4]);
  t4585 = t4525*t4555;
  t4608 = -1.*t4602*t4604;
  t4613 = 0. + t4585 + t4608;
  t5075 = Cos(var1[3]);
  t4988 = t4525*t4602;
  t5013 = t4555*t4604;
  t5048 = 0. + t4988 + t5013;
  t4985 = Sin(var1[3]);
  t5086 = t4503*t4485;
  t5090 = -1.*t4487*t4613;
  t5096 = 0. + t5086 + t5090;
  t4891 = t4525*t2827;
  t4912 = -1.*t3493*t4604;
  t4914 = 0. + t4891 + t4912;
  t4748 = t4707*t4740;
  t4749 = t4525*t3803;
  t4754 = -1.*t3891*t4604;
  t4758 = t4749 + t4754;
  t5180 = t1952*t4487;
  t5272 = t4503*t4758;
  t5299 = t5180 + t5272;
  t4889 = -1.*t4659*t4740;
  t5151 = t3634*t4487;
  t5153 = t4503*t4914;
  t5176 = 0. + t5151 + t5153;
  t5324 = t3690*t4487;
  t5326 = t4503*t4781;
  t5355 = 0. + t5324 + t5326;
  t5396 = t4503*t3690;
  t5403 = -1.*t4487*t4781;
  t5404 = 0. + t5396 + t5403;
  t5683 = t4126*t3089;
  t5691 = t3192*t4132;
  t5694 = t3272*t4165;
  t5700 = t5683 + t5691 + t5694;
  t5716 = -1.*t1706*t3089;
  t5723 = -1.*t1872*t3272;
  t5724 = t5716 + t5723;
  t5418 = t4503*t3634;
  t5426 = -1.*t4487*t4914;
  t5429 = 0. + t5418 + t5426;
  t5581 = -1.*t1952*t3690;
  t5502 = t3690*t4485;
  t4494 = t4485*t4487;
  t4614 = t4503*t4613;
  t4616 = 0. + t4494 + t4614;
  t5845 = -1.*t4707*t4740;
  t5375 = t1952*t4503;
  t5380 = -1.*t4487*t4758;
  t5384 = t5375 + t5380;
  t5884 = t4740*t5048;
  t6340 = t3089*t2554;
  t6353 = t2302*t3192;
  t6360 = t2630*t3272;
  t6370 = t6340 + t6353 + t6360;
  t6297 = -1.*t4126*t3089;
  t6303 = -1.*t3192*t4132;
  t6319 = -1.*t3272*t4165;
  t6331 = t6297 + t6303 + t6319;
  t6114 = t3634*t3690;
  t6074 = -1.*t3690*t4485;
  t6565 = t4659*t4740;
  t6607 = -1.*t4740*t5048;
  p_output1[0]=t4616*var2[0] + (0. + t5048*t5075 - 1.*t4985*t5096)*var2[1] + (0. + t4985*t5048 + t5075*t5096)*var2[2] + (t5176*(t4748 + t5299*t5355 + t5384*t5404) + t5299*(t4889 - 1.*t5176*t5355 - 1.*t5404*t5429))*var2[3] + (t4659*(t3935 + t4748 + t4758*t4781) + t4707*(t3693 + t4889 - 1.*t4781*t4914))*var2[4] + (t1952*(-1.*t2827*t3450 - 1.*t3493*t3569 + t3693) + t3634*(t3450*t3803 + t3569*t3891 + t3935))*var2[5] + (t3634*(t3292*t3724 + t3442*t3776 + t1952*t4084) + t1952*(-1.*t2679*t3292 - 1.*t2737*t3442 - 1.*t3634*t4084) - 0.15121*t4186 - 0.15121*t4222)*var2[9] + (1.e-6*t4126 - 0.038749*t4132 - 0.28121*t4165 - 1.*t1706*t4280 - 1.*t2554*t4346 + 4.e-6*(-1.*t1872*t4280 - 1.*t2630*t4346))*var2[10] - 1.9353204325022392e-7*var2[11];
  p_output1[1]=t5176*var2[0] + (0. + t4659*t5075 - 1.*t4985*t5429)*var2[1] + (0. + t4659*t4985 + t5075*t5429)*var2[2] + (t4616*(-1.*t5299*t5355 - 1.*t5384*t5404 + t5845) + t5299*(t4616*t5355 + t5096*t5404 + t5884))*var2[3] + (t5048*(-1.*t4758*t4781 + t5581 + t5845) + t4707*(t4613*t4781 + t5502 + t5884))*var2[4] + (t1952*(t3450*t4555 + t3569*t4602 + t5502) + t4485*(-1.*t3450*t3803 - 1.*t3569*t3891 + t5581))*var2[5] + (-0.15121*t2679 - 0.15121*t2737 + (-1.*t3292*t3724 - 1.*t3442*t3776 - 1.*t1952*t4084)*t4485 + t1952*(t3292*t4186 + t3442*t4222 + t4084*t4485))*var2[9] + (-0.038749*t2302 + 1.e-6*t2554 - 0.28121*t2630 - 1.*t1706*t5700 - 1.*t4126*t5724 + 4.e-6*(-1.*t1872*t5700 - 1.*t4165*t5724))*var2[10] + 0.29999998115510645*var2[11];
  p_output1[2]=t5299*var2[0] + (t4707*t5075 - 1.*t4985*t5384)*var2[1] + (t4707*t4985 + t5075*t5384)*var2[2] + (t4616*(t5176*t5355 + t5404*t5429 + t6565) + t5176*(-1.*t4616*t5355 - 1.*t5096*t5404 + t6607))*var2[3] + (t5048*(t4781*t4914 + t6114 + t6565) + t4659*(-1.*t4613*t4781 + t6074 + t6607))*var2[4] + (t3634*(-1.*t3450*t4555 - 1.*t3569*t4602 + t6074) + t4485*(t2827*t3450 + t3493*t3569 + t6114))*var2[5] + (-0.15121*t3724 - 0.15121*t3776 + (t2679*t3292 + t2737*t3442 + t3634*t4084)*t4485 + t3634*(-1.*t3292*t4186 - 1.*t3442*t4222 - 1.*t4084*t4485))*var2[9] + (1.e-6*t1706 - 0.28121*t1872 - 1.*t2554*t6331 - 1.*t4126*t6370 + 4.e-6*(-1.*t2630*t6331 - 1.*t4165*t6370))*var2[10] + 1.1914820871506078e-8*var2[11];
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

#include "dh_FrFoot_QuadrupleStance.hh"

namespace QuadrupleStance
{

void dh_FrFoot_QuadrupleStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
