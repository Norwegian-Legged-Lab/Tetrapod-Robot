/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:09:30 GMT+01:00
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
  double t265;
  double t140;
  double t370;
  double t287;
  double t317;
  double t353;
  double t910;
  double t171;
  double t188;
  double t516;
  double t849;
  double t872;
  double t889;
  double t963;
  double t971;
  double t836;
  double t1332;
  double t1358;
  double t1384;
  double t1406;
  double t1469;
  double t1495;
  double t1507;
  double t1513;
  double t1536;
  double t825;
  double t1129;
  double t1187;
  double t1273;
  double t1781;
  double t1813;
  double t1845;
  double t1848;
  double t1932;
  double t1947;
  double t1949;
  double t1540;
  double t1551;
  double t2014;
  double t2052;
  double t2057;
  double t2064;
  double t2087;
  double t2093;
  double t2138;
  double t2181;
  double t2183;
  double t2224;
  double t975;
  double t1472;
  double t1524;
  double t1528;
  double t1560;
  double t1563;
  double t1571;
  double t1574;
  double t1607;
  double t1661;
  double t1693;
  double t1702;
  double t1744;
  double t1750;
  double t1756;
  double t2013;
  double t2086;
  double t2253;
  double t2255;
  double t2294;
  double t2299;
  double t2303;
  double t2346;
  double t2360;
  double t2367;
  double t561;
  double t623;
  double t796;
  double t808;
  double t1664;
  double t2276;
  double t2368;
  double t2372;
  double t2738;
  double t2742;
  double t2746;
  double t2765;
  double t2775;
  double t2776;
  double t2440;
  double t2466;
  double t2483;
  double t2501;
  double t621;
  double t817;
  double t823;
  double t2599;
  double t2629;
  double t2631;
  double t2662;
  double t2671;
  double t2672;
  double t2673;
  double t2680;
  double t2505;
  double t2506;
  double t2508;
  double t2594;
  double t2945;
  double t3014;
  double t3025;
  double t3030;
  double t3045;
  double t3046;
  double t3056;
  double t3072;
  double t3074;
  double t3222;
  double t3237;
  double t3248;
  double t3250;
  double t3261;
  double t3263;
  double t3286;
  double t3037;
  double t3053;
  double t3101;
  double t3109;
  double t3146;
  double t3148;
  double t3180;
  double t3185;
  double t3371;
  double t2394;
  double t2400;
  double t2436;
  double t1529;
  double t1588;
  double t1597;
  double t3431;
  double t2834;
  double t2795;
  double t2807;
  double t2824;
  double t2763;
  double t2785;
  double t2787;
  double t3482;
  double t3505;
  double t3516;
  double t2697;
  double t3471;
  double t3475;
  double t3479;
  double t3530;
  double t3541;
  double t3544;
  double t3589;
  double t3602;
  double t3607;
  double t3416;
  double t3417;
  double t3422;
  double t3378;
  double t3387;
  double t3393;
  double t3363;
  double t3349;
  double t3350;
  double t3351;
  double t3353;
  double t3357;
  double t3400;
  double t3442;
  double t3445;
  double t3734;
  double t3722;
  double t3724;
  double t3730;
  double t3702;
  double t3741;
  double t3744;
  double t3753;
  double t3630;
  double t3638;
  double t3640;
  double t3560;
  double t3561;
  double t3570;
  double t3577;
  double t3788;
  double t3795;
  double t3796;
  double t3628;
  double t3783;
  double t3786;
  double t3787;
  double t3799;
  double t3800;
  double t3804;
  double t3842;
  double t3845;
  double t3852;
  double t4052;
  double t4054;
  double t4060;
  double t4062;
  double t4078;
  double t4082;
  double t4084;
  double t3887;
  double t3893;
  double t3898;
  double t3944;
  double t3929;
  double t3359;
  double t3447;
  double t3448;
  double t4170;
  double t3823;
  double t3826;
  double t3829;
  double t4231;
  double t4584;
  double t4593;
  double t4596;
  double t4613;
  double t4564;
  double t4566;
  double t4567;
  double t4577;
  double t4408;
  double t4356;
  double t4693;
  double t4709;
  t265 = Cos(var1[11]);
  t140 = Cos(var1[10]);
  t370 = -1. + t265;
  t287 = -1.*t265;
  t317 = 1. + t287;
  t353 = 1.6e-11*t317;
  t910 = Sin(var1[11]);
  t171 = -1.*t140;
  t188 = 1. + t171;
  t516 = 1.6e-11*t370;
  t849 = -1.000000000016*t317;
  t872 = 1. + t849;
  t889 = 0.004352*t872;
  t963 = -0.9999910000159999*t910;
  t971 = t889 + t963;
  t836 = Sin(var1[10]);
  t1332 = -1. + t353;
  t1358 = 4.e-6*t1332;
  t1384 = 3.999964e-6*t317;
  t1406 = -1.7408e-8*t910;
  t1469 = t1358 + t1384 + t1406;
  t1495 = 0.999991*t265;
  t1507 = 0.004352*t910;
  t1513 = t516 + t1495 + t1507;
  t1536 = Cos(var1[9]);
  t825 = Sin(var1[9]);
  t1129 = -1. + t140;
  t1187 = 1.6e-11*t1129;
  t1273 = 1. + t1187;
  t1781 = -1.26e-8*var1[11];
  t1813 = 1. + t516;
  t1845 = -0.14871*t1813;
  t1848 = -1.64779999997447e-7*t317;
  t1932 = -1.59556e-7*t370;
  t1947 = -1.199987999968e-6*t910;
  t1949 = t1781 + t1845 + t1848 + t1932 + t1947;
  t1540 = -1.000000000016*t188;
  t1551 = 1. + t1540;
  t2014 = 0.803147*t872;
  t2052 = 0.50315000001605*t317;
  t2057 = 0.00130540515936178*t910;
  t2064 = t2014 + t2052 + t2057;
  t2087 = -5.04e-14*var1[11];
  t2093 = -0.03988959484*t317;
  t2138 = 6.38224e-13*t370;
  t2181 = -0.041195*t265;
  t2183 = 0.299996999992*t910;
  t2224 = t2087 + t2093 + t2138 + t2181 + t2183;
  t975 = -4.e-6*t836*t971;
  t1472 = t1273*t1469;
  t1524 = 4.e-6*t188*t1513;
  t1528 = 0. + t975 + t1472 + t1524;
  t1560 = t1551*t971;
  t1563 = 4.e-6*t836*t1469;
  t1571 = -1.*t836*t1513;
  t1574 = 0. + t1560 + t1563 + t1571;
  t1607 = -1.*t1536;
  t1661 = 1. + t1607;
  t1693 = -0.15121*t825;
  t1702 = -1.2484e-7*var1[10];
  t1744 = 2.479936e-18*t188;
  t1750 = -1.54996e-7*t1129;
  t1756 = 1.124840000016e-6*t836;
  t2013 = t1273*t1949;
  t2086 = -4.e-6*t836*t2064;
  t2253 = 4.e-6*t188*t2224;
  t2255 = t1702 + t1744 + t1750 + t1756 + t2013 + t2086 + t2253;
  t2294 = 0.281210000008499*t188;
  t2299 = -0.03874900000062*t836;
  t2303 = 4.e-6*t836*t1949;
  t2346 = t1551*t2064;
  t2360 = -1.*t836*t2224;
  t2367 = t2294 + t2299 + t2303 + t2346 + t2360;
  t561 = -1. + t353 + t516;
  t623 = 4.e-6*t370;
  t796 = -4.e-6*t265;
  t808 = t623 + t796;
  t1664 = 0.15121*t1661;
  t2276 = -1.*t825*t2255;
  t2368 = t1536*t2367;
  t2372 = t1664 + t1693 + t2276 + t2368;
  t2738 = t1273*t561;
  t2742 = 4.e-6*t188*t808;
  t2746 = t2738 + t2742;
  t2765 = 4.e-6*t561*t836;
  t2775 = -1.*t808*t836;
  t2776 = t2765 + t2775;
  t2440 = -0.15121*t1661;
  t2466 = t1536*t2255;
  t2483 = t825*t2367;
  t2501 = t2440 + t1693 + t2466 + t2483;
  t621 = 4.e-6*t188*t561;
  t817 = t140*t808;
  t823 = t621 + t817;
  t2599 = -4.9936e-13*var1[10];
  t2629 = -0.038749*t188;
  t2631 = 6.19984e-13*t1129;
  t2662 = -0.281210000004*t836;
  t2671 = 4.e-6*t188*t1949;
  t2672 = t836*t2064;
  t2673 = t140*t2224;
  t2680 = 0. + t2599 + t2629 + t2631 + t2662 + t2671 + t2672 + t2673;
  t2505 = t836*t971;
  t2506 = 4.e-6*t188*t1469;
  t2508 = t140*t1513;
  t2594 = 0. + t2505 + t2506 + t2508;
  t2945 = t2599 + t2629 + t2631 + t2662 + t2671 + t2672 + t2673;
  t3014 = -1.7408e-8*t317;
  t3025 = -3.999964e-6*t910;
  t3030 = t3014 + t3025;
  t3045 = 0.999991*t872;
  t3046 = t3045 + t1507;
  t3056 = -0.004352*t265;
  t3072 = 0.999991*t910;
  t3074 = t3056 + t3072;
  t3222 = -1.*t1949*t1469;
  t3237 = -1.*t971*t2064;
  t3248 = -1.*t1513*t2224;
  t3250 = t3222 + t3237 + t3248;
  t3261 = t561*t1949;
  t3263 = t808*t2224;
  t3286 = t3261 + t3263;
  t3037 = t1273*t3030;
  t3053 = -4.e-6*t836*t3046;
  t3101 = 4.e-6*t188*t3074;
  t3109 = 0. + t3037 + t3053 + t3101;
  t3146 = 4.e-6*t836*t3030;
  t3148 = t1551*t3046;
  t3180 = -1.*t836*t3074;
  t3185 = 0. + t3146 + t3148 + t3180;
  t3371 = Cos(var1[5]);
  t2394 = t1536*t1528;
  t2400 = t825*t1574;
  t2436 = 0. + t2394 + t2400;
  t1529 = -1.*t825*t1528;
  t1588 = t1536*t1574;
  t1597 = 0. + t1529 + t1588;
  t3431 = Sin(var1[5]);
  t2834 = t823*t2680;
  t2795 = t1536*t2746;
  t2807 = t825*t2776;
  t2824 = t2795 + t2807;
  t2763 = -1.*t2746*t825;
  t2785 = t1536*t2776;
  t2787 = t2763 + t2785;
  t3482 = t3371*t2824;
  t3505 = t2787*t3431;
  t3516 = t3482 + t3505;
  t2697 = -1.*t2594*t2680;
  t3471 = t3371*t2436;
  t3475 = t1597*t3431;
  t3479 = 0. + t3471 + t3475;
  t3530 = t3371*t2501;
  t3541 = t2372*t3431;
  t3544 = 0. + t3530 + t3541;
  t3589 = t3371*t2372;
  t3602 = -1.*t2501*t3431;
  t3607 = 0. + t3589 + t3602;
  t3416 = t1536*t3109;
  t3417 = t825*t3185;
  t3422 = 0. + t3416 + t3417;
  t3378 = -1.*t825*t3109;
  t3387 = t1536*t3185;
  t3393 = 0. + t3378 + t3387;
  t3363 = Cos(var1[4]);
  t3349 = 4.e-6*t188*t3030;
  t3350 = t836*t3046;
  t3351 = t140*t3074;
  t3353 = 0. + t3349 + t3350 + t3351;
  t3357 = Sin(var1[4]);
  t3400 = t3371*t3393;
  t3442 = -1.*t3422*t3431;
  t3445 = 0. + t3400 + t3442;
  t3734 = Cos(var1[3]);
  t3722 = t3371*t3422;
  t3724 = t3393*t3431;
  t3730 = 0. + t3722 + t3724;
  t3702 = Sin(var1[3]);
  t3741 = t3363*t3353;
  t3744 = -1.*t3357*t3445;
  t3753 = 0. + t3741 + t3744;
  t3630 = t3371*t1597;
  t3638 = -1.*t2436*t3431;
  t3640 = 0. + t3630 + t3638;
  t3560 = t3516*t3544;
  t3561 = t3371*t2787;
  t3570 = -1.*t2824*t3431;
  t3577 = t3561 + t3570;
  t3788 = t823*t3357;
  t3795 = t3363*t3577;
  t3796 = t3788 + t3795;
  t3628 = -1.*t3479*t3544;
  t3783 = t2594*t3357;
  t3786 = t3363*t3640;
  t3787 = 0. + t3783 + t3786;
  t3799 = t2680*t3357;
  t3800 = t3363*t3607;
  t3804 = 0. + t3799 + t3800;
  t3842 = t3363*t2680;
  t3845 = -1.*t3357*t3607;
  t3852 = 0. + t3842 + t3845;
  t4052 = t3030*t1949;
  t4054 = t2064*t3046;
  t4060 = t2224*t3074;
  t4062 = t4052 + t4054 + t4060;
  t4078 = -1.*t561*t1949;
  t4082 = -1.*t808*t2224;
  t4084 = t4078 + t4082;
  t3887 = t3363*t2594;
  t3893 = -1.*t3357*t3640;
  t3898 = 0. + t3887 + t3893;
  t3944 = -1.*t823*t2680;
  t3929 = t2680*t3353;
  t3359 = t3353*t3357;
  t3447 = t3363*t3445;
  t3448 = 0. + t3359 + t3447;
  t4170 = -1.*t3516*t3544;
  t3823 = t823*t3363;
  t3826 = -1.*t3357*t3577;
  t3829 = t3823 + t3826;
  t4231 = t3544*t3730;
  t4584 = t1949*t1469;
  t4593 = t971*t2064;
  t4596 = t1513*t2224;
  t4613 = t4584 + t4593 + t4596;
  t4564 = -1.*t3030*t1949;
  t4566 = -1.*t2064*t3046;
  t4567 = -1.*t2224*t3074;
  t4577 = t4564 + t4566 + t4567;
  t4408 = t2594*t2680;
  t4356 = -1.*t2680*t3353;
  t4693 = t3479*t3544;
  t4709 = -1.*t3544*t3730;
  p_output1[0]=t3448*var2[0] + (0. + t3730*t3734 - 1.*t3702*t3753)*var2[1] + (0. + t3702*t3730 + t3734*t3753)*var2[2] + (t3787*(t3560 + t3796*t3804 + t3829*t3852) + t3796*(t3628 - 1.*t3787*t3804 - 1.*t3852*t3898))*var2[3] + (t3479*(t2834 + t3560 + t3577*t3607) + t3516*(t2697 + t3628 - 1.*t3607*t3640))*var2[4] + (t2594*(t2372*t2787 + t2501*t2824 + t2834) + (-1.*t1597*t2372 - 1.*t2436*t2501 + t2697)*t823)*var2[5] + (-0.15121*t3109 - 0.15121*t3185 + (-1.*t1528*t2255 - 1.*t1574*t2367 - 1.*t2594*t2945)*t823 + t2594*(t2255*t2746 + t2367*t2776 + t2945*t823))*var2[9] + (1.e-6*t3030 - 0.038749*t3046 - 0.28121*t3074 - 1.*t1469*t3286 - 1.*t3250*t561 + 4.e-6*(-1.*t1513*t3286 - 1.*t3250*t808))*var2[10] - 1.9353204325022392e-7*var2[11];
  p_output1[1]=t3787*var2[0] + (0. + t3479*t3734 - 1.*t3702*t3898)*var2[1] + (0. + t3479*t3702 + t3734*t3898)*var2[2] + (t3448*(-1.*t3796*t3804 - 1.*t3829*t3852 + t4170) + t3796*(t3448*t3804 + t3753*t3852 + t4231))*var2[3] + (t3730*(-1.*t3577*t3607 + t3944 + t4170) + t3516*(t3445*t3607 + t3929 + t4231))*var2[4] + (t3353*(-1.*t2372*t2787 - 1.*t2501*t2824 + t3944) + (t2372*t3393 + t2501*t3422 + t3929)*t823)*var2[5] + (-0.15121*t1528 - 0.15121*t1574 + (t2255*t3109 + t2367*t3185 + t2945*t3353)*t823 + t3353*(-1.*t2255*t2746 - 1.*t2367*t2776 - 1.*t2945*t823))*var2[9] + (1.e-6*t1469 - 0.28121*t1513 - 1.*t3030*t4084 - 1.*t4062*t561 + 4.e-6*(-1.*t3074*t4084 - 1.*t4062*t808) - 0.038749*t971)*var2[10] + 0.29999998115510645*var2[11];
  p_output1[2]=t3796*var2[0] + (t3516*t3734 - 1.*t3702*t3829)*var2[1] + (t3516*t3702 + t3734*t3829)*var2[2] + (t3448*(t3787*t3804 + t3852*t3898 + t4693) + t3787*(-1.*t3448*t3804 - 1.*t3753*t3852 + t4709))*var2[3] + (t3730*(t3607*t3640 + t4408 + t4693) + t3479*(-1.*t3445*t3607 + t4356 + t4709))*var2[4] + (t2594*(-1.*t2372*t3393 - 1.*t2501*t3422 + t4356) + t3353*(t1597*t2372 + t2436*t2501 + t4408))*var2[5] + (-0.15121*t2746 - 0.15121*t2776 + (t1528*t2255 + t1574*t2367 + t2594*t2945)*t3353 + t2594*(-1.*t2255*t3109 - 1.*t2367*t3185 - 1.*t2945*t3353))*var2[9] + (-1.*t1469*t4577 - 1.*t3030*t4613 + 4.e-6*(-1.*t1513*t4577 - 1.*t3074*t4613) + 1.e-6*t561 - 0.28121*t808)*var2[10] + 1.1914820871506078e-8*var2[11];
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
