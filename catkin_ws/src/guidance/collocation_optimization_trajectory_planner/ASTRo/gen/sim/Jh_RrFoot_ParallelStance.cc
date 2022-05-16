/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:40:34 GMT+02:00
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
  double t4666;
  double t133;
  double t1888;
  double t5245;
  double t9056;
  double t9109;
  double t9143;
  double t7843;
  double t8996;
  double t9362;
  double t8525;
  double t9379;
  double t5822;
  double t3924;
  double t5325;
  double t5558;
  double t9211;
  double t10412;
  double t13943;
  double t15745;
  double t14311;
  double t14455;
  double t14493;
  double t15568;
  double t14939;
  double t15180;
  double t15257;
  double t15466;
  double t15470;
  double t15474;
  double t15577;
  double t15701;
  double t15725;
  double t15749;
  double t22776;
  double t39603;
  double t41044;
  double t41046;
  double t41047;
  double t41050;
  double t41060;
  double t41068;
  double t41070;
  double t41075;
  double t41077;
  double t15371;
  double t15553;
  double t15558;
  double t41150;
  double t41151;
  double t41152;
  double t41188;
  double t41189;
  double t41191;
  double t41192;
  double t41193;
  double t41204;
  double t41205;
  double t41206;
  double t41207;
  double t41208;
  double t41209;
  double t41219;
  double t41224;
  double t41185;
  double t41187;
  double t41215;
  double t41216;
  double t41235;
  double t41236;
  double t41237;
  double t41238;
  double t41240;
  double t41241;
  double t41243;
  double t41217;
  double t41225;
  double t41227;
  double t41239;
  double t41244;
  double t41245;
  double t41251;
  double t41252;
  double t41254;
  double t5823;
  double t14268;
  double t14270;
  double t41233;
  double t41264;
  double t41302;
  double t41320;
  double t41332;
  double t41341;
  double t41384;
  double t41392;
  t4666 = Cos(var1[16]);
  t133 = Cos(var1[17]);
  t1888 = Sin(var1[16]);
  t5245 = Sin(var1[17]);
  t9056 = -1.*t4666*t133;
  t9109 = -1.*t1888*t5245;
  t9143 = t9056 + t9109;
  t7843 = Cos(var1[4]);
  t8996 = Cos(var1[5]);
  t9362 = Sin(var1[15]);
  t8525 = Cos(var1[15]);
  t9379 = Sin(var1[5]);
  t5822 = Sin(var1[4]);
  t3924 = -1.*t133*t1888;
  t5325 = t4666*t5245;
  t5558 = t3924 + t5325;
  t9211 = t8525*t8996*t9143;
  t10412 = -1.*t9362*t9143*t9379;
  t13943 = t9211 + t10412;
  t15745 = Sin(var1[3]);
  t14311 = t8996*t9362;
  t14455 = t8525*t9379;
  t14493 = t14311 + t14455;
  t15568 = Cos(var1[3]);
  t14939 = t4666*t133;
  t15180 = t1888*t5245;
  t15257 = t14939 + t15180;
  t15466 = t8525*t8996*t5558;
  t15470 = -1.*t9362*t5558*t9379;
  t15474 = t15466 + t15470;
  t15577 = t8996*t9362*t9143;
  t15701 = t8525*t9143*t9379;
  t15725 = t15577 + t15701;
  t15749 = t7843*t5558;
  t22776 = -1.*t5822*t13943;
  t39603 = t15749 + t22776;
  t41044 = -1.*t8525*t8996;
  t41046 = t9362*t9379;
  t41047 = t41044 + t41046;
  t41050 = t8996*t9362*t5558;
  t41060 = t8525*t5558*t9379;
  t41068 = t41050 + t41060;
  t41070 = t7843*t15257;
  t41075 = -1.*t5822*t15474;
  t41077 = t41070 + t41075;
  t15371 = t15257*t5822;
  t15553 = t7843*t15474;
  t15558 = t15371 + t15553;
  t41150 = -1.*t8525;
  t41151 = 1. + t41150;
  t41152 = -0.15121*t41151;
  t41188 = -1.*t4666;
  t41189 = 1. + t41188;
  t41191 = -0.28121*t41189;
  t41192 = -1.*t133;
  t41193 = 1. + t41192;
  t41204 = -0.50321*t41193;
  t41205 = -0.23321*t133;
  t41206 = t41204 + t41205;
  t41207 = t4666*t41206;
  t41208 = 0.27*t1888*t5245;
  t41209 = t41191 + t41207 + t41208;
  t41219 = t8525*t41209;
  t41224 = t41152 + t41219;
  t41185 = -0.15121*t8525;
  t41187 = 0.15121*t9362;
  t41215 = t9362*t41209;
  t41216 = t41152 + t41185 + t41187 + t41215;
  t41235 = 0.28121*t1888;
  t41236 = t41206*t1888;
  t41237 = -0.27*t4666*t5245;
  t41238 = t41235 + t41236 + t41237;
  t41240 = t8996*t41224;
  t41241 = -1.*t41216*t9379;
  t41243 = t41240 + t41241;
  t41217 = t8996*t41216;
  t41225 = t41224*t9379;
  t41227 = t41217 + t41225;
  t41239 = t41238*t5822;
  t41244 = t7843*t41243;
  t41245 = t41239 + t41244;
  t41251 = t7843*t41238;
  t41252 = -1.*t5822*t41243;
  t41254 = t41251 + t41252;
  t5823 = t5558*t5822;
  t14268 = t7843*t13943;
  t14270 = t5823 + t14268;
  t41233 = -1.*t41047*t41227;
  t41264 = t41068*t41227;
  t41302 = -1.*t41068*t41227;
  t41320 = t15725*t41227;
  t41332 = t41047*t41227;
  t41341 = -1.*t15725*t41227;
  t41384 = -1.*t41238*t15257;
  t41392 = t41238*t5558;
  p_output1[0]=t14270;
  p_output1[1]=t14493*t7843;
  p_output1[2]=t15558;
  p_output1[3]=t15568*t15725 - 1.*t15745*t39603;
  p_output1[4]=t15568*t41047 + t14493*t15745*t5822;
  p_output1[5]=t15568*t41068 - 1.*t15745*t41077;
  p_output1[6]=t15725*t15745 + t15568*t39603;
  p_output1[7]=t15745*t41047 - 1.*t14493*t15568*t5822;
  p_output1[8]=t15745*t41068 + t15568*t41077;
  p_output1[9]=t14493*(t15558*t41245 + t41077*t41254 + t41264)*t7843 + t15558*(t41233 + t14493*t41254*t5822 - 1.*t14493*t41245*t7843);
  p_output1[10]=t14270*(-1.*t15558*t41245 - 1.*t41077*t41254 + t41302) + t15558*(t14270*t41245 + t39603*t41254 + t41320);
  p_output1[11]=t14493*(-1.*t14270*t41245 - 1.*t39603*t41254 + t41341)*t7843 + t14270*(t41332 - 1.*t14493*t41254*t5822 + t14493*t41245*t7843);
  p_output1[12]=t41068*(t41233 - 1.*t14493*t41243) + t41047*(t15257*t41238 + t15474*t41243 + t41264);
  p_output1[13]=t15725*(-1.*t15474*t41243 + t41302 + t41384) + t41068*(t13943*t41243 + t41320 + t41392);
  p_output1[14]=t15725*(t14493*t41243 + t41332) + t41047*(-1.*t13943*t41243 + t41341 - 1.*t41238*t5558);
  p_output1[15]=t15257*(t41216*t8525 - 1.*t41224*t9362);
  p_output1[16]=t5558*(t41384 - 1.*t41224*t5558*t8525 - 1.*t41216*t5558*t9362) + t15257*(t41392 + t41224*t8525*t9143 + t41216*t9143*t9362);
  p_output1[17]=t5558*(-1.*t41216*t8525 + t41224*t9362);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
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
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=-0.15121*t15257 - 0.15121*t9143;
  p_output1[46]=-0.15121 + t5558*(t41384 - 1.*t41209*t5558) + t15257*(t41392 + t41209*t9143);
  p_output1[47]=0;
  p_output1[48]=0.28121*t5245 - 0.27*t133*t5245 + t41206*t5245;
  p_output1[49]=0;
  p_output1[50]=0.28121*t133 + t133*t41206 + 0.27*Power(t5245,2);
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=-0.27;
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

#include "Jh_RrFoot_ParallelStance.hh"

namespace SymFunction
{

void Jh_RrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
