/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:25:20 GMT+02:00
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
  double t24081;
  double t24113;
  double t24129;
  double t24130;
  double t24133;
  double t24136;
  double t24140;
  double t24160;
  double t14183;
  double t24223;
  double t17721;
  double t24224;
  double t24228;
  double t24230;
  double t24232;
  double t24227;
  double t24225;
  double t24234;
  double t24236;
  double t24288;
  double t24304;
  double t24254;
  double t24255;
  double t24256;
  double t24264;
  double t24279;
  double t24284;
  double t24289;
  double t24293;
  double t24298;
  double t24311;
  double t24312;
  double t24319;
  double t24335;
  double t24336;
  double t24337;
  double t24356;
  double t24357;
  double t24361;
  double t24363;
  double t24364;
  double t24365;
  double t24387;
  double t24388;
  double t24389;
  double t24391;
  double t24392;
  double t24393;
  double t24394;
  double t24395;
  double t24396;
  double t24386;
  double t24390;
  double t24397;
  double t24398;
  double t24246;
  double t24251;
  double t24252;
  double t24380;
  double t24382;
  double t24384;
  double t24385;
  double t24399;
  double t24400;
  double t24401;
  double t24402;
  double t24403;
  double t24404;
  double t24405;
  double t24407;
  double t24408;
  double t24409;
  double t24410;
  double t24412;
  double t24413;
  double t24414;
  double t24253;
  double t24286;
  double t24287;
  double t24422;
  double t24423;
  double t24424;
  double t24418;
  double t24419;
  double t24420;
  double t24411;
  double t24415;
  double t24416;
  double t24151;
  double t24237;
  double t24239;
  double t24426;
  double t24430;
  double t24436;
  double t24441;
  double t24452;
  double t24455;
  double t24468;
  double t24478;
  double t24493;
  double t24489;
  double t24507;
  double t24510;
  double t24538;
  double t24529;
  t24081 = Cos(var1[8]);
  t24113 = Sin(var1[7]);
  t24129 = t24081*t24113;
  t24130 = Cos(var1[7]);
  t24133 = Sin(var1[8]);
  t24136 = -1.*t24130*t24133;
  t24140 = t24129 + t24136;
  t24160 = Cos(var1[4]);
  t14183 = Cos(var1[6]);
  t24223 = Sin(var1[5]);
  t17721 = Sin(var1[4]);
  t24224 = Sin(var1[6]);
  t24228 = t24130*t24081;
  t24230 = t24113*t24133;
  t24232 = t24228 + t24230;
  t24227 = Cos(var1[5]);
  t24225 = t24223*t24224*t24140;
  t24234 = t24227*t24232;
  t24236 = t24225 + t24234;
  t24288 = Cos(var1[3]);
  t24304 = Sin(var1[3]);
  t24254 = -1.*t24081*t24113;
  t24255 = t24130*t24133;
  t24256 = t24254 + t24255;
  t24264 = t24227*t24256;
  t24279 = t24223*t24224*t24232;
  t24284 = t24264 + t24279;
  t24289 = -1.*t24227*t24224*t24140;
  t24293 = t24223*t24232;
  t24298 = t24289 + t24293;
  t24311 = t24160*t14183*t24140;
  t24312 = -1.*t17721*t24236;
  t24319 = t24311 + t24312;
  t24335 = t14183*t17721*t24223;
  t24336 = t24160*t24224;
  t24337 = t24335 + t24336;
  t24356 = t24223*t24256;
  t24357 = -1.*t24227*t24224*t24232;
  t24361 = t24356 + t24357;
  t24363 = t24160*t14183*t24232;
  t24364 = -1.*t17721*t24284;
  t24365 = t24363 + t24364;
  t24387 = -0.0641*t24081;
  t24388 = -0.28*t24133;
  t24389 = t24387 + t24388;
  t24391 = -1.*t24081;
  t24392 = 1. + t24391;
  t24393 = 0.075*t24392;
  t24394 = 0.355*t24081;
  t24395 = -0.0641*t24133;
  t24396 = t24393 + t24394 + t24395;
  t24386 = -0.325*t24113;
  t24390 = t24130*t24389;
  t24397 = t24113*t24396;
  t24398 = t24386 + t24390 + t24397;
  t24246 = -1.*t24160*t14183*t24223;
  t24251 = t17721*t24224;
  t24252 = t24246 + t24251;
  t24380 = -1.*t14183;
  t24382 = 1. + t24380;
  t24384 = 0.1575*t24382;
  t24385 = 0.2255*t14183;
  t24399 = -1.*t24224*t24398;
  t24400 = t24384 + t24385 + t24399;
  t24401 = -1.*t24223*t24400;
  t24402 = -1.*t24130;
  t24403 = 1. + t24402;
  t24404 = 0.325*t24403;
  t24405 = -1.*t24113*t24389;
  t24407 = t24130*t24396;
  t24408 = t24404 + t24405 + t24407;
  t24409 = t24227*t24408;
  t24410 = t24401 + t24409;
  t24412 = 0.068*t24224;
  t24413 = t14183*t24398;
  t24414 = t24412 + t24413;
  t24253 = t14183*t17721*t24232;
  t24286 = t24160*t24284;
  t24287 = t24253 + t24286;
  t24422 = t24227*t24400;
  t24423 = t24223*t24408;
  t24424 = t24422 + t24423;
  t24418 = t24160*t24410;
  t24419 = t17721*t24414;
  t24420 = t24418 + t24419;
  t24411 = -1.*t17721*t24410;
  t24415 = t24160*t24414;
  t24416 = t24411 + t24415;
  t24151 = t14183*t17721*t24140;
  t24237 = t24160*t24236;
  t24239 = t24151 + t24237;
  t24426 = -1.*t24227*t14183*t24424;
  t24430 = t24424*t24361;
  t24436 = t24424*t24298;
  t24441 = -1.*t24424*t24361;
  t24452 = t24227*t14183*t24424;
  t24455 = -1.*t24424*t24298;
  t24468 = -1.*t24224*t24414;
  t24478 = t14183*t24414*t24232;
  t24493 = -1.*t14183*t24414*t24232;
  t24489 = t14183*t24414*t24140;
  t24507 = t24224*t24414;
  t24510 = -1.*t14183*t24414*t24140;
  t24538 = t24408*t24232;
  t24529 = -1.*t24408*t24256;
  p_output1[0]=t24239;
  p_output1[1]=t24252;
  p_output1[2]=t24287;
  p_output1[3]=t24288*t24298 - 1.*t24304*t24319;
  p_output1[4]=t14183*t24227*t24288 - 1.*t24304*t24337;
  p_output1[5]=t24288*t24361 - 1.*t24304*t24365;
  p_output1[6]=t24298*t24304 + t24288*t24319;
  p_output1[7]=t14183*t24227*t24304 + t24288*t24337;
  p_output1[8]=t24304*t24361 + t24288*t24365;
  p_output1[9]=t24287*(-1.*t24337*t24416 - 1.*t24252*t24420 + t24426) + t24252*(t24365*t24416 + t24287*t24420 + t24430);
  p_output1[10]=t24287*(t24319*t24416 + t24239*t24420 + t24436) + t24239*(-1.*t24365*t24416 - 1.*t24287*t24420 + t24441);
  p_output1[11]=t24239*(t24337*t24416 + t24252*t24420 + t24452) + t24252*(-1.*t24319*t24416 - 1.*t24239*t24420 + t24455);
  p_output1[12]=t24361*(t14183*t24223*t24410 + t24426 + t24468) + t14183*t24227*(t24284*t24410 + t24430 + t24478);
  p_output1[13]=t24361*(t24236*t24410 + t24436 + t24489) + t24298*(-1.*t24284*t24410 + t24441 + t24493);
  p_output1[14]=t24298*(-1.*t14183*t24223*t24410 + t24452 + t24507) + t14183*t24227*(-1.*t24236*t24410 + t24455 + t24510);
  p_output1[15]=t14183*t24232*(-1.*t14183*t24400 + t24468) + t24224*(-1.*t24224*t24232*t24400 + t24256*t24408 + t24478);
  p_output1[16]=t14183*t24140*(t24224*t24232*t24400 + t24493 + t24529) + t14183*t24232*(-1.*t24140*t24224*t24400 + t24489 + t24538);
  p_output1[17]=t14183*t24140*(t14183*t24400 + t24507) + t24224*(t24140*t24224*t24400 - 1.*t24232*t24408 + t24510);
  p_output1[18]=-0.1575*t24140 - 0.2255*t24256;
  p_output1[19]=t24232*(-1.*t24232*t24398 + t24529) + t24256*(t24140*t24398 + t24538);
  p_output1[20]=0.068*t24232;
  p_output1[21]=0.325*t24133 - 1.*t24081*t24389 - 1.*t24133*t24396;
  p_output1[22]=0;
  p_output1[23]=-0.325*t24081 - 1.*t24133*t24389 + t24081*t24396;
  p_output1[24]=-0.0641;
  p_output1[25]=0;
  p_output1[26]=-0.28;
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
