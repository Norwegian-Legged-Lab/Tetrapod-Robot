/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:17:00 GMT+01:00
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
  double t599;
  double t610;
  double t618;
  double t735;
  double t265;
  double t968;
  double t981;
  double t1005;
  double t1023;
  double t1065;
  double t1096;
  double t1115;
  double t1099;
  double t1130;
  double t817;
  double t879;
  double t1101;
  double t1133;
  double t1166;
  double t1210;
  double t1249;
  double t1253;
  double t1305;
  double t653;
  double t1712;
  double t1792;
  double t1822;
  double t1852;
  double t475;
  double t1546;
  double t1405;
  double t1419;
  double t1457;
  double t1656;
  double t1673;
  double t1678;
  double t1882;
  double t909;
  double t1940;
  double t758;
  double t1840;
  double t2124;
  double t2138;
  double t2242;
  double t1335;
  double t1970;
  double t1319;
  double t2336;
  double t1954;
  double t1957;
  double t1986;
  double t1995;
  double t1998;
  double t1999;
  double t2012;
  double t2013;
  double t2388;
  double t2200;
  double t2232;
  double t2237;
  double t2243;
  double t2286;
  double t2303;
  double t2309;
  double t2313;
  double t2449;
  double t2481;
  double t2485;
  double t2534;
  double t2545;
  double t2556;
  double t2581;
  double t2584;
  double t2040;
  double t2652;
  double t2140;
  double t2772;
  double t2611;
  double t1864;
  double t2998;
  double t3027;
  double t3042;
  double t3067;
  double t3091;
  double t3190;
  double t3209;
  double t3216;
  double t3248;
  double t3542;
  double t3148;
  double t3164;
  double t3179;
  double t3345;
  double t3355;
  double t3358;
  double t3632;
  double t3647;
  double t3689;
  double t3700;
  double t3544;
  double t3545;
  double t3551;
  double t3563;
  double t3592;
  double t3595;
  double t4063;
  double t3860;
  double t3876;
  double t3930;
  double t3939;
  double t3791;
  double t3813;
  double t3824;
  double t3830;
  double t3835;
  double t3839;
  t599 = Cos(var1[16]);
  t610 = -1.*t599;
  t618 = 1. + t610;
  t735 = Sin(var1[16]);
  t265 = Cos(var1[3]);
  t968 = Cos(var1[15]);
  t981 = -1.*t968;
  t1005 = 1. + t981;
  t1023 = -0.15121*t1005;
  t1065 = Sin(var1[15]);
  t1096 = Cos(var1[5]);
  t1115 = Sin(var1[3]);
  t1099 = Sin(var1[4]);
  t1130 = Sin(var1[5]);
  t817 = -1. + t599;
  t879 = 4.e-6*t817;
  t1101 = -1.*t265*t1096*t1099;
  t1133 = t1115*t1130;
  t1166 = t1101 + t1133;
  t1210 = t1096*t1115;
  t1249 = t265*t1099*t1130;
  t1253 = t1210 + t1249;
  t1305 = 7.e-6*t618;
  t653 = 2.8e-11*t618;
  t1712 = Cos(var1[17]);
  t1792 = -1.*t1712;
  t1822 = 1. + t1792;
  t1852 = Sin(var1[17]);
  t475 = Cos(var1[4]);
  t1546 = -4.e-6*t735;
  t1405 = -1.*t1065*t1166;
  t1419 = t968*t1253;
  t1457 = t1405 + t1419;
  t1656 = t968*t1166;
  t1673 = t1065*t1253;
  t1678 = t1656 + t1673;
  t1882 = 2.8e-11*t1822;
  t909 = -7.e-6*t735;
  t1940 = -2.8e-11*t618;
  t758 = -1.*t735;
  t1840 = 7.e-6*t1822;
  t2124 = -1. + t1712;
  t2138 = 4.e-6*t2124;
  t2242 = 4.e-6*t618;
  t1335 = 7.e-6*t735;
  t1970 = -7.e-6*t618;
  t1319 = 4.e-6*t735;
  t2336 = 4.e-6*t1852;
  t1954 = t1940 + t735;
  t1957 = t265*t475*t1954;
  t1986 = t1970 + t1546;
  t1995 = t1986*t1457;
  t1998 = -1.000000000016*t618;
  t1999 = 1. + t1998;
  t2012 = t1999*t1678;
  t2013 = t1957 + t1995 + t2012;
  t2388 = 7.e-6*t1852;
  t2200 = -1.000000000049*t618;
  t2232 = 1. + t2200;
  t2237 = t2232*t265*t475;
  t2243 = t2242 + t909;
  t2286 = t2243*t1457;
  t2303 = t1940 + t758;
  t2309 = t2303*t1678;
  t2313 = t2237 + t2286 + t2309;
  t2449 = t2242 + t1335;
  t2481 = t265*t475*t2449;
  t2485 = -6.5e-11*t618;
  t2534 = 1. + t2485;
  t2545 = t2534*t1457;
  t2556 = t1970 + t1319;
  t2581 = t2556*t1678;
  t2584 = t2481 + t2545 + t2581;
  t2040 = -1.*t1852;
  t2652 = 4.e-6*t1822;
  t2140 = -7.e-6*t1852;
  t2772 = -2.8e-11*t1822;
  t2611 = -7.e-6*t1822;
  t1864 = -4.e-6*t1852;
  t2998 = Cos(var1[6]);
  t3027 = -1.*t2998;
  t3042 = 1. + t3027;
  t3067 = 0.15121*t3042;
  t3091 = Sin(var1[6]);
  t3190 = Cos(var1[7]);
  t3209 = -1.*t3190;
  t3216 = 1. + t3209;
  t3248 = Sin(var1[7]);
  t3542 = -1. + t3190;
  t3148 = t2998*t1253;
  t3164 = -1.*t1166*t3091;
  t3179 = t3148 + t3164;
  t3345 = t2998*t1166;
  t3355 = t1253*t3091;
  t3358 = t3345 + t3355;
  t3632 = Cos(var1[8]);
  t3647 = -1.*t3632;
  t3689 = 1. + t3647;
  t3700 = Sin(var1[8]);
  t3544 = 4.e-6*t265*t475*t3542;
  t3545 = 1.6e-11*t3542;
  t3551 = 1. + t3545;
  t3563 = t3551*t3179;
  t3592 = 4.e-6*t3358*t3248;
  t3595 = t3544 + t3563 + t3592;
  t4063 = -1. + t3632;
  t3860 = t265*t475*t3190;
  t3876 = 4.e-6*t3542*t3179;
  t3930 = t3358*t3248;
  t3939 = t3860 + t3876 + t3930;
  t3791 = -1.000000000016*t3216;
  t3813 = 1. + t3791;
  t3824 = t3813*t3358;
  t3830 = -1.*t265*t475*t3248;
  t3835 = -4.e-6*t3179*t3248;
  t3839 = t3824 + t3830 + t3835;
  p_output1[0]=(t1023 - 0.15121*t1065)*t1166 + (t1023 + 0.15121*t1065)*t1253 - 0.148715*((1. - 6.5e-11*t1822)*t2584 + t2013*(t2336 + t2611) + t2313*(t2388 + t2652)) - 0.80315*((1. - 1.000000000016*t1822)*t2013 + t2584*(t1864 + t2611) + t2313*(t1852 + t2772)) - 0.038576*((1. - 1.000000000049*t1822)*t2313 + t2584*(t2140 + t2652) + t2013*(t2040 + t2772)) + t1253*(t3067 - 0.15121*t3091) + t1166*(t3067 + 0.15121*t3091) + (0.281210000008499*t3216 + 0.03874900000062*t3248)*t3358 + (0.503210000016051*t3689 + 0.03874900000062*t3700)*t3839 + 0.80321*(-4.e-6*t3595*t3700 + (1. - 1.000000000016*t3689)*t3839 - 1.*t3700*t3939) - 0.03875*(t3700*t3839 + t3632*t3939 + 4.e-6*t3595*t4063) + 0.14871*(4.e-6*t3700*t3839 + t3595*(1. + 1.6e-11*t4063) + 4.e-6*t3939*t4063) + 2.*var1[2] + t3179*(-1.5499600000248e-7*t3216 + 1.124840000016e-6*t3248 - 1.2484e-7*var1[7]) + t265*t475*(-0.03874900000062*t3216 + 0.281210000004*t3248 + 4.9936e-13*var1[7]) + t3595*(-1.5499600000248e-7*t3689 + 2.012840000032e-6*t3700 - 1.284e-8*var1[8]) + t3939*(-0.03874900000062*t3689 + 0.503210000008*t3700 + 5.136e-14*var1[8]) + t1678*(-1.8134809999999998e-6*(t1305 + t1546) - 0.2812110000084994*t618 - 0.038749000006999997*(t653 + t735) - 2.7726089999999997e-12*var1[16]) + t265*t475*(-0.03874900000889869*t618 - 0.281211000004*(t653 + t758) - 1.8134809999999998e-6*(t879 + t909) + 1.5843479999999999e-12*var1[16]) + t1457*(-0.281211000004*(t1305 + t1319) - 1.1787626499999999e-16*t618 - 0.038749000006999997*(t1335 + t879) + 3.9608699999999997e-7*var1[16]) + t2013*(-0.5031510000160505*t1822 - 3.367757e-6*(t1840 + t1864) - 0.038575000014*(t1852 + t1882) - 1.9784030000000015e-12*var1[17]) + t2313*(-0.03857500001589017*t1822 - 0.5031510000080001*(t1882 + t2040) - 3.367757e-6*(t2138 + t2140) + 1.1305160000000008e-12*var1[17]) + t2584*(-2.18904205e-16*t1822 - 0.5031510000080001*(t1840 + t2336) - 0.038575000014*(t2138 + t2388) + 2.826290000000002e-7*var1[17]);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "u_swingFootHeight1_TrotStance1.hh"

namespace TrotStance1
{

void u_swingFootHeight1_TrotStance1_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
