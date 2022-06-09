/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:49:53 GMT+02:00
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
  double t8117;
  double t8113;
  double t8114;
  double t8131;
  double t8115;
  double t8229;
  double t8238;
  double t8274;
  double t8281;
  double t8275;
  double t8276;
  double t8277;
  double t8282;
  double t8105;
  double t8268;
  double t8243;
  double t8279;
  double t8284;
  double t8285;
  double t8293;
  double t8289;
  double t8290;
  double t8291;
  double t8288;
  double t8294;
  double t8295;
  double t8296;
  double t8356;
  double t8357;
  double t8359;
  double t8367;
  double t8369;
  double t8370;
  double t8371;
  double t8372;
  double t8374;
  double t8355;
  double t8363;
  double t8377;
  double t8383;
  double t8398;
  double t8399;
  double t8400;
  double t8403;
  double t8404;
  double t8405;
  double t8345;
  double t8350;
  double t8352;
  double t8354;
  double t8392;
  double t8394;
  double t8421;
  double t8422;
  double t8423;
  double t8429;
  double t8430;
  double t8433;
  double t8418;
  double t8419;
  double t8420;
  double t8395;
  double t8406;
  double t8412;
  double t8317;
  double t8323;
  double t8324;
  double t8424;
  double t8434;
  double t8437;
  double t8314;
  double t8325;
  double t8330;
  double t8335;
  double t8340;
  double t8341;
  double t8448;
  double t8456;
  double t8461;
  double t8470;
  double t8474;
  double t8475;
  double t8413;
  double t8476;
  double t8487;
  double t8493;
  double t8439;
  double t8440;
  double t8442;
  double t8255;
  double t8286;
  double t8287;
  double t8478;
  double t8479;
  double t8480;
  double t8529;
  double t8534;
  double t8544;
  double t8540;
  double t8560;
  double t8553;
  double t8580;
  double t8588;
  double t8594;
  double t8598;
  t8117 = Cos(var1[10]);
  t8113 = Cos(var1[11]);
  t8114 = Sin(var1[10]);
  t8131 = Sin(var1[11]);
  t8115 = t8113*t8114;
  t8229 = -1.*t8117*t8131;
  t8238 = t8115 + t8229;
  t8274 = Cos(var1[5]);
  t8281 = Sin(var1[9]);
  t8275 = t8117*t8113;
  t8276 = t8114*t8131;
  t8277 = t8275 + t8276;
  t8282 = Sin(var1[5]);
  t8105 = Cos(var1[9]);
  t8268 = Cos(var1[4]);
  t8243 = Sin(var1[4]);
  t8279 = t8274*t8277;
  t8284 = t8281*t8238*t8282;
  t8285 = t8279 + t8284;
  t8293 = Sin(var1[3]);
  t8289 = -1.*t8274*t8281*t8238;
  t8290 = t8277*t8282;
  t8291 = t8289 + t8290;
  t8288 = Cos(var1[3]);
  t8294 = t8105*t8268*t8238;
  t8295 = -1.*t8243*t8285;
  t8296 = t8294 + t8295;
  t8356 = -0.0641*t8113;
  t8357 = -0.28*t8131;
  t8359 = t8356 + t8357;
  t8367 = -1.*t8113;
  t8369 = 1. + t8367;
  t8370 = -0.575*t8369;
  t8371 = -0.295*t8113;
  t8372 = -0.0641*t8131;
  t8374 = t8370 + t8371 + t8372;
  t8355 = 0.325*t8114;
  t8363 = t8117*t8359;
  t8377 = t8114*t8374;
  t8383 = t8355 + t8363 + t8377;
  t8398 = -1.*t8117;
  t8399 = 1. + t8398;
  t8400 = -0.325*t8399;
  t8403 = -1.*t8114*t8359;
  t8404 = t8117*t8374;
  t8405 = t8400 + t8403 + t8404;
  t8345 = -1.*t8105;
  t8350 = 1. + t8345;
  t8352 = 0.1575*t8350;
  t8354 = 0.2255*t8105;
  t8392 = -1.*t8281*t8383;
  t8394 = t8352 + t8354 + t8392;
  t8421 = 0.068*t8281;
  t8422 = t8105*t8383;
  t8423 = t8421 + t8422;
  t8429 = t8274*t8405;
  t8430 = -1.*t8394*t8282;
  t8433 = t8429 + t8430;
  t8418 = t8281*t8243;
  t8419 = -1.*t8105*t8268*t8282;
  t8420 = t8418 + t8419;
  t8395 = t8274*t8394;
  t8406 = t8405*t8282;
  t8412 = t8395 + t8406;
  t8317 = -1.*t8113*t8114;
  t8323 = t8117*t8131;
  t8324 = t8317 + t8323;
  t8424 = t8423*t8243;
  t8434 = t8268*t8433;
  t8437 = t8424 + t8434;
  t8314 = t8105*t8277*t8243;
  t8325 = t8274*t8324;
  t8330 = t8281*t8277*t8282;
  t8335 = t8325 + t8330;
  t8340 = t8268*t8335;
  t8341 = t8314 + t8340;
  t8448 = t8268*t8423;
  t8456 = -1.*t8243*t8433;
  t8461 = t8448 + t8456;
  t8470 = -1.*t8274*t8281*t8277;
  t8474 = t8324*t8282;
  t8475 = t8470 + t8474;
  t8413 = -1.*t8105*t8274*t8412;
  t8476 = t8412*t8475;
  t8487 = -1.*t8281*t8423;
  t8493 = t8105*t8423*t8277;
  t8439 = t8268*t8281;
  t8440 = t8105*t8243*t8282;
  t8442 = t8439 + t8440;
  t8255 = t8105*t8238*t8243;
  t8286 = t8268*t8285;
  t8287 = t8255 + t8286;
  t8478 = t8105*t8268*t8277;
  t8479 = -1.*t8243*t8335;
  t8480 = t8478 + t8479;
  t8529 = t8412*t8291;
  t8534 = -1.*t8412*t8475;
  t8544 = -1.*t8105*t8423*t8277;
  t8540 = t8105*t8423*t8238;
  t8560 = t8405*t8277;
  t8553 = -1.*t8405*t8324;
  t8580 = t8105*t8274*t8412;
  t8588 = -1.*t8412*t8291;
  t8594 = t8281*t8423;
  t8598 = -1.*t8105*t8423*t8238;
  p_output1[0]=t8287;
  p_output1[1]=t8288*t8291 - 1.*t8293*t8296;
  p_output1[2]=t8291*t8293 + t8288*t8296;
  p_output1[3]=t8341*(t8413 - 1.*t8420*t8437 - 1.*t8442*t8461) + t8420*(t8341*t8437 + t8476 + t8461*t8480);
  p_output1[4]=t8475*(t8413 + t8105*t8282*t8433 + t8487) + t8105*t8274*(t8335*t8433 + t8476 + t8493);
  p_output1[5]=t8105*t8277*(-1.*t8105*t8394 + t8487) + t8281*(-1.*t8277*t8281*t8394 + t8324*t8405 + t8493);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-0.1575*t8238 - 0.2255*t8324;
  p_output1[10]=-0.325*t8131 - 1.*t8113*t8359 - 1.*t8131*t8374;
  p_output1[11]=-0.0641;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t8420;
  p_output1[19]=t8105*t8274*t8288 - 1.*t8293*t8442;
  p_output1[20]=t8105*t8274*t8293 + t8288*t8442;
  p_output1[21]=t8341*(t8287*t8437 + t8296*t8461 + t8529) + t8287*(-1.*t8341*t8437 - 1.*t8461*t8480 + t8534);
  p_output1[22]=t8475*(t8285*t8433 + t8529 + t8540) + t8291*(-1.*t8335*t8433 + t8534 + t8544);
  p_output1[23]=t8105*t8238*(t8277*t8281*t8394 + t8544 + t8553) + t8105*t8277*(-1.*t8238*t8281*t8394 + t8540 + t8560);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t8277*(-1.*t8277*t8383 + t8553) + t8324*(t8238*t8383 + t8560);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t8341;
  p_output1[37]=t8288*t8475 - 1.*t8293*t8480;
  p_output1[38]=t8293*t8475 + t8288*t8480;
  p_output1[39]=t8287*(t8420*t8437 + t8442*t8461 + t8580) + t8420*(-1.*t8287*t8437 - 1.*t8296*t8461 + t8588);
  p_output1[40]=t8291*(-1.*t8105*t8282*t8433 + t8580 + t8594) + t8105*t8274*(-1.*t8285*t8433 + t8588 + t8598);
  p_output1[41]=t8105*t8238*(t8105*t8394 + t8594) + t8281*(t8238*t8281*t8394 - 1.*t8277*t8405 + t8598);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0.068*t8277;
  p_output1[46]=0.325*t8113 - 1.*t8131*t8359 + t8113*t8374;
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

#include "fRlFoot_map_ParallelStance2.hh"

namespace SymFunction
{

void fRlFoot_map_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
