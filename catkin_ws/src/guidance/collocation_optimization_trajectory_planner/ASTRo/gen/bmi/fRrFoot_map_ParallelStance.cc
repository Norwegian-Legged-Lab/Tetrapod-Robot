/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 17:58:55 GMT+02:00
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
  double t4992;
  double t4981;
  double t4990;
  double t5005;
  double t5104;
  double t5105;
  double t5106;
  double t5103;
  double t5108;
  double t5099;
  double t5109;
  double t5092;
  double t4991;
  double t5009;
  double t5086;
  double t5090;
  double t5107;
  double t5110;
  double t5111;
  double t5119;
  double t5115;
  double t5116;
  double t5117;
  double t5114;
  double t5121;
  double t5122;
  double t5123;
  double t5167;
  double t5168;
  double t5170;
  double t5184;
  double t5185;
  double t5186;
  double t5189;
  double t5191;
  double t5192;
  double t5193;
  double t5194;
  double t5195;
  double t5199;
  double t5203;
  double t5207;
  double t5208;
  double t5171;
  double t5183;
  double t5204;
  double t5205;
  double t5212;
  double t5213;
  double t5216;
  double t5218;
  double t5221;
  double t5222;
  double t5225;
  double t5229;
  double t5230;
  double t5231;
  double t5206;
  double t5209;
  double t5210;
  double t5130;
  double t5131;
  double t5133;
  double t5134;
  double t5135;
  double t5136;
  double t5138;
  double t5139;
  double t5150;
  double t5226;
  double t5232;
  double t5234;
  double t5237;
  double t5238;
  double t5239;
  double t5246;
  double t5247;
  double t5248;
  double t5157;
  double t5161;
  double t5166;
  double t5211;
  double t5249;
  double t5091;
  double t5112;
  double t5113;
  double t5254;
  double t5255;
  double t5256;
  double t5293;
  double t5299;
  double t5307;
  double t5311;
  double t5347;
  double t5358;
  t4992 = Cos(var1[16]);
  t4981 = Cos(var1[17]);
  t4990 = Sin(var1[16]);
  t5005 = Sin(var1[17]);
  t5104 = -1.*t4992*t4981;
  t5105 = -1.*t4990*t5005;
  t5106 = t5104 + t5105;
  t5103 = Cos(var1[5]);
  t5108 = Sin(var1[15]);
  t5099 = Cos(var1[15]);
  t5109 = Sin(var1[5]);
  t5092 = Cos(var1[4]);
  t4991 = -1.*t4981*t4990;
  t5009 = t4992*t5005;
  t5086 = t4991 + t5009;
  t5090 = Sin(var1[4]);
  t5107 = t5099*t5103*t5106;
  t5110 = -1.*t5108*t5106*t5109;
  t5111 = t5107 + t5110;
  t5119 = Sin(var1[3]);
  t5115 = t5103*t5108*t5106;
  t5116 = t5099*t5106*t5109;
  t5117 = t5115 + t5116;
  t5114 = Cos(var1[3]);
  t5121 = t5092*t5086;
  t5122 = -1.*t5090*t5111;
  t5123 = t5121 + t5122;
  t5167 = -1.*t5099;
  t5168 = 1. + t5167;
  t5170 = -0.15121*t5168;
  t5184 = -1.*t4992;
  t5185 = 1. + t5184;
  t5186 = -0.28121*t5185;
  t5189 = -1.*t4981;
  t5191 = 1. + t5189;
  t5192 = -0.50321*t5191;
  t5193 = -0.19821*t4981;
  t5194 = t5192 + t5193;
  t5195 = t4992*t5194;
  t5199 = 0.305*t4990*t5005;
  t5203 = t5186 + t5195 + t5199;
  t5207 = t5099*t5203;
  t5208 = t5170 + t5207;
  t5171 = -0.15121*t5099;
  t5183 = 0.15121*t5108;
  t5204 = t5108*t5203;
  t5205 = t5170 + t5171 + t5183 + t5204;
  t5212 = t5103*t5108;
  t5213 = t5099*t5109;
  t5216 = t5212 + t5213;
  t5218 = 0.28121*t4990;
  t5221 = t5194*t4990;
  t5222 = -0.305*t4992*t5005;
  t5225 = t5218 + t5221 + t5222;
  t5229 = t5103*t5208;
  t5230 = -1.*t5205*t5109;
  t5231 = t5229 + t5230;
  t5206 = t5103*t5205;
  t5209 = t5208*t5109;
  t5210 = t5206 + t5209;
  t5130 = t4992*t4981;
  t5131 = t4990*t5005;
  t5133 = t5130 + t5131;
  t5134 = t5133*t5090;
  t5135 = t5099*t5103*t5086;
  t5136 = -1.*t5108*t5086*t5109;
  t5138 = t5135 + t5136;
  t5139 = t5092*t5138;
  t5150 = t5134 + t5139;
  t5226 = t5225*t5090;
  t5232 = t5092*t5231;
  t5234 = t5226 + t5232;
  t5237 = t5092*t5225;
  t5238 = -1.*t5090*t5231;
  t5239 = t5237 + t5238;
  t5246 = t5103*t5108*t5086;
  t5247 = t5099*t5086*t5109;
  t5248 = t5246 + t5247;
  t5157 = -1.*t5099*t5103;
  t5161 = t5108*t5109;
  t5166 = t5157 + t5161;
  t5211 = -1.*t5166*t5210;
  t5249 = t5248*t5210;
  t5091 = t5086*t5090;
  t5112 = t5092*t5111;
  t5113 = t5091 + t5112;
  t5254 = t5092*t5133;
  t5255 = -1.*t5090*t5138;
  t5256 = t5254 + t5255;
  t5293 = -1.*t5248*t5210;
  t5299 = t5117*t5210;
  t5307 = -1.*t5225*t5133;
  t5311 = t5225*t5086;
  t5347 = t5166*t5210;
  t5358 = -1.*t5117*t5210;
  p_output1[0]=t5113;
  p_output1[1]=t5114*t5117 - 1.*t5119*t5123;
  p_output1[2]=t5117*t5119 + t5114*t5123;
  p_output1[3]=t5150*(t5211 - 1.*t5092*t5216*t5234 + t5090*t5216*t5239) + t5092*t5216*(t5150*t5234 + t5249 + t5239*t5256);
  p_output1[4]=(t5211 - 1.*t5216*t5231)*t5248 + t5166*(t5133*t5225 + t5138*t5231 + t5249);
  p_output1[5]=t5133*(t5099*t5205 - 1.*t5108*t5208);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-0.15121*t5106 - 0.15121*t5133;
  p_output1[16]=0.28121*t5005 - 0.305*t4981*t5005 + t5005*t5194;
  p_output1[17]=0;
  p_output1[18]=t5092*t5216;
  p_output1[19]=t5114*t5166 + t5090*t5119*t5216;
  p_output1[20]=t5119*t5166 - 1.*t5090*t5114*t5216;
  p_output1[21]=t5113*(-1.*t5150*t5234 - 1.*t5239*t5256 + t5293) + t5150*(t5113*t5234 + t5123*t5239 + t5299);
  p_output1[22]=t5117*(-1.*t5138*t5231 + t5293 + t5307) + t5248*(t5111*t5231 + t5299 + t5311);
  p_output1[23]=t5086*(-1.*t5086*t5108*t5205 - 1.*t5086*t5099*t5208 + t5307) + t5133*(t5106*t5108*t5205 + t5099*t5106*t5208 + t5311);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=-0.15121 + t5086*(-1.*t5086*t5203 + t5307) + t5133*(t5106*t5203 + t5311);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t5150;
  p_output1[37]=t5114*t5248 - 1.*t5119*t5256;
  p_output1[38]=t5119*t5248 + t5114*t5256;
  p_output1[39]=t5113*(t5092*t5216*t5234 - 1.*t5090*t5216*t5239 + t5347) + t5092*t5216*(-1.*t5113*t5234 - 1.*t5123*t5239 + t5358);
  p_output1[40]=t5117*(t5216*t5231 + t5347) + t5166*(-1.*t5086*t5225 - 1.*t5111*t5231 + t5358);
  p_output1[41]=t5086*(-1.*t5099*t5205 + t5108*t5208);
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
  p_output1[52]=0.28121*t4981 + 0.305*Power(t5005,2) + t4981*t5194;
  p_output1[53]=-0.305;
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

#include "fRrFoot_map_ParallelStance.hh"

namespace SymFunction
{

void fRrFoot_map_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
