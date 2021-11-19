/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:32:12 GMT+01:00
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
  double t1131;
  double t1148;
  double t1261;
  double t81;
  double t224;
  double t292;
  double t466;
  double t590;
  double t630;
  double t2699;
  double t1402;
  double t1802;
  double t2714;
  double t2137;
  double t2367;
  double t2667;
  double t2718;
  double t3029;
  double t3119;
  double t3161;
  double t3450;
  double t3452;
  double t3471;
  double t3472;
  double t3474;
  double t3476;
  double t3481;
  double t3486;
  double t3488;
  double t3511;
  double t3516;
  double t3529;
  double t3532;
  double t3540;
  double t3545;
  double t3549;
  double t3550;
  double t1235;
  double t1246;
  double t3706;
  double t3707;
  double t3718;
  double t3432;
  double t3446;
  double t3479;
  double t3539;
  double t3558;
  double t3693;
  double t3843;
  double t3844;
  double t3873;
  double t3891;
  double t3907;
  double t3811;
  double t3818;
  double t3820;
  double t3821;
  double t3824;
  double t3827;
  double t3829;
  double t3725;
  double t3743;
  double t3758;
  double t3767;
  double t3778;
  double t3785;
  double t3787;
  double t3904;
  double t3922;
  double t3935;
  double t3937;
  double t4041;
  double t4045;
  double t4052;
  double t4089;
  double t4090;
  double t4093;
  double t4096;
  double t990;
  double t1263;
  double t1264;
  double t1345;
  double t2418;
  double t2463;
  double t2601;
  double t4183;
  double t4155;
  double t3795;
  double t3802;
  double t3807;
  double t2754;
  double t3251;
  double t3403;
  double t4301;
  double t4304;
  double t4317;
  double t3789;
  double t3974;
  double t4318;
  double t4320;
  double t4321;
  double t4347;
  double t3942;
  double t3946;
  double t3947;
  double t3949;
  double t3962;
  double t3965;
  double t3969;
  double t3971;
  double t4414;
  double t4424;
  double t4432;
  double t4434;
  double t4269;
  double t4181;
  double t4214;
  double t4243;
  double t4137;
  double t4271;
  double t4273;
  double t4282;
  double t4135;
  double t4116;
  double t4119;
  double t4127;
  double t4131;
  double t4115;
  double t4248;
  double t4283;
  double t4286;
  double t4547;
  double t4501;
  double t4505;
  double t4521;
  double t4493;
  double t4557;
  double t4579;
  double t4580;
  double t4362;
  double t4394;
  double t4402;
  double t4291;
  double t4292;
  double t4297;
  double t4445;
  double t4452;
  double t4453;
  double t4460;
  double t4465;
  double t4466;
  double t4625;
  double t4626;
  double t4627;
  double t4612;
  double t4613;
  double t4620;
  double t4631;
  double t4639;
  double t4649;
  double t4680;
  double t4681;
  double t4684;
  double t4661;
  double t4608;
  double t4609;
  double t4611;
  double t4689;
  double t4698;
  double t4699;
  double t4807;
  double t4816;
  double t4818;
  double t4702;
  double t4820;
  double t4821;
  double t4837;
  double t4857;
  double t4860;
  double t4862;
  double t4740;
  double t4762;
  double t4772;
  double t4991;
  double t5003;
  double t5005;
  double t5014;
  double t5015;
  double t5026;
  double t5046;
  double t4952;
  double t4961;
  double t4903;
  double t4917;
  double t4919;
  double t5115;
  double t4718;
  double t4727;
  double t4732;
  double t4133;
  double t4287;
  double t4288;
  double t5137;
  double t5380;
  double t5384;
  double t5385;
  double t5388;
  double t5391;
  double t5397;
  double t5399;
  double t5402;
  double t5294;
  double t5304;
  double t5464;
  double t5474;
  t1131 = Cos(var1[7]);
  t1148 = -1. + t1131;
  t1261 = Sin(var1[8]);
  t81 = Cos(var1[8]);
  t224 = -1.*t81;
  t292 = 1. + t224;
  t466 = -1.000000000016*t292;
  t590 = 1. + t466;
  t630 = Sin(var1[7]);
  t2699 = -1. + t81;
  t1402 = -1.*t1131;
  t1802 = 1. + t1402;
  t2714 = 1.6e-11*t2699;
  t2137 = -1.000000000016*t1802;
  t2367 = 1. + t2137;
  t2667 = 1.6e-11*t292;
  t2718 = 1. + t2667 + t2714;
  t3029 = 4.e-6*t2699;
  t3119 = -4.e-6*t81;
  t3161 = t3029 + t3119;
  t3450 = 5.136e-14*var1[8];
  t3452 = -0.03874900000062*t292;
  t3471 = 5.9484e-7*t2699;
  t3472 = -0.03875*t81;
  t3474 = -0.299999999992*t1261;
  t3476 = t3450 + t3452 + t3471 + t3472 + t3474;
  t3481 = -1.284e-8*var1[8];
  t3486 = 1. + t2714;
  t3488 = 0.14871*t3486;
  t3511 = -1.5499600000248e-7*t292;
  t3516 = -1.55e-7*t2699;
  t3529 = -1.199999999968e-6*t1261;
  t3532 = t3481 + t3488 + t3511 + t3516 + t3529;
  t3540 = 0.80321*t590;
  t3545 = 0.503210000016051*t292;
  t3549 = -4.05159380016e-7*t1261;
  t3550 = t3540 + t3545 + t3549;
  t1235 = 1.6e-11*t1148;
  t1246 = 1. + t1235;
  t3706 = 4.e-6*t1148*t2718;
  t3707 = t1131*t3161;
  t3718 = t3706 + t3707;
  t3432 = 0.281210000008499*t1802;
  t3446 = 0.03874900000062*t630;
  t3479 = t630*t3476;
  t3539 = 4.e-6*t630*t3532;
  t3558 = t2367*t3550;
  t3693 = t3432 + t3446 + t3479 + t3539 + t3558;
  t3843 = -1. + t2667;
  t3844 = 4.e-6*t3843;
  t3873 = 4.e-6*t292;
  t3891 = t3844 + t3873;
  t3907 = t2667 + t224;
  t3811 = -1.2484e-7*var1[7];
  t3818 = -1.5499600000248e-7*t1802;
  t3820 = 1.124840000016e-6*t630;
  t3821 = 4.e-6*t1148*t3476;
  t3824 = t1246*t3532;
  t3827 = -4.e-6*t630*t3550;
  t3829 = t3811 + t3818 + t3820 + t3821 + t3824 + t3827;
  t3725 = 4.9936e-13*var1[7];
  t3743 = -0.03874900000062*t1802;
  t3758 = 0.281210000004*t630;
  t3767 = t1131*t3476;
  t3778 = 4.e-6*t1148*t3532;
  t3785 = -1.*t630*t3550;
  t3787 = t3725 + t3743 + t3758 + t3767 + t3778 + t3785;
  t3904 = 4.e-6*t1148*t3891;
  t3922 = t1131*t3907;
  t3935 = 1.000000000016*t630*t1261;
  t3937 = t3904 + t3922 + t3935;
  t4041 = t3161*t3476;
  t4045 = t2718*t3532;
  t4052 = t4041 + t4045;
  t4089 = -1.*t3907*t3476;
  t4090 = -1.*t3891*t3532;
  t4093 = 1.000000000016*t3550*t1261;
  t4096 = t4089 + t4090 + t4093;
  t990 = -4.e-6*t590*t630;
  t1263 = -4.e-6*t1246*t1261;
  t1264 = -4.e-6*t1148*t1261;
  t1345 = t990 + t1263 + t1264;
  t2418 = t2367*t590;
  t2463 = -1.000000000016*t630*t1261;
  t2601 = t2418 + t2463;
  t4183 = Cos(var1[6]);
  t4155 = Sin(var1[6]);
  t3795 = t1246*t2718;
  t3802 = 4.e-6*t1148*t3161;
  t3807 = t3795 + t3802;
  t2754 = 4.e-6*t2718*t630;
  t3251 = t3161*t630;
  t3403 = t2754 + t3251;
  t4301 = -1.*t4183;
  t4304 = 1. + t4301;
  t4317 = 0.15121*t4304;
  t3789 = t3718*t3787;
  t3974 = -1.*t3787*t3937;
  t4318 = -0.15121*t4155;
  t4320 = t4155*t3693;
  t4321 = t4183*t3829;
  t4347 = t4317 + t4318 + t4320 + t4321;
  t3942 = 4.e-6*t3891*t630;
  t3946 = t3907*t630;
  t3947 = -1.000000000016*t2367*t1261;
  t3949 = t3942 + t3946 + t3947;
  t3962 = t1246*t3891;
  t3965 = 4.e-6*t1148*t3907;
  t3969 = 4.000000000064e-6*t630*t1261;
  t3971 = t3962 + t3965 + t3969;
  t4414 = 0.15121*t4155;
  t4424 = t4183*t3693;
  t4432 = -1.*t4155*t3829;
  t4434 = t4317 + t4414 + t4424 + t4432;
  t4269 = Sin(var1[5]);
  t4181 = -1.*t4155*t1345;
  t4214 = t4183*t2601;
  t4243 = t4181 + t4214;
  t4137 = Cos(var1[5]);
  t4271 = t4183*t1345;
  t4273 = t4155*t2601;
  t4282 = t4271 + t4273;
  t4135 = Cos(var1[4]);
  t4116 = -1.*t590*t630;
  t4119 = -1.6e-11*t1148*t1261;
  t4127 = -1.*t1131*t1261;
  t4131 = t4116 + t4119 + t4127;
  t4115 = Sin(var1[4]);
  t4248 = t4137*t4243;
  t4283 = -1.*t4269*t4282;
  t4286 = t4248 + t4283;
  t4547 = Cos(var1[3]);
  t4501 = t4269*t4243;
  t4505 = t4137*t4282;
  t4521 = t4501 + t4505;
  t4493 = Sin(var1[3]);
  t4557 = t4135*t4131;
  t4579 = -1.*t4115*t4286;
  t4580 = t4557 + t4579;
  t4362 = -1.*t3807*t4155;
  t4394 = t4183*t3403;
  t4402 = t4362 + t4394;
  t4291 = t4183*t3807;
  t4292 = t4155*t3403;
  t4297 = t4291 + t4292;
  t4445 = t4155*t3949;
  t4452 = t4183*t3971;
  t4453 = t4445 + t4452;
  t4460 = t4183*t3949;
  t4465 = -1.*t4155*t3971;
  t4466 = t4460 + t4465;
  t4625 = t4269*t4402;
  t4626 = t4137*t4297;
  t4627 = t4625 + t4626;
  t4612 = -1.*t4269*t4347;
  t4613 = t4137*t4434;
  t4620 = t4612 + t4613;
  t4631 = t4137*t4347;
  t4639 = t4269*t4434;
  t4649 = t4631 + t4639;
  t4680 = t4137*t4453;
  t4681 = t4269*t4466;
  t4684 = t4680 + t4681;
  t4661 = t4627*t4649;
  t4608 = t4137*t4402;
  t4609 = -1.*t4269*t4297;
  t4611 = t4608 + t4609;
  t4689 = -1.*t4269*t4453;
  t4698 = t4137*t4466;
  t4699 = t4689 + t4698;
  t4807 = t3718*t4115;
  t4816 = t4135*t4611;
  t4818 = t4807 + t4816;
  t4702 = -1.*t4649*t4684;
  t4820 = t4135*t4620;
  t4821 = t4115*t3787;
  t4837 = t4820 + t4821;
  t4857 = t4115*t3937;
  t4860 = t4135*t4699;
  t4862 = t4857 + t4860;
  t4740 = -1.*t4115*t4620;
  t4762 = t4135*t3787;
  t4772 = t4740 + t4762;
  t4991 = -1.*t3161*t3476;
  t5003 = -1.*t2718*t3532;
  t5005 = t4991 + t5003;
  t5014 = t590*t3550;
  t5015 = -1.*t3476*t1261;
  t5026 = -4.e-6*t3532*t1261;
  t5046 = t5014 + t5015 + t5026;
  t4952 = -1.*t3718*t3787;
  t4961 = t3787*t4131;
  t4903 = t4135*t3937;
  t4917 = -1.*t4115*t4699;
  t4919 = t4903 + t4917;
  t5115 = -1.*t4627*t4649;
  t4718 = t4135*t3718;
  t4727 = -1.*t4115*t4611;
  t4732 = t4718 + t4727;
  t4133 = t4115*t4131;
  t4287 = t4135*t4286;
  t4288 = t4133 + t4287;
  t5137 = t4649*t4521;
  t5380 = -1.*t590*t3550;
  t5384 = t3476*t1261;
  t5385 = 4.e-6*t3532*t1261;
  t5388 = t5380 + t5384 + t5385;
  t5391 = t3907*t3476;
  t5397 = t3891*t3532;
  t5399 = -1.000000000016*t3550*t1261;
  t5402 = t5391 + t5397 + t5399;
  t5294 = -1.*t3787*t4131;
  t5304 = t3787*t3937;
  t5464 = -1.*t4649*t4521;
  t5474 = t4649*t4684;
  p_output1[0]=t4288*var2[0] + (t4521*t4547 - 1.*t4493*t4580)*var2[1] + (t4493*t4521 + t4547*t4580)*var2[2] + ((t4661 + t4732*t4772 + t4818*t4837)*t4862 + t4818*(t4702 - 1.*t4837*t4862 - 1.*t4772*t4919))*var2[3] + ((t3789 + t4611*t4620 + t4661)*t4684 + t4627*(t3974 - 1.*t4620*t4699 + t4702))*var2[4] + (t3937*(t3789 + t4297*t4347 + t4402*t4434) + t3718*(t3974 - 1.*t4347*t4453 - 1.*t4434*t4466))*var2[5] + (-0.15121*t1345 + 0.15121*t2601 + (t3403*t3693 + t3789 + t3807*t3829)*t3937 + t3718*(-1.*t3693*t3949 - 1.*t3829*t3971 + t3974))*var2[6] + (-0.281210000004*t1261 + t3891*t4052 + t2718*t4096 + 4.e-6*(-1.*t3907*t4052 - 1.*t3161*t4096) + 0.038749*t590)*var2[7] - 4.05160619990483e-7*var2[8];
  p_output1[1]=t4862*var2[0] + (t4547*t4684 - 1.*t4493*t4919)*var2[1] + (t4493*t4684 + t4547*t4919)*var2[2] + (t4288*(-1.*t4732*t4772 - 1.*t4818*t4837 + t5115) + t4818*(t4580*t4772 + t4288*t4837 + t5137))*var2[3] + (t4521*(-1.*t4611*t4620 + t4952 + t5115) + t4627*(t4286*t4620 + t4961 + t5137))*var2[4] + (t4131*(-1.*t4297*t4347 - 1.*t4402*t4434 + t4952) + t3718*(t4282*t4347 + t4243*t4434 + t4961))*var2[5] + (0.15121*t3949 - 0.15121*t3971 + t4131*(-1.*t3403*t3693 - 1.*t3807*t3829 + t4952) + t3718*(t2601*t3693 + t1345*t3829 + t4961))*var2[6] + (-0.03874900000062*t1261 + 1.e-6*t3891 + 0.28121*t3907 - 4.e-6*t1261*t5005 + t2718*t5046 + 4.e-6*(t1261*t5005 - 1.*t3161*t5046))*var2[7] + 0.300000000004851*var2[8];
  p_output1[2]=t4818*var2[0] + (t4547*t4627 - 1.*t4493*t4732)*var2[1] + (t4493*t4627 + t4547*t4732)*var2[2] + (t4862*(-1.*t4580*t4772 - 1.*t4288*t4837 + t5464) + t4288*(t4837*t4862 + t4772*t4919 + t5474))*var2[3] + (t4684*(-1.*t4286*t4620 + t5294 + t5464) + t4521*(t4620*t4699 + t5304 + t5474))*var2[4] + (t3937*(-1.*t4282*t4347 - 1.*t4243*t4434 + t5294) + t4131*(t4347*t4453 + t4434*t4466 + t5304))*var2[5] + (0.15121*t3403 - 0.15121*t3807 + t3937*(-1.*t2601*t3693 - 1.*t1345*t3829 + t5294) + t4131*(t3693*t3949 + t3829*t3971 + t5304))*var2[6] + (1.e-6*t2718 + 0.28121*t3161 + t3891*t5388 - 4.e-6*t1261*t5402 + 4.e-6*(-1.*t3907*t5388 + t1261*t5402))*var2[7] - 1.284e-8*var2[8];
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

#include "dh_FlFoot_ParallelStance2.hh"

namespace ParallelStance2
{

void dh_FlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
