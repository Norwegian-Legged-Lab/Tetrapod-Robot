/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:37:12 GMT+02:00
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
  double t3653;
  double t1942;
  double t2738;
  double t3656;
  double t3794;
  double t3795;
  double t3796;
  double t3715;
  double t3789;
  double t3798;
  double t3764;
  double t3799;
  double t3700;
  double t2976;
  double t3681;
  double t3685;
  double t3797;
  double t3800;
  double t3802;
  double t3917;
  double t3824;
  double t3825;
  double t3826;
  double t3894;
  double t3838;
  double t3846;
  double t3868;
  double t3873;
  double t3881;
  double t3885;
  double t3904;
  double t3911;
  double t3912;
  double t3918;
  double t3922;
  double t3927;
  double t3936;
  double t3937;
  double t3938;
  double t3942;
  double t3943;
  double t3947;
  double t3961;
  double t3969;
  double t3974;
  double t3869;
  double t3892;
  double t3893;
  double t4196;
  double t4197;
  double t4228;
  double t4240;
  double t4241;
  double t4245;
  double t4246;
  double t4247;
  double t4250;
  double t4251;
  double t4258;
  double t4260;
  double t4261;
  double t4276;
  double t4277;
  double t4278;
  double t4206;
  double t4212;
  double t4215;
  double t4264;
  double t4267;
  double t4282;
  double t4288;
  double t4289;
  double t4291;
  double t4293;
  double t4299;
  double t4301;
  double t4268;
  double t4279;
  double t4280;
  double t4292;
  double t4306;
  double t4312;
  double t4318;
  double t4337;
  double t4338;
  double t3714;
  double t3814;
  double t3823;
  double t4281;
  double t4349;
  double t4413;
  double t4455;
  double t4496;
  double t4506;
  double t4621;
  double t4638;
  t3653 = Cos(var1[10]);
  t1942 = Cos(var1[11]);
  t2738 = Sin(var1[10]);
  t3656 = Sin(var1[11]);
  t3794 = -1.*t3653*t1942;
  t3795 = -1.*t2738*t3656;
  t3796 = t3794 + t3795;
  t3715 = Cos(var1[4]);
  t3789 = Cos(var1[5]);
  t3798 = Sin(var1[9]);
  t3764 = Cos(var1[9]);
  t3799 = Sin(var1[5]);
  t3700 = Sin(var1[4]);
  t2976 = -1.*t1942*t2738;
  t3681 = t3653*t3656;
  t3685 = t2976 + t3681;
  t3797 = t3764*t3789*t3796;
  t3800 = -1.*t3798*t3796*t3799;
  t3802 = t3797 + t3800;
  t3917 = Sin(var1[3]);
  t3824 = t3789*t3798;
  t3825 = t3764*t3799;
  t3826 = t3824 + t3825;
  t3894 = Cos(var1[3]);
  t3838 = t3653*t1942;
  t3846 = t2738*t3656;
  t3868 = t3838 + t3846;
  t3873 = t3764*t3789*t3685;
  t3881 = -1.*t3798*t3685*t3799;
  t3885 = t3873 + t3881;
  t3904 = t3789*t3798*t3796;
  t3911 = t3764*t3796*t3799;
  t3912 = t3904 + t3911;
  t3918 = t3715*t3685;
  t3922 = -1.*t3700*t3802;
  t3927 = t3918 + t3922;
  t3936 = -1.*t3764*t3789;
  t3937 = t3798*t3799;
  t3938 = t3936 + t3937;
  t3942 = t3789*t3798*t3685;
  t3943 = t3764*t3685*t3799;
  t3947 = t3942 + t3943;
  t3961 = t3715*t3868;
  t3969 = -1.*t3700*t3885;
  t3974 = t3961 + t3969;
  t3869 = t3868*t3700;
  t3892 = t3715*t3885;
  t3893 = t3869 + t3892;
  t4196 = -1.*t3764;
  t4197 = 1. + t4196;
  t4228 = -1.*t3653;
  t4240 = 1. + t4228;
  t4241 = -0.28121*t4240;
  t4245 = -1.*t1942;
  t4246 = 1. + t4245;
  t4247 = -0.50321*t4246;
  t4250 = -0.19821*t1942;
  t4251 = t4247 + t4250;
  t4258 = t3653*t4251;
  t4260 = 0.305*t2738*t3656;
  t4261 = t4241 + t4258 + t4260;
  t4276 = -0.15121*t4197;
  t4277 = t3764*t4261;
  t4278 = t4276 + t4277;
  t4206 = 0.15121*t4197;
  t4212 = 0.15121*t3764;
  t4215 = 0.15121*t3798;
  t4264 = t3798*t4261;
  t4267 = t4206 + t4212 + t4215 + t4264;
  t4282 = 0.28121*t2738;
  t4288 = t4251*t2738;
  t4289 = -0.305*t3653*t3656;
  t4291 = t4282 + t4288 + t4289;
  t4293 = t3789*t4278;
  t4299 = -1.*t4267*t3799;
  t4301 = t4293 + t4299;
  t4268 = t3789*t4267;
  t4279 = t4278*t3799;
  t4280 = t4268 + t4279;
  t4292 = t4291*t3700;
  t4306 = t3715*t4301;
  t4312 = t4292 + t4306;
  t4318 = t3715*t4291;
  t4337 = -1.*t3700*t4301;
  t4338 = t4318 + t4337;
  t3714 = t3685*t3700;
  t3814 = t3715*t3802;
  t3823 = t3714 + t3814;
  t4281 = -1.*t3938*t4280;
  t4349 = t3947*t4280;
  t4413 = -1.*t3947*t4280;
  t4455 = t3912*t4280;
  t4496 = t3938*t4280;
  t4506 = -1.*t3912*t4280;
  t4621 = -1.*t4291*t3868;
  t4638 = t4291*t3685;
  p_output1[0]=t3823;
  p_output1[1]=t3715*t3826;
  p_output1[2]=t3893;
  p_output1[3]=t3894*t3912 - 1.*t3917*t3927;
  p_output1[4]=t3700*t3826*t3917 + t3894*t3938;
  p_output1[5]=t3894*t3947 - 1.*t3917*t3974;
  p_output1[6]=t3912*t3917 + t3894*t3927;
  p_output1[7]=-1.*t3700*t3826*t3894 + t3917*t3938;
  p_output1[8]=t3917*t3947 + t3894*t3974;
  p_output1[9]=t3893*(t4281 - 1.*t3715*t3826*t4312 + t3700*t3826*t4338) + t3715*t3826*(t3893*t4312 + t3974*t4338 + t4349);
  p_output1[10]=t3823*(-1.*t3893*t4312 - 1.*t3974*t4338 + t4413) + t3893*(t3823*t4312 + t3927*t4338 + t4455);
  p_output1[11]=t3823*(t3715*t3826*t4312 - 1.*t3700*t3826*t4338 + t4496) + t3715*t3826*(-1.*t3823*t4312 - 1.*t3927*t4338 + t4506);
  p_output1[12]=t3947*(t4281 - 1.*t3826*t4301) + t3938*(t3868*t4291 + t3885*t4301 + t4349);
  p_output1[13]=t3912*(-1.*t3885*t4301 + t4413 + t4621) + t3947*(t3802*t4301 + t4455 + t4638);
  p_output1[14]=t3912*(t3826*t4301 + t4496) + t3938*(-1.*t3685*t4291 - 1.*t3802*t4301 + t4506);
  p_output1[15]=t3868*(t3764*t4267 - 1.*t3798*t4278);
  p_output1[16]=t3685*(-1.*t3685*t3798*t4267 - 1.*t3685*t3764*t4278 + t4621) + t3868*(t3796*t3798*t4267 + t3764*t3796*t4278 + t4638);
  p_output1[17]=t3685*(-1.*t3764*t4267 + t3798*t4278);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0.15121*t3796 + 0.15121*t3868;
  p_output1[28]=-0.15121 + t3685*(-1.*t3685*t4261 + t4621) + t3868*(t3796*t4261 + t4638);
  p_output1[29]=0;
  p_output1[30]=0.28121*t3656 - 0.305*t1942*t3656 + t3656*t4251;
  p_output1[31]=0;
  p_output1[32]=0.28121*t1942 + 0.305*Power(t3656,2) + t1942*t4251;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=-0.305;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_RlFoot_DiagonalStance.hh"

namespace SymFunction
{

void Jh_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
