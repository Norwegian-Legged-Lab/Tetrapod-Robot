/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:33:01 GMT+01:00
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
  double t893;
  double t1160;
  double t1295;
  double t1324;
  double t1337;
  double t1353;
  double t1368;
  double t1549;
  double t1436;
  double t1469;
  double t1565;
  double t915;
  double t937;
  double t1049;
  double t1108;
  double t1513;
  double t1574;
  double t1580;
  double t1734;
  double t1755;
  double t1766;
  double t163;
  double t1884;
  double t1904;
  double t1936;
  double t2060;
  double t2082;
  double t2120;
  double t2130;
  double t2198;
  double t2221;
  double t2236;
  double t2403;
  double t2292;
  double t2295;
  double t2358;
  double t2373;
  double t2380;
  double t2383;
  double t2431;
  double t2466;
  double t2469;
  double t2485;
  double t2555;
  double t2556;
  double t2558;
  double t2566;
  double t2570;
  double t2582;
  double t1351;
  double t1412;
  double t786;
  double t939;
  double t1080;
  double t1120;
  double t1157;
  double t1615;
  double t1640;
  double t1825;
  double t1832;
  double t1842;
  double t1863;
  double t1882;
  double t1955;
  double t1963;
  double t2009;
  double t2223;
  double t2245;
  double t2274;
  double t2763;
  double t2764;
  double t2765;
  double t2808;
  double t2826;
  double t2840;
  double t2389;
  double t2400;
  double t2406;
  double t2409;
  double t2423;
  double t2522;
  double t2525;
  double t2544;
  double t2548;
  double t2549;
  double t2861;
  double t2869;
  double t2874;
  double t2888;
  double t2905;
  double t2911;
  double t2913;
  double t2920;
  double t2599;
  double t2600;
  double t2924;
  double t2928;
  double t2933;
  double t2950;
  double t2670;
  double t2672;
  double t3076;
  double t3078;
  double t3084;
  double t3093;
  double t3099;
  double t3105;
  double t3107;
  double t3109;
  double t3110;
  double t3115;
  double t3117;
  double t3123;
  double t3130;
  double t3146;
  double t3160;
  double t3168;
  double t3172;
  double t3177;
  double t3187;
  double t3188;
  double t3192;
  double t3307;
  double t3329;
  double t3330;
  double t3334;
  double t3354;
  double t3362;
  double t3377;
  double t3382;
  double t3391;
  double t3392;
  double t3393;
  double t3404;
  double t3406;
  double t3410;
  double t3419;
  double t3426;
  double t3429;
  double t3598;
  double t3609;
  double t3611;
  double t3631;
  double t3633;
  double t3638;
  double t3643;
  double t3653;
  double t3654;
  double t3656;
  double t3659;
  double t3660;
  double t3667;
  double t3669;
  double t3776;
  double t3779;
  double t3781;
  double t3783;
  double t3794;
  double t3798;
  double t3799;
  double t3823;
  double t3833;
  double t3835;
  double t3854;
  t893 = Cos(var1[10]);
  t1160 = Sin(var1[3]);
  t1295 = Cos(var1[9]);
  t1324 = -1.*t1295;
  t1337 = 1. + t1324;
  t1353 = Sin(var1[9]);
  t1368 = -0.15121*t1353;
  t1549 = Cos(var1[3]);
  t1436 = Cos(var1[5]);
  t1469 = Sin(var1[4]);
  t1565 = Sin(var1[5]);
  t915 = -1.*t893;
  t937 = 1. + t915;
  t1049 = -1. + t893;
  t1108 = Sin(var1[10]);
  t1513 = t1436*t1160*t1469;
  t1574 = t1549*t1565;
  t1580 = t1513 + t1574;
  t1734 = t1549*t1436;
  t1755 = -1.*t1160*t1469*t1565;
  t1766 = t1734 + t1755;
  t163 = Cos(var1[4]);
  t1884 = -1.*t1353*t1580;
  t1904 = t1295*t1766;
  t1936 = t1884 + t1904;
  t2060 = t1295*t1580;
  t2082 = t1353*t1766;
  t2120 = t2060 + t2082;
  t2130 = Cos(var1[11]);
  t2198 = -1.*t2130;
  t2221 = 1. + t2198;
  t2236 = Sin(var1[11]);
  t2403 = -1. + t2130;
  t2292 = -1.*t163*t1108*t1160;
  t2295 = -4.e-6*t1108*t1936;
  t2358 = -1.000000000016*t937;
  t2373 = 1. + t2358;
  t2380 = t2373*t2120;
  t2383 = t2292 + t2295 + t2380;
  t2431 = -1.*t893*t163*t1160;
  t2466 = 4.e-6*t937*t1936;
  t2469 = -1.*t1108*t2120;
  t2485 = t2431 + t2466 + t2469;
  t2555 = -4.e-6*t937*t163*t1160;
  t2556 = 1.6e-11*t1049;
  t2558 = 1. + t2556;
  t2566 = t2558*t1936;
  t2570 = 4.e-6*t1108*t2120;
  t2582 = t2555 + t2566 + t2570;
  t1351 = 0.15121*t1337;
  t1412 = t1351 + t1368;
  t786 = -4.9936e-13*var1[10];
  t939 = -0.038749*t937;
  t1080 = 6.19984e-13*t1049;
  t1120 = -0.281210000004*t1108;
  t1157 = t786 + t939 + t1080 + t1120;
  t1615 = -0.15121*t1337;
  t1640 = t1615 + t1368;
  t1825 = -1.2484e-7*var1[10];
  t1832 = 2.479936e-18*t937;
  t1842 = -1.54996e-7*t1049;
  t1863 = 1.124840000016e-6*t1108;
  t1882 = t1825 + t1832 + t1842 + t1863;
  t1955 = 0.281210000008499*t937;
  t1963 = -0.03874900000062*t1108;
  t2009 = t1955 + t1963;
  t2223 = 0.50315000001605*t2221;
  t2245 = -0.0398890000006382*t2236;
  t2274 = t2223 + t2245;
  t2763 = t1549*t163*t1436*t1353;
  t2764 = t1295*t1549*t163*t1565;
  t2765 = t2763 + t2764;
  t2808 = -1.*t1295*t1549*t163*t1436;
  t2826 = t1549*t163*t1353*t1565;
  t2840 = t2808 + t2826;
  t2389 = -5.04e-14*var1[11];
  t2400 = -0.039889*t2221;
  t2406 = 6.38224e-13*t2403;
  t2409 = -0.503150000008*t2236;
  t2423 = t2389 + t2400 + t2406 + t2409;
  t2522 = -1.26e-8*var1[11];
  t2525 = 2.552896e-18*t2221;
  t2544 = -1.59556e-7*t2403;
  t2548 = 2.012600000032e-6*t2236;
  t2549 = t2522 + t2525 + t2544 + t2548;
  t2861 = -1.*t1549*t1108*t1469;
  t2869 = -4.e-6*t1108*t2765;
  t2874 = t2373*t2840;
  t2888 = t2861 + t2869 + t2874;
  t2905 = -1.*t893*t1549*t1469;
  t2911 = 4.e-6*t937*t2765;
  t2913 = -1.*t1108*t2840;
  t2920 = t2905 + t2911 + t2913;
  t2599 = 1.6e-11*t2403;
  t2600 = 1. + t2599;
  t2924 = -4.e-6*t937*t1549*t1469;
  t2928 = t2558*t2765;
  t2933 = 4.e-6*t1108*t2840;
  t2950 = t2924 + t2928 + t2933;
  t2670 = -1.000000000016*t2221;
  t2672 = 1. + t2670;
  t3076 = t1549*t1436*t1469;
  t3078 = -1.*t1160*t1565;
  t3084 = t3076 + t3078;
  t3093 = t1436*t1160;
  t3099 = t1549*t1469*t1565;
  t3105 = t3093 + t3099;
  t3107 = t1353*t3084;
  t3109 = t1295*t3105;
  t3110 = t3107 + t3109;
  t3115 = t1295*t3084;
  t3117 = -1.*t1353*t3105;
  t3123 = t3115 + t3117;
  t3130 = 4.e-6*t1108*t3110;
  t3146 = t2558*t3123;
  t3160 = t3130 + t3146;
  t3168 = -1.*t1108*t3110;
  t3172 = 4.e-6*t937*t3123;
  t3177 = t3168 + t3172;
  t3187 = t2373*t3110;
  t3188 = -4.e-6*t1108*t3123;
  t3192 = t3187 + t3188;
  t3307 = -0.15121*t1295;
  t3329 = -1.*t1549*t1436*t1469;
  t3330 = t1160*t1565;
  t3334 = t3329 + t3330;
  t3354 = -1.*t1353*t3334;
  t3362 = t3354 + t3109;
  t3377 = -1.*t1295*t3334;
  t3382 = t3377 + t3117;
  t3391 = 4.e-6*t1108*t3362;
  t3392 = t2558*t3382;
  t3393 = t3391 + t3392;
  t3404 = -1.*t1108*t3362;
  t3406 = 4.e-6*t937*t3382;
  t3410 = t3404 + t3406;
  t3419 = t2373*t3362;
  t3426 = -4.e-6*t1108*t3382;
  t3429 = t3419 + t3426;
  t3598 = t1295*t3334;
  t3609 = t1353*t3105;
  t3611 = t3598 + t3609;
  t3631 = -1.*t1549*t163*t1108;
  t3633 = -1.*t893*t3611;
  t3638 = t3631 + t3391 + t3633;
  t3643 = 4.e-6*t1549*t163*t1108;
  t3653 = -1.6e-11*t1108*t3362;
  t3654 = 4.e-6*t893*t3611;
  t3656 = t3643 + t3653 + t3654;
  t3659 = t893*t1549*t163;
  t3660 = -4.e-6*t893*t3362;
  t3667 = -1.000000000016*t1108*t3611;
  t3669 = t3659 + t3660 + t3667;
  t3776 = t1549*t163*t1108;
  t3779 = -4.e-6*t1108*t3362;
  t3781 = t2373*t3611;
  t3783 = t3776 + t3779 + t3781;
  t3794 = 4.e-6*t937*t3362;
  t3798 = -1.*t1108*t3611;
  t3799 = t3659 + t3794 + t3798;
  t3823 = 4.e-6*t937*t1549*t163;
  t3833 = t2558*t3362;
  t3835 = 4.e-6*t1108*t3611;
  t3854 = t3823 + t3833 + t3835;
  p_output1[0]=1.;
  p_output1[1]=t1412*t1580 - 1.*t1157*t1160*t163 + t1640*t1766 + t1882*t1936 + t2009*t2120 + t2274*t2383 + t2423*t2485 + t2549*t2582 - 0.041195*(-1.*t2236*t2383 + t2130*t2485 + 4.e-6*t2221*t2582) - 0.14871*(4.e-6*t2236*t2383 + 4.e-6*t2221*t2485 + t2582*t2600) + 0.803147*(t2236*t2485 - 4.e-6*t2236*t2582 + t2383*t2672);
  p_output1[2]=-1.*t1157*t1469*t1549 - 1.*t1412*t1436*t1549*t163 + t1549*t1565*t163*t1640 + t1882*t2765 + t2009*t2840 + t2274*t2888 + t2423*t2920 + t2549*t2950 - 0.041195*(-1.*t2236*t2888 + t2130*t2920 + 4.e-6*t2221*t2950) + 0.803147*(t2672*t2888 + t2236*t2920 - 4.e-6*t2236*t2950) - 0.14871*(4.e-6*t2236*t2888 + 4.e-6*t2221*t2920 + t2600*t2950);
  p_output1[3]=t1640*t3084 + t1412*t3105 + t2009*t3110 + t1882*t3123 + t2549*t3160 + t2423*t3177 + t2274*t3192 - 0.041195*(4.e-6*t2221*t3160 + t2130*t3177 - 1.*t2236*t3192) - 0.14871*(t2600*t3160 + 4.e-6*t2221*t3177 + 4.e-6*t2236*t3192) + 0.803147*(-4.e-6*t2236*t3160 + t2236*t3177 + t2672*t3192);
  p_output1[4]=t3105*(t1368 + t3307) + (0.15121*t1353 + t3307)*t3334 + t2009*t3362 + t1882*t3382 + t2549*t3393 + t2423*t3410 + t2274*t3429 - 0.041195*(4.e-6*t2221*t3393 + t2130*t3410 - 1.*t2236*t3429) - 0.14871*(t2600*t3393 + 4.e-6*t2221*t3410 + 4.e-6*t2236*t3429) + 0.803147*(-4.e-6*t2236*t3393 + t2236*t3410 + t2672*t3429);
  p_output1[5]=t2423*t3638 + t2549*t3656 + t2274*t3669 - 0.041195*(t2130*t3638 + 4.e-6*t2221*t3656 - 1.*t2236*t3669) - 0.14871*(4.e-6*t2221*t3638 + t2600*t3656 + 4.e-6*t2236*t3669) + 0.803147*(t2236*t3638 - 4.e-6*t2236*t3656 + t2672*t3669) + t1549*t163*(-4.9936e-13 + t1963 - 0.281210000004*t893) + t3611*(0.281210000008499*t1108 - 0.03874900000062*t893) + t3362*(-1.2484e-7 + 1.5499600000248e-7*t1108 + 1.124840000016e-6*t893);
  p_output1[6]=(-0.0398890000006382*t2130 + 0.50315000001605*t2236)*t3783 + (-5.04e-14 - 0.503150000008*t2130 + t2245)*t3799 + (-1.26e-8 + 2.012600000032e-6*t2130 + 1.59556000002553e-7*t2236)*t3854 + 0.803147*(-1.000000000016*t2236*t3783 + t2130*t3799 - 4.e-6*t2130*t3854) - 0.14871*(4.e-6*t2130*t3783 + 4.e-6*t2236*t3799 - 1.6e-11*t2236*t3854) - 0.041195*(-1.*t2130*t3783 - 1.*t2236*t3799 + 4.e-6*t2236*t3854);
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

#include "J_u_frontSwingFootHeight2_ParallelStance2.hh"

namespace ParallelStance2
{

void J_u_frontSwingFootHeight2_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
