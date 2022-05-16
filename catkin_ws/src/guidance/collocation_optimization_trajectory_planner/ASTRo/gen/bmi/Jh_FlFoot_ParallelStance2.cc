/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:34 GMT+02:00
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
  double t19138;
  double t18547;
  double t19112;
  double t19922;
  double t46004;
  double t46007;
  double t46011;
  double t45975;
  double t46003;
  double t46014;
  double t46002;
  double t46026;
  double t3518;
  double t46179;
  double t46180;
  double t46181;
  double t19117;
  double t20768;
  double t41259;
  double t46012;
  double t46034;
  double t46116;
  double t46258;
  double t46139;
  double t46153;
  double t46155;
  double t46224;
  double t46195;
  double t46196;
  double t46200;
  double t46225;
  double t46227;
  double t46231;
  double t46265;
  double t46276;
  double t46277;
  double t46286;
  double t46287;
  double t46288;
  double t46292;
  double t46293;
  double t46294;
  double t46296;
  double t46297;
  double t46298;
  double t46177;
  double t46213;
  double t46220;
  double t46312;
  double t46314;
  double t46316;
  double t46317;
  double t46318;
  double t46321;
  double t46322;
  double t46323;
  double t46325;
  double t46326;
  double t46328;
  double t46329;
  double t46330;
  double t46332;
  double t46333;
  double t46334;
  double t46338;
  double t46342;
  double t46351;
  double t46353;
  double t46375;
  double t46376;
  double t46378;
  double t46379;
  double t46381;
  double t46382;
  double t46383;
  double t46335;
  double t46355;
  double t46373;
  double t46380;
  double t46384;
  double t46385;
  double t46387;
  double t46388;
  double t46394;
  double t45799;
  double t46122;
  double t46138;
  double t46374;
  double t46407;
  double t46415;
  double t46422;
  double t46429;
  double t46434;
  double t46456;
  double t46461;
  t19138 = Cos(var1[7]);
  t18547 = Cos(var1[8]);
  t19112 = Sin(var1[7]);
  t19922 = Sin(var1[8]);
  t46004 = t19138*t18547;
  t46007 = t19112*t19922;
  t46011 = t46004 + t46007;
  t45975 = Cos(var1[4]);
  t46003 = Cos(var1[6]);
  t46014 = Sin(var1[5]);
  t46002 = Cos(var1[5]);
  t46026 = Sin(var1[6]);
  t3518 = Sin(var1[4]);
  t46179 = t18547*t19112;
  t46180 = -1.*t19138*t19922;
  t46181 = t46179 + t46180;
  t19117 = -1.*t18547*t19112;
  t20768 = t19138*t19922;
  t41259 = t19117 + t20768;
  t46012 = t46002*t46003*t46011;
  t46034 = -1.*t46014*t46026*t46011;
  t46116 = t46012 + t46034;
  t46258 = Sin(var1[3]);
  t46139 = -1.*t46003*t46014;
  t46153 = -1.*t46002*t46026;
  t46155 = t46139 + t46153;
  t46224 = Cos(var1[3]);
  t46195 = t46002*t46003*t46181;
  t46196 = -1.*t46014*t46026*t46181;
  t46200 = t46195 + t46196;
  t46225 = t46003*t46014*t46011;
  t46227 = t46002*t46026*t46011;
  t46231 = t46225 + t46227;
  t46265 = t45975*t41259;
  t46276 = -1.*t3518*t46116;
  t46277 = t46265 + t46276;
  t46286 = t46002*t46003;
  t46287 = -1.*t46014*t46026;
  t46288 = t46286 + t46287;
  t46292 = t46003*t46014*t46181;
  t46293 = t46002*t46026*t46181;
  t46294 = t46292 + t46293;
  t46296 = t45975*t46011;
  t46297 = -1.*t3518*t46200;
  t46298 = t46296 + t46297;
  t46177 = t3518*t46011;
  t46213 = t45975*t46200;
  t46220 = t46177 + t46213;
  t46312 = -1.*t46003;
  t46314 = 1. + t46312;
  t46316 = 0.15121*t46314;
  t46317 = -1.*t19138;
  t46318 = 1. + t46317;
  t46321 = 0.28121*t46318;
  t46322 = -1.*t18547;
  t46323 = 1. + t46322;
  t46325 = 0.50321*t46323;
  t46326 = 0.23321*t18547;
  t46328 = t46325 + t46326;
  t46329 = t19138*t46328;
  t46330 = -0.27*t19112*t19922;
  t46332 = t46321 + t46329 + t46330;
  t46333 = t46003*t46332;
  t46334 = t46316 + t46333;
  t46338 = 0.15121*t46003;
  t46342 = -0.15121*t46026;
  t46351 = t46026*t46332;
  t46353 = t46316 + t46338 + t46342 + t46351;
  t46375 = 0.28121*t19112;
  t46376 = -1.*t46328*t19112;
  t46378 = -0.27*t19138*t19922;
  t46379 = t46375 + t46376 + t46378;
  t46381 = t46002*t46334;
  t46382 = -1.*t46014*t46353;
  t46383 = t46381 + t46382;
  t46335 = t46014*t46334;
  t46355 = t46002*t46353;
  t46373 = t46335 + t46355;
  t46380 = t3518*t46379;
  t46384 = t45975*t46383;
  t46385 = t46380 + t46384;
  t46387 = t45975*t46379;
  t46388 = -1.*t3518*t46383;
  t46394 = t46387 + t46388;
  t45799 = t3518*t41259;
  t46122 = t45975*t46116;
  t46138 = t45799 + t46122;
  t46374 = -1.*t46288*t46373;
  t46407 = t46294*t46373;
  t46415 = -1.*t46294*t46373;
  t46422 = t46231*t46373;
  t46429 = t46288*t46373;
  t46434 = -1.*t46231*t46373;
  t46456 = -1.*t46379*t46011;
  t46461 = t46379*t41259;
  p_output1[0]=t46138;
  p_output1[1]=t45975*t46155;
  p_output1[2]=t46220;
  p_output1[3]=t46224*t46231 - 1.*t46258*t46277;
  p_output1[4]=t3518*t46155*t46258 + t46224*t46288;
  p_output1[5]=t46224*t46294 - 1.*t46258*t46298;
  p_output1[6]=t46231*t46258 + t46224*t46277;
  p_output1[7]=-1.*t3518*t46155*t46224 + t46258*t46288;
  p_output1[8]=t46258*t46294 + t46224*t46298;
  p_output1[9]=t46220*(t46374 - 1.*t45975*t46155*t46385 + t3518*t46155*t46394) + t45975*t46155*(t46220*t46385 + t46298*t46394 + t46407);
  p_output1[10]=t46138*(-1.*t46220*t46385 - 1.*t46298*t46394 + t46415) + t46220*(t46138*t46385 + t46277*t46394 + t46422);
  p_output1[11]=t46138*(t45975*t46155*t46385 - 1.*t3518*t46155*t46394 + t46429) + t45975*t46155*(-1.*t46138*t46385 - 1.*t46277*t46394 + t46434);
  p_output1[12]=t46294*(t46374 - 1.*t46155*t46383) + t46288*(t46011*t46379 + t46200*t46383 + t46407);
  p_output1[13]=t46231*(-1.*t46200*t46383 + t46415 + t46456) + t46294*(t46116*t46383 + t46422 + t46461);
  p_output1[14]=t46231*(t46155*t46383 + t46429) + t46288*(-1.*t41259*t46379 - 1.*t46116*t46383 + t46434);
  p_output1[15]=t46011*(t46026*t46334 - 1.*t46003*t46353);
  p_output1[16]=t41259*(-1.*t46003*t46181*t46334 - 1.*t46026*t46181*t46353 + t46456) + t46011*(t46003*t46011*t46334 + t46011*t46026*t46353 + t46461);
  p_output1[17]=t41259*(-1.*t46026*t46334 + t46003*t46353);
  p_output1[18]=0;
  p_output1[19]=-0.15121 + t41259*(-1.*t46181*t46332 + t46456) + t46011*(t46011*t46332 + t46461);
  p_output1[20]=0.15121*t41259 + 0.15121*t46181;
  p_output1[21]=0.28121*t19922 - 0.27*t18547*t19922 - 1.*t19922*t46328;
  p_output1[22]=0;
  p_output1[23]=0.28121*t18547 + 0.27*Power(t19922,2) - 1.*t18547*t46328;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=-0.27;
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

#include "Jh_FlFoot_ParallelStance2.hh"

namespace SymFunction
{

void Jh_FlFoot_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
