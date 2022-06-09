/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:50:04 GMT+02:00
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
  double t3456;
  double t3178;
  double t10163;
  double t10241;
  double t10172;
  double t10231;
  double t10242;
  double t3033;
  double t10240;
  double t10247;
  double t10251;
  double t10168;
  double t10254;
  double t10256;
  double t10257;
  double t10253;
  double t10276;
  double t10278;
  double t10258;
  double t10260;
  double t10261;
  double t10266;
  double t10267;
  double t10268;
  double t10269;
  double t10270;
  double t10271;
  double t10279;
  double t10280;
  double t10281;
  double t10286;
  double t10287;
  double t10288;
  double t10291;
  double t10292;
  double t10293;
  double t10298;
  double t10299;
  double t10301;
  double t10303;
  double t10304;
  double t10306;
  double t10252;
  double t10262;
  double t10263;
  double t10331;
  double t10333;
  double t10334;
  double t10336;
  double t10337;
  double t10339;
  double t10340;
  double t10341;
  double t10343;
  double t3180;
  double t10169;
  double t10170;
  double t10330;
  double t10335;
  double t10344;
  double t10345;
  double t10349;
  double t10350;
  double t10351;
  double t10352;
  double t10353;
  double t10354;
  double t10325;
  double t10326;
  double t10328;
  double t10329;
  double t10346;
  double t10347;
  double t10358;
  double t10359;
  double t10360;
  double t10362;
  double t10363;
  double t10364;
  double t10348;
  double t10355;
  double t10356;
  double t10361;
  double t10365;
  double t10366;
  double t10368;
  double t10369;
  double t10370;
  double t10265;
  double t10272;
  double t10273;
  double t10357;
  double t10374;
  double t10381;
  double t10386;
  double t10393;
  double t10398;
  double t10426;
  double t10430;
  double t10406;
  double t10410;
  double t10420;
  double t10416;
  double t10460;
  double t10455;
  t3456 = Cos(var1[12]);
  t3178 = Sin(var1[4]);
  t10163 = Cos(var1[4]);
  t10241 = Cos(var1[13]);
  t10172 = Cos(var1[14]);
  t10231 = Sin(var1[13]);
  t10242 = Sin(var1[14]);
  t3033 = Sin(var1[12]);
  t10240 = t10172*t10231;
  t10247 = -1.*t10241*t10242;
  t10251 = t10240 + t10247;
  t10168 = Sin(var1[5]);
  t10254 = t10241*t10172;
  t10256 = t10231*t10242;
  t10257 = t10254 + t10256;
  t10253 = Cos(var1[5]);
  t10276 = Cos(var1[3]);
  t10278 = Sin(var1[3]);
  t10258 = t10253*t10257;
  t10260 = t3033*t10251*t10168;
  t10261 = t10258 + t10260;
  t10266 = -1.*t10172*t10231;
  t10267 = t10241*t10242;
  t10268 = t10266 + t10267;
  t10269 = t10253*t10268;
  t10270 = t3033*t10257*t10168;
  t10271 = t10269 + t10270;
  t10279 = t10163*t3033;
  t10280 = t3456*t3178*t10168;
  t10281 = t10279 + t10280;
  t10286 = -1.*t10253*t3033*t10251;
  t10287 = t10257*t10168;
  t10288 = t10286 + t10287;
  t10291 = t3456*t10163*t10251;
  t10292 = -1.*t3178*t10261;
  t10293 = t10291 + t10292;
  t10298 = -1.*t10253*t3033*t10257;
  t10299 = t10268*t10168;
  t10301 = t10298 + t10299;
  t10303 = t3456*t10163*t10257;
  t10304 = -1.*t3178*t10271;
  t10306 = t10303 + t10304;
  t10252 = t3456*t10251*t3178;
  t10262 = t10163*t10261;
  t10263 = t10252 + t10262;
  t10331 = -0.0641*t10172;
  t10333 = -0.28*t10242;
  t10334 = t10331 + t10333;
  t10336 = -1.*t10172;
  t10337 = 1. + t10336;
  t10339 = 0.075*t10337;
  t10340 = 0.355*t10172;
  t10341 = -0.0641*t10242;
  t10343 = t10339 + t10340 + t10341;
  t3180 = t3033*t3178;
  t10169 = -1.*t3456*t10163*t10168;
  t10170 = t3180 + t10169;
  t10330 = -0.325*t10231;
  t10335 = t10241*t10334;
  t10344 = t10231*t10343;
  t10345 = t10330 + t10335 + t10344;
  t10349 = -1.*t10241;
  t10350 = 1. + t10349;
  t10351 = 0.325*t10350;
  t10352 = -1.*t10231*t10334;
  t10353 = t10241*t10343;
  t10354 = t10351 + t10352 + t10353;
  t10325 = -1.*t3456;
  t10326 = 1. + t10325;
  t10328 = -0.1575*t10326;
  t10329 = -0.2255*t3456;
  t10346 = -1.*t3033*t10345;
  t10347 = t10328 + t10329 + t10346;
  t10358 = -0.068*t3033;
  t10359 = t3456*t10345;
  t10360 = t10358 + t10359;
  t10362 = t10253*t10354;
  t10363 = -1.*t10347*t10168;
  t10364 = t10362 + t10363;
  t10348 = t10253*t10347;
  t10355 = t10354*t10168;
  t10356 = t10348 + t10355;
  t10361 = t10360*t3178;
  t10365 = t10163*t10364;
  t10366 = t10361 + t10365;
  t10368 = t10163*t10360;
  t10369 = -1.*t3178*t10364;
  t10370 = t10368 + t10369;
  t10265 = t3456*t10257*t3178;
  t10272 = t10163*t10271;
  t10273 = t10265 + t10272;
  t10357 = t3456*t10253*t10356;
  t10374 = -1.*t10356*t10288;
  t10381 = t10356*t10288;
  t10386 = -1.*t10356*t10301;
  t10393 = -1.*t3456*t10253*t10356;
  t10398 = t10356*t10301;
  t10426 = -1.*t3033*t10360;
  t10430 = t3456*t10360*t10257;
  t10406 = t3033*t10360;
  t10410 = -1.*t3456*t10360*t10251;
  t10420 = -1.*t3456*t10360*t10257;
  t10416 = t3456*t10360*t10251;
  t10460 = t10354*t10257;
  t10455 = -1.*t10354*t10268;
  p_output1[0]=t10263*var2[0] + t10170*var2[1] + t10273*var2[2];
  p_output1[1]=(t10276*t10288 - 1.*t10278*t10293)*var2[0] + (-1.*t10278*t10281 + t10253*t10276*t3456)*var2[1] + (t10276*t10301 - 1.*t10278*t10306)*var2[2];
  p_output1[2]=(t10278*t10288 + t10276*t10293)*var2[0] + (t10276*t10281 + t10253*t10278*t3456)*var2[1] + (t10278*t10301 + t10276*t10306)*var2[2];
  p_output1[3]=(t10273*(-1.*t10170*t10366 - 1.*t10281*t10370 + t10393) + t10170*(t10273*t10366 + t10306*t10370 + t10398))*var2[0] + (t10273*(t10263*t10366 + t10293*t10370 + t10381) + t10263*(-1.*t10273*t10366 - 1.*t10306*t10370 + t10386))*var2[1] + (t10263*(t10357 + t10170*t10366 + t10281*t10370) + t10170*(-1.*t10263*t10366 - 1.*t10293*t10370 + t10374))*var2[2];
  p_output1[4]=(t10253*(t10271*t10364 + t10398 + t10430)*t3456 + t10301*(t10393 + t10426 + t10168*t10364*t3456))*var2[0] + (t10301*(t10261*t10364 + t10381 + t10416) + t10288*(-1.*t10271*t10364 + t10386 + t10420))*var2[1] + (t10253*(-1.*t10261*t10364 + t10374 + t10410)*t3456 + t10288*(t10357 + t10406 - 1.*t10168*t10364*t3456))*var2[2];
  p_output1[5]=(t3033*(t10268*t10354 + t10430 - 1.*t10257*t10347*t3033) + t10257*t3456*(t10426 - 1.*t10347*t3456))*var2[0] + (t10257*(t10416 + t10460 - 1.*t10251*t10347*t3033)*t3456 + t10251*(t10420 + t10455 + t10257*t10347*t3033)*t3456)*var2[1] + (t3033*(-1.*t10257*t10354 + t10410 + t10251*t10347*t3033) + t10251*t3456*(t10406 + t10347*t3456))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.1575*t10251 + 0.2255*t10268)*var2[0] + (t10257*(-1.*t10257*t10345 + t10455) + t10268*(t10251*t10345 + t10460))*var2[1] - 0.068*t10257*var2[2];
  p_output1[13]=(0.325*t10242 - 1.*t10172*t10334 - 1.*t10242*t10343)*var2[0] + (-0.325*t10172 - 1.*t10242*t10334 + t10172*t10343)*var2[2];
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

#include "fFrFoot_vec_DiagonalImpact2.hh"

namespace SymFunction
{

void fFrFoot_vec_DiagonalImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
