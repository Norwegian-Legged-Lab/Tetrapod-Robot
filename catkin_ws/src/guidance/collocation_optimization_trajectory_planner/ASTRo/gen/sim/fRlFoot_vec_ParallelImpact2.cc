/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:48 GMT+02:00
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
  double t3029;
  double t26088;
  double t7516;
  double t26126;
  double t26142;
  double t26125;
  double t26144;
  double t10240;
  double t26183;
  double t26185;
  double t26186;
  double t26105;
  double t26176;
  double t26202;
  double t26203;
  double t26205;
  double t25843;
  double t26110;
  double t26114;
  double t26437;
  double t26435;
  double t26135;
  double t26145;
  double t26171;
  double t26187;
  double t26188;
  double t26189;
  double t26207;
  double t26208;
  double t26417;
  double t26438;
  double t26439;
  double t26441;
  double t26447;
  double t26449;
  double t26453;
  double t26459;
  double t26460;
  double t26463;
  double t26483;
  double t26486;
  double t26490;
  double t26492;
  double t26493;
  double t26496;
  double t26177;
  double t26190;
  double t26191;
  double t26516;
  double t26518;
  double t26525;
  double t26526;
  double t26527;
  double t26528;
  double t26529;
  double t26530;
  double t26531;
  double t26532;
  double t26533;
  double t26534;
  double t26535;
  double t26539;
  double t26540;
  double t26541;
  double t26520;
  double t26521;
  double t26524;
  double t26536;
  double t26537;
  double t26546;
  double t26548;
  double t26549;
  double t26551;
  double t26555;
  double t26558;
  double t26559;
  double t26538;
  double t26542;
  double t26543;
  double t26554;
  double t26560;
  double t26562;
  double t26564;
  double t26565;
  double t26566;
  double t26195;
  double t26428;
  double t26429;
  double t26544;
  double t26570;
  double t26577;
  double t26584;
  double t26598;
  double t26603;
  double t26633;
  double t26639;
  t3029 = Cos(var1[4]);
  t26088 = Cos(var1[9]);
  t7516 = Cos(var1[5]);
  t26126 = Cos(var1[11]);
  t26142 = Sin(var1[10]);
  t26125 = Cos(var1[10]);
  t26144 = Sin(var1[11]);
  t10240 = Sin(var1[9]);
  t26183 = -1.*t26126*t26142;
  t26185 = t26125*t26144;
  t26186 = t26183 + t26185;
  t26105 = Sin(var1[5]);
  t26176 = Sin(var1[4]);
  t26202 = -1.*t26125*t26126;
  t26203 = -1.*t26142*t26144;
  t26205 = t26202 + t26203;
  t25843 = t7516*t10240;
  t26110 = t26088*t26105;
  t26114 = t25843 + t26110;
  t26437 = Cos(var1[3]);
  t26435 = Sin(var1[3]);
  t26135 = t26125*t26126;
  t26145 = t26142*t26144;
  t26171 = t26135 + t26145;
  t26187 = t26088*t7516*t26186;
  t26188 = -1.*t10240*t26186*t26105;
  t26189 = t26187 + t26188;
  t26207 = t26088*t7516*t26205;
  t26208 = -1.*t10240*t26205*t26105;
  t26417 = t26207 + t26208;
  t26438 = -1.*t26088*t7516;
  t26439 = t10240*t26105;
  t26441 = t26438 + t26439;
  t26447 = t7516*t10240*t26186;
  t26449 = t26088*t26186*t26105;
  t26453 = t26447 + t26449;
  t26459 = t3029*t26171;
  t26460 = -1.*t26176*t26189;
  t26463 = t26459 + t26460;
  t26483 = t7516*t10240*t26205;
  t26486 = t26088*t26205*t26105;
  t26490 = t26483 + t26486;
  t26492 = t3029*t26186;
  t26493 = -1.*t26176*t26417;
  t26496 = t26492 + t26493;
  t26177 = t26171*t26176;
  t26190 = t3029*t26189;
  t26191 = t26177 + t26190;
  t26516 = -1.*t26088;
  t26518 = 1. + t26516;
  t26525 = -1.*t26125;
  t26526 = 1. + t26525;
  t26527 = -0.28121*t26526;
  t26528 = -1.*t26126;
  t26529 = 1. + t26528;
  t26530 = -0.50321*t26529;
  t26531 = -0.19821*t26126;
  t26532 = t26530 + t26531;
  t26533 = t26125*t26532;
  t26534 = 0.305*t26142*t26144;
  t26535 = t26527 + t26533 + t26534;
  t26539 = -0.15121*t26518;
  t26540 = t26088*t26535;
  t26541 = t26539 + t26540;
  t26520 = 0.15121*t26518;
  t26521 = 0.15121*t26088;
  t26524 = 0.15121*t10240;
  t26536 = t10240*t26535;
  t26537 = t26520 + t26521 + t26524 + t26536;
  t26546 = 0.28121*t26142;
  t26548 = t26532*t26142;
  t26549 = -0.305*t26125*t26144;
  t26551 = t26546 + t26548 + t26549;
  t26555 = t7516*t26541;
  t26558 = -1.*t26537*t26105;
  t26559 = t26555 + t26558;
  t26538 = t7516*t26537;
  t26542 = t26541*t26105;
  t26543 = t26538 + t26542;
  t26554 = t26551*t26176;
  t26560 = t3029*t26559;
  t26562 = t26554 + t26560;
  t26564 = t3029*t26551;
  t26565 = -1.*t26176*t26559;
  t26566 = t26564 + t26565;
  t26195 = t26186*t26176;
  t26428 = t3029*t26417;
  t26429 = t26195 + t26428;
  t26544 = -1.*t26441*t26543;
  t26570 = t26453*t26543;
  t26577 = t26441*t26543;
  t26584 = -1.*t26490*t26543;
  t26598 = -1.*t26453*t26543;
  t26603 = t26490*t26543;
  t26633 = -1.*t26551*t26171;
  t26639 = t26551*t26186;
  p_output1[0]=t26429*var2[0] + t26114*t3029*var2[1] + t26191*var2[2];
  p_output1[1]=(t26437*t26490 - 1.*t26435*t26496)*var2[0] + (t26114*t26176*t26435 + t26437*t26441)*var2[1] + (t26437*t26453 - 1.*t26435*t26463)*var2[2];
  p_output1[2]=(t26435*t26490 + t26437*t26496)*var2[0] + (-1.*t26114*t26176*t26437 + t26435*t26441)*var2[1] + (t26435*t26453 + t26437*t26463)*var2[2];
  p_output1[3]=(t26114*(t26191*t26562 + t26463*t26566 + t26570)*t3029 + t26191*(t26544 + t26114*t26176*t26566 - 1.*t26114*t26562*t3029))*var2[0] + (t26429*(-1.*t26191*t26562 - 1.*t26463*t26566 + t26598) + t26191*(t26429*t26562 + t26496*t26566 + t26603))*var2[1] + (t26114*(-1.*t26429*t26562 - 1.*t26496*t26566 + t26584)*t3029 + t26429*(-1.*t26114*t26176*t26566 + t26577 + t26114*t26562*t3029))*var2[2];
  p_output1[4]=(t26453*(t26544 - 1.*t26114*t26559) + t26441*(t26171*t26551 + t26189*t26559 + t26570))*var2[0] + (t26490*(-1.*t26189*t26559 + t26598 + t26633) + t26453*(t26417*t26559 + t26603 + t26639))*var2[1] + (t26490*(t26114*t26559 + t26577) + t26441*(-1.*t26186*t26551 - 1.*t26417*t26559 + t26584))*var2[2];
  p_output1[5]=t26171*(t26088*t26537 - 1.*t10240*t26541)*var2[0] + (t26186*(-1.*t10240*t26186*t26537 - 1.*t26088*t26186*t26541 + t26633) + t26171*(t10240*t26205*t26537 + t26088*t26205*t26541 + t26639))*var2[1] + t26186*(-1.*t26088*t26537 + t10240*t26541)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.15121*t26171 + 0.15121*t26205)*var2[0] + (-0.15121 + t26186*(-1.*t26186*t26535 + t26633) + t26171*(t26205*t26535 + t26639))*var2[1];
  p_output1[10]=(0.28121*t26144 - 0.305*t26126*t26144 + t26144*t26532)*var2[0] + (0.28121*t26126 + 0.305*Power(t26144,2) + t26126*t26532)*var2[2];
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

#include "fRlFoot_vec_ParallelImpact2.hh"

namespace SymFunction
{

void fRlFoot_vec_ParallelImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
