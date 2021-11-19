/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:30:32 GMT+01:00
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
  double t1256;
  double t1307;
  double t1736;
  double t632;
  double t636;
  double t665;
  double t817;
  double t844;
  double t1035;
  double t2028;
  double t1901;
  double t1918;
  double t2050;
  double t1941;
  double t1971;
  double t2019;
  double t2054;
  double t2089;
  double t2148;
  double t2284;
  double t2432;
  double t2452;
  double t2455;
  double t2457;
  double t2459;
  double t2464;
  double t2477;
  double t2486;
  double t2488;
  double t2505;
  double t2514;
  double t2519;
  double t2558;
  double t2596;
  double t2600;
  double t2631;
  double t2642;
  double t1432;
  double t1646;
  double t2683;
  double t2694;
  double t2798;
  double t2398;
  double t2430;
  double t2476;
  double t2561;
  double t2647;
  double t2654;
  double t3418;
  double t3419;
  double t3420;
  double t3421;
  double t3426;
  double t3232;
  double t3277;
  double t3291;
  double t3316;
  double t3318;
  double t3408;
  double t3410;
  double t2903;
  double t2913;
  double t3008;
  double t3015;
  double t3034;
  double t3035;
  double t3058;
  double t3425;
  double t3428;
  double t3430;
  double t3434;
  double t3550;
  double t3554;
  double t3555;
  double t3594;
  double t3599;
  double t3609;
  double t3611;
  double t1093;
  double t1824;
  double t1833;
  double t1845;
  double t1983;
  double t1991;
  double t1999;
  double t3710;
  double t3707;
  double t3182;
  double t3190;
  double t3229;
  double t2060;
  double t2286;
  double t2363;
  double t3791;
  double t3795;
  double t3798;
  double t3181;
  double t3532;
  double t3799;
  double t3803;
  double t3806;
  double t3808;
  double t3436;
  double t3462;
  double t3485;
  double t3511;
  double t3521;
  double t3522;
  double t3524;
  double t3526;
  double t3815;
  double t3820;
  double t3826;
  double t3834;
  double t3718;
  double t3709;
  double t3712;
  double t3715;
  double t3699;
  double t3720;
  double t3728;
  double t3734;
  double t3698;
  double t3683;
  double t3687;
  double t3688;
  double t3692;
  double t3676;
  double t3716;
  double t3735;
  double t3749;
  double t3896;
  double t3890;
  double t3891;
  double t3893;
  double t3889;
  double t3903;
  double t3908;
  double t3913;
  double t3810;
  double t3813;
  double t3814;
  double t3785;
  double t3786;
  double t3787;
  double t3864;
  double t3865;
  double t3867;
  double t3871;
  double t3875;
  double t3876;
  double t3948;
  double t3952;
  double t3956;
  double t3941;
  double t3942;
  double t3945;
  double t3957;
  double t3958;
  double t3961;
  double t3974;
  double t3988;
  double t4011;
  double t3963;
  double t3937;
  double t3939;
  double t3940;
  double t4026;
  double t4034;
  double t4035;
  double t4113;
  double t4117;
  double t4119;
  double t4049;
  double t4121;
  double t4137;
  double t4144;
  double t4163;
  double t4191;
  double t4195;
  double t4096;
  double t4097;
  double t4106;
  double t4276;
  double t4277;
  double t4278;
  double t4283;
  double t4284;
  double t4286;
  double t4290;
  double t4248;
  double t4261;
  double t4206;
  double t4208;
  double t4220;
  double t4405;
  double t4067;
  double t4071;
  double t4095;
  double t3695;
  double t3764;
  double t3775;
  double t4413;
  double t4693;
  double t4706;
  double t4734;
  double t4766;
  double t4773;
  double t4775;
  double t4779;
  double t4780;
  double t4625;
  double t4665;
  double t4943;
  double t4962;
  t1256 = Cos(var1[7]);
  t1307 = -1. + t1256;
  t1736 = Sin(var1[8]);
  t632 = Cos(var1[8]);
  t636 = -1.*t632;
  t665 = 1. + t636;
  t817 = -1.000000000016*t665;
  t844 = 1. + t817;
  t1035 = Sin(var1[7]);
  t2028 = -1. + t632;
  t1901 = -1.*t1256;
  t1918 = 1. + t1901;
  t2050 = 1.6e-11*t2028;
  t1941 = -1.000000000016*t1918;
  t1971 = 1. + t1941;
  t2019 = 1.6e-11*t665;
  t2054 = 1. + t2019 + t2050;
  t2089 = 4.e-6*t2028;
  t2148 = -4.e-6*t632;
  t2284 = t2089 + t2148;
  t2432 = 5.136e-14*var1[8];
  t2452 = -0.03874900000062*t665;
  t2455 = 5.9484e-7*t2028;
  t2457 = -0.03875*t632;
  t2459 = -0.299999999992*t1736;
  t2464 = t2432 + t2452 + t2455 + t2457 + t2459;
  t2477 = -1.284e-8*var1[8];
  t2486 = 1. + t2050;
  t2488 = 0.14871*t2486;
  t2505 = -1.5499600000248e-7*t665;
  t2514 = -1.55e-7*t2028;
  t2519 = -1.199999999968e-6*t1736;
  t2558 = t2477 + t2488 + t2505 + t2514 + t2519;
  t2596 = 0.80321*t844;
  t2600 = 0.503210000016051*t665;
  t2631 = -4.05159380016e-7*t1736;
  t2642 = t2596 + t2600 + t2631;
  t1432 = 1.6e-11*t1307;
  t1646 = 1. + t1432;
  t2683 = 4.e-6*t1307*t2054;
  t2694 = t1256*t2284;
  t2798 = t2683 + t2694;
  t2398 = 0.281210000008499*t1918;
  t2430 = 0.03874900000062*t1035;
  t2476 = t1035*t2464;
  t2561 = 4.e-6*t1035*t2558;
  t2647 = t1971*t2642;
  t2654 = t2398 + t2430 + t2476 + t2561 + t2647;
  t3418 = -1. + t2019;
  t3419 = 4.e-6*t3418;
  t3420 = 4.e-6*t665;
  t3421 = t3419 + t3420;
  t3426 = t2019 + t636;
  t3232 = -1.2484e-7*var1[7];
  t3277 = -1.5499600000248e-7*t1918;
  t3291 = 1.124840000016e-6*t1035;
  t3316 = 4.e-6*t1307*t2464;
  t3318 = t1646*t2558;
  t3408 = -4.e-6*t1035*t2642;
  t3410 = t3232 + t3277 + t3291 + t3316 + t3318 + t3408;
  t2903 = 4.9936e-13*var1[7];
  t2913 = -0.03874900000062*t1918;
  t3008 = 0.281210000004*t1035;
  t3015 = t1256*t2464;
  t3034 = 4.e-6*t1307*t2558;
  t3035 = -1.*t1035*t2642;
  t3058 = t2903 + t2913 + t3008 + t3015 + t3034 + t3035;
  t3425 = 4.e-6*t1307*t3421;
  t3428 = t1256*t3426;
  t3430 = 1.000000000016*t1035*t1736;
  t3434 = t3425 + t3428 + t3430;
  t3550 = t2284*t2464;
  t3554 = t2054*t2558;
  t3555 = t3550 + t3554;
  t3594 = -1.*t3426*t2464;
  t3599 = -1.*t3421*t2558;
  t3609 = 1.000000000016*t2642*t1736;
  t3611 = t3594 + t3599 + t3609;
  t1093 = -4.e-6*t844*t1035;
  t1824 = -4.e-6*t1646*t1736;
  t1833 = -4.e-6*t1307*t1736;
  t1845 = t1093 + t1824 + t1833;
  t1983 = t1971*t844;
  t1991 = -1.000000000016*t1035*t1736;
  t1999 = t1983 + t1991;
  t3710 = Cos(var1[6]);
  t3707 = Sin(var1[6]);
  t3182 = t1646*t2054;
  t3190 = 4.e-6*t1307*t2284;
  t3229 = t3182 + t3190;
  t2060 = 4.e-6*t2054*t1035;
  t2286 = t2284*t1035;
  t2363 = t2060 + t2286;
  t3791 = -1.*t3710;
  t3795 = 1. + t3791;
  t3798 = 0.15121*t3795;
  t3181 = t2798*t3058;
  t3532 = -1.*t3058*t3434;
  t3799 = -0.15121*t3707;
  t3803 = t3707*t2654;
  t3806 = t3710*t3410;
  t3808 = t3798 + t3799 + t3803 + t3806;
  t3436 = 4.e-6*t3421*t1035;
  t3462 = t3426*t1035;
  t3485 = -1.000000000016*t1971*t1736;
  t3511 = t3436 + t3462 + t3485;
  t3521 = t1646*t3421;
  t3522 = 4.e-6*t1307*t3426;
  t3524 = 4.000000000064e-6*t1035*t1736;
  t3526 = t3521 + t3522 + t3524;
  t3815 = 0.15121*t3707;
  t3820 = t3710*t2654;
  t3826 = -1.*t3707*t3410;
  t3834 = t3798 + t3815 + t3820 + t3826;
  t3718 = Sin(var1[5]);
  t3709 = -1.*t3707*t1845;
  t3712 = t3710*t1999;
  t3715 = t3709 + t3712;
  t3699 = Cos(var1[5]);
  t3720 = t3710*t1845;
  t3728 = t3707*t1999;
  t3734 = t3720 + t3728;
  t3698 = Cos(var1[4]);
  t3683 = -1.*t844*t1035;
  t3687 = -1.6e-11*t1307*t1736;
  t3688 = -1.*t1256*t1736;
  t3692 = t3683 + t3687 + t3688;
  t3676 = Sin(var1[4]);
  t3716 = t3699*t3715;
  t3735 = -1.*t3718*t3734;
  t3749 = t3716 + t3735;
  t3896 = Cos(var1[3]);
  t3890 = t3718*t3715;
  t3891 = t3699*t3734;
  t3893 = t3890 + t3891;
  t3889 = Sin(var1[3]);
  t3903 = t3698*t3692;
  t3908 = -1.*t3676*t3749;
  t3913 = t3903 + t3908;
  t3810 = -1.*t3229*t3707;
  t3813 = t3710*t2363;
  t3814 = t3810 + t3813;
  t3785 = t3710*t3229;
  t3786 = t3707*t2363;
  t3787 = t3785 + t3786;
  t3864 = t3707*t3511;
  t3865 = t3710*t3526;
  t3867 = t3864 + t3865;
  t3871 = t3710*t3511;
  t3875 = -1.*t3707*t3526;
  t3876 = t3871 + t3875;
  t3948 = t3718*t3814;
  t3952 = t3699*t3787;
  t3956 = t3948 + t3952;
  t3941 = -1.*t3718*t3808;
  t3942 = t3699*t3834;
  t3945 = t3941 + t3942;
  t3957 = t3699*t3808;
  t3958 = t3718*t3834;
  t3961 = t3957 + t3958;
  t3974 = t3699*t3867;
  t3988 = t3718*t3876;
  t4011 = t3974 + t3988;
  t3963 = t3956*t3961;
  t3937 = t3699*t3814;
  t3939 = -1.*t3718*t3787;
  t3940 = t3937 + t3939;
  t4026 = -1.*t3718*t3867;
  t4034 = t3699*t3876;
  t4035 = t4026 + t4034;
  t4113 = t2798*t3676;
  t4117 = t3698*t3940;
  t4119 = t4113 + t4117;
  t4049 = -1.*t3961*t4011;
  t4121 = t3698*t3945;
  t4137 = t3676*t3058;
  t4144 = t4121 + t4137;
  t4163 = t3676*t3434;
  t4191 = t3698*t4035;
  t4195 = t4163 + t4191;
  t4096 = -1.*t3676*t3945;
  t4097 = t3698*t3058;
  t4106 = t4096 + t4097;
  t4276 = -1.*t2284*t2464;
  t4277 = -1.*t2054*t2558;
  t4278 = t4276 + t4277;
  t4283 = t844*t2642;
  t4284 = -1.*t2464*t1736;
  t4286 = -4.e-6*t2558*t1736;
  t4290 = t4283 + t4284 + t4286;
  t4248 = -1.*t2798*t3058;
  t4261 = t3058*t3692;
  t4206 = t3698*t3434;
  t4208 = -1.*t3676*t4035;
  t4220 = t4206 + t4208;
  t4405 = -1.*t3956*t3961;
  t4067 = t3698*t2798;
  t4071 = -1.*t3676*t3940;
  t4095 = t4067 + t4071;
  t3695 = t3676*t3692;
  t3764 = t3698*t3749;
  t3775 = t3695 + t3764;
  t4413 = t3961*t3893;
  t4693 = -1.*t844*t2642;
  t4706 = t2464*t1736;
  t4734 = 4.e-6*t2558*t1736;
  t4766 = t4693 + t4706 + t4734;
  t4773 = t3426*t2464;
  t4775 = t3421*t2558;
  t4779 = -1.000000000016*t2642*t1736;
  t4780 = t4773 + t4775 + t4779;
  t4625 = -1.*t3058*t3692;
  t4665 = t3058*t3434;
  t4943 = -1.*t3961*t3893;
  t4962 = t3961*t4011;
  p_output1[0]=t3775*var2[0] + (t3893*t3896 - 1.*t3889*t3913)*var2[1] + (t3889*t3893 + t3896*t3913)*var2[2] + ((t3963 + t4095*t4106 + t4119*t4144)*t4195 + t4119*(t4049 - 1.*t4144*t4195 - 1.*t4106*t4220))*var2[3] + ((t3181 + t3940*t3945 + t3963)*t4011 + t3956*(t3532 - 1.*t3945*t4035 + t4049))*var2[4] + (t3434*(t3181 + t3787*t3808 + t3814*t3834) + t2798*(t3532 - 1.*t3808*t3867 - 1.*t3834*t3876))*var2[5] + (-0.15121*t1845 + 0.15121*t1999 + (t2363*t2654 + t3181 + t3229*t3410)*t3434 + t2798*(-1.*t2654*t3511 - 1.*t3410*t3526 + t3532))*var2[6] + (-0.281210000004*t1736 + t3421*t3555 + t2054*t3611 + 4.e-6*(-1.*t3426*t3555 - 1.*t2284*t3611) + 0.038749*t844)*var2[7] - 4.05160619990483e-7*var2[8];
  p_output1[1]=t4195*var2[0] + (t3896*t4011 - 1.*t3889*t4220)*var2[1] + (t3889*t4011 + t3896*t4220)*var2[2] + (t3775*(-1.*t4095*t4106 - 1.*t4119*t4144 + t4405) + t4119*(t3913*t4106 + t3775*t4144 + t4413))*var2[3] + (t3893*(-1.*t3940*t3945 + t4248 + t4405) + t3956*(t3749*t3945 + t4261 + t4413))*var2[4] + (t3692*(-1.*t3787*t3808 - 1.*t3814*t3834 + t4248) + t2798*(t3734*t3808 + t3715*t3834 + t4261))*var2[5] + (0.15121*t3511 - 0.15121*t3526 + t3692*(-1.*t2363*t2654 - 1.*t3229*t3410 + t4248) + t2798*(t1999*t2654 + t1845*t3410 + t4261))*var2[6] + (-0.03874900000062*t1736 + 1.e-6*t3421 + 0.28121*t3426 - 4.e-6*t1736*t4278 + t2054*t4290 + 4.e-6*(t1736*t4278 - 1.*t2284*t4290))*var2[7] + 0.300000000004851*var2[8];
  p_output1[2]=t4119*var2[0] + (t3896*t3956 - 1.*t3889*t4095)*var2[1] + (t3889*t3956 + t3896*t4095)*var2[2] + (t4195*(-1.*t3913*t4106 - 1.*t3775*t4144 + t4943) + t3775*(t4144*t4195 + t4106*t4220 + t4962))*var2[3] + (t4011*(-1.*t3749*t3945 + t4625 + t4943) + t3893*(t3945*t4035 + t4665 + t4962))*var2[4] + (t3434*(-1.*t3734*t3808 - 1.*t3715*t3834 + t4625) + t3692*(t3808*t3867 + t3834*t3876 + t4665))*var2[5] + (0.15121*t2363 - 0.15121*t3229 + t3434*(-1.*t1999*t2654 - 1.*t1845*t3410 + t4625) + t3692*(t2654*t3511 + t3410*t3526 + t4665))*var2[6] + (1.e-6*t2054 + 0.28121*t2284 + t3421*t4766 - 4.e-6*t1736*t4780 + 4.e-6*(-1.*t3426*t4766 + t1736*t4780))*var2[7] - 1.284e-8*var2[8];
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

#include "dh_FlFoot_DiagonalStance2.hh"

namespace DiagonalStance2
{

void dh_FlFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
