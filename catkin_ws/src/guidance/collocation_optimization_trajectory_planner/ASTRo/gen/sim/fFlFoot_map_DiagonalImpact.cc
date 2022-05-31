/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 16:55:49 GMT+02:00
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
  double t12705;
  double t6423;
  double t12124;
  double t12711;
  double t13915;
  double t14526;
  double t17061;
  double t13872;
  double t17074;
  double t13670;
  double t17076;
  double t13647;
  double t12568;
  double t12930;
  double t13076;
  double t6142;
  double t17073;
  double t17121;
  double t17122;
  double t17146;
  double t17134;
  double t17135;
  double t17140;
  double t17133;
  double t17147;
  double t17149;
  double t17150;
  double t17157;
  double t17158;
  double t17159;
  double t17208;
  double t17209;
  double t17210;
  double t17211;
  double t17212;
  double t17214;
  double t17215;
  double t17216;
  double t17217;
  double t17219;
  double t17220;
  double t17221;
  double t17222;
  double t17223;
  double t17224;
  double t17226;
  double t17228;
  double t17229;
  double t17231;
  double t17232;
  double t17236;
  double t17237;
  double t17238;
  double t17239;
  double t17240;
  double t17241;
  double t17242;
  double t17244;
  double t17245;
  double t17246;
  double t17227;
  double t17233;
  double t17234;
  double t17156;
  double t17160;
  double t17161;
  double t17162;
  double t17199;
  double t17203;
  double t17243;
  double t17247;
  double t17248;
  double t17250;
  double t17251;
  double t17252;
  double t17257;
  double t17258;
  double t17259;
  double t17204;
  double t17205;
  double t17207;
  double t17235;
  double t17261;
  double t13125;
  double t17123;
  double t17128;
  double t17263;
  double t17264;
  double t17265;
  double t17293;
  double t17298;
  double t17304;
  double t17308;
  double t17335;
  double t17340;
  t12705 = Cos(var1[7]);
  t6423 = Cos(var1[8]);
  t12124 = Sin(var1[7]);
  t12711 = Sin(var1[8]);
  t13915 = t12705*t6423;
  t14526 = t12124*t12711;
  t17061 = t13915 + t14526;
  t13872 = Cos(var1[6]);
  t17074 = Sin(var1[5]);
  t13670 = Cos(var1[5]);
  t17076 = Sin(var1[6]);
  t13647 = Cos(var1[4]);
  t12568 = -1.*t6423*t12124;
  t12930 = t12705*t12711;
  t13076 = t12568 + t12930;
  t6142 = Sin(var1[4]);
  t17073 = t13670*t13872*t17061;
  t17121 = -1.*t17074*t17076*t17061;
  t17122 = t17073 + t17121;
  t17146 = Sin(var1[3]);
  t17134 = t13872*t17074*t17061;
  t17135 = t13670*t17076*t17061;
  t17140 = t17134 + t17135;
  t17133 = Cos(var1[3]);
  t17147 = t13647*t13076;
  t17149 = -1.*t6142*t17122;
  t17150 = t17147 + t17149;
  t17157 = t6423*t12124;
  t17158 = -1.*t12705*t12711;
  t17159 = t17157 + t17158;
  t17208 = -1.*t13872;
  t17209 = 1. + t17208;
  t17210 = 0.15121*t17209;
  t17211 = -1.*t12705;
  t17212 = 1. + t17211;
  t17214 = 0.28121*t17212;
  t17215 = -1.*t6423;
  t17216 = 1. + t17215;
  t17217 = 0.50321*t17216;
  t17219 = 0.23321*t6423;
  t17220 = t17217 + t17219;
  t17221 = t12705*t17220;
  t17222 = -0.27*t12124*t12711;
  t17223 = t17214 + t17221 + t17222;
  t17224 = t13872*t17223;
  t17226 = t17210 + t17224;
  t17228 = 0.15121*t13872;
  t17229 = -0.15121*t17076;
  t17231 = t17076*t17223;
  t17232 = t17210 + t17228 + t17229 + t17231;
  t17236 = -1.*t13872*t17074;
  t17237 = -1.*t13670*t17076;
  t17238 = t17236 + t17237;
  t17239 = 0.28121*t12124;
  t17240 = -1.*t17220*t12124;
  t17241 = -0.27*t12705*t12711;
  t17242 = t17239 + t17240 + t17241;
  t17244 = t13670*t17226;
  t17245 = -1.*t17074*t17232;
  t17246 = t17244 + t17245;
  t17227 = t17074*t17226;
  t17233 = t13670*t17232;
  t17234 = t17227 + t17233;
  t17156 = t6142*t17061;
  t17160 = t13670*t13872*t17159;
  t17161 = -1.*t17074*t17076*t17159;
  t17162 = t17160 + t17161;
  t17199 = t13647*t17162;
  t17203 = t17156 + t17199;
  t17243 = t6142*t17242;
  t17247 = t13647*t17246;
  t17248 = t17243 + t17247;
  t17250 = t13647*t17242;
  t17251 = -1.*t6142*t17246;
  t17252 = t17250 + t17251;
  t17257 = t13872*t17074*t17159;
  t17258 = t13670*t17076*t17159;
  t17259 = t17257 + t17258;
  t17204 = t13670*t13872;
  t17205 = -1.*t17074*t17076;
  t17207 = t17204 + t17205;
  t17235 = -1.*t17207*t17234;
  t17261 = t17259*t17234;
  t13125 = t6142*t13076;
  t17123 = t13647*t17122;
  t17128 = t13125 + t17123;
  t17263 = t13647*t17061;
  t17264 = -1.*t6142*t17162;
  t17265 = t17263 + t17264;
  t17293 = -1.*t17259*t17234;
  t17298 = t17140*t17234;
  t17304 = -1.*t17242*t17061;
  t17308 = t17242*t13076;
  t17335 = t17207*t17234;
  t17340 = -1.*t17140*t17234;
  p_output1[0]=t17128;
  p_output1[1]=t17133*t17140 - 1.*t17146*t17150;
  p_output1[2]=t17140*t17146 + t17133*t17150;
  p_output1[3]=t13647*t17238*(t17203*t17248 + t17261 + t17252*t17265) + t17203*(t17235 - 1.*t13647*t17238*t17248 + t17238*t17252*t6142);
  p_output1[4]=(t17235 - 1.*t17238*t17246)*t17259 + t17207*(t17061*t17242 + t17162*t17246 + t17261);
  p_output1[5]=t17061*(t17076*t17226 - 1.*t13872*t17232);
  p_output1[6]=0;
  p_output1[7]=0.28121*t12711 - 1.*t12711*t17220 - 0.27*t12711*t6423;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t13647*t17238;
  p_output1[19]=t17133*t17207 + t17146*t17238*t6142;
  p_output1[20]=t17146*t17207 - 1.*t17133*t17238*t6142;
  p_output1[21]=t17128*(-1.*t17203*t17248 - 1.*t17252*t17265 + t17293) + t17203*(t17128*t17248 + t17150*t17252 + t17298);
  p_output1[22]=t17140*(-1.*t17162*t17246 + t17293 + t17304) + t17259*(t17122*t17246 + t17298 + t17308);
  p_output1[23]=t13076*(-1.*t13872*t17159*t17226 - 1.*t17076*t17159*t17232 + t17304) + t17061*(t13872*t17061*t17226 + t17061*t17076*t17232 + t17308);
  p_output1[24]=-0.15121 + t13076*(-1.*t17159*t17223 + t17304) + t17061*(t17061*t17223 + t17308);
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
  p_output1[36]=t17203;
  p_output1[37]=t17133*t17259 - 1.*t17146*t17265;
  p_output1[38]=t17146*t17259 + t17133*t17265;
  p_output1[39]=t13647*t17238*(-1.*t17128*t17248 - 1.*t17150*t17252 + t17340) + t17128*(t13647*t17238*t17248 + t17335 - 1.*t17238*t17252*t6142);
  p_output1[40]=t17140*(t17238*t17246 + t17335) + t17207*(-1.*t13076*t17242 - 1.*t17122*t17246 + t17340);
  p_output1[41]=t13076*(-1.*t17076*t17226 + t13872*t17232);
  p_output1[42]=0.15121*t13076 + 0.15121*t17159;
  p_output1[43]=0.27*Power(t12711,2) + 0.28121*t6423 - 1.*t17220*t6423;
  p_output1[44]=-0.27;
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

#include "fFlFoot_map_DiagonalImpact.hh"

namespace SymFunction
{

void fFlFoot_map_DiagonalImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
