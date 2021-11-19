/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 18:01:31 GMT+01:00
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
  double t641;
  double t18;
  double t62;
  double t119;
  double t120;
  double t416;
  double t477;
  double t685;
  double t809;
  double t920;
  double t972;
  double t58;
  double t1460;
  double t1070;
  double t1682;
  double t1709;
  double t1721;
  double t1872;
  double t2095;
  double t2176;
  double t2248;
  double t2285;
  double t2288;
  double t2356;
  double t2506;
  double t2414;
  double t2423;
  double t2443;
  double t2446;
  double t2458;
  double t2462;
  double t2608;
  double t2615;
  double t2617;
  double t2618;
  double t2643;
  double t2645;
  double t2648;
  double t2652;
  double t2654;
  double t2665;
  double t625;
  double t874;
  double t953;
  double t996;
  double t1040;
  double t146;
  double t544;
  double t2746;
  double t1285;
  double t1302;
  double t2758;
  double t1524;
  double t1535;
  double t1536;
  double t1541;
  double t1561;
  double t2753;
  double t2766;
  double t2767;
  double t2774;
  double t2782;
  double t2784;
  double t1760;
  double t1807;
  double t1848;
  double t2316;
  double t2363;
  double t2386;
  double t2797;
  double t2806;
  double t2812;
  double t2816;
  double t2818;
  double t2821;
  double t2487;
  double t2497;
  double t2534;
  double t2585;
  double t2606;
  double t2623;
  double t2624;
  double t2627;
  double t2633;
  double t2636;
  double t2825;
  double t2830;
  double t2835;
  double t2841;
  double t2846;
  double t2850;
  double t2851;
  double t2852;
  double t2697;
  double t2705;
  double t2856;
  double t2857;
  double t2859;
  double t2861;
  double t2727;
  double t2732;
  double t3027;
  double t3028;
  double t3029;
  double t3037;
  double t3044;
  double t3045;
  double t3058;
  double t3059;
  double t3060;
  double t3066;
  double t3073;
  double t3074;
  double t3083;
  double t3085;
  double t3086;
  double t3088;
  double t3097;
  double t3098;
  double t3110;
  double t3116;
  double t3119;
  double t3123;
  double t3124;
  double t3126;
  t641 = Cos(var1[10]);
  t18 = Cos(var1[4]);
  t62 = Cos(var1[9]);
  t119 = -1.*t62;
  t120 = 1. + t119;
  t416 = Sin(var1[9]);
  t477 = -0.15121*t416;
  t685 = -1.*t641;
  t809 = 1. + t685;
  t920 = -1. + t641;
  t972 = Sin(var1[10]);
  t58 = Cos(var1[5]);
  t1460 = Sin(var1[5]);
  t1070 = Sin(var1[4]);
  t1682 = -1.*t18*t58*t416;
  t1709 = -1.*t62*t18*t1460;
  t1721 = t1682 + t1709;
  t1872 = t62*t18*t58;
  t2095 = -1.*t18*t416*t1460;
  t2176 = t1872 + t2095;
  t2248 = Cos(var1[11]);
  t2285 = -1.*t2248;
  t2288 = 1. + t2285;
  t2356 = Sin(var1[11]);
  t2506 = -1. + t2248;
  t2414 = t972*t1070;
  t2423 = -4.e-6*t972*t1721;
  t2443 = -1.000000000016*t809;
  t2446 = 1. + t2443;
  t2458 = t2446*t2176;
  t2462 = t2414 + t2423 + t2458;
  t2608 = t641*t1070;
  t2615 = 4.e-6*t809*t1721;
  t2617 = -1.*t972*t2176;
  t2618 = t2608 + t2615 + t2617;
  t2643 = 4.e-6*t809*t1070;
  t2645 = 1.6e-11*t920;
  t2648 = 1. + t2645;
  t2652 = t2648*t1721;
  t2654 = 4.e-6*t972*t2176;
  t2665 = t2643 + t2652 + t2654;
  t625 = -4.9936e-13*var1[10];
  t874 = -0.038749*t809;
  t953 = 6.19984e-13*t920;
  t996 = -0.281210000004*t972;
  t1040 = t625 + t874 + t953 + t996;
  t146 = 0.15121*t120;
  t544 = t146 + t477;
  t2746 = Sin(var1[3]);
  t1285 = -0.15121*t120;
  t1302 = t1285 + t477;
  t2758 = Cos(var1[3]);
  t1524 = -1.2484e-7*var1[10];
  t1535 = 2.479936e-18*t809;
  t1536 = -1.54996e-7*t920;
  t1541 = 1.124840000016e-6*t972;
  t1561 = t1524 + t1535 + t1536 + t1541;
  t2753 = t58*t2746*t1070;
  t2766 = t2758*t1460;
  t2767 = t2753 + t2766;
  t2774 = t2758*t58;
  t2782 = -1.*t2746*t1070*t1460;
  t2784 = t2774 + t2782;
  t1760 = 0.281210000008499*t809;
  t1807 = -0.03874900000062*t972;
  t1848 = t1760 + t1807;
  t2316 = 0.50315000001605*t2288;
  t2363 = -0.0398890000006382*t2356;
  t2386 = t2316 + t2363;
  t2797 = -1.*t416*t2767;
  t2806 = t62*t2784;
  t2812 = t2797 + t2806;
  t2816 = t62*t2767;
  t2818 = t416*t2784;
  t2821 = t2816 + t2818;
  t2487 = -5.04e-14*var1[11];
  t2497 = -0.039889*t2288;
  t2534 = 6.38224e-13*t2506;
  t2585 = -0.503150000008*t2356;
  t2606 = t2487 + t2497 + t2534 + t2585;
  t2623 = -1.26e-8*var1[11];
  t2624 = 2.552896e-18*t2288;
  t2627 = -1.59556e-7*t2506;
  t2633 = 2.012600000032e-6*t2356;
  t2636 = t2623 + t2624 + t2627 + t2633;
  t2825 = -1.*t18*t972*t2746;
  t2830 = -4.e-6*t972*t2812;
  t2835 = t2446*t2821;
  t2841 = t2825 + t2830 + t2835;
  t2846 = -1.*t641*t18*t2746;
  t2850 = 4.e-6*t809*t2812;
  t2851 = -1.*t972*t2821;
  t2852 = t2846 + t2850 + t2851;
  t2697 = 1.6e-11*t2506;
  t2705 = 1. + t2697;
  t2856 = -4.e-6*t809*t18*t2746;
  t2857 = t2648*t2812;
  t2859 = 4.e-6*t972*t2821;
  t2861 = t2856 + t2857 + t2859;
  t2727 = -1.000000000016*t2288;
  t2732 = 1. + t2727;
  t3027 = -1.*t2758*t58*t1070;
  t3028 = t2746*t1460;
  t3029 = t3027 + t3028;
  t3037 = t58*t2746;
  t3044 = t2758*t1070*t1460;
  t3045 = t3037 + t3044;
  t3058 = -1.*t416*t3029;
  t3059 = t62*t3045;
  t3060 = t3058 + t3059;
  t3066 = t62*t3029;
  t3073 = t416*t3045;
  t3074 = t3066 + t3073;
  t3083 = t2758*t18*t972;
  t3085 = -4.e-6*t972*t3060;
  t3086 = t2446*t3074;
  t3088 = t3083 + t3085 + t3086;
  t3097 = t641*t2758*t18;
  t3098 = 4.e-6*t809*t3060;
  t3110 = -1.*t972*t3074;
  t3116 = t3097 + t3098 + t3110;
  t3119 = 4.e-6*t809*t2758*t18;
  t3123 = t2648*t3060;
  t3124 = 4.e-6*t972*t3074;
  t3126 = t3119 + t3123 + t3124;
  p_output1[0]=t1040*t1070 + t1561*t1721 - 1.*t1302*t1460*t18 + t1848*t2176 + t2386*t2462 + t2606*t2618 + t2636*t2665 - 0.03989*(-1.*t2356*t2462 + t2248*t2618 + 4.e-6*t2288*t2665) - 0.16571*(4.e-6*t2356*t2462 + 4.e-6*t2288*t2618 + t2665*t2705) + 0.50315*(t2356*t2618 - 4.e-6*t2356*t2665 + t2462*t2732) + t18*t544*t58 + var1[0];
  p_output1[1]=-1.*t1040*t18*t2746 + t1302*t2784 + t1561*t2812 + t1848*t2821 + t2386*t2841 + t2606*t2852 + t2636*t2861 - 0.03989*(-1.*t2356*t2841 + t2248*t2852 + 4.e-6*t2288*t2861) + 0.50315*(t2732*t2841 + t2356*t2852 - 4.e-6*t2356*t2861) - 0.16571*(4.e-6*t2356*t2841 + 4.e-6*t2288*t2852 + t2705*t2861) + t2767*t544 + var1[1];
  p_output1[2]=t1040*t18*t2758 + t1302*t3045 + t1561*t3060 + t1848*t3074 + t2386*t3088 + t2606*t3116 + t2636*t3126 - 0.03989*(-1.*t2356*t3088 + t2248*t3116 + 4.e-6*t2288*t3126) + 0.50315*(t2732*t3088 + t2356*t3116 - 4.e-6*t2356*t3126) - 0.16571*(4.e-6*t2356*t3088 + 4.e-6*t2288*t3116 + t2705*t3126) + t3029*t544 + var1[2];
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

#include "Joint_fr_knee_pitch_sphere_center.hh"

namespace SymFunction
{

void Joint_fr_knee_pitch_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
