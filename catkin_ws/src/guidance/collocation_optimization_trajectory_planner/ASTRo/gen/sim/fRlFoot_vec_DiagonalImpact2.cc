/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:38:29 GMT+02:00
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
  double t2725;
  double t10132;
  double t5105;
  double t19075;
  double t19078;
  double t19065;
  double t19087;
  double t5116;
  double t19101;
  double t19104;
  double t19110;
  double t10176;
  double t19095;
  double t19126;
  double t19127;
  double t19128;
  double t10124;
  double t11688;
  double t15404;
  double t19195;
  double t19185;
  double t19076;
  double t19089;
  double t19090;
  double t19115;
  double t19116;
  double t19117;
  double t19129;
  double t19130;
  double t19131;
  double t19196;
  double t19199;
  double t19200;
  double t19204;
  double t19207;
  double t19208;
  double t19210;
  double t19212;
  double t19216;
  double t19223;
  double t19225;
  double t19226;
  double t19228;
  double t19230;
  double t19231;
  double t19100;
  double t19120;
  double t19121;
  double t19249;
  double t19250;
  double t19256;
  double t19258;
  double t19259;
  double t19260;
  double t19262;
  double t19263;
  double t19264;
  double t19265;
  double t19266;
  double t19268;
  double t19269;
  double t19273;
  double t19274;
  double t19275;
  double t19251;
  double t19254;
  double t19255;
  double t19270;
  double t19271;
  double t19279;
  double t19280;
  double t19281;
  double t19282;
  double t19285;
  double t19286;
  double t19287;
  double t19272;
  double t19276;
  double t19277;
  double t19284;
  double t19288;
  double t19289;
  double t19291;
  double t19293;
  double t19294;
  double t19123;
  double t19132;
  double t19133;
  double t19278;
  double t19298;
  double t19306;
  double t19311;
  double t19318;
  double t19323;
  double t19352;
  double t19361;
  t2725 = Cos(var1[4]);
  t10132 = Cos(var1[9]);
  t5105 = Cos(var1[5]);
  t19075 = Cos(var1[11]);
  t19078 = Sin(var1[10]);
  t19065 = Cos(var1[10]);
  t19087 = Sin(var1[11]);
  t5116 = Sin(var1[9]);
  t19101 = -1.*t19075*t19078;
  t19104 = t19065*t19087;
  t19110 = t19101 + t19104;
  t10176 = Sin(var1[5]);
  t19095 = Sin(var1[4]);
  t19126 = -1.*t19065*t19075;
  t19127 = -1.*t19078*t19087;
  t19128 = t19126 + t19127;
  t10124 = t5105*t5116;
  t11688 = t10132*t10176;
  t15404 = t10124 + t11688;
  t19195 = Cos(var1[3]);
  t19185 = Sin(var1[3]);
  t19076 = t19065*t19075;
  t19089 = t19078*t19087;
  t19090 = t19076 + t19089;
  t19115 = t10132*t5105*t19110;
  t19116 = -1.*t5116*t19110*t10176;
  t19117 = t19115 + t19116;
  t19129 = t10132*t5105*t19128;
  t19130 = -1.*t5116*t19128*t10176;
  t19131 = t19129 + t19130;
  t19196 = -1.*t10132*t5105;
  t19199 = t5116*t10176;
  t19200 = t19196 + t19199;
  t19204 = t5105*t5116*t19110;
  t19207 = t10132*t19110*t10176;
  t19208 = t19204 + t19207;
  t19210 = t2725*t19090;
  t19212 = -1.*t19095*t19117;
  t19216 = t19210 + t19212;
  t19223 = t5105*t5116*t19128;
  t19225 = t10132*t19128*t10176;
  t19226 = t19223 + t19225;
  t19228 = t2725*t19110;
  t19230 = -1.*t19095*t19131;
  t19231 = t19228 + t19230;
  t19100 = t19090*t19095;
  t19120 = t2725*t19117;
  t19121 = t19100 + t19120;
  t19249 = -1.*t10132;
  t19250 = 1. + t19249;
  t19256 = -1.*t19065;
  t19258 = 1. + t19256;
  t19259 = -0.28121*t19258;
  t19260 = -1.*t19075;
  t19262 = 1. + t19260;
  t19263 = -0.50321*t19262;
  t19264 = -0.19821*t19075;
  t19265 = t19263 + t19264;
  t19266 = t19065*t19265;
  t19268 = 0.305*t19078*t19087;
  t19269 = t19259 + t19266 + t19268;
  t19273 = -0.15121*t19250;
  t19274 = t10132*t19269;
  t19275 = t19273 + t19274;
  t19251 = 0.15121*t19250;
  t19254 = 0.15121*t10132;
  t19255 = 0.15121*t5116;
  t19270 = t5116*t19269;
  t19271 = t19251 + t19254 + t19255 + t19270;
  t19279 = 0.28121*t19078;
  t19280 = t19265*t19078;
  t19281 = -0.305*t19065*t19087;
  t19282 = t19279 + t19280 + t19281;
  t19285 = t5105*t19275;
  t19286 = -1.*t19271*t10176;
  t19287 = t19285 + t19286;
  t19272 = t5105*t19271;
  t19276 = t19275*t10176;
  t19277 = t19272 + t19276;
  t19284 = t19282*t19095;
  t19288 = t2725*t19287;
  t19289 = t19284 + t19288;
  t19291 = t2725*t19282;
  t19293 = -1.*t19095*t19287;
  t19294 = t19291 + t19293;
  t19123 = t19110*t19095;
  t19132 = t2725*t19131;
  t19133 = t19123 + t19132;
  t19278 = -1.*t19200*t19277;
  t19298 = t19208*t19277;
  t19306 = t19200*t19277;
  t19311 = -1.*t19226*t19277;
  t19318 = -1.*t19208*t19277;
  t19323 = t19226*t19277;
  t19352 = -1.*t19282*t19090;
  t19361 = t19282*t19110;
  p_output1[0]=t19133*var2[0] + t15404*t2725*var2[1] + t19121*var2[2];
  p_output1[1]=(t19195*t19226 - 1.*t19185*t19231)*var2[0] + (t15404*t19095*t19185 + t19195*t19200)*var2[1] + (t19195*t19208 - 1.*t19185*t19216)*var2[2];
  p_output1[2]=(t19185*t19226 + t19195*t19231)*var2[0] + (-1.*t15404*t19095*t19195 + t19185*t19200)*var2[1] + (t19185*t19208 + t19195*t19216)*var2[2];
  p_output1[3]=(t15404*(t19121*t19289 + t19216*t19294 + t19298)*t2725 + t19121*(t19278 + t15404*t19095*t19294 - 1.*t15404*t19289*t2725))*var2[0] + (t19133*(-1.*t19121*t19289 - 1.*t19216*t19294 + t19318) + t19121*(t19133*t19289 + t19231*t19294 + t19323))*var2[1] + (t15404*(-1.*t19133*t19289 - 1.*t19231*t19294 + t19311)*t2725 + t19133*(-1.*t15404*t19095*t19294 + t19306 + t15404*t19289*t2725))*var2[2];
  p_output1[4]=(t19208*(t19278 - 1.*t15404*t19287) + t19200*(t19090*t19282 + t19117*t19287 + t19298))*var2[0] + (t19226*(-1.*t19117*t19287 + t19318 + t19352) + t19208*(t19131*t19287 + t19323 + t19361))*var2[1] + (t19226*(t15404*t19287 + t19306) + t19200*(-1.*t19110*t19282 - 1.*t19131*t19287 + t19311))*var2[2];
  p_output1[5]=t19090*(t10132*t19271 - 1.*t19275*t5116)*var2[0] + (t19110*(-1.*t10132*t19110*t19275 + t19352 - 1.*t19110*t19271*t5116) + t19090*(t10132*t19128*t19275 + t19361 + t19128*t19271*t5116))*var2[1] + t19110*(-1.*t10132*t19271 + t19275*t5116)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.15121*t19090 + 0.15121*t19128)*var2[0] + (-0.15121 + t19110*(-1.*t19110*t19269 + t19352) + t19090*(t19128*t19269 + t19361))*var2[1];
  p_output1[10]=(0.28121*t19087 - 0.305*t19075*t19087 + t19087*t19265)*var2[0] + (0.28121*t19075 + 0.305*Power(t19087,2) + t19075*t19265)*var2[2];
  p_output1[11]=-0.305*var2[2];
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
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

#include "fRlFoot_vec_DiagonalImpact2.hh"

namespace SymFunction
{

void fRlFoot_vec_DiagonalImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
