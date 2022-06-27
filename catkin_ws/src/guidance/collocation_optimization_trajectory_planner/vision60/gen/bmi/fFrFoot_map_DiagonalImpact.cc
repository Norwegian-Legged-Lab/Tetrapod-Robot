/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:55:18 GMT+02:00
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
  double t6238;
  double t6179;
  double t6235;
  double t6245;
  double t6236;
  double t6246;
  double t6247;
  double t6259;
  double t6272;
  double t6263;
  double t6269;
  double t6270;
  double t6273;
  double t6148;
  double t6258;
  double t6252;
  double t6271;
  double t6275;
  double t6276;
  double t6286;
  double t6281;
  double t6282;
  double t6283;
  double t6280;
  double t6287;
  double t6289;
  double t6330;
  double t6357;
  double t6358;
  double t6359;
  double t6362;
  double t6363;
  double t6364;
  double t6365;
  double t6366;
  double t6367;
  double t6355;
  double t6360;
  double t6368;
  double t6370;
  double t6375;
  double t6376;
  double t6377;
  double t6378;
  double t6380;
  double t6381;
  double t6351;
  double t6352;
  double t6353;
  double t6354;
  double t6371;
  double t6372;
  double t6390;
  double t6391;
  double t6392;
  double t6395;
  double t6396;
  double t6397;
  double t6386;
  double t6387;
  double t6388;
  double t6374;
  double t6382;
  double t6384;
  double t6341;
  double t6342;
  double t6343;
  double t6394;
  double t6398;
  double t6399;
  double t6340;
  double t6345;
  double t6346;
  double t6347;
  double t6348;
  double t6350;
  double t6404;
  double t6405;
  double t6406;
  double t6410;
  double t6411;
  double t6412;
  double t6385;
  double t6413;
  double t6424;
  double t6428;
  double t6401;
  double t6402;
  double t6403;
  double t6257;
  double t6277;
  double t6279;
  double t6415;
  double t6416;
  double t6417;
  double t6454;
  double t6459;
  double t6469;
  double t6465;
  double t6479;
  double t6474;
  double t6496;
  double t6501;
  double t6507;
  double t6511;
  t6238 = Cos(var1[13]);
  t6179 = Cos(var1[14]);
  t6235 = Sin(var1[13]);
  t6245 = Sin(var1[14]);
  t6236 = t6179*t6235;
  t6246 = -1.*t6238*t6245;
  t6247 = t6236 + t6246;
  t6259 = Cos(var1[5]);
  t6272 = Sin(var1[12]);
  t6263 = t6238*t6179;
  t6269 = t6235*t6245;
  t6270 = t6263 + t6269;
  t6273 = Sin(var1[5]);
  t6148 = Cos(var1[12]);
  t6258 = Cos(var1[4]);
  t6252 = Sin(var1[4]);
  t6271 = t6259*t6270;
  t6275 = t6272*t6247*t6273;
  t6276 = t6271 + t6275;
  t6286 = Sin(var1[3]);
  t6281 = -1.*t6259*t6272*t6247;
  t6282 = t6270*t6273;
  t6283 = t6281 + t6282;
  t6280 = Cos(var1[3]);
  t6287 = t6148*t6258*t6247;
  t6289 = -1.*t6252*t6276;
  t6330 = t6287 + t6289;
  t6357 = -0.0641*t6179;
  t6358 = -0.28*t6245;
  t6359 = t6357 + t6358;
  t6362 = -1.*t6179;
  t6363 = 1. + t6362;
  t6364 = 0.075*t6363;
  t6365 = 0.355*t6179;
  t6366 = -0.0641*t6245;
  t6367 = t6364 + t6365 + t6366;
  t6355 = -0.325*t6235;
  t6360 = t6238*t6359;
  t6368 = t6235*t6367;
  t6370 = t6355 + t6360 + t6368;
  t6375 = -1.*t6238;
  t6376 = 1. + t6375;
  t6377 = 0.325*t6376;
  t6378 = -1.*t6235*t6359;
  t6380 = t6238*t6367;
  t6381 = t6377 + t6378 + t6380;
  t6351 = -1.*t6148;
  t6352 = 1. + t6351;
  t6353 = -0.1575*t6352;
  t6354 = -0.2255*t6148;
  t6371 = -1.*t6272*t6370;
  t6372 = t6353 + t6354 + t6371;
  t6390 = -0.068*t6272;
  t6391 = t6148*t6370;
  t6392 = t6390 + t6391;
  t6395 = t6259*t6381;
  t6396 = -1.*t6372*t6273;
  t6397 = t6395 + t6396;
  t6386 = t6272*t6252;
  t6387 = -1.*t6148*t6258*t6273;
  t6388 = t6386 + t6387;
  t6374 = t6259*t6372;
  t6382 = t6381*t6273;
  t6384 = t6374 + t6382;
  t6341 = -1.*t6179*t6235;
  t6342 = t6238*t6245;
  t6343 = t6341 + t6342;
  t6394 = t6392*t6252;
  t6398 = t6258*t6397;
  t6399 = t6394 + t6398;
  t6340 = t6148*t6270*t6252;
  t6345 = t6259*t6343;
  t6346 = t6272*t6270*t6273;
  t6347 = t6345 + t6346;
  t6348 = t6258*t6347;
  t6350 = t6340 + t6348;
  t6404 = t6258*t6392;
  t6405 = -1.*t6252*t6397;
  t6406 = t6404 + t6405;
  t6410 = -1.*t6259*t6272*t6270;
  t6411 = t6343*t6273;
  t6412 = t6410 + t6411;
  t6385 = -1.*t6148*t6259*t6384;
  t6413 = t6384*t6412;
  t6424 = -1.*t6272*t6392;
  t6428 = t6148*t6392*t6270;
  t6401 = t6258*t6272;
  t6402 = t6148*t6252*t6273;
  t6403 = t6401 + t6402;
  t6257 = t6148*t6247*t6252;
  t6277 = t6258*t6276;
  t6279 = t6257 + t6277;
  t6415 = t6148*t6258*t6270;
  t6416 = -1.*t6252*t6347;
  t6417 = t6415 + t6416;
  t6454 = t6384*t6283;
  t6459 = -1.*t6384*t6412;
  t6469 = -1.*t6148*t6392*t6270;
  t6465 = t6148*t6392*t6247;
  t6479 = t6381*t6270;
  t6474 = -1.*t6381*t6343;
  t6496 = t6148*t6259*t6384;
  t6501 = -1.*t6384*t6283;
  t6507 = t6272*t6392;
  t6511 = -1.*t6148*t6392*t6247;
  p_output1[0]=t6279;
  p_output1[1]=t6280*t6283 - 1.*t6286*t6330;
  p_output1[2]=t6283*t6286 + t6280*t6330;
  p_output1[3]=t6350*(t6385 - 1.*t6388*t6399 - 1.*t6403*t6406) + t6388*(t6350*t6399 + t6413 + t6406*t6417);
  p_output1[4]=t6412*(t6385 + t6148*t6273*t6397 + t6424) + t6148*t6259*(t6347*t6397 + t6413 + t6428);
  p_output1[5]=t6148*t6270*(-1.*t6148*t6372 + t6424) + t6272*(-1.*t6270*t6272*t6372 + t6343*t6381 + t6428);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0.1575*t6247 + 0.2255*t6343;
  p_output1[13]=0.325*t6245 - 1.*t6179*t6359 - 1.*t6245*t6367;
  p_output1[14]=-0.0641;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t6388;
  p_output1[19]=t6148*t6259*t6280 - 1.*t6286*t6403;
  p_output1[20]=t6148*t6259*t6286 + t6280*t6403;
  p_output1[21]=t6350*(t6279*t6399 + t6330*t6406 + t6454) + t6279*(-1.*t6350*t6399 - 1.*t6406*t6417 + t6459);
  p_output1[22]=t6412*(t6276*t6397 + t6454 + t6465) + t6283*(-1.*t6347*t6397 + t6459 + t6469);
  p_output1[23]=t6148*t6247*(t6270*t6272*t6372 + t6469 + t6474) + t6148*t6270*(-1.*t6247*t6272*t6372 + t6465 + t6479);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=t6270*(-1.*t6270*t6370 + t6474) + t6343*(t6247*t6370 + t6479);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t6350;
  p_output1[37]=t6280*t6412 - 1.*t6286*t6417;
  p_output1[38]=t6286*t6412 + t6280*t6417;
  p_output1[39]=t6279*(t6388*t6399 + t6403*t6406 + t6496) + t6388*(-1.*t6279*t6399 - 1.*t6330*t6406 + t6501);
  p_output1[40]=t6283*(-1.*t6148*t6273*t6397 + t6496 + t6507) + t6148*t6259*(-1.*t6276*t6397 + t6501 + t6511);
  p_output1[41]=t6148*t6247*(t6148*t6372 + t6507) + t6272*(t6247*t6272*t6372 - 1.*t6270*t6381 + t6511);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.068*t6270;
  p_output1[49]=-0.325*t6179 - 1.*t6245*t6359 + t6179*t6367;
  p_output1[50]=-0.28;
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

#include "fFrFoot_map_DiagonalImpact.hh"

namespace SymFunction
{

void fFrFoot_map_DiagonalImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
