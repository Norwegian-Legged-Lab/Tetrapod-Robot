/*
 * Automatically Generated from Mathematica.
 * Tue 16 Nov 2021 21:25:00 GMT+01:00
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
  double t226;
  double t227;
  double t228;
  double t236;
  double t144;
  double t153;
  double t185;
  double t187;
  double t194;
  double t198;
  double t263;
  double t267;
  double t264;
  double t271;
  double t245;
  double t247;
  double t146;
  double t285;
  double t289;
  double t290;
  double t305;
  double t231;
  double t351;
  double t352;
  double t353;
  double t361;
  double t266;
  double t275;
  double t276;
  double t329;
  double t321;
  double t322;
  double t324;
  double t338;
  double t339;
  double t341;
  double t368;
  double t250;
  double t373;
  double t237;
  double t359;
  double t396;
  double t397;
  double t407;
  double t312;
  double t378;
  double t308;
  double t416;
  double t374;
  double t375;
  double t379;
  double t380;
  double t382;
  double t384;
  double t386;
  double t387;
  double t419;
  double t403;
  double t405;
  double t406;
  double t408;
  double t409;
  double t410;
  double t411;
  double t412;
  double t423;
  double t424;
  double t425;
  double t426;
  double t428;
  double t430;
  double t432;
  double t433;
  double t392;
  double t439;
  double t398;
  double t449;
  double t435;
  double t362;
  double t211;
  double t216;
  double t222;
  double t230;
  double t241;
  double t244;
  double t252;
  double t257;
  double t259;
  double t280;
  double t283;
  double t301;
  double t304;
  double t309;
  double t311;
  double t316;
  double t317;
  double t320;
  double t474;
  double t475;
  double t476;
  double t326;
  double t328;
  double t330;
  double t331;
  double t335;
  double t336;
  double t337;
  double t348;
  double t356;
  double t363;
  double t365;
  double t370;
  double t371;
  double t372;
  double t470;
  double t471;
  double t472;
  double t478;
  double t479;
  double t480;
  double t482;
  double t483;
  double t484;
  double t390;
  double t391;
  double t393;
  double t395;
  double t400;
  double t401;
  double t402;
  double t414;
  double t415;
  double t417;
  double t418;
  double t420;
  double t421;
  double t422;
  double t437;
  double t486;
  double t487;
  double t488;
  double t489;
  double t440;
  double t491;
  double t492;
  double t493;
  double t494;
  double t443;
  double t444;
  double t496;
  double t497;
  double t498;
  double t499;
  double t450;
  double t452;
  double t453;
  double t455;
  double t459;
  double t460;
  double t462;
  double t464;
  double t520;
  double t521;
  double t522;
  double t524;
  double t525;
  double t526;
  double t528;
  double t529;
  double t530;
  double t531;
  double t533;
  double t534;
  double t535;
  double t536;
  double t538;
  double t539;
  double t540;
  double t541;
  t226 = Cos(var1[7]);
  t227 = -1.*t226;
  t228 = 1. + t227;
  t236 = Sin(var1[7]);
  t144 = Cos(var1[5]);
  t153 = Cos(var1[6]);
  t185 = -1.*t153;
  t187 = 1. + t185;
  t194 = -0.15121*t187;
  t198 = Sin(var1[6]);
  t263 = Cos(var1[3]);
  t267 = Sin(var1[5]);
  t264 = Sin(var1[4]);
  t271 = Sin(var1[3]);
  t245 = -1. + t226;
  t247 = 4.e-6*t245;
  t146 = Cos(var1[4]);
  t285 = -1.*t263*t267;
  t289 = t144*t264*t271;
  t290 = t285 + t289;
  t305 = 7.e-6*t228;
  t231 = 2.8e-11*t228;
  t351 = Cos(var1[8]);
  t352 = -1.*t351;
  t353 = 1. + t352;
  t361 = Sin(var1[8]);
  t266 = t144*t263*t264;
  t275 = t267*t271;
  t276 = t266 + t275;
  t329 = -4.e-6*t236;
  t321 = -1.*t144*t146*t198;
  t322 = t153*t290;
  t324 = t321 + t322;
  t338 = t153*t144*t146;
  t339 = t198*t290;
  t341 = t338 + t339;
  t368 = 2.8e-11*t353;
  t250 = -7.e-6*t236;
  t373 = -2.8e-11*t228;
  t237 = -1.*t236;
  t359 = 7.e-6*t353;
  t396 = -1. + t351;
  t397 = 4.e-6*t396;
  t407 = 4.e-6*t228;
  t312 = 7.e-6*t236;
  t378 = -7.e-6*t228;
  t308 = 4.e-6*t236;
  t416 = 4.e-6*t361;
  t374 = t373 + t236;
  t375 = t374*t276;
  t379 = t378 + t329;
  t380 = t379*t324;
  t382 = -1.000000000016*t228;
  t384 = 1. + t382;
  t386 = t384*t341;
  t387 = t375 + t380 + t386;
  t419 = 7.e-6*t361;
  t403 = -1.000000000049*t228;
  t405 = 1. + t403;
  t406 = t405*t276;
  t408 = t407 + t250;
  t409 = t408*t324;
  t410 = t373 + t237;
  t411 = t410*t341;
  t412 = t406 + t409 + t411;
  t423 = t407 + t312;
  t424 = t423*t276;
  t425 = -6.5e-11*t228;
  t426 = 1. + t425;
  t428 = t426*t324;
  t430 = t378 + t308;
  t432 = t430*t341;
  t433 = t424 + t428 + t432;
  t392 = -1.*t361;
  t439 = 4.e-6*t353;
  t398 = -7.e-6*t361;
  t449 = -2.8e-11*t353;
  t435 = -7.e-6*t353;
  t362 = -4.e-6*t361;
  t211 = -0.15121*t198;
  t216 = t194 + t211;
  t222 = 1.5843479999999999e-12*var1[7];
  t230 = -0.03874900000889869*t228;
  t241 = t231 + t237;
  t244 = -0.281211000004*t241;
  t252 = t247 + t250;
  t257 = -1.8134809999999998e-6*t252;
  t259 = t222 + t230 + t244 + t257;
  t280 = 0.15121*t198;
  t283 = t194 + t280;
  t301 = 3.9608699999999997e-7*var1[7];
  t304 = -1.1787626499999999e-16*t228;
  t309 = t305 + t308;
  t311 = -0.281211000004*t309;
  t316 = t247 + t312;
  t317 = -0.038749000006999997*t316;
  t320 = t301 + t304 + t311 + t317;
  t474 = t144*t263;
  t475 = t267*t264*t271;
  t476 = t474 + t475;
  t326 = -2.7726089999999997e-12*var1[7];
  t328 = -0.2812110000084994*t228;
  t330 = t305 + t329;
  t331 = -1.8134809999999998e-6*t330;
  t335 = t231 + t236;
  t336 = -0.038749000006999997*t335;
  t337 = t326 + t328 + t331 + t336;
  t348 = -1.9784030000000015e-12*var1[8];
  t356 = -0.5031510000160505*t353;
  t363 = t359 + t362;
  t365 = -3.367757e-6*t363;
  t370 = t368 + t361;
  t371 = -0.038575000014*t370;
  t372 = t348 + t356 + t365 + t371;
  t470 = t263*t267*t264;
  t471 = -1.*t144*t271;
  t472 = t470 + t471;
  t478 = -1.*t146*t198*t267;
  t479 = t153*t476;
  t480 = t478 + t479;
  t482 = t153*t146*t267;
  t483 = t198*t476;
  t484 = t482 + t483;
  t390 = 1.1305160000000008e-12*var1[8];
  t391 = -0.03857500001589017*t353;
  t393 = t368 + t392;
  t395 = -0.5031510000080001*t393;
  t400 = t397 + t398;
  t401 = -3.367757e-6*t400;
  t402 = t390 + t391 + t395 + t401;
  t414 = 2.826290000000002e-7*var1[8];
  t415 = -2.18904205e-16*t353;
  t417 = t359 + t416;
  t418 = -0.5031510000080001*t417;
  t420 = t397 + t419;
  t421 = -0.038575000014*t420;
  t422 = t414 + t415 + t418 + t421;
  t437 = t435 + t416;
  t486 = t374*t472;
  t487 = t379*t480;
  t488 = t384*t484;
  t489 = t486 + t487 + t488;
  t440 = t439 + t419;
  t491 = t405*t472;
  t492 = t408*t480;
  t493 = t410*t484;
  t494 = t491 + t492 + t493;
  t443 = -6.5e-11*t353;
  t444 = 1. + t443;
  t496 = t423*t472;
  t497 = t426*t480;
  t498 = t430*t484;
  t499 = t496 + t497 + t498;
  t450 = t449 + t392;
  t452 = -1.000000000049*t353;
  t453 = 1. + t452;
  t455 = t439 + t398;
  t459 = -1.000000000016*t353;
  t460 = 1. + t459;
  t462 = t449 + t361;
  t464 = t435 + t362;
  t520 = t198*t264;
  t521 = t153*t146*t271;
  t522 = t520 + t521;
  t524 = -1.*t153*t264;
  t525 = t146*t198*t271;
  t526 = t524 + t525;
  t528 = t146*t263*t374;
  t529 = t379*t522;
  t530 = t384*t526;
  t531 = t528 + t529 + t530;
  t533 = t405*t146*t263;
  t534 = t408*t522;
  t535 = t410*t526;
  t536 = t533 + t534 + t535;
  t538 = t146*t263*t423;
  t539 = t426*t522;
  t540 = t430*t526;
  t541 = t538 + t539 + t540;
  p_output1[0]=t144*t146*t216 + t259*t276 + t283*t290 + t320*t324 + t337*t341 + t372*t387 + t402*t412 + t422*t433 - 0.148715*(t387*t437 + t412*t440 + t433*t444) - 0.038576*(t387*t450 + t412*t453 + t433*t455) - 0.80315*(t387*t460 + t412*t462 + t433*t464) + var1[0];
  p_output1[1]=t146*t216*t267 + t259*t472 + t283*t476 + t320*t480 + t337*t484 + t372*t489 + t402*t494 + t422*t499 - 0.148715*(t437*t489 + t440*t494 + t444*t499) - 0.038576*(t450*t489 + t453*t494 + t455*t499) - 0.80315*(t460*t489 + t462*t494 + t464*t499) + var1[1];
  p_output1[2]=t146*t259*t263 - 1.*t216*t264 + t146*t271*t283 + t320*t522 + t337*t526 + t372*t531 + t402*t536 + t422*t541 - 0.148715*(t437*t531 + t440*t536 + t444*t541) - 0.038576*(t450*t531 + t453*t536 + t455*t541) - 0.80315*(t460*t531 + t462*t536 + t464*t541) + var1[2];
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
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "pos_rr.hh"

namespace SymFunction
{

void pos_rr_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
