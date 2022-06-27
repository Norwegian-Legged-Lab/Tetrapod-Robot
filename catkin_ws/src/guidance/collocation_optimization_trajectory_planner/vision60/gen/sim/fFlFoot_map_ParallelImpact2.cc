/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:25:45 GMT+02:00
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
  double t8491;
  double t9246;
  double t9583;
  double t20848;
  double t22540;
  double t22776;
  double t22806;
  double t26237;
  double t26221;
  double t26216;
  double t26238;
  double t26239;
  double t26243;
  double t23170;
  double t8484;
  double t8485;
  double t26223;
  double t26247;
  double t26248;
  double t26309;
  double t26304;
  double t26305;
  double t26306;
  double t26303;
  double t26310;
  double t26311;
  double t26313;
  double t26377;
  double t26378;
  double t26379;
  double t26382;
  double t26384;
  double t26385;
  double t26387;
  double t26388;
  double t26390;
  double t26376;
  double t26380;
  double t26391;
  double t26392;
  double t26368;
  double t26372;
  double t26373;
  double t26374;
  double t26393;
  double t26394;
  double t26395;
  double t26397;
  double t26398;
  double t26399;
  double t26400;
  double t26402;
  double t26403;
  double t26404;
  double t26405;
  double t26407;
  double t26408;
  double t26410;
  double t26415;
  double t26416;
  double t26417;
  double t26424;
  double t26425;
  double t26426;
  double t26431;
  double t26432;
  double t26434;
  double t26418;
  double t26420;
  double t26421;
  double t26430;
  double t26435;
  double t26436;
  double t26437;
  double t26438;
  double t26439;
  double t26406;
  double t26411;
  double t26412;
  double t26427;
  double t26441;
  double t26442;
  double t26443;
  double t26444;
  double t26454;
  double t26457;
  double t26319;
  double t26320;
  double t26322;
  double t23045;
  double t26249;
  double t26298;
  double t26446;
  double t26447;
  double t26448;
  double t26485;
  double t26490;
  double t26500;
  double t26496;
  double t26510;
  double t26505;
  double t26529;
  double t26532;
  double t26539;
  double t26542;
  t8491 = Cos(var1[8]);
  t9246 = Sin(var1[7]);
  t9583 = t8491*t9246;
  t20848 = Cos(var1[7]);
  t22540 = Sin(var1[8]);
  t22776 = -1.*t20848*t22540;
  t22806 = t9583 + t22776;
  t26237 = Cos(var1[5]);
  t26221 = Sin(var1[6]);
  t26216 = Sin(var1[5]);
  t26238 = t20848*t8491;
  t26239 = t9246*t22540;
  t26243 = t26238 + t26239;
  t23170 = Cos(var1[4]);
  t8484 = Cos(var1[6]);
  t8485 = Sin(var1[4]);
  t26223 = t26216*t26221*t22806;
  t26247 = t26237*t26243;
  t26248 = t26223 + t26247;
  t26309 = Sin(var1[3]);
  t26304 = -1.*t26237*t26221*t22806;
  t26305 = t26216*t26243;
  t26306 = t26304 + t26305;
  t26303 = Cos(var1[3]);
  t26310 = t23170*t8484*t22806;
  t26311 = -1.*t8485*t26248;
  t26313 = t26310 + t26311;
  t26377 = -0.0641*t8491;
  t26378 = -0.28*t22540;
  t26379 = t26377 + t26378;
  t26382 = -1.*t8491;
  t26384 = 1. + t26382;
  t26385 = 0.075*t26384;
  t26387 = 0.355*t8491;
  t26388 = -0.0641*t22540;
  t26390 = t26385 + t26387 + t26388;
  t26376 = -0.325*t9246;
  t26380 = t20848*t26379;
  t26391 = t9246*t26390;
  t26392 = t26376 + t26380 + t26391;
  t26368 = -1.*t8484;
  t26372 = 1. + t26368;
  t26373 = 0.1575*t26372;
  t26374 = 0.2255*t8484;
  t26393 = -1.*t26221*t26392;
  t26394 = t26373 + t26374 + t26393;
  t26395 = -1.*t26216*t26394;
  t26397 = -1.*t20848;
  t26398 = 1. + t26397;
  t26399 = 0.325*t26398;
  t26400 = -1.*t9246*t26379;
  t26402 = t20848*t26390;
  t26403 = t26399 + t26400 + t26402;
  t26404 = t26237*t26403;
  t26405 = t26395 + t26404;
  t26407 = 0.068*t26221;
  t26408 = t8484*t26392;
  t26410 = t26407 + t26408;
  t26415 = -1.*t23170*t8484*t26216;
  t26416 = t8485*t26221;
  t26417 = t26415 + t26416;
  t26424 = t26237*t26394;
  t26425 = t26216*t26403;
  t26426 = t26424 + t26425;
  t26431 = -1.*t8491*t9246;
  t26432 = t20848*t22540;
  t26434 = t26431 + t26432;
  t26418 = t23170*t26405;
  t26420 = t8485*t26410;
  t26421 = t26418 + t26420;
  t26430 = t8484*t8485*t26243;
  t26435 = t26237*t26434;
  t26436 = t26216*t26221*t26243;
  t26437 = t26435 + t26436;
  t26438 = t23170*t26437;
  t26439 = t26430 + t26438;
  t26406 = -1.*t8485*t26405;
  t26411 = t23170*t26410;
  t26412 = t26406 + t26411;
  t26427 = -1.*t26237*t8484*t26426;
  t26441 = t26216*t26434;
  t26442 = -1.*t26237*t26221*t26243;
  t26443 = t26441 + t26442;
  t26444 = t26426*t26443;
  t26454 = -1.*t26221*t26410;
  t26457 = t8484*t26410*t26243;
  t26319 = t8484*t8485*t26216;
  t26320 = t23170*t26221;
  t26322 = t26319 + t26320;
  t23045 = t8484*t8485*t22806;
  t26249 = t23170*t26248;
  t26298 = t23045 + t26249;
  t26446 = t23170*t8484*t26243;
  t26447 = -1.*t8485*t26437;
  t26448 = t26446 + t26447;
  t26485 = t26426*t26306;
  t26490 = -1.*t26426*t26443;
  t26500 = -1.*t8484*t26410*t26243;
  t26496 = t8484*t26410*t22806;
  t26510 = t26403*t26243;
  t26505 = -1.*t26403*t26434;
  t26529 = t26237*t8484*t26426;
  t26532 = -1.*t26426*t26306;
  t26539 = t26221*t26410;
  t26542 = -1.*t8484*t26410*t22806;
  p_output1[0]=t26298;
  p_output1[1]=t26303*t26306 - 1.*t26309*t26313;
  p_output1[2]=t26306*t26309 + t26303*t26313;
  p_output1[3]=(-1.*t26322*t26412 - 1.*t26417*t26421 + t26427)*t26439 + t26417*(t26421*t26439 + t26444 + t26412*t26448);
  p_output1[4]=t26237*(t26405*t26437 + t26444 + t26457)*t8484 + t26443*(t26427 + t26454 + t26216*t26405*t8484);
  p_output1[5]=t26221*(-1.*t26221*t26243*t26394 + t26403*t26434 + t26457) + t26243*t8484*(t26454 - 1.*t26394*t8484);
  p_output1[6]=-0.1575*t22806 - 0.2255*t26434;
  p_output1[7]=0.325*t22540 - 1.*t22540*t26390 - 1.*t26379*t8491;
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
  p_output1[18]=t26417;
  p_output1[19]=-1.*t26309*t26322 + t26237*t26303*t8484;
  p_output1[20]=t26303*t26322 + t26237*t26309*t8484;
  p_output1[21]=t26439*(t26313*t26412 + t26298*t26421 + t26485) + t26298*(-1.*t26421*t26439 - 1.*t26412*t26448 + t26490);
  p_output1[22]=t26443*(t26248*t26405 + t26485 + t26496) + t26306*(-1.*t26405*t26437 + t26490 + t26500);
  p_output1[23]=t22806*(t26221*t26243*t26394 + t26500 + t26505)*t8484 + t26243*(-1.*t22806*t26221*t26394 + t26496 + t26510)*t8484;
  p_output1[24]=t26243*(-1.*t26243*t26392 + t26505) + t26434*(t22806*t26392 + t26510);
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
  p_output1[36]=t26439;
  p_output1[37]=t26303*t26443 - 1.*t26309*t26448;
  p_output1[38]=t26309*t26443 + t26303*t26448;
  p_output1[39]=t26298*(t26322*t26412 + t26417*t26421 + t26529) + t26417*(-1.*t26313*t26412 - 1.*t26298*t26421 + t26532);
  p_output1[40]=t26237*(-1.*t26248*t26405 + t26532 + t26542)*t8484 + t26306*(t26529 + t26539 - 1.*t26216*t26405*t8484);
  p_output1[41]=t26221*(t22806*t26221*t26394 - 1.*t26243*t26403 + t26542) + t22806*t8484*(t26539 + t26394*t8484);
  p_output1[42]=0.068*t26243;
  p_output1[43]=-1.*t22540*t26379 - 0.325*t8491 + t26390*t8491;
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
