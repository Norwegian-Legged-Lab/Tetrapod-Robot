/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:15:10 GMT+01:00
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
  double t343;
  double t349;
  double t446;
  double t96;
  double t106;
  double t138;
  double t178;
  double t205;
  double t209;
  double t1455;
  double t893;
  double t967;
  double t1465;
  double t1204;
  double t1233;
  double t1447;
  double t1532;
  double t1688;
  double t1711;
  double t1913;
  double t2179;
  double t2274;
  double t2413;
  double t2442;
  double t2498;
  double t2550;
  double t2691;
  double t2755;
  double t2756;
  double t2818;
  double t2826;
  double t2849;
  double t2889;
  double t3094;
  double t3254;
  double t3306;
  double t3336;
  double t405;
  double t424;
  double t3356;
  double t3360;
  double t3365;
  double t2038;
  double t2128;
  double t2584;
  double t3002;
  double t3338;
  double t3342;
  double t3662;
  double t3663;
  double t3665;
  double t3667;
  double t3675;
  double t3546;
  double t3557;
  double t3566;
  double t3567;
  double t3578;
  double t3598;
  double t3618;
  double t3366;
  double t3371;
  double t3374;
  double t3379;
  double t3382;
  double t3383;
  double t3384;
  double t3673;
  double t3682;
  double t3688;
  double t3689;
  double t3814;
  double t3817;
  double t3818;
  double t3827;
  double t3828;
  double t3831;
  double t3833;
  double t272;
  double t449;
  double t722;
  double t749;
  double t1254;
  double t1301;
  double t1403;
  double t3929;
  double t3921;
  double t3391;
  double t3396;
  double t3398;
  double t1555;
  double t1932;
  double t2011;
  double t4033;
  double t4049;
  double t4067;
  double t3389;
  double t3784;
  double t4070;
  double t4071;
  double t4072;
  double t4094;
  double t3692;
  double t3696;
  double t3703;
  double t3706;
  double t3708;
  double t3710;
  double t3722;
  double t3732;
  double t4104;
  double t4107;
  double t4109;
  double t4113;
  double t3938;
  double t3925;
  double t3930;
  double t3933;
  double t3919;
  double t3939;
  double t3943;
  double t3949;
  double t3918;
  double t3896;
  double t3907;
  double t3910;
  double t3912;
  double t3884;
  double t3937;
  double t3952;
  double t3954;
  double t4246;
  double t4236;
  double t4237;
  double t4242;
  double t4235;
  double t4247;
  double t4248;
  double t4255;
  double t4097;
  double t4098;
  double t4101;
  double t3986;
  double t3987;
  double t4017;
  double t4126;
  double t4131;
  double t4144;
  double t4173;
  double t4191;
  double t4209;
  double t4333;
  double t4335;
  double t4339;
  double t4325;
  double t4327;
  double t4331;
  double t4340;
  double t4341;
  double t4343;
  double t4352;
  double t4353;
  double t4354;
  double t4350;
  double t4296;
  double t4309;
  double t4324;
  double t4361;
  double t4362;
  double t4366;
  double t4439;
  double t4441;
  double t4442;
  double t4381;
  double t4445;
  double t4451;
  double t4453;
  double t4458;
  double t4466;
  double t4483;
  double t4425;
  double t4427;
  double t4435;
  double t4617;
  double t4618;
  double t4623;
  double t4634;
  double t4643;
  double t4646;
  double t4652;
  double t4526;
  double t4563;
  double t4494;
  double t4497;
  double t4502;
  double t4758;
  double t4417;
  double t4418;
  double t4419;
  double t3914;
  double t3956;
  double t3957;
  double t4763;
  double t4964;
  double t4965;
  double t4967;
  double t4974;
  double t4983;
  double t4991;
  double t5002;
  double t5017;
  double t4931;
  double t4945;
  double t5075;
  double t5100;
  t343 = Cos(var1[7]);
  t349 = -1. + t343;
  t446 = Sin(var1[8]);
  t96 = Cos(var1[8]);
  t106 = -1.*t96;
  t138 = 1. + t106;
  t178 = -1.000000000016*t138;
  t205 = 1. + t178;
  t209 = Sin(var1[7]);
  t1455 = -1. + t96;
  t893 = -1.*t343;
  t967 = 1. + t893;
  t1465 = 1.6e-11*t1455;
  t1204 = -1.000000000016*t967;
  t1233 = 1. + t1204;
  t1447 = 1.6e-11*t138;
  t1532 = 1. + t1447 + t1465;
  t1688 = 4.e-6*t1455;
  t1711 = -4.e-6*t96;
  t1913 = t1688 + t1711;
  t2179 = 5.136e-14*var1[8];
  t2274 = -0.03874900000062*t138;
  t2413 = 5.9484e-7*t1455;
  t2442 = -0.03875*t96;
  t2498 = -0.299999999992*t446;
  t2550 = t2179 + t2274 + t2413 + t2442 + t2498;
  t2691 = -1.284e-8*var1[8];
  t2755 = 1. + t1465;
  t2756 = 0.14871*t2755;
  t2818 = -1.5499600000248e-7*t138;
  t2826 = -1.55e-7*t1455;
  t2849 = -1.199999999968e-6*t446;
  t2889 = t2691 + t2756 + t2818 + t2826 + t2849;
  t3094 = 0.80321*t205;
  t3254 = 0.503210000016051*t138;
  t3306 = -4.05159380016e-7*t446;
  t3336 = t3094 + t3254 + t3306;
  t405 = 1.6e-11*t349;
  t424 = 1. + t405;
  t3356 = 4.e-6*t349*t1532;
  t3360 = t343*t1913;
  t3365 = t3356 + t3360;
  t2038 = 0.281210000008499*t967;
  t2128 = 0.03874900000062*t209;
  t2584 = t209*t2550;
  t3002 = 4.e-6*t209*t2889;
  t3338 = t1233*t3336;
  t3342 = t2038 + t2128 + t2584 + t3002 + t3338;
  t3662 = -1. + t1447;
  t3663 = 4.e-6*t3662;
  t3665 = 4.e-6*t138;
  t3667 = t3663 + t3665;
  t3675 = t1447 + t106;
  t3546 = -1.2484e-7*var1[7];
  t3557 = -1.5499600000248e-7*t967;
  t3566 = 1.124840000016e-6*t209;
  t3567 = 4.e-6*t349*t2550;
  t3578 = t424*t2889;
  t3598 = -4.e-6*t209*t3336;
  t3618 = t3546 + t3557 + t3566 + t3567 + t3578 + t3598;
  t3366 = 4.9936e-13*var1[7];
  t3371 = -0.03874900000062*t967;
  t3374 = 0.281210000004*t209;
  t3379 = t343*t2550;
  t3382 = 4.e-6*t349*t2889;
  t3383 = -1.*t209*t3336;
  t3384 = t3366 + t3371 + t3374 + t3379 + t3382 + t3383;
  t3673 = 4.e-6*t349*t3667;
  t3682 = t343*t3675;
  t3688 = 1.000000000016*t209*t446;
  t3689 = t3673 + t3682 + t3688;
  t3814 = t1913*t2550;
  t3817 = t1532*t2889;
  t3818 = t3814 + t3817;
  t3827 = -1.*t3675*t2550;
  t3828 = -1.*t3667*t2889;
  t3831 = 1.000000000016*t3336*t446;
  t3833 = t3827 + t3828 + t3831;
  t272 = -4.e-6*t205*t209;
  t449 = -4.e-6*t424*t446;
  t722 = -4.e-6*t349*t446;
  t749 = t272 + t449 + t722;
  t1254 = t1233*t205;
  t1301 = -1.000000000016*t209*t446;
  t1403 = t1254 + t1301;
  t3929 = Cos(var1[6]);
  t3921 = Sin(var1[6]);
  t3391 = t424*t1532;
  t3396 = 4.e-6*t349*t1913;
  t3398 = t3391 + t3396;
  t1555 = 4.e-6*t1532*t209;
  t1932 = t1913*t209;
  t2011 = t1555 + t1932;
  t4033 = -1.*t3929;
  t4049 = 1. + t4033;
  t4067 = 0.15121*t4049;
  t3389 = t3365*t3384;
  t3784 = -1.*t3384*t3689;
  t4070 = -0.15121*t3921;
  t4071 = t3921*t3342;
  t4072 = t3929*t3618;
  t4094 = t4067 + t4070 + t4071 + t4072;
  t3692 = 4.e-6*t3667*t209;
  t3696 = t3675*t209;
  t3703 = -1.000000000016*t1233*t446;
  t3706 = t3692 + t3696 + t3703;
  t3708 = t424*t3667;
  t3710 = 4.e-6*t349*t3675;
  t3722 = 4.000000000064e-6*t209*t446;
  t3732 = t3708 + t3710 + t3722;
  t4104 = 0.15121*t3921;
  t4107 = t3929*t3342;
  t4109 = -1.*t3921*t3618;
  t4113 = t4067 + t4104 + t4107 + t4109;
  t3938 = Sin(var1[5]);
  t3925 = -1.*t3921*t749;
  t3930 = t3929*t1403;
  t3933 = t3925 + t3930;
  t3919 = Cos(var1[5]);
  t3939 = t3929*t749;
  t3943 = t3921*t1403;
  t3949 = t3939 + t3943;
  t3918 = Cos(var1[4]);
  t3896 = -1.*t205*t209;
  t3907 = -1.6e-11*t349*t446;
  t3910 = -1.*t343*t446;
  t3912 = t3896 + t3907 + t3910;
  t3884 = Sin(var1[4]);
  t3937 = t3919*t3933;
  t3952 = -1.*t3938*t3949;
  t3954 = t3937 + t3952;
  t4246 = Cos(var1[3]);
  t4236 = t3938*t3933;
  t4237 = t3919*t3949;
  t4242 = t4236 + t4237;
  t4235 = Sin(var1[3]);
  t4247 = t3918*t3912;
  t4248 = -1.*t3884*t3954;
  t4255 = t4247 + t4248;
  t4097 = -1.*t3398*t3921;
  t4098 = t3929*t2011;
  t4101 = t4097 + t4098;
  t3986 = t3929*t3398;
  t3987 = t3921*t2011;
  t4017 = t3986 + t3987;
  t4126 = t3921*t3706;
  t4131 = t3929*t3732;
  t4144 = t4126 + t4131;
  t4173 = t3929*t3706;
  t4191 = -1.*t3921*t3732;
  t4209 = t4173 + t4191;
  t4333 = t3938*t4101;
  t4335 = t3919*t4017;
  t4339 = t4333 + t4335;
  t4325 = -1.*t3938*t4094;
  t4327 = t3919*t4113;
  t4331 = t4325 + t4327;
  t4340 = t3919*t4094;
  t4341 = t3938*t4113;
  t4343 = t4340 + t4341;
  t4352 = t3919*t4144;
  t4353 = t3938*t4209;
  t4354 = t4352 + t4353;
  t4350 = t4339*t4343;
  t4296 = t3919*t4101;
  t4309 = -1.*t3938*t4017;
  t4324 = t4296 + t4309;
  t4361 = -1.*t3938*t4144;
  t4362 = t3919*t4209;
  t4366 = t4361 + t4362;
  t4439 = t3365*t3884;
  t4441 = t3918*t4324;
  t4442 = t4439 + t4441;
  t4381 = -1.*t4343*t4354;
  t4445 = t3918*t4331;
  t4451 = t3884*t3384;
  t4453 = t4445 + t4451;
  t4458 = t3884*t3689;
  t4466 = t3918*t4366;
  t4483 = t4458 + t4466;
  t4425 = -1.*t3884*t4331;
  t4427 = t3918*t3384;
  t4435 = t4425 + t4427;
  t4617 = -1.*t1913*t2550;
  t4618 = -1.*t1532*t2889;
  t4623 = t4617 + t4618;
  t4634 = t205*t3336;
  t4643 = -1.*t2550*t446;
  t4646 = -4.e-6*t2889*t446;
  t4652 = t4634 + t4643 + t4646;
  t4526 = -1.*t3365*t3384;
  t4563 = t3384*t3912;
  t4494 = t3918*t3689;
  t4497 = -1.*t3884*t4366;
  t4502 = t4494 + t4497;
  t4758 = -1.*t4339*t4343;
  t4417 = t3918*t3365;
  t4418 = -1.*t3884*t4324;
  t4419 = t4417 + t4418;
  t3914 = t3884*t3912;
  t3956 = t3918*t3954;
  t3957 = t3914 + t3956;
  t4763 = t4343*t4242;
  t4964 = -1.*t205*t3336;
  t4965 = t2550*t446;
  t4967 = 4.e-6*t2889*t446;
  t4974 = t4964 + t4965 + t4967;
  t4983 = t3675*t2550;
  t4991 = t3667*t2889;
  t5002 = -1.000000000016*t3336*t446;
  t5017 = t4983 + t4991 + t5002;
  t4931 = -1.*t3384*t3912;
  t4945 = t3384*t3689;
  t5075 = -1.*t4343*t4242;
  t5100 = t4343*t4354;
  p_output1[0]=t3957*var2[0] + (t4242*t4246 - 1.*t4235*t4255)*var2[1] + (t4235*t4242 + t4246*t4255)*var2[2] + ((t4350 + t4419*t4435 + t4442*t4453)*t4483 + t4442*(t4381 - 1.*t4453*t4483 - 1.*t4435*t4502))*var2[3] + ((t3389 + t4324*t4331 + t4350)*t4354 + t4339*(t3784 - 1.*t4331*t4366 + t4381))*var2[4] + (t3689*(t3389 + t4017*t4094 + t4101*t4113) + t3365*(t3784 - 1.*t4094*t4144 - 1.*t4113*t4209))*var2[5] + (0.15121*t1403 + (t2011*t3342 + t3389 + t3398*t3618)*t3689 + t3365*(-1.*t3342*t3706 - 1.*t3618*t3732 + t3784) - 0.15121*t749)*var2[6] + (0.038749*t205 + t3667*t3818 + t1532*t3833 + 4.e-6*(-1.*t3675*t3818 - 1.*t1913*t3833) - 0.281210000004*t446)*var2[7] - 4.05160619990483e-7*var2[8];
  p_output1[1]=t4483*var2[0] + (t4246*t4354 - 1.*t4235*t4502)*var2[1] + (t4235*t4354 + t4246*t4502)*var2[2] + (t3957*(-1.*t4419*t4435 - 1.*t4442*t4453 + t4758) + t4442*(t4255*t4435 + t3957*t4453 + t4763))*var2[3] + (t4242*(-1.*t4324*t4331 + t4526 + t4758) + t4339*(t3954*t4331 + t4563 + t4763))*var2[4] + (t3912*(-1.*t4017*t4094 - 1.*t4101*t4113 + t4526) + t3365*(t3949*t4094 + t3933*t4113 + t4563))*var2[5] + (0.15121*t3706 - 0.15121*t3732 + t3912*(-1.*t2011*t3342 - 1.*t3398*t3618 + t4526) + t3365*(t1403*t3342 + t4563 + t3618*t749))*var2[6] + (1.e-6*t3667 + 0.28121*t3675 - 0.03874900000062*t446 - 4.e-6*t446*t4623 + t1532*t4652 + 4.e-6*(t446*t4623 - 1.*t1913*t4652))*var2[7] + 0.300000000004851*var2[8];
  p_output1[2]=t4442*var2[0] + (t4246*t4339 - 1.*t4235*t4419)*var2[1] + (t4235*t4339 + t4246*t4419)*var2[2] + (t4483*(-1.*t4255*t4435 - 1.*t3957*t4453 + t5075) + t3957*(t4453*t4483 + t4435*t4502 + t5100))*var2[3] + (t4354*(-1.*t3954*t4331 + t4931 + t5075) + t4242*(t4331*t4366 + t4945 + t5100))*var2[4] + (t3689*(-1.*t3949*t4094 - 1.*t3933*t4113 + t4931) + t3912*(t4094*t4144 + t4113*t4209 + t4945))*var2[5] + (0.15121*t2011 - 0.15121*t3398 + t3912*(t3342*t3706 + t3618*t3732 + t4945) + t3689*(-1.*t1403*t3342 + t4931 - 1.*t3618*t749))*var2[6] + (1.e-6*t1532 + 0.28121*t1913 + t3667*t4974 - 4.e-6*t446*t5017 + 4.e-6*(-1.*t3675*t4974 + t446*t5017))*var2[7] - 1.284e-8*var2[8];
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
