/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 17:23:10 GMT+02:00
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
  double t3946;
  double t4012;
  double t4002;
  double t4032;
  double t4038;
  double t4028;
  double t4039;
  double t4003;
  double t4049;
  double t4050;
  double t4053;
  double t4013;
  double t4047;
  double t4037;
  double t4045;
  double t4046;
  double t4005;
  double t4014;
  double t4020;
  double t4132;
  double t4130;
  double t4090;
  double t4094;
  double t4095;
  double t4101;
  double t4102;
  double t4103;
  double t4115;
  double t4117;
  double t4118;
  double t4134;
  double t4135;
  double t4136;
  double t4150;
  double t4152;
  double t4153;
  double t4156;
  double t4157;
  double t4163;
  double t4168;
  double t4169;
  double t4171;
  double t4173;
  double t5098;
  double t5110;
  double t4048;
  double t4096;
  double t4098;
  double t5215;
  double t5216;
  double t5220;
  double t5221;
  double t5234;
  double t5235;
  double t5236;
  double t5239;
  double t5249;
  double t5253;
  double t5255;
  double t5256;
  double t5257;
  double t5262;
  double t5263;
  double t5266;
  double t5217;
  double t5218;
  double t5219;
  double t5258;
  double t5260;
  double t5276;
  double t5277;
  double t5279;
  double t5280;
  double t5282;
  double t5284;
  double t5286;
  double t5261;
  double t5269;
  double t5271;
  double t5281;
  double t5287;
  double t5288;
  double t5290;
  double t5294;
  double t5295;
  double t4113;
  double t4119;
  double t4122;
  double t5272;
  double t5299;
  double t5311;
  double t5318;
  double t5327;
  double t5335;
  double t16662;
  double t16666;
  t3946 = Cos(var1[4]);
  t4012 = Cos(var1[12]);
  t4002 = Cos(var1[5]);
  t4032 = Cos(var1[14]);
  t4038 = Sin(var1[13]);
  t4028 = Cos(var1[13]);
  t4039 = Sin(var1[14]);
  t4003 = Sin(var1[12]);
  t4049 = t4032*t4038;
  t4050 = -1.*t4028*t4039;
  t4053 = t4049 + t4050;
  t4013 = Sin(var1[5]);
  t4047 = Sin(var1[4]);
  t4037 = t4028*t4032;
  t4045 = t4038*t4039;
  t4046 = t4037 + t4045;
  t4005 = -1.*t4002*t4003;
  t4014 = -1.*t4012*t4013;
  t4020 = t4005 + t4014;
  t4132 = Cos(var1[3]);
  t4130 = Sin(var1[3]);
  t4090 = t4012*t4002*t4053;
  t4094 = -1.*t4003*t4053*t4013;
  t4095 = t4090 + t4094;
  t4101 = -1.*t4032*t4038;
  t4102 = t4028*t4039;
  t4103 = t4101 + t4102;
  t4115 = t4012*t4002*t4046;
  t4117 = -1.*t4003*t4046*t4013;
  t4118 = t4115 + t4117;
  t4134 = t4012*t4002;
  t4135 = -1.*t4003*t4013;
  t4136 = t4134 + t4135;
  t4150 = t4002*t4003*t4053;
  t4152 = t4012*t4053*t4013;
  t4153 = t4150 + t4152;
  t4156 = t3946*t4046;
  t4157 = -1.*t4047*t4095;
  t4163 = t4156 + t4157;
  t4168 = t4002*t4003*t4046;
  t4169 = t4012*t4046*t4013;
  t4171 = t4168 + t4169;
  t4173 = t3946*t4103;
  t5098 = -1.*t4047*t4118;
  t5110 = t4173 + t5098;
  t4048 = t4046*t4047;
  t4096 = t3946*t4095;
  t4098 = t4048 + t4096;
  t5215 = -1.*t4012;
  t5216 = 1. + t5215;
  t5220 = -1.*t4028;
  t5221 = 1. + t5220;
  t5234 = 0.28121*t5221;
  t5235 = -1.*t4032;
  t5236 = 1. + t5235;
  t5239 = 0.50321*t5236;
  t5249 = 0.23321*t4032;
  t5253 = t5239 + t5249;
  t5255 = t4028*t5253;
  t5256 = -0.27*t4038*t4039;
  t5257 = t5234 + t5255 + t5256;
  t5262 = 0.15121*t5216;
  t5263 = t4012*t5257;
  t5266 = t5262 + t5263;
  t5217 = -0.15121*t5216;
  t5218 = -0.15121*t4012;
  t5219 = -0.15121*t4003;
  t5258 = t4003*t5257;
  t5260 = t5217 + t5218 + t5219 + t5258;
  t5276 = 0.28121*t4038;
  t5277 = -1.*t5253*t4038;
  t5279 = -0.27*t4028*t4039;
  t5280 = t5276 + t5277 + t5279;
  t5282 = t4002*t5266;
  t5284 = -1.*t5260*t4013;
  t5286 = t5282 + t5284;
  t5261 = t4002*t5260;
  t5269 = t5266*t4013;
  t5271 = t5261 + t5269;
  t5281 = t5280*t4047;
  t5287 = t3946*t5286;
  t5288 = t5281 + t5287;
  t5290 = t3946*t5280;
  t5294 = -1.*t4047*t5286;
  t5295 = t5290 + t5294;
  t4113 = t4103*t4047;
  t4119 = t3946*t4118;
  t4122 = t4113 + t4119;
  t5272 = -1.*t4136*t5271;
  t5299 = t4153*t5271;
  t5311 = t4136*t5271;
  t5318 = -1.*t4171*t5271;
  t5327 = -1.*t4153*t5271;
  t5335 = t4171*t5271;
  t16662 = -1.*t5280*t4046;
  t16666 = t5280*t4103;
  p_output1[0]=t4122*var2[0] + t3946*t4020*var2[1] + t4098*var2[2];
  p_output1[1]=(t4132*t4171 - 1.*t4130*t5110)*var2[0] + (t4020*t4047*t4130 + t4132*t4136)*var2[1] + (t4132*t4153 - 1.*t4130*t4163)*var2[2];
  p_output1[2]=(t4130*t4171 + t4132*t5110)*var2[0] + (-1.*t4020*t4047*t4132 + t4130*t4136)*var2[1] + (t4130*t4153 + t4132*t4163)*var2[2];
  p_output1[3]=(t4098*(t5272 - 1.*t3946*t4020*t5288 + t4020*t4047*t5295) + t3946*t4020*(t4098*t5288 + t4163*t5295 + t5299))*var2[0] + (t4122*(-1.*t4098*t5288 - 1.*t4163*t5295 + t5327) + t4098*(t4122*t5288 + t5110*t5295 + t5335))*var2[1] + (t4122*(t3946*t4020*t5288 - 1.*t4020*t4047*t5295 + t5311) + t3946*t4020*(-1.*t4122*t5288 - 1.*t5110*t5295 + t5318))*var2[2];
  p_output1[4]=(t4153*(t5272 - 1.*t4020*t5286) + t4136*(t4046*t5280 + t4095*t5286 + t5299))*var2[0] + (t4171*(t16662 - 1.*t4095*t5286 + t5327) + t4153*(t16666 + t4118*t5286 + t5335))*var2[1] + (t4171*(t4020*t5286 + t5311) + t4136*(-1.*t4103*t5280 - 1.*t4118*t5286 + t5318))*var2[2];
  p_output1[5]=t4046*(-1.*t4012*t5260 + t4003*t5266)*var2[0] + (t4046*(t16666 + t4003*t4046*t5260 + t4012*t4046*t5266) + t4103*(t16662 - 1.*t4003*t4053*t5260 - 1.*t4012*t4053*t5266))*var2[1] + t4103*(t4012*t5260 - 1.*t4003*t5266)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t4046*(t16666 + t4046*t5257) + t4103*(t16662 - 1.*t4053*t5257))*var2[1] + (-0.15121*t4053 - 0.15121*t4103)*var2[2];
  p_output1[13]=(0.28121*t4039 - 0.27*t4032*t4039 - 1.*t4039*t5253)*var2[0] + (0.28121*t4032 + 0.27*Power(t4039,2) - 1.*t4032*t5253)*var2[2];
  p_output1[14]=-0.27*var2[2];
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

#include "fFrFoot_vec_ParallelStance.hh"

namespace SymFunction
{

void fFrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
