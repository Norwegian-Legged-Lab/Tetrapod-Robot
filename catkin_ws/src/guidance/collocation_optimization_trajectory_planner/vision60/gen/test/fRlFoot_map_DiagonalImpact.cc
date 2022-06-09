/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 10:40:45 GMT+02:00
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
  double t30194;
  double t24186;
  double t27202;
  double t30195;
  double t30188;
  double t30196;
  double t30198;
  double t30313;
  double t30325;
  double t30314;
  double t30319;
  double t30323;
  double t30326;
  double t10173;
  double t30312;
  double t30240;
  double t30324;
  double t30329;
  double t30330;
  double t30340;
  double t30336;
  double t30337;
  double t30338;
  double t30335;
  double t30341;
  double t30342;
  double t30343;
  double t30365;
  double t30366;
  double t30367;
  double t30369;
  double t30371;
  double t30372;
  double t30373;
  double t30375;
  double t30376;
  double t30363;
  double t30368;
  double t30377;
  double t30378;
  double t30383;
  double t30385;
  double t30386;
  double t30387;
  double t30388;
  double t30389;
  double t30358;
  double t30360;
  double t30361;
  double t30362;
  double t30380;
  double t30381;
  double t30396;
  double t30397;
  double t30398;
  double t30400;
  double t30402;
  double t30403;
  double t30393;
  double t30394;
  double t30395;
  double t30382;
  double t30390;
  double t30391;
  double t30350;
  double t30351;
  double t30352;
  double t30399;
  double t30404;
  double t30405;
  double t30349;
  double t30353;
  double t30354;
  double t30355;
  double t30356;
  double t30357;
  double t30411;
  double t30413;
  double t30414;
  double t30419;
  double t30420;
  double t30421;
  double t30392;
  double t30422;
  double t30431;
  double t30435;
  double t30408;
  double t30409;
  double t30410;
  double t30305;
  double t30331;
  double t30334;
  double t30424;
  double t30425;
  double t30426;
  double t30461;
  double t30466;
  double t30476;
  double t30472;
  double t30486;
  double t30481;
  double t30503;
  double t30508;
  double t30514;
  double t30518;
  t30194 = Cos(var1[10]);
  t24186 = Cos(var1[11]);
  t27202 = Sin(var1[10]);
  t30195 = Sin(var1[11]);
  t30188 = t24186*t27202;
  t30196 = -1.*t30194*t30195;
  t30198 = t30188 + t30196;
  t30313 = Cos(var1[5]);
  t30325 = Sin(var1[9]);
  t30314 = t30194*t24186;
  t30319 = t27202*t30195;
  t30323 = t30314 + t30319;
  t30326 = Sin(var1[5]);
  t10173 = Cos(var1[9]);
  t30312 = Cos(var1[4]);
  t30240 = Sin(var1[4]);
  t30324 = t30313*t30323;
  t30329 = t30325*t30198*t30326;
  t30330 = t30324 + t30329;
  t30340 = Sin(var1[3]);
  t30336 = -1.*t30313*t30325*t30198;
  t30337 = t30323*t30326;
  t30338 = t30336 + t30337;
  t30335 = Cos(var1[3]);
  t30341 = t10173*t30312*t30198;
  t30342 = -1.*t30240*t30330;
  t30343 = t30341 + t30342;
  t30365 = -0.0641*t24186;
  t30366 = -0.28*t30195;
  t30367 = t30365 + t30366;
  t30369 = -1.*t24186;
  t30371 = 1. + t30369;
  t30372 = -0.575*t30371;
  t30373 = -0.295*t24186;
  t30375 = -0.0641*t30195;
  t30376 = t30372 + t30373 + t30375;
  t30363 = 0.325*t27202;
  t30368 = t30194*t30367;
  t30377 = t27202*t30376;
  t30378 = t30363 + t30368 + t30377;
  t30383 = -1.*t30194;
  t30385 = 1. + t30383;
  t30386 = -0.325*t30385;
  t30387 = -1.*t27202*t30367;
  t30388 = t30194*t30376;
  t30389 = t30386 + t30387 + t30388;
  t30358 = -1.*t10173;
  t30360 = 1. + t30358;
  t30361 = 0.1575*t30360;
  t30362 = 0.2255*t10173;
  t30380 = -1.*t30325*t30378;
  t30381 = t30361 + t30362 + t30380;
  t30396 = 0.068*t30325;
  t30397 = t10173*t30378;
  t30398 = t30396 + t30397;
  t30400 = t30313*t30389;
  t30402 = -1.*t30381*t30326;
  t30403 = t30400 + t30402;
  t30393 = t30325*t30240;
  t30394 = -1.*t10173*t30312*t30326;
  t30395 = t30393 + t30394;
  t30382 = t30313*t30381;
  t30390 = t30389*t30326;
  t30391 = t30382 + t30390;
  t30350 = -1.*t24186*t27202;
  t30351 = t30194*t30195;
  t30352 = t30350 + t30351;
  t30399 = t30398*t30240;
  t30404 = t30312*t30403;
  t30405 = t30399 + t30404;
  t30349 = t10173*t30323*t30240;
  t30353 = t30313*t30352;
  t30354 = t30325*t30323*t30326;
  t30355 = t30353 + t30354;
  t30356 = t30312*t30355;
  t30357 = t30349 + t30356;
  t30411 = t30312*t30398;
  t30413 = -1.*t30240*t30403;
  t30414 = t30411 + t30413;
  t30419 = -1.*t30313*t30325*t30323;
  t30420 = t30352*t30326;
  t30421 = t30419 + t30420;
  t30392 = -1.*t10173*t30313*t30391;
  t30422 = t30391*t30421;
  t30431 = -1.*t30325*t30398;
  t30435 = t10173*t30398*t30323;
  t30408 = t30312*t30325;
  t30409 = t10173*t30240*t30326;
  t30410 = t30408 + t30409;
  t30305 = t10173*t30198*t30240;
  t30331 = t30312*t30330;
  t30334 = t30305 + t30331;
  t30424 = t10173*t30312*t30323;
  t30425 = -1.*t30240*t30355;
  t30426 = t30424 + t30425;
  t30461 = t30391*t30338;
  t30466 = -1.*t30391*t30421;
  t30476 = -1.*t10173*t30398*t30323;
  t30472 = t10173*t30398*t30198;
  t30486 = t30389*t30323;
  t30481 = -1.*t30389*t30352;
  t30503 = t10173*t30313*t30391;
  t30508 = -1.*t30391*t30338;
  t30514 = t30325*t30398;
  t30518 = -1.*t10173*t30398*t30198;
  p_output1[0]=t30334;
  p_output1[1]=t30335*t30338 - 1.*t30340*t30343;
  p_output1[2]=t30338*t30340 + t30335*t30343;
  p_output1[3]=t30357*(t30392 - 1.*t30395*t30405 - 1.*t30410*t30414) + t30395*(t30357*t30405 + t30422 + t30414*t30426);
  p_output1[4]=t30421*(t30392 + t10173*t30326*t30403 + t30431) + t10173*t30313*(t30355*t30403 + t30422 + t30435);
  p_output1[5]=t10173*t30323*(-1.*t10173*t30381 + t30431) + t30325*(-1.*t30323*t30325*t30381 + t30352*t30389 + t30435);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-0.1575*t30198 - 0.2255*t30352;
  p_output1[10]=-0.325*t30195 - 1.*t24186*t30367 - 1.*t30195*t30376;
  p_output1[11]=-0.0641;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t30395;
  p_output1[19]=t10173*t30313*t30335 - 1.*t30340*t30410;
  p_output1[20]=t10173*t30313*t30340 + t30335*t30410;
  p_output1[21]=t30357*(t30334*t30405 + t30343*t30414 + t30461) + t30334*(-1.*t30357*t30405 - 1.*t30414*t30426 + t30466);
  p_output1[22]=t30421*(t30330*t30403 + t30461 + t30472) + t30338*(-1.*t30355*t30403 + t30466 + t30476);
  p_output1[23]=t10173*t30198*(t30323*t30325*t30381 + t30476 + t30481) + t10173*t30323*(-1.*t30198*t30325*t30381 + t30472 + t30486);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t30323*(-1.*t30323*t30378 + t30481) + t30352*(t30198*t30378 + t30486);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t30357;
  p_output1[37]=t30335*t30421 - 1.*t30340*t30426;
  p_output1[38]=t30340*t30421 + t30335*t30426;
  p_output1[39]=t30334*(t30395*t30405 + t30410*t30414 + t30503) + t30395*(-1.*t30334*t30405 - 1.*t30343*t30414 + t30508);
  p_output1[40]=t30338*(-1.*t10173*t30326*t30403 + t30503 + t30514) + t10173*t30313*(-1.*t30330*t30403 + t30508 + t30518);
  p_output1[41]=t10173*t30198*(t10173*t30381 + t30514) + t30325*(t30198*t30325*t30381 - 1.*t30323*t30389 + t30518);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0.068*t30323;
  p_output1[46]=0.325*t24186 - 1.*t30195*t30367 + t24186*t30376;
  p_output1[47]=-0.28;
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

#include "fRlFoot_map_DiagonalImpact.hh"

namespace SymFunction
{

void fRlFoot_map_DiagonalImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
