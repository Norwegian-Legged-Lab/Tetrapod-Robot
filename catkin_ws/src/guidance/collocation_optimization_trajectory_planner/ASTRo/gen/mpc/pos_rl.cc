/*
 * Automatically Generated from Mathematica.
 * Tue 16 Nov 2021 21:24:59 GMT+01:00
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
  double t148;
  double t151;
  double t152;
  double t180;
  double t89;
  double t104;
  double t110;
  double t118;
  double t137;
  double t138;
  double t207;
  double t212;
  double t210;
  double t215;
  double t155;
  double t101;
  double t221;
  double t222;
  double t225;
  double t193;
  double t232;
  double t268;
  double t269;
  double t270;
  double t273;
  double t248;
  double t211;
  double t216;
  double t217;
  double t253;
  double t239;
  double t241;
  double t243;
  double t263;
  double t264;
  double t265;
  double t277;
  double t229;
  double t287;
  double t235;
  double t306;
  double t272;
  double t314;
  double t315;
  double t181;
  double t282;
  double t283;
  double t285;
  double t289;
  double t290;
  double t292;
  double t294;
  double t295;
  double t299;
  double t327;
  double t316;
  double t317;
  double t318;
  double t319;
  double t320;
  double t321;
  double t322;
  double t323;
  double t333;
  double t334;
  double t335;
  double t336;
  double t337;
  double t338;
  double t339;
  double t340;
  double t278;
  double t342;
  double t274;
  double t357;
  double t310;
  double t345;
  double t346;
  double t307;
  double t127;
  double t139;
  double t146;
  double t153;
  double t185;
  double t187;
  double t194;
  double t198;
  double t203;
  double t219;
  double t220;
  double t227;
  double t228;
  double t230;
  double t231;
  double t236;
  double t237;
  double t238;
  double t379;
  double t380;
  double t381;
  double t245;
  double t247;
  double t250;
  double t252;
  double t257;
  double t259;
  double t262;
  double t267;
  double t271;
  double t275;
  double t276;
  double t279;
  double t280;
  double t281;
  double t375;
  double t376;
  double t377;
  double t383;
  double t384;
  double t385;
  double t387;
  double t388;
  double t389;
  double t304;
  double t305;
  double t308;
  double t309;
  double t311;
  double t312;
  double t313;
  double t325;
  double t326;
  double t328;
  double t329;
  double t330;
  double t331;
  double t332;
  double t343;
  double t391;
  double t392;
  double t393;
  double t394;
  double t347;
  double t396;
  double t397;
  double t398;
  double t399;
  double t349;
  double t350;
  double t401;
  double t402;
  double t403;
  double t404;
  double t354;
  double t355;
  double t358;
  double t360;
  double t364;
  double t366;
  double t367;
  double t369;
  double t425;
  double t426;
  double t427;
  double t429;
  double t430;
  double t431;
  double t433;
  double t434;
  double t435;
  double t436;
  double t438;
  double t439;
  double t440;
  double t441;
  double t443;
  double t444;
  double t445;
  double t446;
  t148 = Cos(var1[7]);
  t151 = -1.*t148;
  t152 = 1. + t151;
  t180 = Sin(var1[7]);
  t89 = Cos(var1[5]);
  t104 = Cos(var1[6]);
  t110 = -1.*t104;
  t118 = 1. + t110;
  t137 = Sin(var1[6]);
  t138 = 0.15121*t137;
  t207 = Cos(var1[3]);
  t212 = Sin(var1[5]);
  t210 = Sin(var1[4]);
  t215 = Sin(var1[3]);
  t155 = 4.e-6*t152;
  t101 = Cos(var1[4]);
  t221 = -1.*t207*t212;
  t222 = t89*t210*t215;
  t225 = t221 + t222;
  t193 = -2.8e-11*t152;
  t232 = 7.e-6*t152;
  t268 = Cos(var1[8]);
  t269 = -1.*t268;
  t270 = 1. + t269;
  t273 = Sin(var1[8]);
  t248 = -1.*t180;
  t211 = t89*t207*t210;
  t216 = t212*t215;
  t217 = t211 + t216;
  t253 = -4.e-6*t180;
  t239 = -1.*t89*t101*t137;
  t241 = t104*t225;
  t243 = t239 + t241;
  t263 = t104*t89*t101;
  t264 = t137*t225;
  t265 = t263 + t264;
  t277 = 7.e-6*t270;
  t229 = -7.e-6*t180;
  t287 = -7.e-6*t152;
  t235 = 4.e-6*t180;
  t306 = 4.e-6*t270;
  t272 = -2.8e-11*t270;
  t314 = -1. + t148;
  t315 = 4.e-6*t314;
  t181 = 7.e-6*t180;
  t282 = 2.8e-11*t152;
  t283 = t282 + t248;
  t285 = t283*t217;
  t289 = t287 + t253;
  t290 = t289*t243;
  t292 = -1.000000000016*t152;
  t294 = 1. + t292;
  t295 = t294*t265;
  t299 = t285 + t290 + t295;
  t327 = 7.e-6*t273;
  t316 = t315 + t229;
  t317 = t316*t217;
  t318 = -6.5e-11*t152;
  t319 = 1. + t318;
  t320 = t319*t243;
  t321 = t287 + t235;
  t322 = t321*t265;
  t323 = t317 + t320 + t322;
  t333 = -1.000000000049*t152;
  t334 = 1. + t333;
  t335 = t334*t217;
  t336 = t315 + t181;
  t337 = t336*t243;
  t338 = t282 + t180;
  t339 = t338*t265;
  t340 = t335 + t337 + t339;
  t278 = -4.e-6*t273;
  t342 = 2.8e-11*t270;
  t274 = -1.*t273;
  t357 = -7.e-6*t270;
  t310 = 4.e-6*t273;
  t345 = -1. + t268;
  t346 = 4.e-6*t345;
  t307 = -7.e-6*t273;
  t127 = -0.15121*t118;
  t139 = t127 + t138;
  t146 = 5.856279999999999e-13*var1[7];
  t153 = -0.0387489999948987*t152;
  t185 = t155 + t181;
  t187 = -2.123459e-6*t185;
  t194 = t193 + t180;
  t198 = -0.281209000004*t194;
  t203 = t146 + t153 + t187 + t198;
  t219 = 0.15121*t118;
  t220 = t219 + t138;
  t227 = -1.4640699999999997e-7*var1[7];
  t228 = -1.38024835e-16*t152;
  t230 = t155 + t229;
  t231 = -0.038748999993*t230;
  t236 = t232 + t235;
  t237 = -0.281209000004*t236;
  t238 = t227 + t228 + t231 + t237;
  t379 = t89*t207;
  t380 = t212*t210*t215;
  t381 = t379 + t380;
  t245 = 1.0248489999999998e-12*var1[7];
  t247 = -0.28120900000849935*t152;
  t250 = t193 + t248;
  t252 = -0.038748999993*t250;
  t257 = t232 + t253;
  t259 = -2.123459e-6*t257;
  t262 = t245 + t247 + t252 + t259;
  t267 = 1.8190549999999993e-12*var1[8];
  t271 = -0.5031490000160505*t270;
  t275 = t272 + t274;
  t276 = -0.038922999986*t275;
  t279 = t277 + t278;
  t280 = -3.6777349999999994e-6*t279;
  t281 = t267 + t271 + t276 + t280;
  t375 = t207*t212*t210;
  t376 = -1.*t89*t215;
  t377 = t375 + t376;
  t383 = -1.*t101*t137*t212;
  t384 = t104*t381;
  t385 = t383 + t384;
  t387 = t104*t101*t212;
  t388 = t137*t381;
  t389 = t387 + t388;
  t304 = -2.598649999999999e-7*var1[8];
  t305 = -2.3905277499999995e-16*t270;
  t308 = t306 + t307;
  t309 = -0.038922999986*t308;
  t311 = t277 + t310;
  t312 = -0.503149000008*t311;
  t313 = t304 + t305 + t309 + t312;
  t325 = 1.0394599999999997e-12*var1[8];
  t326 = -0.03892299998790722*t270;
  t328 = t306 + t327;
  t329 = -3.6777349999999994e-6*t328;
  t330 = t272 + t273;
  t331 = -0.503149000008*t330;
  t332 = t325 + t326 + t329 + t331;
  t343 = t342 + t273;
  t391 = t283*t377;
  t392 = t289*t385;
  t393 = t294*t389;
  t394 = t391 + t392 + t393;
  t347 = t346 + t327;
  t396 = t316*t377;
  t397 = t319*t385;
  t398 = t321*t389;
  t399 = t396 + t397 + t398;
  t349 = -1.000000000049*t270;
  t350 = 1. + t349;
  t401 = t334*t377;
  t402 = t336*t385;
  t403 = t338*t389;
  t404 = t401 + t402 + t403;
  t354 = -1.000000000016*t270;
  t355 = 1. + t354;
  t358 = t357 + t278;
  t360 = t342 + t274;
  t364 = t357 + t310;
  t366 = -6.5e-11*t270;
  t367 = 1. + t366;
  t369 = t346 + t307;
  t425 = t137*t210;
  t426 = t104*t101*t215;
  t427 = t425 + t426;
  t429 = -1.*t104*t210;
  t430 = t101*t137*t215;
  t431 = t429 + t430;
  t433 = t101*t207*t283;
  t434 = t289*t427;
  t435 = t294*t431;
  t436 = t433 + t434 + t435;
  t438 = t101*t207*t316;
  t439 = t319*t427;
  t440 = t321*t431;
  t441 = t438 + t439 + t440;
  t443 = t334*t101*t207;
  t444 = t336*t427;
  t445 = t338*t431;
  t446 = t443 + t444 + t445;
  p_output1[0]=t203*t217 + t220*t225 + t238*t243 + t262*t265 + t281*t299 + t313*t323 + t332*t340 - 0.038924*(t299*t343 + t323*t347 + t340*t350) - 0.80315*(t299*t355 + t323*t358 + t340*t360) + 0.148705*(t299*t364 + t323*t367 + t340*t369) + t101*t139*t89 + var1[0];
  p_output1[1]=t101*t139*t212 + t203*t377 + t220*t381 + t238*t385 + t262*t389 + t281*t394 + t313*t399 + t332*t404 - 0.038924*(t343*t394 + t347*t399 + t350*t404) - 0.80315*(t355*t394 + t358*t399 + t360*t404) + 0.148705*(t364*t394 + t367*t399 + t369*t404) + var1[1];
  p_output1[2]=t101*t203*t207 - 1.*t139*t210 + t101*t215*t220 + t238*t427 + t262*t431 + t281*t436 + t313*t441 + t332*t446 - 0.038924*(t343*t436 + t347*t441 + t350*t446) - 0.80315*(t355*t436 + t358*t441 + t360*t446) + 0.148705*(t364*t436 + t367*t441 + t369*t446) + var1[2];
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

#include "pos_rl.hh"

namespace SymFunction
{

void pos_rl_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
