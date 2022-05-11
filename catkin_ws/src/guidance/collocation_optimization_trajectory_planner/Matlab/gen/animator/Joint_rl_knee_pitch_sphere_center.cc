/*
 * Automatically Generated from Mathematica.
 * Fri 4 Feb 2022 15:52:04 GMT+01:00
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
  double t920;
  double t933;
  double t1241;
  double t1670;
  double t102;
  double t302;
  double t619;
  double t638;
  double t738;
  double t748;
  double t1254;
  double t269;
  double t2478;
  double t2252;
  double t2797;
  double t3188;
  double t3189;
  double t3231;
  double t3401;
  double t3072;
  double t2343;
  double t3092;
  double t2831;
  double t2991;
  double t2993;
  double t3110;
  double t3130;
  double t3149;
  double t3429;
  double t2598;
  double t3577;
  double t2799;
  double t3725;
  double t3377;
  double t3772;
  double t3797;
  double t2003;
  double t3528;
  double t3530;
  double t3559;
  double t3588;
  double t3602;
  double t3611;
  double t3622;
  double t3647;
  double t3651;
  double t3841;
  double t3799;
  double t3806;
  double t3809;
  double t3812;
  double t3813;
  double t3822;
  double t3823;
  double t3829;
  double t3863;
  double t3868;
  double t3880;
  double t3884;
  double t3886;
  double t3889;
  double t3898;
  double t3902;
  double t3443;
  double t3914;
  double t3409;
  double t3992;
  double t3756;
  double t3926;
  double t3936;
  double t3729;
  double t831;
  double t1246;
  double t2079;
  double t2247;
  double t2306;
  double t2331;
  double t2335;
  double t729;
  double t763;
  double t4054;
  double t2348;
  double t2424;
  double t4095;
  double t2500;
  double t2529;
  double t2606;
  double t2785;
  double t2808;
  double t2812;
  double t2818;
  double t4072;
  double t4096;
  double t4097;
  double t4118;
  double t4120;
  double t4125;
  double t3066;
  double t3071;
  double t3073;
  double t3082;
  double t3094;
  double t3097;
  double t3108;
  double t3183;
  double t3318;
  double t3427;
  double t3428;
  double t3444;
  double t3509;
  double t3515;
  double t4134;
  double t4140;
  double t4141;
  double t4155;
  double t4156;
  double t4176;
  double t3695;
  double t3716;
  double t3740;
  double t3748;
  double t3758;
  double t3762;
  double t3768;
  double t3834;
  double t3836;
  double t3845;
  double t3846;
  double t3855;
  double t3857;
  double t3858;
  double t3917;
  double t4186;
  double t4205;
  double t4216;
  double t4224;
  double t3944;
  double t4235;
  double t4236;
  double t4238;
  double t4241;
  double t3949;
  double t3961;
  double t4291;
  double t4296;
  double t4307;
  double t4341;
  double t3977;
  double t3980;
  double t3994;
  double t4002;
  double t4014;
  double t4021;
  double t4027;
  double t4034;
  double t4536;
  double t4547;
  double t4555;
  double t4567;
  double t4570;
  double t4571;
  double t4583;
  double t4591;
  double t4594;
  double t4599;
  double t4603;
  double t4634;
  double t4643;
  double t4646;
  double t4690;
  double t4694;
  double t4725;
  double t4753;
  double t4754;
  double t4757;
  double t4784;
  double t4802;
  double t4807;
  double t4808;
  t920 = Cos(var1[13]);
  t933 = -1.*t920;
  t1241 = 1. + t933;
  t1670 = Sin(var1[13]);
  t102 = Cos(var1[4]);
  t302 = Cos(var1[12]);
  t619 = -1.*t302;
  t638 = 1. + t619;
  t738 = Sin(var1[12]);
  t748 = 0.15121*t738;
  t1254 = 4.e-6*t1241;
  t269 = Cos(var1[5]);
  t2478 = Sin(var1[5]);
  t2252 = -2.8e-11*t1241;
  t2797 = 7.e-6*t1241;
  t3188 = Cos(var1[14]);
  t3189 = -1.*t3188;
  t3231 = 1. + t3189;
  t3401 = Sin(var1[14]);
  t3072 = -1.*t1670;
  t2343 = Sin(var1[4]);
  t3092 = -4.e-6*t1670;
  t2831 = -1.*t102*t269*t738;
  t2991 = -1.*t302*t102*t2478;
  t2993 = t2831 + t2991;
  t3110 = t302*t102*t269;
  t3130 = -1.*t102*t738*t2478;
  t3149 = t3110 + t3130;
  t3429 = 7.e-6*t3231;
  t2598 = -7.e-6*t1670;
  t3577 = -7.e-6*t1241;
  t2799 = 4.e-6*t1670;
  t3725 = 4.e-6*t3231;
  t3377 = -2.8e-11*t3231;
  t3772 = -1. + t920;
  t3797 = 4.e-6*t3772;
  t2003 = 7.e-6*t1670;
  t3528 = 2.8e-11*t1241;
  t3530 = t3528 + t3072;
  t3559 = t3530*t2343;
  t3588 = t3577 + t3092;
  t3602 = t3588*t2993;
  t3611 = -1.000000000016*t1241;
  t3622 = 1. + t3611;
  t3647 = t3622*t3149;
  t3651 = t3559 + t3602 + t3647;
  t3841 = 7.e-6*t3401;
  t3799 = t3797 + t2598;
  t3806 = t3799*t2343;
  t3809 = -6.5e-11*t1241;
  t3812 = 1. + t3809;
  t3813 = t3812*t2993;
  t3822 = t3577 + t2799;
  t3823 = t3822*t3149;
  t3829 = t3806 + t3813 + t3823;
  t3863 = -1.000000000049*t1241;
  t3868 = 1. + t3863;
  t3880 = t3868*t2343;
  t3884 = t3797 + t2003;
  t3886 = t3884*t2993;
  t3889 = t3528 + t1670;
  t3898 = t3889*t3149;
  t3902 = t3880 + t3886 + t3898;
  t3443 = -4.e-6*t3401;
  t3914 = 2.8e-11*t3231;
  t3409 = -1.*t3401;
  t3992 = -7.e-6*t3231;
  t3756 = 4.e-6*t3401;
  t3926 = -1. + t3188;
  t3936 = 4.e-6*t3926;
  t3729 = -7.e-6*t3401;
  t831 = 5.856279999999999e-13*var1[13];
  t1246 = -0.0387489999948987*t1241;
  t2079 = t1254 + t2003;
  t2247 = -2.123459e-6*t2079;
  t2306 = t2252 + t1670;
  t2331 = -0.281209000004*t2306;
  t2335 = t831 + t1246 + t2247 + t2331;
  t729 = -0.15121*t638;
  t763 = t729 + t748;
  t4054 = Sin(var1[3]);
  t2348 = 0.15121*t638;
  t2424 = t2348 + t748;
  t4095 = Cos(var1[3]);
  t2500 = -1.4640699999999997e-7*var1[13];
  t2529 = -1.38024835e-16*t1241;
  t2606 = t1254 + t2598;
  t2785 = -0.038748999993*t2606;
  t2808 = t2797 + t2799;
  t2812 = -0.281209000004*t2808;
  t2818 = t2500 + t2529 + t2785 + t2812;
  t4072 = t269*t4054*t2343;
  t4096 = t4095*t2478;
  t4097 = t4072 + t4096;
  t4118 = t4095*t269;
  t4120 = -1.*t4054*t2343*t2478;
  t4125 = t4118 + t4120;
  t3066 = 1.0248489999999998e-12*var1[13];
  t3071 = -0.28120900000849935*t1241;
  t3073 = t2252 + t3072;
  t3082 = -0.038748999993*t3073;
  t3094 = t2797 + t3092;
  t3097 = -2.123459e-6*t3094;
  t3108 = t3066 + t3071 + t3082 + t3097;
  t3183 = 1.8190549999999993e-12*var1[14];
  t3318 = -0.5031490000160505*t3231;
  t3427 = t3377 + t3409;
  t3428 = -0.038922999986*t3427;
  t3444 = t3429 + t3443;
  t3509 = -3.6777349999999994e-6*t3444;
  t3515 = t3183 + t3318 + t3428 + t3509;
  t4134 = -1.*t738*t4097;
  t4140 = t302*t4125;
  t4141 = t4134 + t4140;
  t4155 = t302*t4097;
  t4156 = t738*t4125;
  t4176 = t4155 + t4156;
  t3695 = -2.598649999999999e-7*var1[14];
  t3716 = -2.3905277499999995e-16*t3231;
  t3740 = t3725 + t3729;
  t3748 = -0.038922999986*t3740;
  t3758 = t3429 + t3756;
  t3762 = -0.503149000008*t3758;
  t3768 = t3695 + t3716 + t3748 + t3762;
  t3834 = 1.0394599999999997e-12*var1[14];
  t3836 = -0.03892299998790722*t3231;
  t3845 = t3725 + t3841;
  t3846 = -3.6777349999999994e-6*t3845;
  t3855 = t3377 + t3401;
  t3857 = -0.503149000008*t3855;
  t3858 = t3834 + t3836 + t3846 + t3857;
  t3917 = t3914 + t3401;
  t4186 = -1.*t102*t3530*t4054;
  t4205 = t3588*t4141;
  t4216 = t3622*t4176;
  t4224 = t4186 + t4205 + t4216;
  t3944 = t3936 + t3841;
  t4235 = -1.*t102*t3799*t4054;
  t4236 = t3812*t4141;
  t4238 = t3822*t4176;
  t4241 = t4235 + t4236 + t4238;
  t3949 = -1.000000000049*t3231;
  t3961 = 1. + t3949;
  t4291 = -1.*t3868*t102*t4054;
  t4296 = t3884*t4141;
  t4307 = t3889*t4176;
  t4341 = t4291 + t4296 + t4307;
  t3977 = -1.000000000016*t3231;
  t3980 = 1. + t3977;
  t3994 = t3992 + t3443;
  t4002 = t3914 + t3409;
  t4014 = t3992 + t3756;
  t4021 = -6.5e-11*t3231;
  t4027 = 1. + t4021;
  t4034 = t3936 + t3729;
  t4536 = -1.*t4095*t269*t2343;
  t4547 = t4054*t2478;
  t4555 = t4536 + t4547;
  t4567 = t269*t4054;
  t4570 = t4095*t2343*t2478;
  t4571 = t4567 + t4570;
  t4583 = -1.*t738*t4555;
  t4591 = t302*t4571;
  t4594 = t4583 + t4591;
  t4599 = t302*t4555;
  t4603 = t738*t4571;
  t4634 = t4599 + t4603;
  t4643 = t4095*t102*t3530;
  t4646 = t3588*t4594;
  t4690 = t3622*t4634;
  t4694 = t4643 + t4646 + t4690;
  t4725 = t4095*t102*t3799;
  t4753 = t3812*t4594;
  t4754 = t3822*t4634;
  t4757 = t4725 + t4753 + t4754;
  t4784 = t3868*t4095*t102;
  t4802 = t3884*t4594;
  t4807 = t3889*t4634;
  t4808 = t4784 + t4802 + t4807;
  p_output1[0]=t2335*t2343 - 1.*t102*t2424*t2478 + t2818*t2993 + t3108*t3149 + t3515*t3651 + t3768*t3829 + t3858*t3902 - 0.038924*(t3651*t3917 + t3829*t3944 + t3902*t3961) - 0.50315*(t3651*t3980 + t3829*t3994 + t3902*t4002) + 0.165708*(t3651*t4014 + t3829*t4027 + t3902*t4034) + t102*t269*t763 + var1[0];
  p_output1[1]=-1.*t102*t2335*t4054 + t2424*t4125 + t2818*t4141 + t3108*t4176 + t3515*t4224 + t3768*t4241 + t3858*t4341 - 0.038924*(t3917*t4224 + t3944*t4241 + t3961*t4341) - 0.50315*(t3980*t4224 + t3994*t4241 + t4002*t4341) + 0.165708*(t4014*t4224 + t4027*t4241 + t4034*t4341) + t4097*t763 + var1[1];
  p_output1[2]=t102*t2335*t4095 + t2424*t4571 + t2818*t4594 + t3108*t4634 + t3515*t4694 + t3768*t4757 + t3858*t4808 - 0.038924*(t3917*t4694 + t3944*t4757 + t3961*t4808) - 0.50315*(t3980*t4694 + t3994*t4757 + t4002*t4808) + 0.165708*(t4014*t4694 + t4027*t4757 + t4034*t4808) + t4555*t763 + var1[2];
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

#include "Joint_rl_knee_pitch_sphere_center.hh"

namespace SymFunction
{

void Joint_rl_knee_pitch_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
