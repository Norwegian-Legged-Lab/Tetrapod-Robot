/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:21:27 GMT+02:00
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
  double t4830;
  double t2875;
  double t3113;
  double t4861;
  double t5037;
  double t5038;
  double t5054;
  double t5029;
  double t9676;
  double t5024;
  double t12166;
  double t5010;
  double t3271;
  double t4873;
  double t4919;
  double t4957;
  double t7044;
  double t12398;
  double t12557;
  double t17863;
  double t13357;
  double t13514;
  double t14822;
  double t13117;
  double t17873;
  double t17917;
  double t21238;
  double t21271;
  double t21272;
  double t21276;
  double t21277;
  double t21278;
  double t21279;
  double t21280;
  double t21281;
  double t21282;
  double t21283;
  double t21284;
  double t21286;
  double t21287;
  double t21294;
  double t21295;
  double t21296;
  double t21273;
  double t21274;
  double t21275;
  double t21288;
  double t21290;
  double t21301;
  double t21303;
  double t21304;
  double t21305;
  double t21306;
  double t21307;
  double t21308;
  double t21310;
  double t21311;
  double t21312;
  double t21292;
  double t21297;
  double t21299;
  double t21257;
  double t21259;
  double t21260;
  double t21261;
  double t21262;
  double t21264;
  double t21265;
  double t21266;
  double t21267;
  double t21309;
  double t21313;
  double t21314;
  double t21316;
  double t21317;
  double t21318;
  double t21322;
  double t21323;
  double t21324;
  double t21268;
  double t21269;
  double t21270;
  double t21300;
  double t21325;
  double t4974;
  double t12689;
  double t12938;
  double t21327;
  double t21328;
  double t21330;
  double t21363;
  double t21368;
  double t21374;
  double t21378;
  double t21405;
  double t21410;
  t4830 = Cos(var1[10]);
  t2875 = Cos(var1[11]);
  t3113 = Sin(var1[10]);
  t4861 = Sin(var1[11]);
  t5037 = -1.*t4830*t2875;
  t5038 = -1.*t3113*t4861;
  t5054 = t5037 + t5038;
  t5029 = Cos(var1[5]);
  t9676 = Sin(var1[9]);
  t5024 = Cos(var1[9]);
  t12166 = Sin(var1[5]);
  t5010 = Cos(var1[4]);
  t3271 = -1.*t2875*t3113;
  t4873 = t4830*t4861;
  t4919 = t3271 + t4873;
  t4957 = Sin(var1[4]);
  t7044 = t5024*t5029*t5054;
  t12398 = -1.*t9676*t5054*t12166;
  t12557 = t7044 + t12398;
  t17863 = Sin(var1[3]);
  t13357 = t5029*t9676*t5054;
  t13514 = t5024*t5054*t12166;
  t14822 = t13357 + t13514;
  t13117 = Cos(var1[3]);
  t17873 = t5010*t4919;
  t17917 = -1.*t4957*t12557;
  t21238 = t17873 + t17917;
  t21271 = -1.*t5024;
  t21272 = 1. + t21271;
  t21276 = -1.*t4830;
  t21277 = 1. + t21276;
  t21278 = -0.28121*t21277;
  t21279 = -1.*t2875;
  t21280 = 1. + t21279;
  t21281 = -0.50321*t21280;
  t21282 = -0.19821*t2875;
  t21283 = t21281 + t21282;
  t21284 = t4830*t21283;
  t21286 = 0.305*t3113*t4861;
  t21287 = t21278 + t21284 + t21286;
  t21294 = -0.15121*t21272;
  t21295 = t5024*t21287;
  t21296 = t21294 + t21295;
  t21273 = 0.15121*t21272;
  t21274 = 0.15121*t5024;
  t21275 = 0.15121*t9676;
  t21288 = t9676*t21287;
  t21290 = t21273 + t21274 + t21275 + t21288;
  t21301 = t5029*t9676;
  t21303 = t5024*t12166;
  t21304 = t21301 + t21303;
  t21305 = 0.28121*t3113;
  t21306 = t21283*t3113;
  t21307 = -0.305*t4830*t4861;
  t21308 = t21305 + t21306 + t21307;
  t21310 = t5029*t21296;
  t21311 = -1.*t21290*t12166;
  t21312 = t21310 + t21311;
  t21292 = t5029*t21290;
  t21297 = t21296*t12166;
  t21299 = t21292 + t21297;
  t21257 = t4830*t2875;
  t21259 = t3113*t4861;
  t21260 = t21257 + t21259;
  t21261 = t21260*t4957;
  t21262 = t5024*t5029*t4919;
  t21264 = -1.*t9676*t4919*t12166;
  t21265 = t21262 + t21264;
  t21266 = t5010*t21265;
  t21267 = t21261 + t21266;
  t21309 = t21308*t4957;
  t21313 = t5010*t21312;
  t21314 = t21309 + t21313;
  t21316 = t5010*t21308;
  t21317 = -1.*t4957*t21312;
  t21318 = t21316 + t21317;
  t21322 = t5029*t9676*t4919;
  t21323 = t5024*t4919*t12166;
  t21324 = t21322 + t21323;
  t21268 = -1.*t5024*t5029;
  t21269 = t9676*t12166;
  t21270 = t21268 + t21269;
  t21300 = -1.*t21270*t21299;
  t21325 = t21324*t21299;
  t4974 = t4919*t4957;
  t12689 = t5010*t12557;
  t12938 = t4974 + t12689;
  t21327 = t5010*t21260;
  t21328 = -1.*t4957*t21265;
  t21330 = t21327 + t21328;
  t21363 = -1.*t21324*t21299;
  t21368 = t14822*t21299;
  t21374 = -1.*t21308*t21260;
  t21378 = t21308*t4919;
  t21405 = t21270*t21299;
  t21410 = -1.*t14822*t21299;
  p_output1[0]=t12938;
  p_output1[1]=t13117*t14822 - 1.*t17863*t21238;
  p_output1[2]=t14822*t17863 + t13117*t21238;
  p_output1[3]=t21304*(t21267*t21314 + t21325 + t21318*t21330)*t5010 + t21267*(t21300 + t21304*t21318*t4957 - 1.*t21304*t21314*t5010);
  p_output1[4]=(t21300 - 1.*t21304*t21312)*t21324 + t21270*(t21260*t21308 + t21265*t21312 + t21325);
  p_output1[5]=t21260*(t21290*t5024 - 1.*t21296*t9676);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.15121*t21260 + 0.15121*t5054;
  p_output1[10]=0.28121*t4861 + t21283*t4861 - 0.305*t2875*t4861;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t21304*t5010;
  p_output1[19]=t13117*t21270 + t17863*t21304*t4957;
  p_output1[20]=t17863*t21270 - 1.*t13117*t21304*t4957;
  p_output1[21]=t12938*(-1.*t21267*t21314 - 1.*t21318*t21330 + t21363) + t21267*(t12938*t21314 + t21238*t21318 + t21368);
  p_output1[22]=t14822*(-1.*t21265*t21312 + t21363 + t21374) + t21324*(t12557*t21312 + t21368 + t21378);
  p_output1[23]=t4919*(t21374 - 1.*t21296*t4919*t5024 - 1.*t21290*t4919*t9676) + t21260*(t21378 + t21296*t5024*t5054 + t21290*t5054*t9676);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.15121 + t4919*(t21374 - 1.*t21287*t4919) + t21260*(t21378 + t21287*t5054);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t21267;
  p_output1[37]=t13117*t21324 - 1.*t17863*t21330;
  p_output1[38]=t17863*t21324 + t13117*t21330;
  p_output1[39]=t21304*(-1.*t12938*t21314 - 1.*t21238*t21318 + t21410)*t5010 + t12938*(t21405 - 1.*t21304*t21318*t4957 + t21304*t21314*t5010);
  p_output1[40]=t14822*(t21304*t21312 + t21405) + t21270*(-1.*t12557*t21312 + t21410 - 1.*t21308*t4919);
  p_output1[41]=t4919*(-1.*t21290*t5024 + t21296*t9676);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0.28121*t2875 + t21283*t2875 + 0.305*Power(t4861,2);
  p_output1[47]=-0.305;
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

#include "fRlFoot_map_DiagonalImpact2.hh"

namespace SymFunction
{

void fRlFoot_map_DiagonalImpact2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
