/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:31:47 GMT+02:00
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
  double t232;
  double t55;
  double t137;
  double t265;
  double t301;
  double t223;
  double t574;
  double t197;
  double t618;
  double t621;
  double t2859;
  double t3178;
  double t3267;
  double t3387;
  double t3400;
  double t3449;
  double t3515;
  double t3561;
  double t3576;
  double t297;
  double t298;
  double t208;
  double t222;
  double t3467;
  double t3497;
  double t3715;
  double t3717;
  double t3732;
  double t3784;
  double t3791;
  double t3792;
  double t3861;
  double t3884;
  double t3892;
  double t3910;
  double t3923;
  double t3927;
  double t4020;
  double t4024;
  double t4027;
  double t4036;
  double t4037;
  double t4046;
  double t4128;
  double t4134;
  double t4139;
  double t4218;
  double t4279;
  double t4315;
  double t4316;
  double t4317;
  double t4277;
  double t4303;
  double t4307;
  double t4351;
  double t4352;
  double t4370;
  double t4375;
  double t4389;
  double t4399;
  double t4418;
  double t4432;
  double t4440;
  double t4669;
  double t4683;
  double t4717;
  double t4719;
  double t4725;
  double t4726;
  double t4756;
  double t4757;
  double t4758;
  double t4774;
  double t4778;
  double t4780;
  double t4785;
  double t4793;
  double t4794;
  double t4796;
  double t4800;
  double t4801;
  double t4803;
  double t4804;
  double t4805;
  double t4918;
  double t4921;
  double t4931;
  double t4943;
  double t4969;
  double t4980;
  double t5082;
  double t5084;
  double t5105;
  double t5113;
  double t5114;
  double t5126;
  double t5128;
  double t5129;
  double t5149;
  double t5291;
  double t5313;
  double t5317;
  double t5322;
  double t5323;
  double t5327;
  double t5211;
  double t5451;
  double t5454;
  double t5455;
  double t5457;
  double t5458;
  double t5464;
  double t5466;
  double t5473;
  double t5485;
  double t5540;
  double t5541;
  double t5542;
  double t5544;
  double t5545;
  double t5546;
  double t5548;
  double t5550;
  double t5552;
  double t4329;
  double t5632;
  double t5633;
  double t5648;
  double t5650;
  double t5651;
  double t5689;
  double t5690;
  double t5698;
  double t5707;
  double t5716;
  double t5717;
  double t5724;
  double t5739;
  double t5740;
  double t5812;
  double t5830;
  double t5831;
  t232 = Sin(var1[4]);
  t55 = Cos(var1[4]);
  t137 = Sin(var1[12]);
  t265 = Cos(var1[12]);
  t301 = Sin(var1[5]);
  t223 = Cos(var1[5]);
  t574 = Sin(var1[13]);
  t197 = Cos(var1[13]);
  t618 = t265*t55;
  t621 = -1.*t137*t232*t301;
  t2859 = t618 + t621;
  t3178 = Sin(var1[14]);
  t3267 = t223*t574*t232;
  t3387 = t197*t2859;
  t3400 = t3267 + t3387;
  t3449 = Cos(var1[14]);
  t3515 = -1.*t197*t223*t232;
  t3561 = t574*t2859;
  t3576 = t3515 + t3561;
  t297 = -1.*t265;
  t298 = 1. + t297;
  t208 = -1.*t197;
  t222 = 1. + t208;
  t3467 = -1.*t3449;
  t3497 = 1. + t3467;
  t3715 = t55*t223*t137*t574;
  t3717 = -1.*t197*t55*t301;
  t3732 = t3715 + t3717;
  t3784 = t197*t55*t223*t137;
  t3791 = t55*t574*t301;
  t3792 = t3784 + t3791;
  t3861 = -1.*t137*t232;
  t3884 = t265*t55*t301;
  t3892 = t3861 + t3884;
  t3910 = t265*t232;
  t3923 = t55*t137*t301;
  t3927 = t3910 + t3923;
  t4020 = -1.*t55*t223*t574;
  t4024 = t197*t3927;
  t4027 = t4020 + t4024;
  t4036 = -1.*t197*t55*t223;
  t4037 = -1.*t574*t3927;
  t4046 = t4036 + t4037;
  t4128 = t197*t55*t223;
  t4134 = t574*t3927;
  t4139 = t4128 + t4134;
  t4218 = Cos(var1[3]);
  t4279 = Sin(var1[3]);
  t4315 = -1.*t223*t4279;
  t4316 = -1.*t4218*t232*t301;
  t4317 = t4315 + t4316;
  t4277 = t4218*t223*t232;
  t4303 = -1.*t4279*t301;
  t4307 = t4277 + t4303;
  t4351 = -1.*t265*t4218*t55;
  t4352 = -1.*t137*t4317;
  t4370 = t4351 + t4352;
  t4375 = -1.*t574*t4307;
  t4389 = t197*t4370;
  t4399 = t4375 + t4389;
  t4418 = t197*t4307;
  t4432 = t574*t4370;
  t4440 = t4418 + t4432;
  t4669 = t265*t4279*t232;
  t4683 = t55*t137*t4279*t301;
  t4717 = t4669 + t4683;
  t4719 = -1.*t55*t223*t574*t4279;
  t4725 = t197*t4717;
  t4726 = t4719 + t4725;
  t4756 = t197*t55*t223*t4279;
  t4757 = t574*t4717;
  t4758 = t4756 + t4757;
  t4774 = -1.*t223*t4279*t232;
  t4778 = -1.*t4218*t301;
  t4780 = t4774 + t4778;
  t4785 = t4218*t223;
  t4793 = -1.*t4279*t232*t301;
  t4794 = t4785 + t4793;
  t4796 = -1.*t137*t574*t4780;
  t4800 = t197*t4794;
  t4801 = t4796 + t4800;
  t4803 = -1.*t197*t137*t4780;
  t4804 = -1.*t574*t4794;
  t4805 = t4803 + t4804;
  t4918 = t55*t137*t4279;
  t4921 = -1.*t265*t4794;
  t4931 = t4918 + t4921;
  t4943 = -1.*t265*t55*t4279;
  t4969 = -1.*t137*t4794;
  t4980 = t4943 + t4969;
  t5082 = t223*t4279*t232;
  t5084 = t4218*t301;
  t5105 = t5082 + t5084;
  t5113 = -1.*t574*t5105;
  t5114 = t197*t4980;
  t5126 = t5113 + t5114;
  t5128 = -1.*t197*t5105;
  t5129 = -1.*t574*t4980;
  t5149 = t5128 + t5129;
  t5291 = t197*t5105;
  t5313 = t574*t4980;
  t5317 = t5291 + t5313;
  t5322 = -1.*t3178*t5126;
  t5323 = t3449*t5317;
  t5327 = t5322 + t5323;
  t5211 = t3449*t5126;
  t5451 = -1.*t265*t4218*t232;
  t5454 = -1.*t4218*t55*t137*t301;
  t5455 = t5451 + t5454;
  t5457 = t4218*t55*t223*t574;
  t5458 = t197*t5455;
  t5464 = t5457 + t5458;
  t5466 = -1.*t197*t4218*t55*t223;
  t5473 = t574*t5455;
  t5485 = t5466 + t5473;
  t5540 = t223*t4279;
  t5541 = t4218*t232*t301;
  t5542 = t5540 + t5541;
  t5544 = -1.*t137*t574*t4307;
  t5545 = t197*t5542;
  t5546 = t5544 + t5545;
  t5548 = -1.*t197*t137*t4307;
  t5550 = -1.*t574*t5542;
  t5552 = t5548 + t5550;
  t4329 = -1.*t4218*t55*t137;
  t5632 = -1.*t265*t5542;
  t5633 = t4329 + t5632;
  t5648 = t265*t4218*t55;
  t5650 = -1.*t137*t5542;
  t5651 = t5648 + t5650;
  t5689 = -1.*t4218*t223*t232;
  t5690 = t4279*t301;
  t5698 = t5689 + t5690;
  t5707 = -1.*t574*t5698;
  t5716 = t197*t5651;
  t5717 = t5707 + t5716;
  t5724 = -1.*t197*t5698;
  t5739 = -1.*t574*t5651;
  t5740 = t5724 + t5739;
  t5812 = t197*t5698;
  t5830 = t574*t5651;
  t5831 = t5812 + t5830;
  p_output1[0]=1.;
  p_output1[1]=-0.325*t222*t223*t232 - 0.1575*t232*t298*t301 + 0.075*t3178*t3400 + 0.075*t3497*t3576 - 0.0641*(t3400*t3449 + t3178*t3576) + 0.355*(-1.*t3178*t3400 + t3449*t3576) + 0.1575*t137*t55 - 0.2255*(t232*t265*t301 + t137*t55) - 0.325*t2859*t574;
  p_output1[2]=0.075*t3497*t3732 + 0.075*t3178*t3792 + 0.355*(t3449*t3732 - 1.*t3178*t3792) - 0.0641*(t3178*t3732 + t3449*t3792) + 0.2255*t223*t265*t55 + 0.1575*t223*t298*t55 - 0.325*t222*t301*t55 - 0.325*t137*t223*t55*t574;
  p_output1[3]=0.1575*t232*t265 + 0.075*t197*t3178*t3892 - 0.2255*t3927 + 0.1575*t137*t301*t55 - 0.325*t3892*t574 + 0.075*t3497*t3892*t574 - 0.0641*(t197*t3449*t3892 + t3178*t3892*t574) + 0.355*(-1.*t197*t3178*t3892 + t3449*t3892*t574);
  p_output1[4]=-0.325*t197*t3927 + 0.075*t3497*t4027 + 0.075*t3178*t4046 + 0.355*(t3449*t4027 - 1.*t3178*t4046) - 0.0641*(t3178*t4027 + t3449*t4046) + 0.325*t223*t55*t574;
  p_output1[5]=0.075*t3449*t4027 + 0.075*t3178*t4139 + 0.355*(-1.*t3449*t4027 - 1.*t3178*t4139) - 0.0641*(-1.*t3178*t4027 + t3449*t4139);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=0.325*t222*t4307 - 0.1575*t298*t4317 - 0.2255*(t265*t4317 + t4329) + 0.075*t3178*t4399 + 0.075*t3497*t4440 - 0.0641*(t3449*t4399 + t3178*t4440) + 0.355*(-1.*t3178*t4399 + t3449*t4440) - 0.1575*t137*t4218*t55 - 0.325*t4370*t574;
  p_output1[9]=0.1575*t137*t232*t4279 + 0.075*t3178*t4726 + 0.075*t3497*t4758 - 0.0641*(t3449*t4726 + t3178*t4758) + 0.355*(-1.*t3178*t4726 + t3449*t4758) + 0.325*t222*t223*t4279*t55 + 0.1575*t298*t301*t4279*t55 - 0.2255*(t137*t232*t4279 - 1.*t265*t301*t4279*t55) - 0.325*t4717*t574;
  p_output1[10]=-0.2255*t265*t4780 - 0.1575*t298*t4780 + 0.325*t222*t4794 + 0.075*t3497*t4801 + 0.075*t3178*t4805 + 0.355*(t3449*t4801 - 1.*t3178*t4805) - 0.0641*(t3178*t4801 + t3449*t4805) + 0.325*t137*t4780*t574;
  p_output1[11]=-0.1575*t137*t4794 + 0.075*t197*t3178*t4931 - 0.2255*t4980 - 0.1575*t265*t4279*t55 - 0.325*t4931*t574 + 0.075*t3497*t4931*t574 - 0.0641*(t197*t3449*t4931 + t3178*t4931*t574) + 0.355*(-1.*t197*t3178*t4931 + t3449*t4931*t574);
  p_output1[12]=-0.325*t197*t4980 + 0.075*t3497*t5126 + 0.075*t3178*t5149 - 0.0641*(t3178*t5126 + t3449*t5149) + 0.355*(-1.*t3178*t5149 + t5211) + 0.325*t5105*t574;
  p_output1[13]=0.075*t3449*t5126 + 0.075*t3178*t5317 + 0.355*(-1.*t3449*t5126 - 1.*t3178*t5317) - 0.0641*t5327;
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=-0.1575*t298*t4794 + 0.325*t222*t5105 + 0.075*t3178*t5126 + 0.075*t3497*t5317 - 0.0641*(t5211 + t3178*t5317) + 0.355*t5327 - 0.1575*t137*t4279*t55 - 0.2255*(t265*t4794 - 1.*t137*t4279*t55) - 0.325*t4980*t574;
  p_output1[17]=-0.1575*t137*t232*t4218 + 0.075*t3178*t5464 + 0.075*t3497*t5485 - 0.0641*(t3449*t5464 + t3178*t5485) + 0.355*(-1.*t3178*t5464 + t3449*t5485) - 0.325*t222*t223*t4218*t55 - 0.1575*t298*t301*t4218*t55 - 0.2255*(-1.*t137*t232*t4218 + t265*t301*t4218*t55) - 0.325*t5455*t574;
  p_output1[18]=-0.2255*t265*t4307 - 0.1575*t298*t4307 + 0.325*t222*t5542 + 0.075*t3497*t5546 + 0.075*t3178*t5552 + 0.355*(t3449*t5546 - 1.*t3178*t5552) - 0.0641*(t3178*t5546 + t3449*t5552) + 0.325*t137*t4307*t574;
  p_output1[19]=0.1575*t265*t4218*t55 - 0.1575*t137*t5542 + 0.075*t197*t3178*t5633 - 0.2255*t5651 - 0.325*t5633*t574 + 0.075*t3497*t5633*t574 - 0.0641*(t197*t3449*t5633 + t3178*t5633*t574) + 0.355*(-1.*t197*t3178*t5633 + t3449*t5633*t574);
  p_output1[20]=-0.325*t197*t5651 + 0.075*t3497*t5717 + 0.325*t5698*t574 + 0.075*t3178*t5740 + 0.355*(t3449*t5717 - 1.*t3178*t5740) - 0.0641*(t3178*t5717 + t3449*t5740);
  p_output1[21]=0.075*t3449*t5717 + 0.075*t3178*t5831 + 0.355*(-1.*t3449*t5717 - 1.*t3178*t5831) - 0.0641*(-1.*t3178*t5717 + t3449*t5831);
  p_output1[22]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 23, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_FrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_h_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
