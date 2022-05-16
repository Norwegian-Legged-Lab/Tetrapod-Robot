/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:43:11 GMT+02:00
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
  double t43932;
  double t43404;
  double t44275;
  double t44223;
  double t43935;
  double t43945;
  double t43985;
  double t43986;
  double t44136;
  double t44225;
  double t44278;
  double t44283;
  double t44268;
  double t44292;
  double t44299;
  double t44309;
  double t44313;
  double t44317;
  double t44320;
  double t44224;
  double t44230;
  double t44231;
  double t44419;
  double t44428;
  double t44388;
  double t44366;
  double t44367;
  double t44372;
  double t44376;
  double t44427;
  double t44429;
  double t44431;
  double t44450;
  double t44444;
  double t44445;
  double t44448;
  double t44435;
  double t44455;
  double t44459;
  double t44465;
  double t44511;
  double t44512;
  double t44513;
  double t44342;
  double t44344;
  double t44345;
  double t44346;
  double t44347;
  double t44284;
  double t44321;
  double t44322;
  double t44520;
  double t44521;
  double t44522;
  double t44514;
  double t44517;
  double t44519;
  double t44525;
  double t44526;
  double t44531;
  double t44540;
  double t44543;
  double t44544;
  double t44571;
  double t44572;
  double t44574;
  double t44532;
  double t44537;
  double t44538;
  double t44539;
  double t44549;
  double t44550;
  double t44551;
  double t44556;
  double t44569;
  double t44595;
  double t44602;
  double t44603;
  double t44604;
  double t44607;
  double t44608;
  double t44616;
  double t44617;
  double t44623;
  double t44646;
  double t44653;
  double t44382;
  double t44432;
  double t44433;
  double t44701;
  double t44628;
  double t44629;
  double t44631;
  double t44705;
  double t44770;
  double t44775;
  t43932 = Cos(var1[14]);
  t43404 = Sin(var1[14]);
  t44275 = Cos(var1[12]);
  t44223 = Cos(var1[13]);
  t43935 = -1.*t43932;
  t43945 = 1. + t43935;
  t43985 = 0.50321*t43945;
  t43986 = 0.23321*t43932;
  t44136 = t43985 + t43986;
  t44225 = Sin(var1[13]);
  t44278 = -1.*t44275;
  t44283 = 1. + t44278;
  t44268 = Sin(var1[12]);
  t44292 = -1.*t44223;
  t44299 = 1. + t44292;
  t44309 = 0.28121*t44299;
  t44313 = t44223*t44136;
  t44317 = -0.27*t44225*t43404;
  t44320 = t44309 + t44313 + t44317;
  t44224 = t44223*t43932;
  t44230 = t44225*t43404;
  t44231 = t44224 + t44230;
  t44419 = Cos(var1[5]);
  t44428 = Sin(var1[5]);
  t44388 = Cos(var1[4]);
  t44366 = -1.*t43932*t44225;
  t44367 = t44223*t43404;
  t44372 = t44366 + t44367;
  t44376 = Sin(var1[4]);
  t44427 = t44275*t44419*t44231;
  t44429 = -1.*t44268*t44231*t44428;
  t44431 = t44427 + t44429;
  t44450 = Cos(var1[3]);
  t44444 = t44419*t44268*t44231;
  t44445 = t44275*t44231*t44428;
  t44448 = t44444 + t44445;
  t44435 = Sin(var1[3]);
  t44455 = t44388*t44372;
  t44459 = -1.*t44376*t44431;
  t44465 = t44455 + t44459;
  t44511 = t43932*t44225;
  t44512 = -1.*t44223*t43404;
  t44513 = t44511 + t44512;
  t44342 = -0.15121*t44283;
  t44344 = -0.15121*t44275;
  t44345 = -0.15121*t44268;
  t44346 = t44268*t44320;
  t44347 = t44342 + t44344 + t44345 + t44346;
  t44284 = 0.15121*t44283;
  t44321 = t44275*t44320;
  t44322 = t44284 + t44321;
  t44520 = t44275*t44419;
  t44521 = -1.*t44268*t44428;
  t44522 = t44520 + t44521;
  t44514 = t44419*t44268*t44513;
  t44517 = t44275*t44513*t44428;
  t44519 = t44514 + t44517;
  t44525 = t44419*t44347;
  t44526 = t44322*t44428;
  t44531 = t44525 + t44526;
  t44540 = t44419*t44322;
  t44543 = -1.*t44347*t44428;
  t44544 = t44540 + t44543;
  t44571 = t44275*t44419*t44513;
  t44572 = -1.*t44268*t44513*t44428;
  t44574 = t44571 + t44572;
  t44532 = -1.*t44522*t44531;
  t44537 = -1.*t44419*t44268;
  t44538 = -1.*t44275*t44428;
  t44539 = t44537 + t44538;
  t44549 = 0.28121*t44225;
  t44550 = -1.*t44136*t44225;
  t44551 = -0.27*t44223*t43404;
  t44556 = t44549 + t44550 + t44551;
  t44569 = t44519*t44531;
  t44595 = t44231*t44376;
  t44602 = t44388*t44574;
  t44603 = t44595 + t44602;
  t44604 = t44556*t44376;
  t44607 = t44388*t44544;
  t44608 = t44604 + t44607;
  t44616 = t44388*t44556;
  t44617 = -1.*t44376*t44544;
  t44623 = t44616 + t44617;
  t44646 = -1.*t44556*t44231;
  t44653 = t44556*t44372;
  t44382 = t44372*t44376;
  t44432 = t44388*t44431;
  t44433 = t44382 + t44432;
  t44701 = -1.*t44519*t44531;
  t44628 = t44388*t44231;
  t44629 = -1.*t44376*t44574;
  t44631 = t44628 + t44629;
  t44705 = t44448*t44531;
  t44770 = t44522*t44531;
  t44775 = -1.*t44448*t44531;
  p_output1[0]=t44433*var2[0] + (t44448*t44450 - 1.*t44435*t44465)*var2[1] + (t44435*t44448 + t44450*t44465)*var2[2] + (t44603*(t44532 - 1.*t44388*t44539*t44608 + t44376*t44539*t44623) + t44388*t44539*(t44569 + t44603*t44608 + t44623*t44631))*var2[3] + (t44519*(t44532 - 1.*t44539*t44544) + t44522*(t44231*t44556 + t44569 + t44544*t44574))*var2[4] + t44231*(t44268*t44322 - 1.*t44275*t44347)*var2[5] + (0.28121*t43404 - 0.27*t43404*t43932 - 1.*t43404*t44136)*var2[13];
  p_output1[1]=t44388*t44539*var2[0] + (t44450*t44522 + t44376*t44435*t44539)*var2[1] + (t44435*t44522 - 1.*t44376*t44450*t44539)*var2[2] + (t44433*(-1.*t44603*t44608 - 1.*t44623*t44631 + t44701) + t44603*(t44433*t44608 + t44465*t44623 + t44705))*var2[3] + (t44448*(-1.*t44544*t44574 + t44646 + t44701) + t44519*(t44431*t44544 + t44653 + t44705))*var2[4] + (t44372*(-1.*t44275*t44322*t44513 - 1.*t44268*t44347*t44513 + t44646) + t44231*(t44231*t44275*t44322 + t44231*t44268*t44347 + t44653))*var2[5] + (-0.15121 + t44372*(-1.*t44320*t44513 + t44646) + t44231*(t44231*t44320 + t44653))*var2[12];
  p_output1[2]=t44603*var2[0] + (t44450*t44519 - 1.*t44435*t44631)*var2[1] + (t44435*t44519 + t44450*t44631)*var2[2] + (t44433*(t44388*t44539*t44608 - 1.*t44376*t44539*t44623 + t44770) + t44388*t44539*(-1.*t44433*t44608 - 1.*t44465*t44623 + t44775))*var2[3] + (t44448*(t44539*t44544 + t44770) + t44522*(-1.*t44431*t44544 - 1.*t44372*t44556 + t44775))*var2[4] + (-1.*t44268*t44322 + t44275*t44347)*t44372*var2[5] + (-0.15121*t44372 - 0.15121*t44513)*var2[12] + (0.27*Power(t43404,2) + 0.28121*t43932 - 1.*t43932*t44136)*var2[13] - 0.27*var2[14];
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
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dh_FrFoot_ParallelStance.hh"

namespace ParallelStance
{

void dh_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
