/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 13:05:03 GMT+02:00
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
  double t32960;
  double t57386;
  double t33471;
  double t57404;
  double t57411;
  double t57398;
  double t57414;
  double t57339;
  double t57429;
  double t57430;
  double t57432;
  double t57387;
  double t57427;
  double t57441;
  double t57442;
  double t57443;
  double t57375;
  double t57389;
  double t57396;
  double t57503;
  double t57500;
  double t57409;
  double t57419;
  double t57425;
  double t57433;
  double t57434;
  double t57435;
  double t57444;
  double t57488;
  double t57493;
  double t57504;
  double t57507;
  double t57508;
  double t57514;
  double t57515;
  double t57516;
  double t57519;
  double t57521;
  double t57523;
  double t57530;
  double t57531;
  double t57532;
  double t57535;
  double t57536;
  double t57537;
  double t57428;
  double t57436;
  double t57437;
  double t57560;
  double t57562;
  double t57567;
  double t57568;
  double t57569;
  double t57571;
  double t57572;
  double t57573;
  double t57574;
  double t57575;
  double t57576;
  double t57577;
  double t57578;
  double t57582;
  double t57583;
  double t57584;
  double t57563;
  double t57565;
  double t57566;
  double t57579;
  double t57580;
  double t57588;
  double t57589;
  double t57590;
  double t57592;
  double t57594;
  double t57595;
  double t57596;
  double t57581;
  double t57585;
  double t57586;
  double t57593;
  double t57597;
  double t57598;
  double t57600;
  double t57601;
  double t57602;
  double t57440;
  double t57494;
  double t57495;
  double t57587;
  double t57607;
  double t57614;
  double t57619;
  double t57629;
  double t57635;
  double t57662;
  double t57667;
  t32960 = Cos(var1[4]);
  t57386 = Cos(var1[9]);
  t33471 = Cos(var1[5]);
  t57404 = Cos(var1[11]);
  t57411 = Sin(var1[10]);
  t57398 = Cos(var1[10]);
  t57414 = Sin(var1[11]);
  t57339 = Sin(var1[9]);
  t57429 = -1.*t57404*t57411;
  t57430 = t57398*t57414;
  t57432 = t57429 + t57430;
  t57387 = Sin(var1[5]);
  t57427 = Sin(var1[4]);
  t57441 = -1.*t57398*t57404;
  t57442 = -1.*t57411*t57414;
  t57443 = t57441 + t57442;
  t57375 = t33471*t57339;
  t57389 = t57386*t57387;
  t57396 = t57375 + t57389;
  t57503 = Cos(var1[3]);
  t57500 = Sin(var1[3]);
  t57409 = t57398*t57404;
  t57419 = t57411*t57414;
  t57425 = t57409 + t57419;
  t57433 = t57386*t33471*t57432;
  t57434 = -1.*t57339*t57432*t57387;
  t57435 = t57433 + t57434;
  t57444 = t57386*t33471*t57443;
  t57488 = -1.*t57339*t57443*t57387;
  t57493 = t57444 + t57488;
  t57504 = -1.*t57386*t33471;
  t57507 = t57339*t57387;
  t57508 = t57504 + t57507;
  t57514 = t33471*t57339*t57432;
  t57515 = t57386*t57432*t57387;
  t57516 = t57514 + t57515;
  t57519 = t32960*t57425;
  t57521 = -1.*t57427*t57435;
  t57523 = t57519 + t57521;
  t57530 = t33471*t57339*t57443;
  t57531 = t57386*t57443*t57387;
  t57532 = t57530 + t57531;
  t57535 = t32960*t57432;
  t57536 = -1.*t57427*t57493;
  t57537 = t57535 + t57536;
  t57428 = t57425*t57427;
  t57436 = t32960*t57435;
  t57437 = t57428 + t57436;
  t57560 = -1.*t57386;
  t57562 = 1. + t57560;
  t57567 = -1.*t57398;
  t57568 = 1. + t57567;
  t57569 = -0.28121*t57568;
  t57571 = -1.*t57404;
  t57572 = 1. + t57571;
  t57573 = -0.50321*t57572;
  t57574 = -0.19821*t57404;
  t57575 = t57573 + t57574;
  t57576 = t57398*t57575;
  t57577 = 0.305*t57411*t57414;
  t57578 = t57569 + t57576 + t57577;
  t57582 = -0.15121*t57562;
  t57583 = t57386*t57578;
  t57584 = t57582 + t57583;
  t57563 = 0.15121*t57562;
  t57565 = 0.15121*t57386;
  t57566 = 0.15121*t57339;
  t57579 = t57339*t57578;
  t57580 = t57563 + t57565 + t57566 + t57579;
  t57588 = 0.28121*t57411;
  t57589 = t57575*t57411;
  t57590 = -0.305*t57398*t57414;
  t57592 = t57588 + t57589 + t57590;
  t57594 = t33471*t57584;
  t57595 = -1.*t57580*t57387;
  t57596 = t57594 + t57595;
  t57581 = t33471*t57580;
  t57585 = t57584*t57387;
  t57586 = t57581 + t57585;
  t57593 = t57592*t57427;
  t57597 = t32960*t57596;
  t57598 = t57593 + t57597;
  t57600 = t32960*t57592;
  t57601 = -1.*t57427*t57596;
  t57602 = t57600 + t57601;
  t57440 = t57432*t57427;
  t57494 = t32960*t57493;
  t57495 = t57440 + t57494;
  t57587 = -1.*t57508*t57586;
  t57607 = t57516*t57586;
  t57614 = t57508*t57586;
  t57619 = -1.*t57532*t57586;
  t57629 = -1.*t57516*t57586;
  t57635 = t57532*t57586;
  t57662 = -1.*t57592*t57425;
  t57667 = t57592*t57432;
  p_output1[0]=t57495*var2[0] + t32960*t57396*var2[1] + t57437*var2[2];
  p_output1[1]=(t57503*t57532 - 1.*t57500*t57537)*var2[0] + (t57396*t57427*t57500 + t57503*t57508)*var2[1] + (t57503*t57516 - 1.*t57500*t57523)*var2[2];
  p_output1[2]=(t57500*t57532 + t57503*t57537)*var2[0] + (-1.*t57396*t57427*t57503 + t57500*t57508)*var2[1] + (t57500*t57516 + t57503*t57523)*var2[2];
  p_output1[3]=(t57437*(t57587 - 1.*t32960*t57396*t57598 + t57396*t57427*t57602) + t32960*t57396*(t57437*t57598 + t57523*t57602 + t57607))*var2[0] + (t57495*(-1.*t57437*t57598 - 1.*t57523*t57602 + t57629) + t57437*(t57495*t57598 + t57537*t57602 + t57635))*var2[1] + (t57495*(t32960*t57396*t57598 - 1.*t57396*t57427*t57602 + t57614) + t32960*t57396*(-1.*t57495*t57598 - 1.*t57537*t57602 + t57619))*var2[2];
  p_output1[4]=(t57516*(t57587 - 1.*t57396*t57596) + t57508*(t57425*t57592 + t57435*t57596 + t57607))*var2[0] + (t57532*(-1.*t57435*t57596 + t57629 + t57662) + t57516*(t57493*t57596 + t57635 + t57667))*var2[1] + (t57532*(t57396*t57596 + t57614) + t57508*(-1.*t57432*t57592 - 1.*t57493*t57596 + t57619))*var2[2];
  p_output1[5]=t57425*(t57386*t57580 - 1.*t57339*t57584)*var2[0] + (t57432*(-1.*t57339*t57432*t57580 - 1.*t57386*t57432*t57584 + t57662) + t57425*(t57339*t57443*t57580 + t57386*t57443*t57584 + t57667))*var2[1] + t57432*(-1.*t57386*t57580 + t57339*t57584)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.15121*t57425 + 0.15121*t57443)*var2[0] + (-0.15121 + t57432*(-1.*t57432*t57578 + t57662) + t57425*(t57443*t57578 + t57667))*var2[1];
  p_output1[10]=(0.28121*t57414 - 0.305*t57404*t57414 + t57414*t57575)*var2[0] + (0.28121*t57404 + 0.305*Power(t57414,2) + t57404*t57575)*var2[2];
  p_output1[11]=-0.305*var2[2];
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

#include "fRlFoot_vec_DiagonalImpact.hh"

namespace SymFunction
{

void fRlFoot_vec_DiagonalImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
