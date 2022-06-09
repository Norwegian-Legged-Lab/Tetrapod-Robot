/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:50:05 GMT+02:00
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
  double t10275;
  double t10264;
  double t10277;
  double t10302;
  double t10294;
  double t10295;
  double t10307;
  double t10171;
  double t10297;
  double t10308;
  double t10309;
  double t10282;
  double t10313;
  double t10314;
  double t10315;
  double t10312;
  double t10379;
  double t10382;
  double t10316;
  double t10317;
  double t10318;
  double t10323;
  double t10324;
  double t10367;
  double t10371;
  double t10372;
  double t10373;
  double t10383;
  double t10384;
  double t10385;
  double t10390;
  double t10391;
  double t10392;
  double t10395;
  double t10396;
  double t10397;
  double t10402;
  double t10403;
  double t10404;
  double t10407;
  double t10408;
  double t10409;
  double t10311;
  double t10319;
  double t10320;
  double t10437;
  double t10438;
  double t10439;
  double t10441;
  double t10442;
  double t10443;
  double t10444;
  double t10445;
  double t10446;
  double t10274;
  double t10283;
  double t10284;
  double t10436;
  double t10440;
  double t10447;
  double t10448;
  double t10452;
  double t10453;
  double t10454;
  double t10456;
  double t10457;
  double t10458;
  double t10432;
  double t10433;
  double t10434;
  double t10435;
  double t10449;
  double t10450;
  double t10463;
  double t10464;
  double t10465;
  double t10467;
  double t10468;
  double t10469;
  double t10451;
  double t10459;
  double t10461;
  double t10466;
  double t10470;
  double t10471;
  double t10473;
  double t10474;
  double t10475;
  double t10322;
  double t10375;
  double t10376;
  double t10462;
  double t10479;
  double t10486;
  double t10491;
  double t10498;
  double t10503;
  double t10531;
  double t10535;
  double t10511;
  double t10515;
  double t10525;
  double t10521;
  double t10565;
  double t10560;
  t10275 = Cos(var1[9]);
  t10264 = Sin(var1[4]);
  t10277 = Cos(var1[4]);
  t10302 = Cos(var1[10]);
  t10294 = Cos(var1[11]);
  t10295 = Sin(var1[10]);
  t10307 = Sin(var1[11]);
  t10171 = Sin(var1[9]);
  t10297 = t10294*t10295;
  t10308 = -1.*t10302*t10307;
  t10309 = t10297 + t10308;
  t10282 = Sin(var1[5]);
  t10313 = t10302*t10294;
  t10314 = t10295*t10307;
  t10315 = t10313 + t10314;
  t10312 = Cos(var1[5]);
  t10379 = Cos(var1[3]);
  t10382 = Sin(var1[3]);
  t10316 = t10312*t10315;
  t10317 = t10171*t10309*t10282;
  t10318 = t10316 + t10317;
  t10323 = -1.*t10294*t10295;
  t10324 = t10302*t10307;
  t10367 = t10323 + t10324;
  t10371 = t10312*t10367;
  t10372 = t10171*t10315*t10282;
  t10373 = t10371 + t10372;
  t10383 = t10277*t10171;
  t10384 = t10275*t10264*t10282;
  t10385 = t10383 + t10384;
  t10390 = -1.*t10312*t10171*t10309;
  t10391 = t10315*t10282;
  t10392 = t10390 + t10391;
  t10395 = t10275*t10277*t10309;
  t10396 = -1.*t10264*t10318;
  t10397 = t10395 + t10396;
  t10402 = -1.*t10312*t10171*t10315;
  t10403 = t10367*t10282;
  t10404 = t10402 + t10403;
  t10407 = t10275*t10277*t10315;
  t10408 = -1.*t10264*t10373;
  t10409 = t10407 + t10408;
  t10311 = t10275*t10309*t10264;
  t10319 = t10277*t10318;
  t10320 = t10311 + t10319;
  t10437 = -0.0641*t10294;
  t10438 = -0.28*t10307;
  t10439 = t10437 + t10438;
  t10441 = -1.*t10294;
  t10442 = 1. + t10441;
  t10443 = -0.575*t10442;
  t10444 = -0.295*t10294;
  t10445 = -0.0641*t10307;
  t10446 = t10443 + t10444 + t10445;
  t10274 = t10171*t10264;
  t10283 = -1.*t10275*t10277*t10282;
  t10284 = t10274 + t10283;
  t10436 = 0.325*t10295;
  t10440 = t10302*t10439;
  t10447 = t10295*t10446;
  t10448 = t10436 + t10440 + t10447;
  t10452 = -1.*t10302;
  t10453 = 1. + t10452;
  t10454 = -0.325*t10453;
  t10456 = -1.*t10295*t10439;
  t10457 = t10302*t10446;
  t10458 = t10454 + t10456 + t10457;
  t10432 = -1.*t10275;
  t10433 = 1. + t10432;
  t10434 = 0.1575*t10433;
  t10435 = 0.2255*t10275;
  t10449 = -1.*t10171*t10448;
  t10450 = t10434 + t10435 + t10449;
  t10463 = 0.068*t10171;
  t10464 = t10275*t10448;
  t10465 = t10463 + t10464;
  t10467 = t10312*t10458;
  t10468 = -1.*t10450*t10282;
  t10469 = t10467 + t10468;
  t10451 = t10312*t10450;
  t10459 = t10458*t10282;
  t10461 = t10451 + t10459;
  t10466 = t10465*t10264;
  t10470 = t10277*t10469;
  t10471 = t10466 + t10470;
  t10473 = t10277*t10465;
  t10474 = -1.*t10264*t10469;
  t10475 = t10473 + t10474;
  t10322 = t10275*t10315*t10264;
  t10375 = t10277*t10373;
  t10376 = t10322 + t10375;
  t10462 = t10275*t10312*t10461;
  t10479 = -1.*t10461*t10392;
  t10486 = t10461*t10392;
  t10491 = -1.*t10461*t10404;
  t10498 = -1.*t10275*t10312*t10461;
  t10503 = t10461*t10404;
  t10531 = -1.*t10171*t10465;
  t10535 = t10275*t10465*t10315;
  t10511 = t10171*t10465;
  t10515 = -1.*t10275*t10465*t10309;
  t10525 = -1.*t10275*t10465*t10315;
  t10521 = t10275*t10465*t10309;
  t10565 = t10458*t10315;
  t10560 = -1.*t10458*t10367;
  p_output1[0]=t10320*var2[0] + t10284*var2[1] + t10376*var2[2];
  p_output1[1]=(t10379*t10392 - 1.*t10382*t10397)*var2[0] + (t10275*t10312*t10379 - 1.*t10382*t10385)*var2[1] + (t10379*t10404 - 1.*t10382*t10409)*var2[2];
  p_output1[2]=(t10382*t10392 + t10379*t10397)*var2[0] + (t10275*t10312*t10382 + t10379*t10385)*var2[1] + (t10382*t10404 + t10379*t10409)*var2[2];
  p_output1[3]=(t10376*(-1.*t10284*t10471 - 1.*t10385*t10475 + t10498) + t10284*(t10376*t10471 + t10409*t10475 + t10503))*var2[0] + (t10376*(t10320*t10471 + t10397*t10475 + t10486) + t10320*(-1.*t10376*t10471 - 1.*t10409*t10475 + t10491))*var2[1] + (t10320*(t10462 + t10284*t10471 + t10385*t10475) + t10284*(-1.*t10320*t10471 - 1.*t10397*t10475 + t10479))*var2[2];
  p_output1[4]=(t10404*(t10275*t10282*t10469 + t10498 + t10531) + t10275*t10312*(t10373*t10469 + t10503 + t10535))*var2[0] + (t10404*(t10318*t10469 + t10486 + t10521) + t10392*(-1.*t10373*t10469 + t10491 + t10525))*var2[1] + (t10392*(t10462 - 1.*t10275*t10282*t10469 + t10511) + t10275*t10312*(-1.*t10318*t10469 + t10479 + t10515))*var2[2];
  p_output1[5]=(t10275*t10315*(-1.*t10275*t10450 + t10531) + t10171*(-1.*t10171*t10315*t10450 + t10367*t10458 + t10535))*var2[0] + (t10275*t10309*(t10171*t10315*t10450 + t10525 + t10560) + t10275*t10315*(-1.*t10171*t10309*t10450 + t10521 + t10565))*var2[1] + (t10275*t10309*(t10275*t10450 + t10511) + t10171*(t10171*t10309*t10450 - 1.*t10315*t10458 + t10515))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-0.1575*t10309 - 0.2255*t10367)*var2[0] + (t10315*(-1.*t10315*t10448 + t10560) + t10367*(t10309*t10448 + t10565))*var2[1] + 0.068*t10315*var2[2];
  p_output1[10]=(-0.325*t10307 - 1.*t10294*t10439 - 1.*t10307*t10446)*var2[0] + (0.325*t10294 - 1.*t10307*t10439 + t10294*t10446)*var2[2];
  p_output1[11]=-0.0641*var2[0] - 0.28*var2[2];
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
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

#include "fRlFoot_vec_DiagonalImpact2.hh"

namespace SymFunction
{

void fRlFoot_vec_DiagonalImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
