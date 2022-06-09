/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 14:40:46 GMT+02:00
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
  double t3927;
  double t3924;
  double t3929;
  double t4060;
  double t4050;
  double t4055;
  double t4061;
  double t3915;
  double t4059;
  double t4062;
  double t4064;
  double t3934;
  double t4070;
  double t4071;
  double t4074;
  double t4066;
  double t4096;
  double t4098;
  double t4075;
  double t4076;
  double t4077;
  double t4086;
  double t4087;
  double t4088;
  double t4089;
  double t4090;
  double t4091;
  double t4100;
  double t4101;
  double t4104;
  double t4111;
  double t4112;
  double t4113;
  double t4115;
  double t4117;
  double t4118;
  double t4123;
  double t4124;
  double t4126;
  double t4128;
  double t4129;
  double t4134;
  double t4065;
  double t4080;
  double t4081;
  double t4184;
  double t4185;
  double t4187;
  double t4192;
  double t4200;
  double t4201;
  double t4202;
  double t4203;
  double t4207;
  double t3926;
  double t4035;
  double t4048;
  double t4182;
  double t4188;
  double t4208;
  double t4209;
  double t4213;
  double t4214;
  double t4215;
  double t4216;
  double t4218;
  double t4222;
  double t4166;
  double t4167;
  double t4176;
  double t4177;
  double t4210;
  double t4211;
  double t4228;
  double t4229;
  double t4230;
  double t4234;
  double t4235;
  double t4236;
  double t4212;
  double t4223;
  double t4224;
  double t4231;
  double t4237;
  double t4238;
  double t4242;
  double t4243;
  double t4244;
  double t4085;
  double t4092;
  double t4093;
  double t4226;
  double t4248;
  double t4258;
  double t4263;
  double t4270;
  double t4275;
  double t4306;
  double t4310;
  double t4284;
  double t4288;
  double t4299;
  double t4294;
  double t4361;
  double t4350;
  t3927 = Cos(var1[12]);
  t3924 = Sin(var1[4]);
  t3929 = Cos(var1[4]);
  t4060 = Cos(var1[13]);
  t4050 = Cos(var1[14]);
  t4055 = Sin(var1[13]);
  t4061 = Sin(var1[14]);
  t3915 = Sin(var1[12]);
  t4059 = t4050*t4055;
  t4062 = -1.*t4060*t4061;
  t4064 = t4059 + t4062;
  t3934 = Sin(var1[5]);
  t4070 = t4060*t4050;
  t4071 = t4055*t4061;
  t4074 = t4070 + t4071;
  t4066 = Cos(var1[5]);
  t4096 = Cos(var1[3]);
  t4098 = Sin(var1[3]);
  t4075 = t4066*t4074;
  t4076 = t3915*t4064*t3934;
  t4077 = t4075 + t4076;
  t4086 = -1.*t4050*t4055;
  t4087 = t4060*t4061;
  t4088 = t4086 + t4087;
  t4089 = t4066*t4088;
  t4090 = t3915*t4074*t3934;
  t4091 = t4089 + t4090;
  t4100 = t3929*t3915;
  t4101 = t3927*t3924*t3934;
  t4104 = t4100 + t4101;
  t4111 = -1.*t4066*t3915*t4064;
  t4112 = t4074*t3934;
  t4113 = t4111 + t4112;
  t4115 = t3927*t3929*t4064;
  t4117 = -1.*t3924*t4077;
  t4118 = t4115 + t4117;
  t4123 = -1.*t4066*t3915*t4074;
  t4124 = t4088*t3934;
  t4126 = t4123 + t4124;
  t4128 = t3927*t3929*t4074;
  t4129 = -1.*t3924*t4091;
  t4134 = t4128 + t4129;
  t4065 = t3927*t4064*t3924;
  t4080 = t3929*t4077;
  t4081 = t4065 + t4080;
  t4184 = -0.0641*t4050;
  t4185 = -0.28*t4061;
  t4187 = t4184 + t4185;
  t4192 = -1.*t4050;
  t4200 = 1. + t4192;
  t4201 = 0.075*t4200;
  t4202 = 0.355*t4050;
  t4203 = -0.0641*t4061;
  t4207 = t4201 + t4202 + t4203;
  t3926 = t3915*t3924;
  t4035 = -1.*t3927*t3929*t3934;
  t4048 = t3926 + t4035;
  t4182 = -0.325*t4055;
  t4188 = t4060*t4187;
  t4208 = t4055*t4207;
  t4209 = t4182 + t4188 + t4208;
  t4213 = -1.*t4060;
  t4214 = 1. + t4213;
  t4215 = 0.325*t4214;
  t4216 = -1.*t4055*t4187;
  t4218 = t4060*t4207;
  t4222 = t4215 + t4216 + t4218;
  t4166 = -1.*t3927;
  t4167 = 1. + t4166;
  t4176 = -0.1575*t4167;
  t4177 = -0.2255*t3927;
  t4210 = -1.*t3915*t4209;
  t4211 = t4176 + t4177 + t4210;
  t4228 = -0.068*t3915;
  t4229 = t3927*t4209;
  t4230 = t4228 + t4229;
  t4234 = t4066*t4222;
  t4235 = -1.*t4211*t3934;
  t4236 = t4234 + t4235;
  t4212 = t4066*t4211;
  t4223 = t4222*t3934;
  t4224 = t4212 + t4223;
  t4231 = t4230*t3924;
  t4237 = t3929*t4236;
  t4238 = t4231 + t4237;
  t4242 = t3929*t4230;
  t4243 = -1.*t3924*t4236;
  t4244 = t4242 + t4243;
  t4085 = t3927*t4074*t3924;
  t4092 = t3929*t4091;
  t4093 = t4085 + t4092;
  t4226 = t3927*t4066*t4224;
  t4248 = -1.*t4224*t4113;
  t4258 = t4224*t4113;
  t4263 = -1.*t4224*t4126;
  t4270 = -1.*t3927*t4066*t4224;
  t4275 = t4224*t4126;
  t4306 = -1.*t3915*t4230;
  t4310 = t3927*t4230*t4074;
  t4284 = t3915*t4230;
  t4288 = -1.*t3927*t4230*t4064;
  t4299 = -1.*t3927*t4230*t4074;
  t4294 = t3927*t4230*t4064;
  t4361 = t4222*t4074;
  t4350 = -1.*t4222*t4088;
  p_output1[0]=t4081*var2[0] + t4048*var2[1] + t4093*var2[2];
  p_output1[1]=(t4096*t4113 - 1.*t4098*t4118)*var2[0] + (t3927*t4066*t4096 - 1.*t4098*t4104)*var2[1] + (t4096*t4126 - 1.*t4098*t4134)*var2[2];
  p_output1[2]=(t4098*t4113 + t4096*t4118)*var2[0] + (t3927*t4066*t4098 + t4096*t4104)*var2[1] + (t4098*t4126 + t4096*t4134)*var2[2];
  p_output1[3]=(t4093*(-1.*t4048*t4238 - 1.*t4104*t4244 + t4270) + t4048*(t4093*t4238 + t4134*t4244 + t4275))*var2[0] + (t4093*(t4081*t4238 + t4118*t4244 + t4258) + t4081*(-1.*t4093*t4238 - 1.*t4134*t4244 + t4263))*var2[1] + (t4081*(t4226 + t4048*t4238 + t4104*t4244) + t4048*(-1.*t4081*t4238 - 1.*t4118*t4244 + t4248))*var2[2];
  p_output1[4]=(t4126*(t3927*t3934*t4236 + t4270 + t4306) + t3927*t4066*(t4091*t4236 + t4275 + t4310))*var2[0] + (t4126*(t4077*t4236 + t4258 + t4294) + t4113*(-1.*t4091*t4236 + t4263 + t4299))*var2[1] + (t4113*(t4226 - 1.*t3927*t3934*t4236 + t4284) + t3927*t4066*(-1.*t4077*t4236 + t4248 + t4288))*var2[2];
  p_output1[5]=(t3927*t4074*(-1.*t3927*t4211 + t4306) + t3915*(-1.*t3915*t4074*t4211 + t4088*t4222 + t4310))*var2[0] + (t3927*t4064*(t3915*t4074*t4211 + t4299 + t4350) + t3927*t4074*(-1.*t3915*t4064*t4211 + t4294 + t4361))*var2[1] + (t3927*t4064*(t3927*t4211 + t4284) + t3915*(t3915*t4064*t4211 - 1.*t4074*t4222 + t4288))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.1575*t4064 + 0.2255*t4088)*var2[0] + (t4074*(-1.*t4074*t4209 + t4350) + t4088*(t4064*t4209 + t4361))*var2[1] - 0.068*t4074*var2[2];
  p_output1[13]=(0.325*t4061 - 1.*t4050*t4187 - 1.*t4061*t4207)*var2[0] + (-0.325*t4050 - 1.*t4061*t4187 + t4050*t4207)*var2[2];
  p_output1[14]=-0.0641*var2[0] - 0.28*var2[2];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fFrFoot_vec_DiagonalStance.hh"

namespace SymFunction
{

void fFrFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
