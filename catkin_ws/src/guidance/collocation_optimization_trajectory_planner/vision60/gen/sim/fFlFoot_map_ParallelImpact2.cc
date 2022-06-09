/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 14:41:44 GMT+02:00
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
  double t3169;
  double t3380;
  double t4613;
  double t4717;
  double t4718;
  double t5019;
  double t5021;
  double t5103;
  double t5031;
  double t5030;
  double t5106;
  double t5135;
  double t5182;
  double t5025;
  double t3085;
  double t3092;
  double t5036;
  double t5187;
  double t8929;
  double t9144;
  double t9123;
  double t9127;
  double t9132;
  double t9072;
  double t9145;
  double t9146;
  double t9152;
  double t9173;
  double t9175;
  double t9176;
  double t9221;
  double t9226;
  double t9227;
  double t9228;
  double t9230;
  double t9231;
  double t9172;
  double t9177;
  double t9232;
  double t9233;
  double t9167;
  double t9168;
  double t9169;
  double t9170;
  double t9234;
  double t9235;
  double t9237;
  double t9238;
  double t9239;
  double t9240;
  double t9242;
  double t9243;
  double t9244;
  double t9245;
  double t9246;
  double t9249;
  double t9250;
  double t9251;
  double t9256;
  double t9257;
  double t9258;
  double t9264;
  double t9266;
  double t9267;
  double t9272;
  double t9273;
  double t9274;
  double t9259;
  double t9260;
  double t9262;
  double t9270;
  double t9276;
  double t9277;
  double t9278;
  double t9279;
  double t9280;
  double t9247;
  double t9252;
  double t9254;
  double t9268;
  double t9283;
  double t9284;
  double t9286;
  double t9287;
  double t9297;
  double t9300;
  double t9164;
  double t9165;
  double t9166;
  double t5024;
  double t9069;
  double t9070;
  double t9289;
  double t9290;
  double t9291;
  double t9328;
  double t9333;
  double t9343;
  double t9339;
  double t9353;
  double t9348;
  double t9372;
  double t9375;
  double t9382;
  double t9385;
  t3169 = Cos(var1[8]);
  t3380 = Sin(var1[7]);
  t4613 = t3169*t3380;
  t4717 = Cos(var1[7]);
  t4718 = Sin(var1[8]);
  t5019 = -1.*t4717*t4718;
  t5021 = t4613 + t5019;
  t5103 = Cos(var1[5]);
  t5031 = Sin(var1[6]);
  t5030 = Sin(var1[5]);
  t5106 = t4717*t3169;
  t5135 = t3380*t4718;
  t5182 = t5106 + t5135;
  t5025 = Cos(var1[4]);
  t3085 = Cos(var1[6]);
  t3092 = Sin(var1[4]);
  t5036 = t5030*t5031*t5021;
  t5187 = t5103*t5182;
  t8929 = t5036 + t5187;
  t9144 = Sin(var1[3]);
  t9123 = -1.*t5103*t5031*t5021;
  t9127 = t5030*t5182;
  t9132 = t9123 + t9127;
  t9072 = Cos(var1[3]);
  t9145 = t5025*t3085*t5021;
  t9146 = -1.*t3092*t8929;
  t9152 = t9145 + t9146;
  t9173 = -0.0641*t3169;
  t9175 = -0.28*t4718;
  t9176 = t9173 + t9175;
  t9221 = -1.*t3169;
  t9226 = 1. + t9221;
  t9227 = 0.075*t9226;
  t9228 = 0.355*t3169;
  t9230 = -0.0641*t4718;
  t9231 = t9227 + t9228 + t9230;
  t9172 = -0.325*t3380;
  t9177 = t4717*t9176;
  t9232 = t3380*t9231;
  t9233 = t9172 + t9177 + t9232;
  t9167 = -1.*t3085;
  t9168 = 1. + t9167;
  t9169 = 0.1575*t9168;
  t9170 = 0.2255*t3085;
  t9234 = -1.*t5031*t9233;
  t9235 = t9169 + t9170 + t9234;
  t9237 = -1.*t5030*t9235;
  t9238 = -1.*t4717;
  t9239 = 1. + t9238;
  t9240 = 0.325*t9239;
  t9242 = -1.*t3380*t9176;
  t9243 = t4717*t9231;
  t9244 = t9240 + t9242 + t9243;
  t9245 = t5103*t9244;
  t9246 = t9237 + t9245;
  t9249 = 0.068*t5031;
  t9250 = t3085*t9233;
  t9251 = t9249 + t9250;
  t9256 = -1.*t5025*t3085*t5030;
  t9257 = t3092*t5031;
  t9258 = t9256 + t9257;
  t9264 = t5103*t9235;
  t9266 = t5030*t9244;
  t9267 = t9264 + t9266;
  t9272 = -1.*t3169*t3380;
  t9273 = t4717*t4718;
  t9274 = t9272 + t9273;
  t9259 = t5025*t9246;
  t9260 = t3092*t9251;
  t9262 = t9259 + t9260;
  t9270 = t3085*t3092*t5182;
  t9276 = t5103*t9274;
  t9277 = t5030*t5031*t5182;
  t9278 = t9276 + t9277;
  t9279 = t5025*t9278;
  t9280 = t9270 + t9279;
  t9247 = -1.*t3092*t9246;
  t9252 = t5025*t9251;
  t9254 = t9247 + t9252;
  t9268 = -1.*t5103*t3085*t9267;
  t9283 = t5030*t9274;
  t9284 = -1.*t5103*t5031*t5182;
  t9286 = t9283 + t9284;
  t9287 = t9267*t9286;
  t9297 = -1.*t5031*t9251;
  t9300 = t3085*t9251*t5182;
  t9164 = t3085*t3092*t5030;
  t9165 = t5025*t5031;
  t9166 = t9164 + t9165;
  t5024 = t3085*t3092*t5021;
  t9069 = t5025*t8929;
  t9070 = t5024 + t9069;
  t9289 = t5025*t3085*t5182;
  t9290 = -1.*t3092*t9278;
  t9291 = t9289 + t9290;
  t9328 = t9267*t9132;
  t9333 = -1.*t9267*t9286;
  t9343 = -1.*t3085*t9251*t5182;
  t9339 = t3085*t9251*t5021;
  t9353 = t9244*t5182;
  t9348 = -1.*t9244*t9274;
  t9372 = t5103*t3085*t9267;
  t9375 = -1.*t9267*t9132;
  t9382 = t5031*t9251;
  t9385 = -1.*t3085*t9251*t5021;
  p_output1[0]=t9070;
  p_output1[1]=t9072*t9132 - 1.*t9144*t9152;
  p_output1[2]=t9132*t9144 + t9072*t9152;
  p_output1[3]=(-1.*t9166*t9254 - 1.*t9258*t9262 + t9268)*t9280 + t9258*(t9262*t9280 + t9287 + t9254*t9291);
  p_output1[4]=t9286*(t3085*t5030*t9246 + t9268 + t9297) + t3085*t5103*(t9246*t9278 + t9287 + t9300);
  p_output1[5]=t3085*t5182*(-1.*t3085*t9235 + t9297) + t5031*(-1.*t5031*t5182*t9235 + t9244*t9274 + t9300);
  p_output1[6]=-0.1575*t5021 - 0.2255*t9274;
  p_output1[7]=0.325*t4718 - 1.*t3169*t9176 - 1.*t4718*t9231;
  p_output1[8]=-0.0641;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t9258;
  p_output1[19]=t3085*t5103*t9072 - 1.*t9144*t9166;
  p_output1[20]=t3085*t5103*t9144 + t9072*t9166;
  p_output1[21]=t9280*(t9152*t9254 + t9070*t9262 + t9328) + t9070*(-1.*t9262*t9280 - 1.*t9254*t9291 + t9333);
  p_output1[22]=t9286*(t8929*t9246 + t9328 + t9339) + t9132*(-1.*t9246*t9278 + t9333 + t9343);
  p_output1[23]=t3085*t5021*(t5031*t5182*t9235 + t9343 + t9348) + t3085*t5182*(-1.*t5021*t5031*t9235 + t9339 + t9353);
  p_output1[24]=t5182*(-1.*t5182*t9233 + t9348) + t9274*(t5021*t9233 + t9353);
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t9280;
  p_output1[37]=t9072*t9286 - 1.*t9144*t9291;
  p_output1[38]=t9144*t9286 + t9072*t9291;
  p_output1[39]=t9070*(t9166*t9254 + t9258*t9262 + t9372) + t9258*(-1.*t9152*t9254 - 1.*t9070*t9262 + t9375);
  p_output1[40]=t9132*(-1.*t3085*t5030*t9246 + t9372 + t9382) + t3085*t5103*(-1.*t8929*t9246 + t9375 + t9385);
  p_output1[41]=t3085*t5021*(t3085*t9235 + t9382) + t5031*(t5021*t5031*t9235 - 1.*t5182*t9244 + t9385);
  p_output1[42]=0.068*t5182;
  p_output1[43]=-0.325*t3169 - 1.*t4718*t9176 + t3169*t9231;
  p_output1[44]=-0.28;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fFlFoot_map_ParallelImpact2.hh"

namespace SymFunction
{

void fFlFoot_map_ParallelImpact2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
