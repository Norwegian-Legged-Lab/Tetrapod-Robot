/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:49:40 GMT+02:00
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
  double t3070;
  double t3007;
  double t3009;
  double t3073;
  double t3341;
  double t3372;
  double t3385;
  double t3287;
  double t3474;
  double t3271;
  double t3522;
  double t3102;
  double t3015;
  double t3074;
  double t3075;
  double t3089;
  double t3386;
  double t3534;
  double t3538;
  double t3606;
  double t3576;
  double t3592;
  double t3600;
  double t3565;
  double t3611;
  double t3636;
  double t3642;
  double t3692;
  double t3701;
  double t3715;
  double t3734;
  double t3735;
  double t3772;
  double t3775;
  double t3777;
  double t3782;
  double t3785;
  double t3791;
  double t3793;
  double t3808;
  double t3810;
  double t3813;
  double t3817;
  double t3960;
  double t3971;
  double t3998;
  double t3745;
  double t3746;
  double t3769;
  double t3821;
  double t3897;
  double t4066;
  double t4104;
  double t4110;
  double t4117;
  double t4123;
  double t4129;
  double t4131;
  double t4136;
  double t4139;
  double t4143;
  double t3953;
  double t4004;
  double t4005;
  double t3687;
  double t3719;
  double t3721;
  double t3723;
  double t3725;
  double t3727;
  double t4135;
  double t4193;
  double t4208;
  double t4261;
  double t4266;
  double t4278;
  double t4398;
  double t4433;
  double t4439;
  double t3731;
  double t3732;
  double t3733;
  double t4065;
  double t4457;
  double t3097;
  double t3541;
  double t3558;
  double t4478;
  double t4481;
  double t4483;
  double t4790;
  double t4802;
  double t4833;
  double t4852;
  double t5005;
  double t5033;
  t3070 = Cos(var1[13]);
  t3007 = Cos(var1[14]);
  t3009 = Sin(var1[13]);
  t3073 = Sin(var1[14]);
  t3341 = t3070*t3007;
  t3372 = t3009*t3073;
  t3385 = t3341 + t3372;
  t3287 = Cos(var1[5]);
  t3474 = Sin(var1[12]);
  t3271 = Cos(var1[12]);
  t3522 = Sin(var1[5]);
  t3102 = Cos(var1[4]);
  t3015 = -1.*t3007*t3009;
  t3074 = t3070*t3073;
  t3075 = t3015 + t3074;
  t3089 = Sin(var1[4]);
  t3386 = t3271*t3287*t3385;
  t3534 = -1.*t3474*t3385*t3522;
  t3538 = t3386 + t3534;
  t3606 = Sin(var1[3]);
  t3576 = t3287*t3474*t3385;
  t3592 = t3271*t3385*t3522;
  t3600 = t3576 + t3592;
  t3565 = Cos(var1[3]);
  t3611 = t3102*t3075;
  t3636 = -1.*t3089*t3538;
  t3642 = t3611 + t3636;
  t3692 = t3007*t3009;
  t3701 = -1.*t3070*t3073;
  t3715 = t3692 + t3701;
  t3734 = -1.*t3271;
  t3735 = 1. + t3734;
  t3772 = -1.*t3070;
  t3775 = 1. + t3772;
  t3777 = 0.28121*t3775;
  t3782 = -1.*t3007;
  t3785 = 1. + t3782;
  t3791 = 0.50321*t3785;
  t3793 = 0.19821*t3007;
  t3808 = t3791 + t3793;
  t3810 = t3070*t3808;
  t3813 = -0.305*t3009*t3073;
  t3817 = t3777 + t3810 + t3813;
  t3960 = 0.15121*t3735;
  t3971 = t3271*t3817;
  t3998 = t3960 + t3971;
  t3745 = -0.15121*t3735;
  t3746 = -0.15121*t3271;
  t3769 = -0.15121*t3474;
  t3821 = t3474*t3817;
  t3897 = t3745 + t3746 + t3769 + t3821;
  t4066 = -1.*t3287*t3474;
  t4104 = -1.*t3271*t3522;
  t4110 = t4066 + t4104;
  t4117 = 0.28121*t3009;
  t4123 = -1.*t3808*t3009;
  t4129 = -0.305*t3070*t3073;
  t4131 = t4117 + t4123 + t4129;
  t4136 = t3287*t3998;
  t4139 = -1.*t3897*t3522;
  t4143 = t4136 + t4139;
  t3953 = t3287*t3897;
  t4004 = t3998*t3522;
  t4005 = t3953 + t4004;
  t3687 = t3385*t3089;
  t3719 = t3271*t3287*t3715;
  t3721 = -1.*t3474*t3715*t3522;
  t3723 = t3719 + t3721;
  t3725 = t3102*t3723;
  t3727 = t3687 + t3725;
  t4135 = t4131*t3089;
  t4193 = t3102*t4143;
  t4208 = t4135 + t4193;
  t4261 = t3102*t4131;
  t4266 = -1.*t3089*t4143;
  t4278 = t4261 + t4266;
  t4398 = t3287*t3474*t3715;
  t4433 = t3271*t3715*t3522;
  t4439 = t4398 + t4433;
  t3731 = t3271*t3287;
  t3732 = -1.*t3474*t3522;
  t3733 = t3731 + t3732;
  t4065 = -1.*t3733*t4005;
  t4457 = t4439*t4005;
  t3097 = t3075*t3089;
  t3541 = t3102*t3538;
  t3558 = t3097 + t3541;
  t4478 = t3102*t3385;
  t4481 = -1.*t3089*t3723;
  t4483 = t4478 + t4481;
  t4790 = -1.*t4439*t4005;
  t4802 = t3600*t4005;
  t4833 = -1.*t4131*t3385;
  t4852 = t4131*t3075;
  t5005 = t3733*t4005;
  t5033 = -1.*t3600*t4005;
  p_output1[0]=t3558;
  p_output1[1]=t3565*t3600 - 1.*t3606*t3642;
  p_output1[2]=t3600*t3606 + t3565*t3642;
  p_output1[3]=t3727*(t4065 - 1.*t3102*t4110*t4208 + t3089*t4110*t4278) + t3102*t4110*(t3727*t4208 + t4457 + t4278*t4483);
  p_output1[4]=(t4065 - 1.*t4110*t4143)*t4439 + t3733*(t3385*t4131 + t3723*t4143 + t4457);
  p_output1[5]=t3385*(-1.*t3271*t3897 + t3474*t3998);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0.28121*t3073 - 0.305*t3007*t3073 - 1.*t3073*t3808;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t3102*t4110;
  p_output1[19]=t3565*t3733 + t3089*t3606*t4110;
  p_output1[20]=t3606*t3733 - 1.*t3089*t3565*t4110;
  p_output1[21]=t3558*(-1.*t3727*t4208 - 1.*t4278*t4483 + t4790) + t3727*(t3558*t4208 + t3642*t4278 + t4802);
  p_output1[22]=t3600*(-1.*t3723*t4143 + t4790 + t4833) + t4439*(t3538*t4143 + t4802 + t4852);
  p_output1[23]=t3075*(-1.*t3474*t3715*t3897 - 1.*t3271*t3715*t3998 + t4833) + t3385*(t3385*t3474*t3897 + t3271*t3385*t3998 + t4852);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.15121 + t3075*(-1.*t3715*t3817 + t4833) + t3385*(t3385*t3817 + t4852);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t3727;
  p_output1[37]=t3565*t4439 - 1.*t3606*t4483;
  p_output1[38]=t3606*t4439 + t3565*t4483;
  p_output1[39]=t3558*(t3102*t4110*t4208 - 1.*t3089*t4110*t4278 + t5005) + t3102*t4110*(-1.*t3558*t4208 - 1.*t3642*t4278 + t5033);
  p_output1[40]=t3600*(t4110*t4143 + t5005) + t3733*(-1.*t3075*t4131 - 1.*t3538*t4143 + t5033);
  p_output1[41]=t3075*(t3271*t3897 - 1.*t3474*t3998);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.15121*t3075 - 0.15121*t3715;
  p_output1[49]=0.28121*t3007 + 0.305*Power(t3073,2) - 1.*t3007*t3808;
  p_output1[50]=-0.305;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fFrFoot_map_ParallelStance.hh"

namespace SymFunction
{

void fFrFoot_map_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
