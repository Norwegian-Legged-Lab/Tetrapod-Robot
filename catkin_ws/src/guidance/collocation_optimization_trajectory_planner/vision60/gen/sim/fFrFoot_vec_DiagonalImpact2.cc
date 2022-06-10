/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:06:35 GMT+02:00
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
  double t3727;
  double t3110;
  double t3914;
  double t4418;
  double t4385;
  double t4394;
  double t4423;
  double t379;
  double t4402;
  double t4426;
  double t4452;
  double t3932;
  double t4515;
  double t4531;
  double t4549;
  double t4514;
  double t4630;
  double t4646;
  double t4558;
  double t4566;
  double t4579;
  double t4610;
  double t4611;
  double t4614;
  double t4615;
  double t4617;
  double t4618;
  double t4653;
  double t4657;
  double t4668;
  double t4676;
  double t4680;
  double t4681;
  double t4683;
  double t4691;
  double t4693;
  double t4707;
  double t4713;
  double t4718;
  double t4722;
  double t4731;
  double t4732;
  double t4453;
  double t4590;
  double t4593;
  double t4996;
  double t5003;
  double t5007;
  double t5015;
  double t5020;
  double t5022;
  double t5159;
  double t5160;
  double t5171;
  double t3112;
  double t3934;
  double t3977;
  double t4995;
  double t5013;
  double t5177;
  double t5179;
  double t5259;
  double t5264;
  double t5269;
  double t5287;
  double t5289;
  double t5332;
  double t4965;
  double t4966;
  double t4991;
  double t4992;
  double t5189;
  double t5190;
  double t5365;
  double t5390;
  double t5391;
  double t5396;
  double t5399;
  double t5400;
  double t5201;
  double t5334;
  double t5342;
  double t5395;
  double t5404;
  double t5405;
  double t5409;
  double t5424;
  double t5427;
  double t4605;
  double t4620;
  double t4626;
  double t5348;
  double t5699;
  double t5797;
  double t5828;
  double t5842;
  double t5861;
  double t6224;
  double t6257;
  double t5926;
  double t6108;
  double t6166;
  double t6153;
  double t11087;
  double t11082;
  t3727 = Cos(var1[12]);
  t3110 = Sin(var1[4]);
  t3914 = Cos(var1[4]);
  t4418 = Cos(var1[13]);
  t4385 = Cos(var1[14]);
  t4394 = Sin(var1[13]);
  t4423 = Sin(var1[14]);
  t379 = Sin(var1[12]);
  t4402 = t4385*t4394;
  t4426 = -1.*t4418*t4423;
  t4452 = t4402 + t4426;
  t3932 = Sin(var1[5]);
  t4515 = t4418*t4385;
  t4531 = t4394*t4423;
  t4549 = t4515 + t4531;
  t4514 = Cos(var1[5]);
  t4630 = Cos(var1[3]);
  t4646 = Sin(var1[3]);
  t4558 = t4514*t4549;
  t4566 = t379*t4452*t3932;
  t4579 = t4558 + t4566;
  t4610 = -1.*t4385*t4394;
  t4611 = t4418*t4423;
  t4614 = t4610 + t4611;
  t4615 = t4514*t4614;
  t4617 = t379*t4549*t3932;
  t4618 = t4615 + t4617;
  t4653 = t3914*t379;
  t4657 = t3727*t3110*t3932;
  t4668 = t4653 + t4657;
  t4676 = -1.*t4514*t379*t4452;
  t4680 = t4549*t3932;
  t4681 = t4676 + t4680;
  t4683 = t3727*t3914*t4452;
  t4691 = -1.*t3110*t4579;
  t4693 = t4683 + t4691;
  t4707 = -1.*t4514*t379*t4549;
  t4713 = t4614*t3932;
  t4718 = t4707 + t4713;
  t4722 = t3727*t3914*t4549;
  t4731 = -1.*t3110*t4618;
  t4732 = t4722 + t4731;
  t4453 = t3727*t4452*t3110;
  t4590 = t3914*t4579;
  t4593 = t4453 + t4590;
  t4996 = -0.0641*t4385;
  t5003 = -0.28*t4423;
  t5007 = t4996 + t5003;
  t5015 = -1.*t4385;
  t5020 = 1. + t5015;
  t5022 = 0.075*t5020;
  t5159 = 0.355*t4385;
  t5160 = -0.0641*t4423;
  t5171 = t5022 + t5159 + t5160;
  t3112 = t379*t3110;
  t3934 = -1.*t3727*t3914*t3932;
  t3977 = t3112 + t3934;
  t4995 = -0.325*t4394;
  t5013 = t4418*t5007;
  t5177 = t4394*t5171;
  t5179 = t4995 + t5013 + t5177;
  t5259 = -1.*t4418;
  t5264 = 1. + t5259;
  t5269 = 0.325*t5264;
  t5287 = -1.*t4394*t5007;
  t5289 = t4418*t5171;
  t5332 = t5269 + t5287 + t5289;
  t4965 = -1.*t3727;
  t4966 = 1. + t4965;
  t4991 = -0.1575*t4966;
  t4992 = -0.2255*t3727;
  t5189 = -1.*t379*t5179;
  t5190 = t4991 + t4992 + t5189;
  t5365 = -0.068*t379;
  t5390 = t3727*t5179;
  t5391 = t5365 + t5390;
  t5396 = t4514*t5332;
  t5399 = -1.*t5190*t3932;
  t5400 = t5396 + t5399;
  t5201 = t4514*t5190;
  t5334 = t5332*t3932;
  t5342 = t5201 + t5334;
  t5395 = t5391*t3110;
  t5404 = t3914*t5400;
  t5405 = t5395 + t5404;
  t5409 = t3914*t5391;
  t5424 = -1.*t3110*t5400;
  t5427 = t5409 + t5424;
  t4605 = t3727*t4549*t3110;
  t4620 = t3914*t4618;
  t4626 = t4605 + t4620;
  t5348 = t3727*t4514*t5342;
  t5699 = -1.*t5342*t4681;
  t5797 = t5342*t4681;
  t5828 = -1.*t5342*t4718;
  t5842 = -1.*t3727*t4514*t5342;
  t5861 = t5342*t4718;
  t6224 = -1.*t379*t5391;
  t6257 = t3727*t5391*t4549;
  t5926 = t379*t5391;
  t6108 = -1.*t3727*t5391*t4452;
  t6166 = -1.*t3727*t5391*t4549;
  t6153 = t3727*t5391*t4452;
  t11087 = t5332*t4549;
  t11082 = -1.*t5332*t4614;
  p_output1[0]=t4593*var2[0] + t3977*var2[1] + t4626*var2[2];
  p_output1[1]=(t4630*t4681 - 1.*t4646*t4693)*var2[0] + (t3727*t4514*t4630 - 1.*t4646*t4668)*var2[1] + (t4630*t4718 - 1.*t4646*t4732)*var2[2];
  p_output1[2]=(t4646*t4681 + t4630*t4693)*var2[0] + (t3727*t4514*t4646 + t4630*t4668)*var2[1] + (t4646*t4718 + t4630*t4732)*var2[2];
  p_output1[3]=(t4626*(-1.*t3977*t5405 - 1.*t4668*t5427 + t5842) + t3977*(t4626*t5405 + t4732*t5427 + t5861))*var2[0] + (t4626*(t4593*t5405 + t4693*t5427 + t5797) + t4593*(-1.*t4626*t5405 - 1.*t4732*t5427 + t5828))*var2[1] + (t4593*(t5348 + t3977*t5405 + t4668*t5427) + t3977*(-1.*t4593*t5405 - 1.*t4693*t5427 + t5699))*var2[2];
  p_output1[4]=(t4718*(t3727*t3932*t5400 + t5842 + t6224) + t3727*t4514*(t4618*t5400 + t5861 + t6257))*var2[0] + (t4718*(t4579*t5400 + t5797 + t6153) + t4681*(-1.*t4618*t5400 + t5828 + t6166))*var2[1] + (t4681*(t5348 - 1.*t3727*t3932*t5400 + t5926) + t3727*t4514*(-1.*t4579*t5400 + t5699 + t6108))*var2[2];
  p_output1[5]=(t3727*t4549*(-1.*t3727*t5190 + t6224) + t379*(-1.*t379*t4549*t5190 + t4614*t5332 + t6257))*var2[0] + (t3727*t4549*(t11087 - 1.*t379*t4452*t5190 + t6153) + t3727*t4452*(t11082 + t379*t4549*t5190 + t6166))*var2[1] + (t3727*t4452*(t3727*t5190 + t5926) + t379*(t379*t4452*t5190 - 1.*t4549*t5332 + t6108))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.1575*t4452 + 0.2255*t4614)*var2[0] + (t4614*(t11087 + t4452*t5179) + t4549*(t11082 - 1.*t4549*t5179))*var2[1] - 0.068*t4549*var2[2];
  p_output1[13]=(0.325*t4423 - 1.*t4385*t5007 - 1.*t4423*t5171)*var2[0] + (-0.325*t4385 - 1.*t4423*t5007 + t4385*t5171)*var2[2];
  p_output1[14]=-0.0641*var2[0] - 0.28*var2[2];
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

#include "fFrFoot_vec_DiagonalImpact2.hh"

namespace SymFunction
{

void fFrFoot_vec_DiagonalImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
