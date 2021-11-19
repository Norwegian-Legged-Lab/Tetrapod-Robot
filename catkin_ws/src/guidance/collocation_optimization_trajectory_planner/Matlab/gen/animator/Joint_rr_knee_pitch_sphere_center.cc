/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 18:01:44 GMT+01:00
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
  double t467;
  double t519;
  double t538;
  double t749;
  double t31;
  double t152;
  double t240;
  double t260;
  double t271;
  double t294;
  double t951;
  double t1042;
  double t77;
  double t1422;
  double t1447;
  double t671;
  double t2366;
  double t2408;
  double t2455;
  double t2544;
  double t1252;
  double t1971;
  double t1780;
  double t1820;
  double t1853;
  double t2265;
  double t2284;
  double t2298;
  double t2582;
  double t1077;
  double t2660;
  double t760;
  double t2523;
  double t2970;
  double t3024;
  double t3168;
  double t1470;
  double t2707;
  double t1449;
  double t3273;
  double t2674;
  double t2689;
  double t2714;
  double t2719;
  double t2777;
  double t2785;
  double t2814;
  double t2817;
  double t3324;
  double t3146;
  double t3152;
  double t3164;
  double t3195;
  double t3217;
  double t3234;
  double t3240;
  double t3241;
  double t3392;
  double t3411;
  double t3425;
  double t3434;
  double t3446;
  double t3455;
  double t3460;
  double t3462;
  double t2919;
  double t3495;
  double t3035;
  double t3520;
  double t3467;
  double t2573;
  double t452;
  double t573;
  double t792;
  double t886;
  double t1094;
  double t1127;
  double t1173;
  double t375;
  double t385;
  double t3612;
  double t1378;
  double t1391;
  double t3623;
  double t1445;
  double t1446;
  double t1465;
  double t1468;
  double t1742;
  double t1753;
  double t1776;
  double t3620;
  double t3625;
  double t3626;
  double t3633;
  double t3634;
  double t3639;
  double t1911;
  double t1918;
  double t2000;
  double t2098;
  double t2175;
  double t2196;
  double t2199;
  double t2355;
  double t2502;
  double t2577;
  double t2581;
  double t2587;
  double t2603;
  double t2657;
  double t3646;
  double t3649;
  double t3652;
  double t3656;
  double t3660;
  double t3661;
  double t2848;
  double t2895;
  double t2950;
  double t2958;
  double t3050;
  double t3063;
  double t3144;
  double t3253;
  double t3264;
  double t3304;
  double t3320;
  double t3344;
  double t3345;
  double t3354;
  double t3469;
  double t3666;
  double t3668;
  double t3670;
  double t3671;
  double t3497;
  double t3678;
  double t3679;
  double t3681;
  double t3686;
  double t3504;
  double t3506;
  double t3688;
  double t3693;
  double t3694;
  double t3695;
  double t3522;
  double t3533;
  double t3534;
  double t3546;
  double t3561;
  double t3563;
  double t3565;
  double t3577;
  double t3771;
  double t3775;
  double t3780;
  double t3782;
  double t3784;
  double t3789;
  double t3800;
  double t3801;
  double t3805;
  double t3814;
  double t3817;
  double t3820;
  double t3826;
  double t3828;
  double t3830;
  double t3834;
  double t3838;
  double t3846;
  double t3851;
  double t3857;
  double t3869;
  double t3870;
  double t3873;
  double t3874;
  t467 = Cos(var1[16]);
  t519 = -1.*t467;
  t538 = 1. + t519;
  t749 = Sin(var1[16]);
  t31 = Cos(var1[4]);
  t152 = Cos(var1[15]);
  t240 = -1.*t152;
  t260 = 1. + t240;
  t271 = -0.15121*t260;
  t294 = Sin(var1[15]);
  t951 = -1. + t467;
  t1042 = 4.e-6*t951;
  t77 = Cos(var1[5]);
  t1422 = Sin(var1[5]);
  t1447 = 7.e-6*t538;
  t671 = 2.8e-11*t538;
  t2366 = Cos(var1[17]);
  t2408 = -1.*t2366;
  t2455 = 1. + t2408;
  t2544 = Sin(var1[17]);
  t1252 = Sin(var1[4]);
  t1971 = -4.e-6*t749;
  t1780 = -1.*t31*t77*t294;
  t1820 = -1.*t152*t31*t1422;
  t1853 = t1780 + t1820;
  t2265 = t152*t31*t77;
  t2284 = -1.*t31*t294*t1422;
  t2298 = t2265 + t2284;
  t2582 = 2.8e-11*t2455;
  t1077 = -7.e-6*t749;
  t2660 = -2.8e-11*t538;
  t760 = -1.*t749;
  t2523 = 7.e-6*t2455;
  t2970 = -1. + t2366;
  t3024 = 4.e-6*t2970;
  t3168 = 4.e-6*t538;
  t1470 = 7.e-6*t749;
  t2707 = -7.e-6*t538;
  t1449 = 4.e-6*t749;
  t3273 = 4.e-6*t2544;
  t2674 = t2660 + t749;
  t2689 = t2674*t1252;
  t2714 = t2707 + t1971;
  t2719 = t2714*t1853;
  t2777 = -1.000000000016*t538;
  t2785 = 1. + t2777;
  t2814 = t2785*t2298;
  t2817 = t2689 + t2719 + t2814;
  t3324 = 7.e-6*t2544;
  t3146 = -1.000000000049*t538;
  t3152 = 1. + t3146;
  t3164 = t3152*t1252;
  t3195 = t3168 + t1077;
  t3217 = t3195*t1853;
  t3234 = t2660 + t760;
  t3240 = t3234*t2298;
  t3241 = t3164 + t3217 + t3240;
  t3392 = t3168 + t1470;
  t3411 = t3392*t1252;
  t3425 = -6.5e-11*t538;
  t3434 = 1. + t3425;
  t3446 = t3434*t1853;
  t3455 = t2707 + t1449;
  t3460 = t3455*t2298;
  t3462 = t3411 + t3446 + t3460;
  t2919 = -1.*t2544;
  t3495 = 4.e-6*t2455;
  t3035 = -7.e-6*t2544;
  t3520 = -2.8e-11*t2455;
  t3467 = -7.e-6*t2455;
  t2573 = -4.e-6*t2544;
  t452 = 1.5843479999999999e-12*var1[16];
  t573 = -0.03874900000889869*t538;
  t792 = t671 + t760;
  t886 = -0.281211000004*t792;
  t1094 = t1042 + t1077;
  t1127 = -1.8134809999999998e-6*t1094;
  t1173 = t452 + t573 + t886 + t1127;
  t375 = -0.15121*t294;
  t385 = t271 + t375;
  t3612 = Sin(var1[3]);
  t1378 = 0.15121*t294;
  t1391 = t271 + t1378;
  t3623 = Cos(var1[3]);
  t1445 = 3.9608699999999997e-7*var1[16];
  t1446 = -1.1787626499999999e-16*t538;
  t1465 = t1447 + t1449;
  t1468 = -0.281211000004*t1465;
  t1742 = t1042 + t1470;
  t1753 = -0.038749000006999997*t1742;
  t1776 = t1445 + t1446 + t1468 + t1753;
  t3620 = t77*t3612*t1252;
  t3625 = t3623*t1422;
  t3626 = t3620 + t3625;
  t3633 = t3623*t77;
  t3634 = -1.*t3612*t1252*t1422;
  t3639 = t3633 + t3634;
  t1911 = -2.7726089999999997e-12*var1[16];
  t1918 = -0.2812110000084994*t538;
  t2000 = t1447 + t1971;
  t2098 = -1.8134809999999998e-6*t2000;
  t2175 = t671 + t749;
  t2196 = -0.038749000006999997*t2175;
  t2199 = t1911 + t1918 + t2098 + t2196;
  t2355 = -1.9784030000000015e-12*var1[17];
  t2502 = -0.5031510000160505*t2455;
  t2577 = t2523 + t2573;
  t2581 = -3.367757e-6*t2577;
  t2587 = t2582 + t2544;
  t2603 = -0.038575000014*t2587;
  t2657 = t2355 + t2502 + t2581 + t2603;
  t3646 = -1.*t294*t3626;
  t3649 = t152*t3639;
  t3652 = t3646 + t3649;
  t3656 = t152*t3626;
  t3660 = t294*t3639;
  t3661 = t3656 + t3660;
  t2848 = 1.1305160000000008e-12*var1[17];
  t2895 = -0.03857500001589017*t2455;
  t2950 = t2582 + t2919;
  t2958 = -0.5031510000080001*t2950;
  t3050 = t3024 + t3035;
  t3063 = -3.367757e-6*t3050;
  t3144 = t2848 + t2895 + t2958 + t3063;
  t3253 = 2.826290000000002e-7*var1[17];
  t3264 = -2.18904205e-16*t2455;
  t3304 = t2523 + t3273;
  t3320 = -0.5031510000080001*t3304;
  t3344 = t3024 + t3324;
  t3345 = -0.038575000014*t3344;
  t3354 = t3253 + t3264 + t3320 + t3345;
  t3469 = t3467 + t3273;
  t3666 = -1.*t31*t2674*t3612;
  t3668 = t2714*t3652;
  t3670 = t2785*t3661;
  t3671 = t3666 + t3668 + t3670;
  t3497 = t3495 + t3324;
  t3678 = -1.*t3152*t31*t3612;
  t3679 = t3195*t3652;
  t3681 = t3234*t3661;
  t3686 = t3678 + t3679 + t3681;
  t3504 = -6.5e-11*t2455;
  t3506 = 1. + t3504;
  t3688 = -1.*t31*t3392*t3612;
  t3693 = t3434*t3652;
  t3694 = t3455*t3661;
  t3695 = t3688 + t3693 + t3694;
  t3522 = t3520 + t2919;
  t3533 = -1.000000000049*t2455;
  t3534 = 1. + t3533;
  t3546 = t3495 + t3035;
  t3561 = -1.000000000016*t2455;
  t3563 = 1. + t3561;
  t3565 = t3520 + t2544;
  t3577 = t3467 + t2573;
  t3771 = -1.*t3623*t77*t1252;
  t3775 = t3612*t1422;
  t3780 = t3771 + t3775;
  t3782 = t77*t3612;
  t3784 = t3623*t1252*t1422;
  t3789 = t3782 + t3784;
  t3800 = -1.*t294*t3780;
  t3801 = t152*t3789;
  t3805 = t3800 + t3801;
  t3814 = t152*t3780;
  t3817 = t294*t3789;
  t3820 = t3814 + t3817;
  t3826 = t3623*t31*t2674;
  t3828 = t2714*t3805;
  t3830 = t2785*t3820;
  t3834 = t3826 + t3828 + t3830;
  t3838 = t3152*t3623*t31;
  t3846 = t3195*t3805;
  t3851 = t3234*t3820;
  t3857 = t3838 + t3846 + t3851;
  t3869 = t3623*t31*t3392;
  t3870 = t3434*t3805;
  t3873 = t3455*t3820;
  t3874 = t3869 + t3870 + t3873;
  p_output1[0]=t1173*t1252 + t1776*t1853 + t2199*t2298 + t2657*t2817 - 1.*t1391*t1422*t31 + t3144*t3241 + t3354*t3462 - 0.165712*(t2817*t3469 + t3241*t3497 + t3462*t3506) - 0.038576*(t2817*t3522 + t3241*t3534 + t3462*t3546) - 0.50315*(t2817*t3563 + t3241*t3565 + t3462*t3577) + t31*t385*t77 + var1[0];
  p_output1[1]=-1.*t1173*t31*t3612 + t1391*t3639 + t1776*t3652 + t2199*t3661 + t2657*t3671 + t3144*t3686 + t3354*t3695 - 0.165712*(t3469*t3671 + t3497*t3686 + t3506*t3695) - 0.038576*(t3522*t3671 + t3534*t3686 + t3546*t3695) - 0.50315*(t3563*t3671 + t3565*t3686 + t3577*t3695) + t3626*t385 + var1[1];
  p_output1[2]=t1173*t31*t3623 + t1391*t3789 + t1776*t3805 + t2199*t3820 + t2657*t3834 + t3780*t385 + t3144*t3857 + t3354*t3874 - 0.165712*(t3469*t3834 + t3497*t3857 + t3506*t3874) - 0.038576*(t3522*t3834 + t3534*t3857 + t3546*t3874) - 0.50315*(t3563*t3834 + t3565*t3857 + t3577*t3874) + var1[2];
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

#include "Joint_rr_knee_pitch_sphere_center.hh"

namespace SymFunction
{

void Joint_rr_knee_pitch_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
